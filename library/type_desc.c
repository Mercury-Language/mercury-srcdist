/*
** Automatically generated from `type_desc.m'
** by the Mercury compiler,
** version rotd-2024-03-27
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module type_desc.
// :- implementation.

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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
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

static MR_Word MR_CALL 
mercury__type_desc__get_type_info_for_type_info_0_f_0(void);

static void MR_CALL 
mercury__type_desc__type_ctor_desc_to_type_ctor_info_2_p_0(
  MR_Word TypeCtorDesc_3,
  MR_Word * TypeCtorInfo_4);

static void MR_CALL 
mercury__type_desc__make_type_ctor_desc_with_arity_3_p_0(
  MR_Integer HeadVar__1_4,
  MR_Word HeadVar__2_5,
  MR_Word * HeadVar__3_6);

static void MR_CALL 
mercury__type_desc__make_type_ctor_desc_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word HeadVar__2_5,
  MR_Word * HeadVar__3_6);

static void MR_CALL 
mercury__type_desc__pseudo_type_desc_to_pseudo_type_info_2_p_0(
  MR_Word PseudoTypeDesc_3,
  MR_Word * PseudoTypeInfo_4);

static MR_bool MR_CALL 
mercury__type_desc__is_exist_pseudo_type_desc_2_p_0(
  MR_Word PseudoTypeDesc_1,
  MR_Integer * TypeVarNum_2);

static MR_bool MR_CALL 
mercury__type_desc__is_univ_pseudo_type_desc_2_p_0(
  MR_Word PseudoTypeDesc_1,
  MR_Integer * TypeVarNum_2);

static void MR_CALL 
mercury__type_desc__map__ho2_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__type_desc__LCMC__pred__map__ho2__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14);

static void MR_CALL 
mercury__type_desc__LCMC__pred__type_arg_names_lag__1_3_p_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5,
  MR_Word * AddrOfNames_15);

static void MR_CALL 
mercury__type_desc__type_arg_names_lag_3_p_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5,
  MR_Word * Names_6);

static MR_Word MR_CALL 
mercury__type_desc__map__ho1_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__type_desc__LCMC__func__map__ho1__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static MR_bool MR_CALL 
mercury__type_desc__all_true__ho3_2_p_in__list_0(
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__type_desc____Compare____pseudo_type_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__type_desc_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__type_desc_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__type_desc_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__type_desc_scalar_common_4[1][5];




static /* final */ const MR_Box mercury__type_desc_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__type_desc_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__type_desc_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__type_desc_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__type_desc_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__type_desc_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"

#line 458 "type_desc.m"
MR_String 
ML_type_name(
  MR_Word Type_3)
#line 458 "type_desc.m"
{
#line 458 "type_desc.m"
	MR_String ret_value;
	ret_value = (MR_String)mercury__type_desc__type_name_1_f_0((MR_Word) Type_3);
	return ret_value;
}

#line 940 "type_desc.m"
MR_Word 
ML_get_type_info_for_type_info(void)
#line 940 "type_desc.m"
{
#line 940 "type_desc.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__type_desc__get_type_info_for_type_info_0_f_0();
	return ret_value;
}


static const MR_FA_TypeInfo_Struct1 mercury__type_desc__list__ti_list_1type_desc__type_ctor_info_pseudo_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_pseudo_type_desc_0) }
};

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0),
  (MR_PseudoTypeInfo) (&mercury__type_desc__list__ti_list_1type_desc__type_ctor_info_pseudo_type_desc_0)
};

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_0 = {
  (MR_String) "bound",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_1 = {
  (MR_String) "univ_tvar",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_2 = {
  (MR_String) "exist_tvar",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__type_desc__type_desc__field_types_pseudo_type_rep_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_0[1] = { &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_0 };

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_1[1] = { &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_1 };

static const MR_DuFunctorDescPtr mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_2[1] = { &mercury__type_desc__type_desc__du_functor_desc_pseudo_type_rep_0_2 };

static const MR_DuPtagLayout mercury__type_desc__type_desc__du_ptag_ordered_pseudo_type_rep_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__type_desc__type_desc__du_stag_ordered_pseudo_type_rep_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__type_desc____Unify____pseudo_type_rep_0_0_10001)),
  ((MR_Box) (mercury__type_desc____Compare____pseudo_type_rep_0_0_10001)),
  (MR_String) "type_desc",
  (MR_String) "pseudo_type_rep",
  { mercury__type_desc__type_desc__du_name_ordered_pseudo_type_rep_0 },
  { mercury__type_desc__type_desc__du_ptag_ordered_pseudo_type_rep_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__type_desc__type_desc__functor_number_map_pseudo_type_rep_0,

};

void MR_CALL 
mercury__type_desc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
}

void MR_CALL 
mercury__type_desc____Compare____type_desc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__type_desc____Unify____type_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__type_desc____Compare____pseudo_type_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;

              mercury__type_desc____Compare____type_ctor_desc_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&mercury__type_desc_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              succeeded = (ArgX1_9 < ArgY1_10);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_9 == ArgY1_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_12 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              succeeded = (ArgX1_11 < ArgY1_12);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_11 == ArgY1_12);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
mercury__type_desc____Compare____type_ctor_desc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              TypeInfo_13_13 = (MR_Word) (&mercury__type_desc_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_9 == ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mercury__type_desc____Unify____type_ctor_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

void MR_CALL 
mercury__type_desc____Compare____pseudo_type_desc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__type_desc__get_type_info_for_type_info_0_f_0(void)
{
  MR_Word TypeDesc_2;

{
#define MR_PROC_LABEL mercury__type_desc__get_type_info_for_type_info_0_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	TypeDesc_2  = TypeInfo;
}
  return TypeDesc_2;
}

static void MR_CALL 
mercury__type_desc__type_ctor_desc_to_type_ctor_info_2_p_0(
  MR_Word TypeCtorDesc_3,
  MR_Word * TypeCtorInfo_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_desc_to_type_ctor_info_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *TypeCtorInfo_4 = (MR_Word) (TypeCtorDesc_3);
  else
    {
      mercury__require__error_1_p_0((MR_String) "type_ctor_desc_to_type_ctor_info/2");
      return;
    }
}

static void MR_CALL 
mercury__type_desc__make_type_ctor_desc_with_arity_3_p_0(
  MR_Integer HeadVar__1_4,
  MR_Word HeadVar__2_5,
  MR_Word * HeadVar__3_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "make_type_ctor_desc_with_arity/3");
    return;
  }
}

static void MR_CALL 
mercury__type_desc__make_type_ctor_desc_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word HeadVar__2_5,
  MR_Word * HeadVar__3_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "make_type_ctor_desc/3");
    return;
  }
}

static void MR_CALL 
mercury__type_desc__pseudo_type_desc_to_pseudo_type_info_2_p_0(
  MR_Word PseudoTypeDesc_3,
  MR_Word * PseudoTypeInfo_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_to_pseudo_type_info_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *PseudoTypeInfo_4 = (MR_Word) (PseudoTypeDesc_3);
  else
    {
      mercury__require__error_1_p_0((MR_String) "pseudo_type_desc_to_pseudo_type_info/2");
      return;
    }
}

static MR_bool MR_CALL 
mercury__type_desc__is_exist_pseudo_type_desc_2_p_0(
  MR_Word PseudoTypeDesc_1,
  MR_Integer * TypeVarNum_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__is_exist_pseudo_type_desc_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_1 ;
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
	*TypeVarNum_2  = TypeVarNum;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static MR_bool MR_CALL 
mercury__type_desc__is_univ_pseudo_type_desc_2_p_0(
  MR_Word PseudoTypeDesc_1,
  MR_Integer * TypeVarNum_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__is_univ_pseudo_type_desc_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_1 ;
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
	*TypeVarNum_2  = TypeVarNum;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__type_desc__type_info_list_to_type_desc_list_2_p_0(
  MR_Word TypeInfoList_3,
  MR_Word * TypeDescList_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__type_info_list_to_type_desc_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *TypeDescList_4 = (MR_Word) (TypeInfoList_3);
  else
    mercury__type_desc__map__ho2_3_p_in__list_0(TypeInfoList_3, TypeDescList_4);
}

static void MR_CALL 
mercury__type_desc__map__ho2_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_13;

{
#define MR_PROC_LABEL mercury__type_desc__map__ho2_3_p_in__list_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_8 = (MR_Word) (Var_6);
    else
      {
        mercury__require__error_1_p_0((MR_String) "type_info_to_type_desc/2");
        return;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
    mercury__type_desc__LCMC__pred__map__ho2__1_3_p_0(Var_7, AddrSCCcallarg_9_13);
  }
}

static void MR_CALL 
mercury__type_desc__LCMC__pred__map__ho2__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_13;
      MR_Word HeadVar__3_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

{
#define MR_PROC_LABEL mercury__type_desc__LCMC__pred__map__ho2__1_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_8 = (MR_Word) (Var_6);
      else
        {
          mercury__require__error_1_p_0((MR_String) "type_info_to_type_desc/2");
          return;
        }
      {
        HeadVar__3_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_15, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_15, 1) = NULL;
      }
      AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_15, (MR_Integer) 1)));
      *AddrOfHeadVar__3_14 = HeadVar__3_15;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_14 = AddrSCCcallarg_9_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__type_desc__type_info_to_type_desc_2_p_0(
  MR_Word TypeInfo_3,
  MR_Word * TypeDesc_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__type_info_to_type_desc_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *TypeDesc_4 = (MR_Word) (TypeInfo_3);
  else
    {
      mercury__require__error_1_p_0((MR_String) "type_info_to_type_desc/2");
      return;
    }
}

void MR_CALL 
mercury__type_desc__type_desc_to_type_info_2_p_0(
  MR_Word TypeDesc_3,
  MR_Word * TypeInfo_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__type_desc_to_type_info_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *TypeInfo_4 = (MR_Word) (TypeDesc_3);
  else
    {
      mercury__require__error_1_p_0((MR_String) "type_desc_to_type_info/2");
      return;
    }
}

MR_Word MR_CALL 
mercury__type_desc__det_make_type_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word ArgTypes_5)
{
  MR_bool succeeded;
  MR_Word Type_6;
  MR_Word NewType_7;

{
#define MR_PROC_LABEL mercury__type_desc__det_make_type_2_f_0

	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;
	MR_Word TypeDesc;
	MR_bool SUCCESS_INDICATOR;

	TypeCtorDesc = TypeCtor_4 ;
	ArgTypes = ArgTypes_5 ;
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
	NewType_7  = TypeDesc;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Type_6 = NewType_7;
  else
    mercury__require__error_2_p_0((MR_String) "function \140type_desc.det_make_type\'/2", (MR_String) "make_type/2 failed (wrong arity)");
  return Type_6;
}

void MR_CALL 
mercury__type_desc__make_type_2_f_1(
  MR_Word * TypeCtorDesc_1,
  MR_Word * ArgTypes_2,
  MR_Word TypeDesc_3)
{
{
#define MR_PROC_LABEL mercury__type_desc__make_type_2_f_1

	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;
	MR_Word TypeDesc;

	TypeDesc = TypeDesc_3 ;
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
	*TypeCtorDesc_1  = TypeCtorDesc;
	*ArgTypes_2  = ArgTypes;
}
}

MR_bool MR_CALL 
mercury__type_desc__make_type_2_f_0(
  MR_Word TypeCtorDesc_1,
  MR_Word ArgTypes_2,
  MR_Word * TypeDesc_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__make_type_2_f_0

	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;
	MR_Word TypeDesc;
	MR_bool SUCCESS_INDICATOR;

	TypeCtorDesc = TypeCtorDesc_1 ;
	ArgTypes = ArgTypes_2 ;
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
	*TypeDesc_3  = TypeDesc;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__type_desc__type_ctor_name_and_arity_4_p_0(
  MR_Word TypeCtorDesc_1,
  MR_String * TypeCtorModuleName_2,
  MR_String * TypeCtorName_3,
  MR_Integer * TypeCtorArity_4)
{
{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_1 ;
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	*TypeCtorModuleName_2  = TypeCtorModuleName;
	*TypeCtorName_3  = TypeCtorName;
	*TypeCtorArity_4  = TypeCtorArity;
}
}

MR_Integer MR_CALL 
mercury__type_desc__type_ctor_arity_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_Integer Arity_4;
  MR_String _ModuleName_5;
  MR_String _Name_6;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_arity_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_3 ;
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	_ModuleName_5  = TypeCtorModuleName;
	_Name_6  = TypeCtorName;
	Arity_4  = TypeCtorArity;
}
  return Arity_4;
}

MR_String MR_CALL 
mercury__type_desc__type_ctor_module_name_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_String ModuleName_4;
  MR_String _Name_5;
  MR_Integer _Arity_6;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_module_name_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_3 ;
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	ModuleName_4  = TypeCtorModuleName;
	_Name_5  = TypeCtorName;
	_Arity_6  = TypeCtorArity;
}
  return ModuleName_4;
}

MR_String MR_CALL 
mercury__type_desc__type_ctor_name_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_String Name_4;
  MR_String _ModuleName_5;
  MR_Integer _Arity_6;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_name_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_3 ;
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	_ModuleName_5  = TypeCtorModuleName;
	Name_4  = TypeCtorName;
	_Arity_6  = TypeCtorArity;
}
  return Name_4;
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_args_1_f_0(
  MR_Word PseudoType_3,
  MR_Word * ArgPseudoTypes_4)
{
  MR_bool succeeded;
  MR_Word _TypeCtor_5;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_args_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoType_3 ;
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
	_TypeCtor_5  = TypeCtorDesc;
	*ArgPseudoTypes_4  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Word MR_CALL 
mercury__type_desc__type_args_1_f_0(
  MR_Word Type_3)
{
  MR_Word ArgTypes_4;
  MR_Word _TypeCtor_5;

{
#define MR_PROC_LABEL mercury__type_desc__type_args_1_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Type_3 ;
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
	_TypeCtor_5  = TypeCtorDesc;
	ArgTypes_4  = ArgTypes;
}
  return ArgTypes_4;
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_ctor_1_f_0(
  MR_Word PseudoTypeInfo_1,
  MR_Word * TypeCtor_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_ctor_1_f_0

	MR_Word PseudoTypeInfo;
	MR_Word TypeCtor;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeInfo = PseudoTypeInfo_1 ;
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
	*TypeCtor_2  = TypeCtor;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Word MR_CALL 
mercury__type_desc__type_ctor_1_f_0(
  MR_Word TypeInfo_1)
{
  MR_Word TypeCtor_2;

{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_1_f_0

	MR_Word TypeInfo;
	MR_Word TypeCtor;

	TypeInfo = TypeInfo_1 ;
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
	TypeCtor_2  = TypeCtor;
}
  return TypeCtor_2;
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_ctor_and_args_3_p_0(
  MR_Word PseudoTypeDesc_1,
  MR_Word * TypeCtorDesc_2,
  MR_Word * ArgPseudoTypeInfos_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_ctor_and_args_3_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_1 ;
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
	*TypeCtorDesc_2  = TypeCtorDesc;
	*ArgPseudoTypeInfos_3  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__type_desc__type_ctor_and_args_3_p_0(
  MR_Word TypeDesc_1,
  MR_Word * TypeCtorDesc_2,
  MR_Word * ArgTypes_3)
{
{
#define MR_PROC_LABEL mercury__type_desc__type_ctor_and_args_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = TypeDesc_1 ;
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
	*TypeCtorDesc_2  = TypeCtorDesc;
	*ArgTypes_3  = ArgTypes;
}
}

static void MR_CALL 
mercury__type_desc__LCMC__pred__type_arg_names_lag__1_3_p_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5,
  MR_Word * AddrOfNames_15)
{
  while (MR_TRUE)
  {
    MR_String HeadName_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    HeadName_7 = mercury__type_desc__type_name_1_f_0(HeadType_4);
    if ((TailTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Names_6;

      {
        Names_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Names_6, 0) = ((MR_Box) (HeadName_7));
        MR_hl_field(1, Names_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AddrOfNames_15 = Names_6;
    }
    else
    {
      MR_Word HeadTailType_8 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, (MR_Integer) 0))));
      MR_Word TailTailTypes_9 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, (MR_Integer) 1))));
      MR_Word Var_12;
      MR_Word * AddrTailNames_14;
      MR_Word Names_16;
      MR_Word next_value_of_HeadType_4;
      MR_Word next_value_of_TailTypes_5;
      MR_Word * next_value_of_AddrOfNames_15;

      {
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, Var_12, 1) = NULL;
      }
      AddrTailNames_14 = (MR_Word *) (&(MR_hl_field(1, Var_12, (MR_Integer) 1)));
      {
        Names_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Names_16, 0) = ((MR_Box) (HeadName_7));
        MR_hl_field(1, Names_16, 1) = ((MR_Box) (Var_12));
      }
      *AddrOfNames_15 = Names_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadType_4 = HeadTailType_8;
      next_value_of_TailTypes_5 = TailTailTypes_9;
      next_value_of_AddrOfNames_15 = AddrTailNames_14;
      HeadType_4 = next_value_of_HeadType_4;
      TailTypes_5 = next_value_of_TailTypes_5;
      AddrOfNames_15 = next_value_of_AddrOfNames_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__type_desc__type_arg_names_lag_3_p_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5,
  MR_Word * Names_6)
{
  MR_String HeadName_7;

  HeadName_7 = mercury__type_desc__type_name_1_f_0(HeadType_4);
  if ((TailTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Names_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadName_7));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Word HeadTailType_8 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, (MR_Integer) 0))));
    MR_Word TailTailTypes_9 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word * AddrTailNames_14;

    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) ((MR_String) ", "));
      MR_hl_field(1, Var_12, 1) = NULL;
    }
    AddrTailNames_14 = (MR_Word *) (&(MR_hl_field(1, Var_12, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Names_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadName_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_12));
    }
    mercury__type_desc__LCMC__pred__type_arg_names_lag__1_3_p_0(HeadTailType_8, TailTailTypes_9, AddrTailNames_14);
  }
}

MR_String MR_CALL 
mercury__type_desc__type_name_1_f_0(
  MR_Word Type_3)
{
  MR_bool succeeded;
  MR_String TypeName_4;
  MR_Word TypeCtor_5;
  MR_Word ArgTypes_6;
  MR_String ModuleName_7;
  MR_String Name_8;
  MR_Integer Arity_9;
  MR_String UnqualifiedTypeName_10;

{
#define MR_PROC_LABEL mercury__type_desc__type_name_1_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Type_3 ;
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
	TypeCtor_5  = TypeCtorDesc;
	ArgTypes_6  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__type_desc__type_name_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_5 ;
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	ModuleName_7  = TypeCtorModuleName;
	Name_8  = TypeCtorName;
	Arity_9  = TypeCtorArity;
}
  succeeded = (Arity_9 == (MR_Integer) 0);
  if (succeeded)
    UnqualifiedTypeName_10 = Name_8;
  else
  {
    succeeded = (strcmp(ModuleName_7, (MR_String) "builtin") == 0);
    if (succeeded)
      succeeded = (strcmp(Name_8, (MR_String) "{}") == 0);
    if (succeeded)
    {
      MR_Word ArgTypeNames_11;
      MR_Word TupleArgTypeNames_12;
      MR_Word Var_20;
      MR_Word Var_56;

      if ((ArgTypes_6 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgTypeNames_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Type_53 = ((MR_Word) ((MR_hl_field(1, ArgTypes_6, (MR_Integer) 0))));
        MR_Word Types_54 = ((MR_Word) ((MR_hl_field(1, ArgTypes_6, (MR_Integer) 1))));

        mercury__type_desc__type_arg_names_lag_3_p_0(Type_53, Types_54, &ArgTypeNames_11);
      }
      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) ((MR_String) "{"));
        MR_hl_field(1, Var_20, 1) = ((MR_Box) (ArgTypeNames_11));
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, (MR_Word) (MR_mkword(1, &mercury__type_desc_scalar_common_1[1])), &TupleArgTypeNames_12);
      Var_56 = mercury__type_desc__map__ho1_2_f_in__list_0(TupleArgTypeNames_12);
      mercury__string__unsafe_append_string_pieces_2_p_0(Var_56, &UnqualifiedTypeName_10);
    }
    else
    {
      MR_Word TypeNameStrs_16;
      MR_Word Var_63;

      succeeded = (strcmp(ModuleName_7, (MR_String) "builtin") == 0);
      if (succeeded)
        succeeded = (strcmp(Name_8, (MR_String) "func") == 0);
      if (succeeded)
      {
        MR_Word NonReturnArgTypes_13;
        MR_Word ReturnArgType_14;
        MR_String ReturnArgTypeName_15;
        MR_Box conv0_ReturnArgType_14;

        mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), ArgTypes_6, &NonReturnArgTypes_13, &conv0_ReturnArgType_14);
        ReturnArgType_14 = ((MR_Word) (conv0_ReturnArgType_14));
        ReturnArgTypeName_15 = mercury__type_desc__type_name_1_f_0(ReturnArgType_14);
        if ((NonReturnArgTypes_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_26;

          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (ReturnArgTypeName_15));
            MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &mercury__type_desc_scalar_common_1[2])));
          }
          {
            TypeNameStrs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TypeNameStrs_16, 0) = ((MR_Box) ((MR_String) "((func) = "));
            MR_hl_field(1, TypeNameStrs_16, 1) = ((MR_Box) (Var_26));
          }
        }
        else
        {
          MR_Word HeadArgType_17 = ((MR_Word) ((MR_hl_field(1, NonReturnArgTypes_13, (MR_Integer) 0))));
          MR_Word TailArgTypes_18 = ((MR_Word) ((MR_hl_field(1, NonReturnArgTypes_13, (MR_Integer) 1))));
          MR_Word NonReturnArgTypeNames_19;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_33;
          MR_Word Var_35;

          mercury__type_desc__type_arg_names_lag_3_p_0(HeadArgType_17, TailArgTypes_18, &NonReturnArgTypeNames_19);
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) ((MR_String) "("));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (NonReturnArgTypeNames_19));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (Name_8));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
          }
          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (ReturnArgTypeName_15));
            MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_String) ") = "));
            MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
          }
          mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_33, &TypeNameStrs_16);
        }
      }
      else
      {
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word ArgTypeNames_48;

        if ((ArgTypes_6 == (MR_Word) ((MR_Unsigned) 0U)))
          ArgTypeNames_48 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Type_60 = ((MR_Word) ((MR_hl_field(1, ArgTypes_6, (MR_Integer) 0))));
          MR_Word Types_61 = ((MR_Word) ((MR_hl_field(1, ArgTypes_6, (MR_Integer) 1))));

          mercury__type_desc__type_arg_names_lag_3_p_0(Type_60, Types_61, &ArgTypeNames_48);
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (ArgTypeNames_48));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Name_8));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
        }
        mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, (MR_Word) (MR_mkword(1, &mercury__type_desc_scalar_common_1[2])), &TypeNameStrs_16);
      }
      Var_63 = mercury__type_desc__map__ho1_2_f_in__list_0(TypeNameStrs_16);
      mercury__string__unsafe_append_string_pieces_2_p_0(Var_63, &UnqualifiedTypeName_10);
    }
  }
  succeeded = (strcmp(ModuleName_7, (MR_String) "builtin") == 0);
  if (succeeded)
    TypeName_4 = UnqualifiedTypeName_10;
  else
  {
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_67;

    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (UnqualifiedTypeName_10));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) ((MR_String) "."));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
    }
    Var_67 = mercury__type_desc__map__ho1_2_f_in__list_0(Var_43);
    mercury__string__unsafe_append_string_pieces_2_p_0(Var_67, &TypeName_4);
  }
  return TypeName_4;
}

static MR_Word MR_CALL 
mercury__type_desc__map__ho1_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Integer Var_13;
    MR_Word * AddrSCCcallarg_9_14;

{
#define MR_PROC_LABEL mercury__type_desc__map__ho1_2_f_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__type_desc__LCMC__func__map__ho1__1_3_p_0(Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__type_desc__LCMC__func__map__ho1__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Integer Var_13;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

{
#define MR_PROC_LABEL mercury__type_desc__LCMC__func__map__ho1__1_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
        MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, Var_8, 2) = ((MR_Box) (Var_13));
      }
      {
        HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_16, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_16, 1) = NULL;
      }
      AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, (MR_Integer) 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_15 = AddrSCCcallarg_9_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__type_desc__same_type_2_p_0(
  MR_Word TypeInfo_for_T_5)
{
}

void MR_CALL 
mercury__type_desc__has_type_2_p_0(
  MR_Word * TypeInfo_for_T_3,
  MR_Word HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__type_desc__has_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = HeadVar__2_2 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_3  = TypeInfo_for_T;
}
}

MR_Word MR_CALL 
mercury__type_desc__type_of_1_f_0(
  MR_Word TypeInfo_for_T_3)
{
  MR_Word HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__type_desc__type_of_1_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_3 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = TypeInfo;
}
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(
  MR_Word PseudoTypeDesc_3)
{
  MR_bool succeeded;
  MR_Word TypeDesc_4;
  MR_Word ArgPseudos_8;
  MR_Word _TypeCtor_7;

{
#define MR_PROC_LABEL mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_3 ;
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
	_TypeCtor_7  = TypeCtorDesc;
	ArgPseudos_8  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    succeeded = mercury__type_desc__all_true__ho3_2_p_in__list_0(ArgPseudos_8);
  if (succeeded)
    TypeDesc_4 = (MR_Word) (PseudoTypeDesc_3);
  else
    mercury__require__error_2_p_0((MR_String) "function \140type_desc.det_ground_pseudo_type_desc_to_type_desc\'/1", (MR_String) "not ground");
  return TypeDesc_4;
}

MR_bool MR_CALL 
mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0(
  MR_Word PseudoTypeDesc_3,
  MR_Word * TypeDesc_4)
{
  MR_bool succeeded;
  MR_Word ArgPseudos_6;
  MR_Word _TypeCtor_5;

{
#define MR_PROC_LABEL mercury__type_desc__ground_pseudo_type_desc_to_type_desc_2_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_3 ;
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
	_TypeCtor_5  = TypeCtorDesc;
	ArgPseudos_6  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    succeeded = mercury__type_desc__all_true__ho3_2_p_in__list_0(ArgPseudos_6);
    if (succeeded)
    {
      *TypeDesc_4 = (MR_Word) (PseudoTypeDesc_3);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__type_desc__ground_pseudo_type_desc_to_type_desc_1_f_0(
  MR_Word PseudoTypeDesc_3,
  MR_Word * TypeDesc_4)
{
  MR_bool succeeded;
  MR_Word ArgPseudos_6;
  MR_Word _TypeCtor_5;

{
#define MR_PROC_LABEL mercury__type_desc__ground_pseudo_type_desc_to_type_desc_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_3 ;
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
	_TypeCtor_5  = TypeCtorDesc;
	ArgPseudos_6  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    succeeded = mercury__type_desc__all_true__ho3_2_p_in__list_0(ArgPseudos_6);
    if (succeeded)
    {
      *TypeDesc_4 = (MR_Word) (PseudoTypeDesc_3);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__type_desc__type_desc_to_pseudo_type_desc_1_f_0(
  MR_Word TypeDesc_1)
{
  MR_Word PseudoTypeDesc_2;

{
#define MR_PROC_LABEL mercury__type_desc__type_desc_to_pseudo_type_desc_1_f_0

	MR_Word TypeDesc;
	MR_Word PseudoTypeDesc;

	TypeDesc = TypeDesc_1 ;
		{

    PseudoTypeDesc = TypeDesc;


		;}
#undef MR_PROC_LABEL
	PseudoTypeDesc_2  = PseudoTypeDesc;
}
  return PseudoTypeDesc_2;
}

MR_Word MR_CALL 
mercury__type_desc__pseudo_type_desc_to_rep_1_f_0(
  MR_Word PseudoTypeDesc_3)
{
  MR_bool succeeded;
  MR_Word PseudoTypeRep_4;
  MR_Word TypeCtor_5;
  MR_Word ArgPseudos_6;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_to_rep_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_3 ;
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
	TypeCtor_5  = TypeCtorDesc;
	ArgPseudos_6  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      PseudoTypeRep_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PseudoTypeRep_4, 0) = ((MR_Box) (TypeCtor_5));
      MR_hl_field(0, PseudoTypeRep_4, 1) = ((MR_Box) (ArgPseudos_6));
    }
  else
  {
    MR_Integer UnivNum_7;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_to_rep_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_3 ;
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
	UnivNum_7  = TypeVarNum;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      {
        PseudoTypeRep_4 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, PseudoTypeRep_4, 0) = ((MR_Box) (UnivNum_7));
      }
    else
    {
      MR_Integer UnivNum_10;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_to_rep_1_f_0

	MR_Word PseudoTypeDesc;
	MR_Integer TypeVarNum;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_3 ;
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
	UnivNum_10  = TypeVarNum;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        {
          PseudoTypeRep_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PseudoTypeRep_4, 0) = ((MR_Box) (UnivNum_10));
        }
      else
        mercury__require__error_2_p_0((MR_String) "function \140type_desc.pseudo_type_desc_to_rep\'/1", (MR_String) "internal error");
    }
  }
  return PseudoTypeRep_4;
}

MR_bool MR_CALL 
mercury__type_desc__pseudo_type_desc_is_ground_1_p_0(
  MR_Word PseudoTypeDesc_2)
{
  MR_bool succeeded;
  MR_Word ArgPseudos_4;
  MR_Word _TypeCtor_3;

{
#define MR_PROC_LABEL mercury__type_desc__pseudo_type_desc_is_ground_1_p_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = PseudoTypeDesc_2 ;
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
	_TypeCtor_3  = TypeCtorDesc;
	ArgPseudos_4  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    succeeded = mercury__type_desc__all_true__ho3_2_p_in__list_0(ArgPseudos_4);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__type_desc__all_true__ho3_2_p_in__list_0(
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPseudos_9;
      MR_Word _TypeCtor_8;
      MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__type_desc__all_true__ho3_2_p_in__list_0

	MR_Word PseudoTypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgPseudoTypeInfos;
	MR_bool SUCCESS_INDICATOR;

	PseudoTypeDesc = Var_5 ;
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
	_TypeCtor_8  = TypeCtorDesc;
	ArgPseudos_9  = ArgPseudoTypeInfos;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        succeeded = mercury__type_desc__all_true__ho3_2_p_in__list_0(ArgPseudos_9);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_6;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__type_desc____Unify____pseudo_type_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__type_desc____Unify____pseudo_type_rep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__type_desc____Compare____pseudo_type_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__type_desc____Compare____pseudo_type_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module type_desc.
