/*
** Automatically generated from `term_rep.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module mdb.term_rep. */
/* :- implementation. */

/*
INIT mercury__mdb__term_rep__init
ENDINIT
*/

#include "mdb.term_rep.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt.mih"
#include "int.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0[1];

static const MR_DuFunctorDesc mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0;

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0[1];

static const MR_DuPtagLayout mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0[1];

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0[1];

static const MR_Integer mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0[1];

static void MR_CALL 
mdb__term_rep__find_functor_6_p_0(
  MR_Integer mdb__term_rep__Current_7,
  MR_Integer mdb__term_rep__NumFunctors_8,
  MR_Word mdb__term_rep__Type_9,
  MR_String mdb__term_rep__FunctorName_10,
  MR_Integer mdb__term_rep__Arity_11,
  MR_Word * mdb__term_rep__MaybeFunctorNum_12);

static MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_10001(
  MR_Box mdb__term_rep__wrapper_arg_1,
  MR_Box mdb__term_rep__wrapper_arg_2);

static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_10001(
  MR_Box * mdb__term_rep__wrapper_arg_1,
  MR_Box mdb__term_rep__wrapper_arg_2,
  MR_Box mdb__term_rep__wrapper_arg_3);


static /* final */ const MR_Box mdb__term_rep_scalar_common_1[3][2];




static /* final */ const MR_Box mdb__term_rep_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "field_pos")),
    ((MR_Box) ((MR_String) "find_functor couldn\'t find functor"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "field_pos")),
    ((MR_Box) ((MR_String) "get_functor_with_names couldn\'t find functor"))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0 = {
  (MR_String) "term_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0[1] = {
  &mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0
};

static const MR_DuPtagLayout mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0[1] = {
  &mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0
};

static const MR_Integer mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mdb__term_rep____Unify____term_rep_0_0_10001)),
  ((MR_Box) (mdb__term_rep____Compare____term_rep_0_0_10001)),
  (MR_String) "mdb.term_rep",
  (MR_String) "term_rep",
  {     mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0 },
  {     mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0
};

void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0(
  MR_Word * mdb__term_rep__HeadVar__1_1,
  MR_Word mdb__term_rep__HeadVar__2_2,
  MR_Word mdb__term_rep__HeadVar__3_3)
{
  {
    MR_bool mdb__term_rep__succeeded;
    MR_Integer mdb__term_rep__CastX_4 = (MR_Integer) mdb__term_rep__HeadVar__2_2;
    MR_Integer mdb__term_rep__CastY_5 = (MR_Integer) mdb__term_rep__HeadVar__3_3;

    mdb__term_rep__succeeded = (mdb__term_rep__CastX_4 == mdb__term_rep__CastY_5);
    if (mdb__term_rep__succeeded)
      *mdb__term_rep__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        {
          mercury__builtin__compare_representation_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, mdb__term_rep__HeadVar__1_1, ((MR_Box) (mdb__term_rep__HeadVar__2_2)), ((MR_Box) (mdb__term_rep__HeadVar__3_3)));
        }
      }
  }
}

MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0(
  MR_Word mdb__term_rep__HeadVar__1_1,
  MR_Word mdb__term_rep__HeadVar__2_2)
{
  {
    MR_bool mdb__term_rep__succeeded;
    MR_Integer mdb__term_rep__CastX_3 = (MR_Integer) mdb__term_rep__HeadVar__1_1;
    MR_Integer mdb__term_rep__CastY_4 = (MR_Integer) mdb__term_rep__HeadVar__2_2;

    mdb__term_rep__succeeded = (mdb__term_rep__CastX_3 == mdb__term_rep__CastY_4);
    if (mdb__term_rep__succeeded)
      mdb__term_rep__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__term_rep__Result_7;

        {
          mercury__builtin__compare_representation_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, &mdb__term_rep__Result_7, ((MR_Box) (mdb__term_rep__HeadVar__1_1)), ((MR_Box) (mdb__term_rep__HeadVar__2_2)));
        }
        mdb__term_rep__succeeded = (mdb__term_rep__Result_7 == (MR_Integer) 0);
      }
    return mdb__term_rep__succeeded;
  }
}

MR_bool MR_CALL 
mdb__term_rep__field_pos_3_p_0(
  MR_String mdb__term_rep__FieldName_4,
  MR_Word mdb__term_rep__Term_5,
  MR_Integer * mdb__term_rep__Pos_6)
{
  {
    MR_bool mdb__term_rep__succeeded;
    MR_Word mdb__term_rep__MaybePos_7;
    MR_Word mdb__term_rep__TypeInfo_33_33;
    MR_Word mdb__term_rep__Univ_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__Term_5, (MR_Integer) 0)));
    MR_Box mdb__term_rep__Value_9;
    MR_String mdb__term_rep__Functor_10;
    MR_Integer mdb__term_rep__Arity_11;
    MR_Word mdb__term_rep__Type_13;
    MR_Word mdb__term_rep___Args_12;
    MR_Box mdb__term_rep__Var_37;
    MR_Integer mdb__term_rep__NumFunctors_14;

    {
      mdb__term_rep__Value_9 = mercury__univ__univ_value_1_f_0(&mdb__term_rep__TypeInfo_33_33, mdb__term_rep__Univ_8);
    }
    {
      mercury__deconstruct__deconstruct_5_p_2(mdb__term_rep__TypeInfo_33_33, mdb__term_rep__Value_9, (MR_Integer) 2, &mdb__term_rep__Functor_10, &mdb__term_rep__Arity_11, &mdb__term_rep___Args_12);
    }
    {
      mdb__term_rep__Type_13 = mercury__type_desc__type_of_1_f_0(mdb__term_rep__TypeInfo_33_33);
    }
    {
      mdb__term_rep__succeeded = mercury__construct__num_functors_1_f_0(mdb__term_rep__Type_13, &mdb__term_rep__NumFunctors_14);
    }
    if (mdb__term_rep__succeeded)
      {
        MR_Word mdb__term_rep__MaybeFunctorNum_15;

        {
          mdb__term_rep__find_functor_6_p_0((MR_Integer) 1, mdb__term_rep__NumFunctors_14, mdb__term_rep__Type_13, mdb__term_rep__Functor_10, mdb__term_rep__Arity_11, &mdb__term_rep__MaybeFunctorNum_15);
        }
        if ((mdb__term_rep__MaybeFunctorNum_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__term_rep_scalar_common_1[1])));
            }
          }
        else
          {
            MR_Integer mdb__term_rep__FunctorNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeFunctorNum_15, (MR_Integer) 0)));
            MR_Word mdb__term_rep__ArgNames_20;
            MR_Integer mdb__term_rep__Var_27 = (mdb__term_rep__FunctorNum_16 - (MR_Integer) 1);
            MR_String mdb__term_rep___FunctorName_17;
            MR_Integer mdb__term_rep___Arity_18;
            MR_Word mdb__term_rep___ArgTypes_19;

            {
              mdb__term_rep__succeeded = mercury__construct__get_functor_with_names_6_p_0(mdb__term_rep__Type_13, mdb__term_rep__Var_27, &mdb__term_rep___FunctorName_17, &mdb__term_rep___Arity_18, &mdb__term_rep___ArgTypes_19, &mdb__term_rep__ArgNames_20);
            }
            if (mdb__term_rep__succeeded)
              {
                MR_Integer mdb__term_rep__Pos0_21;
                MR_Word mdb__term_rep__Var_29;

                {
                  mdb__term_rep__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__term_rep__Var_29, 0) = ((MR_Box) (mdb__term_rep__FieldName_4));
                }
                {
                  mdb__term_rep__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &mdb__term_rep_scalar_common_1[0], mdb__term_rep__ArgNames_20, ((MR_Box) (mdb__term_rep__Var_29)), &mdb__term_rep__Pos0_21);
                }
                if (mdb__term_rep__succeeded)
                  {
                    mdb__term_rep__MaybePos_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__term_rep__MaybePos_7, 0) = ((MR_Box) (mdb__term_rep__Pos0_21));
                  }
                else
                  mdb__term_rep__MaybePos_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__term_rep_scalar_common_1[2])));
                }
              }
          }
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__term_rep_scalar_common_1[1])));
        }
      }
    mdb__term_rep__succeeded = ((MR_tag((MR_Word) mdb__term_rep__MaybePos_7)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__term_rep__succeeded)
      *mdb__term_rep__Pos_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybePos_7, (MR_Integer) 0)));
    return mdb__term_rep__succeeded;
  }
}

static void MR_CALL 
mdb__term_rep__find_functor_6_p_0(
  MR_Integer mdb__term_rep__Current_7,
  MR_Integer mdb__term_rep__NumFunctors_8,
  MR_Word mdb__term_rep__Type_9,
  MR_String mdb__term_rep__FunctorName_10,
  MR_Integer mdb__term_rep__Arity_11,
  MR_Word * mdb__term_rep__MaybeFunctorNum_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__term_rep__succeeded = (mdb__term_rep__Current_7 <= mdb__term_rep__NumFunctors_8);

        if (mdb__term_rep__succeeded)
          {
            MR_Integer mdb__term_rep__Var_14 = (mdb__term_rep__Current_7 - (MR_Integer) 1);
            MR_String mdb__term_rep__Var_18;
            MR_Integer mdb__term_rep__Var_19;
            MR_Word mdb__term_rep__Var_13;

            {
              mdb__term_rep__succeeded = mercury__construct__get_functor_5_p_0(mdb__term_rep__Type_9, mdb__term_rep__Var_14, &mdb__term_rep__Var_18, &mdb__term_rep__Var_19, &mdb__term_rep__Var_13);
            }
            if (mdb__term_rep__succeeded)
              {
                mdb__term_rep__succeeded = (strcmp(mdb__term_rep__FunctorName_10, mdb__term_rep__Var_18) == 0);
                if (mdb__term_rep__succeeded)
                  mdb__term_rep__succeeded = (mdb__term_rep__Arity_11 == mdb__term_rep__Var_19);
              }
            if (mdb__term_rep__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__term_rep__MaybeFunctorNum_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__term_rep__Current_7));
              }
            else
              {
                MR_Integer mdb__term_rep__Var_16 = (mdb__term_rep__Current_7 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer mdb__term_rep__next_value_of_Current_7 = mdb__term_rep__Var_16;

                  mdb__term_rep__Current_7 = mdb__term_rep__next_value_of_Current_7;
                }
                continue;
              }
          }
        else
          *mdb__term_rep__MaybeFunctorNum_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      break;
    }
}

MR_bool MR_CALL 
mdb__term_rep__deref_path_3_p_0(
  MR_Word mdb__term_rep__Term_4,
  MR_Word mdb__term_rep__Path_5,
  MR_Word * mdb__term_rep__SubTerm_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__term_rep__succeeded;

        if ((mdb__term_rep__Path_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdb__term_rep__SubTerm_6 = mdb__term_rep__Term_4;
            mdb__term_rep__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mdb__term_rep__Head_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__term_rep__Path_5, (MR_Integer) 0)));
            MR_Word mdb__term_rep__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__term_rep__Path_5, (MR_Integer) 1)));
            MR_Word mdb__term_rep__NextSubTerm_9;

            {
              mdb__term_rep__succeeded = mdb__term_rep__argument_3_p_0(mdb__term_rep__Term_4, mdb__term_rep__Head_7, &mdb__term_rep__NextSubTerm_9);
            }
            if (mdb__term_rep__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mdb__term_rep__next_value_of_Term_4 = mdb__term_rep__NextSubTerm_9;
                  MR_Word mdb__term_rep__next_value_of_Path_5 = mdb__term_rep__Tail_8;

                  mdb__term_rep__Path_5 = mdb__term_rep__next_value_of_Path_5;
                  mdb__term_rep__Term_4 = mdb__term_rep__next_value_of_Term_4;
                }
                continue;
              }
          }
        return mdb__term_rep__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mdb__term_rep__argument_3_p_0(
  MR_Word mdb__term_rep__Term_4,
  MR_Integer mdb__term_rep__N_5,
  MR_Word * mdb__term_rep__Arg_6)
{
  {
    MR_bool mdb__term_rep__succeeded;
    MR_Word mdb__term_rep__MaybeArg_7;
    MR_Word mdb__term_rep__TypeInfo_16_16;
    MR_Word mdb__term_rep__Univ_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__Term_4, (MR_Integer) 0)));
    MR_Word mdb__term_rep__MaybeSubUniv_9;
    MR_Box mdb__term_rep__Var_12;
    MR_Integer mdb__term_rep__Var_13;

    {
      mdb__term_rep__Var_12 = mercury__univ__univ_value_1_f_0(&mdb__term_rep__TypeInfo_16_16, mdb__term_rep__Univ_8);
    }
    mdb__term_rep__Var_13 = (mdb__term_rep__N_5 - (MR_Integer) 1);
    {
      mercury__deconstruct__arg_cc_3_p_0(mdb__term_rep__TypeInfo_16_16, mdb__term_rep__Var_12, mdb__term_rep__Var_13, &mdb__term_rep__MaybeSubUniv_9);
    }
    if ((mdb__term_rep__MaybeSubUniv_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdb__term_rep__MaybeArg_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mdb__term_rep__TypeInfo_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeSubUniv_9, (MR_Integer) 0)));
        MR_Box mdb__term_rep__SubValue_10 = (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeSubUniv_9, (MR_Integer) 1));
        MR_Word mdb__term_rep__Arg0_11;
        MR_Word mdb__term_rep__Var_15;
        MR_Word mdb__term_rep__Univ_21;
        MR_Box mdb__term_rep__conv0_Univ_21;

        {
          mdb__term_rep__Var_15 = mercury__univ__univ_1_f_0(mdb__term_rep__TypeInfo_17_17, mdb__term_rep__SubValue_10);
        }
        {
          mercury__builtin__cc_multi_equal_2_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (mdb__term_rep__Var_15)), &mdb__term_rep__conv0_Univ_21);
        }
        mdb__term_rep__Univ_21 = ((MR_Word) mdb__term_rep__conv0_Univ_21);
        {
          mdb__term_rep__Arg0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__term_rep__Arg0_11, 0) = ((MR_Box) (mdb__term_rep__Univ_21));
        }
        {
          mdb__term_rep__MaybeArg_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeArg_7, 0) = ((MR_Box) (mdb__term_rep__Arg0_11));
        }
      }
    mdb__term_rep__succeeded = ((MR_tag((MR_Word) mdb__term_rep__MaybeArg_7)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__term_rep__succeeded)
      *mdb__term_rep__Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeArg_7, (MR_Integer) 0)));
    return mdb__term_rep__succeeded;
  }
}

void MR_CALL 
mdb__term_rep__rep_to_univ_2_p_0(
  MR_Word mdb__term_rep__Rep_3,
  MR_Word * mdb__term_rep__Univ_4)
{
  {
    MR_bool mdb__term_rep__succeeded;

    *mdb__term_rep__Univ_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__Rep_3, (MR_Integer) 0)));
  }
}

void MR_CALL 
mdb__term_rep__univ_to_rep_2_p_0(
  MR_Word mdb__term_rep__Univ0_3,
  MR_Word * mdb__term_rep__HeadVar__2_2)
{
  {
    MR_bool mdb__term_rep__succeeded;
    MR_Word mdb__term_rep__Univ_4;
    MR_Box mdb__term_rep__conv0_Univ_4;

    {
      mercury__builtin__cc_multi_equal_2_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (mdb__term_rep__Univ0_3)), &mdb__term_rep__conv0_Univ_4);
    }
    mdb__term_rep__Univ_4 = ((MR_Word) mdb__term_rep__conv0_Univ_4);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *mdb__term_rep__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__term_rep__Univ_4));
    }
  }
}

static MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_10001(
  MR_Box mdb__term_rep__wrapper_arg_1,
  MR_Box mdb__term_rep__wrapper_arg_2)
{
  {
    MR_bool mdb__term_rep__succeeded;

    {
      mdb__term_rep__succeeded = mdb__term_rep____Unify____term_rep_0_0(((MR_Word) mdb__term_rep__wrapper_arg_1), ((MR_Word) mdb__term_rep__wrapper_arg_2));
    }
    return mdb__term_rep__succeeded;
  }
}

static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_10001(
  MR_Box * mdb__term_rep__wrapper_arg_1,
  MR_Box mdb__term_rep__wrapper_arg_2,
  MR_Box mdb__term_rep__wrapper_arg_3)
{
  {
    MR_Word mdb__term_rep__conv0_HeadVar__1_1;

    {
      mdb__term_rep____Compare____term_rep_0_0(&mdb__term_rep__conv0_HeadVar__1_1, ((MR_Word) mdb__term_rep__wrapper_arg_2), ((MR_Word) mdb__term_rep__wrapper_arg_3));
    }
    *mdb__term_rep__wrapper_arg_1 = ((MR_Box) (mdb__term_rep__conv0_HeadVar__1_1));
  }
}

void mercury__mdb__term_rep__init(void)
{
}

void mercury__mdb__term_rep__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0);
}

void mercury__mdb__term_rep__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__term_rep__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdb.term_rep. */
