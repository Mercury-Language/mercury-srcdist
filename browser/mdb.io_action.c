/*
** Automatically generated from `io_action.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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


/* :- module mdb.io_action. */
/* :- implementation. */

/*
INIT mercury__mdb__io_action__init
ENDINIT
*/

#include "mdb.io_action.mih"
#include "mdb.io_action.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_term.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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




static const MR_FA_TypeInfo_Struct1 mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_0_0[3];

static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_0_0[3];

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
  MR_String mdb__io_action__ProcName_1,
  MR_Word mdb__io_action__HeadVar__2_2,
  MR_Word mdb__io_action__Args_3);

static MR_Word MR_CALL 
mdb__io_action__make_no_io_action_0_f_0(void);

static void MR_CALL 
mdb__io_action__pickup_io_action_4_p_0(
  MR_Integer mdb__io_action__SeqNum_1,
  MR_Word * mdb__io_action__MaybeIOAction_2);

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____io_action_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2);

static void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3);


static /* final */ const MR_Box mdb__io_action_scalar_common_1[1][2];




static /* final */ const MR_Box mdb__io_action_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.io_action.mh"

#line 122 "io_action.m"
MR_Word 
MR_IO_ACTION_make_no_io_action(void)
#line 122 "io_action.m"
{
#line 122 "io_action.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__io_action__make_no_io_action_0_f_0();
	return ret_value;
}

#line 128 "io_action.m"
MR_Word 
MR_IO_ACTION_make_yes_io_action(
  MR_String mdb__io_action__ProcName_1,
  MR_Word mdb__io_action__HeadVar__2_2,
  MR_Word mdb__io_action__Args_3)
#line 128 "io_action.m"
{
#line 128 "io_action.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__io_action__make_yes_io_action_3_f_0((MR_String) mdb__io_action__ProcName_1, (MR_Word) mdb__io_action__HeadVar__2_2, (MR_Word) mdb__io_action__Args_3);
	return ret_value;
}


static const MR_FA_TypeInfo_Struct1 mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__io_action__list__ti_list_1univ__type_ctor_info_univ_0
};

static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_0_0[3] = {
  (MR_String) "io_action_proc_name",
  (MR_String) "io_action_pf",
  (MR_String) "io_action_args"
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0 = {
  (MR_String) "io_action",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__io_action__mdb__io_action__field_types_io_action_0_0,
  mdb__io_action__mdb__io_action__field_names_io_action_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_0_0
};

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__io_action__mdb__io_action__du_stag_ordered_io_action_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____io_action_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_action_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_action",
  {     mdb__io_action__mdb__io_action__du_name_ordered_io_action_0 },
  {     mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__io_action__mdb__io_action__functor_number_map_io_action_0
};

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_io_action_range_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__io_action__mdb__io_action__field_names_io_action_range_0_0[2] = {
  (MR_String) "from_io_action",
  (MR_String) "to_io_action"
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0 = {
  (MR_String) "io_action_range",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__io_action__mdb__io_action__field_types_io_action_range_0_0,
  mdb__io_action__mdb__io_action__field_names_io_action_range_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_io_action_range_0_0
};

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__io_action__mdb__io_action__du_stag_ordered_io_action_range_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____io_action_range_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_action_range_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_action_range",
  {     mdb__io_action__mdb__io_action__du_name_ordered_io_action_range_0 },
  {     mdb__io_action__mdb__io_action__du_ptag_ordered_io_action_range_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__io_action__mdb__io_action__functor_number_map_io_action_range_0
};

const MR_TypeCtorInfo_Struct mdb__io_action__mdb__io_action__type_ctor_info_io_seq_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__io_action____Unify____io_seq_num_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____io_seq_num_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "io_seq_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__io_action__mdb__io_action__type_ctor_info_io_action_0
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0 = {
  (MR_String) "tabled",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__io_action__mdb__io_action__field_types_maybe_tabled_io_action_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1 = {
  (MR_String) "untabled",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1
};

static const MR_DuFunctorDescPtr mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1[1] = {
  &mdb__io_action__mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0
};

static const MR_DuPtagLayout mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    mdb__io_action__mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001)),
  ((MR_Box) (mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001)),
  (MR_String) "mdb.io_action",
  (MR_String) "maybe_tabled_io_action",
  {     mdb__io_action__mdb__io_action__du_name_ordered_maybe_tabled_io_action_0 },
  {     mdb__io_action__mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__io_action__mdb__io_action__functor_number_map_maybe_tabled_io_action_0
};

void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0(
  MR_Word * mdb__io_action__HeadVar__1_1,
  MR_Word mdb__io_action__HeadVar__2_2,
  MR_Word mdb__io_action__HeadVar__3_3)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__CastX_8 = (MR_Integer) mdb__io_action__HeadVar__2_2;
    MR_Integer mdb__io_action__CastY_9 = (MR_Integer) mdb__io_action__HeadVar__3_3;

    mdb__io_action__succeeded = (mdb__io_action__CastX_8 == mdb__io_action__CastY_9);
    if (mdb__io_action__succeeded)
      *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mdb__io_action__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mdb__io_action__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mdb__io_action__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word mdb__io_action__Var_11 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__2_2), (MR_Integer) 1);

        if ((mdb__io_action__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__io_action__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mdb__io_action__ArgY1_5 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__3_3), (MR_Integer) 1);

            {
              mdb__io_action____Compare____io_action_0_0(mdb__io_action__HeadVar__1_1, mdb__io_action__Var_11, mdb__io_action__ArgY1_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0(
  MR_Word mdb__io_action__HeadVar__1_1,
  MR_Word mdb__io_action__HeadVar__2_2)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__CastX_7 = (MR_Integer) mdb__io_action__HeadVar__1_1;
    MR_Integer mdb__io_action__CastY_8 = (MR_Integer) mdb__io_action__HeadVar__2_2;

    mdb__io_action__succeeded = (mdb__io_action__CastX_7 == mdb__io_action__CastY_8);
    if (mdb__io_action__succeeded)
      mdb__io_action__succeeded = MR_TRUE;
    else
    if ((mdb__io_action__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__io_action__CastX_5 = (MR_Integer) mdb__io_action__HeadVar__1_1;
        MR_Integer mdb__io_action__CastY_6 = (MR_Integer) mdb__io_action__HeadVar__2_2;

        mdb__io_action__succeeded = (mdb__io_action__CastY_6 == mdb__io_action__CastX_5);
      }
    else
      {
        MR_Word mdb__io_action__ArgX1_3 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__1_1), (MR_Integer) 1);
        MR_Word mdb__io_action__ArgY1_4;

        mdb__io_action__succeeded = ((MR_tag((MR_Word) mdb__io_action__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__io_action__succeeded)
          {
            mdb__io_action__ArgY1_4 = (MR_Word) MR_body(((MR_Word) mdb__io_action__HeadVar__2_2), (MR_Integer) 1);
            {
              mdb__io_action__succeeded = mdb__io_action____Unify____io_action_0_0(mdb__io_action__ArgX1_3, mdb__io_action__ArgY1_4);
            }
          }
      }
    return mdb__io_action__succeeded;
  }
}

void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0(
  MR_Word * mdb__io_action__HeadVar__1_1,
  MR_Integer mdb__io_action__HeadVar__2_2,
  MR_Integer mdb__io_action__HeadVar__3_3)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__Cast_HeadVar1_4 = mdb__io_action__HeadVar__2_2;
    MR_Integer mdb__io_action__Cast_HeadVar2_5 = mdb__io_action__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__io_action__HeadVar__1_1, mdb__io_action__Cast_HeadVar1_4, mdb__io_action__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0(
  MR_Integer mdb__io_action__HeadVar__1_1,
  MR_Integer mdb__io_action__HeadVar__2_2)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__Cast_HeadVar1_3 = mdb__io_action__HeadVar__1_1;
    MR_Integer mdb__io_action__Cast_HeadVar2_4 = mdb__io_action__HeadVar__2_2;

    mdb__io_action__succeeded = (mdb__io_action__Cast_HeadVar1_3 == mdb__io_action__Cast_HeadVar2_4);
    return mdb__io_action__succeeded;
  }
}

void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0(
  MR_Word * mdb__io_action__HeadVar__1_1,
  MR_Word mdb__io_action__HeadVar__2_2,
  MR_Word mdb__io_action__HeadVar__3_3)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__CastX_9 = (MR_Integer) mdb__io_action__HeadVar__2_2;
    MR_Integer mdb__io_action__CastY_10 = (MR_Integer) mdb__io_action__HeadVar__3_3;

    mdb__io_action__succeeded = (mdb__io_action__CastX_9 == mdb__io_action__CastY_10);
    if (mdb__io_action__succeeded)
      *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__io_action__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdb__io_action__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdb__io_action__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdb__io_action__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__io_action__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__io_action__Var_8, mdb__io_action__ArgX1_4, mdb__io_action__ArgY1_5);
        }
        mdb__io_action__succeeded = (mdb__io_action__Var_8 == (MR_Integer) 0);
        mdb__io_action__succeeded = !(mdb__io_action__succeeded);
        if (mdb__io_action__succeeded)
          *mdb__io_action__HeadVar__1_1 = mdb__io_action__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__io_action__HeadVar__1_1, mdb__io_action__ArgX2_6, mdb__io_action__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0(
  MR_Word mdb__io_action__HeadVar__1_1,
  MR_Word mdb__io_action__HeadVar__2_2)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__CastX_7 = (MR_Integer) mdb__io_action__HeadVar__1_1;
    MR_Integer mdb__io_action__CastY_8 = (MR_Integer) mdb__io_action__HeadVar__2_2;

    mdb__io_action__succeeded = (mdb__io_action__CastX_7 == mdb__io_action__CastY_8);
    if (mdb__io_action__succeeded)
      mdb__io_action__succeeded = MR_TRUE;
    else
      {
        MR_Integer mdb__io_action__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdb__io_action__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdb__io_action__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdb__io_action__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));

        mdb__io_action__succeeded = (mdb__io_action__ArgX1_3 == mdb__io_action__ArgY1_4);
        if (mdb__io_action__succeeded)
          mdb__io_action__succeeded = (mdb__io_action__ArgX2_5 == mdb__io_action__ArgY2_6);
      }
    return mdb__io_action__succeeded;
  }
}

void MR_CALL 
mdb__io_action____Compare____io_action_0_0(
  MR_Word * mdb__io_action__HeadVar__1_1,
  MR_Word mdb__io_action__HeadVar__2_2,
  MR_Word mdb__io_action__HeadVar__3_3)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__CastX_12 = (MR_Integer) mdb__io_action__HeadVar__2_2;
    MR_Integer mdb__io_action__CastY_13 = (MR_Integer) mdb__io_action__HeadVar__3_3;

    mdb__io_action__succeeded = (mdb__io_action__CastX_12 == mdb__io_action__CastY_13);
    if (mdb__io_action__succeeded)
      *mdb__io_action__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdb__io_action__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdb__io_action__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__io_action__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__io_action__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__io_action__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__io_action__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__io_action__Var_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__io_action__Var_10, mdb__io_action__ArgX1_4, mdb__io_action__ArgY1_5);
        }
        mdb__io_action__succeeded = (mdb__io_action__Var_10 == (MR_Integer) 0);
        mdb__io_action__succeeded = !(mdb__io_action__succeeded);
        if (mdb__io_action__succeeded)
          *mdb__io_action__HeadVar__1_1 = mdb__io_action__Var_10;
        else
          {
            MR_Word mdb__io_action__Var_11;
            MR_Integer mdb__io_action__Var_17 = (MR_Integer) mdb__io_action__ArgX2_6;
            MR_Integer mdb__io_action__Var_18 = (MR_Integer) mdb__io_action__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__io_action__Var_11, mdb__io_action__Var_17, mdb__io_action__Var_18);
            }
            mdb__io_action__succeeded = (mdb__io_action__Var_11 == (MR_Integer) 0);
            mdb__io_action__succeeded = !(mdb__io_action__succeeded);
            if (mdb__io_action__succeeded)
              *mdb__io_action__HeadVar__1_1 = mdb__io_action__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__io_action_scalar_common_1[0], mdb__io_action__HeadVar__1_1, ((MR_Box) (mdb__io_action__ArgX3_8)), ((MR_Box) (mdb__io_action__ArgY3_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0(
  MR_Word mdb__io_action__HeadVar__1_1,
  MR_Word mdb__io_action__HeadVar__2_2)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Integer mdb__io_action__CastX_9 = (MR_Integer) mdb__io_action__HeadVar__1_1;
    MR_Integer mdb__io_action__CastY_10 = (MR_Integer) mdb__io_action__HeadVar__2_2;

    mdb__io_action__succeeded = (mdb__io_action__CastX_9 == mdb__io_action__CastY_10);
    if (mdb__io_action__succeeded)
      mdb__io_action__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__io_action__TypeInfo_11_11;
        MR_String mdb__io_action__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdb__io_action__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__io_action__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__io_action__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__io_action__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__io_action__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__HeadVar__2_2, (MR_Integer) 2)));

        mdb__io_action__succeeded = (strcmp(mdb__io_action__ArgX1_3, mdb__io_action__ArgY1_4) == 0);
        if (mdb__io_action__succeeded)
          {
            mdb__io_action__succeeded = (mdb__io_action__ArgX2_5 == mdb__io_action__ArgY2_6);
            if (mdb__io_action__succeeded)
              {
                mdb__io_action__TypeInfo_11_11 = (MR_Word) &mdb__io_action_scalar_common_1[0];
                {
                  mdb__io_action__succeeded = mercury__builtin__unify_2_p_0(mdb__io_action__TypeInfo_11_11, ((MR_Box) (mdb__io_action__ArgX3_7)), ((MR_Box) (mdb__io_action__ArgY3_8)));
                }
              }
          }
      }
    return mdb__io_action__succeeded;
  }
}

static MR_Word MR_CALL 
mdb__io_action__make_yes_io_action_3_f_0(
  MR_String mdb__io_action__ProcName_1,
  MR_Word mdb__io_action__HeadVar__2_2,
  MR_Word mdb__io_action__Args_3)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Word mdb__io_action__HeadVar__4_4;

    switch (mdb__io_action__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__io_action__Var_11;

          {
            mdb__io_action__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__io_action__Var_11, 0) = ((MR_Box) (mdb__io_action__ProcName_1));
            MR_hl_field(MR_mktag(0), mdb__io_action__Var_11, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), mdb__io_action__Var_11, 2) = ((MR_Box) (mdb__io_action__Args_3));
          }
          {
            mdb__io_action__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__io_action__HeadVar__4_4, 0) = ((MR_Box) (mdb__io_action__Var_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__io_action__Var_7;

          {
            mdb__io_action__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__io_action__Var_7, 0) = ((MR_Box) (mdb__io_action__ProcName_1));
            MR_hl_field(MR_mktag(0), mdb__io_action__Var_7, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__io_action__Var_7, 2) = ((MR_Box) (mdb__io_action__Args_3));
          }
          {
            mdb__io_action__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__io_action__HeadVar__4_4, 0) = ((MR_Box) (mdb__io_action__Var_7));
          }
        }
        break;
    }
    return mdb__io_action__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__io_action__make_no_io_action_0_f_0(void)
{
  {
    MR_bool mdb__io_action__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mdb__io_action__pickup_io_action_4_p_0(
  MR_Integer mdb__io_action__SeqNum_1,
  MR_Word * mdb__io_action__MaybeIOAction_2)
{
  {
    MR_bool mdb__io_action__succeeded;

{
#define MR_PROC_LABEL mdb__io_action__pickup_io_action_4_p_0

	MR_Integer SeqNum;
	MR_Word MaybeIOAction;
	MR_Word S0;
	MR_Word S;

	SeqNum =  mdb__io_action__SeqNum_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
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
	 *mdb__io_action__MaybeIOAction_2  = MaybeIOAction;
}
  }
}

MR_Word MR_CALL 
mdb__io_action__io_action_to_browser_term_1_f_0(
  MR_Word mdb__io_action__IoAction_3)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Word mdb__io_action__Term_4;
    MR_String mdb__io_action__ProcName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__io_action__IoAction_3, (MR_Integer) 0)));
    MR_Word mdb__io_action__PredFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__IoAction_3, (MR_Integer) 1)));
    MR_Word mdb__io_action__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__io_action__IoAction_3, (MR_Integer) 2)));
    MR_Word mdb__io_action__IsFunc_8;

    switch (mdb__io_action__PredFunc_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mdb__io_action__IsFunc_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        mdb__io_action__IsFunc_8 = (MR_Integer) 0;
        break;
    }
    {
      mdb__io_action__Term_4 = mdb__browser_term__synthetic_term_to_browser_term_3_f_0(mdb__io_action__ProcName_5, mdb__io_action__Args_7, mdb__io_action__IsFunc_8);
    }
    return mdb__io_action__Term_4;
  }
}

void MR_CALL 
mdb__io_action__get_maybe_io_action_4_p_0(
  MR_Integer mdb__io_action__IoActionNum_5,
  MR_Word * mdb__io_action__MaybeTabledIoAction_6)
{
  {
    MR_bool mdb__io_action__succeeded;
    MR_Word mdb__io_action__MaybeIoAction_8;

{
#define MR_PROC_LABEL mdb__io_action__get_maybe_io_action_4_p_0

	MR_Integer SeqNum;
	MR_Word MaybeIOAction;
	MR_Word S0;
	MR_Word S;

	SeqNum =  mdb__io_action__IoActionNum_5 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
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
	 mdb__io_action__MaybeIoAction_8  = MaybeIOAction;
}
    if ((mdb__io_action__MaybeIoAction_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mdb__io_action__MaybeTabledIoAction_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mdb__io_action__IoAction_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__io_action__MaybeIoAction_8, (MR_Integer) 0)));

        *mdb__io_action__MaybeTabledIoAction_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) mdb__io_action__IoAction_9);
      }
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2)
{
  {
    MR_bool mdb__io_action__succeeded;

    {
      mdb__io_action__succeeded = mdb__io_action____Unify____io_action_0_0(((MR_Word) mdb__io_action__wrapper_arg_1), ((MR_Word) mdb__io_action__wrapper_arg_2));
    }
    return mdb__io_action__succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____io_action_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3)
{
  {
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

    {
      mdb__io_action____Compare____io_action_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Word) mdb__io_action__wrapper_arg_2), ((MR_Word) mdb__io_action__wrapper_arg_3));
    }
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____io_action_range_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2)
{
  {
    MR_bool mdb__io_action__succeeded;

    {
      mdb__io_action__succeeded = mdb__io_action____Unify____io_action_range_0_0(((MR_Word) mdb__io_action__wrapper_arg_1), ((MR_Word) mdb__io_action__wrapper_arg_2));
    }
    return mdb__io_action__succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____io_action_range_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3)
{
  {
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

    {
      mdb__io_action____Compare____io_action_range_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Word) mdb__io_action__wrapper_arg_2), ((MR_Word) mdb__io_action__wrapper_arg_3));
    }
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____io_seq_num_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2)
{
  {
    MR_bool mdb__io_action__succeeded;

    {
      mdb__io_action__succeeded = mdb__io_action____Unify____io_seq_num_0_0(((MR_Integer) mdb__io_action__wrapper_arg_1), ((MR_Integer) mdb__io_action__wrapper_arg_2));
    }
    return mdb__io_action__succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____io_seq_num_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3)
{
  {
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

    {
      mdb__io_action____Compare____io_seq_num_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Integer) mdb__io_action__wrapper_arg_2), ((MR_Integer) mdb__io_action__wrapper_arg_3));
    }
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__io_action____Unify____maybe_tabled_io_action_0_0_10001(
  MR_Box mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2)
{
  {
    MR_bool mdb__io_action__succeeded;

    {
      mdb__io_action__succeeded = mdb__io_action____Unify____maybe_tabled_io_action_0_0(((MR_Word) mdb__io_action__wrapper_arg_1), ((MR_Word) mdb__io_action__wrapper_arg_2));
    }
    return mdb__io_action__succeeded;
  }
}

static void MR_CALL 
mdb__io_action____Compare____maybe_tabled_io_action_0_0_10001(
  MR_Box * mdb__io_action__wrapper_arg_1,
  MR_Box mdb__io_action__wrapper_arg_2,
  MR_Box mdb__io_action__wrapper_arg_3)
{
  {
    MR_Word mdb__io_action__conv0_HeadVar__1_1;

    {
      mdb__io_action____Compare____maybe_tabled_io_action_0_0(&mdb__io_action__conv0_HeadVar__1_1, ((MR_Word) mdb__io_action__wrapper_arg_2), ((MR_Word) mdb__io_action__wrapper_arg_3));
    }
    *mdb__io_action__wrapper_arg_1 = ((MR_Box) (mdb__io_action__conv0_HeadVar__1_1));
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

/* :- end_module mdb.io_action. */
