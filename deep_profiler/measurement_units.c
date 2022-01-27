/*
** Automatically generated from `measurement_units.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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


/* :- module measurement_units. */
/* :- implementation. */

/*
INIT mercury__measurement_units__init
ENDINIT
*/

#include "measurement_units.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_PseudoTypeInfo measurement_units__measurement_units__field_types_memory_0_0[2];

static const MR_ConstString measurement_units__measurement_units__field_names_memory_0_0[2];

static const MR_DuFunctorDesc measurement_units__measurement_units__du_functor_desc_memory_0_0;

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_stag_ordered_memory_0_0[1];

static const MR_DuPtagLayout measurement_units__measurement_units__du_ptag_ordered_memory_0[1];

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_name_ordered_memory_0[1];

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_0[1];

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_0;

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_1;

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_value_ordered_memory_units_0[2];

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_memory_units_0[2];

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_units_0[2];

static const MR_Integer measurement_units__measurement_units__functor_number_map_percent_0[1];

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_percent_0;

static const MR_Integer measurement_units__measurement_units__functor_number_map_time_0[1];

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_time_0;

static MR_bool MR_CALL 
measurement_units____Unify____memory_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____memory_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____memory_units_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____percent_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____percent_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____probability_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____probability_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units____Unify____time_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2);

static void MR_CALL 
measurement_units____Compare____time_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3);

static MR_bool MR_CALL 
measurement_units__IntroducedFrom__pred__compare_memory__200__1_2_p_0(
  MR_Integer measurement_units__WordSizeA_8,
  MR_Integer measurement_units__WordSizeB_10);

static MR_Word MR_CALL 
measurement_units__add_commas_1_f_0(
  MR_Word measurement_units__HeadVar__1_1);

static MR_bool MR_CALL 
measurement_units__compare_memory_3_p_0_1(
  MR_Box measurement_units__closure_arg);


static /* final */ const MR_Box measurement_units_scalar_common_1[1][5];

static /* final */ const MR_Box measurement_units_scalar_common_2[1][1];




static /* final */ const MR_Box measurement_units_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box measurement_units_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo measurement_units__measurement_units__field_types_memory_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurement_units__measurement_units__field_names_memory_0_0[2] = {
  (MR_String) "words",
  (MR_String) "word_size"
};

static const MR_DuFunctorDesc measurement_units__measurement_units__du_functor_desc_memory_0_0 = {
  (MR_String) "memory",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurement_units__measurement_units__field_types_memory_0_0,
  measurement_units__measurement_units__field_names_memory_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_stag_ordered_memory_0_0[1] = {
  &measurement_units__measurement_units__du_functor_desc_memory_0_0
};

static const MR_DuPtagLayout measurement_units__measurement_units__du_ptag_ordered_memory_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurement_units__measurement_units__du_stag_ordered_memory_0_0
  }
};

static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_name_ordered_memory_0[1] = {
  &measurement_units__measurement_units__du_functor_desc_memory_0_0
};

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_memory_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurement_units____Unify____memory_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____memory_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "memory",
  {     measurement_units__measurement_units__du_name_ordered_memory_0 },
  {     measurement_units__measurement_units__du_ptag_ordered_memory_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_memory_0
};

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_0 = {
  (MR_String) "units_words",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_1 = {
  (MR_String) "units_bytes",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_value_ordered_memory_units_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_0,
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_1
};

static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_memory_units_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_1,
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_0
};

static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_units_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_memory_units_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (measurement_units____Unify____memory_units_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____memory_units_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "memory_units",
  {     measurement_units__measurement_units__enum_name_ordered_memory_units_0 },
  {     measurement_units__measurement_units__enum_value_ordered_memory_units_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_memory_units_0
};

static const MR_Integer measurement_units__measurement_units__functor_number_map_percent_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_percent_0 = {
  (MR_String) "percent_float",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_percent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurement_units____Unify____percent_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____percent_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "percent",
  {     &measurement_units__measurement_units__notag_functor_desc_percent_0 },
  {     &measurement_units__measurement_units__notag_functor_desc_percent_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_percent_0
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_probability_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (measurement_units____Unify____probability_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____probability_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "probability",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer measurement_units__measurement_units__functor_number_map_time_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_time_0 = {
  (MR_String) "time_sec",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_time_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurement_units____Unify____time_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____time_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "time",
  {     &measurement_units__measurement_units__notag_functor_desc_time_0 },
  {     &measurement_units__measurement_units__notag_functor_desc_time_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_time_0
};

static MR_bool MR_CALL 
measurement_units____Unify____memory_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2)
{
  {
    MR_bool measurement_units__succeeded;

    {
      measurement_units__succeeded = measurement_units____Unify____memory_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
    return measurement_units__succeeded;
  }
}

static void MR_CALL 
measurement_units____Compare____memory_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3)
{
  {
    MR_Word measurement_units__conv0_HeadVar__1_1;

    {
      measurement_units____Compare____memory_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2)
{
  {
    MR_bool measurement_units__succeeded;

    {
      measurement_units__succeeded = measurement_units____Unify____memory_units_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
    return measurement_units__succeeded;
  }
}

static void MR_CALL 
measurement_units____Compare____memory_units_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3)
{
  {
    MR_Word measurement_units__conv0_HeadVar__1_1;

    {
      measurement_units____Compare____memory_units_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurement_units____Unify____percent_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2)
{
  {
    MR_bool measurement_units__succeeded;

    {
      measurement_units__succeeded = measurement_units____Unify____percent_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
    return measurement_units__succeeded;
  }
}

static void MR_CALL 
measurement_units____Compare____percent_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3)
{
  {
    MR_Word measurement_units__conv0_HeadVar__1_1;

    {
      measurement_units____Compare____percent_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurement_units____Unify____probability_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2)
{
  {
    MR_bool measurement_units__succeeded;

    {
      measurement_units__succeeded = measurement_units____Unify____probability_0_0(MR_unbox_float(measurement_units__wrapper_arg_1), MR_unbox_float(measurement_units__wrapper_arg_2));
    }
    return measurement_units__succeeded;
  }
}

static void MR_CALL 
measurement_units____Compare____probability_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3)
{
  {
    MR_Word measurement_units__conv0_HeadVar__1_1;

    {
      measurement_units____Compare____probability_0_0(&measurement_units__conv0_HeadVar__1_1, MR_unbox_float(measurement_units__wrapper_arg_2), MR_unbox_float(measurement_units__wrapper_arg_3));
    }
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurement_units____Unify____time_0_0_10001(
  MR_Box measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2)
{
  {
    MR_bool measurement_units__succeeded;

    {
      measurement_units__succeeded = measurement_units____Unify____time_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
    return measurement_units__succeeded;
  }
}

static void MR_CALL 
measurement_units____Compare____time_0_0_10001(
  MR_Box * measurement_units__wrapper_arg_1,
  MR_Box measurement_units__wrapper_arg_2,
  MR_Box measurement_units__wrapper_arg_3)
{
  {
    MR_Word measurement_units__conv0_HeadVar__1_1;

    {
      measurement_units____Compare____time_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurement_units__IntroducedFrom__pred__compare_memory__200__1_2_p_0(
  MR_Integer measurement_units__WordSizeA_8,
  MR_Integer measurement_units__WordSizeB_10)
{
  {
    MR_bool measurement_units__succeeded = (measurement_units__WordSizeA_8 == measurement_units__WordSizeB_10);

    return measurement_units__succeeded;
  }
}

void MR_CALL 
measurement_units____Compare____time_0_0(
  MR_Word * measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2,
  MR_Word measurement_units__HeadVar__3_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Integer measurement_units__CastX_6 = (MR_Integer) measurement_units__HeadVar__2_2;
    MR_Integer measurement_units__CastY_7 = (MR_Integer) measurement_units__HeadVar__3_3;

    measurement_units__succeeded = (measurement_units__CastX_6 == measurement_units__CastY_7);
    if (measurement_units__succeeded)
      *measurement_units__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);
        MR_Float measurement_units__V_5_5 = MR_unbox_float((MR_Box) measurement_units__HeadVar__3_3);

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__HeadVar__1_1, measurement_units__V_4_4, measurement_units__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
measurement_units____Unify____time_0_0(
  MR_Word measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Integer measurement_units__CastX_5 = (MR_Integer) measurement_units__HeadVar__1_1;
    MR_Integer measurement_units__CastY_6 = (MR_Integer) measurement_units__HeadVar__2_2;

    measurement_units__succeeded = (measurement_units__CastX_5 == measurement_units__CastY_6);
    if (measurement_units__succeeded)
      measurement_units__succeeded = MR_TRUE;
    else
      {
        MR_Float measurement_units__V_3_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);

        measurement_units__succeeded = (measurement_units__V_3_3 == measurement_units__V_4_4);
      }
    return measurement_units__succeeded;
  }
}

void MR_CALL 
measurement_units____Compare____probability_0_0(
  MR_Word * measurement_units__HeadVar__1_1,
  MR_Float measurement_units__HeadVar__2_2,
  MR_Float measurement_units__HeadVar__3_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__Cast_HeadVar1_4 = measurement_units__HeadVar__2_2;
    MR_Float measurement_units__Cast_HeadVar2_5 = measurement_units__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__HeadVar__1_1, measurement_units__Cast_HeadVar1_4, measurement_units__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
measurement_units____Unify____probability_0_0(
  MR_Float measurement_units__HeadVar__1_1,
  MR_Float measurement_units__HeadVar__2_2)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__Cast_HeadVar1_3 = measurement_units__HeadVar__1_1;
    MR_Float measurement_units__Cast_HeadVar2_4 = measurement_units__HeadVar__2_2;

    measurement_units__succeeded = (measurement_units__Cast_HeadVar1_3 == measurement_units__Cast_HeadVar2_4);
    return measurement_units__succeeded;
  }
}

void MR_CALL 
measurement_units____Compare____percent_0_0(
  MR_Word * measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2,
  MR_Word measurement_units__HeadVar__3_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Integer measurement_units__CastX_6 = (MR_Integer) measurement_units__HeadVar__2_2;
    MR_Integer measurement_units__CastY_7 = (MR_Integer) measurement_units__HeadVar__3_3;

    measurement_units__succeeded = (measurement_units__CastX_6 == measurement_units__CastY_7);
    if (measurement_units__succeeded)
      *measurement_units__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);
        MR_Float measurement_units__V_5_5 = MR_unbox_float((MR_Box) measurement_units__HeadVar__3_3);

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__HeadVar__1_1, measurement_units__V_4_4, measurement_units__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
measurement_units____Unify____percent_0_0(
  MR_Word measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Integer measurement_units__CastX_5 = (MR_Integer) measurement_units__HeadVar__1_1;
    MR_Integer measurement_units__CastY_6 = (MR_Integer) measurement_units__HeadVar__2_2;

    measurement_units__succeeded = (measurement_units__CastX_5 == measurement_units__CastY_6);
    if (measurement_units__succeeded)
      measurement_units__succeeded = MR_TRUE;
    else
      {
        MR_Float measurement_units__V_3_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);

        measurement_units__succeeded = (measurement_units__V_3_3 == measurement_units__V_4_4);
      }
    return measurement_units__succeeded;
  }
}

void MR_CALL 
measurement_units____Compare____memory_units_0_0(
  MR_Word * measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2,
  MR_Word measurement_units__HeadVar__3_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Integer measurement_units__Cast_HeadVar1_4 = (MR_Integer) measurement_units__HeadVar__2_2;
    MR_Integer measurement_units__Cast_HeadVar2_5 = (MR_Integer) measurement_units__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(measurement_units__HeadVar__1_1, measurement_units__Cast_HeadVar1_4, measurement_units__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0(
  MR_Word measurement_units__HeadVar__2_1,
  MR_Word measurement_units__HeadVar__2_2)
{
  {
    MR_bool measurement_units__succeeded = (measurement_units__HeadVar__2_1 == measurement_units__HeadVar__2_2);

    return measurement_units__succeeded;
  }
}

void MR_CALL 
measurement_units____Compare____memory_0_0(
  MR_Word * measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2,
  MR_Word measurement_units__HeadVar__3_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Integer measurement_units__CastX_9 = (MR_Integer) measurement_units__HeadVar__2_2;
    MR_Integer measurement_units__CastY_10 = (MR_Integer) measurement_units__HeadVar__3_3;

    measurement_units__succeeded = (measurement_units__CastX_9 == measurement_units__CastY_10);
    if (measurement_units__succeeded)
      *measurement_units__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer measurement_units__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float measurement_units__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer measurement_units__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word measurement_units__V_8_8;

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(&measurement_units__V_8_8, measurement_units__V_4_4, measurement_units__V_6_6);
        }
        measurement_units__succeeded = (measurement_units__V_8_8 == (MR_Integer) 0);
        measurement_units__succeeded = !(measurement_units__succeeded);
        if (measurement_units__succeeded)
          *measurement_units__HeadVar__1_1 = measurement_units__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(measurement_units__HeadVar__1_1, measurement_units__V_5_5, measurement_units__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
measurement_units____Unify____memory_0_0(
  MR_Word measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Integer measurement_units__CastX_7 = (MR_Integer) measurement_units__HeadVar__1_1;
    MR_Integer measurement_units__CastY_8 = (MR_Integer) measurement_units__HeadVar__2_2;

    measurement_units__succeeded = (measurement_units__CastX_7 == measurement_units__CastY_8);
    if (measurement_units__succeeded)
      measurement_units__succeeded = MR_TRUE;
    else
      {
        MR_Float measurement_units__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer measurement_units__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurement_units__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer measurement_units__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 1)));

        measurement_units__succeeded = (measurement_units__V_3_3 == measurement_units__V_5_5);
        if (measurement_units__succeeded)
          measurement_units__succeeded = (measurement_units__V_4_4 == measurement_units__V_6_6);
      }
    return measurement_units__succeeded;
  }
}

static MR_Word MR_CALL 
measurement_units__add_commas_1_f_0(
  MR_Word measurement_units__HeadVar__1_1)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Word measurement_units__HeadVar__2_2;

    if ((measurement_units__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word measurement_units__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__HeadVar__1_1, (MR_Integer) 1)));
        MR_Char measurement_units__V_36_36 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__HeadVar__1_1, (MR_Integer) 0)));

        if ((measurement_units__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
              MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word measurement_units__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_35_35, (MR_Integer) 1)));
            MR_Char measurement_units__V_38_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_35_35, (MR_Integer) 0)));

            if ((measurement_units__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word measurement_units__V_10_10;

                {
                  measurement_units__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), measurement_units__V_10_10, 0) = ((MR_Box) (MR_Word) (measurement_units__V_38_38));
                  MR_hl_field(MR_mktag(1), measurement_units__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
                  MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (measurement_units__V_10_10));
                }
              }
            else
              {
                MR_Word measurement_units__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_37_37, (MR_Integer) 1)));
                MR_Char measurement_units__V_40_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_37_37, (MR_Integer) 0)));

                if ((measurement_units__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word measurement_units__V_18_18;
                    MR_Word measurement_units__V_19_19;

                    {
                      measurement_units__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurement_units__V_19_19, 0) = ((MR_Box) (MR_Word) (measurement_units__V_40_40));
                      MR_hl_field(MR_mktag(1), measurement_units__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      measurement_units__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurement_units__V_18_18, 0) = ((MR_Box) (MR_Word) (measurement_units__V_38_38));
                      MR_hl_field(MR_mktag(1), measurement_units__V_18_18, 1) = ((MR_Box) (measurement_units__V_19_19));
                    }
                    {
                      measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (measurement_units__V_18_18));
                    }
                  }
                else
                  {
                    MR_Word measurement_units__V_29_29;
                    MR_Word measurement_units__V_30_30;
                    MR_Word measurement_units__V_31_31;
                    MR_Word measurement_units__V_33_33;

                    {
                      measurement_units__V_33_33 = measurement_units__add_commas_1_f_0(measurement_units__V_39_39);
                    }
                    {
                      measurement_units__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurement_units__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Char) 44));
                      MR_hl_field(MR_mktag(1), measurement_units__V_31_31, 1) = ((MR_Box) (measurement_units__V_33_33));
                    }
                    {
                      measurement_units__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurement_units__V_30_30, 0) = ((MR_Box) (MR_Word) (measurement_units__V_40_40));
                      MR_hl_field(MR_mktag(1), measurement_units__V_30_30, 1) = ((MR_Box) (measurement_units__V_31_31));
                    }
                    {
                      measurement_units__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurement_units__V_29_29, 0) = ((MR_Box) (MR_Word) (measurement_units__V_38_38));
                      MR_hl_field(MR_mktag(1), measurement_units__V_29_29, 1) = ((MR_Box) (measurement_units__V_30_30));
                    }
                    {
                      measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (measurement_units__V_29_29));
                    }
                  }
              }
          }
      }
    return measurement_units__HeadVar__2_2;
  }
}

MR_String MR_CALL 
measurement_units__four_decimal_fraction_1_f_0(
  MR_Float measurement_units__Measure_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__HeadVar__2_2;

    {
      measurement_units__HeadVar__2_2 = measurement_units__decimal_fraction_2_f_0((MR_String) "%.4f", measurement_units__Measure_3);
    }
    return measurement_units__HeadVar__2_2;
  }
}

MR_String MR_CALL 
measurement_units__two_decimal_fraction_1_f_0(
  MR_Float measurement_units__Measure_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__HeadVar__2_2;

    {
      measurement_units__HeadVar__2_2 = measurement_units__decimal_fraction_2_f_0((MR_String) "%.2f", measurement_units__Measure_3);
    }
    return measurement_units__HeadVar__2_2;
  }
}

MR_String MR_CALL 
measurement_units__one_decimal_fraction_1_f_0(
  MR_Float measurement_units__Measure_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__HeadVar__2_2;

    {
      measurement_units__HeadVar__2_2 = measurement_units__decimal_fraction_2_f_0((MR_String) "%.1f", measurement_units__Measure_3);
    }
    return measurement_units__HeadVar__2_2;
  }
}

MR_String MR_CALL 
measurement_units__decimal_fraction_2_f_0(
  MR_String measurement_units__Format_4,
  MR_Float measurement_units__Measure_5)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__Representation_6;
    MR_String measurement_units__Str0_7;
    MR_Word measurement_units__SubStrings_8;
    MR_Word measurement_units__V_12_12;
    MR_Word measurement_units__V_13_13;
    MR_String measurement_units__WholeString0_9;
    MR_String measurement_units__FractionString_10;
    MR_Word measurement_units__V_16_16;
    MR_Word measurement_units__V_17_17;

    {
      measurement_units__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurement_units__V_13_13, 0) = MR_box_float(measurement_units__Measure_5);
    }
    {
      measurement_units__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), measurement_units__V_12_12, 0) = ((MR_Box) (measurement_units__V_13_13));
      MR_hl_field(MR_mktag(1), measurement_units__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__string__format_3_p_0(measurement_units__Format_4, measurement_units__V_12_12, &measurement_units__Str0_7);
    }
    {
      measurement_units__SubStrings_8 = mercury__string__split_at_char_2_f_0((MR_Char) 46, measurement_units__Str0_7);
    }
    measurement_units__succeeded = ((MR_tag((MR_Word) measurement_units__SubStrings_8)) == (MR_mktag((MR_Integer) 1)));
    if (measurement_units__succeeded)
      {
        measurement_units__WholeString0_9 = ((MR_String) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 0)));
        measurement_units__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 1)));
        measurement_units__succeeded = ((MR_tag((MR_Word) measurement_units__V_16_16)) == (MR_mktag((MR_Integer) 1)));
        if (measurement_units__succeeded)
          {
            measurement_units__FractionString_10 = ((MR_String) (MR_hl_field(MR_mktag(1), measurement_units__V_16_16, (MR_Integer) 0)));
            measurement_units__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_16_16, (MR_Integer) 1)));
            measurement_units__succeeded = (measurement_units__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (measurement_units__succeeded)
      {
        MR_Word measurement_units__TypeCtorInfo_9_31;
        MR_String measurement_units__WholeString_11;
        MR_String measurement_units__V_18_18;
        MR_Word measurement_units__Chars0_27;
        MR_Word measurement_units__RevChars0_28;
        MR_Word measurement_units__V_29_29;
        MR_Word measurement_units__V_30_30;

        {
          mercury__string__to_char_list_2_p_0(measurement_units__WholeString0_9, &measurement_units__Chars0_27);
        }
        measurement_units__TypeCtorInfo_9_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        {
          mercury__list__reverse_2_p_0(measurement_units__TypeCtorInfo_9_31, measurement_units__Chars0_27, &measurement_units__RevChars0_28);
        }
        {
          measurement_units__V_30_30 = measurement_units__add_commas_1_f_0(measurement_units__RevChars0_28);
        }
        {
          measurement_units__V_29_29 = mercury__list__reverse_1_f_0(measurement_units__TypeCtorInfo_9_31, measurement_units__V_30_30);
        }
        {
          mercury__string__from_char_list_2_p_0(measurement_units__V_29_29, &measurement_units__WholeString_11);
        }
        {
          measurement_units__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", measurement_units__FractionString_10);
        }
        {
          measurement_units__Representation_6 = mercury__string__f_43_43_2_f_0(measurement_units__WholeString_11, measurement_units__V_18_18);
        }
      }
    else
      {
        MR_String measurement_units__WholeString_24;
        MR_Word measurement_units__V_20_20;

        measurement_units__succeeded = ((MR_tag((MR_Word) measurement_units__SubStrings_8)) == (MR_mktag((MR_Integer) 1)));
        if (measurement_units__succeeded)
          {
            measurement_units__WholeString_24 = ((MR_String) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 0)));
            measurement_units__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 1)));
            measurement_units__succeeded = (measurement_units__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (measurement_units__succeeded)
          {
            MR_Word measurement_units__TypeCtorInfo_9_38;
            MR_Word measurement_units__Chars0_34;
            MR_Word measurement_units__RevChars0_35;
            MR_Word measurement_units__V_36_36;
            MR_Word measurement_units__V_37_37;

            {
              mercury__string__to_char_list_2_p_0(measurement_units__WholeString_24, &measurement_units__Chars0_34);
            }
            measurement_units__TypeCtorInfo_9_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
            {
              mercury__list__reverse_2_p_0(measurement_units__TypeCtorInfo_9_38, measurement_units__Chars0_34, &measurement_units__RevChars0_35);
            }
            {
              measurement_units__V_37_37 = measurement_units__add_commas_1_f_0(measurement_units__RevChars0_35);
            }
            {
              measurement_units__V_36_36 = mercury__list__reverse_1_f_0(measurement_units__TypeCtorInfo_9_38, measurement_units__V_37_37);
            }
            {
              mercury__string__from_char_list_2_p_0(measurement_units__V_36_36, &measurement_units__Representation_6);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "measurement_units", (MR_String) "function \140measurement_units.decimal_fraction\'/2", (MR_String) "didn\'t split on decimal point properly");
            }
          }
      }
    return measurement_units__Representation_6;
  }
}

MR_String MR_CALL 
measurement_units__commas_1_f_0(
  MR_Integer measurement_units__Num_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__Str_4;
    MR_Word measurement_units__TypeCtorInfo_9_12;
    MR_String measurement_units__Str0_5;
    MR_Word measurement_units__Chars0_8;
    MR_Word measurement_units__RevChars0_9;
    MR_Word measurement_units__V_10_10;
    MR_Word measurement_units__V_11_11;

    {
      mercury__string__int_to_string_2_p_0(measurement_units__Num_3, &measurement_units__Str0_5);
    }
    {
      mercury__string__to_char_list_2_p_0(measurement_units__Str0_5, &measurement_units__Chars0_8);
    }
    measurement_units__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    {
      mercury__list__reverse_2_p_0(measurement_units__TypeCtorInfo_9_12, measurement_units__Chars0_8, &measurement_units__RevChars0_9);
    }
    {
      measurement_units__V_11_11 = measurement_units__add_commas_1_f_0(measurement_units__RevChars0_9);
    }
    {
      measurement_units__V_10_10 = mercury__list__reverse_1_f_0(measurement_units__TypeCtorInfo_9_12, measurement_units__V_11_11);
    }
    {
      mercury__string__from_char_list_2_p_0(measurement_units__V_10_10, &measurement_units__Str_4);
    }
    return measurement_units__Str_4;
  }
}

MR_Float MR_CALL 
measurement_units__not_probability_1_f_0(
  MR_Float measurement_units__X_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__HeadVar__2_2 = (((MR_Float) 1.0000000000000000) - measurement_units__X_3);

    return measurement_units__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
measurement_units__and_2_f_0(
  MR_Float measurement_units__A_4,
  MR_Float measurement_units__B_5)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__HeadVar__3_3 = (measurement_units__A_4 * measurement_units__B_5);

    return measurement_units__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
measurement_units__or_2_f_0(
  MR_Float measurement_units__A_4,
  MR_Float measurement_units__B_5)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__HeadVar__3_3;
    MR_Float measurement_units__V_6_6;
    MR_Float measurement_units__V_7_7 = (((MR_Float) 1.0000000000000000) - measurement_units__A_4);
    MR_Float measurement_units__V_8_8 = (((MR_Float) 1.0000000000000000) - measurement_units__B_5);

    measurement_units__V_6_6 = (measurement_units__V_7_7 * measurement_units__V_8_8);
    measurement_units__HeadVar__3_3 = (((MR_Float) 1.0000000000000000) - measurement_units__V_6_6);
    return measurement_units__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
measurement_units__probability_to_float_1_f_0(
  MR_Float measurement_units__Prob_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__Prob_2 = measurement_units__Prob_3;

    return measurement_units__Prob_2;
  }
}

MR_Float MR_CALL 
measurement_units__probable_1_f_0(
  MR_Float measurement_units__Prob_3)
{
  {
    MR_bool measurement_units__succeeded = (measurement_units__Prob_3 <= ((MR_Float) 1.0000000000000000));
    MR_Float measurement_units__Prob_2 = measurement_units__Prob_3;
    MR_Float measurement_units__V_5_5;

    if (measurement_units__succeeded)
      {
        measurement_units__V_5_5 = (MR_Float) 0.0000000000000000;
        measurement_units__succeeded = (measurement_units__Prob_3 >= measurement_units__V_5_5);
      }
    if (measurement_units__succeeded)
      {
      }
    else
      {
        MR_String measurement_units__V_6_6;
        MR_String measurement_units__V_12_12;
        MR_String measurement_units__V_20_20;

        {
          mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &measurement_units_scalar_common_2[0], (MR_Integer) 2, measurement_units__Prob_3, &measurement_units__V_12_12);
        }
        {
          measurement_units__V_20_20 = mercury__string__f_43_43_2_f_0(measurement_units__V_12_12, (MR_String) " out of range 0.0 to 1.0 inclusive");
        }
        {
          measurement_units__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "Probability ", measurement_units__V_20_20);
        }
        {
          mercury__require__error_1_p_0(measurement_units__V_6_6);
        }
      }
    return measurement_units__Prob_2;
  }
}

MR_Float MR_CALL 
measurement_units__impossible_0_f_0(void)
{
  {
    MR_bool measurement_units__succeeded;

    return (MR_Float) 0.0000000000000000;
  }
}

MR_Float MR_CALL 
measurement_units__certain_0_f_0(void)
{
  {
    MR_bool measurement_units__succeeded;

    return (MR_Float) 1.0000000000000000;
  }
}

MR_String MR_CALL 
measurement_units__format_time_1_f_0(
  MR_Word measurement_units__HeadVar__1_1)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__String_4;
    MR_Float measurement_units__F_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);

    measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 1.0000000000000001e-09));
    if (measurement_units__succeeded)
      {
        MR_Float measurement_units__V_9_9;
        MR_String measurement_units__V_38_38;

        {
          measurement_units__V_9_9 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 9.9999999999999998e-13);
        }
        {
          mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &measurement_units_scalar_common_2[0], (MR_Integer) 1, (MR_Integer) 2, measurement_units__V_9_9, &measurement_units__V_38_38);
        }
        {
          measurement_units__String_4 = mercury__string__f_43_43_2_f_0(measurement_units__V_38_38, (MR_String) "ps");
        }
      }
    else
      {
        measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 9.9999999999999995e-07));
        if (measurement_units__succeeded)
          {
            MR_Float measurement_units__V_16_16;
            MR_String measurement_units__V_48_48;

            {
              measurement_units__V_16_16 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 1.0000000000000001e-09);
            }
            {
              mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &measurement_units_scalar_common_2[0], (MR_Integer) 1, (MR_Integer) 2, measurement_units__V_16_16, &measurement_units__V_48_48);
            }
            {
              measurement_units__String_4 = mercury__string__f_43_43_2_f_0(measurement_units__V_48_48, (MR_String) "ns");
            }
          }
        else
          {
            measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 0.0010000000000000000));
            if (measurement_units__succeeded)
              {
                MR_Float measurement_units__V_23_23;
                MR_String measurement_units__V_58_58;

                {
                  measurement_units__V_23_23 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 9.9999999999999995e-07);
                }
                {
                  mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &measurement_units_scalar_common_2[0], (MR_Integer) 1, (MR_Integer) 2, measurement_units__V_23_23, &measurement_units__V_58_58);
                }
                {
                  measurement_units__String_4 = mercury__string__f_43_43_2_f_0(measurement_units__V_58_58, (MR_String) "us");
                }
              }
            else
              {
                measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 1.0000000000000000));
                if (measurement_units__succeeded)
                  {
                    MR_Float measurement_units__V_30_30;
                    MR_String measurement_units__V_68_68;

                    {
                      measurement_units__V_30_30 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 0.0010000000000000000);
                    }
                    {
                      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &measurement_units_scalar_common_2[0], (MR_Integer) 1, (MR_Integer) 2, measurement_units__V_30_30, &measurement_units__V_68_68);
                    }
                    {
                      measurement_units__String_4 = mercury__string__f_43_43_2_f_0(measurement_units__V_68_68, (MR_String) "ms");
                    }
                  }
                else
                  {
                    MR_String measurement_units__V_78_78;

                    {
                      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &measurement_units_scalar_common_2[0], (MR_Integer) 1, (MR_Integer) 2, measurement_units__F_3, &measurement_units__V_78_78);
                    }
                    {
                      measurement_units__String_4 = mercury__string__f_43_43_2_f_0(measurement_units__V_78_78, (MR_String) "s");
                    }
                  }
              }
          }
      }
    return measurement_units__String_4;
  }
}

MR_Word MR_CALL 
measurement_units__time_percall_2_f_0(
  MR_Word measurement_units__HeadVar__1_1,
  MR_Integer measurement_units__Calls_5)
{
  {
    MR_bool measurement_units__succeeded = (measurement_units__Calls_5 == (MR_Integer) 0);
    MR_Word measurement_units__HeadVar__3_3;
    MR_Float measurement_units__Time_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
    MR_Float measurement_units__TimePerCall_6;

    if (measurement_units__succeeded)
      measurement_units__TimePerCall_6 = (MR_Float) 0.0000000000000000;
    else
      {
        MR_Float measurement_units__V_7_7;

        {
          measurement_units__V_7_7 = mercury__float__float_1_f_0(measurement_units__Calls_5);
        }
        {
          measurement_units__TimePerCall_6 = mercury__float__f_slash_2_f_0(measurement_units__Time_4, measurement_units__V_7_7);
        }
      }
    measurement_units__HeadVar__3_3 = (MR_Word) MR_box_float(measurement_units__TimePerCall_6);
    return measurement_units__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
measurement_units__ticks_to_time_2_f_0(
  MR_Integer measurement_units__Ticks_4,
  MR_Integer measurement_units__TicksPerSec_5)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Word measurement_units__Time_6;
    MR_Float measurement_units__SecPerTick_7;
    MR_Float measurement_units__V_9_9;
    MR_Float measurement_units__V_10_10;
    MR_Float measurement_units__V_11_11;

    {
      measurement_units__V_9_9 = mercury__float__float_1_f_0(measurement_units__TicksPerSec_5);
    }
    {
      measurement_units__SecPerTick_7 = mercury__float__f_slash_2_f_0((MR_Float) 1.0000000000000000, measurement_units__V_9_9);
    }
    {
      measurement_units__V_11_11 = mercury__float__float_1_f_0(measurement_units__Ticks_4);
    }
    measurement_units__V_10_10 = (measurement_units__V_11_11 * measurement_units__SecPerTick_7);
    measurement_units__Time_6 = (MR_Word) MR_box_float(measurement_units__V_10_10);
    return measurement_units__Time_6;
  }
}

MR_bool MR_CALL 
measurement_units__percent_at_or_above_threshold_2_p_0(
  MR_Integer measurement_units__Threshold_3,
  MR_Word measurement_units__HeadVar__2_2)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__P_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);
    MR_Float measurement_units__V_5_5;
    MR_Float measurement_units__V_6_6;
    MR_Float measurement_units__V_7_7;

    {
      measurement_units__V_7_7 = mercury__float__float_1_f_0((MR_Integer) 100);
    }
    measurement_units__V_5_5 = (measurement_units__P_4 * measurement_units__V_7_7);
    {
      measurement_units__V_6_6 = mercury__float__float_1_f_0(measurement_units__Threshold_3);
    }
    measurement_units__succeeded = (measurement_units__V_5_5 >= measurement_units__V_6_6);
    return measurement_units__succeeded;
  }
}

MR_String MR_CALL 
measurement_units__format_percent_1_f_0(
  MR_Word measurement_units__HeadVar__1_1)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__String_4;
    MR_Float measurement_units__P_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
    MR_Float measurement_units__V_8_8 = (measurement_units__P_3 * ((MR_Float) 100.00000000000000));

    {
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &measurement_units_scalar_common_2[0], (MR_Integer) 2, (MR_Integer) 2, measurement_units__V_8_8, &measurement_units__String_4);
    }
    return measurement_units__String_4;
  }
}

MR_Word MR_CALL 
measurement_units__percent_1_f_0(
  MR_Float measurement_units__P_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Word measurement_units__HeadVar__2_2 = (MR_Word) MR_box_float(measurement_units__P_3);

    return measurement_units__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
measurement_units__compare_memory_3_p_0_1(
  MR_Box measurement_units__closure_arg)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Box measurement_units__closure = measurement_units__closure_arg;

    {
      measurement_units__succeeded = measurement_units__IntroducedFrom__pred__compare_memory__200__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__closure, (MR_Integer) 4))));
    }
    return measurement_units__succeeded;
  }
}

void MR_CALL 
measurement_units__compare_memory_3_p_0(
  MR_Word measurement_units__MemoryA_4,
  MR_Word measurement_units__MemoryB_5,
  MR_Word * measurement_units__Result_6)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Float measurement_units__WordsA_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__MemoryA_4, (MR_Integer) 0)));
    MR_Integer measurement_units__WordSizeA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__MemoryA_4, (MR_Integer) 1)));
    MR_Float measurement_units__WordsB_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__MemoryB_5, (MR_Integer) 0)));
    MR_Integer measurement_units__WordSizeB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__MemoryB_5, (MR_Integer) 1)));
    MR_Word measurement_units__V_11_11;

    {
      measurement_units__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 0) = ((MR_Box) (&measurement_units_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 1) = ((MR_Box) (measurement_units__compare_memory_3_p_0_1));
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 3) = ((MR_Box) (measurement_units__WordSizeA_8));
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 4) = ((MR_Box) (measurement_units__WordSizeB_10));
    }
    {
      mercury__require__require_2_p_0(measurement_units__V_11_11, (MR_String) "compare_memory: word size mismatch");
    }
    {
      mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__Result_6, measurement_units__WordsA_7, measurement_units__WordsB_9);
    }
  }
}

MR_String MR_CALL 
measurement_units__format_memory_3_f_0(
  MR_Word measurement_units__HeadVar__1_1,
  MR_Word measurement_units__HeadVar__2_2,
  MR_Integer measurement_units__Decimals_3)
{
  {
    MR_bool measurement_units__succeeded;
    MR_String measurement_units__HeadVar__4_4;
    MR_Integer measurement_units__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float measurement_units__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 0)));

    switch (measurement_units__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Float measurement_units__V_8_8;
          MR_Float measurement_units__V_9_9;
          MR_String measurement_units__Format_18;
          MR_String measurement_units__V_20_20;
          MR_String measurement_units__V_21_21;

          {
            measurement_units__V_9_9 = mercury__float__float_1_f_0(measurement_units__V_13_13);
          }
          measurement_units__V_8_8 = (measurement_units__V_14_14 * measurement_units__V_9_9);
          {
            measurement_units__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (measurement_units__Decimals_3)));
          }
          {
            measurement_units__V_20_20 = mercury__string__f_43_43_2_f_0(measurement_units__V_21_21, (MR_String) "f");
          }
          {
            measurement_units__Format_18 = mercury__string__f_43_43_2_f_0((MR_String) "%.", measurement_units__V_20_20);
          }
          {
            measurement_units__HeadVar__4_4 = measurement_units__decimal_fraction_2_f_0(measurement_units__Format_18, measurement_units__V_8_8);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String measurement_units__Format_27;
          MR_String measurement_units__V_29_29;
          MR_String measurement_units__V_30_30;

          {
            measurement_units__V_30_30 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (measurement_units__Decimals_3)));
          }
          {
            measurement_units__V_29_29 = mercury__string__f_43_43_2_f_0(measurement_units__V_30_30, (MR_String) "f");
          }
          {
            measurement_units__Format_27 = mercury__string__f_43_43_2_f_0((MR_String) "%.", measurement_units__V_29_29);
          }
          {
            measurement_units__HeadVar__4_4 = measurement_units__decimal_fraction_2_f_0(measurement_units__Format_27, measurement_units__V_14_14);
          }
        }
        break;
    }
    return measurement_units__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
measurement_units__f_slash_2_f_0(
  MR_Word measurement_units__HeadVar__1_1,
  MR_Integer measurement_units__Denom_6)
{
  {
    MR_bool measurement_units__succeeded = (measurement_units__Denom_6 == (MR_Integer) 0);
    MR_Word measurement_units__HeadVar__3_3;
    MR_Float measurement_units__Nom_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurement_units__BPW_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 1)));

    if (measurement_units__succeeded)
      {
        {
          measurement_units__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 0) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 1) = ((MR_Box) (measurement_units__BPW_5));
        }
      }
    else
      {
        MR_Float measurement_units__V_8_8;
        MR_Float measurement_units__V_9_9;

        {
          measurement_units__V_9_9 = mercury__float__float_1_f_0(measurement_units__Denom_6);
        }
        {
          measurement_units__V_8_8 = mercury__float__f_slash_2_f_0(measurement_units__Nom_4, measurement_units__V_9_9);
        }
        {
          measurement_units__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 0) = MR_box_float(measurement_units__V_8_8);
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 1) = ((MR_Box) (measurement_units__BPW_5));
        }
      }
    return measurement_units__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
measurement_units__memory_words_2_f_0(
  MR_Integer measurement_units__WordsI_4,
  MR_Integer measurement_units__BytesPerWord_5)
{
  {
    MR_bool measurement_units__succeeded;
    MR_Word measurement_units__HeadVar__3_3;
    MR_Float measurement_units__WordsF_6;

    {
      measurement_units__WordsF_6 = mercury__float__float_1_f_0(measurement_units__WordsI_4);
    }
    {
      measurement_units__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 0) = MR_box_float(measurement_units__WordsF_6);
      MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 1) = ((MR_Box) (measurement_units__BytesPerWord_5));
    }
    return measurement_units__HeadVar__3_3;
  }
}

void mercury__measurement_units__init(void)
{
}

void mercury__measurement_units__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_memory_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_memory_units_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_percent_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_probability_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_time_0);
}

void mercury__measurement_units__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module measurement_units. */
