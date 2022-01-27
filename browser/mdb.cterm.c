/*
** Automatically generated from `cterm.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module mdb.cterm. */
/* :- implementation. */

/*
INIT mercury__mdb__cterm__init
ENDINIT
*/

#include "mdb.cterm.mih"
#include "mdb.cterm.mh"


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




#line 64 "mdb.cterm.c"
static MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0_10001(
#line 67 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_1,
#line 69 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2);

#line 72 "mdb.cterm.c"
static void MR_CALL 
mdb__cterm____Compare____cargs_0_0_10001(
#line 75 "mdb.cterm.c"
  MR_Box * mdb__cterm__wrapper_arg_1,
#line 77 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2,
#line 79 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_3);

#line 82 "mdb.cterm.c"
static MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0_10001(
#line 85 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_1,
#line 87 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2);

#line 90 "mdb.cterm.c"
static void MR_CALL 
mdb__cterm____Compare____cterm_0_0_10001(
#line 93 "mdb.cterm.c"
  MR_Box * mdb__cterm__wrapper_arg_1,
#line 95 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2,
#line 97 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_3);

#line 89 "cterm.m"
static void MR_CALL 
mdb__cterm__match_with_cterms_3_p_0(
#line 89 "cterm.m"
  MR_Word mdb__cterm__UnivArgs_4,
#line 89 "cterm.m"
  MR_Box mdb__cterm__CArgs_5,
#line 89 "cterm.m"
  MR_Word * mdb__cterm__Match_6);







#include "mdb.cterm.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"

#line 59 "cterm.m"
void 
ML_BROWSE_match_with_cterm(
#line 59 "cterm.m"
  MR_Word mdb__cterm__TypeInfo_for_T_13,
#line 59 "cterm.m"
  MR_Word mdb__cterm__Term_4,
#line 59 "cterm.m"
  MR_CTerm mdb__cterm__CTerm_5,
#line 59 "cterm.m"
  MR_Word * mdb__cterm__Match_6)
#line 59 "cterm.m"
{
#line 59 "cterm.m"
	MR_Box mdb__cterm__boxed_CTerm_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_CTerm, mdb__cterm__CTerm_5, mdb__cterm__boxed_CTerm_5);
	mdb__cterm__match_with_cterm_3_p_0((MR_Word) mdb__cterm__TypeInfo_for_T_13, (MR_Box) mdb__cterm__Term_4, mdb__cterm__boxed_CTerm_5, (MR_Word *) mdb__cterm__Match_6);
}


#line 147 "mdb.cterm.c"
const MR_TypeCtorInfo_Struct mdb__cterm__mdb__cterm__type_ctor_info_cargs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__cterm____Unify____cargs_0_0_10001)),
  ((MR_Box) (mdb__cterm____Compare____cargs_0_0_10001)),
  (MR_String) "mdb.cterm",
  (MR_String) "cargs",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 168 "mdb.cterm.c"
const MR_TypeCtorInfo_Struct mdb__cterm__mdb__cterm__type_ctor_info_cterm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__cterm____Unify____cterm_0_0_10001)),
  ((MR_Box) (mdb__cterm____Compare____cterm_0_0_10001)),
  (MR_String) "mdb.cterm",
  (MR_String) "cterm",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 189 "mdb.cterm.c"
static MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0_10001(
#line 192 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_1,
#line 194 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2)
#line 196 "mdb.cterm.c"
{
#line 198 "mdb.cterm.c"
  {
#line 200 "mdb.cterm.c"
    MR_bool mdb__cterm__succeeded;

#line 203 "mdb.cterm.c"
    {
#line 205 "mdb.cterm.c"
      mdb__cterm__succeeded = mdb__cterm____Unify____cargs_0_0(((MR_Box) mdb__cterm__wrapper_arg_1), ((MR_Box) mdb__cterm__wrapper_arg_2));
    }
#line 208 "mdb.cterm.c"
    return mdb__cterm__succeeded;
#line 210 "mdb.cterm.c"
  }
#line 212 "mdb.cterm.c"
}

#line 215 "mdb.cterm.c"
static void MR_CALL 
mdb__cterm____Compare____cargs_0_0_10001(
#line 218 "mdb.cterm.c"
  MR_Box * mdb__cterm__wrapper_arg_1,
#line 220 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2,
#line 222 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_3)
#line 224 "mdb.cterm.c"
{
#line 226 "mdb.cterm.c"
  {
#line 228 "mdb.cterm.c"
    MR_Word mdb__cterm__conv0_HeadVar__1_1;

#line 231 "mdb.cterm.c"
    {
#line 233 "mdb.cterm.c"
      mdb__cterm____Compare____cargs_0_0(&mdb__cterm__conv0_HeadVar__1_1, ((MR_Box) mdb__cterm__wrapper_arg_2), ((MR_Box) mdb__cterm__wrapper_arg_3));
    }
#line 236 "mdb.cterm.c"
    *mdb__cterm__wrapper_arg_1 = ((MR_Box) (mdb__cterm__conv0_HeadVar__1_1));
#line 238 "mdb.cterm.c"
  }
#line 240 "mdb.cterm.c"
}

#line 243 "mdb.cterm.c"
static MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0_10001(
#line 246 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_1,
#line 248 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2)
#line 250 "mdb.cterm.c"
{
#line 252 "mdb.cterm.c"
  {
#line 254 "mdb.cterm.c"
    MR_bool mdb__cterm__succeeded;

#line 257 "mdb.cterm.c"
    {
#line 259 "mdb.cterm.c"
      mdb__cterm__succeeded = mdb__cterm____Unify____cterm_0_0(((MR_Box) mdb__cterm__wrapper_arg_1), ((MR_Box) mdb__cterm__wrapper_arg_2));
    }
#line 262 "mdb.cterm.c"
    return mdb__cterm__succeeded;
#line 264 "mdb.cterm.c"
  }
#line 266 "mdb.cterm.c"
}

#line 269 "mdb.cterm.c"
static void MR_CALL 
mdb__cterm____Compare____cterm_0_0_10001(
#line 272 "mdb.cterm.c"
  MR_Box * mdb__cterm__wrapper_arg_1,
#line 274 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_2,
#line 276 "mdb.cterm.c"
  MR_Box mdb__cterm__wrapper_arg_3)
#line 278 "mdb.cterm.c"
{
#line 280 "mdb.cterm.c"
  {
#line 282 "mdb.cterm.c"
    MR_Word mdb__cterm__conv0_HeadVar__1_1;

#line 285 "mdb.cterm.c"
    {
#line 287 "mdb.cterm.c"
      mdb__cterm____Compare____cterm_0_0(&mdb__cterm__conv0_HeadVar__1_1, ((MR_Box) mdb__cterm__wrapper_arg_2), ((MR_Box) mdb__cterm__wrapper_arg_3));
    }
#line 290 "mdb.cterm.c"
    *mdb__cterm__wrapper_arg_1 = ((MR_Box) (mdb__cterm__conv0_HeadVar__1_1));
#line 292 "mdb.cterm.c"
  }
#line 294 "mdb.cterm.c"
}

#line 63 "cterm.m"
void MR_CALL 
mdb__cterm____Compare____cterm_0_0(
#line 63 "cterm.m"
  MR_Word * mdb__cterm__HeadVar__1_1,
#line 63 "cterm.m"
  MR_Box mdb__cterm__HeadVar__2_2,
#line 63 "cterm.m"
  MR_Box mdb__cterm__HeadVar__3_3)
#line 63 "cterm.m"
{
#line 63 "cterm.m"
  {
#line 63 "cterm.m"
    MR_bool mdb__cterm__succeeded;
#line 63 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar1_4 = (MR_Word) mdb__cterm__HeadVar__2_2;
#line 63 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar2_5 = (MR_Word) mdb__cterm__HeadVar__3_3;

#line 63 "cterm.m"
    {
#line 63 "cterm.m"
      mercury__builtin____Compare____c_pointer_0_0(mdb__cterm__HeadVar__1_1, mdb__cterm__Cast_HeadVar1_4, mdb__cterm__Cast_HeadVar2_5);
#line 63 "cterm.m"
      return;
    }
#line 63 "cterm.m"
  }
#line 63 "cterm.m"
}

#line 63 "cterm.m"
MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0(
#line 63 "cterm.m"
  MR_Box mdb__cterm__HeadVar__1_1,
#line 63 "cterm.m"
  MR_Box mdb__cterm__HeadVar__2_2)
#line 63 "cterm.m"
{
#line 63 "cterm.m"
  {
#line 63 "cterm.m"
    MR_bool mdb__cterm__succeeded;
#line 63 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar1_3 = (MR_Word) mdb__cterm__HeadVar__1_1;
#line 63 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar2_4 = (MR_Word) mdb__cterm__HeadVar__2_2;

#line 63 "cterm.m"
    {
#line 63 "cterm.m"
      return mdb__cterm__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__cterm__Cast_HeadVar1_3, mdb__cterm__Cast_HeadVar2_4);
    }
#line 63 "cterm.m"
    return mdb__cterm__succeeded;
#line 63 "cterm.m"
  }
#line 63 "cterm.m"
}

#line 64 "cterm.m"
void MR_CALL 
mdb__cterm____Compare____cargs_0_0(
#line 64 "cterm.m"
  MR_Word * mdb__cterm__HeadVar__1_1,
#line 64 "cterm.m"
  MR_Box mdb__cterm__HeadVar__2_2,
#line 64 "cterm.m"
  MR_Box mdb__cterm__HeadVar__3_3)
#line 64 "cterm.m"
{
#line 64 "cterm.m"
  {
#line 64 "cterm.m"
    MR_bool mdb__cterm__succeeded;
#line 64 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar1_4 = (MR_Word) mdb__cterm__HeadVar__2_2;
#line 64 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar2_5 = (MR_Word) mdb__cterm__HeadVar__3_3;

#line 64 "cterm.m"
    {
#line 64 "cterm.m"
      mercury__builtin____Compare____c_pointer_0_0(mdb__cterm__HeadVar__1_1, mdb__cterm__Cast_HeadVar1_4, mdb__cterm__Cast_HeadVar2_5);
#line 64 "cterm.m"
      return;
    }
#line 64 "cterm.m"
  }
#line 64 "cterm.m"
}

#line 64 "cterm.m"
MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0(
#line 64 "cterm.m"
  MR_Box mdb__cterm__HeadVar__1_1,
#line 64 "cterm.m"
  MR_Box mdb__cterm__HeadVar__2_2)
#line 64 "cterm.m"
{
#line 64 "cterm.m"
  {
#line 64 "cterm.m"
    MR_bool mdb__cterm__succeeded;
#line 64 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar1_3 = (MR_Word) mdb__cterm__HeadVar__1_1;
#line 64 "cterm.m"
    MR_Word mdb__cterm__Cast_HeadVar2_4 = (MR_Word) mdb__cterm__HeadVar__2_2;

#line 64 "cterm.m"
    {
#line 64 "cterm.m"
      return mdb__cterm__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__cterm__Cast_HeadVar1_3, mdb__cterm__Cast_HeadVar2_4);
    }
#line 64 "cterm.m"
    return mdb__cterm__succeeded;
#line 64 "cterm.m"
  }
#line 64 "cterm.m"
}

#line 89 "cterm.m"
static void MR_CALL 
mdb__cterm__match_with_cterms_3_p_0(
#line 89 "cterm.m"
  MR_Word mdb__cterm__UnivArgs_4,
#line 89 "cterm.m"
  MR_Box mdb__cterm__CArgs_5,
#line 89 "cterm.m"
  MR_Word * mdb__cterm__Match_6)
#line 89 "cterm.m"
{
#line 108 "cterm.m"
  while (MR_TRUE)
#line 108 "cterm.m"
    {
#line 108 "cterm.m"
      /* tailcall optimized into a loop */
#line 108 "cterm.m"
      {
#line 108 "cterm.m"
        MR_bool mdb__cterm__succeeded;
#line 108 "cterm.m"
        MR_Box mdb__cterm__CHead_7;
#line 108 "cterm.m"
        MR_Box mdb__cterm__CTail_8;

#line 140 "cterm.m"
{
#define MR_PROC_LABEL mdb__cterm__match_with_cterms_3_p_0

	MR_CArgs Args;
	MR_CTerm Head;
	MR_CArgs Tail;
	MR_bool SUCCESS_INDICATOR;

	Args = (MR_CArgs) mdb__cterm__CArgs_5 ;
		{
#line 140 "cterm.m"

    if (Args == NULL) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Head = Args->MR_args_head;
        Tail = Args->MR_args_tail;
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 468 "mdb.cterm.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__cterm__CHead_7  = (MR_Box) Head;
	 mdb__cterm__CTail_8  = (MR_Box) Tail;
#line 140 "cterm.m"
	}
mdb__cterm__succeeded  = SUCCESS_INDICATOR;
}
#line 108 "cterm.m"
        if (mdb__cterm__succeeded)
#line 96 "cterm.m"
          if ((mdb__cterm__UnivArgs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "cterm.m"
            *mdb__cterm__Match_6 = (MR_Integer) 0;
#line 96 "cterm.m"
          else
#line 97 "cterm.m"
            {
#line 97 "cterm.m"
              MR_Word mdb__cterm__TypeInfo_15_15;
#line 97 "cterm.m"
              MR_Word mdb__cterm__UnivHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__cterm__UnivArgs_4, (MR_Integer) 0)));
#line 97 "cterm.m"
              MR_Word mdb__cterm__UnivTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__cterm__UnivArgs_4, (MR_Integer) 1)));
#line 97 "cterm.m"
              MR_Box mdb__cterm__Head_11;
#line 97 "cterm.m"
              MR_Word mdb__cterm__MatchHead_12;

#line 98 "cterm.m"
              {
#line 98 "cterm.m"
                mdb__cterm__Head_11 = mercury__univ__univ_value_1_f_0(&mdb__cterm__TypeInfo_15_15, mdb__cterm__UnivHead_9);
              }
#line 99 "cterm.m"
              {
#line 99 "cterm.m"
                mdb__cterm__match_with_cterm_3_p_0(mdb__cterm__TypeInfo_15_15, mdb__cterm__Head_11, mdb__cterm__CHead_7, &mdb__cterm__MatchHead_12);
              }
#line 103 "cterm.m"
              if ((mdb__cterm__MatchHead_12 == (MR_Integer) 0))
#line 102 "cterm.m"
                *mdb__cterm__Match_6 = (MR_Integer) 0;
#line 103 "cterm.m"
              else
#line 105 "cterm.m"
                {
#line 105 "cterm.m"
                  /* direct tailcall eliminated */
#line 105 "cterm.m"
                  {
#line 105 "cterm.m"
                    MR_Word mdb__cterm__UnivArgs__tmp_copy_4 = mdb__cterm__UnivTail_10;
#line 105 "cterm.m"
                    MR_Box mdb__cterm__CArgs__tmp_copy_5 = mdb__cterm__CTail_8;

#line 105 "cterm.m"
                    mdb__cterm__CArgs_5 = mdb__cterm__CArgs__tmp_copy_5;
#line 105 "cterm.m"
                    mdb__cterm__UnivArgs_4 = mdb__cterm__UnivArgs__tmp_copy_4;
#line 105 "cterm.m"
                  }
#line 105 "cterm.m"
                  continue;
#line 105 "cterm.m"
                }
#line 97 "cterm.m"
            }
#line 108 "cterm.m"
        else
#line 112 "cterm.m"
          if ((mdb__cterm__UnivArgs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 111 "cterm.m"
            *mdb__cterm__Match_6 = (MR_Integer) 1;
#line 112 "cterm.m"
          else
#line 114 "cterm.m"
            *mdb__cterm__Match_6 = (MR_Integer) 0;
#line 108 "cterm.m"
      }
#line 108 "cterm.m"
      break;
#line 108 "cterm.m"
    }
#line 89 "cterm.m"
}

#line 39 "cterm.m"
MR_bool MR_CALL 
mdb__cterm__cterm_head_tail_3_p_0(
#line 39 "cterm.m"
  MR_Box mdb__cterm__Args_1,
#line 39 "cterm.m"
  MR_Box * mdb__cterm__Head_2,
#line 39 "cterm.m"
  MR_Box * mdb__cterm__Tail_3)
#line 39 "cterm.m"
{
#line 137 "cterm.m"
  {
#line 137 "cterm.m"
    MR_bool mdb__cterm__succeeded;

#line 140 "cterm.m"
{
#define MR_PROC_LABEL mdb__cterm__cterm_head_tail_3_p_0

	MR_CArgs Args;
	MR_CTerm Head;
	MR_CArgs Tail;
	MR_bool SUCCESS_INDICATOR;

	Args = (MR_CArgs) mdb__cterm__Args_1 ;
		{
#line 140 "cterm.m"

    if (Args == NULL) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Head = Args->MR_args_head;
        Tail = Args->MR_args_tail;
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 595 "mdb.cterm.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__cterm__Head_2  = (MR_Box) Head;
	 *mdb__cterm__Tail_3  = (MR_Box) Tail;
#line 140 "cterm.m"
	}
mdb__cterm__succeeded  = SUCCESS_INDICATOR;
}
#line 137 "cterm.m"
    return mdb__cterm__succeeded;
#line 137 "cterm.m"
  }
#line 39 "cterm.m"
}

#line 34 "cterm.m"
void MR_CALL 
mdb__cterm__cterm_deconstruct_3_p_0(
#line 34 "cterm.m"
  MR_Box mdb__cterm__Term_1,
#line 34 "cterm.m"
  MR_String * mdb__cterm__Functor_2,
#line 34 "cterm.m"
  MR_Box * mdb__cterm__Args_3)
#line 34 "cterm.m"
{
#line 118 "cterm.m"
  {
#line 118 "cterm.m"
    MR_bool mdb__cterm__succeeded;

#line 121 "cterm.m"
{
#define MR_PROC_LABEL mdb__cterm__cterm_deconstruct_3_p_0

	MR_CTerm Term;
	MR_String Functor;
	MR_CArgs Args;

	Term = (MR_CTerm) mdb__cterm__Term_1 ;
		{
#line 121 "cterm.m"

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;

#line 648 "mdb.cterm.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__cterm__Functor_2  = Functor;
	 *mdb__cterm__Args_3  = (MR_Box) Args;
#line 121 "cterm.m"
}
#line 118 "cterm.m"
  }
#line 34 "cterm.m"
}

#line 30 "cterm.m"
void MR_CALL 
mdb__cterm__match_with_cterm_3_p_0(
#line 30 "cterm.m"
  MR_Word mdb__cterm__TypeInfo_for_T_13,
#line 30 "cterm.m"
  MR_Box mdb__cterm__Term_4,
#line 30 "cterm.m"
  MR_Box mdb__cterm__CTerm_5,
#line 30 "cterm.m"
  MR_Word * mdb__cterm__Match_6)
#line 30 "cterm.m"
{
#line 73 "cterm.m"
  {
#line 73 "cterm.m"
    MR_bool mdb__cterm__succeeded;
#line 73 "cterm.m"
    MR_String mdb__cterm__TermFunctor_7;
#line 73 "cterm.m"
    MR_Word mdb__cterm__TermArgs_9;
#line 73 "cterm.m"
    MR_String mdb__cterm__CTermFunctor_10;
#line 73 "cterm.m"
    MR_Box mdb__cterm__CTermArgs_11;
#line 74 "cterm.m"
    MR_Integer mdb__cterm__V_8_8;

#line 74 "cterm.m"
    {
#line 74 "cterm.m"
      mercury__deconstruct__deconstruct_5_p_2(mdb__cterm__TypeInfo_for_T_13, mdb__cterm__Term_4, (MR_Integer) 2, &mdb__cterm__TermFunctor_7, &mdb__cterm__V_8_8, &mdb__cterm__TermArgs_9);
    }
#line 121 "cterm.m"
{
#define MR_PROC_LABEL mdb__cterm__match_with_cterm_3_p_0

	MR_CTerm Term;
	MR_String Functor;
	MR_CArgs Args;

	Term = (MR_CTerm) mdb__cterm__CTerm_5 ;
		{
#line 121 "cterm.m"

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;

#line 713 "mdb.cterm.c"

		;}
#undef MR_PROC_LABEL
	 mdb__cterm__CTermFunctor_10  = Functor;
	 mdb__cterm__CTermArgs_11  = (MR_Box) Args;
#line 121 "cterm.m"
}
#line 81 "cterm.m"
    mdb__cterm__succeeded = (strcmp(mdb__cterm__TermFunctor_7, mdb__cterm__CTermFunctor_10) == 0);
#line 83 "cterm.m"
    if (mdb__cterm__succeeded)
#line 82 "cterm.m"
      {
#line 82 "cterm.m"
        mdb__cterm__match_with_cterms_3_p_0(mdb__cterm__TermArgs_9, mdb__cterm__CTermArgs_11, mdb__cterm__Match_6);
#line 82 "cterm.m"
        return;
      }
#line 83 "cterm.m"
    else
#line 85 "cterm.m"
      {
#line 83 "cterm.m"
        mdb__cterm__succeeded = (strcmp(mdb__cterm__CTermFunctor_10, (MR_String) "_") == 0);
#line 85 "cterm.m"
        if (mdb__cterm__succeeded)
#line 84 "cterm.m"
          *mdb__cterm__Match_6 = (MR_Integer) 1;
#line 85 "cterm.m"
        else
#line 86 "cterm.m"
          *mdb__cterm__Match_6 = (MR_Integer) 0;
#line 85 "cterm.m"
      }
#line 73 "cterm.m"
  }
#line 30 "cterm.m"
}

void mercury__mdb__cterm__init(void)
{
}

void mercury__mdb__cterm__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__cterm__mdb__cterm__type_ctor_info_cargs_0);
	MR_register_type_ctor_info(&mdb__cterm__mdb__cterm__type_ctor_info_cterm_0);
}

void mercury__mdb__cterm__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.cterm. */
