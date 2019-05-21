/*
** Automatically generated from `type_desc.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module type_desc. */
/* :- implementation. */

/*
INIT mercury__type_desc__init
ENDINIT
*/

#include "type_desc.mih"
#include "type_desc.mh"


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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_TypeInfo_Struct1 mercury__type_desc__list__ti_list_1type_desc__type_ctor_info_pseudo_type_desc_0;

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_0[2];

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_0;

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_1[1];

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_1;

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_2[1];

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_2;

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_0[1];

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_1[1];

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_2[1];

static const MR_DuPtagLayout mercury__type_desc__type_desc__du_ptag_ordered_pseudo_type_rep_0[3];

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_name_ordered_pseudo_type_rep_0[3];

static const MR_Integer mercury__type_desc__type_desc__functor_number_map_pseudo_type_rep_0[3];

static MR_Integer MR_CALL 
mercury__type_desc__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__type_desc__get_type_info_for_type_info_0_f_0(void);

static MR_bool MR_CALL 
mercury__type_desc__is_exist_pseudo_type_desc_2_p_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_1,
  MR_Integer * mercury__type_desc__TypeVarNum_2);

static MR_bool MR_CALL 
mercury__type_desc__is_univ_pseudo_type_desc_2_p_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_1,
  MR_Integer * mercury__type_desc__TypeVarNum_2);

static void MR_CALL 
mercury__type_desc__map__ho1_3_p_in__list_0(
  MR_Word mercury__type_desc__HeadVar__2_2,
  MR_Word * mercury__type_desc__HeadVar__3_3);

static void MR_CALL 
mercury__type_desc__type_arg_names_3_p_0(
  MR_Word mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__IsFunc_2,
  MR_Word * mercury__type_desc__HeadVar__3_3);

static MR_bool MR_CALL 
mercury__type_desc__all_true__ho2_2_p_in__list_0(
  MR_Word mercury__type_desc__HeadVar__2_2);

static MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_rep_0_0_10001(
  MR_Box mercury__type_desc__wrapper_arg_1,
  MR_Box mercury__type_desc__wrapper_arg_2);

static void MR_CALL 
mercury__type_desc____Compare____pseudo_type_rep_0_0_10001(
  MR_Box * mercury__type_desc__wrapper_arg_1,
  MR_Box mercury__type_desc__wrapper_arg_2,
  MR_Box mercury__type_desc__wrapper_arg_3);


static /* final */ const MR_Box mercury__type_desc_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__type_desc_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__type_desc_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__type_desc_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__type_desc_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__type_desc_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__type_desc_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__type_desc_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__type_desc_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__type_desc_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__type_desc_scalar_common_3[0])),
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
#include "version_array.mh"

#line 490 "type_desc.m"
MR_String 
ML_type_name(
  MR_Word mercury__type_desc__Type_3)
#line 490 "type_desc.m"
{
#line 490 "type_desc.m"
	MR_String ret_value;
	ret_value = (MR_String)mercury__type_desc__type_name_1_f_0((MR_Word) mercury__type_desc__Type_3);
	return ret_value;
}

#line 1011 "type_desc.m"
MR_Word 
ML_get_type_info_for_type_info(void)
#line 1011 "type_desc.m"
{
#line 1011 "type_desc.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__type_desc__get_type_info_for_type_info_0_f_0();
	return ret_value;
}


static const MR_FA_TypeInfo_Struct1 mercury__type_desc__list__ti_list_1type_desc__type_ctor_info_pseudo_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0
  }
};

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0,
  (MR_PseudoTypeInfo) &mercury__type_desc__list__ti_list_1type_desc__type_ctor_info_pseudo_type_desc_0
};

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_0 = {
  (MR_String) "bound",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_1 = {
  (MR_String) "univ_tvar",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_2 = {
  (MR_String) "exist_tvar",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_0[1] = {
  &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_0
};

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_1[1] = {
  &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_1
};

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_2[1] = {
  &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_2
};

static const MR_DuPtagLayout mercury__type_desc__type_desc__du_ptag_ordered_pseudo_type_rep_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_2
  }
};

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_name_ordered_pseudo_type_rep_0[3] = {
  &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_0,
  &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_2,
  &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_1
};

static const MR_Integer mercury__type_desc__type_desc__functor_number_map_pseudo_type_rep_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__type_desc__type_desc__type_ctor_info_pseudo_type_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__type_desc____Unify____pseudo_type_rep_0_0_10001)),
  ((MR_Box) (mercury__type_desc____Compare____pseudo_type_rep_0_0_10001)),
  (MR_String) "type_desc",
  (MR_String) "pseudo_type_rep",
  {     mercury__type_desc__type_desc__du_name_ordered_pseudo_type_rep_0 },
  {     mercury__type_desc__type_desc__du_ptag_ordered_pseudo_type_rep_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__type_desc__type_desc__functor_number_map_pseudo_type_rep_0
};

static MR_Integer MR_CALL 
mercury__type_desc__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__type_desc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__type_desc____Compare____type_desc_0_0(
  MR_Word * mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2,
  MR_Word mercury__type_desc__HeadVar__3_3);

MR_bool MR_CALL 
mercury__type_desc____Unify____type_desc_0_0(
  MR_Word mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2);

void MR_CALL 
mercury__type_desc____Compare____pseudo_type_rep_0_0(
  MR_Word * mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2,
  MR_Word mercury__type_desc__HeadVar__3_3)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Integer mercury__type_desc__CastX_29 = (MR_Integer) mercury__type_desc__HeadVar__2_2;
    MR_Integer mercury__type_desc__CastY_30 = (MR_Integer) mercury__type_desc__HeadVar__3_3;

    mercury__type_desc__succeeded = (mercury__type_desc__CastX_29 == mercury__type_desc__CastY_30);
    if (mercury__type_desc__succeeded)
      *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__type_desc__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__type_desc__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__type_desc__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__type_desc__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mercury__type_desc__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__type_desc__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__type_desc__Var_8;

                  {
                    mercury__type_desc____Compare____type_ctor_desc_0_0(&mercury__type_desc__Var_8, mercury__type_desc__Var_36, mercury__type_desc__ArgY1_5);
                  }
                  mercury__type_desc__succeeded = (mercury__type_desc__Var_8 == (MR_Integer) 0);
                  mercury__type_desc__succeeded = !(mercury__type_desc__succeeded);
                  if (mercury__type_desc__succeeded)
                    *mercury__type_desc__HeadVar__1_1 = mercury__type_desc__Var_8;
                  else
                  {
                    MR_Word mercury__type_desc__TypeInfo_34_34 = (MR_Word) &mercury__type_desc_scalar_common_1[0];

                    {
                      mercury__builtin__compare_3_p_0(mercury__type_desc__TypeInfo_34_34, mercury__type_desc__HeadVar__1_1, ((MR_Box) (mercury__type_desc__Var_35)), ((MR_Box) (mercury__type_desc__ArgY2_7)));
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__type_desc__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__type_desc__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__type_desc__ArgY1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__type_desc__succeeded = (mercury__type_desc__Var_38 < mercury__type_desc__ArgY1_19);
                  if (mercury__type_desc__succeeded)
                    *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__type_desc__succeeded = (mercury__type_desc__Var_38 == mercury__type_desc__ArgY1_19);
                    if (mercury__type_desc__succeeded)
                      *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__type_desc__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__type_desc__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__type_desc__ArgY1_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__type_desc__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__type_desc__succeeded = (mercury__type_desc__Var_37 < mercury__type_desc__ArgY1_28);
                  if (mercury__type_desc__succeeded)
                    *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__type_desc__succeeded = (mercury__type_desc__Var_37 == mercury__type_desc__ArgY1_28);
                    if (mercury__type_desc__succeeded)
                      *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__type_desc__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
mercury__type_desc____Compare____type_ctor_desc_0_0(
  MR_Word * mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2,
  MR_Word mercury__type_desc__HeadVar__3_3);

MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_rep_0_0(
  MR_Word mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Integer mercury__type_desc__CastX_11 = (MR_Integer) mercury__type_desc__HeadVar__1_1;
    MR_Integer mercury__type_desc__CastY_12 = (MR_Integer) mercury__type_desc__HeadVar__2_2;

    mercury__type_desc__succeeded = (mercury__type_desc__CastX_11 == mercury__type_desc__CastY_12);
    if (mercury__type_desc__succeeded)
      mercury__type_desc__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__type_desc__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__type_desc__TypeInfo_13_13;
            MR_Word mercury__type_desc__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__type_desc__ArgY1_4;
            MR_Word mercury__type_desc__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__type_desc__ArgY2_6;

            mercury__type_desc__succeeded = ((MR_tag((MR_Word) mercury__type_desc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__type_desc__succeeded)
            {
              mercury__type_desc__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));
              mercury__type_desc__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__type_desc__HeadVar__2_2, (MR_Integer) 1)));
              {
                mercury__type_desc__succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(mercury__type_desc__ArgX1_3, mercury__type_desc__ArgY1_4);
              }
              if (mercury__type_desc__succeeded)
              {
                mercury__type_desc__TypeInfo_13_13 = (MR_Word) &mercury__type_desc_scalar_common_1[0];
                {
                  mercury__type_desc__succeeded = mercury__builtin__unify_2_p_0(mercury__type_desc__TypeInfo_13_13, ((MR_Box) (mercury__type_desc__ArgX2_5)), ((MR_Box) (mercury__type_desc__ArgY2_6)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__type_desc__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__type_desc__ArgY1_8;

            mercury__type_desc__succeeded = ((MR_tag((MR_Word) mercury__type_desc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__type_desc__succeeded)
            {
              mercury__type_desc__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));
              mercury__type_desc__succeeded = (mercury__type_desc__ArgX1_7 == mercury__type_desc__ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__type_desc__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__type_desc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__type_desc__ArgY1_10;

            mercury__type_desc__succeeded = ((MR_tag((MR_Word) mercury__type_desc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__type_desc__succeeded)
            {
              mercury__type_desc__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));
              mercury__type_desc__succeeded = (mercury__type_desc__ArgX1_9 == mercury__type_desc__ArgY1_10);
            }
          }
          break;
      }
    return mercury__type_desc__succeeded;
  }
}

MR_bool MR_CALL 
mercury__type_desc____Unify____type_ctor_desc_0_0(
  MR_Word mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2);

void MR_CALL 
mercury__type_desc____Compare____pseudo_type_desc_0_0(
  MR_Word * mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2,
  MR_Word mercury__type_desc__HeadVar__3_3);

MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_desc_0_0(
  MR_Word mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__type_desc__get_type_info_for_type_info_0_f_0(void)
{
  {
    MR_Word mercury__type_desc__TypeDesc_2;
    MR_Word mercury__type_desc__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__type_desc__TypeCtorInfo_6_6;
    MR_Word mercury__type_desc__Type_3;
    MR_Integer mercury__type_desc__Var_4;
    MR_Word mercury__type_desc__Var_7;

{
#define MR_PROC_LABEL mercury__type_desc__get_type_info_for_type_info_0_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__type_desc__TypeCtorInfo_5_5 ;
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
	 mercury__type_desc__Type_3  = TypeInfo;
}
    mercury__type_desc__TypeCtorInfo_6_6 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
{
#define MR_PROC_LABEL mercury__type_desc__get_type_info_for_type_info_0_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__type_desc__TypeCtorInfo_6_6 ;
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
	 mercury__type_desc__TypeDesc_2  = TypeInfo;
}
    return mercury__type_desc__TypeDesc_2;
  }
}

static MR_bool MR_CALL 
mercury__type_desc__is_exist_pseudo_type_desc_2_p_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_1,
  MR_Integer * mercury__type_desc__TypeVarNum_2)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__is_exist_pseudo_type_desc_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_1 ;
		{

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_EXIST_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__type_desc__TypeVarNum_2  = TypeVarNum;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__type_desc__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__type_desc__is_univ_pseudo_type_desc_2_p_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_1,
  MR_Integer * mercury__type_desc__TypeVarNum_2)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__is_univ_pseudo_type_desc_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_1 ;
		{

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_UNIV_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__type_desc__TypeVarNum_2  = TypeVarNum;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__type_desc__succeeded;
  }
}

void MR_CALL 
mercury__type_desc__type_info_list_to_type_desc_list_2_p_0(
  MR_Word mercury__type_desc__TypeInfoList_3,
  MR_Word * mercury__type_desc__TypeDescList_4)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__type_info_list_to_type_desc_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
      *mercury__type_desc__TypeDescList_4 = (MR_Word) mercury__type_desc__TypeInfoList_3;
    else
      {
        mercury__type_desc__map__ho1_3_p_in__list_0(mercury__type_desc__TypeInfoList_3, mercury__type_desc__TypeDescList_4);
      }
  }
}

static void MR_CALL 
mercury__type_desc__map__ho1_3_p_in__list_0(
  MR_Word mercury__type_desc__HeadVar__2_2,
  MR_Word * mercury__type_desc__HeadVar__3_3)
{
  {
    MR_bool mercury__type_desc__succeeded;

    if ((mercury__type_desc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__type_desc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__type_desc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__type_desc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__type_desc__V_8_8;
      MR_Word mercury__type_desc__V_9_9;

{
#define MR_PROC_LABEL mercury__type_desc__map__ho1_3_p_in__list_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__type_desc__succeeded)
        mercury__type_desc__V_8_8 = (MR_Word) mercury__type_desc__V_6_6;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "type_info_to_type_desc/2");
          return;
        }
      }
      {
        mercury__type_desc__map__ho1_3_p_in__list_0(mercury__type_desc__V_7_7, &mercury__type_desc__V_9_9);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__type_desc__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__type_desc__V_8_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__type_desc__V_9_9));
      }
    }
  }
}

void MR_CALL 
mercury__type_desc__type_info_to_type_desc_2_p_0(
  MR_Word mercury__type_desc__TypeInfo_3,
  MR_Word * mercury__type_desc__TypeDesc_4)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__type_info_to_type_desc_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
      *mercury__type_desc__TypeDesc_4 = (MR_Word) mercury__type_desc__TypeInfo_3;
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "type_info_to_type_desc/2");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__type_desc__type_desc_to_type_info_2_p_0(
  MR_Word mercury__type_desc__TypeDesc_3,
  MR_Word * mercury__type_desc__TypeInfo_4)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__type_desc_to_type_info_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
      *mercury__type_desc__TypeInfo_4 = (MR_Word) mercury__type_desc__TypeDesc_3;
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "type_desc_to_type_info/2");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__type_desc__det_make_type_2_f_0(
  MR_Word mercury__type_desc__TypeCtor_4,
  MR_Word mercury__type_desc__ArgTypes_5)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Word mercury__type_desc__Type_6;
    MR_Word mercury__type_desc__NewType_7;

{
#define MR_PROC_LABEL mercury__type_desc__det_make_type_2_f_0

	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;
	MR_Word TypeDesc;
	MR_bool SUCCESS_INDICATOR;

	TypeCtorDesc =  mercury__type_desc__TypeCtor_4 ;
	ArgTypes =  mercury__type_desc__ArgTypes_5 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeCtorInfo type_ctor_info;
    MR_Word     arg_type;
    int     list_length;
    int     arity;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        arity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);
        arity = type_ctor_info->MR_type_ctor_arity;
    }

    arg_type = ArgTypes;
    for (list_length = 0; ! MR_list_is_empty(arg_type); list_length++) {
        arg_type = MR_list_tail(arg_type);
    }

    if (list_length != arity) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        MR_save_transient_registers();
        TypeDesc = (MR_Word) MR_make_type(arity, type_ctor_desc, ArgTypes);
        MR_restore_transient_registers();
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc__NewType_7  = TypeDesc;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
      mercury__type_desc__Type_6 = mercury__type_desc__NewType_7;
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "det_make_type/2: make_type/2 failed (wrong arity)");
      }
    }
    return mercury__type_desc__Type_6;
  }
}

void MR_CALL 
mercury__type_desc__make_type_2_f_1(
  MR_Word * mercury__type_desc__TypeCtorDesc_1,
  MR_Word * mercury__type_desc__ArgTypes_2,
  MR_Word mercury__type_desc__TypeDesc_3)
{
  {
{
#define MR_PROC_LABEL mercury__type_desc__make_type_2_f_1

	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;
	MR_Word TypeDesc;

	TypeDesc =  mercury__type_desc__TypeDesc_3 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_FALSE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	 *mercury__type_desc__TypeCtorDesc_1  = TypeCtorDesc;
	 *mercury__type_desc__ArgTypes_2  = ArgTypes;
}
  }
}

MR_bool MR_CALL 
mercury__type_desc__make_type_2_f_0(
  MR_Word mercury__type_desc__TypeCtorDesc_1,
  MR_Word mercury__type_desc__ArgTypes_2,
  MR_Word * mercury__type_desc__TypeDesc_3)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__make_type_2_f_0

	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;
	MR_Word TypeDesc;
	MR_bool SUCCESS_INDICATOR;

	TypeCtorDesc =  mercury__type_desc__TypeCtorDesc_1 ;
	ArgTypes =  mercury__type_desc__ArgTypes_2 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeCtorInfo type_ctor_info;
    MR_Word     arg_type;
    int     list_length;
    int     arity;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        arity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);
        arity = type_ctor_info->MR_type_ctor_arity;
    }

    arg_type = ArgTypes;
    for (list_length = 0; ! MR_list_is_empty(arg_type); list_length++) {
        arg_type = MR_list_tail(arg_type);
    }

    if (list_length != arity) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        MR_save_transient_registers();
        TypeDesc = (MR_Word) MR_make_type(arity, type_ctor_desc, ArgTypes);
        MR_restore_transient_registers();
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__type_desc__TypeDesc_3  = TypeDesc;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__type_desc__succeeded;
  }
}

void MR_CALL 
mercury__type_desc__type_ctor_name_and_arity_4_p_0(
  MR_Word mercury__type_desc__TypeCtorDesc_1,
  MR_String * mercury__type_desc__TypeCtorModuleName_2,
  MR_String * mercury__type_desc__TypeCtorName_3,
  MR_Integer * mercury__type_desc__TypeCtorArity_4)
{
  {
{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__type_desc__TypeCtorDesc_1 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 *mercury__type_desc__TypeCtorModuleName_2  = TypeCtorModuleName;
	 *mercury__type_desc__TypeCtorName_3  = TypeCtorName;
	 *mercury__type_desc__TypeCtorArity_4  = TypeCtorArity;
}
  }
}

MR_Integer MR_CALL 
mercury__type_desc__type_ctor_arity_1_f_0(
  MR_Word mercury__type_desc__TypeCtor_3)
{
  {
    MR_Integer mercury__type_desc__Arity_4;
    MR_String mercury__type_desc___ModuleName_5;
    MR_String mercury__type_desc___Name_6;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_arity_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__type_desc__TypeCtor_3 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__type_desc___ModuleName_5  = TypeCtorModuleName;
	 mercury__type_desc___Name_6  = TypeCtorName;
	 mercury__type_desc__Arity_4  = TypeCtorArity;
}
    return mercury__type_desc__Arity_4;
  }
}

MR_String MR_CALL 
mercury__type_desc__type_ctor_module_name_1_f_0(
  MR_Word mercury__type_desc__TypeCtor_3)
{
  {
    MR_String mercury__type_desc__ModuleName_4;
    MR_String mercury__type_desc___Name_5;
    MR_Integer mercury__type_desc___Arity_6;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_module_name_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__type_desc__TypeCtor_3 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__type_desc__ModuleName_4  = TypeCtorModuleName;
	 mercury__type_desc___Name_5  = TypeCtorName;
	 mercury__type_desc___Arity_6  = TypeCtorArity;
}
    return mercury__type_desc__ModuleName_4;
  }
}

MR_String MR_CALL 
mercury__type_desc__type_ctor_name_1_f_0(
  MR_Word mercury__type_desc__TypeCtor_3)
{
  {
    MR_String mercury__type_desc__Name_4;
    MR_String mercury__type_desc___ModuleName_5;
    MR_Integer mercury__type_desc___Arity_6;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_name_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__type_desc__TypeCtor_3 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__type_desc___ModuleName_5  = TypeCtorModuleName;
	 mercury__type_desc__Name_4  = TypeCtorName;
	 mercury__type_desc___Arity_6  = TypeCtorArity;
}
    return mercury__type_desc__Name_4;
  }
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_args_1_f_0(
  MR_Word mercury__type_desc__PseudoType_3,
  MR_Word * mercury__type_desc__ArgPseudoTypes_4)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Word mercury__type_desc___TypeCtor_5;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_args_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoType_3 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc___TypeCtor_5  = TypeCtorDesc;
	 *mercury__type_desc__ArgPseudoTypes_4  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__type_desc__succeeded;
  }
}

MR_Word MR_CALL 
mercury__type_desc__type_args_1_f_0(
  MR_Word mercury__type_desc__Type_3)
{
  {
    MR_Word mercury__type_desc__ArgTypes_4;
    MR_Word mercury__type_desc___TypeCtor_5;

{
#define MR_PROC_LABEL mercury__type_desc__type_args_1_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__type_desc__Type_3 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	 mercury__type_desc___TypeCtor_5  = TypeCtorDesc;
	 mercury__type_desc__ArgTypes_4  = ArgTypes;
}
    return mercury__type_desc__ArgTypes_4;
  }
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_ctor_1_f_0(
  MR_Word mercury__type_desc__PseudoTypeInfo_1,
  MR_Word * mercury__type_desc__TypeCtor_2)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_ctor_1_f_0

	MR_Word PseudoTypeInfo;
	MR_Word TypeCtor;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeInfo =  mercury__type_desc__PseudoTypeInfo_1 ;
		{
{
    MR_TypeCtorInfo     type_ctor_info;
    MR_PseudoTypeInfo   pseudo_type_info;

    MR_save_transient_registers();
    pseudo_type_info = MR_collapse_equivalences_pseudo(
        (MR_PseudoTypeInfo) PseudoTypeInfo);
    MR_restore_transient_registers();

    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        type_ctor_info = MR_PSEUDO_TYPEINFO_GET_TYPE_CTOR_INFO(
            pseudo_type_info);
        TypeCtor = (MR_Word) MR_make_type_ctor_desc_pseudo(pseudo_type_info,
            type_ctor_info);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__type_desc__TypeCtor_2  = TypeCtor;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__type_desc__succeeded;
  }
}

MR_Word MR_CALL 
mercury__type_desc__type_ctor_1_f_0(
  MR_Word mercury__type_desc__TypeInfo_1)
{
  {
    MR_Word mercury__type_desc__TypeCtor_2;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_1_f_0

	MR_Word TypeInfo;
	MR_Word TypeCtor;

	TypeInfo =  mercury__type_desc__TypeInfo_1 ;
		{
{
    MR_TypeCtorInfo type_ctor_info;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();
    type_info = MR_collapse_equivalences((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();

    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

    TypeCtor = (MR_Word) MR_make_type_ctor_desc(type_info, type_ctor_info);
}

		;}
#undef MR_PROC_LABEL
	 mercury__type_desc__TypeCtor_2  = TypeCtor;
}
    return mercury__type_desc__TypeCtor_2;
  }
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_ctor_and_args_3_p_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_1,
  MR_Word * mercury__type_desc__TypeCtorDesc_2,
  MR_Word * mercury__type_desc__ArgPseudoTypeInfos_3)
{
  {
    MR_bool mercury__type_desc__succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_ctor_and_args_3_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_1 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__type_desc__TypeCtorDesc_2  = TypeCtorDesc;
	 *mercury__type_desc__ArgPseudoTypeInfos_3  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__type_desc__succeeded;
  }
}

void MR_CALL 
mercury__type_desc__type_ctor_and_args_3_p_0(
  MR_Word mercury__type_desc__TypeDesc_1,
  MR_Word * mercury__type_desc__TypeCtorDesc_2,
  MR_Word * mercury__type_desc__ArgTypes_3)
{
  {
{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_and_args_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__type_desc__TypeDesc_1 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	 *mercury__type_desc__TypeCtorDesc_2  = TypeCtorDesc;
	 *mercury__type_desc__ArgTypes_3  = ArgTypes;
}
  }
}

static void MR_CALL 
mercury__type_desc__type_arg_names_3_p_0(
  MR_Word mercury__type_desc__HeadVar__1_1,
  MR_Word mercury__type_desc__IsFunc_2,
  MR_Word * mercury__type_desc__HeadVar__3_3)
{
  {
    MR_bool mercury__type_desc__succeeded;

    if ((mercury__type_desc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__type_desc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__type_desc__Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__type_desc__Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__1_1, (MR_Integer) 1)));
      MR_String mercury__type_desc__Name_9;

      {
        mercury__type_desc__Name_9 = mercury__type_desc__type_name_1_f_0(mercury__type_desc__Type_5);
      }
      if ((mercury__type_desc__Types_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__type_desc__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__type_desc__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__type_desc__Name_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__type_desc__Var_22));
        }
      }
      else
      {
        MR_Word mercury__type_desc__FuncReturnType_12;
        MR_Word mercury__type_desc__Var_15;

        mercury__type_desc__succeeded = (mercury__type_desc__IsFunc_2 == (MR_Integer) 1);
        if (mercury__type_desc__succeeded)
        {
          mercury__type_desc__FuncReturnType_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__Types_6, (MR_Integer) 0)));
          mercury__type_desc__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__Types_6, (MR_Integer) 1)));
          mercury__type_desc__succeeded = (mercury__type_desc__Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (mercury__type_desc__succeeded)
        {
          MR_String mercury__type_desc__FuncReturnName_13;
          MR_Word mercury__type_desc__Var_16;
          MR_Word mercury__type_desc__Var_18;
          MR_Word mercury__type_desc__Var_19;

          {
            mercury__type_desc__FuncReturnName_13 = mercury__type_desc__type_name_1_f_0(mercury__type_desc__FuncReturnType_12);
          }
          mercury__type_desc__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__type_desc__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_18, 0) = ((MR_Box) (mercury__type_desc__FuncReturnName_13));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_18, 1) = ((MR_Box) (mercury__type_desc__Var_19));
          }
          {
            mercury__type_desc__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_16, 0) = ((MR_Box) ((MR_String) ") = "));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_16, 1) = ((MR_Box) (mercury__type_desc__Var_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__type_desc__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__type_desc__Name_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__type_desc__Var_16));
          }
        }
        else
        {
          MR_Word mercury__type_desc__Names_14;
          MR_Word mercury__type_desc__Var_20;

          {
            mercury__type_desc__type_arg_names_3_p_0(mercury__type_desc__Types_6, mercury__type_desc__IsFunc_2, &mercury__type_desc__Names_14);
          }
          {
            mercury__type_desc__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_20, 0) = ((MR_Box) ((MR_String) ", "));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_20, 1) = ((MR_Box) (mercury__type_desc__Names_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__type_desc__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__type_desc__Name_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__type_desc__Var_20));
          }
        }
      }
    }
  }
}

MR_String MR_CALL 
mercury__type_desc__type_name_1_f_0(
  MR_Word mercury__type_desc__Type_3)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_String mercury__type_desc__TypeName_4;
    MR_Word mercury__type_desc__TypeCtor_5;
    MR_Word mercury__type_desc__ArgTypes_6;
    MR_String mercury__type_desc__ModuleName_7;
    MR_String mercury__type_desc__Name_8;
    MR_Integer mercury__type_desc__Arity_9;
    MR_String mercury__type_desc__UnqualifiedTypeName_10;

{
#define MR_PROC_LABEL mercury__type_desc__type_name_1_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__type_desc__Type_3 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	 mercury__type_desc__TypeCtor_5  = TypeCtorDesc;
	 mercury__type_desc__ArgTypes_6  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__type_desc__type_name_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__type_desc__TypeCtor_5 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__type_desc__ModuleName_7  = TypeCtorModuleName;
	 mercury__type_desc__Name_8  = TypeCtorName;
	 mercury__type_desc__Arity_9  = TypeCtorArity;
}
    mercury__type_desc__succeeded = (mercury__type_desc__Arity_9 == (MR_Integer) 0);
    if (mercury__type_desc__succeeded)
      mercury__type_desc__UnqualifiedTypeName_10 = mercury__type_desc__Name_8;
    else
    {
      MR_Word mercury__type_desc__IsFunc_11;

      mercury__type_desc__succeeded = (strcmp(mercury__type_desc__ModuleName_7, (MR_String) "builtin") == 0);
      if (mercury__type_desc__succeeded)
        mercury__type_desc__succeeded = (strcmp(mercury__type_desc__Name_8, (MR_String) "func") == 0);
      if (mercury__type_desc__succeeded)
        mercury__type_desc__IsFunc_11 = (MR_Integer) 1;
      else
        mercury__type_desc__IsFunc_11 = (MR_Integer) 0;
      mercury__type_desc__succeeded = (strcmp(mercury__type_desc__ModuleName_7, (MR_String) "builtin") == 0);
      if (mercury__type_desc__succeeded)
        mercury__type_desc__succeeded = (strcmp(mercury__type_desc__Name_8, (MR_String) "{}") == 0);
      if (mercury__type_desc__succeeded)
      {
        MR_Word mercury__type_desc__TypeCtorInfo_43_43;
        MR_Word mercury__type_desc__ArgTypeNames_12;
        MR_Word mercury__type_desc__TypeStrings0_13;
        MR_Word mercury__type_desc__TypeStrings_14;
        MR_Word mercury__type_desc__Var_18;
        MR_Word mercury__type_desc__Var_20;

        {
          mercury__type_desc__type_arg_names_3_p_0(mercury__type_desc__ArgTypes_6, mercury__type_desc__IsFunc_11, &mercury__type_desc__ArgTypeNames_12);
        }
        mercury__type_desc__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__type_desc__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__type_desc_scalar_common_1[1]);
        mercury__type_desc__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__list__append_3_p_1(mercury__type_desc__TypeCtorInfo_43_43, mercury__type_desc__ArgTypeNames_12, mercury__type_desc__Var_18, &mercury__type_desc__TypeStrings0_13);
        }
        {
          mercury__type_desc__TypeStrings_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__type_desc__TypeStrings_14, 0) = ((MR_Box) ((MR_String) "{"));
          MR_hl_field(MR_mktag(1), mercury__type_desc__TypeStrings_14, 1) = ((MR_Box) (mercury__type_desc__TypeStrings0_13));
        }
        {
          mercury__type_desc__UnqualifiedTypeName_10 = mercury__string__append_list_1_f_0(mercury__type_desc__TypeStrings_14);
        }
      }
      else
      {
        MR_Word mercury__type_desc__FuncRetType_15;
        MR_Word mercury__type_desc__Var_22;

        mercury__type_desc__succeeded = (mercury__type_desc__IsFunc_11 == (MR_Integer) 1);
        if (mercury__type_desc__succeeded)
        {
          mercury__type_desc__succeeded = ((MR_tag((MR_Word) mercury__type_desc__ArgTypes_6)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__type_desc__succeeded)
          {
            mercury__type_desc__FuncRetType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__ArgTypes_6, (MR_Integer) 0)));
            mercury__type_desc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__ArgTypes_6, (MR_Integer) 1)));
            mercury__type_desc__succeeded = (mercury__type_desc__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        if (mercury__type_desc__succeeded)
        {
          MR_String mercury__type_desc__FuncRetTypeName_16;
          MR_Word mercury__type_desc__Var_23;
          MR_Word mercury__type_desc__Var_25;
          MR_Word mercury__type_desc__Var_26;
          MR_Word mercury__type_desc__Var_28;

          {
            mercury__type_desc__FuncRetTypeName_16 = mercury__type_desc__type_name_1_f_0(mercury__type_desc__FuncRetType_15);
          }
          mercury__type_desc__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__type_desc__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__type_desc_scalar_common_1[2]);
          {
            mercury__type_desc__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_25, 0) = ((MR_Box) (mercury__type_desc__FuncRetTypeName_16));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_25, 1) = ((MR_Box) (mercury__type_desc__Var_26));
          }
          {
            mercury__type_desc__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_23, 0) = ((MR_Box) ((MR_String) "((func) = "));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_23, 1) = ((MR_Box) (mercury__type_desc__Var_25));
          }
          {
            mercury__type_desc__UnqualifiedTypeName_10 = mercury__string__append_list_1_f_0(mercury__type_desc__Var_23);
          }
        }
        else
        {
          MR_Word mercury__type_desc__TypeNameStrings_17;
          MR_Word mercury__type_desc__Var_32;
          MR_Word mercury__type_desc__ArgTypeNames_39;
          MR_Word mercury__type_desc__TypeStrings0_40;

          {
            mercury__type_desc__type_arg_names_3_p_0(mercury__type_desc__ArgTypes_6, mercury__type_desc__IsFunc_11, &mercury__type_desc__ArgTypeNames_39);
          }
          switch (mercury__type_desc__IsFunc_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__type_desc__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                MR_Word mercury__type_desc__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__type_desc_scalar_common_1[2]);
                MR_Word mercury__type_desc__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__list__append_3_p_1(mercury__type_desc__TypeCtorInfo_44_44, mercury__type_desc__ArgTypeNames_39, mercury__type_desc__Var_29, &mercury__type_desc__TypeStrings0_40);
                }
              }
              break;
            case (MR_Integer) 1:
              mercury__type_desc__TypeStrings0_40 = mercury__type_desc__ArgTypeNames_39;
              break;
          }
          {
            mercury__type_desc__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_32, 0) = ((MR_Box) ((MR_String) "("));
            MR_hl_field(MR_mktag(1), mercury__type_desc__Var_32, 1) = ((MR_Box) (mercury__type_desc__TypeStrings0_40));
          }
          {
            mercury__type_desc__TypeNameStrings_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__TypeNameStrings_17, 0) = ((MR_Box) (mercury__type_desc__Name_8));
            MR_hl_field(MR_mktag(1), mercury__type_desc__TypeNameStrings_17, 1) = ((MR_Box) (mercury__type_desc__Var_32));
          }
          {
            mercury__type_desc__UnqualifiedTypeName_10 = mercury__string__append_list_1_f_0(mercury__type_desc__TypeNameStrings_17);
          }
        }
      }
    }
    mercury__type_desc__succeeded = (strcmp(mercury__type_desc__ModuleName_7, (MR_String) "builtin") == 0);
    if (mercury__type_desc__succeeded)
      mercury__type_desc__TypeName_4 = mercury__type_desc__UnqualifiedTypeName_10;
    else
    {
      MR_Word mercury__type_desc__Var_34;
      MR_Word mercury__type_desc__Var_35;
      MR_Word mercury__type_desc__Var_37;
      MR_Word mercury__type_desc__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        mercury__type_desc__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__type_desc__Var_37, 0) = ((MR_Box) (mercury__type_desc__UnqualifiedTypeName_10));
        MR_hl_field(MR_mktag(1), mercury__type_desc__Var_37, 1) = ((MR_Box) (mercury__type_desc__Var_38));
      }
      {
        mercury__type_desc__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__type_desc__Var_35, 0) = ((MR_Box) ((MR_String) "."));
        MR_hl_field(MR_mktag(1), mercury__type_desc__Var_35, 1) = ((MR_Box) (mercury__type_desc__Var_37));
      }
      {
        mercury__type_desc__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__type_desc__Var_34, 0) = ((MR_Box) (mercury__type_desc__ModuleName_7));
        MR_hl_field(MR_mktag(1), mercury__type_desc__Var_34, 1) = ((MR_Box) (mercury__type_desc__Var_35));
      }
      {
        mercury__type_desc__TypeName_4 = mercury__string__append_list_1_f_0(mercury__type_desc__Var_34);
      }
    }
    return mercury__type_desc__TypeName_4;
  }
}

void MR_CALL 
mercury__type_desc__same_type_2_p_0(
  MR_Word mercury__type_desc__TypeInfo_for_T_5)
{
  {
  }
}

void MR_CALL 
mercury__type_desc__has_type_2_p_0(
  MR_Word * mercury__type_desc__TypeInfo_for_T_3,
  MR_Word mercury__type_desc__HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__type_desc__has_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__type_desc__HeadVar__2_2 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__type_desc__TypeInfo_for_T_3  = TypeInfo_for_T;
}
  }
}

MR_Word MR_CALL 
mercury__type_desc__type_of_1_f_0(
  MR_Word mercury__type_desc__TypeInfo_for_T_3)
{
  {
    MR_Word mercury__type_desc__HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__type_desc__type_of_1_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__type_desc__TypeInfo_for_T_3 ;
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
	 mercury__type_desc__HeadVar__2_2  = TypeInfo;
}
    return mercury__type_desc__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_3)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Word mercury__type_desc__TypeDesc_4;
    MR_Word mercury__type_desc__ArgPseudos_8;
    MR_Word mercury__type_desc___TypeCtor_7;

{
#define MR_PROC_LABEL mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_3 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc___TypeCtor_7  = TypeCtorDesc;
	 mercury__type_desc__ArgPseudos_8  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
      {
        mercury__type_desc__succeeded = mercury__type_desc__all_true__ho2_2_p_in__list_0(mercury__type_desc__ArgPseudos_8);
      }
    if (mercury__type_desc__succeeded)
      mercury__type_desc__TypeDesc_4 = (MR_Word) mercury__type_desc__PseudoTypeDesc_3;
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "det_ground_pseudo_type_desc_to_type_desc: not ground");
      }
    }
    return mercury__type_desc__TypeDesc_4;
  }
}

MR_bool MR_CALL 
mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_3,
  MR_Word * mercury__type_desc__TypeDesc_4)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Word mercury__type_desc__ArgPseudos_7;
    MR_Word mercury__type_desc___TypeCtor_6;

{
#define MR_PROC_LABEL mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_3 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc___TypeCtor_6  = TypeCtorDesc;
	 mercury__type_desc__ArgPseudos_7  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
    {
      {
        mercury__type_desc__succeeded = mercury__type_desc__all_true__ho2_2_p_in__list_0(mercury__type_desc__ArgPseudos_7);
      }
      if (mercury__type_desc__succeeded)
      {
        *mercury__type_desc__TypeDesc_4 = (MR_Word) mercury__type_desc__PseudoTypeDesc_3;
        mercury__type_desc__succeeded = MR_TRUE;
      }
    }
    return mercury__type_desc__succeeded;
  }
}

MR_bool MR_CALL 
mercury__type_desc__ground_pseudo_type_desc_to_type_desc_1_f_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_3,
  MR_Word * mercury__type_desc__TypeDesc_4)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Word mercury__type_desc__ArgPseudos_9;
    MR_Word mercury__type_desc___TypeCtor_8;

{
#define MR_PROC_LABEL mercury__type_desc__ground_pseudo_type_desc_to_type_desc_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_3 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc___TypeCtor_8  = TypeCtorDesc;
	 mercury__type_desc__ArgPseudos_9  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
    {
      {
        mercury__type_desc__succeeded = mercury__type_desc__all_true__ho2_2_p_in__list_0(mercury__type_desc__ArgPseudos_9);
      }
      if (mercury__type_desc__succeeded)
      {
        *mercury__type_desc__TypeDesc_4 = (MR_Word) mercury__type_desc__PseudoTypeDesc_3;
        mercury__type_desc__succeeded = MR_TRUE;
      }
    }
    return mercury__type_desc__succeeded;
  }
}

MR_Word MR_CALL 
mercury__type_desc__type_desc_to_pseudo_type_desc_1_f_0(
  MR_Word mercury__type_desc__TypeDesc_1)
{
  {
    MR_Word mercury__type_desc__PseudoTypeDesc_2;

{
#define MR_PROC_LABEL mercury__type_desc__type_desc_to_pseudo_type_desc_1_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc =  mercury__type_desc__TypeDesc_1 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	 mercury__type_desc__PseudoTypeDesc_2  = PseudoTypeDesc;
}
    return mercury__type_desc__PseudoTypeDesc_2;
  }
}

MR_Word MR_CALL 
mercury__type_desc__pseudo_type_desc_to_rep_1_f_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_3)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Word mercury__type_desc__PseudoTypeRep_4;
    MR_Word mercury__type_desc__TypeCtor_5;
    MR_Word mercury__type_desc__ArgPseudos_6;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_to_rep_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_3 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc__TypeCtor_5  = TypeCtorDesc;
	 mercury__type_desc__ArgPseudos_6  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
      {
        mercury__type_desc__PseudoTypeRep_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__type_desc__PseudoTypeRep_4, 0) = ((MR_Box) (mercury__type_desc__TypeCtor_5));
        MR_hl_field(MR_mktag(0), mercury__type_desc__PseudoTypeRep_4, 1) = ((MR_Box) (mercury__type_desc__ArgPseudos_6));
      }
    else
    {
      MR_Integer mercury__type_desc__UnivNum_7;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_to_rep_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_3 ;
		{

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_EXIST_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc__UnivNum_7  = TypeVarNum;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__type_desc__succeeded)
        {
          mercury__type_desc__PseudoTypeRep_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__type_desc__PseudoTypeRep_4, 0) = ((MR_Box) (mercury__type_desc__UnivNum_7));
        }
      else
      {
        MR_Integer mercury__type_desc__UnivNum_9;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_to_rep_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_3 ;
		{

    MR_PseudoTypeInfo   pseudo_type_info;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    if (MR_PSEUDO_TYPEINFO_IS_VARIABLE(pseudo_type_info) &&
        MR_TYPE_VARIABLE_IS_UNIV_QUANT(pseudo_type_info))
    {
        TypeVarNum = (MR_Integer) pseudo_type_info;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc__UnivNum_9  = TypeVarNum;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__type_desc__succeeded)
          {
            mercury__type_desc__PseudoTypeRep_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__type_desc__PseudoTypeRep_4, 0) = ((MR_Box) (mercury__type_desc__UnivNum_9));
          }
        else
        {
          {
            mercury__require__error_1_p_0((MR_String) "pseudo_type_desc_to_rep: internal error");
          }
        }
      }
    }
    return mercury__type_desc__PseudoTypeRep_4;
  }
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_desc_is_ground_1_p_0(
  MR_Word mercury__type_desc__PseudoTypeDesc_2)
{
  {
    MR_bool mercury__type_desc__succeeded;
    MR_Word mercury__type_desc__ArgPseudos_4;
    MR_Word mercury__type_desc___TypeCtor_3;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_is_ground_1_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__PseudoTypeDesc_2 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc___TypeCtor_3  = TypeCtorDesc;
	 mercury__type_desc__ArgPseudos_4  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__type_desc__succeeded)
      {
        mercury__type_desc__succeeded = mercury__type_desc__all_true__ho2_2_p_in__list_0(mercury__type_desc__ArgPseudos_4);
      }
    return mercury__type_desc__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__type_desc__all_true__ho2_2_p_in__list_0(
  MR_Word mercury__type_desc__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__type_desc__succeeded;

      if ((mercury__type_desc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__type_desc__succeeded = MR_TRUE;
      else
      {
        MR_Word mercury__type_desc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__type_desc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__type_desc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__type_desc__ArgPseudos_10;
        MR_Word mercury__type_desc___TypeCtor_9;

{
#define MR_PROC_LABEL mercury__type_desc__all_true__ho2_2_p_in__list_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc =  mercury__type_desc__V_5_5 ;
		{
{
    MR_TypeCtorDesc     type_ctor_desc;
    MR_PseudoTypeInfo   pseudo_type_info;
    MR_bool             success;

    pseudo_type_info = (MR_PseudoTypeInfo) PseudoTypeDesc;
    MR_save_transient_registers();
    success = MR_pseudo_type_ctor_and_args(pseudo_type_info, MR_TRUE,
        &type_ctor_desc, &ArgPseudoTypeInfos);
    TypeCtorDesc = (MR_Word) type_ctor_desc;
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__type_desc___TypeCtor_9  = TypeCtorDesc;
	 mercury__type_desc__ArgPseudos_10  = ArgPseudoTypeInfos;
	}
mercury__type_desc__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__type_desc__succeeded)
        {
          {
            mercury__type_desc__succeeded = mercury__type_desc__all_true__ho2_2_p_in__list_0(mercury__type_desc__ArgPseudos_10);
          }
          if (mercury__type_desc__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__type_desc__next_value_of_HeadVar__2_2 = mercury__type_desc__V_6_6;

              mercury__type_desc__HeadVar__2_2 = mercury__type_desc__next_value_of_HeadVar__2_2;
            }
            continue;
          }
        }
      }
      return mercury__type_desc__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_rep_0_0_10001(
  MR_Box mercury__type_desc__wrapper_arg_1,
  MR_Box mercury__type_desc__wrapper_arg_2)
{
  {
    MR_bool mercury__type_desc__succeeded;

    {
      mercury__type_desc__succeeded = mercury__type_desc____Unify____pseudo_type_rep_0_0(((MR_Word) mercury__type_desc__wrapper_arg_1), ((MR_Word) mercury__type_desc__wrapper_arg_2));
    }
    return mercury__type_desc__succeeded;
  }
}

static void MR_CALL 
mercury__type_desc____Compare____pseudo_type_rep_0_0_10001(
  MR_Box * mercury__type_desc__wrapper_arg_1,
  MR_Box mercury__type_desc__wrapper_arg_2,
  MR_Box mercury__type_desc__wrapper_arg_3)
{
  {
    MR_Word mercury__type_desc__conv0_HeadVar__1_1;

    {
      mercury__type_desc____Compare____pseudo_type_rep_0_0(&mercury__type_desc__conv0_HeadVar__1_1, ((MR_Word) mercury__type_desc__wrapper_arg_2), ((MR_Word) mercury__type_desc__wrapper_arg_3));
    }
    *mercury__type_desc__wrapper_arg_1 = ((MR_Box) (mercury__type_desc__conv0_HeadVar__1_1));
  }
}

void mercury__type_desc__init(void)
{
}

void mercury__type_desc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_rep_0);
}

void mercury__type_desc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__type_desc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module type_desc. */
