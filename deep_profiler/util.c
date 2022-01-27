/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version rotd-2021-07-19
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


// :- module util.
// :- implementation.

/*
INIT mercury__util__init
ENDINIT
*/

#include "util.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static void MR_CALL 
util__split_2_3_p_0(
  MR_Word Chars_4,
  MR_Char SplitChar_5,
  MR_Word * PieceStrs_6);

static MR_bool MR_CALL 
util__find_split_char_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Char SplitChar_8,
  MR_Word STATE_VARIABLE_BeforeRev_0_11,
  MR_Word * STATE_VARIABLE_BeforeRev_12,
  MR_Word * After_10);







#include "string.mh"



void MR_CALL 
util__split_3_p_0(
  MR_String Str0_4,
  MR_Char SplitChar_5,
  MR_Word * Strs_6)
{
  {
    MR_Word Chars0_7;

    mercury__string__to_char_list_2_p_0(Str0_4, &Chars0_7);
    util__split_2_3_p_0(Chars0_7, SplitChar_5, Strs_6);
  }
}

static void MR_CALL 
util__split_2_3_p_0(
  MR_Word Chars_4,
  MR_Char SplitChar_5,
  MR_Word * PieceStrs_6)
{
  {
    MR_bool succeeded;
    MR_Word Before_7;
    MR_Word After_8;
    MR_Word TypeCtorInfo_11_19;
    MR_Word BeforeRev_17;

    succeeded = util__find_split_char_2_5_p_0(Chars_4, SplitChar_5, (MR_Word) ((MR_Unsigned) 0U), &BeforeRev_17, &After_8);
    if (succeeded)
    {
      TypeCtorInfo_11_19 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
      mercury__list__reverse_2_p_0(TypeCtorInfo_11_19, BeforeRev_17, &Before_7);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String BeforeStr_9;
      MR_Word TailStrs_10;

      mercury__string__from_char_list_2_p_0(Before_7, &BeforeStr_9);
      util__split_2_3_p_0(After_8, SplitChar_5, &TailStrs_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PieceStrs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BeforeStr_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailStrs_10));
      }
    }
    else
    {
      MR_String PieceStr_11;

      mercury__string__from_char_list_2_p_0(Chars_4, &PieceStr_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PieceStrs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PieceStr_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static MR_bool MR_CALL 
util__find_split_char_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Char SplitChar_8,
  MR_Word STATE_VARIABLE_BeforeRev_0_11,
  MR_Word * STATE_VARIABLE_BeforeRev_12,
  MR_Word * After_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Char Char_6;
    MR_Word Chars_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Chars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = (Char_6 == SplitChar_8);
      if (succeeded)
      {
        *After_10 = Chars_7;
        *STATE_VARIABLE_BeforeRev_12 = STATE_VARIABLE_BeforeRev_0_11;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word STATE_VARIABLE_BeforeRev_13_13;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_BeforeRev_0_11;

        {
          STATE_VARIABLE_BeforeRev_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_BeforeRev_13_13, 0) = ((MR_Box) (MR_Word) (Char_6));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_BeforeRev_13_13, 1) = ((MR_Box) (STATE_VARIABLE_BeforeRev_0_11));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Chars_7;
        next_value_of_STATE_VARIABLE_BeforeRev_0_11 = STATE_VARIABLE_BeforeRev_13_13;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_BeforeRev_0_11 = next_value_of_STATE_VARIABLE_BeforeRev_0_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void mercury__util__init(void)
{
}

void mercury__util__init_type_tables(void)
{
}

void mercury__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module util.
