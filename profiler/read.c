/*
** Automatically generated from `read.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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










#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 41 "read.m"
void MR_CALL 
read__read_what_to_profile_3_p_0(
#line 41 "read.m"
  MR_Word * read__WhatToProfile_4)
#line 41 "read.m"
{
#line 191 "read.m"
  {
#line 191 "read.m"
    MR_bool read__succeeded;
#line 191 "read.m"
    MR_String read__Str_6;
#line 195 "read.m"
    MR_Word read__WhatToProfile0_7;

#line 192 "read.m"
    {
#line 192 "read.m"
      read__read_string_3_p_0(&read__Str_6);
    }
#line 193 "read.m"
    {
#line 193 "read.m"
      read__succeeded = globals__what_to_profile_2_p_0(read__Str_6, &read__WhatToProfile0_7);
    }
#line 195 "read.m"
    if (read__succeeded)
#line 194 "read.m"
      *read__WhatToProfile_4 = read__WhatToProfile0_7;
#line 195 "read.m"
    else
#line 196 "read.m"
      {
#line 196 "read.m"
        MR_String read__Error_8;
#line 196 "read.m"
        MR_String read__V_13_13;

#line 196 "read.m"
        {
#line 196 "read.m"
          read__Error_8 = mercury__string__f_43_43_2_f_0((MR_String) "\nWhatToProfile = ", read__Str_6);
        }
#line 197 "read.m"
        {
#line 197 "read.m"
          read__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "\nread_what_to_profile: invalid input\n", read__Error_8);
        }
#line 197 "read.m"
        {
#line 197 "read.m"
          mercury__require__error_1_p_0(read__V_13_13);
#line 197 "read.m"
          return;
        }
#line 196 "read.m"
      }
#line 191 "read.m"
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
#line 180 "read.m"
  {
#line 180 "read.m"
    MR_bool read__succeeded;
#line 180 "read.m"
    MR_String read__FloatStr_6;
#line 184 "read.m"
    MR_Float read__Float0_7;

#line 181 "read.m"
    {
#line 181 "read.m"
      read__read_string_3_p_0(&read__FloatStr_6);
    }
#line 182 "read.m"
    {
#line 182 "read.m"
      read__succeeded = mercury__string__to_float_2_p_0(read__FloatStr_6, &read__Float0_7);
    }
#line 184 "read.m"
    if (read__succeeded)
#line 183 "read.m"
      *read__Float_4 = read__Float0_7;
#line 184 "read.m"
    else
#line 185 "read.m"
      {
#line 185 "read.m"
        MR_String read__Error_8;
#line 185 "read.m"
        MR_String read__V_13_13;

#line 185 "read.m"
        {
#line 185 "read.m"
          read__Error_8 = mercury__string__f_43_43_2_f_0((MR_String) "\nFloat = ", read__FloatStr_6);
        }
#line 186 "read.m"
        {
#line 186 "read.m"
          read__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "\nread_float: Not an float\n", read__Error_8);
        }
#line 186 "read.m"
        {
#line 186 "read.m"
          mercury__require__error_1_p_0(read__V_13_13);
#line 186 "read.m"
          return;
        }
#line 185 "read.m"
      }
#line 180 "read.m"
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
#line 169 "read.m"
  {
#line 169 "read.m"
    MR_bool read__succeeded;
#line 169 "read.m"
    MR_String read__IntStr_6;
#line 173 "read.m"
    MR_Integer read__Int0_7;

#line 170 "read.m"
    {
#line 170 "read.m"
      read__read_string_3_p_0(&read__IntStr_6);
    }
#line 171 "read.m"
    {
#line 171 "read.m"
      read__succeeded = mercury__string__to_int_2_p_0(read__IntStr_6, &read__Int0_7);
    }
#line 173 "read.m"
    if (read__succeeded)
#line 172 "read.m"
      *read__Int_4 = read__Int0_7;
#line 173 "read.m"
    else
#line 174 "read.m"
      {
#line 174 "read.m"
        MR_String read__Error_8;
#line 174 "read.m"
        MR_String read__V_13_13;

#line 174 "read.m"
        {
#line 174 "read.m"
          read__Error_8 = mercury__string__f_43_43_2_f_0((MR_String) "\nIntger = ", read__IntStr_6);
        }
#line 175 "read.m"
        {
#line 175 "read.m"
          read__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "\nread_int: Not an integer\n", read__Error_8);
        }
#line 175 "read.m"
        {
#line 175 "read.m"
          mercury__require__error_1_p_0(read__V_13_13);
#line 175 "read.m"
          return;
        }
#line 174 "read.m"
      }
#line 169 "read.m"
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
#line 154 "read.m"
  {
#line 154 "read.m"
    MR_bool read__succeeded;
#line 154 "read.m"
    MR_Word read__WordResult_6;

#line 155 "read.m"
    {
#line 155 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
#line 159 "read.m"
    if ((read__WordResult_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "read.m"
      {
#line 161 "read.m"
        {
#line 161 "read.m"
          mercury__require__error_1_p_0((MR_String) "read_string: EOF reached");
#line 161 "read.m"
          return;
        }
#line 160 "read.m"
      }
#line 159 "read.m"
    else
#line 159 "read.m"
      if (((MR_tag((MR_Word) read__WordResult_6)) == (MR_mktag((MR_Integer) 2))))
#line 163 "read.m"
        {
#line 163 "read.m"
          MR_Word read__Error_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
#line 163 "read.m"
          MR_String read__V_12_12;
#line 163 "read.m"
          MR_String read__V_14_14;

#line 164 "read.m"
          {
#line 164 "read.m"
            read__V_14_14 = mercury__io__error_message_1_f_0(read__Error_8);
          }
#line 164 "read.m"
          {
#line 164 "read.m"
            read__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "read_string: ", read__V_14_14);
          }
#line 164 "read.m"
          {
#line 164 "read.m"
            mercury__require__error_1_p_0(read__V_12_12);
#line 164 "read.m"
            return;
          }
#line 163 "read.m"
        }
#line 159 "read.m"
      else
#line 157 "read.m"
        {
#line 157 "read.m"
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));

#line 158 "read.m"
          {
#line 158 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList_7, read__String_4);
#line 158 "read.m"
            return;
          }
#line 157 "read.m"
        }
#line 154 "read.m"
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
#line 131 "read.m"
  {
#line 131 "read.m"
    MR_bool read__succeeded;
#line 131 "read.m"
    MR_Word read__Demangle_6;
#line 131 "read.m"
    MR_Word read__WordResult_7;

#line 132 "read.m"
    {
#line 132 "read.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &read__Demangle_6);
    }
#line 133 "read.m"
    {
#line 133 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_7);
    }
#line 144 "read.m"
    if ((read__WordResult_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "read.m"
      {
#line 146 "read.m"
        {
#line 146 "read.m"
          mercury__require__error_1_p_0((MR_String) "read_label_name: EOF reached");
#line 146 "read.m"
          return;
        }
#line 145 "read.m"
      }
#line 144 "read.m"
    else
#line 144 "read.m"
      if (((MR_tag((MR_Word) read__WordResult_7)) == (MR_mktag((MR_Integer) 2))))
#line 148 "read.m"
        {
#line 148 "read.m"
          MR_Word read__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_7, (MR_Integer) 0)));
#line 148 "read.m"
          MR_String read__V_16_16;
#line 148 "read.m"
          MR_String read__V_18_18;

#line 149 "read.m"
          {
#line 149 "read.m"
            read__V_18_18 = mercury__io__error_message_1_f_0(read__Error_10);
          }
#line 149 "read.m"
          {
#line 149 "read.m"
            read__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "read_label_name: ", read__V_18_18);
          }
#line 149 "read.m"
          {
#line 149 "read.m"
            mercury__require__error_1_p_0(read__V_16_16);
#line 149 "read.m"
            return;
          }
#line 148 "read.m"
        }
#line 144 "read.m"
      else
#line 135 "read.m"
        {
#line 135 "read.m"
          MR_Word read__CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_7, (MR_Integer) 0)));
#line 135 "read.m"
          MR_String read__MangledLabelName_9;

#line 136 "read.m"
          {
#line 136 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList0_8, &read__MangledLabelName_9);
          }
#line 140 "read.m"
          if ((read__Demangle_6 == (MR_Integer) 0))
#line 142 "read.m"
            *read__LabelName_4 = read__MangledLabelName_9;
#line 140 "read.m"
          else
#line 139 "read.m"
            {
#line 139 "read.m"
              demangle__demangle_2_p_0(read__MangledLabelName_9, read__LabelName_4);
#line 139 "read.m"
              return;
            }
#line 135 "read.m"
        }
#line 131 "read.m"
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
#line 106 "read.m"
  {
#line 106 "read.m"
    MR_bool read__succeeded;
#line 106 "read.m"
    MR_Word read__WordResult_6;

#line 107 "read.m"
    {
#line 107 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
#line 121 "read.m"
    if ((read__WordResult_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "read.m"
      {
#line 123 "read.m"
        {
#line 123 "read.m"
          mercury__require__error_1_p_0((MR_String) "read_label_addr: EOF reached");
#line 123 "read.m"
          return;
        }
#line 122 "read.m"
      }
#line 121 "read.m"
    else
#line 121 "read.m"
      if (((MR_tag((MR_Word) read__WordResult_6)) == (MR_mktag((MR_Integer) 2))))
#line 125 "read.m"
        {
#line 125 "read.m"
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
#line 125 "read.m"
          MR_String read__V_15_15;
#line 125 "read.m"
          MR_String read__V_17_17;

#line 126 "read.m"
          {
#line 126 "read.m"
            read__V_17_17 = mercury__io__error_message_1_f_0(read__Error_11);
          }
#line 126 "read.m"
          {
#line 126 "read.m"
            read__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "read_label_addr: ", read__V_17_17);
          }
#line 126 "read.m"
          {
#line 126 "read.m"
            mercury__require__error_1_p_0(read__V_15_15);
#line 126 "read.m"
            return;
          }
#line 125 "read.m"
        }
#line 121 "read.m"
      else
#line 109 "read.m"
        {
#line 109 "read.m"
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));
#line 109 "read.m"
          MR_String read__LabelAddrStr_8;
#line 113 "read.m"
          MR_Integer read__LabelAddr0_9;

#line 110 "read.m"
          {
#line 110 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList_7, &read__LabelAddrStr_8);
          }
#line 111 "read.m"
          {
#line 111 "read.m"
            read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, read__LabelAddrStr_8, &read__LabelAddr0_9);
          }
#line 113 "read.m"
          if (read__succeeded)
#line 112 "read.m"
            *read__LabelAddr_4 = read__LabelAddr0_9;
#line 113 "read.m"
          else
#line 116 "read.m"
            {
#line 116 "read.m"
              MR_Integer read__LabelAddrHex_10;

#line 114 "read.m"
              {
#line 114 "read.m"
                read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, read__LabelAddrStr_8, &read__LabelAddrHex_10);
              }
#line 116 "read.m"
              if (read__succeeded)
#line 115 "read.m"
                *read__LabelAddr_4 = read__LabelAddrHex_10;
#line 116 "read.m"
              else
#line 117 "read.m"
                {
#line 117 "read.m"
                  {
#line 117 "read.m"
                    mercury__require__error_1_p_0((MR_String) "maybe_read_label_addr: Label address not hexadecimal or integer\n");
#line 117 "read.m"
                    return;
                  }
#line 117 "read.m"
                }
#line 116 "read.m"
            }
#line 109 "read.m"
        }
#line 106 "read.m"
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
#line 82 "read.m"
  {
#line 82 "read.m"
    MR_bool read__succeeded;
#line 82 "read.m"
    MR_Word read__Demangle_6;
#line 82 "read.m"
    MR_Word read__WordResult_7;

#line 83 "read.m"
    {
#line 83 "read.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 8, &read__Demangle_6);
    }
#line 84 "read.m"
    {
#line 84 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_7);
    }
#line 96 "read.m"
    if ((read__WordResult_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "read.m"
      *read__MaybeLabelName_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 96 "read.m"
    else
#line 96 "read.m"
      if (((MR_tag((MR_Word) read__WordResult_7)) == (MR_mktag((MR_Integer) 2))))
#line 100 "read.m"
        {
#line 100 "read.m"
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_7, (MR_Integer) 0)));
#line 100 "read.m"
          MR_String read__V_17_17;
#line 100 "read.m"
          MR_String read__V_19_19;

#line 101 "read.m"
          {
#line 101 "read.m"
            read__V_19_19 = mercury__io__error_message_1_f_0(read__Error_11);
          }
#line 101 "read.m"
          {
#line 101 "read.m"
            read__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "maybe_read_label_name: ", read__V_19_19);
          }
#line 101 "read.m"
          {
#line 101 "read.m"
            mercury__require__error_1_p_0(read__V_17_17);
#line 101 "read.m"
            return;
          }
#line 100 "read.m"
        }
#line 96 "read.m"
      else
#line 86 "read.m"
        {
#line 86 "read.m"
          MR_Word read__CharList0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_7, (MR_Integer) 0)));
#line 86 "read.m"
          MR_String read__MangledLabelName_9;

#line 87 "read.m"
          {
#line 87 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList0_8, &read__MangledLabelName_9);
          }
#line 92 "read.m"
          if ((read__Demangle_6 == (MR_Integer) 0))
#line 94 "read.m"
            {
#line 94 "read.m"
              MR_Word base;
#line 94 "read.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 94 "read.m"
              *read__MaybeLabelName_4 = base;
#line 94 "read.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__MangledLabelName_9));
#line 94 "read.m"
            }
#line 92 "read.m"
          else
#line 89 "read.m"
            {
#line 89 "read.m"
              MR_String read__LabelName_10;

#line 90 "read.m"
              {
#line 90 "read.m"
                demangle__demangle_2_p_0(read__MangledLabelName_9, &read__LabelName_10);
              }
#line 91 "read.m"
              {
#line 91 "read.m"
                MR_Word base;
#line 91 "read.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 91 "read.m"
                *read__MaybeLabelName_4 = base;
#line 91 "read.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelName_10));
#line 91 "read.m"
              }
#line 89 "read.m"
            }
#line 86 "read.m"
        }
#line 82 "read.m"
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
#line 57 "read.m"
  {
#line 57 "read.m"
    MR_bool read__succeeded;
#line 57 "read.m"
    MR_Word read__WordResult_6;

#line 58 "read.m"
    {
#line 58 "read.m"
      mercury__io__read_word_3_p_0(&read__WordResult_6);
    }
#line 72 "read.m"
    if ((read__WordResult_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "read.m"
      *read__MaybeLabelAddr_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 72 "read.m"
    else
#line 72 "read.m"
      if (((MR_tag((MR_Word) read__WordResult_6)) == (MR_mktag((MR_Integer) 2))))
#line 76 "read.m"
        {
#line 76 "read.m"
          MR_Word read__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), read__WordResult_6, (MR_Integer) 0)));
#line 76 "read.m"
          MR_String read__V_15_15;
#line 76 "read.m"
          MR_String read__V_17_17;

#line 77 "read.m"
          {
#line 77 "read.m"
            read__V_17_17 = mercury__io__error_message_1_f_0(read__Error_11);
          }
#line 77 "read.m"
          {
#line 77 "read.m"
            read__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "maybe_read_label_addr: ", read__V_17_17);
          }
#line 77 "read.m"
          {
#line 77 "read.m"
            mercury__require__error_1_p_0(read__V_15_15);
#line 77 "read.m"
            return;
          }
#line 76 "read.m"
        }
#line 72 "read.m"
      else
#line 60 "read.m"
        {
#line 60 "read.m"
          MR_Word read__CharList_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), read__WordResult_6, (MR_Integer) 0)));
#line 60 "read.m"
          MR_String read__LabelAddrStr_8;
#line 64 "read.m"
          MR_Integer read__LabelAddr_9;

#line 61 "read.m"
          {
#line 61 "read.m"
            mercury__string__from_char_list_2_p_0(read__CharList_7, &read__LabelAddrStr_8);
          }
#line 62 "read.m"
          {
#line 62 "read.m"
            read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, read__LabelAddrStr_8, &read__LabelAddr_9);
          }
#line 64 "read.m"
          if (read__succeeded)
#line 63 "read.m"
            {
#line 63 "read.m"
              MR_Word base;
#line 63 "read.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 63 "read.m"
              *read__MaybeLabelAddr_4 = base;
#line 63 "read.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (read__LabelAddr_9));
#line 63 "read.m"
            }
#line 64 "read.m"
          else
#line 67 "read.m"
            {
#line 67 "read.m"
              MR_Integer read__LabelAddrHex_10;

#line 65 "read.m"
              {
#line 65 "read.m"
                read__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 16, read__LabelAddrStr_8, &read__LabelAddrHex_10);
              }
#line 67 "read.m"
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
#line 67 "read.m"
              else
#line 68 "read.m"
                {
#line 68 "read.m"
                  {
#line 68 "read.m"
                    mercury__require__error_1_p_0((MR_String) "maybe_read_label_addr: Label address not hexadecimal or integer\n");
#line 68 "read.m"
                    return;
                  }
#line 68 "read.m"
                }
#line 67 "read.m"
            }
#line 60 "read.m"
        }
#line 57 "read.m"
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
