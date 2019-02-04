/*
** Automatically generated from `read.m'
** by the Mercury compiler,
** version rotd-2018-03-11
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


// :- module read.
// :- implementation.

/*
INIT mercury__read__init
ENDINIT
*/

#include "read.mih"


#include "demangle.mih"
#include "globals.mih"
#include "options.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "require.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"










#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
read__read_what_to_profile_3_p_0(
  MR_Word * WhatToProfile_4)
{
  {
    MR_bool succeeded;
    MR_String Str_6;
    MR_Word WhatToProfile0_7;

    read__read_string_3_p_0(&Str_6);
    succeeded = globals__what_to_profile_2_p_0(Str_6, &WhatToProfile0_7);
    if (succeeded)
      *WhatToProfile_4 = WhatToProfile0_7;
    else
    {
      MR_String Var_13;

      Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: WhatToProfile = ", Str_6);
      {
        mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_what_to_profile\'/3", Var_13);
        return;
      }
    }
  }
}

void MR_CALL 
read__read_float_3_p_0(
  MR_Float * Float_4)
{
  {
    MR_bool succeeded;
    MR_String FloatStr_6;
    MR_Float Float0_7;

    read__read_string_3_p_0(&FloatStr_6);
    succeeded = mercury__string__to_float_2_p_0(FloatStr_6, &Float0_7);
    if (succeeded)
      *Float_4 = Float0_7;
    else
    {
      MR_String Var_13;

      Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not a float ", FloatStr_6);
      {
        mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_float\'/3", Var_13);
        return;
      }
    }
  }
}

void MR_CALL 
read__read_int_3_p_0(
  MR_Integer * Int_4)
{
  {
    MR_bool succeeded;
    MR_String IntStr_6;
    MR_Integer Int0_7;

    read__read_string_3_p_0(&IntStr_6);
    succeeded = mercury__string__to_int_2_p_0(IntStr_6, &Int0_7);
    if (succeeded)
      *Int_4 = Int0_7;
    else
    {
      MR_String Var_13;

      Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not an integer ", IntStr_6);
      {
        mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_int\'/3", Var_13);
        return;
      }
    }
  }
}

void MR_CALL 
read__read_string_3_p_0(
  MR_String * String_4)
{
  {
    MR_Word WordResult_6;

    mercury__io__read_word_3_p_0(&WordResult_6);
    switch (MR_tag((MR_Word) WordResult_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_string\'/3", (MR_String) "EOF reached");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), WordResult_6, (MR_Integer) 0)));

          mercury__string__from_char_list_2_p_0(CharList_7, String_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), WordResult_6, (MR_Integer) 0)));
          MR_String Var_14;

          Var_14 = mercury__io__error_message_1_f_0(Error_8);
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_string\'/3", Var_14);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__read_label_name_3_p_0(
  MR_String * LabelName_4)
{
  {
    MR_Word Demangle_6;
    MR_Word WordResult_7;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &Demangle_6);
    mercury__io__read_word_3_p_0(&WordResult_7);
    switch (MR_tag((MR_Word) WordResult_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_name\'/3", (MR_String) "EOF reached");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), WordResult_7, (MR_Integer) 0)));
          MR_String MangledLabelName_9;

          mercury__string__from_char_list_2_p_0(CharList0_8, &MangledLabelName_9);
          switch (Demangle_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *LabelName_4 = MangledLabelName_9;
              break;
            case (MR_Integer) 1:
              demangle__demangle_2_p_0(MangledLabelName_9, LabelName_4);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), WordResult_7, (MR_Integer) 0)));
          MR_String Var_18;

          Var_18 = mercury__io__error_message_1_f_0(Error_10);
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_name\'/3", Var_18);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__read_label_addr_3_p_0(
  MR_Integer * LabelAddr_4)
{
  {
    MR_bool succeeded;
    MR_Word WordResult_6;

    mercury__io__read_word_3_p_0(&WordResult_6);
    switch (MR_tag((MR_Word) WordResult_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_addr\'/3", (MR_String) "EOF reached");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), WordResult_6, (MR_Integer) 0)));
          MR_String LabelAddrStr_8;
          MR_Integer LabelAddr0_9;

          mercury__string__from_char_list_2_p_0(CharList_7, &LabelAddrStr_8);
          succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, LabelAddrStr_8, &LabelAddr0_9);
          if (succeeded)
            *LabelAddr_4 = LabelAddr0_9;
          else
          {
            MR_Integer LabelAddrHex_10;

            succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, LabelAddrStr_8, &LabelAddrHex_10);
            if (succeeded)
              *LabelAddr_4 = LabelAddrHex_10;
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_addr\'/3", (MR_String) "Label address not hexadecimal or integer");
                return;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), WordResult_6, (MR_Integer) 0)));
          MR_String Var_17;

          Var_17 = mercury__io__error_message_1_f_0(Error_11);
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_addr\'/3", Var_17);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__maybe_read_label_name_3_p_0(
  MR_Word * MaybeLabelName_4)
{
  {
    MR_Word Demangle_6;
    MR_Word WordResult_7;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &Demangle_6);
    mercury__io__read_word_3_p_0(&WordResult_7);
    switch (MR_tag((MR_Word) WordResult_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeLabelName_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), WordResult_7, (MR_Integer) 0)));
          MR_String MangledLabelName_9;

          mercury__string__from_char_list_2_p_0(CharList0_8, &MangledLabelName_9);
          switch (Demangle_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeLabelName_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MangledLabelName_9));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String LabelName_10;

                demangle__demangle_2_p_0(MangledLabelName_9, &LabelName_10);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeLabelName_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LabelName_10));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), WordResult_7, (MR_Integer) 0)));
          MR_String Var_19;

          Var_19 = mercury__io__error_message_1_f_0(Error_11);
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_name\'/3", Var_19);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__maybe_read_label_addr_3_p_0(
  MR_Word * MaybeLabelAddr_4)
{
  {
    MR_bool succeeded;
    MR_Word WordResult_6;

    mercury__io__read_word_3_p_0(&WordResult_6);
    switch (MR_tag((MR_Word) WordResult_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeLabelAddr_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), WordResult_6, (MR_Integer) 0)));
          MR_String LabelAddrStr_8;
          MR_Integer LabelAddr_9;

          mercury__string__from_char_list_2_p_0(CharList_7, &LabelAddrStr_8);
          succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, LabelAddrStr_8, &LabelAddr_9);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLabelAddr_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LabelAddr_9));
            }
          else
          {
            MR_Integer LabelAddrHex_10;

            succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, LabelAddrStr_8, &LabelAddrHex_10);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeLabelAddr_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LabelAddrHex_10));
              }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_addr\'/3", (MR_String) "Label address not hexadecimal or integer");
                return;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), WordResult_6, (MR_Integer) 0)));
          MR_String Var_17;

          Var_17 = mercury__io__error_message_1_f_0(Error_11);
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_addr\'/3", Var_17);
            return;
          }
        }
        break;
    }
  }
}

void mercury__read__init(void)
{
}

void mercury__read__init_type_tables(void)
{
}

void mercury__read__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__read__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module read.
