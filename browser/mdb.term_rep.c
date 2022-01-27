/*
** Automatically generated from `term_rep.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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
#include "mdb.mih"
#include "mdbcomp.mih"
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




#line 92 "mdb.term_rep.c"
static const MR_PseudoTypeInfo mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0[1];

#line 95 "mdb.term_rep.c"
static const MR_DuFunctorDesc mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0;

#line 98 "mdb.term_rep.c"
static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0[1];

#line 101 "mdb.term_rep.c"
static const MR_DuPtagLayout mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0[1];

#line 104 "mdb.term_rep.c"
static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0[1];

#line 107 "mdb.term_rep.c"
static const MR_Integer mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0[1];

#line 110 "mdb.term_rep.c"
static MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_10001(
#line 113 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_1,
#line 115 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_2);

#line 118 "mdb.term_rep.c"
static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_10001(
#line 121 "mdb.term_rep.c"
  MR_Box * mdb__term_rep__wrapper_arg_1,
#line 123 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_2,
#line 125 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_3);

#line 97 "term_rep.m"
static void MR_CALL 
mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_p_0(
#line 97 "term_rep.m"
  MR_Word mdb__term_rep__Rep_3,
#line 97 "term_rep.m"
  MR_Word * mdb__term_rep__HeadVar__2_7);

#line 91 "term_rep.m"
static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_1(
#line 91 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 91 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1);

#line 79 "term_rep.m"
static void MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_1(
#line 79 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 79 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1);

#line 171 "term_rep.m"
static void MR_CALL 
mdb__term_rep__find_functor_6_p_0(
#line 171 "term_rep.m"
  MR_Integer mdb__term_rep__Current_7,
#line 171 "term_rep.m"
  MR_Integer mdb__term_rep__NumFunctors_8,
#line 171 "term_rep.m"
  MR_Word mdb__term_rep__Type_9,
#line 171 "term_rep.m"
  MR_String mdb__term_rep__FunctorName_10,
#line 171 "term_rep.m"
  MR_Integer mdb__term_rep__Arity_11,
#line 171 "term_rep.m"
  MR_Word * mdb__term_rep__MaybeFunctorNum_12);

#line 81 "term_rep.m"
static void MR_CALL 
mdb__term_rep__comp_rep_2_3_p_0(
#line 81 "term_rep.m"
  MR_Word mdb__term_rep__Rep1_4,
#line 81 "term_rep.m"
  MR_Word mdb__term_rep__Rep2_5,
#line 81 "term_rep.m"
  MR_Word * mdb__term_rep__Result_6);

#line 96 "term_rep.m"
static void MR_CALL 
mdb__term_rep__field_pos_3_p_0_1(
#line 96 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 96 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1);

#line 96 "term_rep.m"
static void MR_CALL 
mdb__term_rep__argument_3_p_0_1(
#line 96 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 96 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1);

#line 96 "term_rep.m"
static void MR_CALL 
mdb__term_rep__rep_to_univ_2_p_0_1(
#line 96 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 96 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1);


static /* final */ const MR_Box mdb__term_rep_scalar_common_1[3][2];

static /* final */ const MR_Box mdb__term_rep_scalar_common_2[1][5];

static /* final */ const MR_Box mdb__term_rep_scalar_common_3[1][6];




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

static /* final */ const MR_Box mdb__term_rep_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mdb__term_rep_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};



#include "mdb.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 277 "mdb.term_rep.c"
static const MR_PseudoTypeInfo mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 282 "mdb.term_rep.c"
static const MR_DuFunctorDesc mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0 = {
  (MR_String) "term_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__term_rep__mdb__term_rep__field_types_term_rep_0_0,
  NULL,
  NULL,
  NULL
};

#line 297 "mdb.term_rep.c"
static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0[1] = {
  &mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0
};

#line 302 "mdb.term_rep.c"
static const MR_DuPtagLayout mdb__term_rep__mdb__term_rep__du_ptag_ordered_term_rep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__term_rep__mdb__term_rep__du_stag_ordered_term_rep_0_0
  }
};

#line 311 "mdb.term_rep.c"
static const MR_DuFunctorDescPtr mdb__term_rep__mdb__term_rep__du_name_ordered_term_rep_0[1] = {
  &mdb__term_rep__mdb__term_rep__du_functor_desc_term_rep_0_0
};

#line 316 "mdb.term_rep.c"
static const MR_Integer mdb__term_rep__mdb__term_rep__functor_number_map_term_rep_0[1] = {
  (MR_Integer) 0
};

#line 321 "mdb.term_rep.c"
const MR_TypeCtorInfo_Struct mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU_USEREQ,
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

#line 338 "mdb.term_rep.c"
static MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_10001(
#line 341 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_1,
#line 343 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_2)
#line 345 "mdb.term_rep.c"
{
#line 347 "mdb.term_rep.c"
  {
#line 349 "mdb.term_rep.c"
    MR_bool mdb__term_rep__succeeded;

#line 352 "mdb.term_rep.c"
    {
#line 354 "mdb.term_rep.c"
      mdb__term_rep__succeeded = mdb__term_rep____Unify____term_rep_0_0(((MR_Word) mdb__term_rep__wrapper_arg_1), ((MR_Word) mdb__term_rep__wrapper_arg_2));
    }
#line 357 "mdb.term_rep.c"
    return mdb__term_rep__succeeded;
#line 359 "mdb.term_rep.c"
  }
#line 361 "mdb.term_rep.c"
}

#line 364 "mdb.term_rep.c"
static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_10001(
#line 367 "mdb.term_rep.c"
  MR_Box * mdb__term_rep__wrapper_arg_1,
#line 369 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_2,
#line 371 "mdb.term_rep.c"
  MR_Box mdb__term_rep__wrapper_arg_3)
#line 373 "mdb.term_rep.c"
{
#line 375 "mdb.term_rep.c"
  {
#line 377 "mdb.term_rep.c"
    MR_Word mdb__term_rep__conv0_HeadVar__1_1;

#line 380 "mdb.term_rep.c"
    {
#line 382 "mdb.term_rep.c"
      mdb__term_rep____Compare____term_rep_0_0(&mdb__term_rep__conv0_HeadVar__1_1, ((MR_Word) mdb__term_rep__wrapper_arg_2), ((MR_Word) mdb__term_rep__wrapper_arg_3));
    }
#line 385 "mdb.term_rep.c"
    *mdb__term_rep__wrapper_arg_1 = ((MR_Box) (mdb__term_rep__conv0_HeadVar__1_1));
#line 387 "mdb.term_rep.c"
  }
#line 389 "mdb.term_rep.c"
}

#line 97 "term_rep.m"
static void MR_CALL 
mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_p_0(
#line 97 "term_rep.m"
  MR_Word mdb__term_rep__Rep_3,
#line 97 "term_rep.m"
  MR_Word * mdb__term_rep__HeadVar__2_7)
#line 97 "term_rep.m"
{
#line 97 "term_rep.m"
  {
#line 97 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;

#line 97 "term_rep.m"
    *mdb__term_rep__HeadVar__2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__Rep_3, (MR_Integer) 0)));
#line 97 "term_rep.m"
  }
#line 97 "term_rep.m"
}

#line 91 "term_rep.m"
static void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0_1(
#line 91 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 91 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1)
#line 91 "term_rep.m"
{
#line 91 "term_rep.m"
  {
#line 91 "term_rep.m"
    MR_Box mdb__term_rep__closure = mdb__term_rep__closure_arg;
#line 91 "term_rep.m"
    MR_Word mdb__term_rep__conv0_Result_6;

#line 91 "term_rep.m"
    {
#line 91 "term_rep.m"
      mdb__term_rep__comp_rep_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__closure, (MR_Integer) 4))), &mdb__term_rep__conv0_Result_6);
    }
#line 91 "term_rep.m"
    *mdb__term_rep__wrapper_arg_1 = ((MR_Box) (mdb__term_rep__conv0_Result_6));
#line 91 "term_rep.m"
  }
#line 91 "term_rep.m"
}

#line 70 "term_rep.m"
void MR_CALL 
mdb__term_rep____Compare____term_rep_0_0(
#line 70 "term_rep.m"
  MR_Word * mdb__term_rep__HeadVar__1_1,
#line 70 "term_rep.m"
  MR_Word mdb__term_rep__HeadVar__2_2,
#line 70 "term_rep.m"
  MR_Word mdb__term_rep__HeadVar__3_3)
#line 70 "term_rep.m"
{
#line 70 "term_rep.m"
  {
#line 70 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;
#line 70 "term_rep.m"
    MR_Integer mdb__term_rep__CastX_4 = (MR_Integer) mdb__term_rep__HeadVar__2_2;
#line 70 "term_rep.m"
    MR_Integer mdb__term_rep__CastY_5 = (MR_Integer) mdb__term_rep__HeadVar__3_3;

#line 70 "term_rep.m"
    mdb__term_rep__succeeded = (mdb__term_rep__CastX_4 == mdb__term_rep__CastY_5);
#line 70 "term_rep.m"
    if (mdb__term_rep__succeeded)
#line 70 "term_rep.m"
      *mdb__term_rep__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "term_rep.m"
    else
#line 90 "term_rep.m"
      {
#line 90 "term_rep.m"
        MR_Word mdb__term_rep__V_9_9;
#line 91 "term_rep.m"
        MR_Box mdb__term_rep__conv1_HeadVar__1_1;

#line 91 "term_rep.m"
        {
#line 91 "term_rep.m"
          mdb__term_rep__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 91 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_9_9, 0) = ((MR_Box) (&mdb__term_rep_scalar_common_3[0]));
#line 91 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_9_9, 1) = ((MR_Box) (mdb__term_rep____Compare____term_rep_0_0_1));
#line 91 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 91 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_9_9, 3) = ((MR_Box) (mdb__term_rep__HeadVar__2_2));
#line 91 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_9_9, 4) = ((MR_Box) (mdb__term_rep__HeadVar__3_3));
#line 91 "term_rep.m"
        }
#line 91 "term_rep.m"
        {
#line 91 "term_rep.m"
          mdb__term_rep__conv1_HeadVar__1_1 = mercury__builtin__promise_only_solution_1_f_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_comparison_result_0, mdb__term_rep__V_9_9);
        }
#line 91 "term_rep.m"
        *mdb__term_rep__HeadVar__1_1 = ((MR_Word) mdb__term_rep__conv1_HeadVar__1_1);
#line 90 "term_rep.m"
      }
#line 70 "term_rep.m"
  }
#line 70 "term_rep.m"
}

#line 79 "term_rep.m"
static void MR_CALL 
mdb__term_rep____Unify____term_rep_0_0_1(
#line 79 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 79 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1)
#line 79 "term_rep.m"
{
#line 79 "term_rep.m"
  {
#line 79 "term_rep.m"
    MR_Box mdb__term_rep__closure = mdb__term_rep__closure_arg;
#line 79 "term_rep.m"
    MR_Word mdb__term_rep__conv0_Result_6;

#line 79 "term_rep.m"
    {
#line 79 "term_rep.m"
      mdb__term_rep__comp_rep_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__closure, (MR_Integer) 4))), &mdb__term_rep__conv0_Result_6);
    }
#line 79 "term_rep.m"
    *mdb__term_rep__wrapper_arg_1 = ((MR_Box) (mdb__term_rep__conv0_Result_6));
#line 79 "term_rep.m"
  }
#line 79 "term_rep.m"
}

#line 70 "term_rep.m"
MR_bool MR_CALL 
mdb__term_rep____Unify____term_rep_0_0(
#line 70 "term_rep.m"
  MR_Word mdb__term_rep__HeadVar__1_1,
#line 70 "term_rep.m"
  MR_Word mdb__term_rep__HeadVar__2_2)
#line 70 "term_rep.m"
{
#line 70 "term_rep.m"
  {
#line 70 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;
#line 70 "term_rep.m"
    MR_Integer mdb__term_rep__CastX_3 = (MR_Integer) mdb__term_rep__HeadVar__1_1;
#line 70 "term_rep.m"
    MR_Integer mdb__term_rep__CastY_4 = (MR_Integer) mdb__term_rep__HeadVar__2_2;

#line 70 "term_rep.m"
    mdb__term_rep__succeeded = (mdb__term_rep__CastX_3 == mdb__term_rep__CastY_4);
#line 70 "term_rep.m"
    if (mdb__term_rep__succeeded)
#line 70 "term_rep.m"
      mdb__term_rep__succeeded = MR_TRUE;
#line 70 "term_rep.m"
    else
#line 78 "term_rep.m"
      {
#line 78 "term_rep.m"
        MR_Word mdb__term_rep__V_8_8;
#line 78 "term_rep.m"
        MR_Word mdb__term_rep__V_11_11;
#line 79 "term_rep.m"
        MR_Box mdb__term_rep__conv1_V_11_11;

#line 79 "term_rep.m"
        {
#line 79 "term_rep.m"
          mdb__term_rep__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 79 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_8_8, 0) = ((MR_Box) (&mdb__term_rep_scalar_common_3[0]));
#line 79 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_8_8, 1) = ((MR_Box) (mdb__term_rep____Unify____term_rep_0_0_1));
#line 79 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 79 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_8_8, 3) = ((MR_Box) (mdb__term_rep__HeadVar__1_1));
#line 79 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__V_8_8, 4) = ((MR_Box) (mdb__term_rep__HeadVar__2_2));
#line 79 "term_rep.m"
        }
#line 79 "term_rep.m"
        {
#line 79 "term_rep.m"
          mdb__term_rep__conv1_V_11_11 = mercury__builtin__promise_only_solution_1_f_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_comparison_result_0, mdb__term_rep__V_8_8);
        }
#line 79 "term_rep.m"
        mdb__term_rep__V_11_11 = ((MR_Word) mdb__term_rep__conv1_V_11_11);
#line 79 "term_rep.m"
        mdb__term_rep__succeeded = ((MR_Integer) 0 == mdb__term_rep__V_11_11);
#line 78 "term_rep.m"
      }
#line 70 "term_rep.m"
    return mdb__term_rep__succeeded;
#line 70 "term_rep.m"
  }
#line 70 "term_rep.m"
}

#line 171 "term_rep.m"
static void MR_CALL 
mdb__term_rep__find_functor_6_p_0(
#line 171 "term_rep.m"
  MR_Integer mdb__term_rep__Current_7,
#line 171 "term_rep.m"
  MR_Integer mdb__term_rep__NumFunctors_8,
#line 171 "term_rep.m"
  MR_Word mdb__term_rep__Type_9,
#line 171 "term_rep.m"
  MR_String mdb__term_rep__FunctorName_10,
#line 171 "term_rep.m"
  MR_Integer mdb__term_rep__Arity_11,
#line 171 "term_rep.m"
  MR_Word * mdb__term_rep__MaybeFunctorNum_12)
#line 171 "term_rep.m"
{
#line 183 "term_rep.m"
  while (MR_TRUE)
#line 183 "term_rep.m"
    {
#line 183 "term_rep.m"
      /* tailcall optimized into a loop */
#line 183 "term_rep.m"
      {
#line 183 "term_rep.m"
        MR_bool mdb__term_rep__succeeded = (mdb__term_rep__Current_7 <= mdb__term_rep__NumFunctors_8);

#line 183 "term_rep.m"
        if (mdb__term_rep__succeeded)
#line 179 "term_rep.m"
          {
#line 177 "term_rep.m"
            MR_Integer mdb__term_rep__V_14_14 = (mdb__term_rep__Current_7 - (MR_Integer) 1);
#line 177 "term_rep.m"
            MR_String mdb__term_rep__V_18_18;
#line 177 "term_rep.m"
            MR_Integer mdb__term_rep__V_19_19;
#line 177 "term_rep.m"
            MR_Word mdb__term_rep__V_13_13;

#line 177 "term_rep.m"
            {
#line 177 "term_rep.m"
              mdb__term_rep__succeeded = mercury__construct__get_functor_5_p_0(mdb__term_rep__Type_9, mdb__term_rep__V_14_14, &mdb__term_rep__V_18_18, &mdb__term_rep__V_19_19, &mdb__term_rep__V_13_13);
            }
#line 177 "term_rep.m"
            if (mdb__term_rep__succeeded)
#line 177 "term_rep.m"
              {
#line 177 "term_rep.m"
                mdb__term_rep__succeeded = (strcmp(mdb__term_rep__FunctorName_10, mdb__term_rep__V_18_18) == 0);
#line 177 "term_rep.m"
                if (mdb__term_rep__succeeded)
#line 177 "term_rep.m"
                  mdb__term_rep__succeeded = (mdb__term_rep__Arity_11 == mdb__term_rep__V_19_19);
#line 177 "term_rep.m"
              }
#line 179 "term_rep.m"
            if (mdb__term_rep__succeeded)
#line 178 "term_rep.m"
              {
#line 178 "term_rep.m"
                MR_Word base;
#line 178 "term_rep.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "term_rep.m"
                *mdb__term_rep__MaybeFunctorNum_12 = base;
#line 178 "term_rep.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__term_rep__Current_7));
#line 178 "term_rep.m"
              }
#line 179 "term_rep.m"
            else
#line 180 "term_rep.m"
              {
#line 180 "term_rep.m"
                MR_Integer mdb__term_rep__V_16_16 = (mdb__term_rep__Current_7 + (MR_Integer) 1);

#line 180 "term_rep.m"
                /* direct tailcall eliminated */
#line 180 "term_rep.m"
                {
#line 180 "term_rep.m"
                  MR_Integer mdb__term_rep__Current__tmp_copy_7 = mdb__term_rep__V_16_16;

#line 180 "term_rep.m"
                  mdb__term_rep__Current_7 = mdb__term_rep__Current__tmp_copy_7;
#line 180 "term_rep.m"
                }
#line 180 "term_rep.m"
                continue;
#line 180 "term_rep.m"
              }
#line 179 "term_rep.m"
          }
#line 183 "term_rep.m"
        else
#line 184 "term_rep.m"
          *mdb__term_rep__MaybeFunctorNum_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "term_rep.m"
      }
#line 183 "term_rep.m"
      break;
#line 183 "term_rep.m"
    }
#line 171 "term_rep.m"
}

#line 81 "term_rep.m"
static void MR_CALL 
mdb__term_rep__comp_rep_2_3_p_0(
#line 81 "term_rep.m"
  MR_Word mdb__term_rep__Rep1_4,
#line 81 "term_rep.m"
  MR_Word mdb__term_rep__Rep2_5,
#line 81 "term_rep.m"
  MR_Word * mdb__term_rep__Result_6)
#line 81 "term_rep.m"
{
#line 85 "term_rep.m"
  {
#line 85 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;

#line 85 "term_rep.m"
    {
#line 85 "term_rep.m"
      mercury__builtin__compare_representation_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, mdb__term_rep__Result_6, ((MR_Box) (mdb__term_rep__Rep1_4)), ((MR_Box) (mdb__term_rep__Rep2_5)));
#line 85 "term_rep.m"
      return;
    }
#line 85 "term_rep.m"
  }
#line 81 "term_rep.m"
}

#line 96 "term_rep.m"
static void MR_CALL 
mdb__term_rep__field_pos_3_p_0_1(
#line 96 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 96 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1)
#line 96 "term_rep.m"
{
#line 96 "term_rep.m"
  {
#line 96 "term_rep.m"
    MR_Box mdb__term_rep__closure = mdb__term_rep__closure_arg;
#line 96 "term_rep.m"
    MR_Word mdb__term_rep__conv0_HeadVar__2_7;

#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__closure, (MR_Integer) 3))), &mdb__term_rep__conv0_HeadVar__2_7);
    }
#line 96 "term_rep.m"
    *mdb__term_rep__wrapper_arg_1 = ((MR_Box) (mdb__term_rep__conv0_HeadVar__2_7));
#line 96 "term_rep.m"
  }
#line 96 "term_rep.m"
}

#line 51 "term_rep.m"
MR_bool MR_CALL 
mdb__term_rep__field_pos_3_p_0(
#line 51 "term_rep.m"
  MR_String mdb__term_rep__FieldName_4,
#line 51 "term_rep.m"
  MR_Word mdb__term_rep__Term_5,
#line 51 "term_rep.m"
  MR_Integer * mdb__term_rep__Pos_6)
#line 51 "term_rep.m"
{
#line 132 "term_rep.m"
  {
#line 132 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;
#line 132 "term_rep.m"
    MR_Word mdb__term_rep__MaybePos_7;
#line 138 "term_rep.m"
    MR_Word mdb__term_rep__TypeInfo_33_33;
#line 138 "term_rep.m"
    MR_Word mdb__term_rep__Univ_8;
#line 138 "term_rep.m"
    MR_Box mdb__term_rep__Value_9;
#line 138 "term_rep.m"
    MR_String mdb__term_rep__Functor_10;
#line 138 "term_rep.m"
    MR_Integer mdb__term_rep__Arity_11;
#line 138 "term_rep.m"
    MR_Word mdb__term_rep__Type_13;
#line 138 "term_rep.m"
    MR_Word mdb__term_rep__V_41_41;
#line 96 "term_rep.m"
    MR_Box mdb__term_rep__conv1_Univ_8;
#line 140 "term_rep.m"
    MR_Word mdb__term_rep___Args_12;
#line 141 "term_rep.m"
    MR_Box mdb__term_rep__V_37_37;
#line 805 "mdb.term_rep.c"
    MR_Integer mdb__term_rep__NumFunctors_14;

#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_41_41, 0) = ((MR_Box) (&mdb__term_rep_scalar_common_2[0]));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_41_41, 1) = ((MR_Box) (mdb__term_rep__field_pos_3_p_0_1));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_41_41, 3) = ((MR_Box) (mdb__term_rep__Term_5));
#line 96 "term_rep.m"
    }
#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__conv1_Univ_8 = mercury__builtin__promise_only_solution_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__term_rep__V_41_41);
    }
#line 96 "term_rep.m"
    mdb__term_rep__Univ_8 = ((MR_Word) mdb__term_rep__conv1_Univ_8);
#line 139 "term_rep.m"
    {
#line 139 "term_rep.m"
      mdb__term_rep__Value_9 = mercury__univ__univ_value_1_f_0(&mdb__term_rep__TypeInfo_33_33, mdb__term_rep__Univ_8);
    }
#line 140 "term_rep.m"
    {
#line 140 "term_rep.m"
      mercury__deconstruct__deconstruct_5_p_2(mdb__term_rep__TypeInfo_33_33, mdb__term_rep__Value_9, (MR_Integer) 2, &mdb__term_rep__Functor_10, &mdb__term_rep__Arity_11, &mdb__term_rep___Args_12);
    }
#line 141 "term_rep.m"
    {
#line 141 "term_rep.m"
      mdb__term_rep__Type_13 = mercury__type_desc__type_of_1_f_0(mdb__term_rep__TypeInfo_33_33);
    }
#line 142 "term_rep.m"
    {
#line 142 "term_rep.m"
      mdb__term_rep__succeeded = mercury__construct__num_functors_1_f_0(mdb__term_rep__Type_13, &mdb__term_rep__NumFunctors_14);
    }
#line 849 "mdb.term_rep.c"
    if (mdb__term_rep__succeeded)
#line 851 "mdb.term_rep.c"
      {
#line 853 "mdb.term_rep.c"
        MR_Word mdb__term_rep__MaybeFunctorNum_15;

#line 143 "term_rep.m"
        {
#line 143 "term_rep.m"
          mdb__term_rep__find_functor_6_p_0((MR_Integer) 1, mdb__term_rep__NumFunctors_14, mdb__term_rep__Type_13, mdb__term_rep__Functor_10, mdb__term_rep__Arity_11, &mdb__term_rep__MaybeFunctorNum_15);
        }
#line 163 "term_rep.m"
        if ((mdb__term_rep__MaybeFunctorNum_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "term_rep.m"
          {
#line 165 "term_rep.m"
            {
#line 165 "term_rep.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__term_rep_scalar_common_1[1])));
            }
#line 164 "term_rep.m"
          }
#line 163 "term_rep.m"
        else
#line 149 "term_rep.m"
          {
#line 149 "term_rep.m"
            MR_Integer mdb__term_rep__FunctorNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeFunctorNum_15, (MR_Integer) 0)));
#line 159 "term_rep.m"
            MR_Word mdb__term_rep__ArgNames_20;
#line 151 "term_rep.m"
            MR_Integer mdb__term_rep__V_27_27 = (mdb__term_rep__FunctorNum_16 - (MR_Integer) 1);
#line 151 "term_rep.m"
            MR_String mdb__term_rep___FunctorName_17;
#line 151 "term_rep.m"
            MR_Integer mdb__term_rep___Arity_18;
#line 151 "term_rep.m"
            MR_Word mdb__term_rep___ArgTypes_19;

#line 151 "term_rep.m"
            {
#line 151 "term_rep.m"
              mdb__term_rep__succeeded = mercury__construct__get_functor_with_names_6_p_0(mdb__term_rep__Type_13, mdb__term_rep__V_27_27, &mdb__term_rep___FunctorName_17, &mdb__term_rep___Arity_18, &mdb__term_rep___ArgTypes_19, &mdb__term_rep__ArgNames_20);
            }
#line 159 "term_rep.m"
            if (mdb__term_rep__succeeded)
#line 156 "term_rep.m"
              {
#line 156 "term_rep.m"
                MR_Integer mdb__term_rep__Pos0_21;
#line 154 "term_rep.m"
                MR_Word mdb__term_rep__V_29_29;

#line 154 "term_rep.m"
                {
#line 154 "term_rep.m"
                  mdb__term_rep__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 154 "term_rep.m"
                  MR_hl_field(MR_mktag(1), mdb__term_rep__V_29_29, 0) = ((MR_Box) (mdb__term_rep__FieldName_4));
#line 154 "term_rep.m"
                }
#line 154 "term_rep.m"
                {
#line 154 "term_rep.m"
                  mdb__term_rep__succeeded = mercury__list__nth_member_search_3_p_0((MR_Word) &mdb__term_rep_scalar_common_1[0], mdb__term_rep__ArgNames_20, ((MR_Box) (mdb__term_rep__V_29_29)), &mdb__term_rep__Pos0_21);
                }
#line 156 "term_rep.m"
                if (mdb__term_rep__succeeded)
#line 155 "term_rep.m"
                  {
#line 155 "term_rep.m"
                    mdb__term_rep__MaybePos_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 155 "term_rep.m"
                    MR_hl_field(MR_mktag(1), mdb__term_rep__MaybePos_7, 0) = ((MR_Box) (mdb__term_rep__Pos0_21));
#line 155 "term_rep.m"
                  }
#line 156 "term_rep.m"
                else
#line 157 "term_rep.m"
                  mdb__term_rep__MaybePos_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "term_rep.m"
              }
#line 159 "term_rep.m"
            else
#line 160 "term_rep.m"
              {
#line 160 "term_rep.m"
                {
#line 160 "term_rep.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__term_rep_scalar_common_1[2])));
                }
#line 160 "term_rep.m"
              }
#line 149 "term_rep.m"
          }
#line 945 "mdb.term_rep.c"
      }
#line 947 "mdb.term_rep.c"
    else
#line 949 "mdb.term_rep.c"
      {
#line 165 "term_rep.m"
        {
#line 165 "term_rep.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__term_rep_scalar_common_1[1])));
        }
#line 956 "mdb.term_rep.c"
      }
#line 169 "term_rep.m"
    mdb__term_rep__succeeded = ((MR_tag((MR_Word) mdb__term_rep__MaybePos_7)) == (MR_mktag((MR_Integer) 1)));
#line 169 "term_rep.m"
    if (mdb__term_rep__succeeded)
#line 169 "term_rep.m"
      *mdb__term_rep__Pos_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybePos_7, (MR_Integer) 0)));
#line 132 "term_rep.m"
    return mdb__term_rep__succeeded;
#line 132 "term_rep.m"
  }
#line 51 "term_rep.m"
}

#line 45 "term_rep.m"
MR_bool MR_CALL 
mdb__term_rep__deref_path_3_p_0(
#line 45 "term_rep.m"
  MR_Word mdb__term_rep__Term_4,
#line 45 "term_rep.m"
  MR_Word mdb__term_rep__Path_5,
#line 45 "term_rep.m"
  MR_Word * mdb__term_rep__SubTerm_6)
#line 45 "term_rep.m"
{
#line 102 "term_rep.m"
  while (MR_TRUE)
#line 102 "term_rep.m"
    {
#line 102 "term_rep.m"
      /* tailcall optimized into a loop */
#line 102 "term_rep.m"
      {
#line 102 "term_rep.m"
        MR_bool mdb__term_rep__succeeded;

#line 102 "term_rep.m"
        if ((mdb__term_rep__Path_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 103 "term_rep.m"
          {
#line 103 "term_rep.m"
            *mdb__term_rep__SubTerm_6 = mdb__term_rep__Term_4;
#line 103 "term_rep.m"
            mdb__term_rep__succeeded = MR_TRUE;
#line 103 "term_rep.m"
          }
#line 102 "term_rep.m"
        else
#line 105 "term_rep.m"
          {
#line 105 "term_rep.m"
            MR_Integer mdb__term_rep__Head_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__term_rep__Path_5, (MR_Integer) 0)));
#line 105 "term_rep.m"
            MR_Word mdb__term_rep__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__term_rep__Path_5, (MR_Integer) 1)));
#line 105 "term_rep.m"
            MR_Word mdb__term_rep__NextSubTerm_9;

#line 106 "term_rep.m"
            {
#line 106 "term_rep.m"
              mdb__term_rep__succeeded = mdb__term_rep__argument_3_p_0(mdb__term_rep__Term_4, mdb__term_rep__Head_7, &mdb__term_rep__NextSubTerm_9);
            }
#line 105 "term_rep.m"
            if (mdb__term_rep__succeeded)
#line 107 "term_rep.m"
              {
#line 107 "term_rep.m"
                /* direct tailcall eliminated */
#line 107 "term_rep.m"
                {
#line 107 "term_rep.m"
                  MR_Word mdb__term_rep__Term__tmp_copy_4 = mdb__term_rep__NextSubTerm_9;
#line 107 "term_rep.m"
                  MR_Word mdb__term_rep__Path__tmp_copy_5 = mdb__term_rep__Tail_8;

#line 107 "term_rep.m"
                  mdb__term_rep__Path_5 = mdb__term_rep__Path__tmp_copy_5;
#line 107 "term_rep.m"
                  mdb__term_rep__Term_4 = mdb__term_rep__Term__tmp_copy_4;
#line 107 "term_rep.m"
                }
#line 107 "term_rep.m"
                continue;
#line 107 "term_rep.m"
              }
#line 105 "term_rep.m"
          }
#line 102 "term_rep.m"
        return mdb__term_rep__succeeded;
#line 102 "term_rep.m"
      }
#line 102 "term_rep.m"
      break;
#line 102 "term_rep.m"
    }
#line 45 "term_rep.m"
}

#line 96 "term_rep.m"
static void MR_CALL 
mdb__term_rep__argument_3_p_0_1(
#line 96 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 96 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1)
#line 96 "term_rep.m"
{
#line 96 "term_rep.m"
  {
#line 96 "term_rep.m"
    MR_Box mdb__term_rep__closure = mdb__term_rep__closure_arg;
#line 96 "term_rep.m"
    MR_Word mdb__term_rep__conv0_HeadVar__2_7;

#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__closure, (MR_Integer) 3))), &mdb__term_rep__conv0_HeadVar__2_7);
    }
#line 96 "term_rep.m"
    *mdb__term_rep__wrapper_arg_1 = ((MR_Box) (mdb__term_rep__conv0_HeadVar__2_7));
#line 96 "term_rep.m"
  }
#line 96 "term_rep.m"
}

#line 43 "term_rep.m"
MR_bool MR_CALL 
mdb__term_rep__argument_3_p_0(
#line 43 "term_rep.m"
  MR_Word mdb__term_rep__Term_4,
#line 43 "term_rep.m"
  MR_Integer mdb__term_rep__N_5,
#line 43 "term_rep.m"
  MR_Word * mdb__term_rep__Arg_6)
#line 43 "term_rep.m"
{
#line 110 "term_rep.m"
  {
#line 110 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;
#line 110 "term_rep.m"
    MR_Word mdb__term_rep__MaybeArg_7;
#line 116 "term_rep.m"
    MR_Word mdb__term_rep__TypeInfo_16_16;
#line 116 "term_rep.m"
    MR_Word mdb__term_rep__Univ_8;
#line 116 "term_rep.m"
    MR_Word mdb__term_rep__MaybeSubUniv_9;
#line 116 "term_rep.m"
    MR_Box mdb__term_rep__V_12_12;
#line 116 "term_rep.m"
    MR_Integer mdb__term_rep__V_13_13;
#line 116 "term_rep.m"
    MR_Word mdb__term_rep__V_21_21;
#line 96 "term_rep.m"
    MR_Box mdb__term_rep__conv1_Univ_8;

#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_21_21, 0) = ((MR_Box) (&mdb__term_rep_scalar_common_2[0]));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_21_21, 1) = ((MR_Box) (mdb__term_rep__argument_3_p_0_1));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_21_21, 3) = ((MR_Box) (mdb__term_rep__Term_4));
#line 96 "term_rep.m"
    }
#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__conv1_Univ_8 = mercury__builtin__promise_only_solution_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__term_rep__V_21_21);
    }
#line 96 "term_rep.m"
    mdb__term_rep__Univ_8 = ((MR_Word) mdb__term_rep__conv1_Univ_8);
#line 120 "term_rep.m"
    {
#line 120 "term_rep.m"
      mdb__term_rep__V_12_12 = mercury__univ__univ_value_1_f_0(&mdb__term_rep__TypeInfo_16_16, mdb__term_rep__Univ_8);
    }
#line 120 "term_rep.m"
    mdb__term_rep__V_13_13 = (mdb__term_rep__N_5 - (MR_Integer) 1);
#line 120 "term_rep.m"
    {
#line 120 "term_rep.m"
      mercury__deconstruct__arg_cc_3_p_0(mdb__term_rep__TypeInfo_16_16, mdb__term_rep__V_12_12, mdb__term_rep__V_13_13, &mdb__term_rep__MaybeSubUniv_9);
    }
#line 125 "term_rep.m"
    if ((mdb__term_rep__MaybeSubUniv_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 127 "term_rep.m"
      mdb__term_rep__MaybeArg_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 125 "term_rep.m"
    else
#line 122 "term_rep.m"
      {
#line 122 "term_rep.m"
        MR_Word mdb__term_rep__TypeInfo_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeSubUniv_9, (MR_Integer) 0)));
#line 122 "term_rep.m"
        MR_Box mdb__term_rep__SubValue_10 = (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeSubUniv_9, (MR_Integer) 1));
#line 122 "term_rep.m"
        MR_Word mdb__term_rep__Arg0_11;
#line 122 "term_rep.m"
        MR_Word mdb__term_rep__V_15_15;
#line 122 "term_rep.m"
        MR_Word mdb__term_rep__Univ_26;
#line 93 "term_rep.m"
        MR_Box mdb__term_rep__conv2_Univ_26;

#line 123 "term_rep.m"
        {
#line 123 "term_rep.m"
          mdb__term_rep__V_15_15 = mercury__univ__univ_1_f_0(mdb__term_rep__TypeInfo_17_17, mdb__term_rep__SubValue_10);
        }
#line 93 "term_rep.m"
        {
#line 93 "term_rep.m"
          mercury__builtin__cc_multi_equal_2_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (mdb__term_rep__V_15_15)), &mdb__term_rep__conv2_Univ_26);
        }
#line 93 "term_rep.m"
        mdb__term_rep__Univ_26 = ((MR_Word) mdb__term_rep__conv2_Univ_26);
#line 93 "term_rep.m"
        {
#line 93 "term_rep.m"
          mdb__term_rep__Arg0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "term_rep.m"
          MR_hl_field(MR_mktag(0), mdb__term_rep__Arg0_11, 0) = ((MR_Box) (mdb__term_rep__Univ_26));
#line 93 "term_rep.m"
        }
#line 124 "term_rep.m"
        {
#line 124 "term_rep.m"
          mdb__term_rep__MaybeArg_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 124 "term_rep.m"
          MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeArg_7, 0) = ((MR_Box) (mdb__term_rep__Arg0_11));
#line 124 "term_rep.m"
        }
#line 122 "term_rep.m"
      }
#line 130 "term_rep.m"
    mdb__term_rep__succeeded = ((MR_tag((MR_Word) mdb__term_rep__MaybeArg_7)) == (MR_mktag((MR_Integer) 1)));
#line 130 "term_rep.m"
    if (mdb__term_rep__succeeded)
#line 130 "term_rep.m"
      *mdb__term_rep__Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__term_rep__MaybeArg_7, (MR_Integer) 0)));
#line 110 "term_rep.m"
    return mdb__term_rep__succeeded;
#line 110 "term_rep.m"
  }
#line 43 "term_rep.m"
}

#line 96 "term_rep.m"
static void MR_CALL 
mdb__term_rep__rep_to_univ_2_p_0_1(
#line 96 "term_rep.m"
  MR_Box mdb__term_rep__closure_arg,
#line 96 "term_rep.m"
  MR_Box * mdb__term_rep__wrapper_arg_1)
#line 96 "term_rep.m"
{
#line 96 "term_rep.m"
  {
#line 96 "term_rep.m"
    MR_Box mdb__term_rep__closure = mdb__term_rep__closure_arg;
#line 96 "term_rep.m"
    MR_Word mdb__term_rep__conv0_HeadVar__2_7;

#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__term_rep__closure, (MR_Integer) 3))), &mdb__term_rep__conv0_HeadVar__2_7);
    }
#line 96 "term_rep.m"
    *mdb__term_rep__wrapper_arg_1 = ((MR_Box) (mdb__term_rep__conv0_HeadVar__2_7));
#line 96 "term_rep.m"
  }
#line 96 "term_rep.m"
}

#line 37 "term_rep.m"
void MR_CALL 
mdb__term_rep__rep_to_univ_2_p_0(
#line 37 "term_rep.m"
  MR_Word mdb__term_rep__Rep_3,
#line 37 "term_rep.m"
  MR_Word * mdb__term_rep__Univ_4)
#line 37 "term_rep.m"
{
#line 95 "term_rep.m"
  {
#line 95 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;
#line 95 "term_rep.m"
    MR_Word mdb__term_rep__V_6_6;
#line 96 "term_rep.m"
    MR_Box mdb__term_rep__conv1_Univ_4;

#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_6_6, 0) = ((MR_Box) (&mdb__term_rep_scalar_common_2[0]));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_6_6, 1) = ((MR_Box) (mdb__term_rep__rep_to_univ_2_p_0_1));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 96 "term_rep.m"
      MR_hl_field(MR_mktag(0), mdb__term_rep__V_6_6, 3) = ((MR_Box) (mdb__term_rep__Rep_3));
#line 96 "term_rep.m"
    }
#line 96 "term_rep.m"
    {
#line 96 "term_rep.m"
      mdb__term_rep__conv1_Univ_4 = mercury__builtin__promise_only_solution_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__term_rep__V_6_6);
    }
#line 96 "term_rep.m"
    *mdb__term_rep__Univ_4 = ((MR_Word) mdb__term_rep__conv1_Univ_4);
#line 95 "term_rep.m"
  }
#line 37 "term_rep.m"
}

#line 35 "term_rep.m"
void MR_CALL 
mdb__term_rep__univ_to_rep_2_p_0(
#line 35 "term_rep.m"
  MR_Word mdb__term_rep__Univ0_3,
#line 35 "term_rep.m"
  MR_Word * mdb__term_rep__HeadVar__2_2)
#line 35 "term_rep.m"
{
#line 93 "term_rep.m"
  {
#line 93 "term_rep.m"
    MR_bool mdb__term_rep__succeeded;
#line 93 "term_rep.m"
    MR_Word mdb__term_rep__Univ_4;
#line 93 "term_rep.m"
    MR_Box mdb__term_rep__conv0_Univ_4;

#line 93 "term_rep.m"
    {
#line 93 "term_rep.m"
      mercury__builtin__cc_multi_equal_2_p_1((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (mdb__term_rep__Univ0_3)), &mdb__term_rep__conv0_Univ_4);
    }
#line 93 "term_rep.m"
    mdb__term_rep__Univ_4 = ((MR_Word) mdb__term_rep__conv0_Univ_4);
#line 93 "term_rep.m"
    {
#line 93 "term_rep.m"
      MR_Word base;
#line 93 "term_rep.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "term_rep.m"
      *mdb__term_rep__HeadVar__2_2 = base;
#line 93 "term_rep.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__term_rep__Univ_4));
#line 93 "term_rep.m"
    }
#line 93 "term_rep.m"
  }
#line 35 "term_rep.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.term_rep. */
