/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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




#line 71 "util.m"
static MR_bool MR_CALL 
util__find_split_char_2_5_p_0(
#line 71 "util.m"
  MR_Word util__HeadVar__1_1,
#line 71 "util.m"
  MR_Char util__SplitChar_8,
#line 71 "util.m"
  MR_Word util__STATE_VARIABLE_BeforeRev_0_11,
#line 71 "util.m"
  MR_Word * util__STATE_VARIABLE_BeforeRev_12,
#line 71 "util.m"
  MR_Word * util__After_10);

#line 45 "util.m"
static void MR_CALL 
util__split_2_3_p_0(
#line 45 "util.m"
  MR_Word util__Chars_4,
#line 45 "util.m"
  MR_Char util__SplitChar_5,
#line 45 "util.m"
  MR_Word * util__PieceStrs_6);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 71 "util.m"
static MR_bool MR_CALL 
util__find_split_char_2_5_p_0(
#line 71 "util.m"
  MR_Word util__HeadVar__1_1,
#line 71 "util.m"
  MR_Char util__SplitChar_8,
#line 71 "util.m"
  MR_Word util__STATE_VARIABLE_BeforeRev_0_11,
#line 71 "util.m"
  MR_Word * util__STATE_VARIABLE_BeforeRev_12,
#line 71 "util.m"
  MR_Word * util__After_10)
#line 71 "util.m"
{
#line 74 "util.m"
  while (MR_TRUE)
#line 74 "util.m"
    {
#line 74 "util.m"
      /* tailcall optimized into a loop */
#line 74 "util.m"
      {
#line 74 "util.m"
        MR_bool util__succeeded = ((MR_tag((MR_Word) util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 74 "util.m"
        MR_Char util__Char_6;
#line 74 "util.m"
        MR_Word util__Chars_7;

#line 74 "util.m"
        if (util__succeeded)
#line 74 "util.m"
          {
#line 74 "util.m"
            util__Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), util__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "util.m"
            util__Chars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "util.m"
            util__succeeded = (util__Char_6 == util__SplitChar_8);
#line 77 "util.m"
            if (util__succeeded)
#line 76 "util.m"
              {
#line 76 "util.m"
                *util__After_10 = util__Chars_7;
#line 76 "util.m"
                *util__STATE_VARIABLE_BeforeRev_12 = util__STATE_VARIABLE_BeforeRev_0_11;
#line 76 "util.m"
                util__succeeded = MR_TRUE;
#line 76 "util.m"
              }
#line 77 "util.m"
            else
#line 78 "util.m"
              {
#line 78 "util.m"
                MR_Word util__STATE_VARIABLE_BeforeRev_13_13;

#line 78 "util.m"
                {
#line 78 "util.m"
                  util__STATE_VARIABLE_BeforeRev_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "util.m"
                  MR_hl_field(MR_mktag(1), util__STATE_VARIABLE_BeforeRev_13_13, 0) = ((MR_Box) (MR_Word) (util__Char_6));
#line 78 "util.m"
                  MR_hl_field(MR_mktag(1), util__STATE_VARIABLE_BeforeRev_13_13, 1) = ((MR_Box) (util__STATE_VARIABLE_BeforeRev_0_11));
#line 78 "util.m"
                }
#line 79 "util.m"
                /* direct tailcall eliminated */
#line 79 "util.m"
                {
#line 79 "util.m"
                  MR_Word util__HeadVar__1__tmp_copy_1 = util__Chars_7;
#line 79 "util.m"
                  MR_Word util__STATE_VARIABLE_BeforeRev_0__tmp_copy_11 = util__STATE_VARIABLE_BeforeRev_13_13;

#line 79 "util.m"
                  util__STATE_VARIABLE_BeforeRev_0_11 = util__STATE_VARIABLE_BeforeRev_0__tmp_copy_11;
#line 79 "util.m"
                  util__HeadVar__1_1 = util__HeadVar__1__tmp_copy_1;
#line 79 "util.m"
                }
#line 79 "util.m"
                continue;
#line 78 "util.m"
              }
#line 74 "util.m"
          }
#line 74 "util.m"
        return util__succeeded;
#line 74 "util.m"
      }
#line 74 "util.m"
      break;
#line 74 "util.m"
    }
#line 71 "util.m"
}

#line 45 "util.m"
static void MR_CALL 
util__split_2_3_p_0(
#line 45 "util.m"
  MR_Word util__Chars_4,
#line 45 "util.m"
  MR_Char util__SplitChar_5,
#line 45 "util.m"
  MR_Word * util__PieceStrs_6)
#line 45 "util.m"
{
#line 52 "util.m"
  {
#line 52 "util.m"
    MR_bool util__succeeded;
#line 52 "util.m"
    MR_Word util__Before_7;
#line 52 "util.m"
    MR_Word util__After_8;
#line 67 "util.m"
    MR_Word util__TypeCtorInfo_11_19;
#line 67 "util.m"
    MR_Word util__BeforeRev_17;

#line 68 "util.m"
    {
#line 68 "util.m"
      util__succeeded = util__find_split_char_2_5_p_0(util__Chars_4, util__SplitChar_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &util__BeforeRev_17, &util__After_8);
    }
#line 67 "util.m"
    if (util__succeeded)
#line 67 "util.m"
      {
#line 236 "util.c"
        util__TypeCtorInfo_11_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 69 "util.m"
        {
#line 69 "util.m"
          mercury__list__reverse_2_p_0(util__TypeCtorInfo_11_19, util__BeforeRev_17, &util__Before_7);
        }
#line 69 "util.m"
        util__succeeded = MR_TRUE;
#line 67 "util.m"
      }
#line 52 "util.m"
    if (util__succeeded)
#line 49 "util.m"
      {
#line 49 "util.m"
        MR_String util__BeforeStr_9;
#line 49 "util.m"
        MR_Word util__TailStrs_10;

#line 49 "util.m"
        {
#line 49 "util.m"
          mercury__string__from_char_list_2_p_0(util__Before_7, &util__BeforeStr_9);
        }
#line 50 "util.m"
        {
#line 50 "util.m"
          util__split_2_3_p_0(util__After_8, util__SplitChar_5, &util__TailStrs_10);
        }
#line 51 "util.m"
        {
#line 51 "util.m"
          MR_Word base;
#line 51 "util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 51 "util.m"
          *util__PieceStrs_6 = base;
#line 51 "util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (util__BeforeStr_9));
#line 51 "util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (util__TailStrs_10));
#line 51 "util.m"
        }
#line 49 "util.m"
      }
#line 52 "util.m"
    else
#line 53 "util.m"
      {
#line 53 "util.m"
        MR_String util__PieceStr_11;

#line 53 "util.m"
        {
#line 53 "util.m"
          mercury__string__from_char_list_2_p_0(util__Chars_4, &util__PieceStr_11);
        }
#line 54 "util.m"
        {
#line 54 "util.m"
          MR_Word base;
#line 54 "util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 54 "util.m"
          *util__PieceStrs_6 = base;
#line 54 "util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (util__PieceStr_11));
#line 54 "util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 54 "util.m"
        }
#line 53 "util.m"
      }
#line 52 "util.m"
  }
#line 45 "util.m"
}

#line 30 "util.m"
void MR_CALL 
util__split_3_p_0(
#line 30 "util.m"
  MR_String util__Str0_4,
#line 30 "util.m"
  MR_Char util__SplitChar_5,
#line 30 "util.m"
  MR_Word * util__Strs_6)
#line 30 "util.m"
{
#line 41 "util.m"
  {
#line 41 "util.m"
    MR_bool util__succeeded;
#line 41 "util.m"
    MR_Word util__Chars0_7;

#line 42 "util.m"
    {
#line 42 "util.m"
      mercury__string__to_char_list_2_p_0(util__Str0_4, &util__Chars0_7);
    }
#line 43 "util.m"
    {
#line 43 "util.m"
      util__split_2_3_p_0(util__Chars0_7, util__SplitChar_5, util__Strs_6);
#line 43 "util.m"
      return;
    }
#line 41 "util.m"
  }
#line 30 "util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module util. */
