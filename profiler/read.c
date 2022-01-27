/*
** Automatically generated from `read.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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





static /* final */ const MR_Box read_scalar_common_1[1][1];




static /* final */ const MR_Box read_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 41 "read.m"
void MR_CALL 
read__read_what_to_profile_3_p_0(
#line 41 "read.m"
  MR_Word * read__WhatToProfile_4)
#line 41 "read.m"
{
#line 188 "read.m"
  {
#line 188 "read.m"
    MR_bool read__succeeded;
#line 188 "read.m"
    MR_String read__Str_6;
#line 190 "read.m"
    MR_Word read__WhatToProfile0_7;

#line 189 "read.m"
    {
#line 189 "read.m"
      read__read_string_3_p_0(&read__Str_6);
    }
#line 190 "read.m"
    {
#line 190 "read.m"
      read__succeeded = globals__what_to_profile_2_p_0(read__Str_6, &read__WhatToProfile0_7);
    }
#line 190 "read.m"
    if (read__succeeded)
#line 191 "read.m"
      *read__WhatToProfile_4 = read__WhatToProfile0_7;
#line 190 "read.m"
    else
#line 193 "read.m"
      {
#line 193 "read.m"
        MR_String read__V_13_13;
#line 193 "read.m"
        MR_String read__V_18_18;

#line 194 "read.m"
        {
#line 194 "read.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &read_scalar_common_1[0], read__Str_6, &read__V_18_18);
        }
#line 194 "read.m"
        {
#line 194 "read.m"
          read__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: WhatToProfile = ", read__V_18_18);
        }
#line 193 "read.m"
        {
#line 193 "read.m"
          mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_what_to_profile\'/3", read__V_13_13);
#line 193 "read.m"
          return;
        }
#line 193 "read.m"
      }
#line 188 "read.m"
  }
#line 41 "read.m"
}

#line 39 "read.m"
void MR_CALL 
read__read_float_3_p_0(
#line 39 "read.m"
  MR_Float * read__Float_4)
#line 39 "read.m"
{
#line 177 "read.m"
  {
#line 177 "read.m"
    MR_bool read__succeeded;
#line 177 "read.m"
    MR_String read__FloatStr_6;
#line 179 "read.m"
    MR_Float read__Float0_7;

#line 178 "read.m"
    {
#line 178 "read.m"
      read__read_string_3_p_0(&read__FloatStr_6);
    }
#line 179 "read.m"
    {
#line 179 "read.m"
      read__succeeded = mercury__string__to_float_2_p_0(read__FloatStr_6, &read__Float0_7);
    }
#line 179 "read.m"
    if (read__succeeded)
#line 180 "read.m"
      *read__Float_4 = read__Float0_7;
#line 179 "read.m"
    else
#line 182 "read.m"
      {
#line 182 "read.m"
        MR_String read__V_13_13;
#line 182 "read.m"
        MR_String read__V_18_18;

#line 183 "read.m"
        {
#line 183 "read.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &read_scalar_common_1[0], read__FloatStr_6, &read__V_18_18);
        }
#line 183 "read.m"
        {
#line 183 "read.m"
          read__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not a float ", read__V_18_18);
        }
#line 182 "read.m"
        {
#line 182 "read.m"
          mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_float\'/3", read__V_13_13);
#line 182 "read.m"
          return;
        }
#line 182 "read.m"
      }
#line 177 "read.m"
  }
#line 39 "read.m"
}

#line 37 "read.m"
void MR_CALL 
read__read_int_3_p_0(
#line 37 "read.m"
  MR_Integer * read__Int_4)
#line 37 "read.m"
{
#line 166 "read.m"
  {
#line 166 "read.m"
    MR_bool read__succeeded;
#line 166 "read.m"
    MR_String read__IntStr_6;
#line 168 "read.m"
    MR_Integer read__Int0_7;

#line 167 "read.m"
    {
#line 167 "read.m"
      read__read_string_3_p_0(&read__IntStr_6);
    }
#line 168 "read.m"
    {
#line 168 "read.m"
      read__succeeded = mercury__string__to_int_2_p_0(read__IntStr_6, &read__Int0_7);
    }
#line 168 "read.m"
    if (read__succeeded)
#line 169 "read.m"
      *read__Int_4 = read__Int0_7;
#line 168 "read.m"
    else
#line 171 "read.m"
      {
#line 171 "read.m"
        MR_String read__V_13_13;
#line 171 "read.m"
        MR_String read__V_18_18;

#line 172 "read.m"
        {
#line 172 "read.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &read_scalar_common_1[0], read__IntStr_6, &read__V_18_18);
        }
#line 172 "read.m"
        {
#line 172 "read.m"
          read__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid input: not an integer ", read__V_18_18);
        }
#line 171 "read.m"
        {
#line 171 "read.m"
          mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_int\'/3", read__V_13_13);
#line 171 "read.m"
          return;
        }
#line 171 "read.m"
      }
#line 166 "read.m"
  }
#line 37 "read.m"
}

#line 35 "read.m"
void MR_CALL 
read__read_string_3_p_0(
#line 35 "read.m"
  MR_String * read__String_4)
#line 35 "read.m"
{
#line 151 "read.m"
  {
#line 151 "read.m"
    MR_bool read__succeeded;
#line 151 "read.m"
    MR_Word read__WordResult_6;

#line 152 "read.m"
    {
#line 152 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
#line 156 "read.m"
#line 156 "read.m"
    switch (MR_tag((MR_Word) read__WordResult_6)) {
#line 156 "read.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 156 "read.m"
      case (MR_Integer) 0:
#line 157 "read.m"
        {
#line 158 "read.m"
          {
#line 158 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_string\'/3", (MR_String) "EOF reached");
#line 158 "read.m"
            return;
          }
#line 157 "read.m"
        }
#line 156 "read.m"
        break;
#line 156 "read.m"
      case (MR_Integer) 1:
#line 154 "read.m"
        {
#line 154 "read.m"
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));

#line 155 "read.m"
          {
#line 155 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList_7, read__String_4);
          }
#line 154 "read.m"
        }
#line 156 "read.m"
        break;
#line 156 "read.m"
      case (MR_Integer) 2:
#line 160 "read.m"
        {
#line 160 "read.m"
          MR_Word read__Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
#line 160 "read.m"
          MR_String read__V_14_14;

#line 161 "read.m"
          {
#line 161 "read.m"
            read__V_14_14 = mercury__io__error_message_1_f_0(read__Error_8);
          }
#line 161 "read.m"
          {
#line 161 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_string\'/3", read__V_14_14);
#line 161 "read.m"
            return;
          }
#line 160 "read.m"
        }
#line 156 "read.m"
        break;
#line 156 "read.m"
    }
#line 151 "read.m"
  }
#line 35 "read.m"
}

#line 33 "read.m"
void MR_CALL 
read__read_label_name_3_p_0(
#line 33 "read.m"
  MR_String * read__LabelName_4)
#line 33 "read.m"
{
#line 128 "read.m"
  {
#line 128 "read.m"
    MR_bool read__succeeded;
#line 128 "read.m"
    MR_Word read__Demangle_6;
#line 128 "read.m"
    MR_Word read__WordResult_7;

#line 129 "read.m"
    {
#line 129 "read.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &read__Demangle_6);
    }
#line 130 "read.m"
    {
#line 130 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_7);
    }
#line 141 "read.m"
#line 141 "read.m"
    switch (MR_tag((MR_Word) read__WordResult_7)) {
#line 141 "read.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 141 "read.m"
      case (MR_Integer) 0:
#line 142 "read.m"
        {
#line 143 "read.m"
          {
#line 143 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_name\'/3", (MR_String) "EOF reached");
#line 143 "read.m"
            return;
          }
#line 142 "read.m"
        }
#line 141 "read.m"
        break;
#line 141 "read.m"
      case (MR_Integer) 1:
#line 132 "read.m"
        {
#line 132 "read.m"
          MR_Word read__CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_7, (MR_Integer) 0)));
#line 132 "read.m"
          MR_String read__MangledLabelName_9;

#line 133 "read.m"
          {
#line 133 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList0_8, &read__MangledLabelName_9);
          }
#line 137 "read.m"
#line 137 "read.m"
          switch (read__Demangle_6) {
#line 137 "read.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 137 "read.m"
            case (MR_Integer) 0:
#line 139 "read.m"
              *read__LabelName_4 = read__MangledLabelName_9;
#line 137 "read.m"
              break;
#line 137 "read.m"
            case (MR_Integer) 1:
#line 136 "read.m"
              {
#line 136 "read.m"
                demangle__demangle_2_p_0(read__MangledLabelName_9, read__LabelName_4);
              }
#line 137 "read.m"
              break;
#line 137 "read.m"
          }
#line 132 "read.m"
        }
#line 141 "read.m"
        break;
#line 141 "read.m"
      case (MR_Integer) 2:
#line 145 "read.m"
        {
#line 145 "read.m"
          MR_Word read__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_7, (MR_Integer) 0)));
#line 145 "read.m"
          MR_String read__V_18_18;

#line 146 "read.m"
          {
#line 146 "read.m"
            read__V_18_18 = mercury__io__error_message_1_f_0(read__Error_10);
          }
#line 146 "read.m"
          {
#line 146 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_name\'/3", read__V_18_18);
#line 146 "read.m"
            return;
          }
#line 145 "read.m"
        }
#line 141 "read.m"
        break;
#line 141 "read.m"
    }
#line 128 "read.m"
  }
#line 33 "read.m"
}

#line 31 "read.m"
void MR_CALL 
read__read_label_addr_3_p_0(
#line 31 "read.m"
  MR_Integer * read__LabelAddr_4)
#line 31 "read.m"
{
#line 105 "read.m"
  {
#line 105 "read.m"
    MR_bool read__succeeded;
#line 105 "read.m"
    MR_Word read__WordResult_6;

#line 106 "read.m"
    {
#line 106 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
#line 118 "read.m"
#line 118 "read.m"
    switch (MR_tag((MR_Word) read__WordResult_6)) {
#line 118 "read.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 118 "read.m"
      case (MR_Integer) 0:
#line 119 "read.m"
        {
#line 120 "read.m"
          {
#line 120 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_addr\'/3", (MR_String) "EOF reached");
#line 120 "read.m"
            return;
          }
#line 119 "read.m"
        }
#line 118 "read.m"
        break;
#line 118 "read.m"
      case (MR_Integer) 1:
#line 108 "read.m"
        {
#line 108 "read.m"
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));
#line 108 "read.m"
          MR_String read__LabelAddrStr_8;
#line 110 "read.m"
          MR_Integer read__LabelAddr0_9;

#line 109 "read.m"
          {
#line 109 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList_7, &read__LabelAddrStr_8);
          }
#line 110 "read.m"
          {
#line 110 "read.m"
            read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, read__LabelAddrStr_8, &read__LabelAddr0_9);
          }
#line 110 "read.m"
          if (read__succeeded)
#line 111 "read.m"
            *read__LabelAddr_4 = read__LabelAddr0_9;
#line 110 "read.m"
          else
#line 112 "read.m"
            {
#line 112 "read.m"
              MR_Integer read__LabelAddrHex_10;

#line 112 "read.m"
              {
#line 112 "read.m"
                read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, read__LabelAddrStr_8, &read__LabelAddrHex_10);
              }
#line 112 "read.m"
              if (read__succeeded)
#line 113 "read.m"
                *read__LabelAddr_4 = read__LabelAddrHex_10;
#line 112 "read.m"
              else
#line 115 "read.m"
                {
#line 115 "read.m"
                  {
#line 115 "read.m"
                    mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_addr\'/3", (MR_String) "Label address not hexadecimal or integer");
#line 115 "read.m"
                    return;
                  }
#line 115 "read.m"
                }
#line 112 "read.m"
            }
#line 108 "read.m"
        }
#line 118 "read.m"
        break;
#line 118 "read.m"
      case (MR_Integer) 2:
#line 122 "read.m"
        {
#line 122 "read.m"
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
#line 122 "read.m"
          MR_String read__V_17_17;

#line 123 "read.m"
          {
#line 123 "read.m"
            read__V_17_17 = mercury__io__error_message_1_f_0(read__Error_11);
          }
#line 123 "read.m"
          {
#line 123 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.read_label_addr\'/3", read__V_17_17);
#line 123 "read.m"
            return;
          }
#line 122 "read.m"
        }
#line 118 "read.m"
        break;
#line 118 "read.m"
    }
#line 105 "read.m"
  }
#line 31 "read.m"
}

#line 29 "read.m"
void MR_CALL 
read__maybe_read_label_name_3_p_0(
#line 29 "read.m"
  MR_Word * read__MaybeLabelName_4)
#line 29 "read.m"
{
#line 81 "read.m"
  {
#line 81 "read.m"
    MR_bool read__succeeded;
#line 81 "read.m"
    MR_Word read__Demangle_6;
#line 81 "read.m"
    MR_Word read__WordResult_7;

#line 82 "read.m"
    {
#line 82 "read.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &read__Demangle_6);
    }
#line 83 "read.m"
    {
#line 83 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_7);
    }
#line 95 "read.m"
#line 95 "read.m"
    switch (MR_tag((MR_Word) read__WordResult_7)) {
#line 95 "read.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 95 "read.m"
      case (MR_Integer) 0:
#line 97 "read.m"
        *read__MaybeLabelName_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 95 "read.m"
        break;
#line 95 "read.m"
      case (MR_Integer) 1:
#line 85 "read.m"
        {
#line 85 "read.m"
          MR_Word read__CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_7, (MR_Integer) 0)));
#line 85 "read.m"
          MR_String read__MangledLabelName_9;

#line 86 "read.m"
          {
#line 86 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList0_8, &read__MangledLabelName_9);
          }
#line 91 "read.m"
#line 91 "read.m"
          switch (read__Demangle_6) {
#line 91 "read.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 91 "read.m"
            case (MR_Integer) 0:
#line 93 "read.m"
              {
#line 93 "read.m"
                MR_Word base;
#line 93 "read.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 93 "read.m"
                *read__MaybeLabelName_4 = base;
#line 93 "read.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__MangledLabelName_9));
#line 93 "read.m"
              }
#line 91 "read.m"
              break;
#line 91 "read.m"
            case (MR_Integer) 1:
#line 88 "read.m"
              {
#line 88 "read.m"
                MR_String read__LabelName_10;

#line 89 "read.m"
                {
#line 89 "read.m"
                  demangle__demangle_2_p_0(read__MangledLabelName_9, &read__LabelName_10);
                }
#line 90 "read.m"
                {
#line 90 "read.m"
                  MR_Word base;
#line 90 "read.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 90 "read.m"
                  *read__MaybeLabelName_4 = base;
#line 90 "read.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelName_10));
#line 90 "read.m"
                }
#line 88 "read.m"
              }
#line 91 "read.m"
              break;
#line 91 "read.m"
          }
#line 85 "read.m"
        }
#line 95 "read.m"
        break;
#line 95 "read.m"
      case (MR_Integer) 2:
#line 99 "read.m"
        {
#line 99 "read.m"
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_7, (MR_Integer) 0)));
#line 99 "read.m"
          MR_String read__V_19_19;

#line 100 "read.m"
          {
#line 100 "read.m"
            read__V_19_19 = mercury__io__error_message_1_f_0(read__Error_11);
          }
#line 100 "read.m"
          {
#line 100 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_name\'/3", read__V_19_19);
#line 100 "read.m"
            return;
          }
#line 99 "read.m"
        }
#line 95 "read.m"
        break;
#line 95 "read.m"
    }
#line 81 "read.m"
  }
#line 29 "read.m"
}

#line 27 "read.m"
void MR_CALL 
read__maybe_read_label_addr_3_p_0(
#line 27 "read.m"
  MR_Word * read__MaybeLabelAddr_4)
#line 27 "read.m"
{
#line 58 "read.m"
  {
#line 58 "read.m"
    MR_bool read__succeeded;
#line 58 "read.m"
    MR_Word read__WordResult_6;

#line 59 "read.m"
    {
#line 59 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
#line 71 "read.m"
#line 71 "read.m"
    switch (MR_tag((MR_Word) read__WordResult_6)) {
#line 71 "read.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 71 "read.m"
      case (MR_Integer) 0:
#line 73 "read.m"
        *read__MaybeLabelAddr_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 71 "read.m"
        break;
#line 71 "read.m"
      case (MR_Integer) 1:
#line 61 "read.m"
        {
#line 61 "read.m"
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));
#line 61 "read.m"
          MR_String read__LabelAddrStr_8;
#line 63 "read.m"
          MR_Integer read__LabelAddr_9;

#line 62 "read.m"
          {
#line 62 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList_7, &read__LabelAddrStr_8);
          }
#line 63 "read.m"
          {
#line 63 "read.m"
            read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, read__LabelAddrStr_8, &read__LabelAddr_9);
          }
#line 63 "read.m"
          if (read__succeeded)
#line 64 "read.m"
            {
#line 64 "read.m"
              MR_Word base;
#line 64 "read.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 64 "read.m"
              *read__MaybeLabelAddr_4 = base;
#line 64 "read.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelAddr_9));
#line 64 "read.m"
            }
#line 63 "read.m"
          else
#line 65 "read.m"
            {
#line 65 "read.m"
              MR_Integer read__LabelAddrHex_10;

#line 65 "read.m"
              {
#line 65 "read.m"
                read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, read__LabelAddrStr_8, &read__LabelAddrHex_10);
              }
#line 65 "read.m"
              if (read__succeeded)
#line 66 "read.m"
                {
#line 66 "read.m"
                  MR_Word base;
#line 66 "read.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 66 "read.m"
                  *read__MaybeLabelAddr_4 = base;
#line 66 "read.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelAddrHex_10));
#line 66 "read.m"
                }
#line 65 "read.m"
              else
#line 68 "read.m"
                {
#line 68 "read.m"
                  {
#line 68 "read.m"
                    mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_addr\'/3", (MR_String) "Label address not hexadecimal or integer");
#line 68 "read.m"
                    return;
                  }
#line 68 "read.m"
                }
#line 65 "read.m"
            }
#line 61 "read.m"
        }
#line 71 "read.m"
        break;
#line 71 "read.m"
      case (MR_Integer) 2:
#line 75 "read.m"
        {
#line 75 "read.m"
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
#line 75 "read.m"
          MR_String read__V_17_17;

#line 76 "read.m"
          {
#line 76 "read.m"
            read__V_17_17 = mercury__io__error_message_1_f_0(read__Error_11);
          }
#line 76 "read.m"
          {
#line 76 "read.m"
            mercury__require__unexpected_3_p_0((MR_String) "read", (MR_String) "predicate \140read.maybe_read_label_addr\'/3", read__V_17_17);
#line 76 "read.m"
            return;
          }
#line 75 "read.m"
        }
#line 71 "read.m"
        break;
#line 71 "read.m"
    }
#line 58 "read.m"
  }
#line 27 "read.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module read. */
