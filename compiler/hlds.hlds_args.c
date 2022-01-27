/*
** Automatically generated from `hlds_args.m'
** by the Mercury compiler,
** version rotd-2016-09-27
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__maybe__pti_maybe_1__pseudo_1;

static const MR_PseudoTypeInfo hlds__hlds_args__hlds__hlds_args__field_types_proc_arg_vector_1_0[8];

static const MR_ConstString hlds__hlds_args__hlds__hlds_args__field_names_proc_arg_vector_1_0[8];

static const MR_DuFunctorDesc hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0;

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0[1];

static const MR_DuPtagLayout hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1[1];

static const MR_Integer hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1[1];

static MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box * hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3,
  MR_Box hlds__hlds_args__wrapper_arg_4);

static MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box * hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3,
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_args__hlds__hlds_args__type_ctor_info_poly_arg_vector_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0[1] = {
  &hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0
};

static const MR_DuPtagLayout hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1[1] = {
  &hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0
};

static const MR_Integer hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;

    {
      hlds__hlds_args__succeeded = hlds__hlds_args____Unify____poly_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), ((MR_Word) hlds__hlds_args__wrapper_arg_2), ((MR_Word) hlds__hlds_args__wrapper_arg_3));
    }
    return hlds__hlds_args__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box * hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3,
  MR_Box hlds__hlds_args__wrapper_arg_4)
{
  {
    MR_Word hlds__hlds_args__conv0_HeadVar__1_1;

    {
      hlds__hlds_args____Compare____poly_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), &hlds__hlds_args__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_args__wrapper_arg_3), ((MR_Word) hlds__hlds_args__wrapper_arg_4));
    }
    *hlds__hlds_args__wrapper_arg_2 = ((MR_Box) (hlds__hlds_args__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;

    {
      hlds__hlds_args__succeeded = hlds__hlds_args____Unify____proc_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), ((MR_Word) hlds__hlds_args__wrapper_arg_2), ((MR_Word) hlds__hlds_args__wrapper_arg_3));
    }
    return hlds__hlds_args__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0_10001(
  MR_Box hlds__hlds_args__wrapper_arg_1,
  MR_Box * hlds__hlds_args__wrapper_arg_2,
  MR_Box hlds__hlds_args__wrapper_arg_3,
  MR_Box hlds__hlds_args__wrapper_arg_4)
{
  {
    MR_Word hlds__hlds_args__conv0_HeadVar__1_1;

    {
      hlds__hlds_args____Compare____proc_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), &hlds__hlds_args__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_args__wrapper_arg_3), ((MR_Word) hlds__hlds_args__wrapper_arg_4));
    }
    *hlds__hlds_args__wrapper_arg_2 = ((MR_Box) (hlds__hlds_args__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_29,
  MR_Word * hlds__hlds_args__HeadVar__1_1,
  MR_Word hlds__hlds_args__HeadVar__2_2,
  MR_Word hlds__hlds_args__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Integer hlds__hlds_args__CastX_27 = (MR_Integer) hlds__hlds_args__HeadVar__2_2;
    MR_Integer hlds__hlds_args__CastY_28 = (MR_Integer) hlds__hlds_args__HeadVar__3_3;

    hlds__hlds_args__succeeded = (hlds__hlds_args__CastX_27 == hlds__hlds_args__CastY_28);
    if (hlds__hlds_args__succeeded)
      *hlds__hlds_args__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word hlds__hlds_args__V_20_20;

        {
          mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_20_20, hlds__hlds_args__V_4_4, hlds__hlds_args__V_12_12);
        }
        hlds__hlds_args__succeeded = (hlds__hlds_args__V_20_20 == (MR_Integer) 0);
        hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
        if (hlds__hlds_args__succeeded)
          *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_20_20;
        else
          {
            MR_Word hlds__hlds_args__V_21_21;

            {
              mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_21_21, hlds__hlds_args__V_5_5, hlds__hlds_args__V_13_13);
            }
            hlds__hlds_args__succeeded = (hlds__hlds_args__V_21_21 == (MR_Integer) 0);
            hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
            if (hlds__hlds_args__succeeded)
              *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_21_21;
            else
              {
                MR_Word hlds__hlds_args__V_22_22;

                {
                  mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_22_22, hlds__hlds_args__V_6_6, hlds__hlds_args__V_14_14);
                }
                hlds__hlds_args__succeeded = (hlds__hlds_args__V_22_22 == (MR_Integer) 0);
                hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
                if (hlds__hlds_args__succeeded)
                  *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_22_22;
                else
                  {
                    MR_Word hlds__hlds_args__V_23_23;

                    {
                      mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_23_23, hlds__hlds_args__V_7_7, hlds__hlds_args__V_15_15);
                    }
                    hlds__hlds_args__succeeded = (hlds__hlds_args__V_23_23 == (MR_Integer) 0);
                    hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
                    if (hlds__hlds_args__succeeded)
                      *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_23_23;
                    else
                      {
                        MR_Word hlds__hlds_args__V_24_24;

                        {
                          mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_24_24, hlds__hlds_args__V_8_8, hlds__hlds_args__V_16_16);
                        }
                        hlds__hlds_args__succeeded = (hlds__hlds_args__V_24_24 == (MR_Integer) 0);
                        hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
                        if (hlds__hlds_args__succeeded)
                          *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_24_24;
                        else
                          {
                            MR_Word hlds__hlds_args__V_25_25;

                            {
                              mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_25_25, hlds__hlds_args__V_9_9, hlds__hlds_args__V_17_17);
                            }
                            hlds__hlds_args__succeeded = (hlds__hlds_args__V_25_25 == (MR_Integer) 0);
                            hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
                            if (hlds__hlds_args__succeeded)
                              *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_25_25;
                            else
                              {
                                MR_Word hlds__hlds_args__V_26_26;

                                {
                                  mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_26_26, hlds__hlds_args__V_10_10, hlds__hlds_args__V_18_18);
                                }
                                hlds__hlds_args__succeeded = (hlds__hlds_args__V_26_26 == (MR_Integer) 0);
                                hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
                                if (hlds__hlds_args__succeeded)
                                  *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_26_26;
                                else
                                  {
                                    mercury__maybe____Compare____maybe_1_0(hlds__hlds_args__TypeInfo_for_T_29, hlds__hlds_args__HeadVar__1_1, hlds__hlds_args__V_11_11, hlds__hlds_args__V_19_19);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_21,
  MR_Word hlds__hlds_args__HeadVar__1_1,
  MR_Word hlds__hlds_args__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Integer hlds__hlds_args__CastX_19 = (MR_Integer) hlds__hlds_args__HeadVar__1_1;
    MR_Integer hlds__hlds_args__CastY_20 = (MR_Integer) hlds__hlds_args__HeadVar__2_2;

    hlds__hlds_args__succeeded = (hlds__hlds_args__CastX_19 == hlds__hlds_args__CastY_20);
    if (hlds__hlds_args__succeeded)
      hlds__hlds_args__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 7)));

        {
          hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_3_3, hlds__hlds_args__V_11_11);
        }
        if (hlds__hlds_args__succeeded)
          {
            {
              hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_4_4, hlds__hlds_args__V_12_12);
            }
            if (hlds__hlds_args__succeeded)
              {
                {
                  hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_5_5, hlds__hlds_args__V_13_13);
                }
                if (hlds__hlds_args__succeeded)
                  {
                    {
                      hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_6_6, hlds__hlds_args__V_14_14);
                    }
                    if (hlds__hlds_args__succeeded)
                      {
                        {
                          hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_7_7, hlds__hlds_args__V_15_15);
                        }
                        if (hlds__hlds_args__succeeded)
                          {
                            {
                              hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_8_8, hlds__hlds_args__V_16_16);
                            }
                            if (hlds__hlds_args__succeeded)
                              {
                                {
                                  hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_9_9, hlds__hlds_args__V_17_17);
                                }
                                if (hlds__hlds_args__succeeded)
                                  {
                                    hlds__hlds_args__succeeded = mercury__maybe____Unify____maybe_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_10_10, hlds__hlds_args__V_18_18);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__hlds_args__succeeded;
  }
}

void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_6,
  MR_Word * hlds__hlds_args__HeadVar__1_1,
  MR_Word hlds__hlds_args__HeadVar__2_2,
  MR_Word hlds__hlds_args__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__Cast_HeadVar1_4 = hlds__hlds_args__HeadVar__2_2;
    MR_Word hlds__hlds_args__Cast_HeadVar2_5 = hlds__hlds_args__HeadVar__3_3;

    {
      hlds__hlds_args____Compare____proc_arg_vector_1_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__HeadVar__1_1, hlds__hlds_args__Cast_HeadVar1_4, hlds__hlds_args__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_5,
  MR_Word hlds__hlds_args__HeadVar__1_1,
  MR_Word hlds__hlds_args__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__Cast_HeadVar1_3 = hlds__hlds_args__HeadVar__1_1;
    MR_Word hlds__hlds_args__Cast_HeadVar2_4 = hlds__hlds_args__HeadVar__2_2;

    {
      hlds__hlds_args__succeeded = hlds__hlds_args____Unify____proc_arg_vector_1_0(hlds__hlds_args__TypeInfo_for_T_5, hlds__hlds_args__Cast_HeadVar1_3, hlds__hlds_args__Cast_HeadVar2_4);
    }
    return hlds__hlds_args__succeeded;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_to_list_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_4,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2;

    {
      hlds__hlds_args__HeadVar__2_2 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_4, hlds__hlds_args__V_3);
    }
    return hlds__hlds_args__HeadVar__2_2;
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
  MR_Word hlds__hlds_args__ETCI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
    }
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
  MR_Word hlds__hlds_args__UTCI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
    }
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
  MR_Word hlds__hlds_args__ETI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
    }
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
  MR_Word hlds__hlds_args__UTI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
    }
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
  MR_Word hlds__hlds_args__ITCI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
    }
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
  MR_Word hlds__hlds_args__ITI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_init_0_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_4)
{
  {
    MR_bool hlds__hlds_args__succeeded;

    return (MR_Word) &hlds__hlds_args_scalar_common_1[0];
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_A_91,
  MR_Word hlds__hlds_args__TypeInfo_for_B_92,
  MR_Word hlds__hlds_args__TypeInfo_for_C_93,
  MR_Word hlds__hlds_args__TypeInfo_for_D_94,
  MR_Word hlds__hlds_args__TypeInfo_for_E_95,
  MR_Word hlds__hlds_args__TypeInfo_for_F_96,
  MR_Word hlds__hlds_args__TypeInfo_for_G_97,
  MR_Word hlds__hlds_args__P_13,
  MR_Word hlds__hlds_args__A_14,
  MR_Word hlds__hlds_args__B_15,
  MR_Word hlds__hlds_args__C_16,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_48,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_49,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_50,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_51,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_52,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_53,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_0_54,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc4_55)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIA_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValA_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIB_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIC_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIC_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsC_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValC_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 7)));
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_58_58;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_59_59;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_63_63;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_64_64;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_65_65;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_66_66;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_67_67;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_68_68;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_69_69;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_70_70;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_71_71;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_72_72;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_73_73;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_74_74;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_75_75;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_76_76;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_77_77;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_78_78;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_79_79;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_80_80;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_81_81;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_82_82;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_83_83;
    MR_Box hlds__hlds_args__RetValA_45;
    MR_Box hlds__hlds_args__RetValB_46;
    MR_Box hlds__hlds_args__RetValC_47;

    {
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ITIA_21, hlds__hlds_args__ITIB_29, hlds__hlds_args__ITIC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_0_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_0_50, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, hlds__hlds_args__STATE_VARIABLE_Acc3_0_52, &hlds__hlds_args__STATE_VARIABLE_Acc3_58_58, hlds__hlds_args__STATE_VARIABLE_Acc4_0_54, &hlds__hlds_args__STATE_VARIABLE_Acc4_59_59);
    }
    {
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ITCIA_22, hlds__hlds_args__ITCIB_30, hlds__hlds_args__ITCIC_38, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, hlds__hlds_args__STATE_VARIABLE_Acc4_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc4_63_63);
    }
    {
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__UTIA_23, hlds__hlds_args__UTIB_31, hlds__hlds_args__UTIC_39, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, &hlds__hlds_args__STATE_VARIABLE_Acc1_64_64, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, &hlds__hlds_args__STATE_VARIABLE_Acc2_65_65, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, &hlds__hlds_args__STATE_VARIABLE_Acc3_66_66, hlds__hlds_args__STATE_VARIABLE_Acc4_63_63, &hlds__hlds_args__STATE_VARIABLE_Acc4_67_67);
    }
    {
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ETIA_24, hlds__hlds_args__ETIB_32, hlds__hlds_args__ETIC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_64_64, &hlds__hlds_args__STATE_VARIABLE_Acc1_68_68, hlds__hlds_args__STATE_VARIABLE_Acc2_65_65, &hlds__hlds_args__STATE_VARIABLE_Acc2_69_69, hlds__hlds_args__STATE_VARIABLE_Acc3_66_66, &hlds__hlds_args__STATE_VARIABLE_Acc3_70_70, hlds__hlds_args__STATE_VARIABLE_Acc4_67_67, &hlds__hlds_args__STATE_VARIABLE_Acc4_71_71);
    }
    {
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__UTCIA_25, hlds__hlds_args__UTCIB_33, hlds__hlds_args__UTCIC_41, hlds__hlds_args__STATE_VARIABLE_Acc1_68_68, &hlds__hlds_args__STATE_VARIABLE_Acc1_72_72, hlds__hlds_args__STATE_VARIABLE_Acc2_69_69, &hlds__hlds_args__STATE_VARIABLE_Acc2_73_73, hlds__hlds_args__STATE_VARIABLE_Acc3_70_70, &hlds__hlds_args__STATE_VARIABLE_Acc3_74_74, hlds__hlds_args__STATE_VARIABLE_Acc4_71_71, &hlds__hlds_args__STATE_VARIABLE_Acc4_75_75);
    }
    {
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ETCIA_26, hlds__hlds_args__ETCIB_34, hlds__hlds_args__ETCIC_42, hlds__hlds_args__STATE_VARIABLE_Acc1_72_72, &hlds__hlds_args__STATE_VARIABLE_Acc1_76_76, hlds__hlds_args__STATE_VARIABLE_Acc2_73_73, &hlds__hlds_args__STATE_VARIABLE_Acc2_77_77, hlds__hlds_args__STATE_VARIABLE_Acc3_74_74, &hlds__hlds_args__STATE_VARIABLE_Acc3_78_78, hlds__hlds_args__STATE_VARIABLE_Acc4_75_75, &hlds__hlds_args__STATE_VARIABLE_Acc4_79_79);
    }
    {
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ArgsA_27, hlds__hlds_args__ArgsB_35, hlds__hlds_args__ArgsC_43, hlds__hlds_args__STATE_VARIABLE_Acc1_76_76, &hlds__hlds_args__STATE_VARIABLE_Acc1_80_80, hlds__hlds_args__STATE_VARIABLE_Acc2_77_77, &hlds__hlds_args__STATE_VARIABLE_Acc2_81_81, hlds__hlds_args__STATE_VARIABLE_Acc3_78_78, &hlds__hlds_args__STATE_VARIABLE_Acc3_82_82, hlds__hlds_args__STATE_VARIABLE_Acc4_79_79, &hlds__hlds_args__STATE_VARIABLE_Acc4_83_83);
    }
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_28)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_args__succeeded)
      {
        hlds__hlds_args__RetValA_45 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_28, (MR_Integer) 0));
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_36)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_args__succeeded)
          {
            hlds__hlds_args__RetValB_46 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_36, (MR_Integer) 0));
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_44)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_args__succeeded)
              hlds__hlds_args__RetValC_47 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_44, (MR_Integer) 0));
          }
      }
    if (hlds__hlds_args__succeeded)
      {
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_13, (MR_Integer) 1)));

        {
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_13), hlds__hlds_args__RetValA_45, hlds__hlds_args__RetValB_46, hlds__hlds_args__RetValC_47, hlds__hlds_args__STATE_VARIABLE_Acc1_80_80, hlds__hlds_args__STATE_VARIABLE_Acc1_49, hlds__hlds_args__STATE_VARIABLE_Acc2_81_81, hlds__hlds_args__STATE_VARIABLE_Acc2_51, hlds__hlds_args__STATE_VARIABLE_Acc3_82_82, hlds__hlds_args__STATE_VARIABLE_Acc3_53, hlds__hlds_args__STATE_VARIABLE_Acc4_83_83, hlds__hlds_args__STATE_VARIABLE_Acc4_55);
        }
      }
    else
      {
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__hlds_args__succeeded)
          {
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__hlds_args__succeeded)
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (hlds__hlds_args__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl4_corresponding3\'/12", (MR_String) "mismatched proc_arg_vectors");
              return;
            }
          }
        *hlds__hlds_args__STATE_VARIABLE_Acc4_55 = hlds__hlds_args__STATE_VARIABLE_Acc4_83_83;
        *hlds__hlds_args__STATE_VARIABLE_Acc3_53 = hlds__hlds_args__STATE_VARIABLE_Acc3_82_82;
        *hlds__hlds_args__STATE_VARIABLE_Acc2_51 = hlds__hlds_args__STATE_VARIABLE_Acc2_81_81;
        *hlds__hlds_args__STATE_VARIABLE_Acc1_49 = hlds__hlds_args__STATE_VARIABLE_Acc1_80_80;
      }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_A_78,
  MR_Word hlds__hlds_args__TypeInfo_for_B_79,
  MR_Word hlds__hlds_args__TypeInfo_for_C_80,
  MR_Word hlds__hlds_args__TypeInfo_for_D_81,
  MR_Word hlds__hlds_args__TypeInfo_for_E_82,
  MR_Word hlds__hlds_args__TypeInfo_for_F_83,
  MR_Word hlds__hlds_args__P_11,
  MR_Word hlds__hlds_args__A_12,
  MR_Word hlds__hlds_args__B_13,
  MR_Word hlds__hlds_args__C_14,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_45,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_46,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_47,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_48,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_49,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_50)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsA_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIC_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsC_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 7)));
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_51_51;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_52_52;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_53_53;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_56_56;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_57_57;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_58_58;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_59_59;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_63_63;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_64_64;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_65_65;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_66_66;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_67_67;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_68_68;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_69_69;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_70_70;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_71_71;
    MR_Box hlds__hlds_args__RetValA_42;
    MR_Box hlds__hlds_args__RetValB_43;
    MR_Box hlds__hlds_args__RetValC_44;

    {
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ITIA_18, hlds__hlds_args__ITIB_26, hlds__hlds_args__ITIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_0_45, &hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, hlds__hlds_args__STATE_VARIABLE_Acc2_0_47, &hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, hlds__hlds_args__STATE_VARIABLE_Acc3_0_49, &hlds__hlds_args__STATE_VARIABLE_Acc3_53_53);
    }
    {
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ITCIA_19, hlds__hlds_args__ITCIB_27, hlds__hlds_args__ITCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, hlds__hlds_args__STATE_VARIABLE_Acc3_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc3_56_56);
    }
    {
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__UTIA_20, hlds__hlds_args__UTIB_28, hlds__hlds_args__UTIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, hlds__hlds_args__STATE_VARIABLE_Acc3_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc3_59_59);
    }
    {
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ETIA_21, hlds__hlds_args__ETIB_29, hlds__hlds_args__ETIC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62);
    }
    {
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__UTCIA_22, hlds__hlds_args__UTCIB_30, hlds__hlds_args__UTCIC_38, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, &hlds__hlds_args__STATE_VARIABLE_Acc1_63_63, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, &hlds__hlds_args__STATE_VARIABLE_Acc2_64_64, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, &hlds__hlds_args__STATE_VARIABLE_Acc3_65_65);
    }
    {
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ETCIA_23, hlds__hlds_args__ETCIB_31, hlds__hlds_args__ETCIC_39, hlds__hlds_args__STATE_VARIABLE_Acc1_63_63, &hlds__hlds_args__STATE_VARIABLE_Acc1_66_66, hlds__hlds_args__STATE_VARIABLE_Acc2_64_64, &hlds__hlds_args__STATE_VARIABLE_Acc2_67_67, hlds__hlds_args__STATE_VARIABLE_Acc3_65_65, &hlds__hlds_args__STATE_VARIABLE_Acc3_68_68);
    }
    {
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ArgsA_24, hlds__hlds_args__ArgsB_32, hlds__hlds_args__ArgsC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_66_66, &hlds__hlds_args__STATE_VARIABLE_Acc1_69_69, hlds__hlds_args__STATE_VARIABLE_Acc2_67_67, &hlds__hlds_args__STATE_VARIABLE_Acc2_70_70, hlds__hlds_args__STATE_VARIABLE_Acc3_68_68, &hlds__hlds_args__STATE_VARIABLE_Acc3_71_71);
    }
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_25)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_args__succeeded)
      {
        hlds__hlds_args__RetValA_42 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_25, (MR_Integer) 0));
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_33)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_args__succeeded)
          {
            hlds__hlds_args__RetValB_43 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_33, (MR_Integer) 0));
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_41)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_args__succeeded)
              hlds__hlds_args__RetValC_44 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_41, (MR_Integer) 0));
          }
      }
    if (hlds__hlds_args__succeeded)
      {
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_11, (MR_Integer) 1)));

        {
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_11), hlds__hlds_args__RetValA_42, hlds__hlds_args__RetValB_43, hlds__hlds_args__RetValC_44, hlds__hlds_args__STATE_VARIABLE_Acc1_69_69, hlds__hlds_args__STATE_VARIABLE_Acc1_46, hlds__hlds_args__STATE_VARIABLE_Acc2_70_70, hlds__hlds_args__STATE_VARIABLE_Acc2_48, hlds__hlds_args__STATE_VARIABLE_Acc3_71_71, hlds__hlds_args__STATE_VARIABLE_Acc3_50);
        }
      }
    else
      {
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__hlds_args__succeeded)
          {
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__hlds_args__succeeded)
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (hlds__hlds_args__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding3\'/10", (MR_String) "mismatched proc_arg_vectors");
              return;
            }
          }
        *hlds__hlds_args__STATE_VARIABLE_Acc3_50 = hlds__hlds_args__STATE_VARIABLE_Acc3_71_71;
        *hlds__hlds_args__STATE_VARIABLE_Acc2_48 = hlds__hlds_args__STATE_VARIABLE_Acc2_70_70;
        *hlds__hlds_args__STATE_VARIABLE_Acc1_46 = hlds__hlds_args__STATE_VARIABLE_Acc1_69_69;
      }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_A_65,
  MR_Word hlds__hlds_args__TypeInfo_for_B_66,
  MR_Word hlds__hlds_args__TypeInfo_for_C_67,
  MR_Word hlds__hlds_args__TypeInfo_for_D_68,
  MR_Word hlds__hlds_args__TypeInfo_for_E_69,
  MR_Word hlds__hlds_args__P_9,
  MR_Word hlds__hlds_args__A_10,
  MR_Word hlds__hlds_args__B_11,
  MR_Word hlds__hlds_args__C_12,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_42,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_43,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_44,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_45)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITIA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIC_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIC_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIC_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIC_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 7)));
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_46_46;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_47_47;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_50_50;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_51_51;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_52_52;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_53_53;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
    MR_Box hlds__hlds_args__RetValA_39;
    MR_Box hlds__hlds_args__RetValB_40;
    MR_Box hlds__hlds_args__RetValC_41;

    {
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ITIA_15, hlds__hlds_args__ITIB_23, hlds__hlds_args__ITIC_31, hlds__hlds_args__STATE_VARIABLE_Acc1_0_42, &hlds__hlds_args__STATE_VARIABLE_Acc1_46_46, hlds__hlds_args__STATE_VARIABLE_Acc2_0_44, &hlds__hlds_args__STATE_VARIABLE_Acc2_47_47);
    }
    {
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ITCIA_16, hlds__hlds_args__ITCIB_24, hlds__hlds_args__ITCIC_32, hlds__hlds_args__STATE_VARIABLE_Acc1_46_46, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_47_47, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49);
    }
    {
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__UTIA_17, hlds__hlds_args__UTIB_25, hlds__hlds_args__UTIC_33, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_51_51);
    }
    {
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ETIA_18, hlds__hlds_args__ETIB_26, hlds__hlds_args__ETIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, hlds__hlds_args__STATE_VARIABLE_Acc2_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc2_53_53);
    }
    {
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__UTCIA_19, hlds__hlds_args__UTCIB_27, hlds__hlds_args__UTCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55);
    }
    {
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ETCIA_20, hlds__hlds_args__ETCIB_28, hlds__hlds_args__ETCIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57);
    }
    {
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ArgsA_21, hlds__hlds_args__ArgsB_29, hlds__hlds_args__ArgsC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_59_59);
    }
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_22)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_args__succeeded)
      {
        hlds__hlds_args__RetValA_39 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_22, (MR_Integer) 0));
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_30)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_args__succeeded)
          {
            hlds__hlds_args__RetValB_40 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_30, (MR_Integer) 0));
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_38)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_args__succeeded)
              hlds__hlds_args__RetValC_41 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_38, (MR_Integer) 0));
          }
      }
    if (hlds__hlds_args__succeeded)
      {
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_9, (MR_Integer) 1)));

        {
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_9), hlds__hlds_args__RetValA_39, hlds__hlds_args__RetValB_40, hlds__hlds_args__RetValC_41, hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc1_43, hlds__hlds_args__STATE_VARIABLE_Acc2_59_59, hlds__hlds_args__STATE_VARIABLE_Acc2_45);
        }
      }
    else
      {
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__hlds_args__succeeded)
          {
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__hlds_args__succeeded)
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (hlds__hlds_args__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl2_corresponding3\'/8", (MR_String) "mismatched proc_arg_vectors");
              return;
            }
          }
        *hlds__hlds_args__STATE_VARIABLE_Acc2_45 = hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
        *hlds__hlds_args__STATE_VARIABLE_Acc1_43 = hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
      }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_A_72,
  MR_Word hlds__hlds_args__TypeInfo_for_B_73,
  MR_Word hlds__hlds_args__TypeInfo_for_C_74,
  MR_Word hlds__hlds_args__TypeInfo_for_D_75,
  MR_Word hlds__hlds_args__TypeInfo_for_E_76,
  MR_Word hlds__hlds_args__P_10,
  MR_Word hlds__hlds_args__A_11,
  MR_Word hlds__hlds_args__B_12,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_36,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_37,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_38,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_39,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_40,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_41)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 7)));
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_42_42;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_43_43;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_44_44;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_45_45;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_46_46;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_47_47;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_50_50;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_51_51;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_52_52;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_53_53;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_56_56;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_57_57;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_58_58;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_59_59;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;

    {
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ITIA_16, hlds__hlds_args__ITIB_24, hlds__hlds_args__STATE_VARIABLE_Acc1_0_36, &hlds__hlds_args__STATE_VARIABLE_Acc1_42_42, hlds__hlds_args__STATE_VARIABLE_Acc2_0_38, &hlds__hlds_args__STATE_VARIABLE_Acc2_43_43, hlds__hlds_args__STATE_VARIABLE_Acc3_0_40, &hlds__hlds_args__STATE_VARIABLE_Acc3_44_44);
    }
    {
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ITCIA_17, hlds__hlds_args__ITCIB_25, hlds__hlds_args__STATE_VARIABLE_Acc1_42_42, &hlds__hlds_args__STATE_VARIABLE_Acc1_45_45, hlds__hlds_args__STATE_VARIABLE_Acc2_43_43, &hlds__hlds_args__STATE_VARIABLE_Acc2_46_46, hlds__hlds_args__STATE_VARIABLE_Acc3_44_44, &hlds__hlds_args__STATE_VARIABLE_Acc3_47_47);
    }
    {
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__UTIA_18, hlds__hlds_args__UTIB_26, hlds__hlds_args__STATE_VARIABLE_Acc1_45_45, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_46_46, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, hlds__hlds_args__STATE_VARIABLE_Acc3_47_47, &hlds__hlds_args__STATE_VARIABLE_Acc3_50_50);
    }
    {
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ETIA_19, hlds__hlds_args__ETIB_27, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, hlds__hlds_args__STATE_VARIABLE_Acc3_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc3_53_53);
    }
    {
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__UTCIA_20, hlds__hlds_args__UTCIB_28, hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, hlds__hlds_args__STATE_VARIABLE_Acc3_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc3_56_56);
    }
    {
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ETCIA_21, hlds__hlds_args__ETCIB_29, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, hlds__hlds_args__STATE_VARIABLE_Acc3_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc3_59_59);
    }
    {
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ArgsA_22, hlds__hlds_args__ArgsB_30, hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62);
    }
    if ((hlds__hlds_args__MaybeRetValA_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__hlds_args__MaybeRetValB_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *hlds__hlds_args__STATE_VARIABLE_Acc1_37 = hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
          *hlds__hlds_args__STATE_VARIABLE_Acc2_39 = hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
          *hlds__hlds_args__STATE_VARIABLE_Acc3_41 = hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
            return;
          }
        }
    else
      {
        MR_Box hlds__hlds_args__V_77_77 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_23, (MR_Integer) 0));

        if ((hlds__hlds_args__MaybeRetValB_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
              return;
            }
          }
        else
          {
            MR_Box hlds__hlds_args__RetValB_33 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_31, (MR_Integer) 0));
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_10, (MR_Integer) 1)));

            {
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_10), hlds__hlds_args__V_77_77, hlds__hlds_args__RetValB_33, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc1_37, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc2_39, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, hlds__hlds_args__STATE_VARIABLE_Acc3_41);
            }
          }
      }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_A_70,
  MR_Word hlds__hlds_args__TypeInfo_for_B_71,
  MR_Word hlds__hlds_args__TypeInfo_for_C_72,
  MR_Word hlds__hlds_args__TypeInfo_for_D_73,
  MR_Word hlds__hlds_args__TypeInfo_for_E_74,
  MR_Word hlds__hlds_args__P_9,
  MR_Word hlds__hlds_args__A_10,
  MR_Word hlds__hlds_args__B_11,
  MR_Word * hlds__hlds_args__C_12,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_44,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_45,
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_46,
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_47)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITIA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIC_31;
    MR_Word hlds__hlds_args__ITCIC_32;
    MR_Word hlds__hlds_args__UTIC_33;
    MR_Word hlds__hlds_args__ETIC_34;
    MR_Word hlds__hlds_args__UTCIC_35;
    MR_Word hlds__hlds_args__ETCIC_36;
    MR_Word hlds__hlds_args__ArgsC_37;
    MR_Word hlds__hlds_args__MaybeRetValC_41;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_50_50;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_51_51;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_52_52;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_53_53;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;

    {
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ITIA_15, hlds__hlds_args__ITIB_23, &hlds__hlds_args__ITIC_31, hlds__hlds_args__STATE_VARIABLE_Acc1_0_44, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_0_46, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49);
    }
    {
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ITCIA_16, hlds__hlds_args__ITCIB_24, &hlds__hlds_args__ITCIC_32, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_51_51);
    }
    {
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__UTIA_17, hlds__hlds_args__UTIB_25, &hlds__hlds_args__UTIC_33, hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, hlds__hlds_args__STATE_VARIABLE_Acc2_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc2_53_53);
    }
    {
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ETIA_18, hlds__hlds_args__ETIB_26, &hlds__hlds_args__ETIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55);
    }
    {
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__UTCIA_19, hlds__hlds_args__UTCIB_27, &hlds__hlds_args__UTCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57);
    }
    {
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ETCIA_20, hlds__hlds_args__ETCIB_28, &hlds__hlds_args__ETCIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_59_59);
    }
    {
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ArgsA_21, hlds__hlds_args__ArgsB_29, &hlds__hlds_args__ArgsC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61);
    }
    if ((hlds__hlds_args__MaybeRetValA_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          hlds__hlds_args__MaybeRetValC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *hlds__hlds_args__STATE_VARIABLE_Acc1_45 = hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
          *hlds__hlds_args__STATE_VARIABLE_Acc2_47 = hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
            return;
          }
        }
    else
      {
        MR_Box hlds__hlds_args__V_75_75 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_22, (MR_Integer) 0));

        if ((hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
              return;
            }
          }
        else
          {
            MR_Box hlds__hlds_args__RetValB_39 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_30, (MR_Integer) 0));
            MR_Box hlds__hlds_args__RetValC_40;
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_9, (MR_Integer) 1)));

            {
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_9), hlds__hlds_args__V_75_75, hlds__hlds_args__RetValB_39, &hlds__hlds_args__RetValC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc1_45, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc2_47);
            }
            {
              hlds__hlds_args__MaybeRetValC_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_41, 0) = hlds__hlds_args__RetValC_40;
            }
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__C_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITIC_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCIC_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTIC_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETIC_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCIC_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCIC_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__ArgsC_37));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValC_41));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_all_true_2_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_14,
  MR_Word hlds__hlds_args__P_3,
  MR_Word hlds__hlds_args__V_4)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCI_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetVal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 7)));

    {
      hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ITI_5);
    }
    if (hlds__hlds_args__succeeded)
      {
        {
          hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ITCI_6);
        }
        if (hlds__hlds_args__succeeded)
          {
            {
              hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__UTI_7);
            }
            if (hlds__hlds_args__succeeded)
              {
                {
                  hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ETI_8);
                }
                if (hlds__hlds_args__succeeded)
                  {
                    {
                      hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__UTCI_9);
                    }
                    if (hlds__hlds_args__succeeded)
                      {
                        {
                          hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ETCI_10);
                        }
                        if (hlds__hlds_args__succeeded)
                          {
                            {
                              hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__Args_11);
                            }
                            if (hlds__hlds_args__succeeded)
                              {
                                if ((hlds__hlds_args__MaybeRetVal_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  hlds__hlds_args__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Box hlds__hlds_args__RetVal_13 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_12, (MR_Integer) 0));
                                    MR_bool MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_3, (MR_Integer) 1)));

                                    {
                                      hlds__hlds_args__succeeded = hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_3), hlds__hlds_args__RetVal_13);
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__hlds_args__succeeded;
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_4_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_44,
  MR_Word hlds__hlds_args__TypeInfo_for_U_45,
  MR_Word hlds__hlds_args__TypeInfo_for_V_46,
  MR_Word hlds__hlds_args__P_5,
  MR_Word hlds__hlds_args__A_6,
  MR_Word hlds__hlds_args__B_7,
  MR_Word * hlds__hlds_args__C_8)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITIA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCIB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTIB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETIB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCIB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCIB_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__ArgsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITIC_25;
    MR_Word hlds__hlds_args__ITCIC_26;
    MR_Word hlds__hlds_args__UTIC_27;
    MR_Word hlds__hlds_args__ETIC_28;
    MR_Word hlds__hlds_args__UTCIC_29;
    MR_Word hlds__hlds_args__ETCIC_30;
    MR_Word hlds__hlds_args__ArgsC_31;
    MR_Word hlds__hlds_args__MaybeRetValC_35;

    {
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ITIA_9, hlds__hlds_args__ITIB_17, &hlds__hlds_args__ITIC_25);
    }
    {
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ITCIA_10, hlds__hlds_args__ITCIB_18, &hlds__hlds_args__ITCIC_26);
    }
    {
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__UTIA_11, hlds__hlds_args__UTIB_19, &hlds__hlds_args__UTIC_27);
    }
    {
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ETIA_12, hlds__hlds_args__ETIB_20, &hlds__hlds_args__ETIC_28);
    }
    {
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__UTCIA_13, hlds__hlds_args__UTCIB_21, &hlds__hlds_args__UTCIC_29);
    }
    {
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ETCIA_14, hlds__hlds_args__ETCIB_22, &hlds__hlds_args__ETCIC_30);
    }
    {
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ArgsA_15, hlds__hlds_args__ArgsB_23, &hlds__hlds_args__ArgsC_31);
    }
    if ((hlds__hlds_args__MaybeRetValA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__hlds_args__MaybeRetValB_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__hlds_args__MaybeRetValC_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
            return;
          }
        }
    else
      {
        MR_Box hlds__hlds_args__V_47_47 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_16, (MR_Integer) 0));

        if ((hlds__hlds_args__MaybeRetValB_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
              return;
            }
          }
        else
          {
            MR_Box hlds__hlds_args__RetValB_33 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_24, (MR_Integer) 0));
            MR_Box hlds__hlds_args__RetValC_34;
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_5, (MR_Integer) 1)));

            {
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_5), hlds__hlds_args__V_47_47, hlds__hlds_args__RetValB_33, &hlds__hlds_args__RetValC_34);
            }
            {
              hlds__hlds_args__MaybeRetValC_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_35, 0) = hlds__hlds_args__RetValC_34;
            }
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__C_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITIC_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCIC_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTIC_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETIC_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCIC_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCIC_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__ArgsC_31));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValC_35));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
  MR_Word hlds__hlds_args__TypeInfo_for_U_26,
  MR_Word hlds__hlds_args__Pred_4,
  MR_Word hlds__hlds_args__V0_5,
  MR_Word * hlds__hlds_args__V_6)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ITI0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCI0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTI0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETI0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCI0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCI0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetVal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITI_15;
    MR_Word hlds__hlds_args__ITCI_16;
    MR_Word hlds__hlds_args__UTI_17;
    MR_Word hlds__hlds_args__ETI_18;
    MR_Word hlds__hlds_args__UTCI_19;
    MR_Word hlds__hlds_args__ETCI_20;
    MR_Word hlds__hlds_args__Args_21;
    MR_Word hlds__hlds_args__MaybeRetVal_24;

    {
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ITI0_7, &hlds__hlds_args__ITI_15);
    }
    {
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ITCI0_8, &hlds__hlds_args__ITCI_16);
    }
    {
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__UTI0_9, &hlds__hlds_args__UTI_17);
    }
    {
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ETI0_10, &hlds__hlds_args__ETI_18);
    }
    {
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__UTCI0_11, &hlds__hlds_args__UTCI_19);
    }
    {
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ETCI0_12, &hlds__hlds_args__ETCI_20);
    }
    {
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__Args0_13, &hlds__hlds_args__Args_21);
    }
    if ((hlds__hlds_args__MaybeRetVal0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box hlds__hlds_args__RetVal0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal0_14, (MR_Integer) 0));
        MR_Box hlds__hlds_args__RetVal_23;
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Pred_4, (MR_Integer) 1)));

        {
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__Pred_4), hlds__hlds_args__RetVal0_22, &hlds__hlds_args__RetVal_23);
        }
        {
          hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_24, 0) = hlds__hlds_args__RetVal_23;
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__V_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__Args_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_24));
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_map_2_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
  MR_Word hlds__hlds_args__TypeInfo_for_U_26,
  MR_Word hlds__hlds_args__Func_4,
  MR_Word hlds__hlds_args__V0_5)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_6;
    MR_Word hlds__hlds_args__ITI0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__ITCI0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UTI0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ETI0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UTCI0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ETCI0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetVal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__ITI_15;
    MR_Word hlds__hlds_args__ITCI_16;
    MR_Word hlds__hlds_args__UTI_17;
    MR_Word hlds__hlds_args__ETI_18;
    MR_Word hlds__hlds_args__UTCI_19;
    MR_Word hlds__hlds_args__ETCI_20;
    MR_Word hlds__hlds_args__Args_21;
    MR_Word hlds__hlds_args__MaybeRetVal_24;

    {
      hlds__hlds_args__ITI_15 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ITI0_7);
    }
    {
      hlds__hlds_args__ITCI_16 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ITCI0_8);
    }
    {
      hlds__hlds_args__UTI_17 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__UTI0_9);
    }
    {
      hlds__hlds_args__ETI_18 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ETI0_10);
    }
    {
      hlds__hlds_args__UTCI_19 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__UTCI0_11);
    }
    {
      hlds__hlds_args__ETCI_20 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ETCI0_12);
    }
    {
      hlds__hlds_args__Args_21 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__Args0_13);
    }
    if ((hlds__hlds_args__MaybeRetVal0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box hlds__hlds_args__RetVal0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal0_14, (MR_Integer) 0));
        MR_Box hlds__hlds_args__RetVal_23;
        MR_Box MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Func_4, (MR_Integer) 1)));

        {
          hlds__hlds_args__RetVal_23 = hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__Func_4), hlds__hlds_args__RetVal0_22);
        }
        {
          hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_24, 0) = hlds__hlds_args__RetVal_23;
        }
      }
    {
      hlds__hlds_args__V_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 0) = ((MR_Box) (hlds__hlds_args__ITI_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 1) = ((MR_Box) (hlds__hlds_args__ITCI_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 2) = ((MR_Box) (hlds__hlds_args__UTI_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 3) = ((MR_Box) (hlds__hlds_args__ETI_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 4) = ((MR_Box) (hlds__hlds_args__UTCI_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 5) = ((MR_Box) (hlds__hlds_args__ETCI_20));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 6) = ((MR_Box) (hlds__hlds_args__Args_21));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_24));
    }
    return hlds__hlds_args__V_6;
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_26,
  MR_Word hlds__hlds_args__Vector_4,
  MR_Word * hlds__hlds_args__FuncArgs_5,
  MR_Box * hlds__hlds_args__FuncRetVal_6)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__InstanceTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UnivTypeInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ExistTypeInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UnivTypeClassInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ExistTypeClassInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__OrigArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_15_15;
    MR_Word hlds__hlds_args__V_16_16;
    MR_Word hlds__hlds_args__V_17_17;
    MR_Word hlds__hlds_args__V_18_18;
    MR_Word hlds__hlds_args__V_19_19;
    MR_Word hlds__hlds_args__V_20_20;
    MR_Word hlds__hlds_args__V_21_21;

    {
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__OrigArgs_13));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_12));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
    }
    {
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_11));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
    }
    {
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_10));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
    }
    {
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_9));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
    }
    {
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_8));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
    }
    {
      hlds__hlds_args__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_15_15, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_7));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_15_15, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
    {
      *hlds__hlds_args__FuncArgs_5 = mercury__list__condense_1_f_0(hlds__hlds_args__TypeInfo_for_T_26, hlds__hlds_args__V_15_15);
    }
    if ((hlds__hlds_args__MaybeRetValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_to_func_args\'/3", (MR_String) "predicate");
          return;
        }
      }
    else
      *hlds__hlds_args__FuncRetVal_6 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_14, (MR_Integer) 0));
  }
}

MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_member_2_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_13,
  MR_Word hlds__hlds_args__ArgVec_3,
  MR_Box hlds__hlds_args__Var_4)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__InstanceTypeInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UnivTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ExistTypeInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UnivTypeClassInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ExistTypeClassInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__OrigArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValue_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 7)));

    {
      hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__OrigArgs_11);
    }
    if (!(hlds__hlds_args__succeeded))
      {
        {
          MR_Box hlds__hlds_args__V_14_14;

          hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValue_12)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__hlds_args__succeeded)
            {
              hlds__hlds_args__V_14_14 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_12, (MR_Integer) 0));
              {
                hlds__hlds_args__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__V_14_14);
              }
            }
        }
        if (!(hlds__hlds_args__succeeded))
          {
            {
              hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__InstanceTypeInfos_5);
            }
            if (!(hlds__hlds_args__succeeded))
              {
                {
                  hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__InstanceTypeClassInfos_6);
                }
                if (!(hlds__hlds_args__succeeded))
                  {
                    {
                      hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__UnivTypeInfos_7);
                    }
                    if (!(hlds__hlds_args__succeeded))
                      {
                        {
                          hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__ExistTypeInfos_8);
                        }
                        if (!(hlds__hlds_args__succeeded))
                          {
                            {
                              hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__UnivTypeClassInfos_9);
                            }
                            if (!(hlds__hlds_args__succeeded))
                              {
                                hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__ExistTypeClassInfos_10);
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__hlds_args__succeeded;
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
  MR_Word hlds__hlds_args__ArgVec_4,
  MR_Word * hlds__hlds_args__PolyArgs_5,
  MR_Word * hlds__hlds_args__NonPolyArgs_6)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__InstanceTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UnivTypeInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ExistTypeInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UnivTypeClassInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ExistTypeClassInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__OrigArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_16_16;
    MR_Word hlds__hlds_args__V_17_17;
    MR_Word hlds__hlds_args__V_18_18;
    MR_Word hlds__hlds_args__V_19_19;
    MR_Word hlds__hlds_args__V_20_20;
    MR_Word hlds__hlds_args__V_21_21;

    {
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_12));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_11));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
    }
    {
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_10));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
    }
    {
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_9));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
    }
    {
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_8));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
    }
    {
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_7));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
    }
    {
      mercury__list__condense_2_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__V_16_16, hlds__hlds_args__PolyArgs_5);
    }
    if ((hlds__hlds_args__MaybeRetValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__hlds_args__NonPolyArgs_6 = hlds__hlds_args__OrigArgs_13;
    else
      {
        MR_Box hlds__hlds_args__RetValue_15 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_14, (MR_Integer) 0));
        MR_Word hlds__hlds_args__V_23_23;

        {
          hlds__hlds_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 0) = hlds__hlds_args__RetValue_15;
          MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          *hlds__hlds_args__NonPolyArgs_6 = mercury__list__f_43_43_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__OrigArgs_13, hlds__hlds_args__V_23_23);
        }
      }
  }
}

void MR_CALL 
hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
  MR_Word hlds__hlds_args__Renaming_4,
  MR_Word hlds__hlds_args__ArgVec0_5,
  MR_Word * hlds__hlds_args__ArgVec_6)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__InstanceTypeInfos0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__InstanceTypeClassInfos0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UnivTypeInfos0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ExistTypeInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UnivTypeClassInfos0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ExistTypeClassInfos0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__OrigArgs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValue0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__InstanceTypeInfos_15;
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_16;
    MR_Word hlds__hlds_args__UnivTypeInfos_17;
    MR_Word hlds__hlds_args__ExistTypeInfos_18;
    MR_Word hlds__hlds_args__UnivTypeClassInfos_19;
    MR_Word hlds__hlds_args__ExistTypeClassInfos_20;
    MR_Word hlds__hlds_args__OrigArgs_21;
    MR_Word hlds__hlds_args__MaybeRetValue_24;

    {
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__InstanceTypeInfos0_7, &hlds__hlds_args__InstanceTypeInfos_15);
    }
    {
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__InstanceTypeClassInfos0_8, &hlds__hlds_args__InstanceTypeClassInfos_16);
    }
    {
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__UnivTypeInfos0_9, &hlds__hlds_args__UnivTypeInfos_17);
    }
    {
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__ExistTypeInfos0_10, &hlds__hlds_args__ExistTypeInfos_18);
    }
    {
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__UnivTypeClassInfos0_11, &hlds__hlds_args__UnivTypeClassInfos_19);
    }
    {
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__ExistTypeClassInfos0_12, &hlds__hlds_args__ExistTypeClassInfos_20);
    }
    {
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__OrigArgs0_13, &hlds__hlds_args__OrigArgs_21);
    }
    if ((hlds__hlds_args__MaybeRetValue0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_args__MaybeRetValue_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box hlds__hlds_args__Value0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue0_14, (MR_Integer) 0));
        MR_Box hlds__hlds_args__Value_23;

        {
          hlds__hlds_args__succeeded = mercury__map__search_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__Value0_22, &hlds__hlds_args__Value_23);
        }
        if (hlds__hlds_args__succeeded)
          {
            hlds__hlds_args__MaybeRetValue_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_24, 0) = hlds__hlds_args__Value_23;
          }
        else
          hlds__hlds_args__MaybeRetValue_24 = hlds__hlds_args__MaybeRetValue0_14;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__ArgVec_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__OrigArgs_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValue_24));
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_set_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_6,
  MR_Word hlds__hlds_args__ArgVec_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__Set_4;
    MR_Word hlds__hlds_args__List_5;

    {
      hlds__hlds_args__List_5 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__ArgVec_3);
    }
    {
      hlds__hlds_args__Set_4 = mercury__set__from_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__List_5);
    }
    return hlds__hlds_args__Set_4;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_list_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
  MR_Word hlds__hlds_args__ArgVec_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__List_4;
    MR_Word hlds__hlds_args__InstanceTypeInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__UnivTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__ExistTypeInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__UnivTypeClassInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__ExistTypeClassInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__OrigArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__MaybeRetValue_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__RetValue_14;
    MR_Word hlds__hlds_args__V_16_16;
    MR_Word hlds__hlds_args__V_17_17;
    MR_Word hlds__hlds_args__V_18_18;
    MR_Word hlds__hlds_args__V_19_19;
    MR_Word hlds__hlds_args__V_20_20;
    MR_Word hlds__hlds_args__V_21_21;
    MR_Word hlds__hlds_args__V_22_22;
    MR_Word hlds__hlds_args__V_23_23;

    if ((hlds__hlds_args__MaybeRetValue_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_args__RetValue_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box hlds__hlds_args__Value_13 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_12, (MR_Integer) 0));

        {
          hlds__hlds_args__RetValue_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_args__RetValue_14, 0) = hlds__hlds_args__Value_13;
          MR_hl_field(MR_mktag(1), hlds__hlds_args__RetValue_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      hlds__hlds_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 0) = ((MR_Box) (hlds__hlds_args__RetValue_14));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_args__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_22_22, 0) = ((MR_Box) (hlds__hlds_args__OrigArgs_11));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_22_22, 1) = ((MR_Box) (hlds__hlds_args__V_23_23));
    }
    {
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_10));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (hlds__hlds_args__V_22_22));
    }
    {
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_9));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
    }
    {
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_8));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
    }
    {
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_7));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
    }
    {
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_6));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
    }
    {
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_5));
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
    }
    {
      mercury__list__condense_2_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__V_16_16, &hlds__hlds_args__List_4);
    }
    return hlds__hlds_args__List_4;
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__RV_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__RV_4));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_user_args_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__UA_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__UA_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__ETCI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__UTCI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__ETI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__UTI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__ITCI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
  MR_Word hlds__hlds_args__ITI_4,
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_user_args_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
  MR_Word hlds__hlds_args__V_3)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

    return hlds__hlds_args__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_init_2_f_0(
  MR_Word hlds__hlds_args__TypeInfo_for_T_16,
  MR_Word hlds__hlds_args__PredOrFunc_4,
  MR_Word hlds__hlds_args__Args0_5)
{
  {
    MR_bool hlds__hlds_args__succeeded;
    MR_Word hlds__hlds_args__ArgVec_6;
    MR_Word hlds__hlds_args__Args_7;
    MR_Word hlds__hlds_args__MaybeRetVal_8;

    switch (hlds__hlds_args__PredOrFunc_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Box hlds__hlds_args__RetVal_9;

          {
            mercury__list__det_split_last_3_p_0(hlds__hlds_args__TypeInfo_for_T_16, hlds__hlds_args__Args0_5, &hlds__hlds_args__Args_7, &hlds__hlds_args__RetVal_9);
          }
          {
            hlds__hlds_args__MaybeRetVal_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_8, 0) = hlds__hlds_args__RetVal_9;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          hlds__hlds_args__Args_7 = hlds__hlds_args__Args0_5;
          hlds__hlds_args__MaybeRetVal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    {
      hlds__hlds_args__ArgVec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 6) = ((MR_Box) (hlds__hlds_args__Args_7));
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_8));
    }
    return hlds__hlds_args__ArgVec_6;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_args__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_args. */
