/*
** Automatically generated from `rat.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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
#include "io.mih"
#include "libs.mih"
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




#line 66 "libs.rat.c"
static const MR_PseudoTypeInfo libs__rat__libs__rat__field_types_rat_0_0[2];

#line 69 "libs.rat.c"
static const MR_DuFunctorDesc libs__rat__libs__rat__du_functor_desc_rat_0_0;

#line 72 "libs.rat.c"
static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_stag_ordered_rat_0_0[1];

#line 75 "libs.rat.c"
static const MR_DuPtagLayout libs__rat__libs__rat__du_ptag_ordered_rat_0[1];

#line 78 "libs.rat.c"
static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_name_ordered_rat_0[1];

#line 81 "libs.rat.c"
static const MR_Integer libs__rat__libs__rat__functor_number_map_rat_0[1];

#line 84 "libs.rat.c"
static MR_bool MR_CALL 
libs__rat____Unify____rat_0_0_10001(
#line 87 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_1,
#line 89 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_2);

#line 92 "libs.rat.c"
static void MR_CALL 
libs__rat____Compare____rat_0_0_10001(
#line 95 "libs.rat.c"
  MR_Box * libs__rat__wrapper_arg_1,
#line 97 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_2,
#line 99 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_3);

#line 177 "rat.m"
static MR_Integer MR_CALL 
libs__rat__gcd_2_2_f_0(
#line 177 "rat.m"
  MR_Integer libs__rat__A_4,
#line 177 "rat.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 144 "libs.rat.c"
static const MR_PseudoTypeInfo libs__rat__libs__rat__field_types_rat_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 150 "libs.rat.c"
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
  NULL
};

#line 165 "libs.rat.c"
static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_stag_ordered_rat_0_0[1] = {
  &libs__rat__libs__rat__du_functor_desc_rat_0_0
};

#line 170 "libs.rat.c"
static const MR_DuPtagLayout libs__rat__libs__rat__du_ptag_ordered_rat_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__rat__libs__rat__du_stag_ordered_rat_0_0
  }
};

#line 179 "libs.rat.c"
static const MR_DuFunctorDescPtr libs__rat__libs__rat__du_name_ordered_rat_0[1] = {
  &libs__rat__libs__rat__du_functor_desc_rat_0_0
};

#line 184 "libs.rat.c"
static const MR_Integer libs__rat__libs__rat__functor_number_map_rat_0[1] = {
  (MR_Integer) 0
};

#line 189 "libs.rat.c"
const MR_TypeCtorInfo_Struct libs__rat__libs__rat__type_ctor_info_rat_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__rat____Unify____rat_0_0_10001)),
  ((MR_Box) (libs__rat____Compare____rat_0_0_10001)),
  (MR_String) "libs.rat",
  (MR_String) "rat",
  {
    libs__rat__libs__rat__du_name_ordered_rat_0
  },
  {
    libs__rat__libs__rat__du_ptag_ordered_rat_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__rat__libs__rat__functor_number_map_rat_0
};

#line 210 "libs.rat.c"
static MR_bool MR_CALL 
libs__rat____Unify____rat_0_0_10001(
#line 213 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_1,
#line 215 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_2)
#line 217 "libs.rat.c"
{
#line 219 "libs.rat.c"
  {
#line 221 "libs.rat.c"
    MR_bool libs__rat__succeeded;

#line 224 "libs.rat.c"
    {
#line 226 "libs.rat.c"
      libs__rat__succeeded = libs__rat____Unify____rat_0_0(((MR_Word) libs__rat__wrapper_arg_1), ((MR_Word) libs__rat__wrapper_arg_2));
    }
#line 229 "libs.rat.c"
    return libs__rat__succeeded;
#line 231 "libs.rat.c"
  }
#line 233 "libs.rat.c"
}

#line 236 "libs.rat.c"
static void MR_CALL 
libs__rat____Compare____rat_0_0_10001(
#line 239 "libs.rat.c"
  MR_Box * libs__rat__wrapper_arg_1,
#line 241 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_2,
#line 243 "libs.rat.c"
  MR_Box libs__rat__wrapper_arg_3)
#line 245 "libs.rat.c"
{
#line 247 "libs.rat.c"
  {
#line 249 "libs.rat.c"
    MR_Word libs__rat__conv0_HeadVar__1_1;

#line 252 "libs.rat.c"
    {
#line 254 "libs.rat.c"
      libs__rat____Compare____rat_0_0(&libs__rat__conv0_HeadVar__1_1, ((MR_Word) libs__rat__wrapper_arg_2), ((MR_Word) libs__rat__wrapper_arg_3));
    }
#line 257 "libs.rat.c"
    *libs__rat__wrapper_arg_1 = ((MR_Box) (libs__rat__conv0_HeadVar__1_1));
#line 259 "libs.rat.c"
  }
#line 261 "libs.rat.c"
}

#line 104 "rat.m"
void MR_CALL 
libs__rat____Compare____rat_0_0(
#line 104 "rat.m"
  MR_Word * libs__rat__HeadVar__1_1,
#line 104 "rat.m"
  MR_Word libs__rat__HeadVar__2_2,
#line 104 "rat.m"
  MR_Word libs__rat__HeadVar__3_3)
#line 104 "rat.m"
{
#line 104 "rat.m"
  {
#line 104 "rat.m"
    MR_bool libs__rat__succeeded;
#line 104 "rat.m"
    MR_Integer libs__rat__CastX_9 = (MR_Integer) libs__rat__HeadVar__2_2;
#line 104 "rat.m"
    MR_Integer libs__rat__CastY_10 = (MR_Integer) libs__rat__HeadVar__3_3;

#line 104 "rat.m"
    libs__rat__succeeded = (libs__rat__CastX_9 == libs__rat__CastY_10);
#line 104 "rat.m"
    if (libs__rat__succeeded)
#line 288 "libs.rat.c"
      *libs__rat__HeadVar__1_1 = (MR_Integer) 0;
#line 104 "rat.m"
    else
#line 104 "rat.m"
      {
#line 104 "rat.m"
        MR_Integer libs__rat__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
#line 104 "rat.m"
        MR_Integer libs__rat__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));
#line 104 "rat.m"
        MR_Integer libs__rat__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, (MR_Integer) 0)));
#line 104 "rat.m"
        MR_Integer libs__rat__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, (MR_Integer) 1)));
#line 104 "rat.m"
        MR_Word libs__rat__V_8_8;

#line 104 "rat.m"
        {
#line 104 "rat.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__rat__V_8_8, libs__rat__V_4_4, libs__rat__V_6_6);
        }
#line 310 "libs.rat.c"
        libs__rat__succeeded = (libs__rat__V_8_8 == (MR_Integer) 0);
#line 104 "rat.m"
        libs__rat__succeeded = !(libs__rat__succeeded);
#line 104 "rat.m"
        if (libs__rat__succeeded)
#line 104 "rat.m"
          *libs__rat__HeadVar__1_1 = libs__rat__V_8_8;
#line 104 "rat.m"
        else
#line 104 "rat.m"
          {
#line 104 "rat.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(libs__rat__HeadVar__1_1, libs__rat__V_5_5, libs__rat__V_7_7);
#line 104 "rat.m"
            return;
          }
#line 104 "rat.m"
      }
#line 104 "rat.m"
  }
#line 104 "rat.m"
}

#line 104 "rat.m"
MR_bool MR_CALL 
libs__rat____Unify____rat_0_0(
#line 104 "rat.m"
  MR_Word libs__rat__HeadVar__1_1,
#line 104 "rat.m"
  MR_Word libs__rat__HeadVar__2_2)
#line 104 "rat.m"
{
#line 104 "rat.m"
  {
#line 104 "rat.m"
    MR_bool libs__rat__succeeded;
#line 104 "rat.m"
    MR_Integer libs__rat__CastX_7 = (MR_Integer) libs__rat__HeadVar__1_1;
#line 104 "rat.m"
    MR_Integer libs__rat__CastY_8 = (MR_Integer) libs__rat__HeadVar__2_2;

#line 104 "rat.m"
    libs__rat__succeeded = (libs__rat__CastX_7 == libs__rat__CastY_8);
#line 104 "rat.m"
    if (libs__rat__succeeded)
#line 104 "rat.m"
      libs__rat__succeeded = MR_TRUE;
#line 104 "rat.m"
    else
#line 104 "rat.m"
      {
#line 104 "rat.m"
        MR_Integer libs__rat__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 104 "rat.m"
        MR_Integer libs__rat__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
#line 104 "rat.m"
        MR_Integer libs__rat__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
#line 104 "rat.m"
        MR_Integer libs__rat__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));

#line 371 "libs.rat.c"
        libs__rat__succeeded = (libs__rat__V_3_3 == libs__rat__V_5_5);
#line 104 "rat.m"
        if (libs__rat__succeeded)
#line 375 "libs.rat.c"
          libs__rat__succeeded = (libs__rat__V_4_4 == libs__rat__V_6_6);
#line 104 "rat.m"
      }
#line 104 "rat.m"
    return libs__rat__succeeded;
#line 104 "rat.m"
  }
#line 104 "rat.m"
}

#line 177 "rat.m"
static MR_Integer MR_CALL 
libs__rat__gcd_2_2_f_0(
#line 177 "rat.m"
  MR_Integer libs__rat__A_4,
#line 177 "rat.m"
  MR_Integer libs__rat__B_5)
#line 177 "rat.m"
{
#line 179 "rat.m"
  while (MR_TRUE)
#line 179 "rat.m"
    {
#line 179 "rat.m"
      /* tailcall optimized into a loop */
#line 179 "rat.m"
      {
#line 179 "rat.m"
        MR_bool libs__rat__succeeded = (libs__rat__B_5 == (MR_Integer) 0);
#line 179 "rat.m"
        MR_Integer libs__rat__HeadVar__3_3;

#line 179 "rat.m"
        if (libs__rat__succeeded)
#line 179 "rat.m"
          libs__rat__HeadVar__3_3 = libs__rat__A_4;
#line 179 "rat.m"
        else
#line 179 "rat.m"
          {
#line 179 "rat.m"
            MR_Integer libs__rat__V_6_6;

#line 179 "rat.m"
            {
#line 179 "rat.m"
              libs__rat__V_6_6 = mercury__int__rem_2_f_0(libs__rat__A_4, libs__rat__B_5);
            }
#line 179 "rat.m"
            /* direct tailcall eliminated */
#line 179 "rat.m"
            {
#line 179 "rat.m"
              MR_Integer libs__rat__A__tmp_copy_4 = libs__rat__B_5;
#line 179 "rat.m"
              MR_Integer libs__rat__B__tmp_copy_5 = libs__rat__V_6_6;

#line 179 "rat.m"
              libs__rat__B_5 = libs__rat__B__tmp_copy_5;
#line 179 "rat.m"
              libs__rat__A_4 = libs__rat__A__tmp_copy_4;
#line 179 "rat.m"
            }
#line 179 "rat.m"
            continue;
#line 179 "rat.m"
          }
#line 179 "rat.m"
        return libs__rat__HeadVar__3_3;
#line 179 "rat.m"
      }
#line 179 "rat.m"
      break;
#line 179 "rat.m"
    }
#line 177 "rat.m"
}

#line 75 "rat.m"
void MR_CALL 
libs__rat__write_rat_3_p_0(
#line 75 "rat.m"
  MR_Word libs__rat__HeadVar__1_1)
#line 75 "rat.m"
{
#line 231 "rat.m"
  {
#line 231 "rat.m"
    MR_bool libs__rat__succeeded;
#line 231 "rat.m"
    MR_Integer libs__rat__Numerator_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "rat.m"
    MR_Integer libs__rat__Denominator_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));

#line 232 "rat.m"
    {
#line 232 "rat.m"
      mercury__io__write_string_3_p_0((MR_String) "r(");
    }
#line 233 "rat.m"
    {
#line 233 "rat.m"
      mercury__io__write_int_3_p_0(libs__rat__Numerator_4);
    }
#line 234 "rat.m"
    {
#line 234 "rat.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 235 "rat.m"
    {
#line 235 "rat.m"
      mercury__io__write_int_3_p_0(libs__rat__Denominator_5);
    }
#line 236 "rat.m"
    {
#line 236 "rat.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 236 "rat.m"
      return;
    }
#line 231 "rat.m"
  }
#line 75 "rat.m"
}

#line 71 "rat.m"
MR_String MR_CALL 
libs__rat__to_string_1_f_0(
#line 71 "rat.m"
  MR_Word libs__rat__HeadVar__1_1)
#line 71 "rat.m"
{
#line 218 "rat.m"
  {
#line 218 "rat.m"
    MR_bool libs__rat__succeeded;
#line 218 "rat.m"
    MR_String libs__rat__HeadVar__2_2;
#line 218 "rat.m"
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "rat.m"
    MR_Integer libs__rat__Denom_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));

#line 219 "rat.m"
    libs__rat__succeeded = (libs__rat__Num_3 == (MR_Integer) 0);
#line 218 "rat.m"
    if (libs__rat__succeeded)
#line 218 "rat.m"
      libs__rat__HeadVar__2_2 = (MR_String) "0";
#line 218 "rat.m"
    else
#line 222 "rat.m"
      {
#line 222 "rat.m"
        MR_String libs__rat__V_6_6;
#line 222 "rat.m"
        MR_String libs__rat__V_7_7;
#line 222 "rat.m"
        MR_String libs__rat__V_8_8;
#line 222 "rat.m"
        MR_String libs__rat__V_9_9;

#line 222 "rat.m"
        {
#line 222 "rat.m"
          libs__rat__V_7_7 = mercury__string__int_to_string_1_f_0(libs__rat__Num_3);
        }
#line 223 "rat.m"
        libs__rat__succeeded = (libs__rat__Denom_4 == (MR_Integer) 1);
#line 228 "rat.m"
        if (libs__rat__succeeded)
#line 228 "rat.m"
          libs__rat__V_9_9 = (MR_String) "";
#line 228 "rat.m"
        else
#line 226 "rat.m"
          {
#line 226 "rat.m"
            MR_String libs__rat__V_11_11;

#line 226 "rat.m"
            {
#line 226 "rat.m"
              libs__rat__V_11_11 = mercury__string__int_to_string_1_f_0(libs__rat__Denom_4);
            }
#line 228 "rat.m"
            {
#line 228 "rat.m"
              libs__rat__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", libs__rat__V_11_11);
            }
#line 226 "rat.m"
          }
#line 222 "rat.m"
        {
#line 222 "rat.m"
          libs__rat__V_8_8 = mercury__string__f_43_43_2_f_0(libs__rat__V_9_9, (MR_String) ")");
        }
#line 222 "rat.m"
        {
#line 222 "rat.m"
          libs__rat__V_6_6 = mercury__string__f_43_43_2_f_0(libs__rat__V_7_7, libs__rat__V_8_8);
        }
#line 218 "rat.m"
        {
#line 218 "rat.m"
          return libs__rat__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "(", libs__rat__V_6_6);
        }
#line 222 "rat.m"
      }
#line 218 "rat.m"
    return libs__rat__HeadVar__2_2;
#line 218 "rat.m"
  }
#line 71 "rat.m"
}

#line 67 "rat.m"
MR_Word MR_CALL 
libs__rat__zero_0_f_0(void)
#line 67 "rat.m"
{
#line 121 "rat.m"
  {
#line 121 "rat.m"
    MR_bool libs__rat__succeeded;

#line 121 "rat.m"
    return (MR_Word) &libs__rat_scalar_common_1[0];
#line 121 "rat.m"
  }
#line 67 "rat.m"
}

#line 65 "rat.m"
MR_Word MR_CALL 
libs__rat__one_0_f_0(void)
#line 65 "rat.m"
{
#line 119 "rat.m"
  {
#line 119 "rat.m"
    MR_bool libs__rat__succeeded;

#line 119 "rat.m"
    return (MR_Word) &libs__rat_scalar_common_1[1];
#line 119 "rat.m"
  }
#line 65 "rat.m"
}

#line 63 "rat.m"
MR_Word MR_CALL 
libs__rat__abs_1_f_0(
#line 63 "rat.m"
  MR_Word libs__rat__HeadVar__1_1)
#line 63 "rat.m"
{
#line 157 "rat.m"
  {
#line 157 "rat.m"
    MR_bool libs__rat__succeeded;
#line 157 "rat.m"
    MR_Word libs__rat__HeadVar__2_2;
#line 157 "rat.m"
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "rat.m"
    MR_Integer libs__rat__Den_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
#line 157 "rat.m"
    MR_Integer libs__rat__V_5_5;

#line 157 "rat.m"
    {
#line 157 "rat.m"
      libs__rat__V_5_5 = mercury__int__abs_1_f_0(libs__rat__Num_3);
    }
#line 157 "rat.m"
    {
#line 157 "rat.m"
      libs__rat__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 157 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 0) = ((MR_Box) (libs__rat__V_5_5));
#line 157 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 1) = ((MR_Box) (libs__rat__Den_4));
#line 157 "rat.m"
    }
#line 157 "rat.m"
    return libs__rat__HeadVar__2_2;
#line 157 "rat.m"
  }
#line 63 "rat.m"
}

#line 61 "rat.m"
MR_Integer MR_CALL 
libs__rat__denom_1_f_0(
#line 61 "rat.m"
  MR_Word libs__rat__HeadVar__1_1)
#line 61 "rat.m"
{
#line 155 "rat.m"
  {
#line 155 "rat.m"
    MR_bool libs__rat__succeeded;
#line 155 "rat.m"
    MR_Integer libs__rat__Den_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "rat.m"
    MR_Integer libs__rat__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));

#line 155 "rat.m"
    return libs__rat__Den_4;
#line 155 "rat.m"
  }
#line 61 "rat.m"
}

#line 59 "rat.m"
MR_Integer MR_CALL 
libs__rat__numer_1_f_0(
#line 59 "rat.m"
  MR_Word libs__rat__HeadVar__1_1)
#line 59 "rat.m"
{
#line 153 "rat.m"
  {
#line 153 "rat.m"
    MR_bool libs__rat__succeeded;
#line 153 "rat.m"
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "rat.m"
    MR_Integer libs__rat__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));

#line 153 "rat.m"
    return libs__rat__Num_3;
#line 153 "rat.m"
  }
#line 59 "rat.m"
}

#line 57 "rat.m"
MR_Word MR_CALL 
libs__rat__f_slash_2_f_0(
#line 57 "rat.m"
  MR_Word libs__rat__X_4,
#line 57 "rat.m"
  MR_Word libs__rat__Y_5)
#line 57 "rat.m"
{
#line 142 "rat.m"
  {
#line 142 "rat.m"
    MR_bool libs__rat__succeeded;
#line 142 "rat.m"
    MR_Word libs__rat__HeadVar__3_3;
#line 142 "rat.m"
    MR_Word libs__rat__V_6_6;
#line 142 "rat.m"
    MR_Integer libs__rat__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 0)));
#line 142 "rat.m"
    MR_Integer libs__rat__Den_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 1)));

#line 147 "rat.m"
    libs__rat__succeeded = (libs__rat__Num_7 == (MR_Integer) 0);
#line 146 "rat.m"
    if (libs__rat__succeeded)
#line 148 "rat.m"
      {
#line 146 "rat.m"
        MR_Box libs__rat__conv0_V_6_6;

#line 146 "rat.m"
        {
#line 146 "rat.m"
          libs__rat__conv0_V_6_6 = mercury__require__unexpected_3_f_0((MR_Word) &libs__rat__libs__rat__type_ctor_info_rat_0, (MR_String) "libs.rat", (MR_String) "function \140libs.rat.reciprocal\'/1", (MR_String) "division by zero");
        }
#line 146 "rat.m"
        libs__rat__V_6_6 = ((MR_Word) libs__rat__conv0_V_6_6);
#line 148 "rat.m"
      }
#line 146 "rat.m"
    else
#line 150 "rat.m"
      {
#line 150 "rat.m"
        MR_Integer libs__rat__V_12_12;
#line 150 "rat.m"
        MR_Integer libs__rat__V_13_13;
#line 150 "rat.m"
        MR_Integer libs__rat__V_14_14;

#line 194 "rat.m"
        libs__rat__succeeded = (libs__rat__Num_7 == (MR_Integer) 0);
#line 194 "rat.m"
        if (libs__rat__succeeded)
#line 194 "rat.m"
          libs__rat__V_13_13 = (MR_Integer) 0;
#line 194 "rat.m"
        else
#line 194 "rat.m"
          {
#line 194 "rat.m"
            libs__rat__succeeded = (libs__rat__Num_7 < (MR_Integer) 0);
#line 194 "rat.m"
            if (libs__rat__succeeded)
#line 194 "rat.m"
              libs__rat__V_13_13 = (MR_Integer) -1;
#line 194 "rat.m"
            else
#line 194 "rat.m"
              libs__rat__V_13_13 = (MR_Integer) 1;
#line 194 "rat.m"
          }
#line 150 "rat.m"
        libs__rat__V_12_12 = (libs__rat__V_13_13 * libs__rat__Den_8);
#line 150 "rat.m"
        {
#line 150 "rat.m"
          libs__rat__V_14_14 = mercury__int__abs_1_f_0(libs__rat__Num_7);
        }
#line 146 "rat.m"
        {
#line 146 "rat.m"
          libs__rat__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 146 "rat.m"
          MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 0) = ((MR_Box) (libs__rat__V_12_12));
#line 146 "rat.m"
          MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 1) = ((MR_Box) (libs__rat__V_14_14));
#line 146 "rat.m"
        }
#line 150 "rat.m"
      }
#line 142 "rat.m"
    {
#line 142 "rat.m"
      return libs__rat__HeadVar__3_3 = libs__rat__f_times_2_f_0(libs__rat__X_4, libs__rat__V_6_6);
    }
#line 142 "rat.m"
    return libs__rat__HeadVar__3_3;
#line 142 "rat.m"
  }
#line 57 "rat.m"
}

#line 55 "rat.m"
MR_Word MR_CALL 
libs__rat__f_times_2_f_0(
#line 55 "rat.m"
  MR_Word libs__rat__HeadVar__1_1,
#line 55 "rat.m"
  MR_Word libs__rat__HeadVar__2_2)
#line 55 "rat.m"
{
#line 136 "rat.m"
  {
#line 136 "rat.m"
    MR_bool libs__rat__succeeded;
#line 136 "rat.m"
    MR_Word libs__rat__HeadVar__3_3;
#line 136 "rat.m"
    MR_Integer libs__rat__An_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "rat.m"
    MR_Integer libs__rat__Ad_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "rat.m"
    MR_Integer libs__rat__Bn_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
#line 136 "rat.m"
    MR_Integer libs__rat__Bd_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "rat.m"
    MR_Integer libs__rat__Numer_8;
#line 136 "rat.m"
    MR_Integer libs__rat__Denom_9;
#line 136 "rat.m"
    MR_Integer libs__rat__G1_10;
#line 136 "rat.m"
    MR_Integer libs__rat__G2_11;
#line 136 "rat.m"
    MR_Integer libs__rat__V_12_12;
#line 136 "rat.m"
    MR_Integer libs__rat__V_13_13;
#line 136 "rat.m"
    MR_Integer libs__rat__V_14_14;
#line 136 "rat.m"
    MR_Integer libs__rat__V_15_15;
#line 136 "rat.m"
    MR_Integer libs__rat__V_18_18;
#line 136 "rat.m"
    MR_Integer libs__rat__V_19_19;
#line 136 "rat.m"
    MR_Integer libs__rat__V_22_22;
#line 136 "rat.m"
    MR_Integer libs__rat__V_23_23;

#line 175 "rat.m"
    {
#line 175 "rat.m"
      libs__rat__V_18_18 = mercury__int__abs_1_f_0(libs__rat__An_4);
    }
#line 175 "rat.m"
    {
#line 175 "rat.m"
      libs__rat__V_19_19 = mercury__int__abs_1_f_0(libs__rat__Bd_7);
    }
#line 175 "rat.m"
    {
#line 175 "rat.m"
      libs__rat__G1_10 = libs__rat__gcd_2_2_f_0(libs__rat__V_18_18, libs__rat__V_19_19);
    }
#line 175 "rat.m"
    {
#line 175 "rat.m"
      libs__rat__V_22_22 = mercury__int__abs_1_f_0(libs__rat__Ad_5);
    }
#line 175 "rat.m"
    {
#line 175 "rat.m"
      libs__rat__V_23_23 = mercury__int__abs_1_f_0(libs__rat__Bn_6);
    }
#line 175 "rat.m"
    {
#line 175 "rat.m"
      libs__rat__G2_11 = libs__rat__gcd_2_2_f_0(libs__rat__V_22_22, libs__rat__V_23_23);
    }
#line 139 "rat.m"
    {
#line 139 "rat.m"
      libs__rat__V_12_12 = mercury__int__f_47_47_2_f_0(libs__rat__An_4, libs__rat__G1_10);
    }
#line 139 "rat.m"
    {
#line 139 "rat.m"
      libs__rat__V_13_13 = mercury__int__f_47_47_2_f_0(libs__rat__Bn_6, libs__rat__G2_11);
    }
#line 139 "rat.m"
    libs__rat__Numer_8 = (libs__rat__V_12_12 * libs__rat__V_13_13);
#line 140 "rat.m"
    {
#line 140 "rat.m"
      libs__rat__V_14_14 = mercury__int__f_47_47_2_f_0(libs__rat__Ad_5, libs__rat__G2_11);
    }
#line 140 "rat.m"
    {
#line 140 "rat.m"
      libs__rat__V_15_15 = mercury__int__f_47_47_2_f_0(libs__rat__Bd_7, libs__rat__G1_10);
    }
#line 140 "rat.m"
    libs__rat__Denom_9 = (libs__rat__V_14_14 * libs__rat__V_15_15);
#line 162 "rat.m"
    libs__rat__succeeded = (libs__rat__Denom_9 == (MR_Integer) 0);
#line 164 "rat.m"
    if (libs__rat__succeeded)
#line 163 "rat.m"
      {
#line 163 "rat.m"
        {
#line 163 "rat.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.rat", (MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
        }
#line 163 "rat.m"
      }
#line 164 "rat.m"
    else
#line 166 "rat.m"
      {
#line 164 "rat.m"
        libs__rat__succeeded = (libs__rat__Numer_8 == (MR_Integer) 0);
#line 166 "rat.m"
        if (libs__rat__succeeded)
#line 165 "rat.m"
          {
#line 165 "rat.m"
            libs__rat__HeadVar__3_3 = (MR_Word) &libs__rat_scalar_common_1[0];
#line 165 "rat.m"
          }
#line 166 "rat.m"
        else
#line 167 "rat.m"
          {
#line 167 "rat.m"
            MR_Integer libs__rat__G_27;
#line 167 "rat.m"
            MR_Integer libs__rat__Num2_28;
#line 167 "rat.m"
            MR_Integer libs__rat__Den2_29;
#line 167 "rat.m"
            MR_Integer libs__rat__V_35_35;
#line 167 "rat.m"
            MR_Integer libs__rat__V_36_36;
#line 167 "rat.m"
            MR_Integer libs__rat__V_37_37;
#line 167 "rat.m"
            MR_Integer libs__rat__V_40_40;
#line 167 "rat.m"
            MR_Integer libs__rat__V_41_41;

#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_40_40 = mercury__int__abs_1_f_0(libs__rat__Numer_8);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_41_41 = mercury__int__abs_1_f_0(libs__rat__Denom_9);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__G_27 = libs__rat__gcd_2_2_f_0(libs__rat__V_40_40, libs__rat__V_41_41);
            }
#line 194 "rat.m"
            libs__rat__succeeded = (libs__rat__Denom_9 == (MR_Integer) 0);
#line 194 "rat.m"
            if (libs__rat__succeeded)
#line 194 "rat.m"
              libs__rat__V_35_35 = (MR_Integer) 0;
#line 194 "rat.m"
            else
#line 194 "rat.m"
              {
#line 194 "rat.m"
                libs__rat__succeeded = (libs__rat__Denom_9 < (MR_Integer) 0);
#line 194 "rat.m"
                if (libs__rat__succeeded)
#line 194 "rat.m"
                  libs__rat__V_35_35 = (MR_Integer) -1;
#line 194 "rat.m"
                else
#line 194 "rat.m"
                  libs__rat__V_35_35 = (MR_Integer) 1;
#line 194 "rat.m"
              }
#line 168 "rat.m"
            libs__rat__Num2_28 = (libs__rat__Numer_8 * libs__rat__V_35_35);
#line 169 "rat.m"
            {
#line 169 "rat.m"
              libs__rat__Den2_29 = mercury__int__abs_1_f_0(libs__rat__Denom_9);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__V_36_36 = mercury__int__f_47_47_2_f_0(libs__rat__Num2_28, libs__rat__G_27);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__V_37_37 = mercury__int__f_47_47_2_f_0(libs__rat__Den2_29, libs__rat__G_27);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "rat.m"
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 0) = ((MR_Box) (libs__rat__V_36_36));
#line 170 "rat.m"
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 1) = ((MR_Box) (libs__rat__V_37_37));
#line 170 "rat.m"
            }
#line 167 "rat.m"
          }
#line 166 "rat.m"
      }
#line 136 "rat.m"
    return libs__rat__HeadVar__3_3;
#line 136 "rat.m"
  }
#line 55 "rat.m"
}

#line 53 "rat.m"
MR_Word MR_CALL 
libs__rat__f_minus_2_f_0(
#line 53 "rat.m"
  MR_Word libs__rat__X_4,
#line 53 "rat.m"
  MR_Word libs__rat__Y_5)
#line 53 "rat.m"
{
#line 133 "rat.m"
  {
#line 133 "rat.m"
    MR_bool libs__rat__succeeded;
#line 133 "rat.m"
    MR_Word libs__rat__HeadVar__3_3;
#line 133 "rat.m"
    MR_Word libs__rat__V_6_6;
#line 133 "rat.m"
    MR_Integer libs__rat__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 0)));
#line 133 "rat.m"
    MR_Integer libs__rat__Den_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_5, (MR_Integer) 1)));
#line 133 "rat.m"
    MR_Integer libs__rat__V_9_9 = ((MR_Integer) 0 - libs__rat__Num_7);

#line 125 "rat.m"
    {
#line 125 "rat.m"
      libs__rat__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 0) = ((MR_Box) (libs__rat__V_9_9));
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_6_6, 1) = ((MR_Box) (libs__rat__Den_8));
#line 125 "rat.m"
    }
#line 133 "rat.m"
    {
#line 133 "rat.m"
      return libs__rat__HeadVar__3_3 = libs__rat__f_plus_2_f_0(libs__rat__X_4, libs__rat__V_6_6);
    }
#line 133 "rat.m"
    return libs__rat__HeadVar__3_3;
#line 133 "rat.m"
  }
#line 53 "rat.m"
}

#line 51 "rat.m"
MR_Word MR_CALL 
libs__rat__f_plus_2_f_0(
#line 51 "rat.m"
  MR_Word libs__rat__HeadVar__1_1,
#line 51 "rat.m"
  MR_Word libs__rat__HeadVar__2_2)
#line 51 "rat.m"
{
#line 127 "rat.m"
  {
#line 127 "rat.m"
    MR_bool libs__rat__succeeded;
#line 127 "rat.m"
    MR_Word libs__rat__HeadVar__3_3;
#line 127 "rat.m"
    MR_Integer libs__rat__An_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "rat.m"
    MR_Integer libs__rat__Ad_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
#line 127 "rat.m"
    MR_Integer libs__rat__Bn_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 0)));
#line 127 "rat.m"
    MR_Integer libs__rat__Bd_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, (MR_Integer) 1)));
#line 127 "rat.m"
    MR_Integer libs__rat__Numer_8;
#line 127 "rat.m"
    MR_Integer libs__rat__M_9;
#line 127 "rat.m"
    MR_Integer libs__rat__CA_10;
#line 127 "rat.m"
    MR_Integer libs__rat__CB_11;
#line 127 "rat.m"
    MR_Integer libs__rat__V_12_12;
#line 127 "rat.m"
    MR_Integer libs__rat__V_13_13;

#line 184 "rat.m"
    libs__rat__succeeded = (libs__rat__Ad_5 == (MR_Integer) 0);
#line 183 "rat.m"
    if (libs__rat__succeeded)
#line 183 "rat.m"
      libs__rat__M_9 = (MR_Integer) 0;
#line 183 "rat.m"
    else
#line 183 "rat.m"
      {
#line 186 "rat.m"
        libs__rat__succeeded = (libs__rat__Bd_7 == (MR_Integer) 0);
#line 183 "rat.m"
        if (libs__rat__succeeded)
#line 183 "rat.m"
          libs__rat__M_9 = (MR_Integer) 0;
#line 183 "rat.m"
        else
#line 189 "rat.m"
          {
#line 189 "rat.m"
            MR_Integer libs__rat__V_16_16;
#line 189 "rat.m"
            MR_Integer libs__rat__V_17_17;
#line 189 "rat.m"
            MR_Integer libs__rat__V_18_18;
#line 189 "rat.m"
            MR_Integer libs__rat__V_21_21;
#line 189 "rat.m"
            MR_Integer libs__rat__V_22_22;

#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_21_21 = mercury__int__abs_1_f_0(libs__rat__Ad_5);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_22_22 = mercury__int__abs_1_f_0(libs__rat__Bd_7);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_18_18 = libs__rat__gcd_2_2_f_0(libs__rat__V_21_21, libs__rat__V_22_22);
            }
#line 189 "rat.m"
            {
#line 189 "rat.m"
              libs__rat__V_17_17 = mercury__int__f_47_47_2_f_0(libs__rat__Ad_5, libs__rat__V_18_18);
            }
#line 189 "rat.m"
            libs__rat__V_16_16 = (libs__rat__V_17_17 * libs__rat__Bd_7);
#line 183 "rat.m"
            {
#line 183 "rat.m"
              libs__rat__M_9 = mercury__int__abs_1_f_0(libs__rat__V_16_16);
            }
#line 189 "rat.m"
          }
#line 183 "rat.m"
      }
#line 129 "rat.m"
    {
#line 129 "rat.m"
      libs__rat__CA_10 = mercury__int__f_47_47_2_f_0(libs__rat__M_9, libs__rat__Ad_5);
    }
#line 130 "rat.m"
    {
#line 130 "rat.m"
      libs__rat__CB_11 = mercury__int__f_47_47_2_f_0(libs__rat__M_9, libs__rat__Bd_7);
    }
#line 131 "rat.m"
    libs__rat__V_12_12 = (libs__rat__An_4 * libs__rat__CA_10);
#line 131 "rat.m"
    libs__rat__V_13_13 = (libs__rat__Bn_6 * libs__rat__CB_11);
#line 131 "rat.m"
    libs__rat__Numer_8 = (libs__rat__V_12_12 + libs__rat__V_13_13);
#line 162 "rat.m"
    libs__rat__succeeded = (libs__rat__M_9 == (MR_Integer) 0);
#line 164 "rat.m"
    if (libs__rat__succeeded)
#line 163 "rat.m"
      {
#line 163 "rat.m"
        {
#line 163 "rat.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.rat", (MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
        }
#line 163 "rat.m"
      }
#line 164 "rat.m"
    else
#line 166 "rat.m"
      {
#line 164 "rat.m"
        libs__rat__succeeded = (libs__rat__Numer_8 == (MR_Integer) 0);
#line 166 "rat.m"
        if (libs__rat__succeeded)
#line 165 "rat.m"
          {
#line 165 "rat.m"
            libs__rat__HeadVar__3_3 = (MR_Word) &libs__rat_scalar_common_1[0];
#line 165 "rat.m"
          }
#line 166 "rat.m"
        else
#line 167 "rat.m"
          {
#line 167 "rat.m"
            MR_Integer libs__rat__G_26;
#line 167 "rat.m"
            MR_Integer libs__rat__Num2_27;
#line 167 "rat.m"
            MR_Integer libs__rat__Den2_28;
#line 167 "rat.m"
            MR_Integer libs__rat__V_34_34;
#line 167 "rat.m"
            MR_Integer libs__rat__V_35_35;
#line 167 "rat.m"
            MR_Integer libs__rat__V_36_36;
#line 167 "rat.m"
            MR_Integer libs__rat__V_39_39;
#line 167 "rat.m"
            MR_Integer libs__rat__V_40_40;

#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_39_39 = mercury__int__abs_1_f_0(libs__rat__Numer_8);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_40_40 = mercury__int__abs_1_f_0(libs__rat__M_9);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__G_26 = libs__rat__gcd_2_2_f_0(libs__rat__V_39_39, libs__rat__V_40_40);
            }
#line 194 "rat.m"
            libs__rat__succeeded = (libs__rat__M_9 == (MR_Integer) 0);
#line 194 "rat.m"
            if (libs__rat__succeeded)
#line 194 "rat.m"
              libs__rat__V_34_34 = (MR_Integer) 0;
#line 194 "rat.m"
            else
#line 194 "rat.m"
              {
#line 194 "rat.m"
                libs__rat__succeeded = (libs__rat__M_9 < (MR_Integer) 0);
#line 194 "rat.m"
                if (libs__rat__succeeded)
#line 194 "rat.m"
                  libs__rat__V_34_34 = (MR_Integer) -1;
#line 194 "rat.m"
                else
#line 194 "rat.m"
                  libs__rat__V_34_34 = (MR_Integer) 1;
#line 194 "rat.m"
              }
#line 168 "rat.m"
            libs__rat__Num2_27 = (libs__rat__Numer_8 * libs__rat__V_34_34);
#line 169 "rat.m"
            {
#line 169 "rat.m"
              libs__rat__Den2_28 = mercury__int__abs_1_f_0(libs__rat__M_9);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__V_35_35 = mercury__int__f_47_47_2_f_0(libs__rat__Num2_27, libs__rat__G_26);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__V_36_36 = mercury__int__f_47_47_2_f_0(libs__rat__Den2_28, libs__rat__G_26);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "rat.m"
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 0) = ((MR_Box) (libs__rat__V_35_35));
#line 170 "rat.m"
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 1) = ((MR_Box) (libs__rat__V_36_36));
#line 170 "rat.m"
            }
#line 167 "rat.m"
          }
#line 166 "rat.m"
      }
#line 127 "rat.m"
    return libs__rat__HeadVar__3_3;
#line 127 "rat.m"
  }
#line 51 "rat.m"
}

#line 49 "rat.m"
MR_Word MR_CALL 
libs__rat__f_minus_1_f_0(
#line 49 "rat.m"
  MR_Word libs__rat__HeadVar__1_1)
#line 49 "rat.m"
{
#line 125 "rat.m"
  {
#line 125 "rat.m"
    MR_bool libs__rat__succeeded;
#line 125 "rat.m"
    MR_Word libs__rat__HeadVar__2_2;
#line 125 "rat.m"
    MR_Integer libs__rat__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "rat.m"
    MR_Integer libs__rat__Den_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__HeadVar__1_1, (MR_Integer) 1)));
#line 125 "rat.m"
    MR_Integer libs__rat__V_5_5 = ((MR_Integer) 0 - libs__rat__Num_3);

#line 125 "rat.m"
    {
#line 125 "rat.m"
      libs__rat__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 0) = ((MR_Box) (libs__rat__V_5_5));
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 1) = ((MR_Box) (libs__rat__Den_4));
#line 125 "rat.m"
    }
#line 125 "rat.m"
    return libs__rat__HeadVar__2_2;
#line 125 "rat.m"
  }
#line 49 "rat.m"
}

#line 47 "rat.m"
MR_Word MR_CALL 
libs__rat__f_plus_1_f_0(
#line 47 "rat.m"
  MR_Word libs__rat__Rat_3)
#line 47 "rat.m"
{
#line 123 "rat.m"
  {
#line 123 "rat.m"
    MR_bool libs__rat__succeeded;
#line 123 "rat.m"
    MR_Word libs__rat__Rat_2 = libs__rat__Rat_3;

#line 123 "rat.m"
    return libs__rat__Rat_2;
#line 123 "rat.m"
  }
#line 47 "rat.m"
}

#line 45 "rat.m"
MR_Word MR_CALL 
libs__rat__rat_2_f_0(
#line 45 "rat.m"
  MR_Integer libs__rat__Num_4,
#line 45 "rat.m"
  MR_Integer libs__rat__Den_5)
#line 45 "rat.m"
{
#line 164 "rat.m"
  {
#line 164 "rat.m"
    MR_bool libs__rat__succeeded = (libs__rat__Den_5 == (MR_Integer) 0);
#line 164 "rat.m"
    MR_Word libs__rat__HeadVar__3_3;

#line 164 "rat.m"
    if (libs__rat__succeeded)
#line 163 "rat.m"
      {
#line 163 "rat.m"
        {
#line 163 "rat.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.rat", (MR_String) "function \140libs.rat.rat_norm\'/2", (MR_String) "division by zero");
        }
#line 163 "rat.m"
      }
#line 164 "rat.m"
    else
#line 166 "rat.m"
      {
#line 164 "rat.m"
        libs__rat__succeeded = (libs__rat__Num_4 == (MR_Integer) 0);
#line 166 "rat.m"
        if (libs__rat__succeeded)
#line 165 "rat.m"
          {
#line 165 "rat.m"
            libs__rat__HeadVar__3_3 = (MR_Word) &libs__rat_scalar_common_1[0];
#line 165 "rat.m"
          }
#line 166 "rat.m"
        else
#line 167 "rat.m"
          {
#line 167 "rat.m"
            MR_Integer libs__rat__G_9;
#line 167 "rat.m"
            MR_Integer libs__rat__Num2_10;
#line 167 "rat.m"
            MR_Integer libs__rat__Den2_11;
#line 167 "rat.m"
            MR_Integer libs__rat__V_17_17;
#line 167 "rat.m"
            MR_Integer libs__rat__V_18_18;
#line 167 "rat.m"
            MR_Integer libs__rat__V_19_19;
#line 167 "rat.m"
            MR_Integer libs__rat__V_22_22;
#line 167 "rat.m"
            MR_Integer libs__rat__V_23_23;

#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_22_22 = mercury__int__abs_1_f_0(libs__rat__Num_4);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__V_23_23 = mercury__int__abs_1_f_0(libs__rat__Den_5);
            }
#line 175 "rat.m"
            {
#line 175 "rat.m"
              libs__rat__G_9 = libs__rat__gcd_2_2_f_0(libs__rat__V_22_22, libs__rat__V_23_23);
            }
#line 194 "rat.m"
            libs__rat__succeeded = (libs__rat__Den_5 == (MR_Integer) 0);
#line 194 "rat.m"
            if (libs__rat__succeeded)
#line 194 "rat.m"
              libs__rat__V_17_17 = (MR_Integer) 0;
#line 194 "rat.m"
            else
#line 194 "rat.m"
              {
#line 194 "rat.m"
                libs__rat__succeeded = (libs__rat__Den_5 < (MR_Integer) 0);
#line 194 "rat.m"
                if (libs__rat__succeeded)
#line 194 "rat.m"
                  libs__rat__V_17_17 = (MR_Integer) -1;
#line 194 "rat.m"
                else
#line 194 "rat.m"
                  libs__rat__V_17_17 = (MR_Integer) 1;
#line 194 "rat.m"
              }
#line 168 "rat.m"
            libs__rat__Num2_10 = (libs__rat__Num_4 * libs__rat__V_17_17);
#line 169 "rat.m"
            {
#line 169 "rat.m"
              libs__rat__Den2_11 = mercury__int__abs_1_f_0(libs__rat__Den_5);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__V_18_18 = mercury__int__f_47_47_2_f_0(libs__rat__Num2_10, libs__rat__G_9);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__V_19_19 = mercury__int__f_47_47_2_f_0(libs__rat__Den2_11, libs__rat__G_9);
            }
#line 170 "rat.m"
            {
#line 170 "rat.m"
              libs__rat__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "rat.m"
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 0) = ((MR_Box) (libs__rat__V_18_18));
#line 170 "rat.m"
              MR_hl_field(MR_mktag(0), libs__rat__HeadVar__3_3, 1) = ((MR_Box) (libs__rat__V_19_19));
#line 170 "rat.m"
            }
#line 167 "rat.m"
          }
#line 166 "rat.m"
      }
#line 164 "rat.m"
    return libs__rat__HeadVar__3_3;
#line 164 "rat.m"
  }
#line 45 "rat.m"
}

#line 43 "rat.m"
MR_Word MR_CALL 
libs__rat__rat_1_f_0(
#line 43 "rat.m"
  MR_Integer libs__rat__Int_3)
#line 43 "rat.m"
{
#line 115 "rat.m"
  {
#line 115 "rat.m"
    MR_bool libs__rat__succeeded;
#line 115 "rat.m"
    MR_Word libs__rat__HeadVar__2_2;

#line 115 "rat.m"
    {
#line 115 "rat.m"
      libs__rat__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 0) = ((MR_Box) (libs__rat__Int_3));
#line 115 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
#line 115 "rat.m"
    }
#line 115 "rat.m"
    return libs__rat__HeadVar__2_2;
#line 115 "rat.m"
  }
#line 43 "rat.m"
}

#line 41 "rat.m"
MR_bool MR_CALL 
libs__rat__f_greater_or_equal_2_p_0(
#line 41 "rat.m"
  MR_Word libs__rat__X_3,
#line 41 "rat.m"
  MR_Word libs__rat__Y_4)
#line 41 "rat.m"
{
#line 113 "rat.m"
  {
#line 113 "rat.m"
    MR_bool libs__rat__succeeded;
#line 113 "rat.m"
    MR_Word libs__rat__Diff_9;
#line 113 "rat.m"
    MR_Word libs__rat__V_12_12;
#line 113 "rat.m"
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
#line 113 "rat.m"
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
#line 113 "rat.m"
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
#line 212 "rat.m"
    MR_Integer libs__rat__V_17_17;
#line 212 "rat.m"
    MR_Integer libs__rat__V_16_16;

#line 125 "rat.m"
    {
#line 125 "rat.m"
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
#line 125 "rat.m"
    }
#line 133 "rat.m"
    {
#line 133 "rat.m"
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
#line 212 "rat.m"
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 212 "rat.m"
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
#line 212 "rat.m"
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
#line 204 "rat.m"
    if (libs__rat__succeeded)
#line 203 "rat.m"
      libs__rat__succeeded = MR_FALSE;
#line 204 "rat.m"
    else
#line 206 "rat.m"
      {
#line 206 "rat.m"
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 216 "rat.m"
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

#line 216 "rat.m"
        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
#line 206 "rat.m"
      }
#line 113 "rat.m"
    libs__rat__succeeded = !(libs__rat__succeeded);
#line 113 "rat.m"
    return libs__rat__succeeded;
#line 113 "rat.m"
  }
#line 41 "rat.m"
}

#line 39 "rat.m"
MR_bool MR_CALL 
libs__rat__f_less_or_equal_2_p_0(
#line 39 "rat.m"
  MR_Word libs__rat__X_3,
#line 39 "rat.m"
  MR_Word libs__rat__Y_4)
#line 39 "rat.m"
{
#line 111 "rat.m"
  {
#line 111 "rat.m"
    MR_bool libs__rat__succeeded;
#line 111 "rat.m"
    MR_Word libs__rat__Diff_9;
#line 111 "rat.m"
    MR_Word libs__rat__V_12_12;
#line 111 "rat.m"
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
#line 111 "rat.m"
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
#line 111 "rat.m"
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
#line 212 "rat.m"
    MR_Integer libs__rat__V_17_17;
#line 212 "rat.m"
    MR_Integer libs__rat__V_16_16;

#line 125 "rat.m"
    {
#line 125 "rat.m"
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
#line 125 "rat.m"
    }
#line 133 "rat.m"
    {
#line 133 "rat.m"
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
#line 212 "rat.m"
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 212 "rat.m"
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
#line 212 "rat.m"
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
#line 204 "rat.m"
    if (libs__rat__succeeded)
#line 203 "rat.m"
      libs__rat__succeeded = MR_FALSE;
#line 204 "rat.m"
    else
#line 206 "rat.m"
      {
#line 216 "rat.m"
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 216 "rat.m"
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

#line 216 "rat.m"
        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
#line 206 "rat.m"
        if (libs__rat__succeeded)
#line 205 "rat.m"
          libs__rat__succeeded = MR_FALSE;
#line 206 "rat.m"
        else
#line 207 "rat.m"
          libs__rat__succeeded = MR_TRUE;
#line 206 "rat.m"
      }
#line 111 "rat.m"
    libs__rat__succeeded = !(libs__rat__succeeded);
#line 111 "rat.m"
    return libs__rat__succeeded;
#line 111 "rat.m"
  }
#line 39 "rat.m"
}

#line 37 "rat.m"
MR_bool MR_CALL 
libs__rat__f_greater_than_2_p_0(
#line 37 "rat.m"
  MR_Word libs__rat__X_3,
#line 37 "rat.m"
  MR_Word libs__rat__Y_4)
#line 37 "rat.m"
{
#line 109 "rat.m"
  {
#line 109 "rat.m"
    MR_bool libs__rat__succeeded;
#line 109 "rat.m"
    MR_Word libs__rat__Diff_9;
#line 109 "rat.m"
    MR_Word libs__rat__V_12_12;
#line 109 "rat.m"
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
#line 109 "rat.m"
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
#line 109 "rat.m"
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
#line 212 "rat.m"
    MR_Integer libs__rat__V_17_17;
#line 212 "rat.m"
    MR_Integer libs__rat__V_16_16;

#line 125 "rat.m"
    {
#line 125 "rat.m"
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
#line 125 "rat.m"
    }
#line 133 "rat.m"
    {
#line 133 "rat.m"
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
#line 212 "rat.m"
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 212 "rat.m"
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
#line 212 "rat.m"
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
#line 204 "rat.m"
    if (libs__rat__succeeded)
#line 203 "rat.m"
      libs__rat__succeeded = MR_FALSE;
#line 204 "rat.m"
    else
#line 206 "rat.m"
      {
#line 216 "rat.m"
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 216 "rat.m"
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

#line 216 "rat.m"
        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
#line 206 "rat.m"
        if (libs__rat__succeeded)
#line 205 "rat.m"
          libs__rat__succeeded = MR_FALSE;
#line 206 "rat.m"
        else
#line 207 "rat.m"
          libs__rat__succeeded = MR_TRUE;
#line 206 "rat.m"
      }
#line 109 "rat.m"
    return libs__rat__succeeded;
#line 109 "rat.m"
  }
#line 37 "rat.m"
}

#line 35 "rat.m"
MR_bool MR_CALL 
libs__rat__f_less_than_2_p_0(
#line 35 "rat.m"
  MR_Word libs__rat__X_3,
#line 35 "rat.m"
  MR_Word libs__rat__Y_4)
#line 35 "rat.m"
{
#line 107 "rat.m"
  {
#line 107 "rat.m"
    MR_bool libs__rat__succeeded;
#line 107 "rat.m"
    MR_Word libs__rat__Diff_9;
#line 107 "rat.m"
    MR_Word libs__rat__V_12_12;
#line 107 "rat.m"
    MR_Integer libs__rat__Num_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 0)));
#line 107 "rat.m"
    MR_Integer libs__rat__Den_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Y_4, (MR_Integer) 1)));
#line 107 "rat.m"
    MR_Integer libs__rat__V_15_15 = ((MR_Integer) 0 - libs__rat__Num_13);
#line 212 "rat.m"
    MR_Integer libs__rat__V_17_17;
#line 212 "rat.m"
    MR_Integer libs__rat__V_16_16;

#line 125 "rat.m"
    {
#line 125 "rat.m"
      libs__rat__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 0) = ((MR_Box) (libs__rat__V_15_15));
#line 125 "rat.m"
      MR_hl_field(MR_mktag(0), libs__rat__V_12_12, 1) = ((MR_Box) (libs__rat__Den_14));
#line 125 "rat.m"
    }
#line 133 "rat.m"
    {
#line 133 "rat.m"
      libs__rat__Diff_9 = libs__rat__f_plus_2_f_0(libs__rat__X_3, libs__rat__V_12_12);
    }
#line 212 "rat.m"
    libs__rat__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 212 "rat.m"
    libs__rat__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));
#line 212 "rat.m"
    libs__rat__succeeded = (libs__rat__V_17_17 == (MR_Integer) 0);
#line 204 "rat.m"
    if (libs__rat__succeeded)
#line 203 "rat.m"
      libs__rat__succeeded = MR_FALSE;
#line 204 "rat.m"
    else
#line 206 "rat.m"
      {
#line 206 "rat.m"
        MR_Integer libs__rat__Num_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 0)));
#line 216 "rat.m"
        MR_Integer libs__rat__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__rat__Diff_9, (MR_Integer) 1)));

#line 216 "rat.m"
        libs__rat__succeeded = (libs__rat__Num_18 < (MR_Integer) 0);
#line 206 "rat.m"
      }
#line 107 "rat.m"
    return libs__rat__succeeded;
#line 107 "rat.m"
  }
#line 35 "rat.m"
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
