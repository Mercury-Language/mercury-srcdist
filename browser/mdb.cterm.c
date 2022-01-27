/*
** Automatically generated from `cterm.m'
** by the Mercury compiler,
** version rotd-2020-10-29
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


// :- module mdb.cterm.
// :- implementation.

/*
INIT mercury__mdb__cterm__init
ENDINIT
*/

#include "mdb.cterm.mih"
#include "mdb.cterm.mh"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static void MR_CALL 
mdb__cterm__match_with_cterms_3_p_0(
  MR_Word UnivArgs_4,
  MR_Box CArgs_5,
  MR_Word * Match_6);

static MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__cterm____Compare____cargs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__cterm____Compare____cterm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "mdb.mh"
#include "mdb.cterm.mh"

#line 59 "cterm.m"
void 
ML_BROWSE_match_with_cterm(
  MR_Word TypeInfo_for_T_13,
  MR_Word Term_4,
  MR_CTerm CTerm_5,
  MR_Word * Match_6)
#line 59 "cterm.m"
{
#line 59 "cterm.m"
	MR_Box boxed_CTerm_5;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_CTerm, CTerm_5, boxed_CTerm_5);
	mdb__cterm__match_with_cterm_3_p_0((MR_Word) TypeInfo_for_T_13, (MR_Box) Term_4, boxed_CTerm_5, (MR_Word *) Match_6);
}


const MR_TypeCtorInfo_Struct mdb__cterm__mdb__cterm__type_ctor_info_cargs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__cterm____Unify____cargs_0_0_10001)),
  ((MR_Box) (mdb__cterm____Compare____cargs_0_0_10001)),
  (MR_String) "mdb.cterm",
  (MR_String) "cargs",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mdb__cterm__mdb__cterm__type_ctor_info_cterm_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__cterm____Unify____cterm_0_0_10001)),
  ((MR_Box) (mdb__cterm____Compare____cterm_0_0_10001)),
  (MR_String) "mdb.cterm",
  (MR_String) "cterm",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
mdb__cterm____Compare____cterm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__cterm____Compare____cargs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__cterm__cterm_head_tail_3_p_0(
  MR_Box Args_1,
  MR_Box * Head_2,
  MR_Box * Tail_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__cterm__cterm_head_tail_3_p_0

	MR_CArgs Args;
	MR_CTerm Head;
	MR_CArgs Tail;
	MR_bool SUCCESS_INDICATOR;

	Args = (MR_CArgs)Args_1 ;
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
	 *Head_2  = (MR_Box) Head;
	 *Tail_3  = (MR_Box) Tail;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mdb__cterm__cterm_deconstruct_3_p_0(
  MR_Box Term_1,
  MR_String * Functor_2,
  MR_Box * Args_3)
{
  {
{
#define MR_PROC_LABEL mdb__cterm__cterm_deconstruct_3_p_0

	MR_CTerm Term;
	MR_String Functor;
	MR_CArgs Args;

	Term = (MR_CTerm)Term_1 ;
		{

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;


		;}
#undef MR_PROC_LABEL
	 *Functor_2  = Functor;
	 *Args_3  = (MR_Box) Args;
}
  }
}

void MR_CALL 
mdb__cterm__match_with_cterm_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_4,
  MR_Box CTerm_5,
  MR_Word * Match_6)
{
  {
    MR_bool succeeded;
    MR_String TermFunctor_7;
    MR_Word TermArgs_9;
    MR_String CTermFunctor_10;
    MR_Box CTermArgs_11;
    MR_Integer Var_8;

    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_for_T_13, Term_4, (MR_Integer) 2, &TermFunctor_7, &Var_8, &TermArgs_9);
{
#define MR_PROC_LABEL mdb__cterm__match_with_cterm_3_p_0

	MR_CTerm Term;
	MR_String Functor;
	MR_CArgs Args;

	Term = (MR_CTerm)CTerm_5 ;
		{

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;


		;}
#undef MR_PROC_LABEL
	 CTermFunctor_10  = Functor;
	 CTermArgs_11  = (MR_Box) Args;
}
    succeeded = (strcmp(CTermFunctor_10, TermFunctor_7) == 0);
    if (succeeded)
      mdb__cterm__match_with_cterms_3_p_0(TermArgs_9, CTermArgs_11, Match_6);
    else
    {
      succeeded = (strcmp(CTermFunctor_10, (MR_String) "_") == 0);
      if (succeeded)
        *Match_6 = (MR_Integer) 1;
      else
        *Match_6 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
mdb__cterm__match_with_cterms_3_p_0(
  MR_Word UnivArgs_4,
  MR_Box CArgs_5,
  MR_Word * Match_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box CHead_7;
    MR_Box CTail_8;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mdb__cterm__match_with_cterms_3_p_0

	MR_CArgs Args;
	MR_CTerm Head;
	MR_CArgs Tail;
	MR_bool SUCCESS_INDICATOR;

	Args = (MR_CArgs)CArgs_5 ;
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
	 CHead_7  = (MR_Box) Head;
	 CTail_8  = (MR_Box) Tail;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      if ((UnivArgs_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *Match_6 = (MR_Integer) 0;
      else
      {
        MR_Word TypeInfo_15_15;
        MR_Word UnivHead_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_4, (MR_Integer) 0))));
        MR_Word UnivTail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_4, (MR_Integer) 1))));
        MR_Box Head_11;
        MR_Word MatchHead_12;

        Head_11 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_15, UnivHead_9);
        mdb__cterm__match_with_cterm_3_p_0(TypeInfo_15_15, Head_11, CHead_7, &MatchHead_12);
        switch (MatchHead_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Match_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_UnivArgs_4 = UnivTail_10;
              MR_Box next_value_of_CArgs_5 = CTail_8;

              // direct tailcall eliminated
              ;
              UnivArgs_4 = next_value_of_UnivArgs_4;
              CArgs_5 = next_value_of_CArgs_5;
              continue;
            }
            break;
        }
      }
    else
    if ((UnivArgs_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *Match_6 = (MR_Integer) 1;
    else
      *Match_6 = (MR_Integer) 0;
    break;
  }
}

static MR_bool MR_CALL 
mdb__cterm____Unify____cargs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__cterm____Unify____cargs_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__cterm____Compare____cargs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__cterm____Compare____cargs_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__cterm____Unify____cterm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__cterm____Unify____cterm_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__cterm____Compare____cterm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__cterm____Compare____cterm_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mdb.cterm.
