/*
** Automatically generated from `hlds_args.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "libs.globals.mih"
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

#line 232 "hlds_args.m"
void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0(
#line 232 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_29,
#line 232 "hlds_args.m"
  MR_Word * hlds__hlds_args__HeadVar__1_1,
#line 232 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2,
#line 232 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__3_3)
#line 232 "hlds_args.m"
{
#line 232 "hlds_args.m"
  {
#line 232 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 232 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastX_27 = (MR_Integer) hlds__hlds_args__HeadVar__2_2;
#line 232 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastY_28 = (MR_Integer) hlds__hlds_args__HeadVar__3_3;

#line 232 "hlds_args.m"
    hlds__hlds_args__succeeded = (hlds__hlds_args__CastX_27 == hlds__hlds_args__CastY_28);
#line 232 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 464 "hlds.hlds_args.c"
      *hlds__hlds_args__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "hlds_args.m"
    else
#line 232 "hlds_args.m"
      {
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 2)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 3)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 4)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 5)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 6)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 7)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 0)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 1)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 2)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 3)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 4)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 5)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 6)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 7)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_20_20;

#line 232 "hlds_args.m"
        {
#line 232 "hlds_args.m"
          mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_20_20, hlds__hlds_args__V_4_4, hlds__hlds_args__V_12_12);
        }
#line 510 "hlds.hlds_args.c"
        hlds__hlds_args__succeeded = (hlds__hlds_args__V_20_20 == (MR_Integer) 0);
#line 232 "hlds_args.m"
        hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 232 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
          *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_20_20;
#line 232 "hlds_args.m"
        else
#line 232 "hlds_args.m"
          {
#line 232 "hlds_args.m"
            MR_Word hlds__hlds_args__V_21_21;

#line 232 "hlds_args.m"
            {
#line 232 "hlds_args.m"
              mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_21_21, hlds__hlds_args__V_5_5, hlds__hlds_args__V_13_13);
            }
#line 530 "hlds.hlds_args.c"
            hlds__hlds_args__succeeded = (hlds__hlds_args__V_21_21 == (MR_Integer) 0);
#line 232 "hlds_args.m"
            hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 232 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
              *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_21_21;
#line 232 "hlds_args.m"
            else
#line 232 "hlds_args.m"
              {
#line 232 "hlds_args.m"
                MR_Word hlds__hlds_args__V_22_22;

#line 232 "hlds_args.m"
                {
#line 232 "hlds_args.m"
                  mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_22_22, hlds__hlds_args__V_6_6, hlds__hlds_args__V_14_14);
                }
#line 550 "hlds.hlds_args.c"
                hlds__hlds_args__succeeded = (hlds__hlds_args__V_22_22 == (MR_Integer) 0);
#line 232 "hlds_args.m"
                hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 232 "hlds_args.m"
                if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                  *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_22_22;
#line 232 "hlds_args.m"
                else
#line 232 "hlds_args.m"
                  {
#line 232 "hlds_args.m"
                    MR_Word hlds__hlds_args__V_23_23;

#line 232 "hlds_args.m"
                    {
#line 232 "hlds_args.m"
                      mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_23_23, hlds__hlds_args__V_7_7, hlds__hlds_args__V_15_15);
                    }
#line 570 "hlds.hlds_args.c"
                    hlds__hlds_args__succeeded = (hlds__hlds_args__V_23_23 == (MR_Integer) 0);
#line 232 "hlds_args.m"
                    hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 232 "hlds_args.m"
                    if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                      *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_23_23;
#line 232 "hlds_args.m"
                    else
#line 232 "hlds_args.m"
                      {
#line 232 "hlds_args.m"
                        MR_Word hlds__hlds_args__V_24_24;

#line 232 "hlds_args.m"
                        {
#line 232 "hlds_args.m"
                          mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_24_24, hlds__hlds_args__V_8_8, hlds__hlds_args__V_16_16);
                        }
#line 590 "hlds.hlds_args.c"
                        hlds__hlds_args__succeeded = (hlds__hlds_args__V_24_24 == (MR_Integer) 0);
#line 232 "hlds_args.m"
                        hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 232 "hlds_args.m"
                        if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                          *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_24_24;
#line 232 "hlds_args.m"
                        else
#line 232 "hlds_args.m"
                          {
#line 232 "hlds_args.m"
                            MR_Word hlds__hlds_args__V_25_25;

#line 232 "hlds_args.m"
                            {
#line 232 "hlds_args.m"
                              mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_25_25, hlds__hlds_args__V_9_9, hlds__hlds_args__V_17_17);
                            }
#line 610 "hlds.hlds_args.c"
                            hlds__hlds_args__succeeded = (hlds__hlds_args__V_25_25 == (MR_Integer) 0);
#line 232 "hlds_args.m"
                            hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 232 "hlds_args.m"
                            if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                              *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_25_25;
#line 232 "hlds_args.m"
                            else
#line 232 "hlds_args.m"
                              {
#line 232 "hlds_args.m"
                                MR_Word hlds__hlds_args__V_26_26;

#line 232 "hlds_args.m"
                                {
#line 232 "hlds_args.m"
                                  mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_26_26, hlds__hlds_args__V_10_10, hlds__hlds_args__V_18_18);
                                }
#line 630 "hlds.hlds_args.c"
                                hlds__hlds_args__succeeded = (hlds__hlds_args__V_26_26 == (MR_Integer) 0);
#line 232 "hlds_args.m"
                                hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 232 "hlds_args.m"
                                if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                                  *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_26_26;
#line 232 "hlds_args.m"
                                else
#line 232 "hlds_args.m"
                                  {
#line 232 "hlds_args.m"
                                    mercury__maybe____Compare____maybe_1_0(hlds__hlds_args__TypeInfo_for_T_29, hlds__hlds_args__HeadVar__1_1, hlds__hlds_args__V_11_11, hlds__hlds_args__V_19_19);
#line 232 "hlds_args.m"
                                    return;
                                  }
#line 232 "hlds_args.m"
                              }
#line 232 "hlds_args.m"
                          }
#line 232 "hlds_args.m"
                      }
#line 232 "hlds_args.m"
                  }
#line 232 "hlds_args.m"
              }
#line 232 "hlds_args.m"
          }
#line 232 "hlds_args.m"
      }
#line 232 "hlds_args.m"
  }
#line 232 "hlds_args.m"
}

#line 232 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0(
#line 232 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_21,
#line 232 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__1_1,
#line 232 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2)
#line 232 "hlds_args.m"
{
#line 232 "hlds_args.m"
  {
#line 232 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 232 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastX_19 = (MR_Integer) hlds__hlds_args__HeadVar__1_1;
#line 232 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastY_20 = (MR_Integer) hlds__hlds_args__HeadVar__2_2;

#line 232 "hlds_args.m"
    hlds__hlds_args__succeeded = (hlds__hlds_args__CastX_19 == hlds__hlds_args__CastY_20);
#line 232 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
      hlds__hlds_args__succeeded = MR_TRUE;
#line 232 "hlds_args.m"
    else
#line 232 "hlds_args.m"
      {
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 2)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 3)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 4)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 5)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 6)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 7)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 2)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 3)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 4)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 5)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 6)));
#line 232 "hlds_args.m"
        MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 7)));

#line 729 "hlds.hlds_args.c"
        {
#line 731 "hlds.hlds_args.c"
          hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_3_3, hlds__hlds_args__V_11_11);
        }
#line 232 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
          {
#line 738 "hlds.hlds_args.c"
            {
#line 740 "hlds.hlds_args.c"
              hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_4_4, hlds__hlds_args__V_12_12);
            }
#line 232 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
              {
#line 747 "hlds.hlds_args.c"
                {
#line 749 "hlds.hlds_args.c"
                  hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_5_5, hlds__hlds_args__V_13_13);
                }
#line 232 "hlds_args.m"
                if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                  {
#line 756 "hlds.hlds_args.c"
                    {
#line 758 "hlds.hlds_args.c"
                      hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_6_6, hlds__hlds_args__V_14_14);
                    }
#line 232 "hlds_args.m"
                    if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                      {
#line 765 "hlds.hlds_args.c"
                        {
#line 767 "hlds.hlds_args.c"
                          hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_7_7, hlds__hlds_args__V_15_15);
                        }
#line 232 "hlds_args.m"
                        if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                          {
#line 774 "hlds.hlds_args.c"
                            {
#line 776 "hlds.hlds_args.c"
                              hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_8_8, hlds__hlds_args__V_16_16);
                            }
#line 232 "hlds_args.m"
                            if (hlds__hlds_args__succeeded)
#line 232 "hlds_args.m"
                              {
#line 783 "hlds.hlds_args.c"
                                {
#line 785 "hlds.hlds_args.c"
                                  hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_9_9, hlds__hlds_args__V_17_17);
                                }
#line 232 "hlds_args.m"
                                if (hlds__hlds_args__succeeded)
#line 790 "hlds.hlds_args.c"
                                  {
#line 792 "hlds.hlds_args.c"
                                    return hlds__hlds_args__succeeded = mercury__maybe____Unify____maybe_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_10_10, hlds__hlds_args__V_18_18);
                                  }
#line 232 "hlds_args.m"
                              }
#line 232 "hlds_args.m"
                          }
#line 232 "hlds_args.m"
                      }
#line 232 "hlds_args.m"
                  }
#line 232 "hlds_args.m"
              }
#line 232 "hlds_args.m"
          }
#line 232 "hlds_args.m"
      }
#line 232 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 232 "hlds_args.m"
  }
#line 232 "hlds_args.m"
}

#line 690 "hlds_args.m"
void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0(
#line 690 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_6,
#line 690 "hlds_args.m"
  MR_Word * hlds__hlds_args__HeadVar__1_1,
#line 690 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2,
#line 690 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__3_3)
#line 690 "hlds_args.m"
{
#line 690 "hlds_args.m"
  {
#line 690 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 690 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar1_4 = hlds__hlds_args__HeadVar__2_2;
#line 690 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar2_5 = hlds__hlds_args__HeadVar__3_3;

#line 690 "hlds_args.m"
    {
#line 690 "hlds_args.m"
      hlds__hlds_args____Compare____proc_arg_vector_1_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__HeadVar__1_1, hlds__hlds_args__Cast_HeadVar1_4, hlds__hlds_args__Cast_HeadVar2_5);
#line 690 "hlds_args.m"
      return;
    }
#line 690 "hlds_args.m"
  }
#line 690 "hlds_args.m"
}

#line 690 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0(
#line 690 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_5,
#line 690 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__1_1,
#line 690 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2)
#line 690 "hlds_args.m"
{
#line 690 "hlds_args.m"
  {
#line 690 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 690 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar1_3 = hlds__hlds_args__HeadVar__1_1;
#line 690 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar2_4 = hlds__hlds_args__HeadVar__2_2;

#line 690 "hlds_args.m"
    {
#line 690 "hlds_args.m"
      return hlds__hlds_args__succeeded = hlds__hlds_args____Unify____proc_arg_vector_1_0(hlds__hlds_args__TypeInfo_for_T_5, hlds__hlds_args__Cast_HeadVar1_3, hlds__hlds_args__Cast_HeadVar2_4);
    }
#line 690 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 690 "hlds_args.m"
  }
#line 690 "hlds_args.m"
}

#line 215 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_to_list_1_f_0(
#line 215 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_4,
#line 215 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 215 "hlds_args.m"
{
#line 708 "hlds_args.m"
  {
#line 708 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 708 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2;

#line 708 "hlds_args.m"
    {
#line 708 "hlds_args.m"
      return hlds__hlds_args__HeadVar__2_2 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_4, hlds__hlds_args__V_3);
    }
#line 708 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 708 "hlds_args.m"
  }
#line 215 "hlds_args.m"
}

#line 207 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_p_0(
#line 207 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 207 "hlds_args.m"
  MR_Word hlds__hlds_args__ETCI_4,
#line 207 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 207 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 207 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));

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
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_4));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 321 "hlds_args.m"
    }
#line 321 "hlds_args.m"
  }
#line 207 "hlds_args.m"
}

#line 205 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_p_0(
#line 205 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 205 "hlds_args.m"
  MR_Word hlds__hlds_args__UTCI_4,
#line 205 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 205 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 205 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));

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
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_4));
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
#line 205 "hlds_args.m"
}

#line 203 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_p_0(
#line 203 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 203 "hlds_args.m"
  MR_Word hlds__hlds_args__ETI_4,
#line 203 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 203 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 203 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));

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
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_4));
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
#line 203 "hlds_args.m"
}

#line 201 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_p_0(
#line 201 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 201 "hlds_args.m"
  MR_Word hlds__hlds_args__UTI_4,
#line 201 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 201 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 201 "hlds_args.m"
{
#line 315 "hlds_args.m"
  {
#line 315 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
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
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_4));
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
#line 201 "hlds_args.m"
}

#line 199 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_p_0(
#line 199 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 199 "hlds_args.m"
  MR_Word hlds__hlds_args__ITCI_4,
#line 199 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 199 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 199 "hlds_args.m"
{
#line 313 "hlds_args.m"
  {
#line 313 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
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
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));

#line 313 "hlds_args.m"
    {
#line 313 "hlds_args.m"
      MR_Word base;
#line 313 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 313 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_4));
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
#line 199 "hlds_args.m"
}

#line 197 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_p_0(
#line 197 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 197 "hlds_args.m"
  MR_Word hlds__hlds_args__ITI_4,
#line 197 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 197 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 197 "hlds_args.m"
{
#line 311 "hlds_args.m"
  {
#line 311 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));

#line 311 "hlds_args.m"
    {
#line 311 "hlds_args.m"
      MR_Word base;
#line 311 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 311 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_4));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 311 "hlds_args.m"
    }
#line 311 "hlds_args.m"
  }
#line 197 "hlds_args.m"
}

#line 195 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_init_0_f_0(
#line 195 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_4)
#line 195 "hlds_args.m"
{
#line 692 "hlds_args.m"
  {
#line 692 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;

#line 692 "hlds_args.m"
    return (MR_Word) &hlds__hlds_args_scalar_common_1[0];
#line 692 "hlds_args.m"
  }
#line 195 "hlds_args.m"
}

#line 174 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_p_0(
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_91,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_92,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_93,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_94,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_95,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_F_96,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_G_97,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__P_13,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__A_14,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__B_15,
#line 174 "hlds_args.m"
  MR_Word hlds__hlds_args__C_16,
#line 174 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_48,
#line 174 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_49,
#line 174 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_50,
#line 174 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_51,
#line 174 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_52,
#line 174 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_53,
#line 174 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_0_54,
#line 174 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc4_55)
#line 174 "hlds_args.m"
{
#line 641 "hlds_args.m"
  {
#line 641 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 0)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 1)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 2)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 3)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 4)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 5)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 6)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 7)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 0)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 1)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 2)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 3)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 4)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 5)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 6)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 7)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 0)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 1)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 2)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 3)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 4)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 5)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 6)));
#line 641 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 7)));
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_58_58;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_59_59;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_63_63;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_64_64;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_65_65;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_66_66;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_67_67;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_68_68;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_69_69;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_70_70;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_71_71;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_72_72;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_73_73;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_74_74;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_75_75;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_76_76;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_77_77;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_78_78;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_79_79;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_80_80;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_81_81;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_82_82;
#line 641 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_83_83;
#line 668 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValA_45;
#line 668 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValB_46;
#line 668 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValC_47;

#line 648 "hlds_args.m"
    {
#line 648 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ITIA_21, hlds__hlds_args__ITIB_29, hlds__hlds_args__ITIC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_0_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_0_50, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, hlds__hlds_args__STATE_VARIABLE_Acc3_0_52, &hlds__hlds_args__STATE_VARIABLE_Acc3_58_58, hlds__hlds_args__STATE_VARIABLE_Acc4_0_54, &hlds__hlds_args__STATE_VARIABLE_Acc4_59_59);
    }
#line 650 "hlds_args.m"
    {
#line 650 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ITCIA_22, hlds__hlds_args__ITCIB_30, hlds__hlds_args__ITCIC_38, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, hlds__hlds_args__STATE_VARIABLE_Acc4_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc4_63_63);
    }
#line 652 "hlds_args.m"
    {
#line 652 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__UTIA_23, hlds__hlds_args__UTIB_31, hlds__hlds_args__UTIC_39, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, &hlds__hlds_args__STATE_VARIABLE_Acc1_64_64, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, &hlds__hlds_args__STATE_VARIABLE_Acc2_65_65, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, &hlds__hlds_args__STATE_VARIABLE_Acc3_66_66, hlds__hlds_args__STATE_VARIABLE_Acc4_63_63, &hlds__hlds_args__STATE_VARIABLE_Acc4_67_67);
    }
#line 654 "hlds_args.m"
    {
#line 654 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ETIA_24, hlds__hlds_args__ETIB_32, hlds__hlds_args__ETIC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_64_64, &hlds__hlds_args__STATE_VARIABLE_Acc1_68_68, hlds__hlds_args__STATE_VARIABLE_Acc2_65_65, &hlds__hlds_args__STATE_VARIABLE_Acc2_69_69, hlds__hlds_args__STATE_VARIABLE_Acc3_66_66, &hlds__hlds_args__STATE_VARIABLE_Acc3_70_70, hlds__hlds_args__STATE_VARIABLE_Acc4_67_67, &hlds__hlds_args__STATE_VARIABLE_Acc4_71_71);
    }
#line 656 "hlds_args.m"
    {
#line 656 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__UTCIA_25, hlds__hlds_args__UTCIB_33, hlds__hlds_args__UTCIC_41, hlds__hlds_args__STATE_VARIABLE_Acc1_68_68, &hlds__hlds_args__STATE_VARIABLE_Acc1_72_72, hlds__hlds_args__STATE_VARIABLE_Acc2_69_69, &hlds__hlds_args__STATE_VARIABLE_Acc2_73_73, hlds__hlds_args__STATE_VARIABLE_Acc3_70_70, &hlds__hlds_args__STATE_VARIABLE_Acc3_74_74, hlds__hlds_args__STATE_VARIABLE_Acc4_71_71, &hlds__hlds_args__STATE_VARIABLE_Acc4_75_75);
    }
#line 658 "hlds_args.m"
    {
#line 658 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ETCIA_26, hlds__hlds_args__ETCIB_34, hlds__hlds_args__ETCIC_42, hlds__hlds_args__STATE_VARIABLE_Acc1_72_72, &hlds__hlds_args__STATE_VARIABLE_Acc1_76_76, hlds__hlds_args__STATE_VARIABLE_Acc2_73_73, &hlds__hlds_args__STATE_VARIABLE_Acc2_77_77, hlds__hlds_args__STATE_VARIABLE_Acc3_74_74, &hlds__hlds_args__STATE_VARIABLE_Acc3_78_78, hlds__hlds_args__STATE_VARIABLE_Acc4_75_75, &hlds__hlds_args__STATE_VARIABLE_Acc4_79_79);
    }
#line 660 "hlds_args.m"
    {
#line 660 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ArgsA_27, hlds__hlds_args__ArgsB_35, hlds__hlds_args__ArgsC_43, hlds__hlds_args__STATE_VARIABLE_Acc1_76_76, &hlds__hlds_args__STATE_VARIABLE_Acc1_80_80, hlds__hlds_args__STATE_VARIABLE_Acc2_77_77, &hlds__hlds_args__STATE_VARIABLE_Acc2_81_81, hlds__hlds_args__STATE_VARIABLE_Acc3_78_78, &hlds__hlds_args__STATE_VARIABLE_Acc3_82_82, hlds__hlds_args__STATE_VARIABLE_Acc4_79_79, &hlds__hlds_args__STATE_VARIABLE_Acc4_83_83);
    }
#line 663 "hlds_args.m"
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_28)) == (MR_mktag((MR_Integer) 1)));
#line 663 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 663 "hlds_args.m"
      {
#line 663 "hlds_args.m"
        hlds__hlds_args__RetValA_45 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_28, (MR_Integer) 0));
#line 664 "hlds_args.m"
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_36)) == (MR_mktag((MR_Integer) 1)));
#line 664 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 664 "hlds_args.m"
          {
#line 664 "hlds_args.m"
            hlds__hlds_args__RetValB_46 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_36, (MR_Integer) 0));
#line 665 "hlds_args.m"
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_44)) == (MR_mktag((MR_Integer) 1)));
#line 665 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 665 "hlds_args.m"
              hlds__hlds_args__RetValC_47 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_44, (MR_Integer) 0));
#line 664 "hlds_args.m"
          }
#line 663 "hlds_args.m"
      }
#line 668 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 667 "hlds_args.m"
      {
#line 667 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_13, (MR_Integer) 1)));

#line 667 "hlds_args.m"
        {
#line 667 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_13), hlds__hlds_args__RetValA_45, hlds__hlds_args__RetValB_46, hlds__hlds_args__RetValC_47, hlds__hlds_args__STATE_VARIABLE_Acc1_80_80, hlds__hlds_args__STATE_VARIABLE_Acc1_49, hlds__hlds_args__STATE_VARIABLE_Acc2_81_81, hlds__hlds_args__STATE_VARIABLE_Acc2_51, hlds__hlds_args__STATE_VARIABLE_Acc3_82_82, hlds__hlds_args__STATE_VARIABLE_Acc3_53, hlds__hlds_args__STATE_VARIABLE_Acc4_83_83, hlds__hlds_args__STATE_VARIABLE_Acc4_55);
#line 667 "hlds_args.m"
          return;
        }
#line 667 "hlds_args.m"
      }
#line 668 "hlds_args.m"
    else
#line 674 "hlds_args.m"
      {
#line 669 "hlds_args.m"
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 669 "hlds_args.m"
          {
#line 670 "hlds_args.m"
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 671 "hlds_args.m"
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "hlds_args.m"
          }
#line 674 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 673 "hlds_args.m"
          {
#line 673 "hlds_args.m"
          }
#line 674 "hlds_args.m"
        else
#line 675 "hlds_args.m"
          {
#line 675 "hlds_args.m"
            {
#line 675 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl4_corresponding3\'/12", (MR_String) "mismatched proc_arg_vectors");
#line 675 "hlds_args.m"
              return;
            }
#line 675 "hlds_args.m"
          }
#line 674 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc4_55 = hlds__hlds_args__STATE_VARIABLE_Acc4_83_83;
#line 674 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc3_53 = hlds__hlds_args__STATE_VARIABLE_Acc3_82_82;
#line 674 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc2_51 = hlds__hlds_args__STATE_VARIABLE_Acc2_81_81;
#line 674 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc1_49 = hlds__hlds_args__STATE_VARIABLE_Acc1_80_80;
#line 674 "hlds_args.m"
      }
#line 641 "hlds_args.m"
  }
#line 174 "hlds_args.m"
}

#line 168 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_p_0(
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_78,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_79,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_80,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_81,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_82,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_F_83,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__P_11,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__A_12,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__B_13,
#line 168 "hlds_args.m"
  MR_Word hlds__hlds_args__C_14,
#line 168 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_45,
#line 168 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_46,
#line 168 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_47,
#line 168 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_48,
#line 168 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_49,
#line 168 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_50)
#line 168 "hlds_args.m"
{
#line 610 "hlds_args.m"
  {
#line 610 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 0)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 1)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 2)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 3)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 4)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 5)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 6)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 7)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 0)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 1)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 2)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 3)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 4)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 5)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 6)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 7)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 0)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 1)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 2)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 3)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 4)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 5)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 6)));
#line 610 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 7)));
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_51_51;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_52_52;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_53_53;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_56_56;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_57_57;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_58_58;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_59_59;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_63_63;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_64_64;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_65_65;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_66_66;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_67_67;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_68_68;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_69_69;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_70_70;
#line 610 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_71_71;
#line 630 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValA_42;
#line 630 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValB_43;
#line 630 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValC_44;

#line 617 "hlds_args.m"
    {
#line 617 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ITIA_18, hlds__hlds_args__ITIB_26, hlds__hlds_args__ITIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_0_45, &hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, hlds__hlds_args__STATE_VARIABLE_Acc2_0_47, &hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, hlds__hlds_args__STATE_VARIABLE_Acc3_0_49, &hlds__hlds_args__STATE_VARIABLE_Acc3_53_53);
    }
#line 618 "hlds_args.m"
    {
#line 618 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ITCIA_19, hlds__hlds_args__ITCIB_27, hlds__hlds_args__ITCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, hlds__hlds_args__STATE_VARIABLE_Acc3_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc3_56_56);
    }
#line 619 "hlds_args.m"
    {
#line 619 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__UTIA_20, hlds__hlds_args__UTIB_28, hlds__hlds_args__UTIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, hlds__hlds_args__STATE_VARIABLE_Acc3_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc3_59_59);
    }
#line 620 "hlds_args.m"
    {
#line 620 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ETIA_21, hlds__hlds_args__ETIB_29, hlds__hlds_args__ETIC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62);
    }
#line 621 "hlds_args.m"
    {
#line 621 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__UTCIA_22, hlds__hlds_args__UTCIB_30, hlds__hlds_args__UTCIC_38, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, &hlds__hlds_args__STATE_VARIABLE_Acc1_63_63, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, &hlds__hlds_args__STATE_VARIABLE_Acc2_64_64, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, &hlds__hlds_args__STATE_VARIABLE_Acc3_65_65);
    }
#line 622 "hlds_args.m"
    {
#line 622 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ETCIA_23, hlds__hlds_args__ETCIB_31, hlds__hlds_args__ETCIC_39, hlds__hlds_args__STATE_VARIABLE_Acc1_63_63, &hlds__hlds_args__STATE_VARIABLE_Acc1_66_66, hlds__hlds_args__STATE_VARIABLE_Acc2_64_64, &hlds__hlds_args__STATE_VARIABLE_Acc2_67_67, hlds__hlds_args__STATE_VARIABLE_Acc3_65_65, &hlds__hlds_args__STATE_VARIABLE_Acc3_68_68);
    }
#line 623 "hlds_args.m"
    {
#line 623 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ArgsA_24, hlds__hlds_args__ArgsB_32, hlds__hlds_args__ArgsC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_66_66, &hlds__hlds_args__STATE_VARIABLE_Acc1_69_69, hlds__hlds_args__STATE_VARIABLE_Acc2_67_67, &hlds__hlds_args__STATE_VARIABLE_Acc2_70_70, hlds__hlds_args__STATE_VARIABLE_Acc3_68_68, &hlds__hlds_args__STATE_VARIABLE_Acc3_71_71);
    }
#line 625 "hlds_args.m"
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_25)) == (MR_mktag((MR_Integer) 1)));
#line 625 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 625 "hlds_args.m"
      {
#line 625 "hlds_args.m"
        hlds__hlds_args__RetValA_42 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_25, (MR_Integer) 0));
#line 626 "hlds_args.m"
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_33)) == (MR_mktag((MR_Integer) 1)));
#line 626 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 626 "hlds_args.m"
          {
#line 626 "hlds_args.m"
            hlds__hlds_args__RetValB_43 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_33, (MR_Integer) 0));
#line 627 "hlds_args.m"
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_41)) == (MR_mktag((MR_Integer) 1)));
#line 627 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 627 "hlds_args.m"
              hlds__hlds_args__RetValC_44 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_41, (MR_Integer) 0));
#line 626 "hlds_args.m"
          }
#line 625 "hlds_args.m"
      }
#line 630 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 629 "hlds_args.m"
      {
#line 629 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_11, (MR_Integer) 1)));

#line 629 "hlds_args.m"
        {
#line 629 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_11), hlds__hlds_args__RetValA_42, hlds__hlds_args__RetValB_43, hlds__hlds_args__RetValC_44, hlds__hlds_args__STATE_VARIABLE_Acc1_69_69, hlds__hlds_args__STATE_VARIABLE_Acc1_46, hlds__hlds_args__STATE_VARIABLE_Acc2_70_70, hlds__hlds_args__STATE_VARIABLE_Acc2_48, hlds__hlds_args__STATE_VARIABLE_Acc3_71_71, hlds__hlds_args__STATE_VARIABLE_Acc3_50);
#line 629 "hlds_args.m"
          return;
        }
#line 629 "hlds_args.m"
      }
#line 630 "hlds_args.m"
    else
#line 636 "hlds_args.m"
      {
#line 631 "hlds_args.m"
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 631 "hlds_args.m"
          {
#line 632 "hlds_args.m"
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 633 "hlds_args.m"
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "hlds_args.m"
          }
#line 636 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 635 "hlds_args.m"
          {
#line 635 "hlds_args.m"
          }
#line 636 "hlds_args.m"
        else
#line 637 "hlds_args.m"
          {
#line 637 "hlds_args.m"
            {
#line 637 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding3\'/10", (MR_String) "mismatched proc_arg_vectors");
#line 637 "hlds_args.m"
              return;
            }
#line 637 "hlds_args.m"
          }
#line 636 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc3_50 = hlds__hlds_args__STATE_VARIABLE_Acc3_71_71;
#line 636 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc2_48 = hlds__hlds_args__STATE_VARIABLE_Acc2_70_70;
#line 636 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc1_46 = hlds__hlds_args__STATE_VARIABLE_Acc1_69_69;
#line 636 "hlds_args.m"
      }
#line 610 "hlds_args.m"
  }
#line 168 "hlds_args.m"
}

#line 162 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_p_0(
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_65,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_66,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_67,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_68,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_69,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__P_9,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__A_10,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__B_11,
#line 162 "hlds_args.m"
  MR_Word hlds__hlds_args__C_12,
#line 162 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_42,
#line 162 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_43,
#line 162 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_44,
#line 162 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_45)
#line 162 "hlds_args.m"
{
#line 580 "hlds_args.m"
  {
#line 580 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 0)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 1)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 2)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 3)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 4)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 5)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 6)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 7)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 0)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 1)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 2)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 3)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 4)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 5)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 6)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 7)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 0)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 1)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 2)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 3)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 4)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 5)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 6)));
#line 580 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 7)));
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_46_46;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_47_47;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_50_50;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_51_51;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_52_52;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_53_53;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
#line 580 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
#line 600 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValA_39;
#line 600 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValB_40;
#line 600 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValC_41;

#line 587 "hlds_args.m"
    {
#line 587 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ITIA_15, hlds__hlds_args__ITIB_23, hlds__hlds_args__ITIC_31, hlds__hlds_args__STATE_VARIABLE_Acc1_0_42, &hlds__hlds_args__STATE_VARIABLE_Acc1_46_46, hlds__hlds_args__STATE_VARIABLE_Acc2_0_44, &hlds__hlds_args__STATE_VARIABLE_Acc2_47_47);
    }
#line 588 "hlds_args.m"
    {
#line 588 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ITCIA_16, hlds__hlds_args__ITCIB_24, hlds__hlds_args__ITCIC_32, hlds__hlds_args__STATE_VARIABLE_Acc1_46_46, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_47_47, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49);
    }
#line 589 "hlds_args.m"
    {
#line 589 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__UTIA_17, hlds__hlds_args__UTIB_25, hlds__hlds_args__UTIC_33, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_51_51);
    }
#line 590 "hlds_args.m"
    {
#line 590 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ETIA_18, hlds__hlds_args__ETIB_26, hlds__hlds_args__ETIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, hlds__hlds_args__STATE_VARIABLE_Acc2_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc2_53_53);
    }
#line 591 "hlds_args.m"
    {
#line 591 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__UTCIA_19, hlds__hlds_args__UTCIB_27, hlds__hlds_args__UTCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55);
    }
#line 592 "hlds_args.m"
    {
#line 592 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ETCIA_20, hlds__hlds_args__ETCIB_28, hlds__hlds_args__ETCIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57);
    }
#line 593 "hlds_args.m"
    {
#line 593 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ArgsA_21, hlds__hlds_args__ArgsB_29, hlds__hlds_args__ArgsC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_59_59);
    }
#line 595 "hlds_args.m"
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_22)) == (MR_mktag((MR_Integer) 1)));
#line 595 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 595 "hlds_args.m"
      {
#line 595 "hlds_args.m"
        hlds__hlds_args__RetValA_39 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_22, (MR_Integer) 0));
#line 596 "hlds_args.m"
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_30)) == (MR_mktag((MR_Integer) 1)));
#line 596 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 596 "hlds_args.m"
          {
#line 596 "hlds_args.m"
            hlds__hlds_args__RetValB_40 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_30, (MR_Integer) 0));
#line 597 "hlds_args.m"
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_38)) == (MR_mktag((MR_Integer) 1)));
#line 597 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 597 "hlds_args.m"
              hlds__hlds_args__RetValC_41 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_38, (MR_Integer) 0));
#line 596 "hlds_args.m"
          }
#line 595 "hlds_args.m"
      }
#line 600 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 599 "hlds_args.m"
      {
#line 599 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_9, (MR_Integer) 1)));

#line 599 "hlds_args.m"
        {
#line 599 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_9), hlds__hlds_args__RetValA_39, hlds__hlds_args__RetValB_40, hlds__hlds_args__RetValC_41, hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc1_43, hlds__hlds_args__STATE_VARIABLE_Acc2_59_59, hlds__hlds_args__STATE_VARIABLE_Acc2_45);
#line 599 "hlds_args.m"
          return;
        }
#line 599 "hlds_args.m"
      }
#line 600 "hlds_args.m"
    else
#line 606 "hlds_args.m"
      {
#line 601 "hlds_args.m"
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 601 "hlds_args.m"
          {
#line 602 "hlds_args.m"
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 603 "hlds_args.m"
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "hlds_args.m"
          }
#line 606 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 605 "hlds_args.m"
          {
#line 605 "hlds_args.m"
          }
#line 606 "hlds_args.m"
        else
#line 607 "hlds_args.m"
          {
#line 607 "hlds_args.m"
            {
#line 607 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl2_corresponding3\'/8", (MR_String) "mismatched proc_arg_vectors");
#line 607 "hlds_args.m"
              return;
            }
#line 607 "hlds_args.m"
          }
#line 606 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc2_45 = hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
#line 606 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc1_43 = hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
#line 606 "hlds_args.m"
      }
#line 580 "hlds_args.m"
  }
#line 162 "hlds_args.m"
}

#line 156 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_p_0(
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_72,
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_73,
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_74,
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_75,
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_76,
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__P_10,
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__A_11,
#line 156 "hlds_args.m"
  MR_Word hlds__hlds_args__B_12,
#line 156 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_36,
#line 156 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_37,
#line 156 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_38,
#line 156 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_39,
#line 156 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_40,
#line 156 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_41)
#line 156 "hlds_args.m"
{
#line 551 "hlds_args.m"
  {
#line 551 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 0)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 1)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 2)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 3)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 4)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 5)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 6)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 7)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 0)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 1)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 2)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 3)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 4)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 5)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 6)));
#line 551 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 7)));
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_42_42;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_43_43;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_44_44;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_45_45;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_46_46;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_47_47;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_50_50;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_51_51;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_52_52;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_53_53;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_56_56;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_57_57;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_58_58;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_59_59;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 551 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;

#line 556 "hlds_args.m"
    {
#line 556 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ITIA_16, hlds__hlds_args__ITIB_24, hlds__hlds_args__STATE_VARIABLE_Acc1_0_36, &hlds__hlds_args__STATE_VARIABLE_Acc1_42_42, hlds__hlds_args__STATE_VARIABLE_Acc2_0_38, &hlds__hlds_args__STATE_VARIABLE_Acc2_43_43, hlds__hlds_args__STATE_VARIABLE_Acc3_0_40, &hlds__hlds_args__STATE_VARIABLE_Acc3_44_44);
    }
#line 557 "hlds_args.m"
    {
#line 557 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ITCIA_17, hlds__hlds_args__ITCIB_25, hlds__hlds_args__STATE_VARIABLE_Acc1_42_42, &hlds__hlds_args__STATE_VARIABLE_Acc1_45_45, hlds__hlds_args__STATE_VARIABLE_Acc2_43_43, &hlds__hlds_args__STATE_VARIABLE_Acc2_46_46, hlds__hlds_args__STATE_VARIABLE_Acc3_44_44, &hlds__hlds_args__STATE_VARIABLE_Acc3_47_47);
    }
#line 558 "hlds_args.m"
    {
#line 558 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__UTIA_18, hlds__hlds_args__UTIB_26, hlds__hlds_args__STATE_VARIABLE_Acc1_45_45, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_46_46, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, hlds__hlds_args__STATE_VARIABLE_Acc3_47_47, &hlds__hlds_args__STATE_VARIABLE_Acc3_50_50);
    }
#line 559 "hlds_args.m"
    {
#line 559 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ETIA_19, hlds__hlds_args__ETIB_27, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, hlds__hlds_args__STATE_VARIABLE_Acc3_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc3_53_53);
    }
#line 560 "hlds_args.m"
    {
#line 560 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__UTCIA_20, hlds__hlds_args__UTCIB_28, hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, hlds__hlds_args__STATE_VARIABLE_Acc3_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc3_56_56);
    }
#line 561 "hlds_args.m"
    {
#line 561 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ETCIA_21, hlds__hlds_args__ETCIB_29, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, hlds__hlds_args__STATE_VARIABLE_Acc3_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc3_59_59);
    }
#line 562 "hlds_args.m"
    {
#line 562 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ArgsA_22, hlds__hlds_args__ArgsB_30, hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62);
    }
#line 567 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValA_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "hlds_args.m"
      if ((hlds__hlds_args__MaybeRetValB_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "hlds_args.m"
        {
#line 576 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc1_37 = hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 576 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc2_39 = hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 576 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc3_41 = hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
#line 576 "hlds_args.m"
        }
#line 567 "hlds_args.m"
      else
#line 572 "hlds_args.m"
        {
#line 574 "hlds_args.m"
          {
#line 574 "hlds_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
#line 574 "hlds_args.m"
            return;
          }
#line 572 "hlds_args.m"
        }
#line 567 "hlds_args.m"
    else
#line 567 "hlds_args.m"
      {
#line 567 "hlds_args.m"
        MR_Box hlds__hlds_args__V_77_77 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_23, (MR_Integer) 0));

#line 567 "hlds_args.m"
        if ((hlds__hlds_args__MaybeRetValB_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "hlds_args.m"
          {
#line 570 "hlds_args.m"
            {
#line 570 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
#line 570 "hlds_args.m"
              return;
            }
#line 568 "hlds_args.m"
          }
#line 567 "hlds_args.m"
        else
#line 564 "hlds_args.m"
          {
#line 564 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValB_33 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_31, (MR_Integer) 0));
#line 566 "hlds_args.m"
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_10, (MR_Integer) 1)));

#line 566 "hlds_args.m"
            {
#line 566 "hlds_args.m"
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_10), hlds__hlds_args__V_77_77, hlds__hlds_args__RetValB_33, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc1_37, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc2_39, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, hlds__hlds_args__STATE_VARIABLE_Acc3_41);
#line 566 "hlds_args.m"
              return;
            }
#line 564 "hlds_args.m"
          }
#line 567 "hlds_args.m"
      }
#line 551 "hlds_args.m"
  }
#line 156 "hlds_args.m"
}

#line 151 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_p_0(
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_70,
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_71,
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_72,
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_73,
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_74,
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__P_9,
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__A_10,
#line 151 "hlds_args.m"
  MR_Word hlds__hlds_args__B_11,
#line 151 "hlds_args.m"
  MR_Word * hlds__hlds_args__C_12,
#line 151 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_44,
#line 151 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_45,
#line 151 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_46,
#line 151 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_47)
#line 151 "hlds_args.m"
{
#line 518 "hlds_args.m"
  {
#line 518 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 0)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 1)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 2)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 3)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 4)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 5)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 6)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 7)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 0)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 1)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 2)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 3)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 4)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 5)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 6)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 7)));
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_31;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_32;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_33;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_34;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_35;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_36;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_37;
#line 518 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_41;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_50_50;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_51_51;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_52_52;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_53_53;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 518 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;

#line 523 "hlds_args.m"
    {
#line 523 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ITIA_15, hlds__hlds_args__ITIB_23, &hlds__hlds_args__ITIC_31, hlds__hlds_args__STATE_VARIABLE_Acc1_0_44, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_0_46, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49);
    }
#line 524 "hlds_args.m"
    {
#line 524 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ITCIA_16, hlds__hlds_args__ITCIB_24, &hlds__hlds_args__ITCIC_32, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_51_51);
    }
#line 525 "hlds_args.m"
    {
#line 525 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__UTIA_17, hlds__hlds_args__UTIB_25, &hlds__hlds_args__UTIC_33, hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, hlds__hlds_args__STATE_VARIABLE_Acc2_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc2_53_53);
    }
#line 526 "hlds_args.m"
    {
#line 526 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ETIA_18, hlds__hlds_args__ETIB_26, &hlds__hlds_args__ETIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55);
    }
#line 527 "hlds_args.m"
    {
#line 527 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__UTCIA_19, hlds__hlds_args__UTCIB_27, &hlds__hlds_args__UTCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57);
    }
#line 528 "hlds_args.m"
    {
#line 528 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ETCIA_20, hlds__hlds_args__ETCIB_28, &hlds__hlds_args__ETCIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_59_59);
    }
#line 529 "hlds_args.m"
    {
#line 529 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ArgsA_21, hlds__hlds_args__ArgsB_29, &hlds__hlds_args__ArgsC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61);
    }
#line 535 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValA_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "hlds_args.m"
      if ((hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "hlds_args.m"
        {
#line 546 "hlds_args.m"
          hlds__hlds_args__MaybeRetValC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc1_45 = hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 544 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc2_47 = hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 544 "hlds_args.m"
        }
#line 535 "hlds_args.m"
      else
#line 540 "hlds_args.m"
        {
#line 542 "hlds_args.m"
          {
#line 542 "hlds_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
#line 542 "hlds_args.m"
            return;
          }
#line 540 "hlds_args.m"
        }
#line 535 "hlds_args.m"
    else
#line 535 "hlds_args.m"
      {
#line 535 "hlds_args.m"
        MR_Box hlds__hlds_args__V_75_75 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_22, (MR_Integer) 0));

#line 535 "hlds_args.m"
        if ((hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "hlds_args.m"
          {
#line 538 "hlds_args.m"
            {
#line 538 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
#line 538 "hlds_args.m"
              return;
            }
#line 536 "hlds_args.m"
          }
#line 535 "hlds_args.m"
        else
#line 531 "hlds_args.m"
          {
#line 531 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValB_39 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_30, (MR_Integer) 0));
#line 531 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValC_40;
#line 533 "hlds_args.m"
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_9, (MR_Integer) 1)));

#line 533 "hlds_args.m"
            {
#line 533 "hlds_args.m"
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_9), hlds__hlds_args__V_75_75, hlds__hlds_args__RetValB_39, &hlds__hlds_args__RetValC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc1_45, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc2_47);
            }
#line 534 "hlds_args.m"
            {
#line 534 "hlds_args.m"
              hlds__hlds_args__MaybeRetValC_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "hlds_args.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_41, 0) = hlds__hlds_args__RetValC_40;
#line 534 "hlds_args.m"
            }
#line 531 "hlds_args.m"
          }
#line 535 "hlds_args.m"
      }
#line 548 "hlds_args.m"
    {
#line 548 "hlds_args.m"
      MR_Word base;
#line 548 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 548 "hlds_args.m"
      *hlds__hlds_args__C_12 = base;
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITIC_31));
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCIC_32));
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTIC_33));
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETIC_34));
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCIC_35));
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCIC_36));
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__ArgsC_37));
#line 548 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValC_41));
#line 548 "hlds_args.m"
    }
#line 518 "hlds_args.m"
  }
#line 151 "hlds_args.m"
}

#line 148 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_all_true_2_p_0(
#line 148 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_14,
#line 148 "hlds_args.m"
  MR_Word hlds__hlds_args__P_3,
#line 148 "hlds_args.m"
  MR_Word hlds__hlds_args__V_4)
#line 148 "hlds_args.m"
{
#line 502 "hlds_args.m"
  {
#line 502 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 0)));
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 1)));
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 2)));
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 3)));
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 4)));
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 5)));
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 6)));
#line 502 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 7)));

#line 504 "hlds_args.m"
    {
#line 504 "hlds_args.m"
      hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ITI_5);
    }
#line 502 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 502 "hlds_args.m"
      {
#line 505 "hlds_args.m"
        {
#line 505 "hlds_args.m"
          hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ITCI_6);
        }
#line 502 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 502 "hlds_args.m"
          {
#line 506 "hlds_args.m"
            {
#line 506 "hlds_args.m"
              hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__UTI_7);
            }
#line 502 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 502 "hlds_args.m"
              {
#line 507 "hlds_args.m"
                {
#line 507 "hlds_args.m"
                  hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ETI_8);
                }
#line 502 "hlds_args.m"
                if (hlds__hlds_args__succeeded)
#line 502 "hlds_args.m"
                  {
#line 508 "hlds_args.m"
                    {
#line 508 "hlds_args.m"
                      hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__UTCI_9);
                    }
#line 502 "hlds_args.m"
                    if (hlds__hlds_args__succeeded)
#line 502 "hlds_args.m"
                      {
#line 509 "hlds_args.m"
                        {
#line 509 "hlds_args.m"
                          hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ETCI_10);
                        }
#line 502 "hlds_args.m"
                        if (hlds__hlds_args__succeeded)
#line 502 "hlds_args.m"
                          {
#line 510 "hlds_args.m"
                            {
#line 510 "hlds_args.m"
                              hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__Args_11);
                            }
#line 502 "hlds_args.m"
                            if (hlds__hlds_args__succeeded)
#line 514 "hlds_args.m"
                              {
#line 514 "hlds_args.m"
                                if ((hlds__hlds_args__MaybeRetVal_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "hlds_args.m"
                                  hlds__hlds_args__succeeded = MR_TRUE;
#line 514 "hlds_args.m"
                                else
#line 512 "hlds_args.m"
                                  {
#line 512 "hlds_args.m"
                                    MR_Box hlds__hlds_args__RetVal_13 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_12, (MR_Integer) 0));
#line 513 "hlds_args.m"
                                    MR_bool MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_3, (MR_Integer) 1)));

#line 513 "hlds_args.m"
                                    {
#line 513 "hlds_args.m"
                                      return hlds__hlds_args__succeeded = hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_3), hlds__hlds_args__RetVal_13);
                                    }
#line 512 "hlds_args.m"
                                  }
#line 514 "hlds_args.m"
                              }
#line 502 "hlds_args.m"
                          }
#line 502 "hlds_args.m"
                      }
#line 502 "hlds_args.m"
                  }
#line 502 "hlds_args.m"
              }
#line 502 "hlds_args.m"
          }
#line 502 "hlds_args.m"
      }
#line 502 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 502 "hlds_args.m"
  }
#line 148 "hlds_args.m"
}

#line 143 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_4_p_0(
#line 143 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_44,
#line 143 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_U_45,
#line 143 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_V_46,
#line 143 "hlds_args.m"
  MR_Word hlds__hlds_args__P_5,
#line 143 "hlds_args.m"
  MR_Word hlds__hlds_args__A_6,
#line 143 "hlds_args.m"
  MR_Word hlds__hlds_args__B_7,
#line 143 "hlds_args.m"
  MR_Word * hlds__hlds_args__C_8)
#line 143 "hlds_args.m"
{
#line 469 "hlds_args.m"
  {
#line 469 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 0)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 1)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 2)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 3)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 4)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 5)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 6)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 7)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 0)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 1)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 2)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 3)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 4)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 5)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 6)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 7)));
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_25;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_26;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_27;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_28;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_29;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_30;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_31;
#line 469 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_35;

#line 474 "hlds_args.m"
    {
#line 474 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ITIA_9, hlds__hlds_args__ITIB_17, &hlds__hlds_args__ITIC_25);
    }
#line 475 "hlds_args.m"
    {
#line 475 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ITCIA_10, hlds__hlds_args__ITCIB_18, &hlds__hlds_args__ITCIC_26);
    }
#line 476 "hlds_args.m"
    {
#line 476 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__UTIA_11, hlds__hlds_args__UTIB_19, &hlds__hlds_args__UTIC_27);
    }
#line 477 "hlds_args.m"
    {
#line 477 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ETIA_12, hlds__hlds_args__ETIB_20, &hlds__hlds_args__ETIC_28);
    }
#line 478 "hlds_args.m"
    {
#line 478 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__UTCIA_13, hlds__hlds_args__UTCIB_21, &hlds__hlds_args__UTCIC_29);
    }
#line 479 "hlds_args.m"
    {
#line 479 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ETCIA_14, hlds__hlds_args__ETCIB_22, &hlds__hlds_args__ETCIC_30);
    }
#line 480 "hlds_args.m"
    {
#line 480 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ArgsA_15, hlds__hlds_args__ArgsB_23, &hlds__hlds_args__ArgsC_31);
    }
#line 486 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "hlds_args.m"
      if ((hlds__hlds_args__MaybeRetValB_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "hlds_args.m"
        hlds__hlds_args__MaybeRetValC_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "hlds_args.m"
      else
#line 491 "hlds_args.m"
        {
#line 493 "hlds_args.m"
          {
#line 493 "hlds_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
#line 493 "hlds_args.m"
            return;
          }
#line 491 "hlds_args.m"
        }
#line 486 "hlds_args.m"
    else
#line 486 "hlds_args.m"
      {
#line 486 "hlds_args.m"
        MR_Box hlds__hlds_args__V_47_47 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_16, (MR_Integer) 0));

#line 486 "hlds_args.m"
        if ((hlds__hlds_args__MaybeRetValB_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "hlds_args.m"
          {
#line 489 "hlds_args.m"
            {
#line 489 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
#line 489 "hlds_args.m"
              return;
            }
#line 487 "hlds_args.m"
          }
#line 486 "hlds_args.m"
        else
#line 482 "hlds_args.m"
          {
#line 482 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValB_33 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_24, (MR_Integer) 0));
#line 482 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValC_34;
#line 484 "hlds_args.m"
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_5, (MR_Integer) 1)));

#line 484 "hlds_args.m"
            {
#line 484 "hlds_args.m"
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_5), hlds__hlds_args__V_47_47, hlds__hlds_args__RetValB_33, &hlds__hlds_args__RetValC_34);
            }
#line 485 "hlds_args.m"
            {
#line 485 "hlds_args.m"
              hlds__hlds_args__MaybeRetValC_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "hlds_args.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_35, 0) = hlds__hlds_args__RetValC_34;
#line 485 "hlds_args.m"
            }
#line 482 "hlds_args.m"
          }
#line 486 "hlds_args.m"
      }
#line 499 "hlds_args.m"
    {
#line 499 "hlds_args.m"
      MR_Word base;
#line 499 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 499 "hlds_args.m"
      *hlds__hlds_args__C_8 = base;
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITIC_25));
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCIC_26));
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTIC_27));
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETIC_28));
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCIC_29));
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCIC_30));
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__ArgsC_31));
#line 499 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValC_35));
#line 499 "hlds_args.m"
    }
#line 469 "hlds_args.m"
  }
#line 143 "hlds_args.m"
}

#line 140 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_3_p_0(
#line 140 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 140 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_U_26,
#line 140 "hlds_args.m"
  MR_Word hlds__hlds_args__Pred_4,
#line 140 "hlds_args.m"
  MR_Word hlds__hlds_args__V0_5,
#line 140 "hlds_args.m"
  MR_Word * hlds__hlds_args__V_6)
#line 140 "hlds_args.m"
{
#line 448 "hlds_args.m"
  {
#line 448 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 0)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 1)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 2)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 3)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 4)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 5)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 6)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 7)));
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI_15;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI_16;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI_17;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI_18;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI_19;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI_20;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_21;
#line 448 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_24;

#line 451 "hlds_args.m"
    {
#line 451 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ITI0_7, &hlds__hlds_args__ITI_15);
    }
#line 452 "hlds_args.m"
    {
#line 452 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ITCI0_8, &hlds__hlds_args__ITCI_16);
    }
#line 453 "hlds_args.m"
    {
#line 453 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__UTI0_9, &hlds__hlds_args__UTI_17);
    }
#line 454 "hlds_args.m"
    {
#line 454 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ETI0_10, &hlds__hlds_args__ETI_18);
    }
#line 455 "hlds_args.m"
    {
#line 455 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__UTCI0_11, &hlds__hlds_args__UTCI_19);
    }
#line 456 "hlds_args.m"
    {
#line 456 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ETCI0_12, &hlds__hlds_args__ETCI_20);
    }
#line 457 "hlds_args.m"
    {
#line 457 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__Args0_13, &hlds__hlds_args__Args_21);
    }
#line 462 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetVal0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "hlds_args.m"
      hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "hlds_args.m"
    else
#line 459 "hlds_args.m"
      {
#line 459 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal0_14, (MR_Integer) 0));
#line 459 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal_23;
#line 460 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Pred_4, (MR_Integer) 1)));

#line 460 "hlds_args.m"
        {
#line 460 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__Pred_4), hlds__hlds_args__RetVal0_22, &hlds__hlds_args__RetVal_23);
        }
#line 461 "hlds_args.m"
        {
#line 461 "hlds_args.m"
          hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_24, 0) = hlds__hlds_args__RetVal_23;
#line 461 "hlds_args.m"
        }
#line 459 "hlds_args.m"
      }
#line 466 "hlds_args.m"
    {
#line 466 "hlds_args.m"
      MR_Word base;
#line 466 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 466 "hlds_args.m"
      *hlds__hlds_args__V_6 = base;
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_15));
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_16));
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_17));
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_18));
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_19));
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_20));
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__Args_21));
#line 466 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_24));
#line 466 "hlds_args.m"
    }
#line 448 "hlds_args.m"
  }
#line 140 "hlds_args.m"
}

#line 137 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_map_2_f_0(
#line 137 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 137 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_U_26,
#line 137 "hlds_args.m"
  MR_Word hlds__hlds_args__Func_4,
#line 137 "hlds_args.m"
  MR_Word hlds__hlds_args__V0_5)
#line 137 "hlds_args.m"
{
#line 427 "hlds_args.m"
  {
#line 427 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 0)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 1)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 2)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 3)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 4)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 5)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 6)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 7)));
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI_15;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI_16;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI_17;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI_18;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI_19;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI_20;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_21;
#line 427 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_24;

#line 430 "hlds_args.m"
    {
#line 430 "hlds_args.m"
      hlds__hlds_args__ITI_15 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ITI0_7);
    }
#line 431 "hlds_args.m"
    {
#line 431 "hlds_args.m"
      hlds__hlds_args__ITCI_16 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ITCI0_8);
    }
#line 432 "hlds_args.m"
    {
#line 432 "hlds_args.m"
      hlds__hlds_args__UTI_17 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__UTI0_9);
    }
#line 433 "hlds_args.m"
    {
#line 433 "hlds_args.m"
      hlds__hlds_args__ETI_18 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ETI0_10);
    }
#line 434 "hlds_args.m"
    {
#line 434 "hlds_args.m"
      hlds__hlds_args__UTCI_19 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__UTCI0_11);
    }
#line 435 "hlds_args.m"
    {
#line 435 "hlds_args.m"
      hlds__hlds_args__ETCI_20 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ETCI0_12);
    }
#line 436 "hlds_args.m"
    {
#line 436 "hlds_args.m"
      hlds__hlds_args__Args_21 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__Args0_13);
    }
#line 441 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetVal0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "hlds_args.m"
      hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "hlds_args.m"
    else
#line 438 "hlds_args.m"
      {
#line 438 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal0_14, (MR_Integer) 0));
#line 438 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal_23;
#line 439 "hlds_args.m"
        MR_Box MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Func_4, (MR_Integer) 1)));

#line 439 "hlds_args.m"
        {
#line 439 "hlds_args.m"
          hlds__hlds_args__RetVal_23 = hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__Func_4), hlds__hlds_args__RetVal0_22);
        }
#line 440 "hlds_args.m"
        {
#line 440 "hlds_args.m"
          hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 440 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_24, 0) = hlds__hlds_args__RetVal_23;
#line 440 "hlds_args.m"
        }
#line 438 "hlds_args.m"
      }
#line 445 "hlds_args.m"
    {
#line 445 "hlds_args.m"
      hlds__hlds_args__V_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 0) = ((MR_Box) (hlds__hlds_args__ITI_15));
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 1) = ((MR_Box) (hlds__hlds_args__ITCI_16));
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 2) = ((MR_Box) (hlds__hlds_args__UTI_17));
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 3) = ((MR_Box) (hlds__hlds_args__ETI_18));
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 4) = ((MR_Box) (hlds__hlds_args__UTCI_19));
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 5) = ((MR_Box) (hlds__hlds_args__ETCI_20));
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 6) = ((MR_Box) (hlds__hlds_args__Args_21));
#line 445 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_24));
#line 445 "hlds_args.m"
    }
#line 427 "hlds_args.m"
    return hlds__hlds_args__V_6;
#line 427 "hlds_args.m"
  }
#line 137 "hlds_args.m"
}

#line 125 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(
#line 125 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_26,
#line 125 "hlds_args.m"
  MR_Word hlds__hlds_args__Vector_4,
#line 125 "hlds_args.m"
  MR_Word * hlds__hlds_args__FuncArgs_5,
#line 125 "hlds_args.m"
  MR_Box * hlds__hlds_args__FuncRetVal_6)
#line 125 "hlds_args.m"
{
#line 411 "hlds_args.m"
  {
#line 411 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 0)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 1)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 2)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 3)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 4)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 5)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 6)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 7)));
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15;
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16;
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17;
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18;
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19;
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20;
#line 411 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21;

#line 417 "hlds_args.m"
    {
#line 417 "hlds_args.m"
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__OrigArgs_13));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "hlds_args.m"
    }
#line 417 "hlds_args.m"
    {
#line 417 "hlds_args.m"
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_12));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 417 "hlds_args.m"
    }
#line 416 "hlds_args.m"
    {
#line 416 "hlds_args.m"
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_11));
#line 416 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 416 "hlds_args.m"
    }
#line 416 "hlds_args.m"
    {
#line 416 "hlds_args.m"
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_10));
#line 416 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 416 "hlds_args.m"
    }
#line 416 "hlds_args.m"
    {
#line 416 "hlds_args.m"
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_9));
#line 416 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 416 "hlds_args.m"
    }
#line 415 "hlds_args.m"
    {
#line 415 "hlds_args.m"
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_8));
#line 415 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 415 "hlds_args.m"
    }
#line 415 "hlds_args.m"
    {
#line 415 "hlds_args.m"
      hlds__hlds_args__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_15_15, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_7));
#line 415 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_15_15, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 415 "hlds_args.m"
    }
#line 415 "hlds_args.m"
    {
#line 415 "hlds_args.m"
      *hlds__hlds_args__FuncArgs_5 = mercury__list__condense_1_f_0(hlds__hlds_args__TypeInfo_for_T_26, hlds__hlds_args__V_15_15);
    }
#line 420 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "hlds_args.m"
      {
#line 422 "hlds_args.m"
        {
#line 422 "hlds_args.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_to_func_args\'/3", (MR_String) "predicate");
#line 422 "hlds_args.m"
          return;
        }
#line 421 "hlds_args.m"
      }
#line 420 "hlds_args.m"
    else
#line 419 "hlds_args.m"
      *hlds__hlds_args__FuncRetVal_6 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_14, (MR_Integer) 0));
#line 411 "hlds_args.m"
  }
#line 125 "hlds_args.m"
}

#line 119 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_member_2_p_0(
#line 119 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_13,
#line 119 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_3,
#line 119 "hlds_args.m"
  MR_Box hlds__hlds_args__Var_4)
#line 119 "hlds_args.m"
{
#line 397 "hlds_args.m"
  {
#line 397 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 0)));
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 1)));
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 2)));
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 3)));
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 4)));
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 5)));
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 6)));
#line 397 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 7)));

#line 401 "hlds_args.m"
    {
#line 401 "hlds_args.m"
      hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__OrigArgs_11);
    }
#line 402 "hlds_args.m"
    if (!(hlds__hlds_args__succeeded))
#line 402 "hlds_args.m"
      {
#line 402 "hlds_args.m"
        {
#line 402 "hlds_args.m"
          MR_Box hlds__hlds_args__V_14_14;

#line 402 "hlds_args.m"
          hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValue_12)) == (MR_mktag((MR_Integer) 1)));
#line 402 "hlds_args.m"
          if (hlds__hlds_args__succeeded)
#line 402 "hlds_args.m"
            {
#line 402 "hlds_args.m"
              hlds__hlds_args__V_14_14 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_12, (MR_Integer) 0));
#line 402 "hlds_args.m"
              {
#line 402 "hlds_args.m"
                hlds__hlds_args__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__V_14_14);
              }
#line 402 "hlds_args.m"
            }
#line 402 "hlds_args.m"
        }
#line 402 "hlds_args.m"
        if (!(hlds__hlds_args__succeeded))
#line 402 "hlds_args.m"
          {
#line 403 "hlds_args.m"
            {
#line 403 "hlds_args.m"
              hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__InstanceTypeInfos_5);
            }
#line 402 "hlds_args.m"
            if (!(hlds__hlds_args__succeeded))
#line 402 "hlds_args.m"
              {
#line 404 "hlds_args.m"
                {
#line 404 "hlds_args.m"
                  hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__InstanceTypeClassInfos_6);
                }
#line 402 "hlds_args.m"
                if (!(hlds__hlds_args__succeeded))
#line 402 "hlds_args.m"
                  {
#line 405 "hlds_args.m"
                    {
#line 405 "hlds_args.m"
                      hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__UnivTypeInfos_7);
                    }
#line 402 "hlds_args.m"
                    if (!(hlds__hlds_args__succeeded))
#line 402 "hlds_args.m"
                      {
#line 406 "hlds_args.m"
                        {
#line 406 "hlds_args.m"
                          hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__ExistTypeInfos_8);
                        }
#line 402 "hlds_args.m"
                        if (!(hlds__hlds_args__succeeded))
#line 402 "hlds_args.m"
                          {
#line 407 "hlds_args.m"
                            {
#line 407 "hlds_args.m"
                              hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__UnivTypeClassInfos_9);
                            }
#line 402 "hlds_args.m"
                            if (!(hlds__hlds_args__succeeded))
#line 408 "hlds_args.m"
                              {
#line 408 "hlds_args.m"
                                return hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__ExistTypeClassInfos_10);
                              }
#line 402 "hlds_args.m"
                          }
#line 402 "hlds_args.m"
                      }
#line 402 "hlds_args.m"
                  }
#line 402 "hlds_args.m"
              }
#line 402 "hlds_args.m"
          }
#line 402 "hlds_args.m"
      }
#line 397 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 397 "hlds_args.m"
  }
#line 119 "hlds_args.m"
}

#line 112 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0(
#line 112 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 112 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_4,
#line 112 "hlds_args.m"
  MR_Word * hlds__hlds_args__PolyArgs_5,
#line 112 "hlds_args.m"
  MR_Word * hlds__hlds_args__NonPolyArgs_6)
#line 112 "hlds_args.m"
{
#line 382 "hlds_args.m"
  {
#line 382 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 0)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 1)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 2)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 3)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 4)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 5)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 6)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 7)));
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16;
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17;
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18;
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19;
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20;
#line 382 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21;

#line 388 "hlds_args.m"
    {
#line 388 "hlds_args.m"
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_12));
#line 388 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "hlds_args.m"
    }
#line 387 "hlds_args.m"
    {
#line 387 "hlds_args.m"
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_11));
#line 387 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 387 "hlds_args.m"
    }
#line 387 "hlds_args.m"
    {
#line 387 "hlds_args.m"
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_10));
#line 387 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 387 "hlds_args.m"
    }
#line 387 "hlds_args.m"
    {
#line 387 "hlds_args.m"
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_9));
#line 387 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 387 "hlds_args.m"
    }
#line 386 "hlds_args.m"
    {
#line 386 "hlds_args.m"
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_8));
#line 386 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 386 "hlds_args.m"
    }
#line 386 "hlds_args.m"
    {
#line 386 "hlds_args.m"
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_7));
#line 386 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 386 "hlds_args.m"
    }
#line 386 "hlds_args.m"
    {
#line 386 "hlds_args.m"
      mercury__list__condense_2_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__V_16_16, hlds__hlds_args__PolyArgs_5);
    }
#line 392 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "hlds_args.m"
      *hlds__hlds_args__NonPolyArgs_6 = hlds__hlds_args__OrigArgs_13;
#line 392 "hlds_args.m"
    else
#line 390 "hlds_args.m"
      {
#line 390 "hlds_args.m"
        MR_Box hlds__hlds_args__RetValue_15 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_14, (MR_Integer) 0));
#line 390 "hlds_args.m"
        MR_Word hlds__hlds_args__V_23_23;

#line 391 "hlds_args.m"
        {
#line 391 "hlds_args.m"
          hlds__hlds_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 0) = hlds__hlds_args__RetValue_15;
#line 391 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "hlds_args.m"
        }
#line 391 "hlds_args.m"
        {
#line 391 "hlds_args.m"
          *hlds__hlds_args__NonPolyArgs_6 = mercury__list__f_43_43_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__OrigArgs_13, hlds__hlds_args__V_23_23);
        }
#line 390 "hlds_args.m"
      }
#line 382 "hlds_args.m"
  }
#line 112 "hlds_args.m"
}

#line 104 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_p_0(
#line 104 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 104 "hlds_args.m"
  MR_Word hlds__hlds_args__Renaming_4,
#line 104 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec0_5,
#line 104 "hlds_args.m"
  MR_Word * hlds__hlds_args__ArgVec_6)
#line 104 "hlds_args.m"
{
#line 353 "hlds_args.m"
  {
#line 353 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 0)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 1)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 2)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 3)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 4)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 5)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 6)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 7)));
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_15;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_16;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_17;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_18;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_19;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_20;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_21;
#line 353 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_24;

#line 357 "hlds_args.m"
    {
#line 357 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__InstanceTypeInfos0_7, &hlds__hlds_args__InstanceTypeInfos_15);
    }
#line 358 "hlds_args.m"
    {
#line 358 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__InstanceTypeClassInfos0_8, &hlds__hlds_args__InstanceTypeClassInfos_16);
    }
#line 360 "hlds_args.m"
    {
#line 360 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__UnivTypeInfos0_9, &hlds__hlds_args__UnivTypeInfos_17);
    }
#line 361 "hlds_args.m"
    {
#line 361 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__ExistTypeInfos0_10, &hlds__hlds_args__ExistTypeInfos_18);
    }
#line 362 "hlds_args.m"
    {
#line 362 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__UnivTypeClassInfos0_11, &hlds__hlds_args__UnivTypeClassInfos_19);
    }
#line 364 "hlds_args.m"
    {
#line 364 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__ExistTypeClassInfos0_12, &hlds__hlds_args__ExistTypeClassInfos_20);
    }
#line 366 "hlds_args.m"
    {
#line 366 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__OrigArgs0_13, &hlds__hlds_args__OrigArgs_21);
    }
#line 374 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "hlds_args.m"
      hlds__hlds_args__MaybeRetValue_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 374 "hlds_args.m"
    else
#line 368 "hlds_args.m"
      {
#line 368 "hlds_args.m"
        MR_Box hlds__hlds_args__Value0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue0_14, (MR_Integer) 0));
#line 371 "hlds_args.m"
        MR_Box hlds__hlds_args__Value_23;

#line 369 "hlds_args.m"
        {
#line 369 "hlds_args.m"
          hlds__hlds_args__succeeded = mercury__map__search_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__Value0_22, &hlds__hlds_args__Value_23);
        }
#line 371 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 370 "hlds_args.m"
          {
#line 370 "hlds_args.m"
            hlds__hlds_args__MaybeRetValue_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "hlds_args.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_24, 0) = hlds__hlds_args__Value_23;
#line 370 "hlds_args.m"
          }
#line 371 "hlds_args.m"
        else
#line 372 "hlds_args.m"
          hlds__hlds_args__MaybeRetValue_24 = hlds__hlds_args__MaybeRetValue0_14;
#line 368 "hlds_args.m"
      }
#line 378 "hlds_args.m"
    {
#line 378 "hlds_args.m"
      MR_Word base;
#line 378 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 378 "hlds_args.m"
      *hlds__hlds_args__ArgVec_6 = base;
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_15));
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_16));
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_17));
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_18));
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_19));
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_20));
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__OrigArgs_21));
#line 378 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValue_24));
#line 378 "hlds_args.m"
    }
#line 353 "hlds_args.m"
  }
#line 104 "hlds_args.m"
}

#line 99 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_set_1_f_0(
#line 99 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_6,
#line 99 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_3)
#line 99 "hlds_args.m"
{
#line 349 "hlds_args.m"
  {
#line 349 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 349 "hlds_args.m"
    MR_Word hlds__hlds_args__Set_4;
#line 349 "hlds_args.m"
    MR_Word hlds__hlds_args__List_5;

#line 350 "hlds_args.m"
    {
#line 350 "hlds_args.m"
      hlds__hlds_args__List_5 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__ArgVec_3);
    }
#line 351 "hlds_args.m"
    {
#line 351 "hlds_args.m"
      return hlds__hlds_args__Set_4 = mercury__set__from_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__List_5);
    }
#line 349 "hlds_args.m"
    return hlds__hlds_args__Set_4;
#line 349 "hlds_args.m"
  }
#line 99 "hlds_args.m"
}

#line 95 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_list_1_f_0(
#line 95 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 95 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_3)
#line 95 "hlds_args.m"
{
#line 329 "hlds_args.m"
  {
#line 329 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__List_4;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 0)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 1)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 2)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 3)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 4)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 5)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 6)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 7)));
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__RetValue_14;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22;
#line 329 "hlds_args.m"
    MR_Word hlds__hlds_args__V_23_23;

#line 336 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "hlds_args.m"
      hlds__hlds_args__RetValue_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "hlds_args.m"
    else
#line 334 "hlds_args.m"
      {
#line 334 "hlds_args.m"
        MR_Box hlds__hlds_args__Value_13 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_12, (MR_Integer) 0));

#line 335 "hlds_args.m"
        {
#line 335 "hlds_args.m"
          hlds__hlds_args__RetValue_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__RetValue_14, 0) = hlds__hlds_args__Value_13;
#line 335 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__RetValue_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "hlds_args.m"
        }
#line 334 "hlds_args.m"
      }
#line 347 "hlds_args.m"
    {
#line 347 "hlds_args.m"
      hlds__hlds_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 0) = ((MR_Box) (hlds__hlds_args__RetValue_14));
#line 347 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "hlds_args.m"
    }
#line 346 "hlds_args.m"
    {
#line 346 "hlds_args.m"
      hlds__hlds_args__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_22_22, 0) = ((MR_Box) (hlds__hlds_args__OrigArgs_11));
#line 346 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_22_22, 1) = ((MR_Box) (hlds__hlds_args__V_23_23));
#line 346 "hlds_args.m"
    }
#line 345 "hlds_args.m"
    {
#line 345 "hlds_args.m"
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_10));
#line 345 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 345 "hlds_args.m"
    }
#line 344 "hlds_args.m"
    {
#line 344 "hlds_args.m"
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_9));
#line 344 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 344 "hlds_args.m"
    }
#line 343 "hlds_args.m"
    {
#line 343 "hlds_args.m"
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_8));
#line 343 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 343 "hlds_args.m"
    }
#line 342 "hlds_args.m"
    {
#line 342 "hlds_args.m"
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_7));
#line 342 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 342 "hlds_args.m"
    }
#line 341 "hlds_args.m"
    {
#line 341 "hlds_args.m"
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_6));
#line 341 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 341 "hlds_args.m"
    }
#line 340 "hlds_args.m"
    {
#line 340 "hlds_args.m"
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_5));
#line 340 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 340 "hlds_args.m"
    }
#line 340 "hlds_args.m"
    {
#line 340 "hlds_args.m"
      mercury__list__condense_2_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__V_16_16, &hlds__hlds_args__List_4);
    }
#line 329 "hlds_args.m"
    return hlds__hlds_args__List_4;
#line 329 "hlds_args.m"
  }
#line 95 "hlds_args.m"
}

#line 81 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_p_0(
#line 81 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 81 "hlds_args.m"
  MR_Word hlds__hlds_args__RV_4,
#line 81 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 81 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 81 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));

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
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__RV_4));
#line 325 "hlds_args.m"
    }
#line 325 "hlds_args.m"
  }
#line 81 "hlds_args.m"
}

#line 79 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_user_args_3_p_0(
#line 79 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 79 "hlds_args.m"
  MR_Word hlds__hlds_args__UA_4,
#line 79 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 79 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 79 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));

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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__UA_4));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 323 "hlds_args.m"
    }
#line 323 "hlds_args.m"
  }
#line 79 "hlds_args.m"
}

#line 77 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_p_0(
#line 77 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 77 "hlds_args.m"
  MR_Word hlds__hlds_args__ETCI_4,
#line 77 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 77 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 77 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));

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
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_4));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 321 "hlds_args.m"
    }
#line 321 "hlds_args.m"
  }
#line 77 "hlds_args.m"
}

#line 75 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_p_0(
#line 75 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 75 "hlds_args.m"
  MR_Word hlds__hlds_args__UTCI_4,
#line 75 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 75 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 75 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));

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
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_4));
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
#line 75 "hlds_args.m"
}

#line 73 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_p_0(
#line 73 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 73 "hlds_args.m"
  MR_Word hlds__hlds_args__ETI_4,
#line 73 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 73 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 73 "hlds_args.m"
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
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));

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
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_4));
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
#line 73 "hlds_args.m"
}

#line 71 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_p_0(
#line 71 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 71 "hlds_args.m"
  MR_Word hlds__hlds_args__UTI_4,
#line 71 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 71 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 71 "hlds_args.m"
{
#line 315 "hlds_args.m"
  {
#line 315 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
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
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_4));
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
#line 71 "hlds_args.m"
}

#line 69 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0(
#line 69 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 69 "hlds_args.m"
  MR_Word hlds__hlds_args__ITCI_4,
#line 69 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 69 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 69 "hlds_args.m"
{
#line 313 "hlds_args.m"
  {
#line 313 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
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
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));

#line 313 "hlds_args.m"
    {
#line 313 "hlds_args.m"
      MR_Word base;
#line 313 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 313 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_4));
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
#line 69 "hlds_args.m"
}

#line 67 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0(
#line 67 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 67 "hlds_args.m"
  MR_Word hlds__hlds_args__ITI_4,
#line 67 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 67 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 67 "hlds_args.m"
{
#line 311 "hlds_args.m"
  {
#line 311 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 311 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));

#line 311 "hlds_args.m"
    {
#line 311 "hlds_args.m"
      MR_Word base;
#line 311 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 311 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_4));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 311 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 311 "hlds_args.m"
    }
#line 311 "hlds_args.m"
  }
#line 67 "hlds_args.m"
}

#line 65 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_f_0(
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
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));
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
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));

#line 308 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 308 "hlds_args.m"
  }
#line 65 "hlds_args.m"
}

#line 64 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_user_args_1_f_0(
#line 64 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 64 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 64 "hlds_args.m"
{
#line 306 "hlds_args.m"
  {
#line 306 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
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
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 306 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 306 "hlds_args.m"
  }
#line 64 "hlds_args.m"
}

#line 62 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_f_0(
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
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
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
hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_f_0(
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
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
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
hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_f_0(
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
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
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

#line 59 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_f_0(
#line 59 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 59 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 59 "hlds_args.m"
{
#line 298 "hlds_args.m"
  {
#line 298 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
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
#line 59 "hlds_args.m"
}

#line 57 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_f_0(
#line 57 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 57 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 57 "hlds_args.m"
{
#line 296 "hlds_args.m"
  {
#line 296 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
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
#line 57 "hlds_args.m"
}

#line 55 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_f_0(
#line 55 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 55 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 55 "hlds_args.m"
{
#line 294 "hlds_args.m"
  {
#line 294 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 294 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 294 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 294 "hlds_args.m"
  }
#line 55 "hlds_args.m"
}

#line 48 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_init_2_f_0(
#line 48 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_16,
#line 48 "hlds_args.m"
  MR_Word hlds__hlds_args__PredOrFunc_4,
#line 48 "hlds_args.m"
  MR_Word hlds__hlds_args__Args0_5)
#line 48 "hlds_args.m"
{
#line 279 "hlds_args.m"
  {
#line 279 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 279 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgVec_6;
#line 279 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_7;
#line 279 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_8;

#line 284 "hlds_args.m"
#line 284 "hlds_args.m"
    switch (hlds__hlds_args__PredOrFunc_4) {
#line 284 "hlds_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 284 "hlds_args.m"
      case (MR_Integer) 1:
#line 285 "hlds_args.m"
        {
#line 285 "hlds_args.m"
          MR_Box hlds__hlds_args__RetVal_9;

#line 286 "hlds_args.m"
          {
#line 286 "hlds_args.m"
            mercury__list__det_split_last_3_p_0(hlds__hlds_args__TypeInfo_for_T_16, hlds__hlds_args__Args0_5, &hlds__hlds_args__Args_7, &hlds__hlds_args__RetVal_9);
          }
#line 287 "hlds_args.m"
          {
#line 287 "hlds_args.m"
            hlds__hlds_args__MaybeRetVal_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "hlds_args.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_8, 0) = hlds__hlds_args__RetVal_9;
#line 287 "hlds_args.m"
          }
#line 285 "hlds_args.m"
        }
#line 284 "hlds_args.m"
        break;
#line 284 "hlds_args.m"
      case (MR_Integer) 0:
#line 281 "hlds_args.m"
        {
#line 282 "hlds_args.m"
          hlds__hlds_args__Args_7 = hlds__hlds_args__Args0_5;
#line 283 "hlds_args.m"
          hlds__hlds_args__MaybeRetVal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "hlds_args.m"
        }
#line 284 "hlds_args.m"
        break;
#line 284 "hlds_args.m"
    }
#line 289 "hlds_args.m"
    {
#line 289 "hlds_args.m"
      hlds__hlds_args__ArgVec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 6) = ((MR_Box) (hlds__hlds_args__Args_7));
#line 289 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_8));
#line 289 "hlds_args.m"
    }
#line 279 "hlds_args.m"
    return hlds__hlds_args__ArgVec_6;
#line 279 "hlds_args.m"
  }
#line 48 "hlds_args.m"
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
