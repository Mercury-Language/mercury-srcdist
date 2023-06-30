/*
** Automatically generated from `read.m'
** by the Mercury compiler,
** version rotd-2023-06-30
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


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "demangle.mih"
#include "enum.mih"
#include "getopt.mih"
#include "globals.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
read__read_what_to_profile_4_p_0(
  MR_Word InputStream_5,
  MR_Word * WhatToProfile_6)
{
  MR_bool succeeded;
  MR_String Str_8;
  MR_Word WhatToProfile0_9;

  read__read_string_4_p_0(InputStream_5, &Str_8);
  succeeded = globals__what_to_profile_2_p_0(Str_8, &WhatToProfile0_9);
  if (succeeded)
    *WhatToProfile_6 = WhatToProfile0_9;
  else
  {
    MR_String Var_14;

    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: WhatToProfile = ", Str_8);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_what_to_profile\'/4", Var_14);
      return;
    }
  }
}

void MR_CALL 
read__read_float_4_p_0(
  MR_Word InputStream_5,
  MR_Float * Float_6)
{
  MR_bool succeeded;
  MR_String FloatStr_8;
  MR_Float Float0_9;

  read__read_string_4_p_0(InputStream_5, &FloatStr_8);
  succeeded = mercury__string__to_float_2_p_0(FloatStr_8, &Float0_9);
  if (succeeded)
    *Float_6 = Float0_9;
  else
  {
    MR_String Var_14;

    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not a float ", FloatStr_8);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_float\'/4", Var_14);
      return;
    }
  }
}

void MR_CALL 
read__read_int_4_p_0(
  MR_Word InputStream_5,
  MR_Integer * Int_6)
{
  MR_bool succeeded;
  MR_String IntStr_8;
  MR_Integer Int0_9;

  read__read_string_4_p_0(InputStream_5, &IntStr_8);
  succeeded = mercury__string__to_int_2_p_0(IntStr_8, &Int0_9);
  if (succeeded)
    *Int_6 = Int0_9;
  else
  {
    MR_String Var_14;

    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not an integer ", IntStr_8);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_int\'/4", Var_14);
      return;
    }
  }
}

void MR_CALL 
read__read_string_4_p_0(
  MR_Word InputStream_5,
  MR_String * String_6)
{
  MR_Word WordResult_8;

  mercury__io__read_word_4_p_0(InputStream_5, &WordResult_8);
  switch (MR_tag((MR_Word) WordResult_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_string\'/4", (MR_String) "EOF reached");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CharList_9 = ((MR_Word) ((MR_hl_field(1, WordResult_8, (MR_Integer) 0))));

        mercury__string__from_char_list_2_p_0(CharList_9, String_6);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_10 = ((MR_Word) ((MR_hl_field(2, WordResult_8, (MR_Integer) 0))));
        MR_String Var_17;

        Var_17 = mercury__io__error_message_1_f_0(Error_10);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_string\'/4", Var_17);
          return;
        }
      }
      break;
  }
}

void MR_CALL 
read__read_label_name_4_p_0(
  MR_Word InputStream_5,
  MR_String * LabelName_6)
{
  MR_Word Demangle_8;
  MR_Word WordResult_9;

  globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &Demangle_8);
  mercury__io__read_word_4_p_0(InputStream_5, &WordResult_9);
  switch (MR_tag((MR_Word) WordResult_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_label_name\'/4", (MR_String) "EOF reached");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CharList0_10 = ((MR_Word) ((MR_hl_field(1, WordResult_9, (MR_Integer) 0))));
        MR_String MangledLabelName_11;

        mercury__string__from_char_list_2_p_0(CharList0_10, &MangledLabelName_11);
        switch (Demangle_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *LabelName_6 = MangledLabelName_11;
            break;
          case (MR_Integer) 1:
            demangle__demangle_2_p_0(MangledLabelName_11, LabelName_6);
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_12 = ((MR_Word) ((MR_hl_field(2, WordResult_9, (MR_Integer) 0))));
        MR_String Var_21;

        Var_21 = mercury__io__error_message_1_f_0(Error_12);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_label_name\'/4", Var_21);
          return;
        }
      }
      break;
  }
}

void MR_CALL 
read__read_label_addr_4_p_0(
  MR_Word InputStream_5,
  MR_Integer * LabelAddr_6)
{
  MR_bool succeeded;
  MR_Word WordResult_8;

  mercury__io__read_word_4_p_0(InputStream_5, &WordResult_8);
  switch (MR_tag((MR_Word) WordResult_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_label_addr\'/4", (MR_String) "EOF reached");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CharList_9 = ((MR_Word) ((MR_hl_field(1, WordResult_8, (MR_Integer) 0))));
        MR_String LabelAddrStr_10;
        MR_Integer LabelAddr0_11;

        mercury__string__from_char_list_2_p_0(CharList_9, &LabelAddrStr_10);
        succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, LabelAddrStr_10, &LabelAddr0_11);
        if (succeeded)
          *LabelAddr_6 = LabelAddr0_11;
        else
        {
          MR_Integer LabelAddrHex_12;

          succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, LabelAddrStr_10, &LabelAddrHex_12);
          if (succeeded)
            *LabelAddr_6 = LabelAddrHex_12;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_label_addr\'/4", (MR_String) "Label address not hexadecimal or integer");
              return;
            }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(2, WordResult_8, (MR_Integer) 0))));
        MR_String Var_24;

        Var_24 = mercury__io__error_message_1_f_0(Error_13);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.read_label_addr\'/4", Var_24);
          return;
        }
      }
      break;
  }
}

void MR_CALL 
read__maybe_read_label_name_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeLabelName_6)
{
  MR_Word Demangle_8;
  MR_Word WordResult_9;

  globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &Demangle_8);
  mercury__io__read_word_4_p_0(InputStream_5, &WordResult_9);
  switch (MR_tag((MR_Word) WordResult_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeLabelName_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word CharList0_10 = ((MR_Word) ((MR_hl_field(1, WordResult_9, (MR_Integer) 0))));
        MR_String MangledLabelName_11;

        mercury__string__from_char_list_2_p_0(CharList0_10, &MangledLabelName_11);
        switch (Demangle_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLabelName_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MangledLabelName_11));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String LabelName_12;

              demangle__demangle_2_p_0(MangledLabelName_11, &LabelName_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeLabelName_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (LabelName_12));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(2, WordResult_9, (MR_Integer) 0))));
        MR_String Var_20;

        Var_20 = mercury__io__error_message_1_f_0(Error_13);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.maybe_read_label_name\'/4", Var_20);
          return;
        }
      }
      break;
  }
}

void MR_CALL 
read__maybe_read_label_addr_4_p_0(
  MR_Word InputStream_5,
  MR_Word * MaybeLabelAddr_6)
{
  MR_bool succeeded;
  MR_Word WordResult_8;

  mercury__io__read_word_4_p_0(InputStream_5, &WordResult_8);
  switch (MR_tag((MR_Word) WordResult_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeLabelAddr_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word CharList_9 = ((MR_Word) ((MR_hl_field(1, WordResult_8, (MR_Integer) 0))));
        MR_String LabelAddrStr_10;
        MR_Integer LabelAddr_11;

        mercury__string__from_char_list_2_p_0(CharList_9, &LabelAddrStr_10);
        succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, LabelAddrStr_10, &LabelAddr_11);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeLabelAddr_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (LabelAddr_11));
          }
        else
        {
          MR_Integer LabelAddrHex_12;

          succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, LabelAddrStr_10, &LabelAddrHex_12);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLabelAddr_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LabelAddrHex_12));
            }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.maybe_read_label_addr\'/4", (MR_String) "Label address not hexadecimal or integer");
              return;
            }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(2, WordResult_8, (MR_Integer) 0))));
        MR_String Var_22;

        Var_22 = mercury__io__error_message_1_f_0(Error_13);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140read.maybe_read_label_addr\'/4", Var_22);
          return;
        }
      }
      break;
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
