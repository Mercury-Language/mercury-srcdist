/*
** Automatically generated from `cterm.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module mdb.cterm. */
/* :- implementation. */

/*
INIT mercury__mdb__cterm__init
ENDINIT
*/

#include "mdb.cterm.mih"
#include "mdb.cterm.mh"


#include "mdb.mih"
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




static MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0_10001(
  MR_Box mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2);

static void MR_CALL 
mdb__cterm____Compare____cargs_0_0_10001(
  MR_Box * mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2,
  MR_Box mdb__cterm__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0_10001(
  MR_Box mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2);

static void MR_CALL 
mdb__cterm____Compare____cterm_0_0_10001(
  MR_Box * mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2,
  MR_Box mdb__cterm__wrapper_arg_3);

static void MR_CALL 
mdb__cterm__match_with_cterms_3_p_0(
  MR_Word mdb__cterm__UnivArgs_4,
  MR_Box mdb__cterm__CArgs_5,
  MR_Word * mdb__cterm__Match_6);







#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.cterm.mh"

#line 59 "cterm.m"
void 
ML_BROWSE_match_with_cterm(
  MR_Word mdb__cterm__TypeInfo_for_T_13,
  MR_Word mdb__cterm__Term_4,
  MR_CTerm mdb__cterm__CTerm_5,
  MR_Word * mdb__cterm__Match_6)
#line 59 "cterm.m"
{
#line 59 "cterm.m"
	MR_Box mdb__cterm__boxed_CTerm_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_CTerm, mdb__cterm__CTerm_5, mdb__cterm__boxed_CTerm_5);
	mdb__cterm__match_with_cterm_3_p_0((MR_Word) mdb__cterm__TypeInfo_for_T_13, (MR_Box) mdb__cterm__Term_4, mdb__cterm__boxed_CTerm_5, (MR_Word *) mdb__cterm__Match_6);
}


const MR_TypeCtorInfo_Struct mdb__cterm__mdb__cterm__type_ctor_info_cargs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__cterm____Unify____cargs_0_0_10001)),
  ((MR_Box) (mdb__cterm____Compare____cargs_0_0_10001)),
  (MR_String) "mdb.cterm",
  (MR_String) "cargs",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__cterm__mdb__cterm__type_ctor_info_cterm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__cterm____Unify____cterm_0_0_10001)),
  ((MR_Box) (mdb__cterm____Compare____cterm_0_0_10001)),
  (MR_String) "mdb.cterm",
  (MR_String) "cterm",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0_10001(
  MR_Box mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2)
{
  {
    MR_bool mdb__cterm__succeeded;

    {
      mdb__cterm__succeeded = mdb__cterm____Unify____cargs_0_0(((MR_Box) mdb__cterm__wrapper_arg_1), ((MR_Box) mdb__cterm__wrapper_arg_2));
    }
    return mdb__cterm__succeeded;
  }
}

static void MR_CALL 
mdb__cterm____Compare____cargs_0_0_10001(
  MR_Box * mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2,
  MR_Box mdb__cterm__wrapper_arg_3)
{
  {
    MR_Word mdb__cterm__conv0_HeadVar__1_1;

    {
      mdb__cterm____Compare____cargs_0_0(&mdb__cterm__conv0_HeadVar__1_1, ((MR_Box) mdb__cterm__wrapper_arg_2), ((MR_Box) mdb__cterm__wrapper_arg_3));
    }
    *mdb__cterm__wrapper_arg_1 = ((MR_Box) (mdb__cterm__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0_10001(
  MR_Box mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2)
{
  {
    MR_bool mdb__cterm__succeeded;

    {
      mdb__cterm__succeeded = mdb__cterm____Unify____cterm_0_0(((MR_Box) mdb__cterm__wrapper_arg_1), ((MR_Box) mdb__cterm__wrapper_arg_2));
    }
    return mdb__cterm__succeeded;
  }
}

static void MR_CALL 
mdb__cterm____Compare____cterm_0_0_10001(
  MR_Box * mdb__cterm__wrapper_arg_1,
  MR_Box mdb__cterm__wrapper_arg_2,
  MR_Box mdb__cterm__wrapper_arg_3)
{
  {
    MR_Word mdb__cterm__conv0_HeadVar__1_1;

    {
      mdb__cterm____Compare____cterm_0_0(&mdb__cterm__conv0_HeadVar__1_1, ((MR_Box) mdb__cterm__wrapper_arg_2), ((MR_Box) mdb__cterm__wrapper_arg_3));
    }
    *mdb__cterm__wrapper_arg_1 = ((MR_Box) (mdb__cterm__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
mdb__cterm____Compare____cterm_0_0(
  MR_Word * mdb__cterm__HeadVar__1_1,
  MR_Box mdb__cterm__HeadVar__2_2,
  MR_Box mdb__cterm__HeadVar__3_3)
{
  {
    MR_bool mdb__cterm__succeeded;
    MR_Word mdb__cterm__Cast_HeadVar1_4 = (MR_Word) mdb__cterm__HeadVar__2_2;
    MR_Word mdb__cterm__Cast_HeadVar2_5 = (MR_Word) mdb__cterm__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdb__cterm__HeadVar__1_1, mdb__cterm__Cast_HeadVar1_4, mdb__cterm__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0(
  MR_Box mdb__cterm__HeadVar__1_1,
  MR_Box mdb__cterm__HeadVar__2_2)
{
  {
    MR_bool mdb__cterm__succeeded;
    MR_Word mdb__cterm__Cast_HeadVar1_3 = (MR_Word) mdb__cterm__HeadVar__1_1;
    MR_Word mdb__cterm__Cast_HeadVar2_4 = (MR_Word) mdb__cterm__HeadVar__2_2;

    {
      mdb__cterm__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__cterm__Cast_HeadVar1_3, mdb__cterm__Cast_HeadVar2_4);
    }
    return mdb__cterm__succeeded;
  }
}

void MR_CALL 
mdb__cterm____Compare____cargs_0_0(
  MR_Word * mdb__cterm__HeadVar__1_1,
  MR_Box mdb__cterm__HeadVar__2_2,
  MR_Box mdb__cterm__HeadVar__3_3)
{
  {
    MR_bool mdb__cterm__succeeded;
    MR_Word mdb__cterm__Cast_HeadVar1_4 = (MR_Word) mdb__cterm__HeadVar__2_2;
    MR_Word mdb__cterm__Cast_HeadVar2_5 = (MR_Word) mdb__cterm__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdb__cterm__HeadVar__1_1, mdb__cterm__Cast_HeadVar1_4, mdb__cterm__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0(
  MR_Box mdb__cterm__HeadVar__1_1,
  MR_Box mdb__cterm__HeadVar__2_2)
{
  {
    MR_bool mdb__cterm__succeeded;
    MR_Word mdb__cterm__Cast_HeadVar1_3 = (MR_Word) mdb__cterm__HeadVar__1_1;
    MR_Word mdb__cterm__Cast_HeadVar2_4 = (MR_Word) mdb__cterm__HeadVar__2_2;

    {
      mdb__cterm__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__cterm__Cast_HeadVar1_3, mdb__cterm__Cast_HeadVar2_4);
    }
    return mdb__cterm__succeeded;
  }
}

static void MR_CALL 
mdb__cterm__match_with_cterms_3_p_0(
  MR_Word mdb__cterm__UnivArgs_4,
  MR_Box mdb__cterm__CArgs_5,
  MR_Word * mdb__cterm__Match_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__cterm__succeeded;
        MR_Box mdb__cterm__CHead_7;
        MR_Box mdb__cterm__CTail_8;

{
#define MR_PROC_LABEL mdb__cterm__match_with_cterms_3_p_0

	MR_CArgs Args;
	MR_CTerm Head;
	MR_CArgs Tail;
	MR_bool SUCCESS_INDICATOR;

	Args = (MR_CArgs) mdb__cterm__CArgs_5 ;
		{

    if (Args == NULL) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Head = Args->MR_args_head;
        Tail = Args->MR_args_tail;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__cterm__CHead_7  = (MR_Box) Head;
	 mdb__cterm__CTail_8  = (MR_Box) Tail;
	}
mdb__cterm__succeeded  = SUCCESS_INDICATOR;
}
        if (mdb__cterm__succeeded)
          if ((mdb__cterm__UnivArgs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mdb__cterm__Match_6 = (MR_Integer) 0;
          else
            {
              MR_Word mdb__cterm__TypeInfo_15_15;
              MR_Word mdb__cterm__UnivHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__cterm__UnivArgs_4, (MR_Integer) 0)));
              MR_Word mdb__cterm__UnivTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__cterm__UnivArgs_4, (MR_Integer) 1)));
              MR_Box mdb__cterm__Head_11;
              MR_Word mdb__cterm__MatchHead_12;

              {
                mdb__cterm__Head_11 = mercury__univ__univ_value_1_f_0(&mdb__cterm__TypeInfo_15_15, mdb__cterm__UnivHead_9);
              }
              {
                mdb__cterm__match_with_cterm_3_p_0(mdb__cterm__TypeInfo_15_15, mdb__cterm__Head_11, mdb__cterm__CHead_7, &mdb__cterm__MatchHead_12);
              }
              switch (mdb__cterm__MatchHead_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mdb__cterm__Match_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mdb__cterm__next_value_of_UnivArgs_4 = mdb__cterm__UnivTail_10;
                      MR_Box mdb__cterm__next_value_of_CArgs_5 = mdb__cterm__CTail_8;

                      mdb__cterm__CArgs_5 = mdb__cterm__next_value_of_CArgs_5;
                      mdb__cterm__UnivArgs_4 = mdb__cterm__next_value_of_UnivArgs_4;
                    }
                    continue;
                  }
                  break;
              }
            }
        else
        if ((mdb__cterm__UnivArgs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__cterm__Match_6 = (MR_Integer) 1;
        else
          *mdb__cterm__Match_6 = (MR_Integer) 0;
      }
      break;
    }
}

MR_bool MR_CALL 
mdb__cterm__cterm_head_tail_3_p_0(
  MR_Box mdb__cterm__Args_1,
  MR_Box * mdb__cterm__Head_2,
  MR_Box * mdb__cterm__Tail_3)
{
  {
    MR_bool mdb__cterm__succeeded;

{
#define MR_PROC_LABEL mdb__cterm__cterm_head_tail_3_p_0

	MR_CArgs Args;
	MR_CTerm Head;
	MR_CArgs Tail;
	MR_bool SUCCESS_INDICATOR;

	Args = (MR_CArgs) mdb__cterm__Args_1 ;
		{

    if (Args == NULL) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Head = Args->MR_args_head;
        Tail = Args->MR_args_tail;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__cterm__Head_2  = (MR_Box) Head;
	 *mdb__cterm__Tail_3  = (MR_Box) Tail;
	}
mdb__cterm__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__cterm__succeeded;
  }
}

void MR_CALL 
mdb__cterm__cterm_deconstruct_3_p_0(
  MR_Box mdb__cterm__Term_1,
  MR_String * mdb__cterm__Functor_2,
  MR_Box * mdb__cterm__Args_3)
{
  {
    MR_bool mdb__cterm__succeeded;

{
#define MR_PROC_LABEL mdb__cterm__cterm_deconstruct_3_p_0

	MR_CTerm Term;
	MR_String Functor;
	MR_CArgs Args;

	Term = (MR_CTerm) mdb__cterm__Term_1 ;
		{

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;


		;}
#undef MR_PROC_LABEL
	 *mdb__cterm__Functor_2  = Functor;
	 *mdb__cterm__Args_3  = (MR_Box) Args;
}
  }
}

void MR_CALL 
mdb__cterm__match_with_cterm_3_p_0(
  MR_Word mdb__cterm__TypeInfo_for_T_13,
  MR_Box mdb__cterm__Term_4,
  MR_Box mdb__cterm__CTerm_5,
  MR_Word * mdb__cterm__Match_6)
{
  {
    MR_bool mdb__cterm__succeeded;
    MR_String mdb__cterm__TermFunctor_7;
    MR_Word mdb__cterm__TermArgs_9;
    MR_String mdb__cterm__CTermFunctor_10;
    MR_Box mdb__cterm__CTermArgs_11;
    MR_Integer mdb__cterm__Var_8;

    {
      mercury__deconstruct__deconstruct_5_p_2(mdb__cterm__TypeInfo_for_T_13, mdb__cterm__Term_4, (MR_Integer) 2, &mdb__cterm__TermFunctor_7, &mdb__cterm__Var_8, &mdb__cterm__TermArgs_9);
    }
{
#define MR_PROC_LABEL mdb__cterm__match_with_cterm_3_p_0

	MR_CTerm Term;
	MR_String Functor;
	MR_CArgs Args;

	Term = (MR_CTerm) mdb__cterm__CTerm_5 ;
		{

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;


		;}
#undef MR_PROC_LABEL
	 mdb__cterm__CTermFunctor_10  = Functor;
	 mdb__cterm__CTermArgs_11  = (MR_Box) Args;
}
    mdb__cterm__succeeded = (strcmp(mdb__cterm__CTermFunctor_10, mdb__cterm__TermFunctor_7) == 0);
    if (mdb__cterm__succeeded)
      {
        mdb__cterm__match_with_cterms_3_p_0(mdb__cterm__TermArgs_9, mdb__cterm__CTermArgs_11, mdb__cterm__Match_6);
      }
    else
      {
        mdb__cterm__succeeded = (strcmp(mdb__cterm__CTermFunctor_10, (MR_String) "_") == 0);
        if (mdb__cterm__succeeded)
          *mdb__cterm__Match_6 = (MR_Integer) 1;
        else
          *mdb__cterm__Match_6 = (MR_Integer) 0;
      }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__cterm__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdb.cterm. */
