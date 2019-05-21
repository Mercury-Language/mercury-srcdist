/*
** Automatically generated from `univ.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module univ. */
/* :- implementation. */

/*
INIT mercury__univ__init
ENDINIT
*/

#include "univ.mih"
#include "univ.mh"


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
#include "uint.mih"
#include "unit.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__univ__univ__field_types_univ_0_0[1];

static const MR_DuExistLocn mercury__univ__univ__exist_locns_univ_0_0[1];

static const MR_DuExistInfo mercury__univ__univ__exist_info_univ_0_0;

static const MR_DuFunctorDesc mercury__univ__univ__du_functor_desc_univ_0_0;

static const MR_DuFunctorDescPtr mercury__univ__univ__du_stag_ordered_univ_0_0[1];

static const MR_DuPtagLayout mercury__univ__univ__du_ptag_ordered_univ_0[1];

static const MR_DuFunctorDescPtr mercury__univ__univ__du_name_ordered_univ_0[1];

static const MR_Integer mercury__univ__univ__functor_number_map_univ_0[1];

static MR_Integer MR_CALL 
mercury__univ__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__univ__unravel_univ_2_p_0(
  MR_Word * mercury__univ__TypeInfo_for_T_5,
  MR_Word mercury__univ__Univ_3,
  MR_Box * mercury__univ__X_4);

static void MR_CALL 
mercury__univ__construct_univ_2_p_0(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Box mercury__univ__X_3,
  MR_Word * mercury__univ__Univ_4);

static MR_bool MR_CALL 
mercury__univ____Unify____univ_0_0_10001(
  MR_Box mercury__univ__wrapper_arg_1,
  MR_Box mercury__univ__wrapper_arg_2);

static void MR_CALL 
mercury__univ____Compare____univ_0_0_10001(
  MR_Box * mercury__univ__wrapper_arg_1,
  MR_Box mercury__univ__wrapper_arg_2,
  MR_Box mercury__univ__wrapper_arg_3);


static /* final */ const MR_Box mercury__univ_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__univ_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__univ_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__univ_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__univ_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__univ_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__univ_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__univ_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__univ_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "uint.mh"
#include "univ.mh"
#include "version_array.mh"

#line 130 "univ.m"
void 
ML_construct_univ(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Word mercury__univ__X_3,
  MR_Word * mercury__univ__Univ_4)
#line 130 "univ.m"
{
#line 130 "univ.m"
	mercury__univ__construct_univ_2_p_0((MR_Word) mercury__univ__TypeInfo_for_T_5, (MR_Box) mercury__univ__X_3, (MR_Word *) mercury__univ__Univ_4);
}

#line 138 "univ.m"
void 
ML_unravel_univ(
  MR_Word * mercury__univ__TypeInfo_for_T_5,
  MR_Word mercury__univ__Univ_3,
  MR_Word * mercury__univ__X_4)
#line 138 "univ.m"
{
#line 138 "univ.m"
	mercury__univ__unravel_univ_2_p_0((MR_Word *) mercury__univ__TypeInfo_for_T_5, (MR_Word) mercury__univ__Univ_3, (MR_Box *) mercury__univ__X_4);
}


static const MR_PseudoTypeInfo mercury__univ__univ__field_types_univ_0_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

static const MR_DuExistLocn mercury__univ__univ__exist_locns_univ_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) -1
  }
};

static const MR_DuExistInfo mercury__univ__univ__exist_info_univ_0_0 = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__univ__univ__exist_locns_univ_0_0,
  NULL
};

static const MR_DuFunctorDesc mercury__univ__univ__du_functor_desc_univ_0_0 = {
  (MR_String) "univ_cons",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__univ__univ__field_types_univ_0_0,
  NULL,
  NULL,
  &mercury__univ__univ__exist_info_univ_0_0,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__univ__univ__du_stag_ordered_univ_0_0[1] = {
  &mercury__univ__univ__du_functor_desc_univ_0_0
};

static const MR_DuPtagLayout mercury__univ__univ__du_ptag_ordered_univ_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__univ__univ__du_stag_ordered_univ_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__univ__univ__du_name_ordered_univ_0[1] = {
  &mercury__univ__univ__du_functor_desc_univ_0_0
};

static const MR_Integer mercury__univ__univ__functor_number_map_univ_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__univ__univ__type_ctor_info_univ_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__univ____Unify____univ_0_0_10001)),
  ((MR_Box) (mercury__univ____Compare____univ_0_0_10001)),
  (MR_String) "univ",
  (MR_String) "univ",
  {     mercury__univ__univ__du_name_ordered_univ_0 },
  {     mercury__univ__univ__du_ptag_ordered_univ_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__univ__univ__functor_number_map_univ_0
};

static MR_Integer MR_CALL 
mercury__univ__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__univ__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__univ____Compare____univ_0_0(
  MR_Word * mercury__univ__HeadVar__1_1,
  MR_Word mercury__univ__HeadVar__2_2,
  MR_Word mercury__univ__HeadVar__3_3)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Integer mercury__univ__CastX_6 = (MR_Integer) mercury__univ__HeadVar__2_2;
    MR_Integer mercury__univ__CastY_7 = (MR_Integer) mercury__univ__HeadVar__3_3;

    mercury__univ__succeeded = (mercury__univ__CastX_6 == mercury__univ__CastY_7);
    if (mercury__univ__succeeded)
      *mercury__univ__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__univ__TypeInfo_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__univ__TypeInfo_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box mercury__univ__ArgX1_4 = (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__univ__ArgY1_5 = (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__3_3, (MR_Integer) 1));

        {
          mercury__private_builtin__typed_compare_3_p_0(mercury__univ__TypeInfo_8_8, mercury__univ__TypeInfo_9_9, mercury__univ__HeadVar__1_1, mercury__univ__ArgX1_4, mercury__univ__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__univ____Unify____univ_0_0(
  MR_Word mercury__univ__HeadVar__1_1,
  MR_Word mercury__univ__HeadVar__2_2)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Integer mercury__univ__CastX_5 = (MR_Integer) mercury__univ__HeadVar__1_1;
    MR_Integer mercury__univ__CastY_6 = (MR_Integer) mercury__univ__HeadVar__2_2;

    mercury__univ__succeeded = (mercury__univ__CastX_5 == mercury__univ__CastY_6);
    if (mercury__univ__succeeded)
      mercury__univ__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__univ__TypeInfo_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__univ__TypeInfo_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mercury__univ__ArgX1_3 = (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__1_1, (MR_Integer) 1));
        MR_Box mercury__univ__ArgY1_4 = (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__2_2, (MR_Integer) 1));

        {
          mercury__univ__succeeded = mercury__private_builtin__typed_unify_2_p_0(mercury__univ__TypeInfo_7_7, mercury__univ__TypeInfo_8_8, mercury__univ__ArgX1_3, mercury__univ__ArgY1_4);
        }
      }
    return mercury__univ__succeeded;
  }
}

static void MR_CALL 
mercury__univ__unravel_univ_2_p_0(
  MR_Word * mercury__univ__TypeInfo_for_T_5,
  MR_Word mercury__univ__Univ_3,
  MR_Box * mercury__univ__X_4)
{
  {
    MR_bool mercury__univ__succeeded;

    *mercury__univ__TypeInfo_for_T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 0)));
    *mercury__univ__X_4 = (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 1));
  }
}

static void MR_CALL 
mercury__univ__construct_univ_2_p_0(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Box mercury__univ__X_3,
  MR_Word * mercury__univ__Univ_4)
{
  {
    MR_bool mercury__univ__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__univ__Univ_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__univ__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), base, 1) = mercury__univ__X_3;
    }
  }
}

MR_Box MR_CALL 
mercury__univ__univ_value_1_f_0(
  MR_Word * mercury__univ__TypeInfo_for_T_4,
  MR_Word mercury__univ__HeadVar__1_1)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Box mercury__univ__X_3;

    *mercury__univ__TypeInfo_for_T_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__1_1, (MR_Integer) 0)));
    mercury__univ__X_3 = (MR_hl_field(MR_mktag(0), mercury__univ__HeadVar__1_1, (MR_Integer) 1));
    return mercury__univ__X_3;
  }
}

MR_Word MR_CALL 
mercury__univ__univ_type_1_f_0(
  MR_Word mercury__univ__Univ_3)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__HeadVar__2_2;
    MR_Word mercury__univ__TypeInfo_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 0)));
    MR_Box mercury__univ__Var_4 = (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 1));
    MR_Box mercury__univ__Var_6;

{
#define MR_PROC_LABEL mercury__univ__univ_type_1_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__univ__TypeInfo_5_5 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__univ__HeadVar__2_2  = TypeInfo;
}
    return mercury__univ__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__univ__det_univ_to_type_2_p_0(
  MR_Word mercury__univ__TypeInfo_for_T_22,
  MR_Word mercury__univ__Univ_3,
  MR_Box * mercury__univ__X_4)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Box mercury__univ__X0_5;
    MR_Word mercury__univ__TypeInfo_12_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 0)));
    MR_Box mercury__univ__T0_30 = (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 1));

    {
      mercury__univ__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__univ__TypeInfo_12_31, mercury__univ__TypeInfo_for_T_22, mercury__univ__T0_30, &mercury__univ__X0_5);
    }
    if (mercury__univ__succeeded)
      *mercury__univ__X_4 = mercury__univ__X0_5;
    else
      {
        MR_Word mercury__univ__TypeInfo_5_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 0)));
        MR_String mercury__univ__UnivTypeName_6;
        MR_String mercury__univ__ObjectTypeName_7;
        MR_String mercury__univ__ErrorString_8;
        MR_Word mercury__univ__Var_9;
        MR_Word mercury__univ__Var_10;
        MR_Word mercury__univ__Var_11;
        MR_Word mercury__univ__Var_13;
        MR_Word mercury__univ__Var_15;
        MR_Word mercury__univ__Var_16;
        MR_Word mercury__univ__Var_18;
        MR_Word mercury__univ__Var_20;
        MR_Word mercury__univ__Var_21;
        MR_Box mercury__univ__Var_33 = (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 1));
        MR_Box mercury__univ__Var_35;

{
#define MR_PROC_LABEL mercury__univ__det_univ_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__univ__TypeInfo_5_34 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__univ__Var_9  = TypeInfo;
}
        {
          mercury__univ__UnivTypeName_6 = mercury__type_desc__type_name_1_f_0(mercury__univ__Var_9);
        }
{
#define MR_PROC_LABEL mercury__univ__det_univ_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__univ__TypeInfo_for_T_22 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__univ__Var_10  = TypeInfo;
}
        {
          mercury__univ__ObjectTypeName_7 = mercury__type_desc__type_name_1_f_0(mercury__univ__Var_10);
        }
        mercury__univ__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__univ__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_20, 0) = ((MR_Box) (mercury__univ__ObjectTypeName_7));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_20, 1) = ((MR_Box) (mercury__univ__Var_21));
        }
        {
          mercury__univ__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_18, 0) = ((MR_Box) ((MR_String) "\tObject Type: "));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_18, 1) = ((MR_Box) (mercury__univ__Var_20));
        }
        {
          mercury__univ__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_16, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_16, 1) = ((MR_Box) (mercury__univ__Var_18));
        }
        {
          mercury__univ__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_15, 0) = ((MR_Box) (mercury__univ__UnivTypeName_6));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_15, 1) = ((MR_Box) (mercury__univ__Var_16));
        }
        {
          mercury__univ__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_13, 0) = ((MR_Box) ((MR_String) "\tUniv Type: "));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_13, 1) = ((MR_Box) (mercury__univ__Var_15));
        }
        {
          mercury__univ__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_11, 0) = ((MR_Box) ((MR_String) "det_univ_to_type: conversion failed\n"));
          MR_hl_field(MR_mktag(1), mercury__univ__Var_11, 1) = ((MR_Box) (mercury__univ__Var_13));
        }
        {
          mercury__univ__ErrorString_8 = mercury__string__append_list_1_f_0(mercury__univ__Var_11);
        }
        {
          mercury__require__error_1_p_0(mercury__univ__ErrorString_8);
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__univ__univ_1_f_2(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Box * mercury__univ__X_3,
  MR_Word mercury__univ__Univ_4)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__TypeInfo_12_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__Univ_4, (MR_Integer) 0)));
    MR_Box mercury__univ__T0_13 = (MR_hl_field(MR_mktag(0), mercury__univ__Univ_4, (MR_Integer) 1));

    {
      mercury__univ__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__univ__TypeInfo_12_14, mercury__univ__TypeInfo_for_T_5, mercury__univ__T0_13, mercury__univ__X_3);
    }
    return mercury__univ__succeeded;
  }
}

MR_Word MR_CALL 
mercury__univ__univ_1_f_1(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Box mercury__univ__X_3)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__Univ_4;
    MR_Word mercury__univ__Univ0_8;

    {
      mercury__univ__Univ0_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__univ__Univ0_8, 0) = ((MR_Box) (mercury__univ__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), mercury__univ__Univ0_8, 1) = mercury__univ__X_3;
    }
    mercury__univ__Univ_4 = mercury__univ__Univ0_8;
    return mercury__univ__Univ_4;
  }
}

MR_Word MR_CALL 
mercury__univ__univ_1_f_0(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Box mercury__univ__X_3)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__Univ_4;

    {
      mercury__univ__Univ_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__univ__Univ_4, 0) = ((MR_Box) (mercury__univ__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), mercury__univ__Univ_4, 1) = mercury__univ__X_3;
    }
    return mercury__univ__Univ_4;
  }
}

void MR_CALL 
mercury__univ__univ_to_type_2_p_2(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Word * mercury__univ__Univ_3,
  MR_Box mercury__univ__X_4)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__Univ0_8;

    {
      mercury__univ__Univ0_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__univ__Univ0_8, 0) = ((MR_Box) (mercury__univ__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), mercury__univ__Univ0_8, 1) = mercury__univ__X_4;
    }
    *mercury__univ__Univ_3 = mercury__univ__Univ0_8;
  }
}

void MR_CALL 
mercury__univ__univ_to_type_2_p_1(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Word * mercury__univ__Univ_3,
  MR_Box mercury__univ__X_4)
{
  {
    MR_bool mercury__univ__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__univ__Univ_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__univ__TypeInfo_for_T_5));
      MR_hl_field(MR_mktag(0), base, 1) = mercury__univ__X_4;
    }
  }
}

MR_bool MR_CALL 
mercury__univ__univ_to_type_2_p_0(
  MR_Word mercury__univ__TypeInfo_for_T_5,
  MR_Word mercury__univ__Univ_3,
  MR_Box * mercury__univ__X_4)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__TypeInfo_12_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 0)));
    MR_Box mercury__univ__T0_13 = (MR_hl_field(MR_mktag(0), mercury__univ__Univ_3, (MR_Integer) 1));

    {
      mercury__univ__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__univ__TypeInfo_12_14, mercury__univ__TypeInfo_for_T_5, mercury__univ__T0_13, mercury__univ__X_4);
    }
    return mercury__univ__succeeded;
  }
}

MR_bool MR_CALL 
mercury__univ__type_to_univ_2_p_2(
  MR_Word mercury__univ__TypeInfo_for_T_11,
  MR_Box * mercury__univ__T_1,
  MR_Word mercury__univ__Univ_2)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__TypeInfo_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__univ__Univ_2, (MR_Integer) 0)));
    MR_Box mercury__univ__T0_10 = (MR_hl_field(MR_mktag(0), mercury__univ__Univ_2, (MR_Integer) 1));

    {
      mercury__univ__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__univ__TypeInfo_12_12, mercury__univ__TypeInfo_for_T_11, mercury__univ__T0_10, mercury__univ__T_1);
    }
    return mercury__univ__succeeded;
  }
}

void MR_CALL 
mercury__univ__type_to_univ_2_p_1(
  MR_Word mercury__univ__TypeInfo_for_T_11,
  MR_Box mercury__univ__T_1,
  MR_Word * mercury__univ__Univ_2)
{
  {
    MR_bool mercury__univ__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__univ__Univ_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__univ__TypeInfo_for_T_11));
      MR_hl_field(MR_mktag(0), base, 1) = mercury__univ__T_1;
    }
  }
}

void MR_CALL 
mercury__univ__type_to_univ_2_p_0(
  MR_Word mercury__univ__TypeInfo_for_T_11,
  MR_Box mercury__univ__T_1,
  MR_Word * mercury__univ__Univ_2)
{
  {
    MR_bool mercury__univ__succeeded;
    MR_Word mercury__univ__Univ0_5;

    {
      mercury__univ__Univ0_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__univ__Univ0_5, 0) = ((MR_Box) (mercury__univ__TypeInfo_for_T_11));
      MR_hl_field(MR_mktag(0), mercury__univ__Univ0_5, 1) = mercury__univ__T_1;
    }
    *mercury__univ__Univ_2 = mercury__univ__Univ0_5;
  }
}

static MR_bool MR_CALL 
mercury__univ____Unify____univ_0_0_10001(
  MR_Box mercury__univ__wrapper_arg_1,
  MR_Box mercury__univ__wrapper_arg_2)
{
  {
    MR_bool mercury__univ__succeeded;

    {
      mercury__univ__succeeded = mercury__univ____Unify____univ_0_0(((MR_Word) mercury__univ__wrapper_arg_1), ((MR_Word) mercury__univ__wrapper_arg_2));
    }
    return mercury__univ__succeeded;
  }
}

static void MR_CALL 
mercury__univ____Compare____univ_0_0_10001(
  MR_Box * mercury__univ__wrapper_arg_1,
  MR_Box mercury__univ__wrapper_arg_2,
  MR_Box mercury__univ__wrapper_arg_3)
{
  {
    MR_Word mercury__univ__conv0_HeadVar__1_1;

    {
      mercury__univ____Compare____univ_0_0(&mercury__univ__conv0_HeadVar__1_1, ((MR_Word) mercury__univ__wrapper_arg_2), ((MR_Word) mercury__univ__wrapper_arg_3));
    }
    *mercury__univ__wrapper_arg_1 = ((MR_Box) (mercury__univ__conv0_HeadVar__1_1));
  }
}

void mercury__univ__init(void)
{
}

void mercury__univ__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__univ__univ__type_ctor_info_univ_0);
}

void mercury__univ__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__univ__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module univ. */
