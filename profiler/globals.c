/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2023-10-04
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


// :- module globals.
// :- implementation.

/*
INIT mercury__globals__init
REQUIRED_INIT mercury__globals__required_init
ENDINIT
*/

#include "globals.mih"
#include "globals.mh"


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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_FA_TypeInfo_Struct2 globals__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo globals__globals__field_types_globals_0_0[2];

static const MR_ConstString globals__globals__field_names_globals_0_0[2];

static const MR_DuArgLocn globals__globals__field_locns_globals_0_0[2];

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

static const MR_EnumFunctorDescPtr globals__globals__enum_ordinal_ordered_what_to_profile_0[6];

static const MR_EnumFunctorDescPtr globals__globals__enum_name_ordered_what_to_profile_0[6];

static const MR_Integer globals__globals__functor_number_map_what_to_profile_0[6];

static void MR_CALL 
globals__unsafe_set_profiler_globals_1_p_0(
  MR_Word X_1);

static void MR_CALL 
globals__unsafe_get_profiler_globals_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
globals__unlock_profiler_globals_0_p_0(void);

static void MR_CALL 
globals__lock_profiler_globals_0_p_0(void);

static void MR_CALL 
globals__pre_initialise_mutable_profiler_globals_0_p_0(void);

static void MR_CALL 
globals__initialise_mutable_profiler_globals_0_p_0(void);

static MR_bool MR_CALL 
globals____Unify____globals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
globals____Compare____globals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
globals____Unify____what_to_profile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
globals____Compare____what_to_profile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box globals_scalar_common_1[1][3];


struct globals__vector_common_type_2_0_s {
  const MR_String globals__vector_common_type_2_0__vct_2_f_0;
  const MR_Word globals__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct globals__vector_common_type_2_0_s globals_vector_common_2[6];

struct globals__vector_common_type_3_0_s {
  const MR_String globals__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct globals__vector_common_type_3_0_s globals_vector_common_3[6];



static /* final */ const MR_Box globals_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct globals__vector_common_type_2_0_s globals_vector_common_2[6] = {
  /* row   0 */
  {
    (MR_String) "memory-cells",
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_String) "memory-words",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "real-time",
    (MR_Integer) 5
  },
  /* row   3 */
  {
    (MR_String) "snapshots",
    (MR_Integer) 2
  },
  /* row   4 */
  {
    (MR_String) "user-plus-system-time",
    (MR_Integer) 3
  },
  /* row   5 */
  {
    (MR_String) "user-time",
    (MR_Integer) 4
  },
};

static /* final */ const struct globals__vector_common_type_3_0_s globals_vector_common_3[6] = {
  /* row   0 */   { (MR_String) "memory-words" },
  /* row   1 */   { (MR_String) "memory-cells" },
  /* row   2 */   { (MR_String) "snapshots" },
  /* row   3 */   { (MR_String) "user-plus-system-time" },
  /* row   4 */   { (MR_String) "user-time" },
  /* row   5 */   { (MR_String) "real-time" },
};


#include "array.mh"
#include "bitmap.mh"
#include "globals.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#line 162 "globals.m"
MR_Word globals__mutable_variable_profiler_globals;
#ifdef MR_THREAD_SAFE
    MercuryLock globals__mutable_variable_profiler_globals_lock;
#endif


#line 162 "globals.m"
void 
globals__user_init_pred_51_0(void)
#line 162 "globals.m"
{
#line 162 "globals.m"
	globals__initialise_mutable_profiler_globals_0_p_0();
}


static const MR_FA_TypeInfo_Struct2 globals__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&options__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_PseudoTypeInfo globals__globals__field_types_globals_0_0[2] = {
  (MR_PseudoTypeInfo) (&globals__globals__type_ctor_info_what_to_profile_0),
  (MR_PseudoTypeInfo) (&globals__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0)
};

static const MR_ConstString globals__globals__field_names_globals_0_0[2] = {
  (MR_String) "what_to_profile",
  (MR_String) "option_table"
};

static const MR_DuArgLocn globals__globals__field_locns_globals_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc globals__globals__du_functor_desc_globals_0_0 = {
  (MR_String) "globals",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  globals__globals__field_types_globals_0_0,
  globals__globals__field_names_globals_0_0,
  globals__globals__field_locns_globals_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr globals__globals__du_stag_ordered_globals_0_0[1] = { &globals__globals__du_functor_desc_globals_0_0 };

static const MR_DuPtagLayout globals__globals__du_ptag_ordered_globals_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    globals__globals__du_stag_ordered_globals_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr globals__globals__du_name_ordered_globals_0[1] = { &globals__globals__du_functor_desc_globals_0_0 };

static const MR_Integer globals__globals__functor_number_map_globals_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct globals__globals__type_ctor_info_globals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (globals____Unify____globals_0_0_10001)),
  ((MR_Box) (globals____Compare____globals_0_0_10001)),
  (MR_String) "globals",
  (MR_String) "globals",
  { globals__globals__du_name_ordered_globals_0 },
  { globals__globals__du_ptag_ordered_globals_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  globals__globals__functor_number_map_globals_0,

};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_0 = {
  (MR_String) "memory_words",
  INT32_C(0)
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_1 = {
  (MR_String) "memory_cells",
  INT32_C(1)
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_2 = {
  (MR_String) "memory_snapshots",
  INT32_C(2)
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_3 = {
  (MR_String) "user_plus_system_time",
  INT32_C(3)
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_4 = {
  (MR_String) "user_time",
  INT32_C(4)
};

static const MR_EnumFunctorDesc globals__globals__enum_functor_desc_what_to_profile_0_5 = {
  (MR_String) "real_time",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr globals__globals__enum_ordinal_ordered_what_to_profile_0[6] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (globals____Unify____what_to_profile_0_0_10001)),
  ((MR_Box) (globals____Compare____what_to_profile_0_0_10001)),
  (MR_String) "globals",
  (MR_String) "what_to_profile",
  { globals__globals__enum_name_ordered_what_to_profile_0 },
  { globals__globals__enum_ordinal_ordered_what_to_profile_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  globals__globals__functor_number_map_what_to_profile_0,

};

void MR_CALL 
globals____Compare____what_to_profile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
globals____Unify____what_to_profile_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
globals____Compare____globals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&globals_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
globals____Unify____globals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&globals_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
globals__unsafe_set_profiler_globals_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL globals__unsafe_set_profiler_globals_1_p_0

	MR_Word X;

	X = X_1 ;
		{
globals__mutable_variable_profiler_globals = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
globals__unsafe_get_profiler_globals_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL globals__unsafe_get_profiler_globals_1_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
globals__unlock_profiler_globals_0_p_0(void)
{
{
#define MR_PROC_LABEL globals__unlock_profiler_globals_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
globals__lock_profiler_globals_0_p_0(void)
{
{
#define MR_PROC_LABEL globals__lock_profiler_globals_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
globals__pre_initialise_mutable_profiler_globals_0_p_0(void)
{
{
#define MR_PROC_LABEL globals__pre_initialise_mutable_profiler_globals_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&globals__mutable_variable_profiler_globals_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
globals__initialise_mutable_profiler_globals_0_p_0(void)
{
  MR_Word X_1;
  MR_Word Var_3;

{
#define MR_PROC_LABEL globals__initialise_mutable_profiler_globals_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&globals__mutable_variable_profiler_globals_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  Var_3 = mercury__map__init_0_f_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0));
  {
    X_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, X_1, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
    MR_hl_field(0, X_1, 1) = ((MR_Box) (Var_3));
  }
{
#define MR_PROC_LABEL globals__initialise_mutable_profiler_globals_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__initialise_mutable_profiler_globals_0_p_0

	MR_Word X;

	X = X_1 ;
		{
globals__mutable_variable_profiler_globals = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__initialise_mutable_profiler_globals_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
globals__io_lookup_accumulating_option_4_p_0(
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_Word Globals_8;

{
#define MR_PROC_LABEL globals__io_lookup_accumulating_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_lookup_accumulating_option_4_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	Globals_8  = X;
}
{
#define MR_PROC_LABEL globals__io_lookup_accumulating_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  globals__lookup_accumulating_option_3_p_0(Globals_8, Option_5, Value_6);
}

void MR_CALL 
globals__io_lookup_string_option_4_p_0(
  MR_Word Option_5,
  MR_String * Value_6)
{
  MR_Word Globals_8;

{
#define MR_PROC_LABEL globals__io_lookup_string_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_lookup_string_option_4_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	Globals_8  = X;
}
{
#define MR_PROC_LABEL globals__io_lookup_string_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  globals__lookup_string_option_3_p_0(Globals_8, Option_5, Value_6);
}

void MR_CALL 
globals__io_lookup_int_option_4_p_0(
  MR_Word Option_5,
  MR_Integer * Value_6)
{
  MR_Word Globals_8;

{
#define MR_PROC_LABEL globals__io_lookup_int_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_lookup_int_option_4_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	Globals_8  = X;
}
{
#define MR_PROC_LABEL globals__io_lookup_int_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  globals__lookup_int_option_3_p_0(Globals_8, Option_5, Value_6);
}

void MR_CALL 
globals__io_lookup_bool_option_4_p_0(
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_Word Globals_8;

{
#define MR_PROC_LABEL globals__io_lookup_bool_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_lookup_bool_option_4_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	Globals_8  = X;
}
{
#define MR_PROC_LABEL globals__io_lookup_bool_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  globals__lookup_bool_option_3_p_0(Globals_8, Option_5, Value_6);
}

void MR_CALL 
globals__io_set_option_4_p_0(
  MR_Word Option_5,
  MR_Word OptionData_6)
{
  MR_Word Globals0_8;
  MR_Word OptionTable0_9;
  MR_Word OptionTable_10;
  MR_Word Globals_11;
  MR_Word Var_18;

{
#define MR_PROC_LABEL globals__io_set_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_set_option_4_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	Globals0_8  = X;
}
{
#define MR_PROC_LABEL globals__io_set_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  OptionTable0_9 = ((MR_Word) ((MR_hl_field(0, Globals0_8, (MR_Integer) 1))));
  mercury__map__set_4_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (Option_5)), ((MR_Box) (OptionData_6)), OptionTable0_9, &OptionTable_10);
  Var_18 = ((MR_Unsigned) ((MR_hl_field(0, Globals0_8, (MR_Integer) 0))) & (MR_Integer) 7);
  {
    Globals_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Globals_11, 0) = (MR_Box) ((MR_Unsigned) (Var_18));
    MR_hl_field(0, Globals_11, 1) = ((MR_Box) (OptionTable_10));
  }
{
#define MR_PROC_LABEL globals__io_set_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_set_option_4_p_0

	MR_Word X;

	X = Globals_11 ;
		{
globals__mutable_variable_profiler_globals = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_set_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
globals__io_lookup_option_4_p_0(
  MR_Word Option_5,
  MR_Word * OptionData_6)
{
  MR_Word Globals_8;
  MR_Word OptionTable_9;
  MR_Box conv0_OptionData_6;

{
#define MR_PROC_LABEL globals__io_lookup_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_lookup_option_4_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	Globals_8  = X;
}
{
#define MR_PROC_LABEL globals__io_lookup_option_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  OptionTable_9 = ((MR_Word) ((MR_hl_field(0, Globals_8, (MR_Integer) 1))));
  mercury__map__lookup_3_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_9, ((MR_Box) (Option_5)), &conv0_OptionData_6);
  *OptionData_6 = ((MR_Word) (conv0_OptionData_6));
}

void MR_CALL 
globals__io_set_globals_3_p_0(
  MR_Word Globals_4)
{
{
#define MR_PROC_LABEL globals__io_set_globals_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_set_globals_3_p_0

	MR_Word X;

	X = Globals_4 ;
		{
globals__mutable_variable_profiler_globals = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_set_globals_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
globals__io_get_globals_3_p_0(
  MR_Word * Globals_4)
{
{
#define MR_PROC_LABEL globals__io_get_globals_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_get_globals_3_p_0

	MR_Word X;

		{
X = globals__mutable_variable_profiler_globals;


		;}
#undef MR_PROC_LABEL
	*Globals_4  = X;
}
{
#define MR_PROC_LABEL globals__io_get_globals_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
globals__io_init_3_p_0(
  MR_Word Options_4)
{
  MR_Word Globals_6;

  {
    Globals_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Globals_6, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
    MR_hl_field(0, Globals_6, 1) = ((MR_Box) (Options_4));
  }
{
#define MR_PROC_LABEL globals__io_init_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_init_3_p_0

	MR_Word X;

	X = Globals_6 ;
		{
globals__mutable_variable_profiler_globals = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL globals__io_init_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&globals__mutable_variable_profiler_globals_lock, "globals__mutable_variable_profiler_globals_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
globals__lookup_accumulating_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_12 = ((MR_Word) ((MR_hl_field(0, Globals_4, (MR_Integer) 1))));
  MR_Box conv0_OptionData_7;
  MR_Word Accumulating_8;

  mercury__map__lookup_3_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_12, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    Accumulating_8 = ((MR_Word) ((MR_hl_field(3, OptionData_7, (MR_Integer) 1))));
    *Value_6 = Accumulating_8;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "globals.lookup_accumulating_option: invalid accumulating option");
      return;
    }
}

void MR_CALL 
globals__lookup_string_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_String * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_10 = ((MR_Word) ((MR_hl_field(0, Globals_4, (MR_Integer) 1))));
  MR_Box conv0_OptionData_7;
  MR_String String_8;

  mercury__map__lookup_3_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_10, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    String_8 = ((MR_String) ((MR_hl_field(3, OptionData_7, (MR_Integer) 1))));
    *Value_6 = String_8;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "globals.lookup_string_option: invalid string option");
      return;
    }
}

void MR_CALL 
globals__lookup_int_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Integer * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_10 = ((MR_Word) ((MR_hl_field(0, Globals_4, (MR_Integer) 1))));
  MR_Box conv0_OptionData_7;
  MR_Integer Int_8;

  mercury__map__lookup_3_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_10, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 2);
  if (succeeded)
  {
    Int_8 = ((MR_Integer) ((MR_hl_field(2, OptionData_7, (MR_Integer) 0))));
    *Value_6 = Int_8;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "globals.lookup_int_option: invalid int option");
      return;
    }
}

void MR_CALL 
globals__lookup_bool_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_10 = ((MR_Word) ((MR_hl_field(0, Globals_4, (MR_Integer) 1))));
  MR_Box conv0_OptionData_7;
  MR_Word Bool_8;

  mercury__map__lookup_3_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_10, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    Bool_8 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_7, (MR_Integer) 0))) & (MR_Integer) 1);
    *Value_6 = Bool_8;
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "globals.lookup_bool_option: invalid bool option");
      return;
    }
}

void MR_CALL 
globals__lookup_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * OptionData_6)
{
  MR_Word OptionTable_7 = ((MR_Word) ((MR_hl_field(0, Globals_4, (MR_Integer) 1))));
  MR_Box conv0_OptionData_6;

  mercury__map__lookup_3_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_7, ((MR_Box) (Option_5)), &conv0_OptionData_6);
  *OptionData_6 = ((MR_Word) (conv0_OptionData_6));
}

void MR_CALL 
globals__set_options_3_p_0(
  MR_Word Options_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, (MR_Integer) 0))) & (MR_Integer) 7);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Options_4));
  }
}

void MR_CALL 
globals__set_what_to_profile_3_p_0(
  MR_Word WhatToProfile_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, (MR_Integer) 1))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (WhatToProfile_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
  }
}

void MR_CALL 
globals__get_options_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Globals_3, (MR_Integer) 1))));
}

void MR_CALL 
globals__get_what_to_profile_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(0, Globals_3, (MR_Integer) 0))) & (MR_Integer) 7);
}

void MR_CALL 
globals__what_to_profile_2_p_1(
  MR_String * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  *HeadVar__1_1 = ((&globals_vector_common_3[0 + HeadVar__2_2]))->globals__vector_common_type_3_0__vct_3_f_0;
}

MR_bool MR_CALL 
globals__what_to_profile_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 5;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&globals_vector_common_2[0 + mid_2]))->globals__vector_common_type_2_0__vct_2_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&globals_vector_common_2[0 + mid_2]))->globals__vector_common_type_2_0__vct_2_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
globals____Unify____globals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = globals____Unify____globals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
globals____Compare____globals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  globals____Compare____globals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
globals____Unify____what_to_profile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = globals____Unify____what_to_profile_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
globals____Compare____what_to_profile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  globals____Compare____what_to_profile_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

void mercury__globals__required_init(void)
{
	globals__user_init_pred_51_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__globals__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module globals.
