/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module globals. */
/* :- implementation. */

/*
INIT mercury__globals__init
ENDINIT
*/

#include "globals.mih"


#include "options.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
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




static const MR_FA_TypeInfo_Struct2 globals__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo globals__globals__field_types_globals_0_0[2];

static const MR_ConstString globals__globals__field_names_globals_0_0[2];

static const MR_DuFunctorDesc globals__globals__du_functor_desc_globals_0_0;

static const MR_DuFunctorDescPtr globals__globals__du_stag_ordered_globals_0_0[1];

static const MR_DuPtagLayout globals__globals__du_ptag_ordered_globals_0[1];

static const MR_DuFunctorDescPtr globals__globals__du_name_ordered_globals_0[1];

static const MR_Integer globals__globals__functor_number_map_globals_0[1];

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_0;

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_1;

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_2;

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_3;

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_4;

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_5;

static const MR_EnumFunctorDescPtr globals__globals__enum_value_ordered_what_to_profile_0[6];

static const MR_EnumFunctorDescPtr globals__globals__enum_name_ordered_what_to_profile_0[6];

static const MR_Integer globals__globals__functor_number_map_what_to_profile_0[6];

static MR_bool MR_CALL 
globals____Unify____globals_0_0_10001(
  MR_Box globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2);

static void MR_CALL 
globals____Compare____globals_0_0_10001(
  MR_Box * globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2,
  MR_Box globals__wrapper_arg_3);

static MR_bool MR_CALL 
globals____Unify____what_to_profile_0_0_10001(
  MR_Box globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2);

static void MR_CALL 
globals____Compare____what_to_profile_0_0_10001(
  MR_Box * globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2,
  MR_Box globals__wrapper_arg_3);


static /* final */ const MR_Box globals_scalar_common_1[1][3];


/* sealed */ struct globals__vector_common_type_2_0_s {
  const MR_String globals__vector_common_type_2_0__vct_2_f_0;
  const MR_Word globals__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct globals__vector_common_type_2_0_s globals_vector_common_2[6];

/* sealed */ struct globals__vector_common_type_3_0_s {
  const MR_String globals__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct globals__vector_common_type_3_0_s globals_vector_common_3[6];



static /* final */ const MR_Box globals_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct globals__vector_common_type_2_0_s globals_vector_common_2[6] = {
  /* row 0 */
  {
    (MR_String) "memory-cells",
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "memory-words",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "real-time",
    (MR_Integer) 5
  },
  /* row 3 */
  {
    (MR_String) "snapshots",
    (MR_Integer) 2
  },
  /* row 4 */
  {
    (MR_String) "user-plus-system-time",
    (MR_Integer) 3
  },
  /* row 5 */
  {
    (MR_String) "user-time",
    (MR_Integer) 4
  },
};

static /* final */ const struct globals__vector_common_type_3_0_s globals_vector_common_3[6] = {
  /* row 0 */   {     (MR_String) "memory-words" },
  /* row 1 */   {     (MR_String) "memory-cells" },
  /* row 2 */   {     (MR_String) "snapshots" },
  /* row 3 */   {     (MR_String) "user-plus-system-time" },
  /* row 4 */   {     (MR_String) "user-time" },
  /* row 5 */   {     (MR_String) "real-time" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 globals__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &options__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

static const MR_PseudoTypeInfo globals__globals__field_types_globals_0_0[2] = {
  (MR_PseudoTypeInfo) &globals__globals__type_ctor_info_what_to_profile_0,
  (MR_PseudoTypeInfo) &globals__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
};

static const MR_ConstString globals__globals__field_names_globals_0_0[2] = {
  (MR_String) "what_to_profile",
  (MR_String) "option_table"
};

static const MR_DuFunctorDesc globals__globals__du_functor_desc_globals_0_0 = {
  (MR_String) "globals",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  globals__globals__field_types_globals_0_0,
  globals__globals__field_names_globals_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr globals__globals__du_stag_ordered_globals_0_0[1] = {
  &globals__globals__du_functor_desc_globals_0_0
};

static const MR_DuPtagLayout globals__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    globals__globals__du_stag_ordered_globals_0_0
  }
};

static const MR_DuFunctorDescPtr globals__globals__du_name_ordered_globals_0[1] = {
  &globals__globals__du_functor_desc_globals_0_0
};

static const MR_Integer globals__globals__functor_number_map_globals_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct globals__globals__type_ctor_info_globals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (globals____Unify____globals_0_0_10001)),
  ((MR_Box) (globals____Compare____globals_0_0_10001)),
  (MR_String) "globals",
  (MR_String) "globals",
  {     globals__globals__du_name_ordered_globals_0 },
  {     globals__globals__du_ptag_ordered_globals_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  globals__globals__functor_number_map_globals_0
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_0 = {
  (MR_String) "memory_words",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_1 = {
  (MR_String) "memory_cells",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_2 = {
  (MR_String) "memory_snapshots",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_3 = {
  (MR_String) "user_plus_system_time",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_4 = {
  (MR_String) "user_time",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_5 = {
  (MR_String) "real_time",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr globals__globals__enum_value_ordered_what_to_profile_0[6] = {
  &globals__globals__enum_functor_desc_what_to_profile_0_0,
  &globals__globals__enum_functor_desc_what_to_profile_0_1,
  &globals__globals__enum_functor_desc_what_to_profile_0_2,
  &globals__globals__enum_functor_desc_what_to_profile_0_3,
  &globals__globals__enum_functor_desc_what_to_profile_0_4,
  &globals__globals__enum_functor_desc_what_to_profile_0_5
};

static const MR_EnumFunctorDescPtr globals__globals__enum_name_ordered_what_to_profile_0[6] = {
  &globals__globals__enum_functor_desc_what_to_profile_0_1,
  &globals__globals__enum_functor_desc_what_to_profile_0_2,
  &globals__globals__enum_functor_desc_what_to_profile_0_0,
  &globals__globals__enum_functor_desc_what_to_profile_0_5,
  &globals__globals__enum_functor_desc_what_to_profile_0_3,
  &globals__globals__enum_functor_desc_what_to_profile_0_4
};

static const MR_Integer globals__globals__functor_number_map_what_to_profile_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct globals__globals__type_ctor_info_what_to_profile_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (globals____Unify____what_to_profile_0_0_10001)),
  ((MR_Box) (globals____Compare____what_to_profile_0_0_10001)),
  (MR_String) "globals",
  (MR_String) "what_to_profile",
  {     globals__globals__enum_name_ordered_what_to_profile_0 },
  {     globals__globals__enum_value_ordered_what_to_profile_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  globals__globals__functor_number_map_what_to_profile_0
};

void MR_CALL 
globals____Compare____what_to_profile_0_0(
  MR_Word * globals__HeadVar__1_1,
  MR_Word globals__HeadVar__2_2,
  MR_Word globals__HeadVar__3_3)
{
  {
    MR_bool globals__succeeded;
    MR_Integer globals__Cast_HeadVar1_4 = (MR_Integer) globals__HeadVar__2_2;
    MR_Integer globals__Cast_HeadVar2_5 = (MR_Integer) globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(globals__HeadVar__1_1, globals__Cast_HeadVar1_4, globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
globals____Unify____what_to_profile_0_0(
  MR_Word globals__HeadVar__2_1,
  MR_Word globals__HeadVar__2_2)
{
  {
    MR_bool globals__succeeded = (globals__HeadVar__2_1 == globals__HeadVar__2_2);

    return globals__succeeded;
  }
}

void MR_CALL 
globals____Compare____globals_0_0(
  MR_Word * globals__HeadVar__1_1,
  MR_Word globals__HeadVar__2_2,
  MR_Word globals__HeadVar__3_3)
{
  {
    MR_bool globals__succeeded;
    MR_Integer globals__CastX_9 = (MR_Integer) globals__HeadVar__2_2;
    MR_Integer globals__CastY_10 = (MR_Integer) globals__HeadVar__3_3;

    globals__succeeded = (globals__CastX_9 == globals__CastY_10);
    if (globals__succeeded)
      *globals__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word globals__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word globals__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word globals__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word globals__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word globals__Var_8;
        MR_Integer globals__Var_13 = (MR_Integer) globals__ArgX1_4;
        MR_Integer globals__Var_14 = (MR_Integer) globals__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&globals__Var_8, globals__Var_13, globals__Var_14);
        }
        globals__succeeded = (globals__Var_8 == (MR_Integer) 0);
        globals__succeeded = !(globals__succeeded);
        if (globals__succeeded)
          *globals__HeadVar__1_1 = globals__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &globals_scalar_common_1[0], globals__HeadVar__1_1, ((MR_Box) (globals__ArgX2_6)), ((MR_Box) (globals__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
globals____Unify____globals_0_0(
  MR_Word globals__HeadVar__1_1,
  MR_Word globals__HeadVar__2_2)
{
  {
    MR_bool globals__succeeded;
    MR_Integer globals__CastX_7 = (MR_Integer) globals__HeadVar__1_1;
    MR_Integer globals__CastY_8 = (MR_Integer) globals__HeadVar__2_2;

    globals__succeeded = (globals__CastX_7 == globals__CastY_8);
    if (globals__succeeded)
      globals__succeeded = MR_TRUE;
    else
      {
        MR_Word globals__TypeInfo_9_9;
        MR_Word globals__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word globals__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word globals__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word globals__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__HeadVar__2_2, (MR_Integer) 1)));

        globals__succeeded = (globals__ArgX1_3 == globals__ArgY1_4);
        if (globals__succeeded)
          {
            globals__TypeInfo_9_9 = (MR_Word) &globals_scalar_common_1[0];
            {
              globals__succeeded = mercury__builtin__unify_2_p_0(globals__TypeInfo_9_9, ((MR_Box) (globals__ArgX2_5)), ((MR_Box) (globals__ArgY2_6)));
            }
          }
      }
    return globals__succeeded;
  }
}

void MR_CALL 
globals__io_lookup_accumulating_option_4_p_0(
  MR_Word globals__Option_5,
  MR_Word * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals_8;
    MR_Word globals__UnivGlobals_16;
    MR_Word globals__Globals0_17;
    MR_Box globals__conv0_Globals0_17;

    {
      mercury__io__get_globals_3_p_0(&globals__UnivGlobals_16);
    }
    {
      globals__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, globals__UnivGlobals_16, &globals__conv0_Globals0_17);
    }
    if (globals__succeeded)
      {
        globals__Globals0_17 = ((MR_Word) globals__conv0_Globals0_17);
        globals__succeeded = MR_TRUE;
      }
    if (globals__succeeded)
      globals__Globals_8 = globals__Globals0_17;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.io_get_globals: univ_to_type failed");
          return;
        }
      }
    {
      globals__lookup_accumulating_option_3_p_0(globals__Globals_8, globals__Option_5, globals__Value_6);
    }
  }
}

void MR_CALL 
globals__io_lookup_string_option_4_p_0(
  MR_Word globals__Option_5,
  MR_String * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals_8;
    MR_Word globals__UnivGlobals_16;
    MR_Word globals__Globals0_17;
    MR_Box globals__conv0_Globals0_17;

    {
      mercury__io__get_globals_3_p_0(&globals__UnivGlobals_16);
    }
    {
      globals__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, globals__UnivGlobals_16, &globals__conv0_Globals0_17);
    }
    if (globals__succeeded)
      {
        globals__Globals0_17 = ((MR_Word) globals__conv0_Globals0_17);
        globals__succeeded = MR_TRUE;
      }
    if (globals__succeeded)
      globals__Globals_8 = globals__Globals0_17;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.io_get_globals: univ_to_type failed");
          return;
        }
      }
    {
      globals__lookup_string_option_3_p_0(globals__Globals_8, globals__Option_5, globals__Value_6);
    }
  }
}

void MR_CALL 
globals__io_lookup_int_option_4_p_0(
  MR_Word globals__Option_5,
  MR_Integer * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals_8;
    MR_Word globals__UnivGlobals_16;
    MR_Word globals__Globals0_17;
    MR_Box globals__conv0_Globals0_17;

    {
      mercury__io__get_globals_3_p_0(&globals__UnivGlobals_16);
    }
    {
      globals__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, globals__UnivGlobals_16, &globals__conv0_Globals0_17);
    }
    if (globals__succeeded)
      {
        globals__Globals0_17 = ((MR_Word) globals__conv0_Globals0_17);
        globals__succeeded = MR_TRUE;
      }
    if (globals__succeeded)
      globals__Globals_8 = globals__Globals0_17;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.io_get_globals: univ_to_type failed");
          return;
        }
      }
    {
      globals__lookup_int_option_3_p_0(globals__Globals_8, globals__Option_5, globals__Value_6);
    }
  }
}

void MR_CALL 
globals__io_lookup_bool_option_4_p_0(
  MR_Word globals__Option_5,
  MR_Word * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals_8;
    MR_Word globals__UnivGlobals_16;
    MR_Word globals__Globals0_17;
    MR_Box globals__conv0_Globals0_17;

    {
      mercury__io__get_globals_3_p_0(&globals__UnivGlobals_16);
    }
    {
      globals__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, globals__UnivGlobals_16, &globals__conv0_Globals0_17);
    }
    if (globals__succeeded)
      {
        globals__Globals0_17 = ((MR_Word) globals__conv0_Globals0_17);
        globals__succeeded = MR_TRUE;
      }
    if (globals__succeeded)
      globals__Globals_8 = globals__Globals0_17;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.io_get_globals: univ_to_type failed");
          return;
        }
      }
    {
      globals__lookup_bool_option_3_p_0(globals__Globals_8, globals__Option_5, globals__Value_6);
    }
  }
}

void MR_CALL 
globals__io_set_option_4_p_0(
  MR_Word globals__Option_5,
  MR_Word globals__OptionData_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals0_8;
    MR_Word globals__OptionTable0_9;
    MR_Word globals__OptionTable_10;
    MR_Word globals__Globals_11;
    MR_Word globals__UnivGlobals_22;
    MR_Word globals__Globals_37;
    MR_Word globals__UnivGlobals_38;
    MR_Word globals__Globals0_23;
    MR_Box globals__conv0_Globals0_23;
    MR_Word globals__Var_28;
    MR_Word globals__Var_31;
    MR_Word globals__Var_32;

    {
      mercury__io__get_globals_3_p_0(&globals__UnivGlobals_22);
    }
    {
      globals__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, globals__UnivGlobals_22, &globals__conv0_Globals0_23);
    }
    if (globals__succeeded)
      {
        globals__Globals0_23 = ((MR_Word) globals__conv0_Globals0_23);
        globals__succeeded = MR_TRUE;
      }
    if (globals__succeeded)
      globals__Globals0_8 = globals__Globals0_23;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.io_get_globals: univ_to_type failed");
          return;
        }
      }
    globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals0_8, (MR_Integer) 0)));
    globals__OptionTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals0_8, (MR_Integer) 1)));
    {
      mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) (globals__Option_5)), ((MR_Box) (globals__OptionData_6)), globals__OptionTable0_9, &globals__OptionTable_10);
    }
    globals__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals0_8, (MR_Integer) 0)));
    globals__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals0_8, (MR_Integer) 1)));
    {
      globals__Globals_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), globals__Globals_11, 0) = ((MR_Box) (globals__Var_31));
      MR_hl_field(MR_mktag(0), globals__Globals_11, 1) = ((MR_Box) (globals__OptionTable_10));
    }
    globals__Globals_37 = globals__Globals_11;
    {
      mercury__univ__type_to_univ_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, ((MR_Box) (globals__Globals_37)), &globals__UnivGlobals_38);
    }
    {
      mercury__io__set_globals_3_p_0(globals__UnivGlobals_38);
    }
  }
}

void MR_CALL 
globals__io_lookup_option_4_p_0(
  MR_Word globals__Option_5,
  MR_Word * globals__OptionData_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals_8;
    MR_Word globals__OptionTable_9;
    MR_Word globals__UnivGlobals_19;
    MR_Word globals__Globals0_20;
    MR_Box globals__conv0_Globals0_20;
    MR_Word globals__Var_25;
    MR_Box globals__conv1_OptionData_6;

    {
      mercury__io__get_globals_3_p_0(&globals__UnivGlobals_19);
    }
    {
      globals__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, globals__UnivGlobals_19, &globals__conv0_Globals0_20);
    }
    if (globals__succeeded)
      {
        globals__Globals0_20 = ((MR_Word) globals__conv0_Globals0_20);
        globals__succeeded = MR_TRUE;
      }
    if (globals__succeeded)
      globals__Globals_8 = globals__Globals0_20;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.io_get_globals: univ_to_type failed");
          return;
        }
      }
    globals__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_8, (MR_Integer) 0)));
    globals__OptionTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_8, (MR_Integer) 1)));
    {
      mercury__map__lookup_3_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, globals__OptionTable_9, ((MR_Box) (globals__Option_5)), &globals__conv1_OptionData_6);
    }
    *globals__OptionData_6 = ((MR_Word) globals__conv1_OptionData_6);
  }
}

void MR_CALL 
globals__io_set_globals_3_p_0(
  MR_Word globals__Globals0_4)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals_6 = globals__Globals0_4;
    MR_Word globals__UnivGlobals_7;

    {
      mercury__univ__type_to_univ_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, ((MR_Box) (globals__Globals_6)), &globals__UnivGlobals_7);
    }
    {
      mercury__io__set_globals_3_p_0(globals__UnivGlobals_7);
    }
  }
}

void MR_CALL 
globals__io_get_globals_3_p_0(
  MR_Word * globals__Globals_4)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__UnivGlobals_6;
    MR_Word globals__Globals0_7;
    MR_Box globals__conv0_Globals0_7;

    {
      mercury__io__get_globals_3_p_0(&globals__UnivGlobals_6);
    }
    {
      globals__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, globals__UnivGlobals_6, &globals__conv0_Globals0_7);
    }
    if (globals__succeeded)
      {
        globals__Globals0_7 = ((MR_Word) globals__conv0_Globals0_7);
        globals__succeeded = MR_TRUE;
      }
    if (globals__succeeded)
      *globals__Globals_4 = globals__Globals0_7;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.io_get_globals: univ_to_type failed");
          return;
        }
      }
  }
}

void MR_CALL 
globals__io_init_3_p_0(
  MR_Word globals__Options_4)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Globals_6;
    MR_Word globals__Globals_16;
    MR_Word globals__UnivGlobals_17;

    {
      globals__Globals_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), globals__Globals_6, 0) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), globals__Globals_6, 1) = ((MR_Box) (globals__Options_4));
    }
    globals__Globals_16 = globals__Globals_6;
    {
      mercury__univ__type_to_univ_2_p_0((MR_Word) &globals__globals__type_ctor_info_globals_0, ((MR_Box) (globals__Globals_16)), &globals__UnivGlobals_17);
    }
    {
      mercury__io__set_globals_3_p_0(globals__UnivGlobals_17);
    }
  }
}

void MR_CALL 
globals__lookup_accumulating_option_3_p_0(
  MR_Word globals__Globals_4,
  MR_Word globals__Option_5,
  MR_Word * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__OptionData_7;
    MR_Word globals__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 1)));
    MR_Word globals__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 0)));
    MR_Box globals__conv0_OptionData_7;
    MR_Word globals__Accumulating_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, globals__OptionTable_15, ((MR_Box) (globals__Option_5)), &globals__conv0_OptionData_7);
    }
    globals__OptionData_7 = ((MR_Word) globals__conv0_OptionData_7);
    globals__succeeded = ((((MR_tag((MR_Word) globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (globals__succeeded)
      {
        globals__Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), globals__OptionData_7, (MR_Integer) 1)));
        *globals__Value_6 = globals__Accumulating_8;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.lookup_accumulating_option: invalid accumulating option");
          return;
        }
      }
  }
}

void MR_CALL 
globals__lookup_string_option_3_p_0(
  MR_Word globals__Globals_4,
  MR_Word globals__Option_5,
  MR_String * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__OptionData_7;
    MR_Word globals__OptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 1)));
    MR_Word globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 0)));
    MR_Box globals__conv0_OptionData_7;
    MR_String globals__String_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, globals__OptionTable_13, ((MR_Box) (globals__Option_5)), &globals__conv0_OptionData_7);
    }
    globals__OptionData_7 = ((MR_Word) globals__conv0_OptionData_7);
    globals__succeeded = ((((MR_tag((MR_Word) globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (globals__succeeded)
      {
        globals__String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), globals__OptionData_7, (MR_Integer) 1)));
        *globals__Value_6 = globals__String_8;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.lookup_string_option: invalid string option");
          return;
        }
      }
  }
}

void MR_CALL 
globals__lookup_int_option_3_p_0(
  MR_Word globals__Globals_4,
  MR_Word globals__Option_5,
  MR_Integer * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__OptionData_7;
    MR_Word globals__OptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 1)));
    MR_Word globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 0)));
    MR_Box globals__conv0_OptionData_7;
    MR_Integer globals__Int_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, globals__OptionTable_13, ((MR_Box) (globals__Option_5)), &globals__conv0_OptionData_7);
    }
    globals__OptionData_7 = ((MR_Word) globals__conv0_OptionData_7);
    globals__succeeded = ((MR_tag((MR_Word) globals__OptionData_7)) == (MR_mktag((MR_Integer) 2)));
    if (globals__succeeded)
      {
        globals__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), globals__OptionData_7, (MR_Integer) 0)));
        *globals__Value_6 = globals__Int_8;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.lookup_int_option: invalid int option");
          return;
        }
      }
  }
}

void MR_CALL 
globals__lookup_bool_option_3_p_0(
  MR_Word globals__Globals_4,
  MR_Word globals__Option_5,
  MR_Word * globals__Value_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__OptionData_7;
    MR_Word globals__OptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 1)));
    MR_Word globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 0)));
    MR_Box globals__conv0_OptionData_7;
    MR_Word globals__Bool_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, globals__OptionTable_13, ((MR_Box) (globals__Option_5)), &globals__conv0_OptionData_7);
    }
    globals__OptionData_7 = ((MR_Word) globals__conv0_OptionData_7);
    globals__succeeded = ((MR_tag((MR_Word) globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
    if (globals__succeeded)
      {
        globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), globals__OptionData_7, (MR_Integer) 0)));
        *globals__Value_6 = globals__Bool_8;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "globals.lookup_bool_option: invalid bool option");
          return;
        }
      }
  }
}

void MR_CALL 
globals__lookup_option_3_p_0(
  MR_Word globals__Globals_4,
  MR_Word globals__Option_5,
  MR_Word * globals__OptionData_6)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 1)));
    MR_Word globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_4, (MR_Integer) 0)));
    MR_Box globals__conv0_OptionData_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, globals__OptionTable_7, ((MR_Box) (globals__Option_5)), &globals__conv0_OptionData_6);
    }
    *globals__OptionData_6 = ((MR_Word) globals__conv0_OptionData_6);
  }
}

void MR_CALL 
globals__set_options_3_p_0(
  MR_Word globals__Options_4,
  MR_Word globals__Globals_5,
  MR_Word * globals__HeadVar__3_3)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_5, (MR_Integer) 0)));
    MR_Word globals__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_5, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *globals__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (globals__Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (globals__Options_4));
    }
  }
}

void MR_CALL 
globals__set_what_to_profile_3_p_0(
  MR_Word globals__WhatToProfile_4,
  MR_Word globals__Globals_5,
  MR_Word * globals__HeadVar__3_3)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_5, (MR_Integer) 1)));
    MR_Word globals__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_5, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *globals__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (globals__WhatToProfile_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (globals__Var_7));
    }
  }
}

void MR_CALL 
globals__get_options_2_p_0(
  MR_Word globals__Globals_3,
  MR_Word * globals__HeadVar__2_2)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_3, (MR_Integer) 0)));

    *globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_3, (MR_Integer) 1)));
  }
}

void MR_CALL 
globals__get_what_to_profile_2_p_0(
  MR_Word globals__Globals_3,
  MR_Word * globals__HeadVar__2_2)
{
  {
    MR_bool globals__succeeded;
    MR_Word globals__Var_4;

    *globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_3, (MR_Integer) 0)));
    globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), globals__Globals_3, (MR_Integer) 1)));
  }
}

void MR_CALL 
globals__init_2_p_0(
  MR_Word globals__Options_3,
  MR_Word * globals__HeadVar__2_2)
{
  {
    MR_bool globals__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *globals__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (globals__Options_3));
    }
  }
}

void MR_CALL 
globals__what_to_profile_2_p_1(
  MR_String * globals__HeadVar__1_1,
  MR_Word globals__HeadVar__2_2)
{
  {
    MR_bool globals__succeeded;

    *globals__HeadVar__1_1 = ((&globals_vector_common_3[0 + globals__HeadVar__2_2]))->globals__vector_common_type_3_0__vct_3_f_0;
  }
}

MR_bool MR_CALL 
globals__what_to_profile_2_p_0(
  MR_String globals__HeadVar__1_1,
  MR_Word * globals__HeadVar__2_2)
{
  {
    MR_bool globals__succeeded;
    MR_Integer globals__lo_0;
    MR_Integer globals__hi_1;
    MR_Integer globals__mid_2;
    MR_Integer globals__result_3;

    /* binary string simple lookup switch */
    globals__lo_0 = (MR_Integer) 0;
    globals__hi_1 = (MR_Integer) 5;
    do
      {
        globals__mid_2 = (((globals__lo_0 + globals__hi_1)) / (MR_Integer) 2);
        globals__result_3 = MR_strcmp(globals__HeadVar__1_1, ((&globals_vector_common_2[0 + globals__mid_2]))->globals__vector_common_type_2_0__vct_2_f_0);
        if ((globals__result_3 == (MR_Integer) 0))
          {
            *globals__HeadVar__2_2 = ((&globals_vector_common_2[0 + globals__mid_2]))->globals__vector_common_type_2_0__vct_2_f_1;
            globals__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((globals__result_3 < (MR_Integer) 0))
          globals__hi_1 = (globals__mid_2 - (MR_Integer) 1);
        else
          globals__lo_0 = (globals__mid_2 + (MR_Integer) 1);
      }
    while ((globals__lo_0 <= globals__hi_1));
    globals__succeeded = MR_FALSE;
  label_0:;
    return globals__succeeded;
  }
}

static MR_bool MR_CALL 
globals____Unify____globals_0_0_10001(
  MR_Box globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2)
{
  {
    MR_bool globals__succeeded;

    {
      globals__succeeded = globals____Unify____globals_0_0(((MR_Word) globals__wrapper_arg_1), ((MR_Word) globals__wrapper_arg_2));
    }
    return globals__succeeded;
  }
}

static void MR_CALL 
globals____Compare____globals_0_0_10001(
  MR_Box * globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2,
  MR_Box globals__wrapper_arg_3)
{
  {
    MR_Word globals__conv0_HeadVar__1_1;

    {
      globals____Compare____globals_0_0(&globals__conv0_HeadVar__1_1, ((MR_Word) globals__wrapper_arg_2), ((MR_Word) globals__wrapper_arg_3));
    }
    *globals__wrapper_arg_1 = ((MR_Box) (globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
globals____Unify____what_to_profile_0_0_10001(
  MR_Box globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2)
{
  {
    MR_bool globals__succeeded;

    {
      globals__succeeded = globals____Unify____what_to_profile_0_0(((MR_Word) globals__wrapper_arg_1), ((MR_Word) globals__wrapper_arg_2));
    }
    return globals__succeeded;
  }
}

static void MR_CALL 
globals____Compare____what_to_profile_0_0_10001(
  MR_Box * globals__wrapper_arg_1,
  MR_Box globals__wrapper_arg_2,
  MR_Box globals__wrapper_arg_3)
{
  {
    MR_Word globals__conv0_HeadVar__1_1;

    {
      globals____Compare____what_to_profile_0_0(&globals__conv0_HeadVar__1_1, ((MR_Word) globals__wrapper_arg_2), ((MR_Word) globals__wrapper_arg_3));
    }
    *globals__wrapper_arg_1 = ((MR_Box) (globals__conv0_HeadVar__1_1));
  }
}

void mercury__globals__init(void)
{
}

void mercury__globals__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&globals__globals__type_ctor_info_globals_0);
	MR_register_type_ctor_info(&globals__globals__type_ctor_info_what_to_profile_0);
}

void mercury__globals__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__globals__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module globals. */
