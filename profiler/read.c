/*
** Automatically generated from `read.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module read. */
/* :- implementation. */

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
  MR_Word * read__WhatToProfile_4)
{
  {
    MR_bool read__succeeded;
    MR_String read__Str_6;
    MR_Word read__WhatToProfile0_7;

    {
      read__read_string_3_p_0(&read__Str_6);
    }
    {
      read__succeeded = globals__what_to_profile_2_p_0(read__Str_6, &read__WhatToProfile0_7);
    }
    if (read__succeeded)
      *read__WhatToProfile_4 = read__WhatToProfile0_7;
    else
      {
        MR_String read__Var_13;

        {
          read__Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: WhatToProfile = ", read__Str_6);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_what_to_profile\'/3", read__Var_13);
          return;
        }
      }
  }
}

void MR_CALL 
read__read_float_3_p_0(
  MR_Float * read__Float_4)
{
  {
    MR_bool read__succeeded;
    MR_String read__FloatStr_6;
    MR_Float read__Float0_7;

    {
      read__read_string_3_p_0(&read__FloatStr_6);
    }
    {
      read__succeeded = mercury__string__to_float_2_p_0(read__FloatStr_6, &read__Float0_7);
    }
    if (read__succeeded)
      *read__Float_4 = read__Float0_7;
    else
      {
        MR_String read__Var_13;

        {
          read__Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not a float ", read__FloatStr_6);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_float\'/3", read__Var_13);
          return;
        }
      }
  }
}

void MR_CALL 
read__read_int_3_p_0(
  MR_Integer * read__Int_4)
{
  {
    MR_bool read__succeeded;
    MR_String read__IntStr_6;
    MR_Integer read__Int0_7;

    {
      read__read_string_3_p_0(&read__IntStr_6);
    }
    {
      read__succeeded = mercury__string__to_int_2_p_0(read__IntStr_6, &read__Int0_7);
    }
    if (read__succeeded)
      *read__Int_4 = read__Int0_7;
    else
      {
        MR_String read__Var_13;

        {
          read__Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not an integer ", read__IntStr_6);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_int\'/3", read__Var_13);
          return;
        }
      }
  }
}

void MR_CALL 
read__read_string_3_p_0(
  MR_String * read__String_4)
{
  {
    MR_bool read__succeeded;
    MR_Word read__WordResult_6;

    {
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
    switch (MR_tag((MR_Word) read__WordResult_6)) {
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
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));

          {
            mercury__string__from_char_list_2_p_0(read__CharList_7, read__String_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word read__Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
          MR_String read__Var_14;

          {
            read__Var_14 = mercury__io__error_message_1_f_0(read__Error_8);
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_string\'/3", read__Var_14);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__read_label_name_3_p_0(
  MR_String * read__LabelName_4)
{
  {
    MR_bool read__succeeded;
    MR_Word read__Demangle_6;
    MR_Word read__WordResult_7;

    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &read__Demangle_6);
    }
    {
      mercury__io__read_word_3_p_0(&read__WordResult_7);
    }
    switch (MR_tag((MR_Word) read__WordResult_7)) {
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
          MR_Word read__CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_7, (MR_Integer) 0)));
          MR_String read__MangledLabelName_9;

          {
            mercury__string__from_char_list_2_p_0(read__CharList0_8, &read__MangledLabelName_9);
          }
          switch (read__Demangle_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *read__LabelName_4 = read__MangledLabelName_9;
              break;
            case (MR_Integer) 1:
              {
                demangle__demangle_2_p_0(read__MangledLabelName_9, read__LabelName_4);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word read__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_7, (MR_Integer) 0)));
          MR_String read__Var_18;

          {
            read__Var_18 = mercury__io__error_message_1_f_0(read__Error_10);
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_name\'/3", read__Var_18);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__read_label_addr_3_p_0(
  MR_Integer * read__LabelAddr_4)
{
  {
    MR_bool read__succeeded;
    MR_Word read__WordResult_6;

    {
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
    switch (MR_tag((MR_Word) read__WordResult_6)) {
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
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));
          MR_String read__LabelAddrStr_8;
          MR_Integer read__LabelAddr0_9;

          {
            mercury__string__from_char_list_2_p_0(read__CharList_7, &read__LabelAddrStr_8);
          }
          {
            read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, read__LabelAddrStr_8, &read__LabelAddr0_9);
          }
          if (read__succeeded)
            *read__LabelAddr_4 = read__LabelAddr0_9;
          else
            {
              MR_Integer read__LabelAddrHex_10;

              {
                read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, read__LabelAddrStr_8, &read__LabelAddrHex_10);
              }
              if (read__succeeded)
                *read__LabelAddr_4 = read__LabelAddrHex_10;
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
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
          MR_String read__Var_17;

          {
            read__Var_17 = mercury__io__error_message_1_f_0(read__Error_11);
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_addr\'/3", read__Var_17);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__maybe_read_label_name_3_p_0(
  MR_Word * read__MaybeLabelName_4)
{
  {
    MR_bool read__succeeded;
    MR_Word read__Demangle_6;
    MR_Word read__WordResult_7;

    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &read__Demangle_6);
    }
    {
      mercury__io__read_word_3_p_0(&read__WordResult_7);
    }
    switch (MR_tag((MR_Word) read__WordResult_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *read__MaybeLabelName_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word read__CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_7, (MR_Integer) 0)));
          MR_String read__MangledLabelName_9;

          {
            mercury__string__from_char_list_2_p_0(read__CharList0_8, &read__MangledLabelName_9);
          }
          switch (read__Demangle_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *read__MaybeLabelName_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__MangledLabelName_9));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String read__LabelName_10;

                {
                  demangle__demangle_2_p_0(read__MangledLabelName_9, &read__LabelName_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *read__MaybeLabelName_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelName_10));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_7, (MR_Integer) 0)));
          MR_String read__Var_19;

          {
            read__Var_19 = mercury__io__error_message_1_f_0(read__Error_11);
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_name\'/3", read__Var_19);
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
read__maybe_read_label_addr_3_p_0(
  MR_Word * read__MaybeLabelAddr_4)
{
  {
    MR_bool read__succeeded;
    MR_Word read__WordResult_6;

    {
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
    switch (MR_tag((MR_Word) read__WordResult_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *read__MaybeLabelAddr_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));
          MR_String read__LabelAddrStr_8;
          MR_Integer read__LabelAddr_9;

          {
            mercury__string__from_char_list_2_p_0(read__CharList_7, &read__LabelAddrStr_8);
          }
          {
            read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, read__LabelAddrStr_8, &read__LabelAddr_9);
          }
          if (read__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *read__MaybeLabelAddr_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelAddr_9));
            }
          else
            {
              MR_Integer read__LabelAddrHex_10;

              {
                read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, read__LabelAddrStr_8, &read__LabelAddrHex_10);
              }
              if (read__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *read__MaybeLabelAddr_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelAddrHex_10));
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
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
          MR_String read__Var_17;

          {
            read__Var_17 = mercury__io__error_message_1_f_0(read__Error_11);
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_addr\'/3", read__Var_17);
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

/* :- end_module read. */
