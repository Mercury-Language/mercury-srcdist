/*
** Automatically generated from `varset.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module varset. */
/* :- implementation. */

/*
INIT mercury__varset__init
ENDINIT
*/

#include "varset.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3];

static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3];

static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0;

static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1];

static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1];

static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1];

static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1];

static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0;

static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
  MR_Box mercury__varset__wrapper_arg_1,
  MR_Box mercury__varset__wrapper_arg_2,
  MR_Box mercury__varset__wrapper_arg_3);

static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
  MR_Box mercury__varset__wrapper_arg_1,
  MR_Box * mercury__varset__wrapper_arg_2,
  MR_Box mercury__varset__wrapper_arg_3,
  MR_Box mercury__varset__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
  MR_Box mercury__varset__wrapper_arg_1,
  MR_Box mercury__varset__wrapper_arg_2);

static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
  MR_Box * mercury__varset__wrapper_arg_1,
  MR_Box mercury__varset__wrapper_arg_2,
  MR_Box mercury__varset__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
  MR_String mercury__varset__Trial0_5,
  MR_String mercury__varset__Suffix_6,
  MR_Word mercury__varset__UsedNames_7,
  MR_String * mercury__varset__Final_8);


static /* final */ const MR_Box mercury__varset_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__varset_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__varset_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_supply_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_term_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_supply_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1
};

static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3] = {
  (MR_String) "var_supply",
  (MR_String) "var_names",
  (MR_String) "var_values"
};

static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0 = {
  (MR_String) "varset",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__varset__varset__field_types_varset_1_0,
  mercury__varset__varset__field_names_varset_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__varset__varset__du_stag_ordered_varset_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__varset____Unify____varset_1_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_1_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  {     mercury__varset__varset__du_name_ordered_varset_1 },
  {     mercury__varset__varset__du_ptag_ordered_varset_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__varset__varset__functor_number_map_varset_1
};

static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__varset____Unify____varset_0_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_0_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
  MR_Box mercury__varset__wrapper_arg_1,
  MR_Box mercury__varset__wrapper_arg_2,
  MR_Box mercury__varset__wrapper_arg_3)
{
  {
    MR_bool mercury__varset__succeeded;

    {
      mercury__varset__succeeded = mercury__varset____Unify____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
    return mercury__varset__succeeded;
  }
}

static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
  MR_Box mercury__varset__wrapper_arg_1,
  MR_Box * mercury__varset__wrapper_arg_2,
  MR_Box mercury__varset__wrapper_arg_3,
  MR_Box mercury__varset__wrapper_arg_4)
{
  {
    MR_Word mercury__varset__conv0_HeadVar__1_1;

    {
      mercury__varset____Compare____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), &mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_3), ((MR_Word) mercury__varset__wrapper_arg_4));
    }
    *mercury__varset__wrapper_arg_2 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
  MR_Box mercury__varset__wrapper_arg_1,
  MR_Box mercury__varset__wrapper_arg_2)
{
  {
    MR_bool mercury__varset__succeeded;

    {
      mercury__varset__succeeded = mercury__varset____Unify____varset_0_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2));
    }
    return mercury__varset__succeeded;
  }
}

static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
  MR_Box * mercury__varset__wrapper_arg_1,
  MR_Box mercury__varset__wrapper_arg_2,
  MR_Box mercury__varset__wrapper_arg_3)
{
  {
    MR_Word mercury__varset__conv0_HeadVar__1_1;

    {
      mercury__varset____Compare____varset_0_0(&mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
    *mercury__varset__wrapper_arg_1 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__varset__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__varset____Compare____varset_1_0(
  MR_Word mercury__varset__TypeInfo_for_T_14,
  MR_Word * mercury__varset__HeadVar__1_1,
  MR_Word mercury__varset__HeadVar__2_2,
  MR_Word mercury__varset__HeadVar__3_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Integer mercury__varset__CastX_12 = (MR_Integer) mercury__varset__HeadVar__2_2;
    MR_Integer mercury__varset__CastY_13 = (MR_Integer) mercury__varset__HeadVar__3_3;

    mercury__varset__succeeded = (mercury__varset__CastX_12 == mercury__varset__CastY_13);
    if (mercury__varset__succeeded)
      *mercury__varset__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__varset__V_10_10;
        MR_Integer mercury__varset__V_28_28 = (MR_Integer) mercury__varset__V_4_4;
        MR_Integer mercury__varset__V_29_29 = (MR_Integer) mercury__varset__V_7_7;

        mercury__varset__succeeded = (mercury__varset__V_28_28 < mercury__varset__V_29_29);
        if (mercury__varset__succeeded)
          mercury__varset__V_10_10 = (MR_Integer) 1;
        else
          {
            mercury__varset__succeeded = (mercury__varset__V_28_28 == mercury__varset__V_29_29);
            if (mercury__varset__succeeded)
              mercury__varset__V_10_10 = (MR_Integer) 0;
            else
              mercury__varset__V_10_10 = (MR_Integer) 2;
          }
        mercury__varset__succeeded = (mercury__varset__V_10_10 == (MR_Integer) 0);
        mercury__varset__succeeded = !(mercury__varset__succeeded);
        if (mercury__varset__succeeded)
          *mercury__varset__HeadVar__1_1 = mercury__varset__V_10_10;
        else
          {
            MR_Word mercury__varset__V_11_11;
            MR_Word mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mercury__varset__TypeInfo_18_18;
            MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

            {
              mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
            }
            {
              mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, &mercury__varset__V_11_11, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
            }
            mercury__varset__succeeded = (mercury__varset__V_11_11 == (MR_Integer) 0);
            mercury__varset__succeeded = !(mercury__varset__succeeded);
            if (mercury__varset__succeeded)
              *mercury__varset__HeadVar__1_1 = mercury__varset__V_11_11;
            else
              {
                MR_Word mercury__varset__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__varset__TypeInfo_23_23;
                MR_Word mercury__varset__TypeCtorInfo_24_24;
                MR_Word mercury__varset__TypeInfo_25_25;

                {
                  mercury__varset__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_22_22));
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
                }
                mercury__varset__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                {
                  mercury__varset__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_24_24));
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
                }
                {
                  mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_23_23, mercury__varset__TypeInfo_25_25, mercury__varset__HeadVar__1_1, (MR_Word) mercury__varset__V_6_6, (MR_Word) mercury__varset__V_9_9);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0(
  MR_Word mercury__varset__TypeInfo_for_T_11,
  MR_Word mercury__varset__HeadVar__1_1,
  MR_Word mercury__varset__HeadVar__2_2)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Integer mercury__varset__CastX_9 = (MR_Integer) mercury__varset__HeadVar__1_1;
    MR_Integer mercury__varset__CastY_10 = (MR_Integer) mercury__varset__HeadVar__2_2;

    mercury__varset__succeeded = (mercury__varset__CastX_9 == mercury__varset__CastY_10);
    if (mercury__varset__succeeded)
      mercury__varset__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__varset__TypeCtorInfo_14_14;
        MR_Word mercury__varset__TypeCtorInfo_16_16;
        MR_Word mercury__varset__TypeInfo_20_20;
        MR_Word mercury__varset__TypeCtorInfo_21_21;
        MR_Word mercury__varset__TypeInfo_22_22;
        MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__varset__V_25_25 = (MR_Integer) mercury__varset__V_3_3;
        MR_Integer mercury__varset__V_26_26 = (MR_Integer) mercury__varset__V_6_6;

        mercury__varset__succeeded = (mercury__varset__V_25_25 == mercury__varset__V_26_26);
        if (mercury__varset__succeeded)
          {
            mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
            }
            {
              mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_16_16, (MR_Word) mercury__varset__V_4_4, (MR_Word) mercury__varset__V_7_7);
            }
            if (mercury__varset__succeeded)
              {
                mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                {
                  mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
                }
                {
                  mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
                }
              }
          }
      }
    return mercury__varset__succeeded;
  }
}

void MR_CALL 
mercury__varset____Compare____varset_0_0(
  MR_Word * mercury__varset__HeadVar__1_1,
  MR_Word mercury__varset__HeadVar__2_2,
  MR_Word mercury__varset__HeadVar__3_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeInfo_6_6 = (MR_Word) &mercury__varset_scalar_common_1[0];
    MR_Word mercury__varset__Cast_HeadVar1_4 = mercury__varset__HeadVar__2_2;
    MR_Word mercury__varset__Cast_HeadVar2_5 = mercury__varset__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__varset__TypeInfo_6_6, mercury__varset__HeadVar__1_1, ((MR_Box) (mercury__varset__Cast_HeadVar1_4)), ((MR_Box) (mercury__varset__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0(
  MR_Word mercury__varset__HeadVar__1_1,
  MR_Word mercury__varset__HeadVar__2_2)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mercury__varset__Cast_HeadVar1_3 = mercury__varset__HeadVar__1_1;
    MR_Word mercury__varset__Cast_HeadVar2_4 = mercury__varset__HeadVar__2_2;

    {
      mercury__varset__succeeded = mercury__varset____Unify____varset_1_0(mercury__varset__TypeCtorInfo_5_5, mercury__varset__Cast_HeadVar1_3, mercury__varset__Cast_HeadVar2_4);
    }
    return mercury__varset__succeeded;
  }
}

void MR_CALL 
mercury__varset__copy_var_names_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_20,
  MR_Word mercury__varset__HeadVar__1_1,
  MR_Word mercury__varset__HeadVar__2_2,
  MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0_3,
  MR_Word * mercury__varset__STATE_VARIABLE_NewVarSet_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;

        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__varset__STATE_VARIABLE_NewVarSet_4 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
        else
          {
            MR_Word mercury__varset__OldVar_9;
            MR_String mercury__varset__Name_10;
            MR_Word mercury__varset__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_18_18;
            MR_Word mercury__varset__NewVar_14;
            MR_Word mercury__varset__TypeCtorInfo_21_21;
            MR_Word mercury__varset__TypeInfo_22_22;
            MR_Box mercury__varset__conv0_NewVar_14;

            mercury__varset__OldVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 0)));
            mercury__varset__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 1)));
            mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_20));
            }
            {
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__TypeInfo_22_22, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__HeadVar__2_2, mercury__varset__OldVar_9, &mercury__varset__conv0_NewVar_14);
            }
            if (mercury__varset__succeeded)
              {
                mercury__varset__NewVar_14 = ((MR_Word) mercury__varset__conv0_NewVar_14);
                mercury__varset__succeeded = MR_TRUE;
              }
            if (mercury__varset__succeeded)
              {
                mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__NewVar_14, mercury__varset__Name_10, mercury__varset__STATE_VARIABLE_NewVarSet_0_3, &mercury__varset__STATE_VARIABLE_NewVarSet_18_18);
              }
            else
              mercury__varset__STATE_VARIABLE_NewVarSet_18_18 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Rest_11;
              MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_NewVarSet_18_18;

              mercury__varset__STATE_VARIABLE_NewVarSet_0_3 = mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3;
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
  MR_String mercury__varset__Trial0_5,
  MR_String mercury__varset__Suffix_6,
  MR_Word mercury__varset__UsedNames_7,
  MR_String * mercury__varset__Final_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;
        MR_Word mercury__varset__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

        {
          mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_10_10, ((MR_Box) (mercury__varset__Trial0_5)), mercury__varset__UsedNames_7);
        }
        if (mercury__varset__succeeded)
          {
            MR_String mercury__varset__Trial1_9;

            {
              mercury__string__append_3_p_2(mercury__varset__Trial0_5, mercury__varset__Suffix_6, &mercury__varset__Trial1_9);
            }
            /* direct tailcall eliminated */
            {
              MR_String mercury__varset__Trial0__tmp_copy_5 = mercury__varset__Trial1_9;

              mercury__varset__Trial0_5 = mercury__varset__Trial0__tmp_copy_5;
            }
            continue;
          }
        else
          *mercury__varset__Final_8 = mercury__varset__Trial0_5;
      }
      break;
    }
}

void MR_CALL 
mercury__varset__ensure_unique_names_loop_6_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_35,
  MR_Word mercury__varset__HeadVar__1_1,
  MR_String mercury__varset__Suffix_2,
  MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0_3,
  MR_Word mercury__varset__OldVarNames_4,
  MR_Word mercury__varset__STATE_VARIABLE_VarNames_0_5,
  MR_Word * mercury__varset__STATE_VARIABLE_VarNames_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;

        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__varset__STATE_VARIABLE_VarNames_6 = mercury__varset__STATE_VARIABLE_VarNames_0_5;
        else
          {
            MR_Word mercury__varset__TypeCtorInfo_40_40;
            MR_Word mercury__varset__TypeCtorInfo_41_41;
            MR_Word mercury__varset__TypeInfo_42_42;
            MR_Word mercury__varset__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__varset__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mercury__varset__TrialName_21;
            MR_String mercury__varset__FinalName_22;
            MR_Word mercury__varset__STATE_VARIABLE_UsedNames_31_31;
            MR_Word mercury__varset__STATE_VARIABLE_VarNames_32_32;
            MR_Word mercury__varset__V_5_81;
            MR_Word mercury__varset__V_6_82;
            MR_String mercury__varset__OldName_19;
            MR_Word mercury__varset__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mercury__varset__TypeInfo_37_37;
            MR_Word mercury__varset__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Box mercury__varset__conv0_OldName_19;

            {
              mercury__varset__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_36_36));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
            }
            {
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_37_37, mercury__varset__TypeCtorInfo_38_38, mercury__varset__OldVarNames_4, mercury__varset__Var_13, &mercury__varset__conv0_OldName_19);
            }
            if (mercury__varset__succeeded)
              {
                mercury__varset__OldName_19 = ((MR_String) mercury__varset__conv0_OldName_19);
                mercury__varset__succeeded = MR_TRUE;
              }
            if (mercury__varset__succeeded)
              {
                MR_Word mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

                {
                  mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_39_39, ((MR_Box) (mercury__varset__OldName_19)), mercury__varset__STATE_VARIABLE_UsedNames_0_3);
                }
                if (mercury__varset__succeeded)
                  {
                    MR_Integer mercury__varset__VarNum_20 = (MR_Integer) mercury__varset__Var_13;
                    MR_String mercury__varset__V_26_26;
                    MR_String mercury__varset__V_28_28;

                    {
                      mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_20, (MR_Integer) 10, &mercury__varset__V_28_28);
                    }
                    {
                      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__V_28_28, &mercury__varset__V_26_26);
                    }
                    {
                      mercury__string__append_3_p_2(mercury__varset__OldName_19, mercury__varset__V_26_26, &mercury__varset__TrialName_21);
                    }
                  }
                else
                  mercury__varset__TrialName_21 = mercury__varset__OldName_19;
              }
            else
              {
                MR_String mercury__varset__V_30_30;
                MR_Integer mercury__varset__VarNum_34 = (MR_Integer) mercury__varset__Var_13;

                {
                  mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_34, (MR_Integer) 10, &mercury__varset__V_30_30);
                }
                {
                  mercury__string__append_3_p_2((MR_String) "Var_", mercury__varset__V_30_30, &mercury__varset__TrialName_21);
                }
              }
            {
              mercury__varset__append_suffix_until_unique_4_p_0(mercury__varset__TrialName_21, mercury__varset__Suffix_2, mercury__varset__STATE_VARIABLE_UsedNames_0_3, &mercury__varset__FinalName_22);
            }
            mercury__varset__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__varset__V_5_81 = (MR_Word) mercury__varset__STATE_VARIABLE_UsedNames_0_3;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__varset__TypeCtorInfo_40_40, mercury__varset__V_5_81, ((MR_Box) (mercury__varset__FinalName_22)), &mercury__varset__V_6_82);
            }
            mercury__varset__STATE_VARIABLE_UsedNames_31_31 = (MR_Word) mercury__varset__V_6_82;
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_42_42, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_13, ((MR_Box) (mercury__varset__FinalName_22)), mercury__varset__STATE_VARIABLE_VarNames_0_5, &mercury__varset__STATE_VARIABLE_VarNames_32_32);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Vars_14;
              MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_UsedNames_31_31;
              MR_Word mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5 = mercury__varset__STATE_VARIABLE_VarNames_32_32;

              mercury__varset__STATE_VARIABLE_VarNames_0_5 = mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5;
              mercury__varset__STATE_VARIABLE_UsedNames_0_3 = mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3;
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__varset__merge_subst_without_names_loop_6_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_26,
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_14,
  MR_Word mercury__varset__MaxSupplyB_8,
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_15,
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_16,
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_17,
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;
        MR_Integer mercury__varset__V_33_33 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
        MR_Integer mercury__varset__V_34_34 = (MR_Integer) mercury__varset__MaxSupplyB_8;

        mercury__varset__succeeded = (mercury__varset__V_33_33 == mercury__varset__V_34_34);
        if (mercury__varset__succeeded)
          {
            *mercury__varset__STATE_VARIABLE_Subst_18 = mercury__varset__STATE_VARIABLE_Subst_0_17;
            *mercury__varset__STATE_VARIABLE_Supply_16 = mercury__varset__STATE_VARIABLE_Supply_0_15;
          }
        else
          {
            MR_Word mercury__varset__TypeCtorInfo_27_27;
            MR_Word mercury__varset__TypeInfo_28_28;
            MR_Word mercury__varset__TypeCtorInfo_29_29;
            MR_Word mercury__varset__TypeInfo_30_30;
            MR_Word mercury__varset__Var_11;
            MR_Word mercury__varset__VarB_12;
            MR_Word mercury__varset__Replacement_13;
            MR_Word mercury__varset__STATE_VARIABLE_Supply_19_19;
            MR_Word mercury__varset__V_21_21;
            MR_Word mercury__varset__STATE_VARIABLE_Subst_22_22;
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_20_25;
            MR_Integer mercury__varset__V_4_35;
            MR_Integer mercury__varset__V_5_36 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_15;
            MR_Integer mercury__varset__V_4_38;
            MR_Integer mercury__varset__V_5_39;
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;

            mercury__varset__V_4_35 = (mercury__varset__V_5_36 + (MR_Integer) 1);
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_35;
            mercury__varset__STATE_VARIABLE_Supply_19_19 = (MR_Word) mercury__varset__V_4_35;
            mercury__varset__V_5_39 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
            mercury__varset__V_4_38 = (mercury__varset__V_5_39 + (MR_Integer) 1);
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_38;
            mercury__varset__STATE_VARIABLE_SupplyB_20_25 = (MR_Word) mercury__varset__V_4_38;
            mercury__varset__V_21_21 = (MR_Word) &mercury__varset_scalar_common_1[1];
            {
              mercury__varset__Replacement_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 0) = ((MR_Box) (mercury__varset__Var_11));
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 1) = ((MR_Box) (mercury__varset__V_21_21));
            }
            mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__varset__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_27_27));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
            }
            mercury__varset__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
            {
              mercury__varset__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_29_29));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_26, mercury__varset__TypeInfo_28_28, mercury__varset__TypeInfo_30_30, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Replacement_13)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_17, &mercury__varset__conv0_STATE_VARIABLE_Subst_22_22);
            }
            mercury__varset__STATE_VARIABLE_Subst_22_22 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_SupplyB_20_25;
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15 = mercury__varset__STATE_VARIABLE_Supply_19_19;
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17 = mercury__varset__STATE_VARIABLE_Subst_22_22;

              mercury__varset__STATE_VARIABLE_Subst_0_17 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17;
              mercury__varset__STATE_VARIABLE_Supply_0_15 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15;
              mercury__varset__STATE_VARIABLE_SupplyB_0_14 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__varset__merge_subst_loop_9_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_36,
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_20,
  MR_Word mercury__varset__MaxSupplyB_11,
  MR_Word mercury__varset__NamesB_12,
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_21,
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_22,
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_23,
  MR_Word * mercury__varset__STATE_VARIABLE_Names_24,
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_25,
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;
        MR_Integer mercury__varset__V_49_49 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
        MR_Integer mercury__varset__V_50_50 = (MR_Integer) mercury__varset__MaxSupplyB_11;

        mercury__varset__succeeded = (mercury__varset__V_49_49 == mercury__varset__V_50_50);
        if (mercury__varset__succeeded)
          {
            *mercury__varset__STATE_VARIABLE_Subst_26 = mercury__varset__STATE_VARIABLE_Subst_0_25;
            *mercury__varset__STATE_VARIABLE_Names_24 = mercury__varset__STATE_VARIABLE_Names_0_23;
            *mercury__varset__STATE_VARIABLE_Supply_22 = mercury__varset__STATE_VARIABLE_Supply_0_21;
          }
        else
          {
            MR_Word mercury__varset__TypeCtorInfo_43_43;
            MR_Word mercury__varset__TypeInfo_44_44;
            MR_Word mercury__varset__TypeCtorInfo_45_45;
            MR_Word mercury__varset__TypeInfo_46_46;
            MR_Word mercury__varset__Var_16;
            MR_Word mercury__varset__VarB_17;
            MR_Word mercury__varset__Replacement_19;
            MR_Word mercury__varset__STATE_VARIABLE_Supply_27_27;
            MR_Word mercury__varset__STATE_VARIABLE_Names_29_29;
            MR_Word mercury__varset__V_30_30;
            MR_Word mercury__varset__STATE_VARIABLE_Subst_31_31;
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_28_35;
            MR_Integer mercury__varset__V_4_51;
            MR_Integer mercury__varset__V_5_52 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_21;
            MR_Integer mercury__varset__V_4_54;
            MR_Integer mercury__varset__V_5_55;
            MR_Word mercury__varset__TypeInfo_38_38;
            MR_String mercury__varset__NameB_18;
            MR_Word mercury__varset__TypeCtorInfo_37_37;
            MR_Word mercury__varset__TypeCtorInfo_39_39;
            MR_Box mercury__varset__conv0_NameB_18;
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;

            mercury__varset__V_4_51 = (mercury__varset__V_5_52 + (MR_Integer) 1);
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_51;
            mercury__varset__STATE_VARIABLE_Supply_27_27 = (MR_Word) mercury__varset__V_4_51;
            mercury__varset__V_5_55 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
            mercury__varset__V_4_54 = (mercury__varset__V_5_55 + (MR_Integer) 1);
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_54;
            mercury__varset__STATE_VARIABLE_SupplyB_28_35 = (MR_Word) mercury__varset__V_4_54;
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__varset__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_37_37));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
            }
            {
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_39_39, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
            if (mercury__varset__succeeded)
              {
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
                mercury__varset__succeeded = MR_TRUE;
              }
            if (mercury__varset__succeeded)
              {
                MR_Word mercury__varset__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_42_42, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_23, &mercury__varset__STATE_VARIABLE_Names_29_29);
                }
              }
            else
              mercury__varset__STATE_VARIABLE_Names_29_29 = mercury__varset__STATE_VARIABLE_Names_0_23;
            mercury__varset__V_30_30 = (MR_Word) &mercury__varset_scalar_common_1[1];
            {
              mercury__varset__Replacement_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 0) = ((MR_Box) (mercury__varset__Var_16));
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 1) = ((MR_Box) (mercury__varset__V_30_30));
            }
            mercury__varset__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__varset__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_43_43));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
            }
            mercury__varset__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
            {
              mercury__varset__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_45_45));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_44_44, mercury__varset__TypeInfo_46_46, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Replacement_19)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_25, &mercury__varset__conv1_STATE_VARIABLE_Subst_31_31);
            }
            mercury__varset__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_SupplyB_28_35;
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21 = mercury__varset__STATE_VARIABLE_Supply_27_27;
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23 = mercury__varset__STATE_VARIABLE_Names_29_29;
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25 = mercury__varset__STATE_VARIABLE_Subst_31_31;

              mercury__varset__STATE_VARIABLE_Subst_0_25 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25;
              mercury__varset__STATE_VARIABLE_Names_0_23 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23;
              mercury__varset__STATE_VARIABLE_Supply_0_21 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21;
              mercury__varset__STATE_VARIABLE_SupplyB_0_20 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__varset__merge_renaming_without_names_loop_6_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_24,
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_13,
  MR_Word mercury__varset__MaxSupplyB_8,
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_14,
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_15,
  MR_Word mercury__varset__STATE_VARIABLE_Renaming_0_16,
  MR_Word * mercury__varset__STATE_VARIABLE_Renaming_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;
        MR_Integer mercury__varset__V_29_29 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
        MR_Integer mercury__varset__V_30_30 = (MR_Integer) mercury__varset__MaxSupplyB_8;

        mercury__varset__succeeded = (mercury__varset__V_29_29 == mercury__varset__V_30_30);
        if (mercury__varset__succeeded)
          {
            *mercury__varset__STATE_VARIABLE_Renaming_17 = mercury__varset__STATE_VARIABLE_Renaming_0_16;
            *mercury__varset__STATE_VARIABLE_Supply_15 = mercury__varset__STATE_VARIABLE_Supply_0_14;
          }
        else
          {
            MR_Word mercury__varset__TypeCtorInfo_25_25;
            MR_Word mercury__varset__TypeInfo_26_26;
            MR_Word mercury__varset__Var_11;
            MR_Word mercury__varset__VarB_12;
            MR_Word mercury__varset__STATE_VARIABLE_Supply_18_18;
            MR_Word mercury__varset__STATE_VARIABLE_Renaming_20_20;
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_19_23;
            MR_Integer mercury__varset__V_4_31;
            MR_Integer mercury__varset__V_5_32 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_14;
            MR_Integer mercury__varset__V_4_34;
            MR_Integer mercury__varset__V_5_35;
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20;

            mercury__varset__V_4_31 = (mercury__varset__V_5_32 + (MR_Integer) 1);
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_31;
            mercury__varset__STATE_VARIABLE_Supply_18_18 = (MR_Word) mercury__varset__V_4_31;
            mercury__varset__V_5_35 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
            mercury__varset__V_4_34 = (mercury__varset__V_5_35 + (MR_Integer) 1);
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_34;
            mercury__varset__STATE_VARIABLE_SupplyB_19_23 = (MR_Word) mercury__varset__V_4_34;
            mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeInfo_26_26, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Var_11)), (MR_Word) mercury__varset__STATE_VARIABLE_Renaming_0_16, &mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20);
            }
            mercury__varset__STATE_VARIABLE_Renaming_20_20 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13 = mercury__varset__STATE_VARIABLE_SupplyB_19_23;
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_Supply_18_18;
              MR_Word mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_16 = mercury__varset__STATE_VARIABLE_Renaming_20_20;

              mercury__varset__STATE_VARIABLE_Renaming_0_16 = mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_16;
              mercury__varset__STATE_VARIABLE_Supply_0_14 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14;
              mercury__varset__STATE_VARIABLE_SupplyB_0_13 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__varset__merge_renaming_loop_9_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_34,
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_19,
  MR_Word mercury__varset__MaxSupplyB_11,
  MR_Word mercury__varset__NamesB_12,
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_20,
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_21,
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_22,
  MR_Word * mercury__varset__STATE_VARIABLE_Names_23,
  MR_Word mercury__varset__STATE_VARIABLE_Renaming_0_24,
  MR_Word * mercury__varset__STATE_VARIABLE_Renaming_25)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;
        MR_Integer mercury__varset__V_45_45 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
        MR_Integer mercury__varset__V_46_46 = (MR_Integer) mercury__varset__MaxSupplyB_11;

        mercury__varset__succeeded = (mercury__varset__V_45_45 == mercury__varset__V_46_46);
        if (mercury__varset__succeeded)
          {
            *mercury__varset__STATE_VARIABLE_Renaming_25 = mercury__varset__STATE_VARIABLE_Renaming_0_24;
            *mercury__varset__STATE_VARIABLE_Names_23 = mercury__varset__STATE_VARIABLE_Names_0_22;
            *mercury__varset__STATE_VARIABLE_Supply_21 = mercury__varset__STATE_VARIABLE_Supply_0_20;
          }
        else
          {
            MR_Word mercury__varset__TypeCtorInfo_41_41;
            MR_Word mercury__varset__TypeInfo_42_42;
            MR_Word mercury__varset__Var_16;
            MR_Word mercury__varset__VarB_17;
            MR_Word mercury__varset__STATE_VARIABLE_Supply_26_26;
            MR_Word mercury__varset__STATE_VARIABLE_Names_28_28;
            MR_Word mercury__varset__STATE_VARIABLE_Renaming_29_29;
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_27_33;
            MR_Integer mercury__varset__V_4_47;
            MR_Integer mercury__varset__V_5_48 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_20;
            MR_Integer mercury__varset__V_4_50;
            MR_Integer mercury__varset__V_5_51;
            MR_Word mercury__varset__TypeInfo_36_36;
            MR_String mercury__varset__NameB_18;
            MR_Word mercury__varset__TypeCtorInfo_35_35;
            MR_Word mercury__varset__TypeCtorInfo_37_37;
            MR_Box mercury__varset__conv0_NameB_18;
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29;

            mercury__varset__V_4_47 = (mercury__varset__V_5_48 + (MR_Integer) 1);
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_47;
            mercury__varset__STATE_VARIABLE_Supply_26_26 = (MR_Word) mercury__varset__V_4_47;
            mercury__varset__V_5_51 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
            mercury__varset__V_4_50 = (mercury__varset__V_5_51 + (MR_Integer) 1);
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_50;
            mercury__varset__STATE_VARIABLE_SupplyB_27_33 = (MR_Word) mercury__varset__V_4_50;
            mercury__varset__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__varset__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_35_35));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
            }
            {
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_37_37, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
            if (mercury__varset__succeeded)
              {
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
                mercury__varset__succeeded = MR_TRUE;
              }
            if (mercury__varset__succeeded)
              {
                MR_Word mercury__varset__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_22, &mercury__varset__STATE_VARIABLE_Names_28_28);
                }
              }
            else
              mercury__varset__STATE_VARIABLE_Names_28_28 = mercury__varset__STATE_VARIABLE_Names_0_22;
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_42_42, mercury__varset__TypeInfo_42_42, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Var_16)), (MR_Word) mercury__varset__STATE_VARIABLE_Renaming_0_24, &mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29);
            }
            mercury__varset__STATE_VARIABLE_Renaming_29_29 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19 = mercury__varset__STATE_VARIABLE_SupplyB_27_33;
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_Supply_26_26;
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22 = mercury__varset__STATE_VARIABLE_Names_28_28;
              MR_Word mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_24 = mercury__varset__STATE_VARIABLE_Renaming_29_29;

              mercury__varset__STATE_VARIABLE_Renaming_0_24 = mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_24;
              mercury__varset__STATE_VARIABLE_Names_0_22 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22;
              mercury__varset__STATE_VARIABLE_Supply_0_20 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20;
              mercury__varset__STATE_VARIABLE_SupplyB_0_19 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__varset__bind_vars_loop_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_16,
  MR_Word mercury__varset__HeadVar__1_1,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_2,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;

        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__varset__STATE_VARIABLE_VarSet_3 = mercury__varset__STATE_VARIABLE_VarSet_0_2;
        else
          {
            MR_Word mercury__varset__Var_7;
            MR_Word mercury__varset__Value_8;
            MR_Word mercury__varset__VarsValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_14_14;

            mercury__varset__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 0)));
            mercury__varset__Value_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 1)));
            {
              mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__Var_7, mercury__varset__Value_8, mercury__varset__STATE_VARIABLE_VarSet_0_2, &mercury__varset__STATE_VARIABLE_VarSet_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__VarsValues_9;
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2 = mercury__varset__STATE_VARIABLE_VarSet_14_14;

              mercury__varset__STATE_VARIABLE_VarSet_0_2 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2;
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__varset__vars_loop_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_14,
  MR_Word mercury__varset__Cur_5,
  MR_Word mercury__varset__Max_6,
  MR_Word mercury__varset__STATE_VARIABLE_RevVars_0_10,
  MR_Word * mercury__varset__STATE_VARIABLE_RevVars_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded;
        MR_Integer mercury__varset__V_17_17 = (MR_Integer) mercury__varset__Cur_5;
        MR_Integer mercury__varset__V_18_18 = (MR_Integer) mercury__varset__Max_6;

        mercury__varset__succeeded = (mercury__varset__V_17_17 == mercury__varset__V_18_18);
        if (mercury__varset__succeeded)
          *mercury__varset__STATE_VARIABLE_RevVars_11 = mercury__varset__STATE_VARIABLE_RevVars_0_10;
        else
          {
            MR_Word mercury__varset__Var_8;
            MR_Word mercury__varset__Next_9;
            MR_Word mercury__varset__STATE_VARIABLE_RevVars_12_12;
            MR_Integer mercury__varset__V_4_19;
            MR_Integer mercury__varset__V_5_20 = (MR_Integer) mercury__varset__Cur_5;

            mercury__varset__V_4_19 = (mercury__varset__V_5_20 + (MR_Integer) 1);
            mercury__varset__Var_8 = (MR_Word) mercury__varset__V_4_19;
            mercury__varset__Next_9 = (MR_Word) mercury__varset__V_4_19;
            {
              mercury__varset__STATE_VARIABLE_RevVars_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevVars_12_12, 0) = ((MR_Box) (mercury__varset__Var_8));
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevVars_12_12, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_RevVars_0_10));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__varset__Cur__tmp_copy_5 = mercury__varset__Next_9;
              MR_Word mercury__varset__STATE_VARIABLE_RevVars_0__tmp_copy_10 = mercury__varset__STATE_VARIABLE_RevVars_12_12;

              mercury__varset__STATE_VARIABLE_RevVars_0_10 = mercury__varset__STATE_VARIABLE_RevVars_0__tmp_copy_10;
              mercury__varset__Cur_5 = mercury__varset__Cur__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__varset__new_vars_loop_5_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_24,
  MR_Integer mercury__varset__NumVars_6,
  MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0_10,
  MR_Word * mercury__varset__STATE_VARIABLE_RevNewVars_11,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_12,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__varset__succeeded = (mercury__varset__NumVars_6 > (MR_Integer) 0);

        if (mercury__varset__succeeded)
          {
            MR_Word mercury__varset__Var_9;
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_15_15;
            MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
            MR_Integer mercury__varset__V_17_17;
            MR_Word mercury__varset__MaxId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 0)));
            MR_Word mercury__varset__MaxId_30;
            MR_Word mercury__varset__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 1)));
            MR_Word mercury__varset__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 2)));
            MR_Integer mercury__varset__V_4_37;
            MR_Integer mercury__varset__V_5_38 = (MR_Integer) mercury__varset__MaxId0_29;

            mercury__varset__V_4_37 = (mercury__varset__V_5_38 + (MR_Integer) 1);
            mercury__varset__Var_9 = (MR_Word) mercury__varset__V_4_37;
            mercury__varset__MaxId_30 = (MR_Word) mercury__varset__V_4_37;
            {
              mercury__varset__STATE_VARIABLE_VarSet_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 0) = ((MR_Box) (mercury__varset__MaxId_30));
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 1) = ((MR_Box) (mercury__varset__V_32_32));
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 2) = ((MR_Box) (mercury__varset__V_33_33));
            }
            {
              mercury__varset__STATE_VARIABLE_RevNewVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 0) = ((MR_Box) (mercury__varset__Var_9));
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_RevNewVars_0_10));
            }
            mercury__varset__V_17_17 = (mercury__varset__NumVars_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__varset__NumVars__tmp_copy_6 = mercury__varset__V_17_17;
              MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10 = mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12 = mercury__varset__STATE_VARIABLE_VarSet_15_15;

              mercury__varset__STATE_VARIABLE_VarSet_0_12 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12;
              mercury__varset__STATE_VARIABLE_RevNewVars_0_10 = mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10;
              mercury__varset__NumVars_6 = mercury__varset__NumVars__tmp_copy_6;
            }
            continue;
          }
        else
          {
            mercury__varset__succeeded = (mercury__varset__NumVars_6 == (MR_Integer) 0);
            if (mercury__varset__succeeded)
              {
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "varset", (MR_String) "predicate \140varset.new_vars_loop\'/5", (MR_String) "invalid call");
                  return;
                }
              }
            *mercury__varset__STATE_VARIABLE_VarSet_13 = mercury__varset__STATE_VARIABLE_VarSet_0_12;
            *mercury__varset__STATE_VARIABLE_RevNewVars_11 = mercury__varset__STATE_VARIABLE_RevNewVars_0_10;
          }
      }
      break;
    }
}

MR_Integer MR_CALL 
mercury__varset__num_allocated_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_6,
  MR_Word mercury__varset__HeadVar__1_1)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Integer mercury__varset__HeadVar__2_2;
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

    mercury__varset__HeadVar__2_2 = (MR_Integer) mercury__varset__VarSupply_3;
    return mercury__varset__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__varset__max_var_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_6,
  MR_Word mercury__varset__HeadVar__1_1)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__HeadVar__2_2;
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__varset__V_3_7 = (MR_Integer) mercury__varset__VarSupply_3;
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

    mercury__varset__HeadVar__2_2 = (MR_Word) mercury__varset__V_3_7;
    return mercury__varset__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__varset__coerce_2_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_7,
  MR_Word mercury__varset__TypeInfo_for_U_8,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_4,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_5)
{
  {
    MR_bool mercury__varset__succeeded;

    *mercury__varset__STATE_VARIABLE_VarSet_5 = mercury__varset__STATE_VARIABLE_VarSet_0_4;
  }
}

MR_Word MR_CALL 
mercury__varset__coerce_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_7,
  MR_Word mercury__varset__TypeInfo_for_U_8,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_4)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_5 = mercury__varset__STATE_VARIABLE_VarSet_0_4;

    return mercury__varset__STATE_VARIABLE_VarSet_5;
  }
}

void MR_CALL 
mercury__varset__squash_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_15,
  MR_Word mercury__varset__OldVarSet_5,
  MR_Word mercury__varset__KeptVars_6,
  MR_Word * mercury__varset__NewVarSet_7,
  MR_Word * mercury__varset__Subst_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_10_61;
    MR_Word mercury__varset__TypeCtorInfo_11_62;
    MR_Integer mercury__varset__NumVars_9;
    MR_Word mercury__varset__NewVarSet0_10;
    MR_Word mercury__varset__NewVars0_11;
    MR_Word mercury__varset__NewVarSet1_12;
    MR_Word mercury__varset__NewVars_13;
    MR_Word mercury__varset__VarNames_14;
    MR_Word mercury__varset__VarSupply_22;
    MR_Word mercury__varset__Names_23;
    MR_Word mercury__varset__Values_24;
    MR_Word mercury__varset__RevNewVars_38;
    MR_Word mercury__varset__V_39_39;
    MR_Integer mercury__varset__V_5_48;
    MR_Word mercury__varset__VarNames_57;
    MR_Word mercury__varset__V_5_67;
    MR_Word mercury__varset__V_7_73;
    MR_Word mercury__varset__V_5_76;
    MR_Word mercury__varset__conv0_NewVars0_11;
    MR_Word mercury__varset__V_58_58;
    MR_Word mercury__varset__V_59_59;
    MR_Word mercury__varset__conv1_VarNames_14;
    MR_Word mercury__varset__conv2_V_7_73;
    MR_Word mercury__varset__conv3_Subst_8;

    {
      mercury__varset__TypeInfo_10_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_61, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_61, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_15));
    }
    {
      mercury__list__length_acc_3_p_0(mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__KeptVars_6, (MR_Integer) 0, &mercury__varset__NumVars_9);
    }
    mercury__varset__VarSupply_22 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    mercury__varset__Names_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__varset__Values_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__varset__NewVarSet0_10 = (MR_Word) &mercury__varset_scalar_common_2[1];
    mercury__varset__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__varset__new_vars_loop_5_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__NumVars_9, mercury__varset__V_39_39, &mercury__varset__RevNewVars_38, mercury__varset__NewVarSet0_10, &mercury__varset__NewVarSet1_12);
    }
    {
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__RevNewVars_38, &mercury__varset__conv0_NewVars0_11);
    }
    mercury__varset__NewVars0_11 = (MR_Word) mercury__varset__conv0_NewVars0_11;
    {
      mercury__list__length_acc_3_p_0(mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__NewVars0_11, (MR_Integer) 0, &mercury__varset__V_5_48);
    }
    {
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__TypeInfo_10_61, mercury__varset__V_5_48, mercury__varset__NewVars0_11, &mercury__varset__NewVars_13);
    }
    mercury__varset__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 0)));
    mercury__varset__VarNames_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 1)));
    mercury__varset__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 2)));
    mercury__varset__TypeCtorInfo_11_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__varset__V_5_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_61, mercury__varset__TypeCtorInfo_11_62, (MR_Word) mercury__varset__VarNames_57, (MR_Word) mercury__varset__V_5_67, &mercury__varset__conv1_VarNames_14);
    }
    mercury__varset__VarNames_14 = (MR_Word) mercury__varset__conv1_VarNames_14;
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__varset__TypeInfo_10_61, mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__KeptVars_6, mercury__varset__NewVars_13, &mercury__varset__conv2_V_7_73);
    }
    mercury__varset__V_7_73 = (MR_Word) mercury__varset__conv2_V_7_73;
    mercury__varset__V_5_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__varset__TypeInfo_10_61, mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__V_7_73, (MR_Word) mercury__varset__V_5_76, &mercury__varset__conv3_Subst_8);
    }
    *mercury__varset__Subst_8 = (MR_Word) mercury__varset__conv3_Subst_8;
    {
      mercury__varset__copy_var_names_4_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__VarNames_14, *mercury__varset__Subst_8, mercury__varset__NewVarSet1_12, mercury__varset__NewVarSet_7);
    }
  }
}

void MR_CALL 
mercury__varset__select_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_14,
  MR_Word mercury__varset__Vars_4,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_16_16;
    MR_Word mercury__varset__TypeCtorInfo_17_17;
    MR_Word mercury__varset__TypeCtorInfo_18_18;
    MR_Word mercury__varset__TypeInfo_19_19;
    MR_Word mercury__varset__Supply_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
    MR_Word mercury__varset__VarNameMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
    MR_Word mercury__varset__VarNameMap_9;
    MR_Word mercury__varset__Values_10;
    MR_Word mercury__varset__V_7_23;
    MR_Word mercury__varset__V_8_24;
    MR_Word mercury__varset__V_7_33;
    MR_Word mercury__varset__V_8_34;
    MR_Word mercury__varset__conv0_Values_10;

    {
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__varset__V_7_23 = (MR_Word) mercury__varset__Vars_4;
    mercury__varset__V_8_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_14, mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, mercury__varset__V_7_23, mercury__varset__VarNameMap0_7, mercury__varset__V_8_24, &mercury__varset__VarNameMap_9);
    }
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    mercury__varset__V_7_33 = (MR_Word) mercury__varset__Vars_4;
    mercury__varset__V_8_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_14, mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, mercury__varset__V_7_33, (MR_Word) mercury__varset__Values0_8, (MR_Word) mercury__varset__V_8_34, &mercury__varset__conv0_Values_10);
    }
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv0_Values_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNameMap_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__select_2_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_9,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
  MR_Word mercury__varset__Vars_5)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

    {
      mercury__varset__select_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vars_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_7;
  }
}

void MR_CALL 
mercury__varset__ensure_unique_names_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_20,
  MR_Word mercury__varset__AllVars_5,
  MR_String mercury__varset__Suffix_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__VarNames0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
    MR_Word mercury__varset__VarNames_9;
    MR_Word mercury__varset__V_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__varset__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__V_2_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
    MR_Word mercury__varset__V_17_17;
    MR_Word mercury__varset__V_19_19;
    MR_Word mercury__varset__V_18_18;

    {
      mercury__varset__ensure_unique_names_loop_6_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__AllVars_5, mercury__varset__Suffix_6, mercury__varset__V_12_12, mercury__varset__VarNames0_8, mercury__varset__V_13_13, &mercury__varset__VarNames_9);
    }
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
    mercury__varset__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
    mercury__varset__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_17_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNames_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_19_19));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__ensure_unique_names_3_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_11,
  MR_Word mercury__varset__AllVars_5,
  MR_String mercury__varset__Suffix_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_9;

    {
      mercury__varset__ensure_unique_names_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__AllVars_5, mercury__varset__Suffix_6, mercury__varset__STATE_VARIABLE_VarSet_0_8, &mercury__varset__STATE_VARIABLE_VarSet_9);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_9;
  }
}

void MR_CALL 
mercury__varset__var_name_list_2_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_8,
  MR_Word mercury__varset__VarSet_3,
  MR_Word * mercury__varset__VarNameList_4)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_10_10;
    MR_Word mercury__varset__TypeCtorInfo_11_11;
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
    MR_Word mercury__varset__V_5_16;
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
    MR_Word mercury__varset__conv0_VarNameList_4;

    {
      mercury__varset__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_8));
    }
    mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__varset__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_10, mercury__varset__TypeCtorInfo_11_11, (MR_Word) mercury__varset__VarNames_5, (MR_Word) mercury__varset__V_5_16, &mercury__varset__conv0_VarNameList_4);
    }
    *mercury__varset__VarNameList_4 = (MR_Word) mercury__varset__conv0_VarNameList_4;
  }
}

MR_Word MR_CALL 
mercury__varset__var_name_list_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_5,
  MR_Word mercury__varset__VarSet_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__VarNameList_4;
    MR_Word mercury__varset__TypeCtorInfo_9_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_10_12;
    MR_Word mercury__varset__TypeCtorInfo_11_13;
    MR_Word mercury__varset__VarNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
    MR_Word mercury__varset__V_5_18;
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
    MR_Word mercury__varset__conv0_VarNameList_4;

    {
      mercury__varset__TypeInfo_10_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_11));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_5));
    }
    mercury__varset__TypeCtorInfo_11_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__varset__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_12, mercury__varset__TypeCtorInfo_11_13, (MR_Word) mercury__varset__VarNames_8, (MR_Word) mercury__varset__V_5_18, &mercury__varset__conv0_VarNameList_4);
    }
    mercury__varset__VarNameList_4 = (MR_Word) mercury__varset__conv0_VarNameList_4;
    return mercury__varset__VarNameList_4;
  }
}

void MR_CALL 
mercury__varset__create_name_var_map_2_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_10,
  MR_Word mercury__varset__VarSet_3,
  MR_Word * mercury__varset__NameVars_4)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_12_12;
    MR_Word mercury__varset__TypeCtorInfo_13_13;
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
    MR_Word mercury__varset__Vars_6;
    MR_Word mercury__varset__Names_7;
    MR_Word mercury__varset__V_5_18;
    MR_Word mercury__varset__V_5_24;
    MR_Word mercury__varset__V_7_29;
    MR_Word mercury__varset__V_5_32;
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
    MR_Word mercury__varset__conv0_Vars_6;

    {
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
    }
    mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__varset__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, (MR_Word) mercury__varset__VarNames_5, (MR_Word) mercury__varset__V_5_18, &mercury__varset__conv0_Vars_6);
    }
    mercury__varset__Vars_6 = (MR_Word) mercury__varset__conv0_Vars_6;
    mercury__varset__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__values_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, (MR_Word) mercury__varset__VarNames_5, mercury__varset__V_5_24, &mercury__varset__Names_7);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__varset__TypeCtorInfo_13_13, mercury__varset__TypeInfo_12_12, mercury__varset__Names_7, mercury__varset__Vars_6, &mercury__varset__V_7_29);
    }
    mercury__varset__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__varset__TypeCtorInfo_13_13, mercury__varset__TypeInfo_12_12, mercury__varset__V_7_29, mercury__varset__V_5_32, mercury__varset__NameVars_4);
    }
  }
}

MR_Word MR_CALL 
mercury__varset__create_name_var_map_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_5,
  MR_Word mercury__varset__VarSet_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__NameVars_4;

    {
      mercury__varset__create_name_var_map_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VarSet_3, &mercury__varset__NameVars_4);
    }
    return mercury__varset__NameVars_4;
  }
}

void MR_CALL 
mercury__varset__merge_without_names_5_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_12,
  MR_Word mercury__varset__VarSetA_6,
  MR_Word mercury__varset__VarSetB_7,
  MR_Word mercury__varset__TermList0_8,
  MR_Word * mercury__varset__VarSet_9,
  MR_Word * mercury__varset__TermList_10)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__Renaming_11;

    {
      mercury__varset__merge_renaming_without_names_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Renaming_11);
    }
    {
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__Renaming_11, mercury__varset__TermList0_8, mercury__varset__TermList_10);
    }
  }
}

void MR_CALL 
mercury__varset__merge_5_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_12,
  MR_Word mercury__varset__VarSetA_6,
  MR_Word mercury__varset__VarSetB_7,
  MR_Word mercury__varset__TermList0_8,
  MR_Word * mercury__varset__VarSet_9,
  MR_Word * mercury__varset__TermList_10)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__Renaming_11;

    {
      mercury__varset__merge_renaming_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Renaming_11);
    }
    {
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__Renaming_11, mercury__varset__TermList0_8, mercury__varset__TermList_10);
    }
  }
}

void MR_CALL 
mercury__varset__merge_subst_without_names_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_18,
  MR_Word mercury__varset__VarSetA_5,
  MR_Word mercury__varset__VarSetB_6,
  MR_Word * mercury__varset__VarSet_7,
  MR_Word * mercury__varset__Subst_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__Supply_17;
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

    {
      mercury__varset__merge_subst_without_names_loop_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__VarSet_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
    }
  }
}

void MR_CALL 
mercury__varset__merge_subst_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_19,
  MR_Word mercury__varset__VarSetA_5,
  MR_Word mercury__varset__VarSetB_6,
  MR_Word * mercury__varset__VarSet_7,
  MR_Word * mercury__varset__Subst_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__Supply_17;
    MR_Word mercury__varset__Names_18;
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

    {
      mercury__varset__merge_subst_loop_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__VarSet_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
    }
  }
}

void MR_CALL 
mercury__varset__merge_renaming_without_names_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_18,
  MR_Word mercury__varset__VarSetA_5,
  MR_Word mercury__varset__VarSetB_6,
  MR_Word * mercury__varset__VarSet_7,
  MR_Word * mercury__varset__Renaming_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
    MR_Word mercury__varset__Renaming0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__Supply_17;
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

    {
      mercury__varset__merge_renaming_without_names_loop_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Renaming0_16, mercury__varset__Renaming_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__VarSet_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
    }
  }
}

void MR_CALL 
mercury__varset__merge_renaming_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_19,
  MR_Word mercury__varset__VarSetA_5,
  MR_Word mercury__varset__VarSetB_6,
  MR_Word * mercury__varset__VarSet_7,
  MR_Word * mercury__varset__Renaming_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
    MR_Word mercury__varset__Renaming0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__Supply_17;
    MR_Word mercury__varset__Names_18;
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

    {
      mercury__varset__merge_renaming_loop_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Renaming0_16, mercury__varset__Renaming_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__VarSet_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
    }
  }
}

void MR_CALL 
mercury__varset__set_bindings_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_12,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
  MR_Word mercury__varset__Values_5,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_7)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 0)));
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 1)));
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_5));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__set_bindings_2_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_9,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
  MR_Word mercury__varset__Values_5)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 0)));
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 1)));
    MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 2)));

    {
      mercury__varset__STATE_VARIABLE_VarSet_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_7, 0) = ((MR_Box) (mercury__varset__V_15_15));
      MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_7, 1) = ((MR_Box) (mercury__varset__V_16_16));
      MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_7, 2) = ((MR_Box) (mercury__varset__Values_5));
    }
    return mercury__varset__STATE_VARIABLE_VarSet_7;
  }
}

void MR_CALL 
mercury__varset__get_bindings_2_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_7,
  MR_Word mercury__varset__VarSet_3,
  MR_Word * mercury__varset__Values_4)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

    *mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
  }
}

MR_Word MR_CALL 
mercury__varset__get_bindings_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_5,
  MR_Word mercury__varset__VarSet_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

    return mercury__varset__Values_4;
  }
}

void MR_CALL 
mercury__varset__lookup_vars_2_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_7,
  MR_Word mercury__varset__VarSet_3,
  MR_Word * mercury__varset__Values_4)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

    *mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
  }
}

MR_Word MR_CALL 
mercury__varset__lookup_vars_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_5,
  MR_Word mercury__varset__VarSet_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

    return mercury__varset__Values_4;
  }
}

MR_bool MR_CALL 
mercury__varset__search_var_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_10,
  MR_Word mercury__varset__VarSet_4,
  MR_Word mercury__varset__Var_5,
  MR_Word * mercury__varset__Value_6)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_12_12;
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    MR_Word mercury__varset__TypeInfo_14_14;
    MR_Word mercury__varset__Values_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
    MR_Box mercury__varset__conv0_Value_6;

    {
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
    }
    {
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
    }
    {
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__TypeInfo_12_12, mercury__varset__TypeInfo_14_14, (MR_Word) mercury__varset__Values_7, mercury__varset__Var_5, &mercury__varset__conv0_Value_6);
    }
    if (mercury__varset__succeeded)
      {
        *mercury__varset__Value_6 = ((MR_Word) mercury__varset__conv0_Value_6);
        mercury__varset__succeeded = MR_TRUE;
      }
    return mercury__varset__succeeded;
  }
}

void MR_CALL 
mercury__varset__bind_vars_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_10,
  MR_Word mercury__varset__Subst_4,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_7,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_12_12;
    MR_Word mercury__varset__TypeCtorInfo_13_13;
    MR_Word mercury__varset__TypeInfo_14_14;
    MR_Word mercury__varset__VarsValues_6;
    MR_Word mercury__varset__V_5_19;
    MR_Word mercury__varset__conv0_VarsValues_6;

    {
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
    }
    mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
    }
    mercury__varset__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeInfo_14_14, (MR_Word) mercury__varset__Subst_4, (MR_Word) mercury__varset__V_5_19, &mercury__varset__conv0_VarsValues_6);
    }
    mercury__varset__VarsValues_6 = (MR_Word) mercury__varset__conv0_VarsValues_6;
    {
      mercury__varset__bind_vars_loop_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__VarsValues_6, mercury__varset__STATE_VARIABLE_VarSet_0_7, mercury__varset__STATE_VARIABLE_VarSet_8);
    }
  }
}

MR_Word MR_CALL 
mercury__varset__bind_vars_2_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_9,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
  MR_Word mercury__varset__Subst_5)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;
    MR_Word mercury__varset__TypeCtorInfo_11_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_12_17;
    MR_Word mercury__varset__TypeCtorInfo_13_18;
    MR_Word mercury__varset__TypeInfo_14_19;
    MR_Word mercury__varset__VarsValues_14;
    MR_Word mercury__varset__V_5_24;
    MR_Word mercury__varset__conv0_VarsValues_14;

    {
      mercury__varset__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_16));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
    }
    mercury__varset__TypeCtorInfo_13_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__varset__TypeInfo_14_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_18));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
    }
    mercury__varset__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_12_17, mercury__varset__TypeInfo_14_19, (MR_Word) mercury__varset__Subst_5, (MR_Word) mercury__varset__V_5_24, &mercury__varset__conv0_VarsValues_14);
    }
    mercury__varset__VarsValues_14 = (MR_Word) mercury__varset__conv0_VarsValues_14;
    {
      mercury__varset__bind_vars_loop_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VarsValues_14, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_7;
  }
}

void MR_CALL 
mercury__varset__bind_var_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_18,
  MR_Word mercury__varset__Var_5,
  MR_Word mercury__varset__Value_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_20_20;
    MR_Word mercury__varset__TypeCtorInfo_21_21;
    MR_Word mercury__varset__TypeInfo_22_22;
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
    MR_Word mercury__varset__Values_9;
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
    MR_Word mercury__varset__conv0_Values_9;
    MR_Word mercury__varset__V_15_15;
    MR_Word mercury__varset__V_16_16;
    MR_Word mercury__varset__V_17_17;

    {
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
    }
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
    }
    {
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, mercury__varset__Var_5, ((MR_Box) (mercury__varset__Value_6)), (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv0_Values_9);
    }
    mercury__varset__Values_9 = (MR_Word) mercury__varset__conv0_Values_9;
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_16_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__bind_var_3_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_11,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8,
  MR_Word mercury__varset__Var_6,
  MR_Word mercury__varset__Value_7)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_9;

    {
      mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__Var_6, mercury__varset__Value_7, mercury__varset__STATE_VARIABLE_VarSet_0_8, &mercury__varset__STATE_VARIABLE_VarSet_9);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_9;
  }
}

MR_bool MR_CALL 
mercury__varset__search_name_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_10,
  MR_Word mercury__varset__VarSet_4,
  MR_Word mercury__varset__Var_5,
  MR_String * mercury__varset__Name_6)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_12_12;
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__varset__Names_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
    MR_Box mercury__varset__conv0_Name_6;

    {
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
    }
    {
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, mercury__varset__Names_8, mercury__varset__Var_5, &mercury__varset__conv0_Name_6);
    }
    if (mercury__varset__succeeded)
      {
        *mercury__varset__Name_6 = ((MR_String) mercury__varset__conv0_Name_6);
        mercury__varset__succeeded = MR_TRUE;
      }
    return mercury__varset__succeeded;
  }
}

void MR_CALL 
mercury__varset__lookup_name_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_12,
  MR_Word mercury__varset__VarSet_5,
  MR_Word mercury__varset__Id_6,
  MR_String mercury__varset__Prefix_7,
  MR_String * mercury__varset__Name_8)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_String mercury__varset__NamePrime_9;
    MR_Word mercury__varset__TypeCtorInfo_11_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_12_20;
    MR_Word mercury__varset__TypeCtorInfo_13_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__varset__Names_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 1)));
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 0)));
    MR_Word mercury__varset__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 2)));
    MR_Box mercury__varset__conv0_NamePrime_9;

    {
      mercury__varset__TypeInfo_12_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_19));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
    }
    {
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_12_20, mercury__varset__TypeCtorInfo_13_21, mercury__varset__Names_17, mercury__varset__Id_6, &mercury__varset__conv0_NamePrime_9);
    }
    if (mercury__varset__succeeded)
      {
        mercury__varset__NamePrime_9 = ((MR_String) mercury__varset__conv0_NamePrime_9);
        mercury__varset__succeeded = MR_TRUE;
      }
    if (mercury__varset__succeeded)
      *mercury__varset__Name_8 = mercury__varset__NamePrime_9;
    else
      {
        MR_Integer mercury__varset__VarNum_10 = (MR_Integer) mercury__varset__Id_6;
        MR_String mercury__varset__V_11_11;

        {
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_10, (MR_Integer) 10, &mercury__varset__V_11_11);
        }
        {
          mercury__string__append_3_p_2(mercury__varset__Prefix_7, mercury__varset__V_11_11, mercury__varset__Name_8);
        }
      }
  }
}

MR_String MR_CALL 
mercury__varset__lookup_name_3_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_9,
  MR_Word mercury__varset__VarSet_5,
  MR_Word mercury__varset__Id_6,
  MR_String mercury__varset__Prefix_7)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_String mercury__varset__Name_8;

    {
      mercury__varset__lookup_name_4_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VarSet_5, mercury__varset__Id_6, mercury__varset__Prefix_7, &mercury__varset__Name_8);
    }
    return mercury__varset__Name_8;
  }
}

void MR_CALL 
mercury__varset__lookup_name_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_11,
  MR_Word mercury__varset__VarSet_4,
  MR_Word mercury__varset__Var_5,
  MR_String * mercury__varset__Name_6)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_String mercury__varset__NamePrime_7;
    MR_Word mercury__varset__TypeCtorInfo_11_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_12_19;
    MR_Word mercury__varset__TypeCtorInfo_13_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__varset__Names_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
    MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
    MR_Box mercury__varset__conv0_NamePrime_7;

    {
      mercury__varset__TypeInfo_12_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_18));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
    }
    {
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__TypeInfo_12_19, mercury__varset__TypeCtorInfo_13_20, mercury__varset__Names_16, mercury__varset__Var_5, &mercury__varset__conv0_NamePrime_7);
    }
    if (mercury__varset__succeeded)
      {
        mercury__varset__NamePrime_7 = ((MR_String) mercury__varset__conv0_NamePrime_7);
        mercury__varset__succeeded = MR_TRUE;
      }
    if (mercury__varset__succeeded)
      *mercury__varset__Name_6 = mercury__varset__NamePrime_7;
    else
      {
        MR_Integer mercury__varset__VarNum_8 = (MR_Integer) mercury__varset__Var_5;
        MR_String mercury__varset__V_10_10;

        {
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_8, (MR_Integer) 10, &mercury__varset__V_10_10);
        }
        {
          mercury__string__append_3_p_2((MR_String) "V_", mercury__varset__V_10_10, mercury__varset__Name_6);
        }
      }
  }
}

MR_String MR_CALL 
mercury__varset__lookup_name_2_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_7,
  MR_Word mercury__varset__VarSet_4,
  MR_Word mercury__varset__Var_5)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_String mercury__varset__Name_6;

    {
      mercury__varset__lookup_name_3_p_0(mercury__varset__TypeInfo_for_T_7, mercury__varset__VarSet_4, mercury__varset__Var_5, &mercury__varset__Name_6);
    }
    return mercury__varset__Name_6;
  }
}

void MR_CALL 
mercury__varset__name_var_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_18,
  MR_Word mercury__varset__Var_5,
  MR_String mercury__varset__Name_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_20_20;
    MR_Word mercury__varset__TypeCtorInfo_21_21;
    MR_Word mercury__varset__Names0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
    MR_Word mercury__varset__Names_9;
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
    MR_Word mercury__varset__V_15_15;
    MR_Word mercury__varset__V_17_17;
    MR_Word mercury__varset__V_16_16;

    {
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
    }
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_21_21, mercury__varset__Var_5, ((MR_Box) (mercury__varset__Name_6)), mercury__varset__Names0_8, &mercury__varset__Names_9);
    }
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_17_17));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__name_var_3_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_11,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8,
  MR_Word mercury__varset__Var_6,
  MR_String mercury__varset__Name_7)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_9;

    {
      mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__Var_6, mercury__varset__Name_7, mercury__varset__STATE_VARIABLE_VarSet_0_8, &mercury__varset__STATE_VARIABLE_VarSet_9);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_9;
  }
}

void MR_CALL 
mercury__varset__vars_2_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_11,
  MR_Word mercury__varset__VarSet_3,
  MR_Word * mercury__varset__Vars_4)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_12_12;
    MR_Word mercury__varset__TypeInfo_13_13;
    MR_Word mercury__varset__MaxId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
    MR_Word mercury__varset__N0_6 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__varset__RevVars_7;
    MR_Word mercury__varset__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
    MR_Word mercury__varset__conv0_Vars_4;

    {
      mercury__varset__vars_loop_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__N0_6, mercury__varset__MaxId_5, mercury__varset__V_8_8, &mercury__varset__RevVars_7);
    }
    mercury__varset__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mercury__varset__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
    }
    {
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_13_13, (MR_Word) mercury__varset__RevVars_7, &mercury__varset__conv0_Vars_4);
    }
    *mercury__varset__Vars_4 = (MR_Word) mercury__varset__conv0_Vars_4;
  }
}

MR_Word MR_CALL 
mercury__varset__vars_1_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_5,
  MR_Word mercury__varset__VarSet_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__Vars_4;

    {
      mercury__varset__vars_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VarSet_3, &mercury__varset__Vars_4);
    }
    return mercury__varset__Vars_4;
  }
}

void MR_CALL 
mercury__varset__delete_sorted_vars_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_14,
  MR_Word mercury__varset__DeleteVars_4,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_16_16;
    MR_Word mercury__varset__TypeCtorInfo_17_17;
    MR_Word mercury__varset__TypeCtorInfo_18_18;
    MR_Word mercury__varset__TypeInfo_19_19;
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
    MR_Word mercury__varset__Names_9;
    MR_Word mercury__varset__Values_10;
    MR_Word mercury__varset__conv0_Names_9;
    MR_Word mercury__varset__conv1_Values_10;

    {
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    {
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__delete_sorted_vars_2_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_9,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
  MR_Word mercury__varset__DeleteVars_5)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

    {
      mercury__varset__delete_sorted_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__DeleteVars_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_7;
  }
}

void MR_CALL 
mercury__varset__delete_vars_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_14,
  MR_Word mercury__varset__DeleteVars_4,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_16_16;
    MR_Word mercury__varset__TypeCtorInfo_17_17;
    MR_Word mercury__varset__TypeCtorInfo_18_18;
    MR_Word mercury__varset__TypeInfo_19_19;
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
    MR_Word mercury__varset__Names_9;
    MR_Word mercury__varset__Values_10;
    MR_Word mercury__varset__conv0_Names_9;
    MR_Word mercury__varset__conv1_Values_10;

    {
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    {
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__delete_vars_2_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_9,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
  MR_Word mercury__varset__DeleteVars_5)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

    {
      mercury__varset__delete_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__DeleteVars_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_7;
  }
}

void MR_CALL 
mercury__varset__delete_var_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_14,
  MR_Word mercury__varset__DeleteVar_4,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__varset__TypeInfo_16_16;
    MR_Word mercury__varset__TypeCtorInfo_17_17;
    MR_Word mercury__varset__TypeCtorInfo_18_18;
    MR_Word mercury__varset__TypeInfo_19_19;
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
    MR_Word mercury__varset__Names_9;
    MR_Word mercury__varset__Values_10;
    MR_Word mercury__varset__V_7_26;
    MR_Word mercury__varset__conv0_Names_9;
    MR_Word mercury__varset__V_7_33;
    MR_Word mercury__varset__conv1_Values_10;

    {
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__Names0_7, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv0_Names_9, &mercury__varset__V_7_26);
    }
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
    }
    {
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__Values0_8, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv1_Values_10, &mercury__varset__V_7_33);
    }
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
    }
  }
}

MR_Word MR_CALL 
mercury__varset__delete_var_2_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_9,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
  MR_Word mercury__varset__DeleteVar_5)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

    {
      mercury__varset__delete_var_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__DeleteVar_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
    return mercury__varset__STATE_VARIABLE_VarSet_7;
  }
}

void MR_CALL 
mercury__varset__new_vars_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_13,
  MR_Integer mercury__varset__NumVars_5,
  MR_Word * mercury__varset__NewVars_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_9,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_10)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_14_14;
    MR_Word mercury__varset__TypeInfo_15_15;
    MR_Word mercury__varset__RevNewVars_8;
    MR_Word mercury__varset__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__conv0_NewVars_6;

    {
      mercury__varset__new_vars_loop_5_p_0(mercury__varset__TypeInfo_for_T_13, mercury__varset__NumVars_5, mercury__varset__V_11_11, &mercury__varset__RevNewVars_8, mercury__varset__STATE_VARIABLE_VarSet_0_9, mercury__varset__STATE_VARIABLE_VarSet_10);
    }
    mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mercury__varset__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_13));
    }
    {
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_15_15, (MR_Word) mercury__varset__RevNewVars_8, &mercury__varset__conv0_NewVars_6);
    }
    *mercury__varset__NewVars_6 = (MR_Word) mercury__varset__conv0_NewVars_6;
  }
}

void MR_CALL 
mercury__varset__new_maybe_named_var_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_17,
  MR_Word mercury__varset__MaybeName_5,
  MR_Word * mercury__varset__Var_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_14,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_15)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__MaxId0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 0)));
    MR_Word mercury__varset__Names0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 1)));
    MR_Word mercury__varset__Values_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 2)));
    MR_Word mercury__varset__MaxId_11;
    MR_Word mercury__varset__Names_12;
    MR_Integer mercury__varset__V_4_21;
    MR_Integer mercury__varset__V_5_22 = (MR_Integer) mercury__varset__MaxId0_8;

    mercury__varset__V_4_21 = (mercury__varset__V_5_22 + (MR_Integer) 1);
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_21;
    mercury__varset__MaxId_11 = (MR_Word) mercury__varset__V_4_21;
    if ((mercury__varset__MaybeName_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__varset__Names_12 = mercury__varset__Names0_9;
    else
      {
        MR_Word mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__varset__TypeInfo_19_19;
        MR_Word mercury__varset__TypeCtorInfo_20_20;
        MR_String mercury__varset__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__varset__MaybeName_5, (MR_Integer) 0)));

        {
          mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_17));
        }
        mercury__varset__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_17, mercury__varset__TypeInfo_19_19, mercury__varset__TypeCtorInfo_20_20, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_13)), mercury__varset__Names0_9, &mercury__varset__Names_12);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
    }
  }
}

void MR_CALL 
mercury__varset__new_uniquely_named_var_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_24,
  MR_String mercury__varset__Name_5,
  MR_Word * mercury__varset__Var_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_14,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_15)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_25_25;
    MR_Word mercury__varset__TypeInfo_26_26;
    MR_Word mercury__varset__TypeCtorInfo_27_27;
    MR_Word mercury__varset__MaxId0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 0)));
    MR_Word mercury__varset__Names0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 1)));
    MR_Word mercury__varset__Values_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 2)));
    MR_Word mercury__varset__MaxId_11;
    MR_Integer mercury__varset__N_12;
    MR_Word mercury__varset__Names_13;
    MR_String mercury__varset__V_16_16;
    MR_String mercury__varset__V_28_28;
    MR_Word mercury__varset__V_34_34;
    MR_String mercury__varset__V_36_36;
    MR_Integer mercury__varset__V_5_38 = (MR_Integer) mercury__varset__MaxId0_8;
    MR_Word mercury__varset__V_7_44;
    MR_Word mercury__varset__V_8_45;

    mercury__varset__N_12 = (mercury__varset__V_5_38 + (MR_Integer) 1);
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__N_12;
    mercury__varset__MaxId_11 = (MR_Word) mercury__varset__N_12;
    mercury__varset__V_34_34 = (MR_Word) &mercury__varset_scalar_common_5[0];
    mercury__varset__V_7_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__varset__V_8_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__varset__V_34_34, mercury__varset__V_7_44, mercury__varset__V_8_45, mercury__varset__N_12, &mercury__varset__V_28_28);
    }
    {
      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__V_28_28, &mercury__varset__V_36_36);
    }
    {
      mercury__string__append_3_p_2(mercury__varset__Name_5, mercury__varset__V_36_36, &mercury__varset__V_16_16);
    }
    mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
    }
    mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeCtorInfo_27_27, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__V_16_16)), mercury__varset__Names0_9, &mercury__varset__Names_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
    }
  }
}

void MR_CALL 
mercury__varset__new_named_var_4_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_16,
  MR_String mercury__varset__Name_5,
  MR_Word * mercury__varset__Var_6,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_13,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_14)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__TypeCtorInfo_17_17;
    MR_Word mercury__varset__TypeInfo_18_18;
    MR_Word mercury__varset__TypeCtorInfo_19_19;
    MR_Word mercury__varset__MaxId0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_13, (MR_Integer) 0)));
    MR_Word mercury__varset__Names0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_13, (MR_Integer) 1)));
    MR_Word mercury__varset__Values_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_13, (MR_Integer) 2)));
    MR_Word mercury__varset__MaxId_11;
    MR_Word mercury__varset__Names_12;
    MR_Integer mercury__varset__V_4_20;
    MR_Integer mercury__varset__V_5_21 = (MR_Integer) mercury__varset__MaxId0_8;

    mercury__varset__V_4_20 = (mercury__varset__V_5_21 + (MR_Integer) 1);
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_20;
    mercury__varset__MaxId_11 = (MR_Word) mercury__varset__V_4_20;
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_16));
    }
    mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_5)), mercury__varset__Names0_9, &mercury__varset__Names_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
    }
  }
}

void MR_CALL 
mercury__varset__new_var_3_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_16,
  MR_Word * mercury__varset__Var_4,
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8,
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_9)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__MaxId0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 0)));
    MR_Word mercury__varset__MaxId_7;
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 1)));
    MR_Word mercury__varset__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 2)));
    MR_Integer mercury__varset__V_4_17;
    MR_Integer mercury__varset__V_5_18 = (MR_Integer) mercury__varset__MaxId0_6;

    mercury__varset__V_4_17 = (mercury__varset__V_5_18 + (MR_Integer) 1);
    *mercury__varset__Var_4 = (MR_Word) mercury__varset__V_4_17;
    mercury__varset__MaxId_7 = (MR_Word) mercury__varset__V_4_17;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__varset__STATE_VARIABLE_VarSet_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_12_12));
    }
  }
}

MR_bool MR_CALL 
mercury__varset__is_empty_1_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_5,
  MR_Word mercury__varset__HeadVar__1_1)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__VarSupply_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__varset__V_2_6 = (MR_Integer) mercury__varset__VarSupply_2;
    MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

    mercury__varset__succeeded = (mercury__varset__V_2_6 == (MR_Integer) 0);
    return mercury__varset__succeeded;
  }
}

void MR_CALL 
mercury__varset__init_1_p_0(
  MR_Word mercury__varset__TypeInfo_for_T_6,
  MR_Word * mercury__varset__VarSet_2)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__VarSupply_3 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__varset__Names_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__Values_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__varset__VarSet_2 = (MR_Word) &mercury__varset_scalar_common_2[1];
  }
}

MR_Word MR_CALL 
mercury__varset__init_0_f_0(
  MR_Word mercury__varset__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__varset__succeeded;
    MR_Word mercury__varset__VarSet_2 = (MR_Word) &mercury__varset_scalar_common_2[1];
    MR_Word mercury__varset__VarSupply_5 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
    MR_Word mercury__varset__Names_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__varset__Values_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__varset__VarSet_2;
  }
}

void mercury__varset__init(void)
{
}

void mercury__varset__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_1);
	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_0);
}

void mercury__varset__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module varset. */
