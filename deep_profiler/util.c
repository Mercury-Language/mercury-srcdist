/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module util. */
/* :- implementation. */

/*
INIT mercury__util__init
ENDINIT
*/

#include "util.mih"


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




static void MR_CALL 
util__split_2_3_p_0(
  MR_Word util__Chars_4,
  MR_Char util__SplitChar_5,
  MR_Word * util__PieceStrs_6);

static MR_bool MR_CALL 
util__find_split_char_2_5_p_0(
  MR_Word util__HeadVar__1_1,
  MR_Char util__SplitChar_8,
  MR_Word util__STATE_VARIABLE_BeforeRev_0_11,
  MR_Word * util__STATE_VARIABLE_BeforeRev_12,
  MR_Word * util__After_10);







#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
util__split_3_p_0(
  MR_String util__Str0_4,
  MR_Char util__SplitChar_5,
  MR_Word * util__Strs_6)
{
  {
    MR_bool util__succeeded;
    MR_Word util__Chars0_7;

    {
      mercury__string__to_char_list_2_p_0(util__Str0_4, &util__Chars0_7);
    }
    {
      util__split_2_3_p_0(util__Chars0_7, util__SplitChar_5, util__Strs_6);
    }
  }
}

static void MR_CALL 
util__split_2_3_p_0(
  MR_Word util__Chars_4,
  MR_Char util__SplitChar_5,
  MR_Word * util__PieceStrs_6)
{
  {
    MR_bool util__succeeded;
    MR_Word util__Before_7;
    MR_Word util__After_8;
    MR_Word util__TypeCtorInfo_11_19;
    MR_Word util__BeforeRev_17;

    {
      util__succeeded = util__find_split_char_2_5_p_0(util__Chars_4, util__SplitChar_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &util__BeforeRev_17, &util__After_8);
    }
    if (util__succeeded)
      {
        util__TypeCtorInfo_11_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        {
          mercury__list__reverse_2_p_0(util__TypeCtorInfo_11_19, util__BeforeRev_17, &util__Before_7);
        }
        util__succeeded = MR_TRUE;
      }
    if (util__succeeded)
      {
        MR_String util__BeforeStr_9;
        MR_Word util__TailStrs_10;

        {
          mercury__string__from_char_list_2_p_0(util__Before_7, &util__BeforeStr_9);
        }
        {
          util__split_2_3_p_0(util__After_8, util__SplitChar_5, &util__TailStrs_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *util__PieceStrs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (util__BeforeStr_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (util__TailStrs_10));
        }
      }
    else
      {
        MR_String util__PieceStr_11;

        {
          mercury__string__from_char_list_2_p_0(util__Chars_4, &util__PieceStr_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *util__PieceStrs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (util__PieceStr_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

static MR_bool MR_CALL 
util__find_split_char_2_5_p_0(
  MR_Word util__HeadVar__1_1,
  MR_Char util__SplitChar_8,
  MR_Word util__STATE_VARIABLE_BeforeRev_0_11,
  MR_Word * util__STATE_VARIABLE_BeforeRev_12,
  MR_Word * util__After_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool util__succeeded = ((MR_tag((MR_Word) util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Char util__Char_6;
        MR_Word util__Chars_7;

        if (util__succeeded)
          {
            util__Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), util__HeadVar__1_1, (MR_Integer) 0)));
            util__Chars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), util__HeadVar__1_1, (MR_Integer) 1)));
            util__succeeded = (util__Char_6 == util__SplitChar_8);
            if (util__succeeded)
              {
                *util__After_10 = util__Chars_7;
                *util__STATE_VARIABLE_BeforeRev_12 = util__STATE_VARIABLE_BeforeRev_0_11;
                util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word util__STATE_VARIABLE_BeforeRev_13_13;

                {
                  util__STATE_VARIABLE_BeforeRev_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), util__STATE_VARIABLE_BeforeRev_13_13, 0) = ((MR_Box) (MR_Word) (util__Char_6));
                  MR_hl_field(MR_mktag(1), util__STATE_VARIABLE_BeforeRev_13_13, 1) = ((MR_Box) (util__STATE_VARIABLE_BeforeRev_0_11));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word util__next_value_of_HeadVar__1_1 = util__Chars_7;
                  MR_Word util__next_value_of_STATE_VARIABLE_BeforeRev_0_11 = util__STATE_VARIABLE_BeforeRev_13_13;

                  util__STATE_VARIABLE_BeforeRev_0_11 = util__next_value_of_STATE_VARIABLE_BeforeRev_0_11;
                  util__HeadVar__1_1 = util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return util__succeeded;
      }
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

/* :- end_module util. */
