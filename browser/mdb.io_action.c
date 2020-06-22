/*
** Automatically generated from `io_action.m'
** by the Mercury compiler,
** version rotd-2020-06-22
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


// :- module mdb.io_action.
// :- implementation.

/*
INIT mercury__mdb__io_action__init
ENDINIT
*/

#include "mdb.io_action.mih"
#include "mdb.io_action.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdb.browser_term.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"




static const MR_FA_TypeInfo_Struct1 mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_0_0[3];

static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_0_0[3];

static const MR_DuArgLocn mdb__io_action__mdb__io_action__field_locns_io_action_0_0[3];

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0;

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0[1];

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0[1];

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_0[1];

static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_0[1];

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_range_0_0[2];

static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_range_0_0[2];

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0;

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0[1];

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0[1];

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_range_0[1];

static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_range_0[1];

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0[1];

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0;

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1;

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0[1];

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1[1];

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0[2];

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_maybe_tabled_io_action_0[2];

static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_maybe_tabled_io_action_0[2];

static MR_Word MR_CALL 
mdb__io_action__make_yes_io_action_3_f_0(
  MR_String ProcName_1,
  MR_Word HeadVar__2_2,
  MR_Word Args_3);

static MR_Word MR_CALL 
mdb__io_action__make_no_io_action_0_f_0(void);

static void MR_CALL 
mdb__io_action__pickup_io_action_4_p_0(
  MR_Integer SeqNum_1,
  MR_Word * MaybeIOAction_2);

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____io_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__io_action_scalar_common_1[1][2];




static /* final */ const MR_Box mdb__io_action_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.io_action.mh"

#line 123 "io_action.m"
MR_Word 
MR_IO_ACTION_make_no_io_action(void)
#line 123 "io_action.m"
{
#line 123 "io_action.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__io_action__make_no_io_action_0_f_0();
	return ret_value;
}

#line 129 "io_action.m"
MR_Word 
MR_IO_ACTION_make_yes_io_action(
  MR_String ProcName_1,
  MR_Word HeadVar__2_2,
  MR_Word Args_3)
#line 129 "io_action.m"
{
#line 129 "io_action.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__io_action__make_yes_io_action_3_f_0((MR_String) ProcName_1, (MR_Word) HeadVar__2_2, (MR_Word) Args_3);
	return ret_value;
}


static const MR_FA_TypeInfo_Struct1 mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
  }
};

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0)
};

static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_0_0[3] = {
  (MR_String) "io_action_proc_name",
  (MR_String) "io_action_pf",
  (MR_String) "io_action_args"
};

static const MR_DuArgLocn mdb__io_action__mdb__io_action__field_locns_io_action_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0 = {
  (MR_String) "io_action",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__io_action__mdb__io_action__field_types_io_action_0_0,
  mdb__io_action__mdb__io_action__field_names_io_action_0_0,
  mdb__io_action__mdb__io_action__field_locns_io_action_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0
};

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0
};

static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_io_action_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____io_action_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_action_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_action",
  {     mdb__io_action__mdb__io_action__du_name_ordered_io_action_0 },
  {     mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__io_action__mdb__io_action__functor_number_map_io_action_0
};

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_range_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_range_0_0[2] = {
  (MR_String) "from_io_action",
  (MR_String) "to_io_action"
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0 = {
  (MR_String) "io_action_range",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__io_action__mdb__io_action__field_types_io_action_range_0_0,
  mdb__io_action__mdb__io_action__field_names_io_action_range_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0
};

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_io_action_range_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0
};

static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_io_action_range_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____io_action_range_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_action_range_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_action_range",
  {     mdb__io_action__mdb__io_action__du_name_ordered_io_action_range_0 },
  {     mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__io_action__mdb__io_action__functor_number_map_io_action_range_0
};

const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_io_seq_num_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__io_action____Unify____io_seq_num_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_seq_num_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_seq_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0[1] = {
  (MR_PseudoTypeInfo) (&mdb__io_action__mdb__io_action__type_ctor_info_io_action_0)
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0 = {
  (MR_String) "tabled",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1 = {
  (MR_String) "untabled",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0
};

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_name_ordered_maybe_tabled_io_action_0[2] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0,
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1
};

static const MR_Integer mdb__io_action__mdb__io_action__functor_number_map_maybe_tabled_io_action_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_maybe_tabled_io_action_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "maybe_tabled_io_action",
  {     mdb__io_action__mdb__io_action__du_name_ordered_maybe_tabled_io_action_0 },
  {     mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__io_action__mdb__io_action__functor_number_map_maybe_tabled_io_action_0
};

void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

        mdb__io_action____Compare____io_action_0_0(HeadVar__1_1, Var_11, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
        succeeded = mdb__io_action____Unify____io_action_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
}

MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
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
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__io_action____Compare____io_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__io_action_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) (&mdb__io_action_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
mdb__io_action__make_yes_io_action_3_f_0(
  MR_String ProcName_1,
  MR_Word HeadVar__2_2,
  MR_Word Args_3)
{
  {
    MR_Word HeadVar__4_4;

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (ProcName_1));
            MR_hl_field(MR_mktag(0), Var_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Args_3));
          }
          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_7;

          {
            Var_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (ProcName_1));
            MR_hl_field(MR_mktag(0), Var_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (Args_3));
          }
          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_7));
          }
        }
        break;
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__io_action__make_no_io_action_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
mdb__io_action__pickup_io_action_4_p_0(
  MR_Integer SeqNum_1,
  MR_Word * MaybeIOAction_2)
{
  {
{
#define MR_PROC_LABEL mdb__io_action__pickup_io_action_4_p_0

	MR_Integer SeqNum;
	MR_Word MaybeIOAction;
	MR_Word S0;
	MR_Word S;

	SeqNum = SeqNum_1 ;
	S0 = (MR_Word)(MR_Integer) 0 ;
		{
{
    const char  *problem;
    const char  *proc_name;
    MR_bool     io_action_tabled;
    MR_Word     is_func;
    MR_bool     have_arg_infos;
    MR_Word     args;
    MR_String   ProcName;

    MR_save_transient_hp();
    io_action_tabled = MR_trace_get_action(SeqNum, &proc_name, &is_func,
        &have_arg_infos, &args);
    MR_restore_transient_hp();

    /* cast away const */
    ProcName = (MR_String) (MR_Integer) proc_name;
    if (io_action_tabled && have_arg_infos) {
        MaybeIOAction = MR_IO_ACTION_make_yes_io_action(ProcName, is_func,
            args);
    } else {
        MaybeIOAction = MR_IO_ACTION_make_no_io_action();
    }

    S = S0;
}

		;}
#undef MR_PROC_LABEL
	 *MaybeIOAction_2  = MaybeIOAction;
}
  }
}

MR_Word MR_CALL 
mdb__io_action__io_action_to_browser_term_1_f_0(
  MR_Word IoAction_3)
{
  {
    MR_Word Term_4;
    MR_String ProcName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), IoAction_3, (MR_Integer) 0))));
    MR_Word PredFunc_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IoAction_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Args_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IoAction_3, (MR_Integer) 2))));
    MR_Word IsFunc_8;

    switch (PredFunc_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        IsFunc_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        IsFunc_8 = (MR_Integer) 0;
        break;
    }
    Term_4 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(ProcName_5, Args_7, IsFunc_8);
    return Term_4;
  }
}

void MR_CALL 
mdb__io_action__get_maybe_io_action_4_p_0(
  MR_Integer IoActionNum_5,
  MR_Word * MaybeTabledIoAction_6)
{
  {
    MR_Word MaybeIoAction_8;

{
#define MR_PROC_LABEL mdb__io_action__get_maybe_io_action_4_p_0

	MR_Integer SeqNum;
	MR_Word MaybeIOAction;
	MR_Word S0;
	MR_Word S;

	SeqNum = IoActionNum_5 ;
	S0 = (MR_Word)(MR_Integer) 0 ;
		{
{
    const char  *problem;
    const char  *proc_name;
    MR_bool     io_action_tabled;
    MR_Word     is_func;
    MR_bool     have_arg_infos;
    MR_Word     args;
    MR_String   ProcName;

    MR_save_transient_hp();
    io_action_tabled = MR_trace_get_action(SeqNum, &proc_name, &is_func,
        &have_arg_infos, &args);
    MR_restore_transient_hp();

    /* cast away const */
    ProcName = (MR_String) (MR_Integer) proc_name;
    if (io_action_tabled && have_arg_infos) {
        MaybeIOAction = MR_IO_ACTION_make_yes_io_action(ProcName, is_func,
            args);
    } else {
        MaybeIOAction = MR_IO_ACTION_make_no_io_action();
    }

    S = S0;
}

		;}
#undef MR_PROC_LABEL
	 MaybeIoAction_8  = MaybeIOAction;
}
    if ((MaybeIoAction_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeTabledIoAction_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IoAction_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoAction_8, (MR_Integer) 0))));

      *MaybeTabledIoAction_6 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (IoAction_9)));
    }
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__io_action____Unify____io_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____io_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__io_action____Compare____io_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__io_action____Unify____io_action_range_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__io_action____Compare____io_action_range_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__io_action____Unify____io_seq_num_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__io_action____Compare____io_seq_num_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__io_action____Unify____maybe_tabled_io_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__io_action____Compare____maybe_tabled_io_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__io_action__init(void)
{
}

void mercury__mdb__io_action__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_io_action_0);
	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0);
	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_io_seq_num_0);
	MR_register_type_ctor_info(&mdb__io_action__mdb__io_action__type_ctor_info_maybe_tabled_io_action_0);
}

void mercury__mdb__io_action__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__io_action__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.io_action.
