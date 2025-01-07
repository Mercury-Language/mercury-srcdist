/*
** Automatically generated from `browser_term.m'
** by the Mercury compiler,
** version rotd-2025-01-07
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


// :- module mdb.browser_term.
// :- implementation.

/*
INIT mercury__mdb__browser_term__init
ENDINIT
*/

#include "mdb.browser_term.mih"
#include "mdb.browser_term.mh"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0[1];

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1[3];

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1;

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0[1];

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1[1];

static const MR_DuPtagLayout mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0[2];

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0[2];

static const MR_Integer mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0[2];

static MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__browser_term_scalar_common_1[2][2];




static /* final */ const MR_Box mdb__browser_term_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};



#include "mdb.mh"
#include "mdb.browser_term.mh"

#line 73 "browser_term.m"
MR_Word 
ML_BROWSE_plain_term_to_browser_term(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3)
#line 73 "browser_term.m"
{
#line 73 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__plain_term_to_browser_term_1_f_0((MR_Word) TypeInfo_for_T_5, (MR_Box) Term_3);
	return ret_value;
}

#line 75 "browser_term.m"
MR_Word 
ML_BROWSE_univ_to_browser_term(
  MR_Word Univ_3)
#line 75 "browser_term.m"
{
#line 75 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__univ_to_browser_term_1_f_0((MR_Word) Univ_3);
	return ret_value;
}

#line 77 "browser_term.m"
MR_Word 
ML_BROWSE_synthetic_term_to_browser_term(
  MR_String FunctorString_5,
  MR_Word Args_6,
  MR_Word IsFunc_7)
#line 77 "browser_term.m"
{
#line 77 "browser_term.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_term__synthetic_term_to_browser_term_3_f_0((MR_String) FunctorString_5, (MR_Word) Args_6, (MR_Word) IsFunc_7);
	return ret_value;
}


static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) };

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0 = {
  (MR_String) "plain_term",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_term__mdb__browser_term__field_types_browser_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) }
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) }
};

static const MR_PseudoTypeInfo mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__browser_term__list__ti_list_1univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mdb__browser_term__maybe__ti_maybe_1univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1 = {
  (MR_String) "synthetic_term",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__browser_term__mdb__browser_term__field_types_browser_term_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0[1] = { &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0 };

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1[1] = { &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1 };

static const MR_DuPtagLayout mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_term__mdb__browser_term__du_stag_ordered_browser_term_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0[2] = {
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_0,
  &mdb__browser_term__mdb__browser_term__du_functor_desc_browser_term_0_1
};

static const MR_Integer mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_term____Unify____browser_term_0_0_10001)),
  ((MR_Box) (mdb__browser_term____Compare____browser_term_0_0_10001)),
  (MR_String) "mdb.browser_term",
  (MR_String) "browser_term",
  { mdb__browser_term__mdb__browser_term__du_name_ordered_browser_term_0 },
  { mdb__browser_term__mdb__browser_term__du_ptag_ordered_browser_term_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__browser_term__mdb__browser_term__functor_number_map_browser_term_0,

};

void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_8;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_term_scalar_common_1[0]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_term_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
    }
  }
}

MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__univ____Unify____univ_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&mdb__browser_term_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&mdb__browser_term_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mdb__browser_term__synthetic_term_to_browser_term_3_f_0(
  MR_String FunctorString_5,
  MR_Word Args_6,
  MR_Word IsFunc_7)
{
  MR_Word BrowserTerm_8;

  switch (IsFunc_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        BrowserTerm_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BrowserTerm_8, 0) = ((MR_Box) (FunctorString_5));
        MR_hl_field(1, BrowserTerm_8, 1) = ((MR_Box) (Args_6));
        MR_hl_field(1, BrowserTerm_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FuncArgs_9;
        MR_Word Return_10;
        MR_Word Var_12;
        MR_Box conv0_Return_10;

        mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_6, &FuncArgs_9, &conv0_Return_10);
        Return_10 = ((MR_Word) (conv0_Return_10));
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (Return_10));
        }
        {
          BrowserTerm_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, BrowserTerm_8, 0) = ((MR_Box) (FunctorString_5));
          MR_hl_field(1, BrowserTerm_8, 1) = ((MR_Box) (FuncArgs_9));
          MR_hl_field(1, BrowserTerm_8, 2) = ((MR_Box) (Var_12));
        }
      }
      break;
  }
  return BrowserTerm_8;
}

MR_Word MR_CALL 
mdb__browser_term__plain_term_to_browser_term_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box Term_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  Var_4 = mercury__univ__univ_1_f_0(TypeInfo_for_T_5, Term_3);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mdb__browser_term__univ_to_browser_term_1_f_0(
  MR_Word Univ_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Univ_3));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdb__browser_term____Unify____browser_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__browser_term____Unify____browser_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__browser_term____Compare____browser_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__browser_term____Compare____browser_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__browser_term__init(void)
{
}

void mercury__mdb__browser_term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0);
}

void mercury__mdb__browser_term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__browser_term__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.browser_term.
