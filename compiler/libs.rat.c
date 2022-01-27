/*
** Automatically generated from `rat.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module libs.rat. */
/* :- implementation. */

/*
INIT mercury__libs__rat__init
ENDINIT
*/

#include "libs.rat.mih"


#include "libs.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo libs__rat__libs__rat__field_types_rat_0_0[2];

static const MR_DuFunctorDesc libs__rat__libs__rat__du_functor_desc_rat_0_0;

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_stag_ordered_rat_0_0[1];

static const MR_DuPtagLayout libs__rat__libs__rat__du_ptag_ordered_rat_0[1];

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_name_ordered_rat_0[1];

static const MR_Integer libs__rat__libs__rat__functor_number_map_rat_0[1];

static MR_bool MR_CALL 
libs__rat____Unify____rat_0_0_10001(
  MR_Box libs__rat__wrapper_arg_1,
  MR_Box libs__rat__wrapper_arg_2);

static void MR_CALL 
libs__rat____Compare____rat_0_0_10001(
  MR_Box * libs__rat__wrapper_arg_1,
  MR_Box libs__rat__wrapper_arg_2,
  MR_Box libs__rat__wrapper_arg_3);

static MR_Integer MR_CALL 
libs__rat__gcd_2_2_f_0(
  MR_Integer libs__rat__A_4,
  MR_Integer libs__rat__B_5);


static /* final */ const MR_Box libs__rat_scalar_common_1[2][2];




static /* final */ const MR_Box libs__rat_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo libs__rat__libs__rat__field_types_rat_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc libs__rat__libs__rat__du_functor_desc_rat_0_0 = {
  (MR_String) "r",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__rat__libs__rat__field_types_rat_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_stag_ordered_rat_0_0[1] = {
  &libs__rat__libs__rat__du_functor_desc_rat_0_0
};

static const MR_DuPtagLayout libs__rat__libs__rat__du_ptag_ordered_rat_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__rat__libs__rat__du_stag_ordered_rat_0_0
  }
};

static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_name_ordered_rat_0[1] = {
  &libs__rat__libs__rat__du_functor_desc_rat_0_0
};

static const MR_Integer libs__rat__libs__rat__functor_number_map_rat_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__rat__libs__rat__type_ctor_info_rat_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__rat____Unify____rat_0_0_10001)),
  ((MR_Box) (libs__rat____Compare____rat_0_0_10001)),
  (MR_String) "libs.rat",
  (MR_String) "rat",
  {     libs__rat__libs__rat__du_name_ordered_rat_0 },
  {     libs__rat__libs__rat__du_ptag_ordered_rat_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__rat__libs__rat__functor_number_map_rat_0
};

static MR_bool MR_CALL 
libs__rat____Unify____rat_0_0_10001(
  MR_Box libs__rat__wrapper_arg_1,
  MR_Box libs__rat__wrapper_arg_2)
{
  {
    MR_bool libs__rat__succeeded;

    {
      libs__rat__succeeded = libs__rat____Unify____rat_0_0(((MR_Word) libs__rat__wrapper_arg_1), ((MR_Word) libs__rat__wrapper_arg_2));
    }
    return libs__rat__succeeded;
  }
}

static void MR_CALL 
libs__rat____Compare____rat_0_0_10001(
  MR_Box * libs__rat__wrapper_arg_1,
  MR_Box libs__rat__wrapper_arg_2,
  MR_Box libs__rat__wrapper_arg_3)
{
  {
    MR_Word libs__rat__conv0_HeadVar__1_1;

    {
      libs__rat____Compare____rat_0_0(&libs__rat__conv0_HeadVar__1_1, ((MR_Word) libs__rat__wrapper_arg_2), ((MR_Word) libs__rat__wrapper_arg_3));
    }
    *libs__rat__wrapper_arg_1 = ((MR_Box) (libs__rat__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
libs__rat____Compare____rat_0_0(
  MR_Word * libs__rat__HeadVar__1_1,
  MR_Word libs__rat__HeadVar__2_2,
  MR_Word libs__rat__HeadVar__3_3)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Integer libs__rat__CastX_9 = (MR_Integer) libs__rat__HeadVar__2_2;
    MR_Integer libs__rat__CastY_10 = (MR_Integer) libs__rat__HeadVar__3_3;

    libs__rat__succeeded = (libs__rat__CastX_9 == libs__rat__CastY_10);
    if (libs__rat__succeeded)
      *libs__rat__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer libs__rat__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer libs__rat__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer libs__rat__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer libs__rat__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word libs__rat__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__rat__V_8_8, libs__rat__V_4_4, libs__rat__V_6_6);
        }
        libs__rat__succeeded = (libs__rat__V_8_8 == (MR_Integer) 0);
        libs__rat__succeeded = !(libs__rat__succeeded);
        if (libs__rat__succeeded)
          *libs__rat__HeadVar__1_1 = libs__rat__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(libs__rat__HeadVar__1_1, libs__rat__V_5_5, libs__rat__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
libs__rat____Unify____rat_0_0(
  MR_Word libs__rat__HeadVar__1_1,
  MR_Word libs__rat__HeadVar__2_2)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Integer libs__rat__CastX_7 = (MR_Integer) libs__rat__HeadVar__1_1;
    MR_Integer libs__rat__CastY_8 = (MR_Integer) libs__rat__HeadVar__2_2;

    libs__rat__succeeded = (libs__rat__CastX_7 == libs__rat__CastY_8);
    if (libs__rat__succeeded)
      libs__rat__succeeded = MR_TRUE;
    else
      {
        MR_Integer libs__rat__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer libs__rat__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer libs__rat__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer libs__rat__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));

        libs__rat__succeeded = (libs__rat__V_3_3 == libs__rat__V_5_5);
        if (libs__rat__succeeded)
          libs__rat__succeeded = (libs__rat__V_4_4 == libs__rat__V_6_6);
      }
    return libs__rat__succeeded;
  }
}

static MR_Integer MR_CALL 
libs__rat__gcd_2_2_f_0(
  MR_Integer libs__rat__A_4,
  MR_Integer libs__rat__B_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__rat__succeeded = (libs__rat__B_5 == (MR_Integer) 0);
        MR_Integer libs__rat__HeadVar__3_3;

        if (libs__rat__succeeded)
          libs__rat__HeadVar__3_3 = libs__rat__A_4;
        else
          {
            MR_Integer libs__rat__V_6_6;

            {
              libs__rat__V_6_6 = mercury__int__rem_2_f_0(libs__rat__A_4, libs__rat__B_5);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer libs__rat__A__tmp_copy_4 = libs__rat__B_5;
              MR_Integer libs__rat__B__tmp_copy_5 = libs__rat__V_6_6;

              libs__rat__B_5 = libs__rat__B__tmp_copy_5;
              libs__rat__A_4 = libs__rat__A__tmp_copy_4;
            }
            continue;
          }
        return libs__rat__HeadVar__3_3;
      }
      break;
    }
}

void MR_CALL 
libs__rat__write_rat_3_p_0(
  MR_Word libs__rat__HeadVar__1_1)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Integer libs__rat__Numerator_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer libs__rat__Denominator_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));

    {
      mercury__io__write_string_3_p_0((MR_String) "r(");
    }
    {
      mercury__io__write_int_3_p_0(libs__rat__Numerator_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(libs__rat__Denominator_5);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

MR_String MR_CALL 
libs__rat__to_string_1_f_0(
  MR_Word libs__rat__HeadVar__1_1)
{
  {
    MR_bool libs__rat__succeeded;
    MR_String libs__rat__HeadVar__2_2;
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer libs__rat__Denom_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));

    libs__rat__succeeded = (libs__rat__Num_3 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      libs__rat__HeadVar__2_2 = (MR_String) "0";
    else
      {
        MR_String libs__rat__V_6_6;
        MR_String libs__rat__V_7_7;
        MR_String libs__rat__V_8_8;
        MR_String libs__rat__V_9_9;

        {
          libs__rat__V_7_7 = mercury__string__int_to_string_1_f_0(libs__rat__Num_3);
        }
        libs__rat__succeeded = (libs__rat__Denom_4 == (MR_Integer) 1);
        if (libs__rat__succeeded)
          libs__rat__V_9_9 = (MR_String) "";
        else
          {
            MR_String libs__rat__V_11_11;

            {
              libs__rat__V_11_11 = mercury__string__int_to_string_1_f_0(libs__rat__Denom_4);
            }
            {
              libs__rat__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", libs__rat__V_11_11);
            }
          }
        {
          libs__rat__V_8_8 = mercury__string__f_43_43_2_f_0(libs__rat__V_9_9, (MR_String) ")");
        }
        {
          libs__rat__V_6_6 = mercury__string__f_43_43_2_f_0(libs__rat__V_7_7, libs__rat__V_8_8);
        }
        {
          libs__rat__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "(", libs__rat__V_6_6);
        }
      }
    return libs__rat__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__rat__zero_0_f_0(void)
{
  {
    MR_bool libs__rat__succeeded;

    return (MR_Word) &libs__rat_scalar_common_1[0];
  }
}

MR_Word MR_CALL 
libs__rat__one_0_f_0(void)
{
  {
    MR_bool libs__rat__succeeded;

    return (MR_Word) &libs__rat_scalar_common_1[1];
  }
}

MR_Word MR_CALL 
libs__rat__abs_1_f_0(
  MR_Word libs__rat__HeadVar__1_1)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__HeadVar__2_2;
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer libs__rat__V_5_5;

    {
      libs__rat__V_5_5 = mercury__int__abs_1_f_0(libs__rat__Num_3);
    }
    {
      libs__rat__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 0) = ((MR_Box) (libs__rat__V_5_5));
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 1) = ((MR_Box) (libs__rat__Den_4));
    }
    return libs__rat__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
libs__rat__denom_1_f_0(
  MR_Word libs__rat__HeadVar__1_1)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Integer libs__rat__Den_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer libs__rat__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));

    return libs__rat__Den_4;
  }
}

MR_Integer MR_CALL 
libs__rat__numer_1_f_0(
  MR_Word libs__rat__HeadVar__1_1)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer libs__rat__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));

    return libs__rat__Num_3;
  }
}

MR_Word MR_CALL 
libs__rat__f_slash_2_f_0(
  MR_Word libs__rat__X_4,
  MR_Word libs__rat__Y_5)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__HeadVar__3_3;
    MR_Word libs__rat__V_6_6;
    MR_Integer libs__rat__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 1)));

    libs__rat__succeeded = (libs__rat__Num_7 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      {
        MR_Box libs__rat__conv0_V_6_6;

        {
          libs__rat__conv0_V_6_6 = mercury__require__unexpected_3_f_0((MR_Word) &libs__rat__libs__rat__type_ctor_info_rat_0, (MR_String) "libs.rat", (MR_String) "function \140libs.rat.reciprocal\'/1", (MR_String) "division by zero");
        }
        libs__rat__V_6_6 = ((MR_Word) libs__rat__conv0_V_6_6);
      }
    else
      {
        MR_Integer libs__rat__V_12_12;
        MR_Integer libs__rat__V_13_13;
        MR_Integer libs__rat__V_14_14;

        libs__rat__succeeded = (libs__rat__Num_7 == (MR_Integer) 0);
        if (libs__rat__succeeded)
          libs__rat__V_13_13 = (MR_Integer) 0;
        else
          {
            libs__rat__succeeded = (libs__rat__Num_7 < (MR_Integer) 0);
            if (libs__rat__succeeded)
              libs__rat__V_13_13 = (MR_Integer) -1;
            else
              libs__rat__V_13_13 = (MR_Integer) 1;
          }
        libs__rat__V_12_12 = (libs__rat__V_13_13 * libs__rat__Den_8);
        {
          libs__rat__V_14_14 = mercury__int__abs_1_f_0(libs__rat__Num_7);
        }
        {
          libs__rat__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 0) = ((MR_Box) (libs__rat__V_12_12));
          MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 1) = ((MR_Box) (libs__rat__V_14_14));
        }
      }
    {
      libs__rat__HeadVar__3_3 = libs__rat__f_times_2_f_0(libs__rat__X_4, libs__rat__V_6_6);
    }
    return libs__rat__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
libs__rat__f_times_2_f_0(
  MR_Word libs__rat__HeadVar__1_1,
  MR_Word libs__rat__HeadVar__2_2)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__HeadVar__3_3;
    MR_Integer libs__rat__An_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer libs__rat__Ad_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer libs__rat__Bn_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer libs__rat__Bd_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer libs__rat__Numer_8;
    MR_Integer libs__rat__Denom_9;
    MR_Integer libs__rat__G1_10;
    MR_Integer libs__rat__G2_11;
    MR_Integer libs__rat__V_12_12;
    MR_Integer libs__rat__V_13_13;
    MR_Integer libs__rat__V_14_14;
    MR_Integer libs__rat__V_15_15;
    MR_Integer libs__rat__V_18_18;
    MR_Integer libs__rat__V_19_19;
    MR_Integer libs__rat__V_22_22;
    MR_Integer libs__rat__V_23_23;

    {
      libs__rat__V_18_18 = mercury__int__abs_1_f_0(libs__rat__An_4);
    }
    {
      libs__rat__V_19_19 = mercury__int__abs_1_f_0(libs__rat__Bd_7);
    }
    {
      libs__rat__G1_10 = libs__rat__gcd_2_2_f_0(libs__rat__V_18_18, libs__rat__V_19_19);
    }
    {
      libs__rat__V_22_22 = mercury__int__abs_1_f_0(libs__rat__Ad_5);
    }
    {
      libs__rat__V_23_23 = mercury__int__abs_1_f_0(libs__rat__Bn_6);
    }
    {
      libs__rat__G2_11 = libs__rat__gcd_2_2_f_0(libs__rat__V_22_22, libs__rat__V_23_23);
    }
    {
      libs__rat__V_12_12 = mercury__int__f_47_47_2_f_0(libs__rat__An_4, libs__rat__G1_10);
    }
    {
      libs__rat__V_13_13 = mercury__int__f_47_47_2_f_0(libs__rat__Bn_6, libs__rat__G2_11);
    }
    libs__rat__Numer_8 = (libs__rat__V_12_12 * libs__rat__V_13_13);
    {
      libs__rat__V_14_14 = mercury__int__f_47_47_2_f_0(libs__rat__Ad_5, libs__rat__G2_11);
    }
    {
      libs__rat__V_15_15 = mercury__int__f_47_47_2_f_0(libs__rat__Bd_7, libs__rat__G1_10);
    }
    libs__rat__Denom_9 = (libs__rat__V_14_14 * libs__rat__V_15_15);
    libs__rat__succeeded = (libs__rat__Denom_9 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.rat", (MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
        }
      }
    else
      {
        libs__rat__succeeded = (libs__rat__Numer_8 == (MR_Integer) 0);
        if (libs__rat__succeeded)
          {
            libs__rat__HeadVar__3_3 = (MR_Word) &libs__rat_scalar_common_1[0];
          }
        else
          {
            MR_Integer libs__rat__G_27;
            MR_Integer libs__rat__Num2_28;
            MR_Integer libs__rat__Den2_29;
            MR_Integer libs__rat__V_35_35;
            MR_Integer libs__rat__V_36_36;
            MR_Integer libs__rat__V_37_37;
            MR_Integer libs__rat__V_40_40;
            MR_Integer libs__rat__V_41_41;

            {
              libs__rat__V_40_40 = mercury__int__abs_1_f_0(libs__rat__Numer_8);
            }
            {
              libs__rat__V_41_41 = mercury__int__abs_1_f_0(libs__rat__Denom_9);
            }
            {
              libs__rat__G_27 = libs__rat__gcd_2_2_f_0(libs__rat__V_40_40, libs__rat__V_41_41);
            }
            libs__rat__succeeded = (libs__rat__Denom_9 == (MR_Integer) 0);
            if (libs__rat__succeeded)
              libs__rat__V_35_35 = (MR_Integer) 0;
            else
              {
                libs__rat__succeeded = (libs__rat__Denom_9 < (MR_Integer) 0);
                if (libs__rat__succeeded)
                  libs__rat__V_35_35 = (MR_Integer) -1;
                else
                  libs__rat__V_35_35 = (MR_Integer) 1;
              }
            libs__rat__Num2_28 = (libs__rat__Numer_8 * libs__rat__V_35_35);
            {
              libs__rat__Den2_29 = mercury__int__abs_1_f_0(libs__rat__Denom_9);
            }
            {
              libs__rat__V_36_36 = mercury__int__f_47_47_2_f_0(libs__rat__Num2_28, libs__rat__G_27);
            }
            {
              libs__rat__V_37_37 = mercury__int__f_47_47_2_f_0(libs__rat__Den2_29, libs__rat__G_27);
            }
            {
              libs__rat__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 0) = ((MR_Box) (libs__rat__V_36_36));
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 1) = ((MR_Box) (libs__rat__V_37_37));
            }
          }
      }
    return libs__rat__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
libs__rat__f_minus_2_f_0(
  MR_Word libs__rat__X_4,
  MR_Word libs__rat__Y_5)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__HeadVar__3_3;
    MR_Word libs__rat__V_6_6;
    MR_Integer libs__rat__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 1)));
    MR_Integer libs__rat__V_9_9 = ((MR_Integer) 0 - libs__rat__Num_7);

    {
      libs__rat__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 0) = ((MR_Box) (libs__rat__V_9_9));
      MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 1) = ((MR_Box) (libs__rat__Den_8));
    }
    {
      libs__rat__HeadVar__3_3 = libs__rat__f_plus_2_f_0(libs__rat__X_4, libs__rat__V_6_6);
    }
    return libs__rat__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
libs__rat__f_plus_2_f_0(
  MR_Word libs__rat__HeadVar__1_1,
  MR_Word libs__rat__HeadVar__2_2)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__HeadVar__3_3;
    MR_Integer libs__rat__An_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer libs__rat__Ad_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer libs__rat__Bn_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer libs__rat__Bd_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer libs__rat__Numer_8;
    MR_Integer libs__rat__M_9;
    MR_Integer libs__rat__CA_10;
    MR_Integer libs__rat__CB_11;
    MR_Integer libs__rat__V_12_12;
    MR_Integer libs__rat__V_13_13;

    libs__rat__succeeded = (libs__rat__Ad_5 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      libs__rat__M_9 = (MR_Integer) 0;
    else
      {
        libs__rat__succeeded = (libs__rat__Bd_7 == (MR_Integer) 0);
        if (libs__rat__succeeded)
          libs__rat__M_9 = (MR_Integer) 0;
        else
          {
            MR_Integer libs__rat__V_16_16;
            MR_Integer libs__rat__V_17_17;
            MR_Integer libs__rat__V_18_18;
            MR_Integer libs__rat__V_21_21;
            MR_Integer libs__rat__V_22_22;

            {
              libs__rat__V_21_21 = mercury__int__abs_1_f_0(libs__rat__Ad_5);
            }
            {
              libs__rat__V_22_22 = mercury__int__abs_1_f_0(libs__rat__Bd_7);
            }
            {
              libs__rat__V_18_18 = libs__rat__gcd_2_2_f_0(libs__rat__V_21_21, libs__rat__V_22_22);
            }
            {
              libs__rat__V_17_17 = mercury__int__f_47_47_2_f_0(libs__rat__Ad_5, libs__rat__V_18_18);
            }
            libs__rat__V_16_16 = (libs__rat__V_17_17 * libs__rat__Bd_7);
            {
              libs__rat__M_9 = mercury__int__abs_1_f_0(libs__rat__V_16_16);
            }
          }
      }
    {
      libs__rat__CA_10 = mercury__int__f_47_47_2_f_0(libs__rat__M_9, libs__rat__Ad_5);
    }
    {
      libs__rat__CB_11 = mercury__int__f_47_47_2_f_0(libs__rat__M_9, libs__rat__Bd_7);
    }
    libs__rat__V_12_12 = (libs__rat__An_4 * libs__rat__CA_10);
    libs__rat__V_13_13 = (libs__rat__Bn_6 * libs__rat__CB_11);
    libs__rat__Numer_8 = (libs__rat__V_12_12 + libs__rat__V_13_13);
    libs__rat__succeeded = (libs__rat__M_9 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.rat", (MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
        }
      }
    else
      {
        libs__rat__succeeded = (libs__rat__Numer_8 == (MR_Integer) 0);
        if (libs__rat__succeeded)
          {
            libs__rat__HeadVar__3_3 = (MR_Word) &libs__rat_scalar_common_1[0];
          }
        else
          {
            MR_Integer libs__rat__G_26;
            MR_Integer libs__rat__Num2_27;
            MR_Integer libs__rat__Den2_28;
            MR_Integer libs__rat__V_34_34;
            MR_Integer libs__rat__V_35_35;
            MR_Integer libs__rat__V_36_36;
            MR_Integer libs__rat__V_39_39;
            MR_Integer libs__rat__V_40_40;

            {
              libs__rat__V_39_39 = mercury__int__abs_1_f_0(libs__rat__Numer_8);
            }
            {
              libs__rat__V_40_40 = mercury__int__abs_1_f_0(libs__rat__M_9);
            }
            {
              libs__rat__G_26 = libs__rat__gcd_2_2_f_0(libs__rat__V_39_39, libs__rat__V_40_40);
            }
            libs__rat__succeeded = (libs__rat__M_9 == (MR_Integer) 0);
            if (libs__rat__succeeded)
              libs__rat__V_34_34 = (MR_Integer) 0;
            else
              {
                libs__rat__succeeded = (libs__rat__M_9 < (MR_Integer) 0);
                if (libs__rat__succeeded)
                  libs__rat__V_34_34 = (MR_Integer) -1;
                else
                  libs__rat__V_34_34 = (MR_Integer) 1;
              }
            libs__rat__Num2_27 = (libs__rat__Numer_8 * libs__rat__V_34_34);
            {
              libs__rat__Den2_28 = mercury__int__abs_1_f_0(libs__rat__M_9);
            }
            {
              libs__rat__V_35_35 = mercury__int__f_47_47_2_f_0(libs__rat__Num2_27, libs__rat__G_26);
            }
            {
              libs__rat__V_36_36 = mercury__int__f_47_47_2_f_0(libs__rat__Den2_28, libs__rat__G_26);
            }
            {
              libs__rat__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 0) = ((MR_Box) (libs__rat__V_35_35));
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 1) = ((MR_Box) (libs__rat__V_36_36));
            }
          }
      }
    return libs__rat__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
libs__rat__f_minus_1_f_0(
  MR_Word libs__rat__HeadVar__1_1)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__HeadVar__2_2;
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer libs__rat__V_5_5 = ((MR_Integer) 0 - libs__rat__Num_3);

    {
      libs__rat__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 0) = ((MR_Box) (libs__rat__V_5_5));
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 1) = ((MR_Box) (libs__rat__Den_4));
    }
    return libs__rat__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__rat__f_plus_1_f_0(
  MR_Word libs__rat__Rat_3)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__Rat_2 = libs__rat__Rat_3;

    return libs__rat__Rat_2;
  }
}

MR_Word MR_CALL 
libs__rat__rat_2_f_0(
  MR_Integer libs__rat__Num_4,
  MR_Integer libs__rat__Den_5)
{
  {
    MR_bool libs__rat__succeeded = (libs__rat__Den_5 == (MR_Integer) 0);
    MR_Word libs__rat__HeadVar__3_3;

    if (libs__rat__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.rat", (MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
        }
      }
    else
      {
        libs__rat__succeeded = (libs__rat__Num_4 == (MR_Integer) 0);
        if (libs__rat__succeeded)
          {
            libs__rat__HeadVar__3_3 = (MR_Word) &libs__rat_scalar_common_1[0];
          }
        else
          {
            MR_Integer libs__rat__G_9;
            MR_Integer libs__rat__Num2_10;
            MR_Integer libs__rat__Den2_11;
            MR_Integer libs__rat__V_17_17;
            MR_Integer libs__rat__V_18_18;
            MR_Integer libs__rat__V_19_19;
            MR_Integer libs__rat__V_22_22;
            MR_Integer libs__rat__V_23_23;

            {
              libs__rat__V_22_22 = mercury__int__abs_1_f_0(libs__rat__Num_4);
            }
            {
              libs__rat__V_23_23 = mercury__int__abs_1_f_0(libs__rat__Den_5);
            }
            {
              libs__rat__G_9 = libs__rat__gcd_2_2_f_0(libs__rat__V_22_22, libs__rat__V_23_23);
            }
            libs__rat__succeeded = (libs__rat__Den_5 == (MR_Integer) 0);
            if (libs__rat__succeeded)
              libs__rat__V_17_17 = (MR_Integer) 0;
            else
              {
                libs__rat__succeeded = (libs__rat__Den_5 < (MR_Integer) 0);
                if (libs__rat__succeeded)
                  libs__rat__V_17_17 = (MR_Integer) -1;
                else
                  libs__rat__V_17_17 = (MR_Integer) 1;
              }
            libs__rat__Num2_10 = (libs__rat__Num_4 * libs__rat__V_17_17);
            {
              libs__rat__Den2_11 = mercury__int__abs_1_f_0(libs__rat__Den_5);
            }
            {
              libs__rat__V_18_18 = mercury__int__f_47_47_2_f_0(libs__rat__Num2_10, libs__rat__G_9);
            }
            {
              libs__rat__V_19_19 = mercury__int__f_47_47_2_f_0(libs__rat__Den2_11, libs__rat__G_9);
            }
            {
              libs__rat__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 0) = ((MR_Box) (libs__rat__V_18_18));
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 1) = ((MR_Box) (libs__rat__V_19_19));
            }
          }
      }
    return libs__rat__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
libs__rat__rat_1_f_0(
  MR_Integer libs__rat__Int_3)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__HeadVar__2_2;

    {
      libs__rat__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 0) = ((MR_Box) (libs__rat__Int_3));
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    return libs__rat__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
libs__rat__f_greater_or_equal_2_p_0(
  MR_Word libs__rat__X_3,
  MR_Word libs__rat__Y_4)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__Diff_9;
    MR_Word libs__rat__V_12_12;
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
    MR_Integer libs__rat__V_17_17;
    MR_Integer libs__rat__V_16_16;

    {
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
    }
    {
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      libs__rat__succeeded = MR_FALSE;
    else
      {
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
      }
    libs__rat__succeeded = !(libs__rat__succeeded);
    return libs__rat__succeeded;
  }
}

MR_bool MR_CALL 
libs__rat__f_less_or_equal_2_p_0(
  MR_Word libs__rat__X_3,
  MR_Word libs__rat__Y_4)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__Diff_9;
    MR_Word libs__rat__V_12_12;
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
    MR_Integer libs__rat__V_17_17;
    MR_Integer libs__rat__V_16_16;

    {
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
    }
    {
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      libs__rat__succeeded = MR_FALSE;
    else
      {
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
        if (libs__rat__succeeded)
          libs__rat__succeeded = MR_FALSE;
        else
          libs__rat__succeeded = MR_TRUE;
      }
    libs__rat__succeeded = !(libs__rat__succeeded);
    return libs__rat__succeeded;
  }
}

MR_bool MR_CALL 
libs__rat__f_greater_than_2_p_0(
  MR_Word libs__rat__X_3,
  MR_Word libs__rat__Y_4)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__Diff_9;
    MR_Word libs__rat__V_12_12;
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
    MR_Integer libs__rat__V_17_17;
    MR_Integer libs__rat__V_16_16;

    {
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
    }
    {
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      libs__rat__succeeded = MR_FALSE;
    else
      {
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
        if (libs__rat__succeeded)
          libs__rat__succeeded = MR_FALSE;
        else
          libs__rat__succeeded = MR_TRUE;
      }
    return libs__rat__succeeded;
  }
}

MR_bool MR_CALL 
libs__rat__f_less_than_2_p_0(
  MR_Word libs__rat__X_3,
  MR_Word libs__rat__Y_4)
{
  {
    MR_bool libs__rat__succeeded;
    MR_Word libs__rat__Diff_9;
    MR_Word libs__rat__V_12_12;
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
    MR_Integer libs__rat__V_17_17;
    MR_Integer libs__rat__V_16_16;

    {
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
    }
    {
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
    if (libs__rat__succeeded)
      libs__rat__succeeded = MR_FALSE;
    else
      {
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
      }
    return libs__rat__succeeded;
  }
}

void mercury__libs__rat__init(void)
{
}

void mercury__libs__rat__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__rat__libs__rat__type_ctor_info_rat_0);
}

void mercury__libs__rat__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.rat. */
