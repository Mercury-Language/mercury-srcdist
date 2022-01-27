/*
** Automatically generated from `interface.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module interface. */
/* :- implementation. */

/*
INIT mercury__interface__init
ENDINIT
*/

#include "interface.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "conf.mih"
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




#line 158 "interface.m"
static MR_Word MR_CALL 
interface__filename_mangle_2_1_f_0(
#line 158 "interface.m"
  MR_Word interface__HeadVar__1_1);


static /* final */ const MR_Box interface_scalar_common_1[1][2];

static /* final */ const MR_Box interface_scalar_common_2[1][1];




static /* final */ const MR_Box interface_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__io__io__type_ctor_info_maybe_partial_res_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box interface_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 158 "interface.m"
static MR_Word MR_CALL 
interface__filename_mangle_2_1_f_0(
#line 158 "interface.m"
  MR_Word interface__HeadVar__1_1)
#line 158 "interface.m"
{
#line 160 "interface.m"
  {
#line 160 "interface.m"
    MR_bool interface__succeeded;
#line 160 "interface.m"
    MR_Word interface__HeadVar__2_2;

#line 160 "interface.m"
    if ((interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "interface.m"
      interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "interface.m"
    else
#line 161 "interface.m"
      {
#line 161 "interface.m"
        MR_Char interface__First_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), interface__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "interface.m"
        MR_Word interface__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "interface.m"
        MR_Word interface__MangledRest_6;

#line 162 "interface.m"
        {
#line 162 "interface.m"
          interface__MangledRest_6 = interface__filename_mangle_2_1_f_0(interface__Rest_4);
        }
#line 163 "interface.m"
        interface__succeeded = (interface__First_3 == (MR_Char) 47);
#line 165 "interface.m"
        if (interface__succeeded)
#line 164 "interface.m"
          {
#line 164 "interface.m"
            MR_Word interface__V_8_8;

#line 164 "interface.m"
            {
#line 164 "interface.m"
              interface__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "interface.m"
              MR_hl_field(MR_mktag(1), interface__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Char) 46));
#line 164 "interface.m"
              MR_hl_field(MR_mktag(1), interface__V_8_8, 1) = ((MR_Box) (interface__MangledRest_6));
#line 164 "interface.m"
            }
#line 164 "interface.m"
            {
#line 164 "interface.m"
              interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "interface.m"
              MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
#line 164 "interface.m"
              MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 1) = ((MR_Box) (interface__V_8_8));
#line 164 "interface.m"
            }
#line 164 "interface.m"
          }
#line 165 "interface.m"
        else
#line 167 "interface.m"
          {
#line 165 "interface.m"
            interface__succeeded = (interface__First_3 == (MR_Char) 58);
#line 167 "interface.m"
            if (interface__succeeded)
#line 166 "interface.m"
              {
#line 166 "interface.m"
                MR_Word interface__V_11_11;

#line 166 "interface.m"
                {
#line 166 "interface.m"
                  interface__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "interface.m"
                  MR_hl_field(MR_mktag(1), interface__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
#line 166 "interface.m"
                  MR_hl_field(MR_mktag(1), interface__V_11_11, 1) = ((MR_Box) (interface__MangledRest_6));
#line 166 "interface.m"
                }
#line 166 "interface.m"
                {
#line 166 "interface.m"
                  interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "interface.m"
                  MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
#line 166 "interface.m"
                  MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 1) = ((MR_Box) (interface__V_11_11));
#line 166 "interface.m"
                }
#line 166 "interface.m"
              }
#line 167 "interface.m"
            else
#line 168 "interface.m"
              {
#line 168 "interface.m"
                interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "interface.m"
                MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (interface__First_3));
#line 168 "interface.m"
                MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 1) = ((MR_Box) (interface__MangledRest_6));
#line 168 "interface.m"
              }
#line 167 "interface.m"
          }
#line 161 "interface.m"
      }
#line 160 "interface.m"
    return interface__HeadVar__2_2;
#line 160 "interface.m"
  }
#line 158 "interface.m"
}

#line 100 "interface.m"
void MR_CALL 
interface__recv_string_5_p_0(
#line 100 "interface.m"
  MR_String interface__FromPipeName_6,
#line 100 "interface.m"
  MR_Word interface__Debug_7,
#line 100 "interface.m"
  MR_String * interface__Resp_8)
#line 100 "interface.m"
{
#line 281 "interface.m"
  {
#line 281 "interface.m"
    MR_bool interface__succeeded;
#line 281 "interface.m"
    MR_Word interface__FromPipeRes_10;

#line 282 "interface.m"
    {
#line 282 "interface.m"
      mercury__io__open_input_4_p_0(interface__FromPipeName_6, &interface__FromPipeRes_10);
    }
#line 315 "interface.m"
    if (((MR_tag((MR_Word) interface__FromPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 316 "interface.m"
      {
#line 316 "interface.m"
        MR_Word interface__FromPipeError_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__FromPipeRes_10, (MR_Integer) 0)));
#line 316 "interface.m"
        MR_String interface__FromPipeErrorMsg_24;
#line 316 "interface.m"
        MR_String interface__FromPipeMsg_25;
#line 316 "interface.m"
        MR_String interface__V_79_79;
#line 316 "interface.m"
        MR_Word interface__V_85_85;
#line 316 "interface.m"
        MR_String interface__V_87_87;
#line 316 "interface.m"
        MR_String interface__V_88_88;
#line 316 "interface.m"
        MR_String interface__V_95_95;

#line 317 "interface.m"
        {
#line 317 "interface.m"
          mercury__io__error_message_2_p_0(interface__FromPipeError_23, &interface__FromPipeErrorMsg_24);
        }
#line 280 "interface.c"
        interface__V_85_85 = (MR_Word) &interface_scalar_common_2[0];
#line 319 "interface.m"
        {
#line 319 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_85_85, interface__FromPipeErrorMsg_24, &interface__V_79_79);
        }
#line 318 "interface.m"
        {
#line 318 "interface.m"
          interface__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_79_79);
        }
#line 319 "interface.m"
        {
#line 319 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_85_85, interface__FromPipeName_6, &interface__V_88_88);
        }
#line 318 "interface.m"
        {
#line 318 "interface.m"
          interface__V_95_95 = mercury__string__f_43_43_2_f_0(interface__V_88_88, interface__V_87_87);
        }
#line 318 "interface.m"
        {
#line 318 "interface.m"
          interface__FromPipeMsg_25 = mercury__string__f_43_43_2_f_0((MR_String) "recv_string: couldn\'t open pipe ", interface__V_95_95);
        }
#line 320 "interface.m"
        {
#line 320 "interface.m"
          mercury__require__error_1_p_0(interface__FromPipeMsg_25);
#line 320 "interface.m"
          return;
        }
#line 316 "interface.m"
      }
#line 315 "interface.m"
    else
#line 284 "interface.m"
      {
#line 284 "interface.m"
        MR_Word interface__FromStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__FromPipeRes_10, (MR_Integer) 0)));
#line 284 "interface.m"
        MR_Word interface__ReadRes_12;

#line 285 "interface.m"
        {
#line 285 "interface.m"
          mercury__io__read_file_as_string_4_p_0(interface__FromStream_11, &interface__ReadRes_12);
        }
#line 288 "interface.m"
        if (((MR_tag((MR_Word) interface__ReadRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 289 "interface.m"
          {
#line 289 "interface.m"
            MR_Word interface__ReadError_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__ReadRes_12, (MR_Integer) 1)));
#line 289 "interface.m"
            MR_String interface__ReadErrorMsg_15;
#line 289 "interface.m"
            MR_String interface__ReadMsg_16;
#line 289 "interface.m"
            MR_String interface__V_53_53;
#line 289 "interface.m"
            MR_String interface__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), interface__ReadRes_12, (MR_Integer) 0)));

#line 290 "interface.m"
            {
#line 290 "interface.m"
              mercury__io__error_message_2_p_0(interface__ReadError_14, &interface__ReadErrorMsg_15);
            }
#line 292 "interface.m"
            {
#line 292 "interface.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &interface_scalar_common_2[0], interface__ReadErrorMsg_15, &interface__V_53_53);
            }
#line 291 "interface.m"
            {
#line 291 "interface.m"
              interface__ReadMsg_16 = mercury__string__f_43_43_2_f_0((MR_String) "recv_string: read failed: ", interface__V_53_53);
            }
#line 293 "interface.m"
            {
#line 293 "interface.m"
              mercury__require__error_1_p_0(interface__ReadMsg_16);
#line 293 "interface.m"
              return;
            }
#line 289 "interface.m"
          }
#line 288 "interface.m"
        else
#line 287 "interface.m"
          *interface__Resp_8 = ((MR_String) (MR_hl_field(MR_mktag(0), interface__ReadRes_12, (MR_Integer) 0)));
#line 295 "interface.m"
        {
#line 295 "interface.m"
          mercury__io__close_input_3_p_0(interface__FromStream_11);
        }
#line 312 "interface.m"
        if ((interface__Debug_7 == (MR_Integer) 0))
#line 313 "interface.m"
          {
#line 313 "interface.m"
          }
#line 312 "interface.m"
        else
#line 297 "interface.m"
          {
#line 297 "interface.m"
            MR_Word interface__DebugRes_18;

#line 299 "interface.m"
            {
#line 299 "interface.m"
              mercury__io__open_output_4_p_0((MR_String) "/tmp/.recv_string", &interface__DebugRes_18);
            }
#line 305 "interface.m"
            if (((MR_tag((MR_Word) interface__DebugRes_18)) == (MR_mktag((MR_Integer) 1))))
#line 306 "interface.m"
              {
#line 306 "interface.m"
                MR_Word interface__DebugError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_18, (MR_Integer) 0)));
#line 306 "interface.m"
                MR_String interface__DebugErrorMsg_21;
#line 306 "interface.m"
                MR_String interface__DebugMsg_22;
#line 306 "interface.m"
                MR_String interface__V_61_61;
#line 306 "interface.m"
                MR_Word interface__V_67_67;
#line 306 "interface.m"
                MR_String interface__V_69_69;
#line 306 "interface.m"
                MR_String interface__V_70_70;
#line 306 "interface.m"
                MR_String interface__V_77_77;

#line 307 "interface.m"
                {
#line 307 "interface.m"
                  mercury__io__error_message_2_p_0(interface__DebugError_20, &interface__DebugErrorMsg_21);
                }
#line 422 "interface.c"
                interface__V_67_67 = (MR_Word) &interface_scalar_common_2[0];
#line 309 "interface.m"
                {
#line 309 "interface.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_67_67, interface__DebugErrorMsg_21, &interface__V_61_61);
                }
#line 308 "interface.m"
                {
#line 308 "interface.m"
                  interface__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_61_61);
                }
#line 309 "interface.m"
                {
#line 309 "interface.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_67_67, (MR_String) "/tmp/.recv_string", &interface__V_70_70);
                }
#line 308 "interface.m"
                {
#line 308 "interface.m"
                  interface__V_77_77 = mercury__string__f_43_43_2_f_0(interface__V_70_70, interface__V_69_69);
                }
#line 308 "interface.m"
                {
#line 308 "interface.m"
                  interface__DebugMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "recv_string: couldn\'t open debug file ", interface__V_77_77);
                }
#line 310 "interface.m"
                {
#line 310 "interface.m"
                  mercury__require__error_1_p_0(interface__DebugMsg_22);
#line 310 "interface.m"
                  return;
                }
#line 306 "interface.m"
              }
#line 305 "interface.m"
            else
#line 301 "interface.m"
              {
#line 301 "interface.m"
                MR_Word interface__DebugStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_18, (MR_Integer) 0)));

#line 302 "interface.m"
                {
#line 302 "interface.m"
                  mercury__io__write_4_p_0((MR_Word) &interface_scalar_common_1[0], interface__DebugStream_19, ((MR_Box) (interface__ReadRes_12)));
                }
#line 303 "interface.m"
                {
#line 303 "interface.m"
                  mercury__io__write_string_4_p_0(interface__DebugStream_19, (MR_String) ".\n");
                }
#line 304 "interface.m"
                {
#line 304 "interface.m"
                  mercury__io__close_output_3_p_0(interface__DebugStream_19);
#line 304 "interface.m"
                  return;
                }
#line 301 "interface.m"
              }
#line 297 "interface.m"
          }
#line 284 "interface.m"
      }
#line 281 "interface.m"
  }
#line 100 "interface.m"
}

#line 92 "interface.m"
void MR_CALL 
interface__recv_term_5_p_0(
#line 92 "interface.m"
  MR_Word interface__TypeInfo_for_T_54,
#line 92 "interface.m"
  MR_String interface__FromPipeName_6,
#line 92 "interface.m"
  MR_Word interface__Debug_7,
#line 92 "interface.m"
  MR_Box * interface__Resp_8)
#line 92 "interface.m"
{
#line 237 "interface.m"
  {
#line 237 "interface.m"
    MR_bool interface__succeeded;
#line 237 "interface.m"
    MR_Word interface__FromPipeRes_10;

#line 238 "interface.m"
    {
#line 238 "interface.m"
      mercury__io__open_input_4_p_0(interface__FromPipeName_6, &interface__FromPipeRes_10);
    }
#line 273 "interface.m"
    if (((MR_tag((MR_Word) interface__FromPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 274 "interface.m"
      {
#line 274 "interface.m"
        MR_Word interface__FromPipeError_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__FromPipeRes_10, (MR_Integer) 0)));
#line 274 "interface.m"
        MR_String interface__FromPipeErrorMsg_23;
#line 274 "interface.m"
        MR_String interface__FromPipeMsg_24;
#line 274 "interface.m"
        MR_String interface__V_93_93;
#line 274 "interface.m"
        MR_Word interface__V_99_99;
#line 274 "interface.m"
        MR_String interface__V_101_101;
#line 274 "interface.m"
        MR_String interface__V_102_102;
#line 274 "interface.m"
        MR_String interface__V_109_109;

#line 275 "interface.m"
        {
#line 275 "interface.m"
          mercury__io__error_message_2_p_0(interface__FromPipeError_22, &interface__FromPipeErrorMsg_23);
        }
#line 544 "interface.c"
        interface__V_99_99 = (MR_Word) &interface_scalar_common_2[0];
#line 277 "interface.m"
        {
#line 277 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_99_99, interface__FromPipeErrorMsg_23, &interface__V_93_93);
        }
#line 276 "interface.m"
        {
#line 276 "interface.m"
          interface__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_93_93);
        }
#line 277 "interface.m"
        {
#line 277 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_99_99, interface__FromPipeName_6, &interface__V_102_102);
        }
#line 276 "interface.m"
        {
#line 276 "interface.m"
          interface__V_109_109 = mercury__string__f_43_43_2_f_0(interface__V_102_102, interface__V_101_101);
        }
#line 276 "interface.m"
        {
#line 276 "interface.m"
          interface__FromPipeMsg_24 = mercury__string__f_43_43_2_f_0((MR_String) "recv_term: couldn\'t open pipe ", interface__V_109_109);
        }
#line 278 "interface.m"
        {
#line 278 "interface.m"
          mercury__require__error_1_p_0(interface__FromPipeMsg_24);
#line 278 "interface.m"
          return;
        }
#line 274 "interface.m"
      }
#line 273 "interface.m"
    else
#line 240 "interface.m"
      {
#line 240 "interface.m"
        MR_Word interface__FromStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__FromPipeRes_10, (MR_Integer) 0)));
#line 240 "interface.m"
        MR_Word interface__ReadRes_12;

#line 241 "interface.m"
        {
#line 241 "interface.m"
          mercury__io__read_4_p_0(interface__TypeInfo_for_T_54, interface__FromStream_11, &interface__ReadRes_12);
        }
#line 244 "interface.m"
        if ((interface__ReadRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "interface.m"
          {
#line 246 "interface.m"
            {
#line 246 "interface.m"
              mercury__require__error_1_p_0((MR_String) "recv_term: read failed: premature eof");
#line 246 "interface.m"
              return;
            }
#line 245 "interface.m"
          }
#line 244 "interface.m"
        else
#line 244 "interface.m"
          if (((MR_tag((MR_Word) interface__ReadRes_12)) == (MR_mktag((MR_Integer) 2))))
#line 248 "interface.m"
            {
#line 248 "interface.m"
              MR_String interface__ReadErrorMsg_13 = ((MR_String) (MR_hl_field(MR_mktag(2), interface__ReadRes_12, (MR_Integer) 0)));
#line 248 "interface.m"
              MR_Integer interface__ReadErrorLineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), interface__ReadRes_12, (MR_Integer) 1)));
#line 248 "interface.m"
              MR_String interface__ReadMsg_15;
#line 248 "interface.m"
              MR_String interface__V_57_57;
#line 248 "interface.m"
              MR_Word interface__V_63_63 = (MR_Word) &interface_scalar_common_2[0];
#line 248 "interface.m"
              MR_String interface__V_65_65;
#line 248 "interface.m"
              MR_String interface__V_66_66;
#line 248 "interface.m"
              MR_String interface__V_73_73;

#line 250 "interface.m"
              {
#line 250 "interface.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_63_63, interface__ReadErrorMsg_13, &interface__V_57_57);
              }
#line 249 "interface.m"
              {
#line 249 "interface.m"
                interface__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_57_57);
              }
#line 250 "interface.m"
              {
#line 250 "interface.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(interface__V_63_63, interface__ReadErrorLineNumber_14, &interface__V_66_66);
              }
#line 249 "interface.m"
              {
#line 249 "interface.m"
                interface__V_73_73 = mercury__string__f_43_43_2_f_0(interface__V_66_66, interface__V_65_65);
              }
#line 249 "interface.m"
              {
#line 249 "interface.m"
                interface__ReadMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "recv_term: read failed at line ", interface__V_73_73);
              }
#line 251 "interface.m"
              {
#line 251 "interface.m"
                mercury__require__error_1_p_0(interface__ReadMsg_15);
#line 251 "interface.m"
                return;
              }
#line 248 "interface.m"
            }
#line 244 "interface.m"
          else
#line 243 "interface.m"
            *interface__Resp_8 = (MR_hl_field(MR_mktag(1), interface__ReadRes_12, (MR_Integer) 0));
#line 253 "interface.m"
        {
#line 253 "interface.m"
          mercury__io__close_input_3_p_0(interface__FromStream_11);
        }
#line 270 "interface.m"
        if ((interface__Debug_7 == (MR_Integer) 0))
#line 271 "interface.m"
          {
#line 271 "interface.m"
          }
#line 270 "interface.m"
        else
#line 255 "interface.m"
          {
#line 255 "interface.m"
            MR_Word interface__DebugRes_17;

#line 257 "interface.m"
            {
#line 257 "interface.m"
              mercury__io__open_output_4_p_0((MR_String) "/tmp/.recv_term", &interface__DebugRes_17);
            }
#line 263 "interface.m"
            if (((MR_tag((MR_Word) interface__DebugRes_17)) == (MR_mktag((MR_Integer) 1))))
#line 264 "interface.m"
              {
#line 264 "interface.m"
                MR_Word interface__DebugError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_17, (MR_Integer) 0)));
#line 264 "interface.m"
                MR_String interface__DebugErrorMsg_20;
#line 264 "interface.m"
                MR_String interface__DebugMsg_21;
#line 264 "interface.m"
                MR_String interface__V_75_75;
#line 264 "interface.m"
                MR_Word interface__V_81_81;
#line 264 "interface.m"
                MR_String interface__V_83_83;
#line 264 "interface.m"
                MR_String interface__V_84_84;
#line 264 "interface.m"
                MR_String interface__V_91_91;

#line 265 "interface.m"
                {
#line 265 "interface.m"
                  mercury__io__error_message_2_p_0(interface__DebugError_19, &interface__DebugErrorMsg_20);
                }
#line 717 "interface.c"
                interface__V_81_81 = (MR_Word) &interface_scalar_common_2[0];
#line 267 "interface.m"
                {
#line 267 "interface.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_81_81, interface__DebugErrorMsg_20, &interface__V_75_75);
                }
#line 266 "interface.m"
                {
#line 266 "interface.m"
                  interface__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_75_75);
                }
#line 267 "interface.m"
                {
#line 267 "interface.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_81_81, (MR_String) "/tmp/.recv_term", &interface__V_84_84);
                }
#line 266 "interface.m"
                {
#line 266 "interface.m"
                  interface__V_91_91 = mercury__string__f_43_43_2_f_0(interface__V_84_84, interface__V_83_83);
                }
#line 266 "interface.m"
                {
#line 266 "interface.m"
                  interface__DebugMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "recv_term: couldn\'t open debug file ", interface__V_91_91);
                }
#line 268 "interface.m"
                {
#line 268 "interface.m"
                  mercury__require__error_1_p_0(interface__DebugMsg_21);
#line 268 "interface.m"
                  return;
                }
#line 264 "interface.m"
              }
#line 263 "interface.m"
            else
#line 259 "interface.m"
              {
#line 259 "interface.m"
                MR_Word interface__TypeInfo_56_56;
#line 259 "interface.m"
                MR_Word interface__DebugStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_17, (MR_Integer) 0)));

#line 762 "interface.c"
                {
#line 764 "interface.c"
                  interface__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "interface.c"
                  MR_hl_field(MR_mktag(0), interface__TypeInfo_56_56, 0) = ((MR_Box) (&mercury__io__io__type_ctor_info_read_result_1));
#line 768 "interface.c"
                  MR_hl_field(MR_mktag(0), interface__TypeInfo_56_56, 1) = ((MR_Box) (interface__TypeInfo_for_T_54));
#line 770 "interface.c"
                }
#line 260 "interface.m"
                {
#line 260 "interface.m"
                  mercury__io__write_4_p_0(interface__TypeInfo_56_56, interface__DebugStream_18, ((MR_Box) (interface__ReadRes_12)));
                }
#line 261 "interface.m"
                {
#line 261 "interface.m"
                  mercury__io__write_string_4_p_0(interface__DebugStream_18, (MR_String) ".\n");
                }
#line 262 "interface.m"
                {
#line 262 "interface.m"
                  mercury__io__close_output_3_p_0(interface__DebugStream_18);
#line 262 "interface.m"
                  return;
                }
#line 259 "interface.m"
              }
#line 255 "interface.m"
          }
#line 240 "interface.m"
      }
#line 237 "interface.m"
  }
#line 92 "interface.m"
}

#line 84 "interface.m"
void MR_CALL 
interface__send_string_5_p_0(
#line 84 "interface.m"
  MR_String interface__ToPipeName_6,
#line 84 "interface.m"
  MR_Word interface__Debug_7,
#line 84 "interface.m"
  MR_String interface__Data_8)
#line 84 "interface.m"
{
#line 205 "interface.m"
  {
#line 205 "interface.m"
    MR_bool interface__succeeded;
#line 205 "interface.m"
    MR_Word interface__ToPipeRes_10;

#line 206 "interface.m"
    {
#line 206 "interface.m"
      mercury__io__open_output_4_p_0(interface__ToPipeName_6, &interface__ToPipeRes_10);
    }
#line 211 "interface.m"
    if (((MR_tag((MR_Word) interface__ToPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 212 "interface.m"
      {
#line 212 "interface.m"
        MR_Word interface__ToPipeError_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__ToPipeRes_10, (MR_Integer) 0)));
#line 212 "interface.m"
        MR_String interface__ToPipeErrorMsg_13;
#line 212 "interface.m"
        MR_String interface__ToPipeMsg_14;
#line 212 "interface.m"
        MR_String interface__V_41_41;
#line 212 "interface.m"
        MR_Word interface__V_47_47;
#line 212 "interface.m"
        MR_String interface__V_49_49;
#line 212 "interface.m"
        MR_String interface__V_50_50;
#line 212 "interface.m"
        MR_String interface__V_57_57;

#line 213 "interface.m"
        {
#line 213 "interface.m"
          mercury__io__error_message_2_p_0(interface__ToPipeError_12, &interface__ToPipeErrorMsg_13);
        }
#line 849 "interface.c"
        interface__V_47_47 = (MR_Word) &interface_scalar_common_2[0];
#line 215 "interface.m"
        {
#line 215 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_47_47, interface__ToPipeErrorMsg_13, &interface__V_41_41);
        }
#line 214 "interface.m"
        {
#line 214 "interface.m"
          interface__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_41_41);
        }
#line 215 "interface.m"
        {
#line 215 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_47_47, interface__ToPipeName_6, &interface__V_50_50);
        }
#line 214 "interface.m"
        {
#line 214 "interface.m"
          interface__V_57_57 = mercury__string__f_43_43_2_f_0(interface__V_50_50, interface__V_49_49);
        }
#line 214 "interface.m"
        {
#line 214 "interface.m"
          interface__ToPipeMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "send_term: couldn\'t open pipe ", interface__V_57_57);
        }
#line 216 "interface.m"
        {
#line 216 "interface.m"
          mercury__require__error_1_p_0(interface__ToPipeMsg_14);
#line 216 "interface.m"
          return;
        }
#line 212 "interface.m"
      }
#line 211 "interface.m"
    else
#line 208 "interface.m"
      {
#line 208 "interface.m"
        MR_Word interface__ToStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__ToPipeRes_10, (MR_Integer) 0)));

#line 209 "interface.m"
        {
#line 209 "interface.m"
          mercury__io__write_string_4_p_0(interface__ToStream_11, interface__Data_8);
        }
#line 210 "interface.m"
        {
#line 210 "interface.m"
          mercury__io__close_output_3_p_0(interface__ToStream_11);
        }
#line 208 "interface.m"
      }
#line 233 "interface.m"
    if ((interface__Debug_7 == (MR_Integer) 0))
#line 234 "interface.m"
      {
#line 234 "interface.m"
      }
#line 233 "interface.m"
    else
#line 219 "interface.m"
      {
#line 219 "interface.m"
        MR_Word interface__DebugRes_16;

#line 221 "interface.m"
        {
#line 221 "interface.m"
          mercury__io__open_output_4_p_0((MR_String) "/tmp/.send_string", &interface__DebugRes_16);
        }
#line 226 "interface.m"
        if (((MR_tag((MR_Word) interface__DebugRes_16)) == (MR_mktag((MR_Integer) 1))))
#line 227 "interface.m"
          {
#line 227 "interface.m"
            MR_Word interface__DebugError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_16, (MR_Integer) 0)));
#line 227 "interface.m"
            MR_String interface__DebugErrorMsg_19;
#line 227 "interface.m"
            MR_String interface__DebugMsg_20;
#line 227 "interface.m"
            MR_String interface__V_59_59;
#line 227 "interface.m"
            MR_Word interface__V_65_65;
#line 227 "interface.m"
            MR_String interface__V_67_67;
#line 227 "interface.m"
            MR_String interface__V_68_68;
#line 227 "interface.m"
            MR_String interface__V_75_75;

#line 228 "interface.m"
            {
#line 228 "interface.m"
              mercury__io__error_message_2_p_0(interface__DebugError_18, &interface__DebugErrorMsg_19);
            }
#line 948 "interface.c"
            interface__V_65_65 = (MR_Word) &interface_scalar_common_2[0];
#line 230 "interface.m"
            {
#line 230 "interface.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_65_65, interface__DebugErrorMsg_19, &interface__V_59_59);
            }
#line 229 "interface.m"
            {
#line 229 "interface.m"
              interface__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_59_59);
            }
#line 230 "interface.m"
            {
#line 230 "interface.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_65_65, (MR_String) "/tmp/.send_string", &interface__V_68_68);
            }
#line 229 "interface.m"
            {
#line 229 "interface.m"
              interface__V_75_75 = mercury__string__f_43_43_2_f_0(interface__V_68_68, interface__V_67_67);
            }
#line 229 "interface.m"
            {
#line 229 "interface.m"
              interface__DebugMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "send_term: couldn\'t open debug file ", interface__V_75_75);
            }
#line 231 "interface.m"
            {
#line 231 "interface.m"
              mercury__require__error_1_p_0(interface__DebugMsg_20);
#line 231 "interface.m"
              return;
            }
#line 227 "interface.m"
          }
#line 226 "interface.m"
        else
#line 223 "interface.m"
          {
#line 223 "interface.m"
            MR_Word interface__DebugStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_16, (MR_Integer) 0)));

#line 224 "interface.m"
            {
#line 224 "interface.m"
              mercury__io__write_string_4_p_0(interface__DebugStream_17, interface__Data_8);
            }
#line 225 "interface.m"
            {
#line 225 "interface.m"
              mercury__io__close_output_3_p_0(interface__DebugStream_17);
#line 225 "interface.m"
              return;
            }
#line 223 "interface.m"
          }
#line 219 "interface.m"
      }
#line 205 "interface.m"
  }
#line 84 "interface.m"
}

#line 77 "interface.m"
void MR_CALL 
interface__send_term_5_p_0(
#line 77 "interface.m"
  MR_Word interface__TypeInfo_for_T_45,
#line 77 "interface.m"
  MR_String interface__ToPipeName_6,
#line 77 "interface.m"
  MR_Word interface__Debug_7,
#line 77 "interface.m"
  MR_Box interface__Data_8)
#line 77 "interface.m"
{
#line 171 "interface.m"
  {
#line 171 "interface.m"
    MR_bool interface__succeeded;
#line 171 "interface.m"
    MR_Word interface__ToPipeRes_10;

#line 172 "interface.m"
    {
#line 172 "interface.m"
      mercury__io__open_output_4_p_0(interface__ToPipeName_6, &interface__ToPipeRes_10);
    }
#line 178 "interface.m"
    if (((MR_tag((MR_Word) interface__ToPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 179 "interface.m"
      {
#line 179 "interface.m"
        MR_Word interface__ToPipeError_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__ToPipeRes_10, (MR_Integer) 0)));
#line 179 "interface.m"
        MR_String interface__ToPipeErrorMsg_13;
#line 179 "interface.m"
        MR_String interface__ToPipeMsg_14;
#line 179 "interface.m"
        MR_String interface__V_46_46;
#line 179 "interface.m"
        MR_Word interface__V_52_52;
#line 179 "interface.m"
        MR_String interface__V_54_54;
#line 179 "interface.m"
        MR_String interface__V_55_55;
#line 179 "interface.m"
        MR_String interface__V_62_62;

#line 180 "interface.m"
        {
#line 180 "interface.m"
          mercury__io__error_message_2_p_0(interface__ToPipeError_12, &interface__ToPipeErrorMsg_13);
        }
#line 1063 "interface.c"
        interface__V_52_52 = (MR_Word) &interface_scalar_common_2[0];
#line 182 "interface.m"
        {
#line 182 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_52_52, interface__ToPipeErrorMsg_13, &interface__V_46_46);
        }
#line 181 "interface.m"
        {
#line 181 "interface.m"
          interface__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_46_46);
        }
#line 182 "interface.m"
        {
#line 182 "interface.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_52_52, interface__ToPipeName_6, &interface__V_55_55);
        }
#line 181 "interface.m"
        {
#line 181 "interface.m"
          interface__V_62_62 = mercury__string__f_43_43_2_f_0(interface__V_55_55, interface__V_54_54);
        }
#line 181 "interface.m"
        {
#line 181 "interface.m"
          interface__ToPipeMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "send_term: couldn\'t open pipe ", interface__V_62_62);
        }
#line 183 "interface.m"
        {
#line 183 "interface.m"
          mercury__require__error_1_p_0(interface__ToPipeMsg_14);
#line 183 "interface.m"
          return;
        }
#line 179 "interface.m"
      }
#line 178 "interface.m"
    else
#line 174 "interface.m"
      {
#line 174 "interface.m"
        MR_Word interface__ToStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__ToPipeRes_10, (MR_Integer) 0)));

#line 175 "interface.m"
        {
#line 175 "interface.m"
          mercury__io__write_4_p_0(interface__TypeInfo_for_T_45, interface__ToStream_11, interface__Data_8);
        }
#line 176 "interface.m"
        {
#line 176 "interface.m"
          mercury__io__write_string_4_p_0(interface__ToStream_11, (MR_String) ".\n");
        }
#line 177 "interface.m"
        {
#line 177 "interface.m"
          mercury__io__close_output_3_p_0(interface__ToStream_11);
        }
#line 174 "interface.m"
      }
#line 201 "interface.m"
    if ((interface__Debug_7 == (MR_Integer) 0))
#line 202 "interface.m"
      {
#line 202 "interface.m"
      }
#line 201 "interface.m"
    else
#line 186 "interface.m"
      {
#line 186 "interface.m"
        MR_Word interface__DebugRes_16;

#line 188 "interface.m"
        {
#line 188 "interface.m"
          mercury__io__open_output_4_p_0((MR_String) "/tmp/.send_term", &interface__DebugRes_16);
        }
#line 194 "interface.m"
        if (((MR_tag((MR_Word) interface__DebugRes_16)) == (MR_mktag((MR_Integer) 1))))
#line 195 "interface.m"
          {
#line 195 "interface.m"
            MR_Word interface__DebugError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_16, (MR_Integer) 0)));
#line 195 "interface.m"
            MR_String interface__DebugErrorMsg_19;
#line 195 "interface.m"
            MR_String interface__DebugMsg_20;
#line 195 "interface.m"
            MR_String interface__V_64_64;
#line 195 "interface.m"
            MR_Word interface__V_70_70;
#line 195 "interface.m"
            MR_String interface__V_72_72;
#line 195 "interface.m"
            MR_String interface__V_73_73;
#line 195 "interface.m"
            MR_String interface__V_80_80;

#line 196 "interface.m"
            {
#line 196 "interface.m"
              mercury__io__error_message_2_p_0(interface__DebugError_18, &interface__DebugErrorMsg_19);
            }
#line 1167 "interface.c"
            interface__V_70_70 = (MR_Word) &interface_scalar_common_2[0];
#line 198 "interface.m"
            {
#line 198 "interface.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_70_70, interface__DebugErrorMsg_19, &interface__V_64_64);
            }
#line 197 "interface.m"
            {
#line 197 "interface.m"
              interface__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__V_64_64);
            }
#line 198 "interface.m"
            {
#line 198 "interface.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(interface__V_70_70, (MR_String) "/tmp/.send_term", &interface__V_73_73);
            }
#line 197 "interface.m"
            {
#line 197 "interface.m"
              interface__V_80_80 = mercury__string__f_43_43_2_f_0(interface__V_73_73, interface__V_72_72);
            }
#line 197 "interface.m"
            {
#line 197 "interface.m"
              interface__DebugMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "send_term: couldn\'t open debug file ", interface__V_80_80);
            }
#line 199 "interface.m"
            {
#line 199 "interface.m"
              mercury__require__error_1_p_0(interface__DebugMsg_20);
#line 199 "interface.m"
              return;
            }
#line 195 "interface.m"
          }
#line 194 "interface.m"
        else
#line 190 "interface.m"
          {
#line 190 "interface.m"
            MR_Word interface__DebugStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_16, (MR_Integer) 0)));

#line 191 "interface.m"
            {
#line 191 "interface.m"
              mercury__io__write_4_p_0(interface__TypeInfo_for_T_45, interface__DebugStream_17, interface__Data_8);
            }
#line 192 "interface.m"
            {
#line 192 "interface.m"
              mercury__io__write_string_4_p_0(interface__DebugStream_17, (MR_String) ".\n");
            }
#line 193 "interface.m"
            {
#line 193 "interface.m"
              mercury__io__close_output_3_p_0(interface__DebugStream_17);
#line 193 "interface.m"
              return;
            }
#line 190 "interface.m"
          }
#line 186 "interface.m"
      }
#line 171 "interface.m"
  }
#line 77 "interface.m"
}

#line 70 "interface.m"
MR_String MR_CALL 
interface__response_file_name_2_f_0(
#line 70 "interface.m"
  MR_String interface__DataFileName_4,
#line 70 "interface.m"
  MR_Integer interface__QueryNum_5)
#line 70 "interface.m"
{
#line 138 "interface.m"
  {
#line 138 "interface.m"
    MR_bool interface__succeeded;
#line 138 "interface.m"
    MR_String interface__HeadVar__3_3;
#line 138 "interface.m"
    MR_String interface__V_7_7;
#line 138 "interface.m"
    MR_String interface__V_9_9;
#line 138 "interface.m"
    MR_String interface__V_11_11;
#line 138 "interface.m"
    MR_String interface__V_12_12;
#line 138 "interface.m"
    MR_String interface__V_13_13;
#line 138 "interface.m"
    MR_Word interface__FileNameChars_16;
#line 138 "interface.m"
    MR_Word interface__MangledFileNameChars_17;

#line 150 "interface.m"
    {
#line 150 "interface.m"
      interface__FileNameChars_16 = mercury__string__to_char_list_1_f_0(interface__DataFileName_4);
    }
#line 151 "interface.m"
    {
#line 151 "interface.m"
      interface__MangledFileNameChars_17 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_16);
    }
#line 152 "interface.m"
    {
#line 152 "interface.m"
      interface__V_12_12 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_17);
    }
#line 141 "interface.m"
    {
#line 141 "interface.m"
      interface__V_13_13 = mercury__string__int_to_string_1_f_0(interface__QueryNum_5);
    }
#line 140 "interface.m"
    {
#line 140 "interface.m"
      interface__V_11_11 = mercury__string__f_43_43_2_f_0(interface__V_12_12, interface__V_13_13);
    }
#line 140 "interface.m"
    {
#line 140 "interface.m"
      interface__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_response", interface__V_11_11);
    }
#line 139 "interface.m"
    {
#line 139 "interface.m"
      interface__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__V_9_9);
    }
#line 139 "interface.m"
    {
#line 139 "interface.m"
      return interface__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__V_7_7);
    }
#line 138 "interface.m"
    return interface__HeadVar__3_3;
#line 138 "interface.m"
  }
#line 70 "interface.m"
}

#line 69 "interface.m"
MR_String MR_CALL 
interface__want_file_name_0_f_0(void)
#line 69 "interface.m"
{
#line 135 "interface.m"
  {
#line 135 "interface.m"
    MR_bool interface__succeeded;
#line 135 "interface.m"
    MR_String interface__HeadVar__1_1;
#line 135 "interface.m"
    MR_String interface__V_3_3;
#line 135 "interface.m"
    MR_String interface__V_5_5;
#line 135 "interface.m"
    MR_String interface__V_7_7;
#line 135 "interface.m"
    MR_Integer interface__V_8_8;

#line 136 "interface.m"
    {
#line 136 "interface.m"
      interface__V_8_8 = conf__getpid_0_f_0();
    }
#line 136 "interface.m"
    {
#line 136 "interface.m"
      interface__V_7_7 = mercury__string__int_to_string_1_f_0(interface__V_8_8);
    }
#line 136 "interface.m"
    {
#line 136 "interface.m"
      interface__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_want", interface__V_7_7);
    }
#line 136 "interface.m"
    {
#line 136 "interface.m"
      interface__V_3_3 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__V_5_5);
    }
#line 136 "interface.m"
    {
#line 136 "interface.m"
      return interface__HeadVar__1_1 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__V_3_3);
    }
#line 135 "interface.m"
    return interface__HeadVar__1_1;
#line 135 "interface.m"
  }
#line 69 "interface.m"
}

#line 68 "interface.m"
MR_String MR_CALL 
interface__want_prefix_0_f_0(void)
#line 68 "interface.m"
{
#line 133 "interface.m"
  {
#line 133 "interface.m"
    MR_bool interface__succeeded;

#line 133 "interface.m"
    return (MR_String) "mdprof_want";
#line 133 "interface.m"
  }
#line 68 "interface.m"
}

#line 67 "interface.m"
MR_String MR_CALL 
interface__want_dir_0_f_0(void)
#line 67 "interface.m"
{
#line 145 "interface.m"
  {
#line 145 "interface.m"
    MR_bool interface__succeeded;

#line 145 "interface.m"
    return (MR_String) "/var/tmp";
#line 145 "interface.m"
  }
#line 67 "interface.m"
}

#line 66 "interface.m"
MR_String MR_CALL 
interface__mutex_file_name_1_f_0(
#line 66 "interface.m"
  MR_String interface__DataFileName_3)
#line 66 "interface.m"
{
#line 127 "interface.m"
  {
#line 127 "interface.m"
    MR_bool interface__succeeded;
#line 127 "interface.m"
    MR_String interface__HeadVar__2_2;
#line 127 "interface.m"
    MR_String interface__V_5_5;
#line 127 "interface.m"
    MR_String interface__V_7_7;
#line 127 "interface.m"
    MR_String interface__V_9_9;
#line 127 "interface.m"
    MR_Word interface__FileNameChars_12;
#line 127 "interface.m"
    MR_Word interface__MangledFileNameChars_13;

#line 150 "interface.m"
    {
#line 150 "interface.m"
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
#line 151 "interface.m"
    {
#line 151 "interface.m"
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
#line 152 "interface.m"
    {
#line 152 "interface.m"
      interface__V_9_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
#line 129 "interface.m"
    {
#line 129 "interface.m"
      interface__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_mutex", interface__V_9_9);
    }
#line 128 "interface.m"
    {
#line 128 "interface.m"
      interface__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__V_7_7);
    }
#line 128 "interface.m"
    {
#line 128 "interface.m"
      return interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__V_5_5);
    }
#line 127 "interface.m"
    return interface__HeadVar__2_2;
#line 127 "interface.m"
  }
#line 66 "interface.m"
}

#line 65 "interface.m"
MR_String MR_CALL 
interface__server_startup_name_1_f_0(
#line 65 "interface.m"
  MR_String interface__DataFileName_3)
#line 65 "interface.m"
{
#line 123 "interface.m"
  {
#line 123 "interface.m"
    MR_bool interface__succeeded;
#line 123 "interface.m"
    MR_String interface__HeadVar__2_2;
#line 123 "interface.m"
    MR_String interface__V_5_5;
#line 123 "interface.m"
    MR_String interface__V_7_7;
#line 123 "interface.m"
    MR_String interface__V_9_9;
#line 123 "interface.m"
    MR_Word interface__FileNameChars_12;
#line 123 "interface.m"
    MR_Word interface__MangledFileNameChars_13;

#line 150 "interface.m"
    {
#line 150 "interface.m"
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
#line 151 "interface.m"
    {
#line 151 "interface.m"
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
#line 152 "interface.m"
    {
#line 152 "interface.m"
      interface__V_9_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
#line 125 "interface.m"
    {
#line 125 "interface.m"
      interface__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_startup_err", interface__V_9_9);
    }
#line 124 "interface.m"
    {
#line 124 "interface.m"
      interface__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__V_7_7);
    }
#line 124 "interface.m"
    {
#line 124 "interface.m"
      return interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__V_5_5);
    }
#line 123 "interface.m"
    return interface__HeadVar__2_2;
#line 123 "interface.m"
  }
#line 65 "interface.m"
}

#line 64 "interface.m"
MR_String MR_CALL 
interface__from_server_pipe_name_1_f_0(
#line 64 "interface.m"
  MR_String interface__DataFileName_3)
#line 64 "interface.m"
{
#line 119 "interface.m"
  {
#line 119 "interface.m"
    MR_bool interface__succeeded;
#line 119 "interface.m"
    MR_String interface__HeadVar__2_2;
#line 119 "interface.m"
    MR_String interface__V_5_5;
#line 119 "interface.m"
    MR_String interface__V_7_7;
#line 119 "interface.m"
    MR_String interface__V_9_9;
#line 119 "interface.m"
    MR_Word interface__FileNameChars_12;
#line 119 "interface.m"
    MR_Word interface__MangledFileNameChars_13;

#line 150 "interface.m"
    {
#line 150 "interface.m"
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
#line 151 "interface.m"
    {
#line 151 "interface.m"
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
#line 152 "interface.m"
    {
#line 152 "interface.m"
      interface__V_9_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
#line 121 "interface.m"
    {
#line 121 "interface.m"
      interface__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_server_from", interface__V_9_9);
    }
#line 120 "interface.m"
    {
#line 120 "interface.m"
      interface__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__V_7_7);
    }
#line 120 "interface.m"
    {
#line 120 "interface.m"
      return interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__V_5_5);
    }
#line 119 "interface.m"
    return interface__HeadVar__2_2;
#line 119 "interface.m"
  }
#line 64 "interface.m"
}

#line 63 "interface.m"
MR_String MR_CALL 
interface__to_server_pipe_name_1_f_0(
#line 63 "interface.m"
  MR_String interface__DataFileName_3)
#line 63 "interface.m"
{
#line 115 "interface.m"
  {
#line 115 "interface.m"
    MR_bool interface__succeeded;
#line 115 "interface.m"
    MR_String interface__HeadVar__2_2;
#line 115 "interface.m"
    MR_String interface__V_5_5;
#line 115 "interface.m"
    MR_String interface__V_7_7;
#line 115 "interface.m"
    MR_String interface__V_9_9;
#line 115 "interface.m"
    MR_Word interface__FileNameChars_12;
#line 115 "interface.m"
    MR_Word interface__MangledFileNameChars_13;

#line 150 "interface.m"
    {
#line 150 "interface.m"
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
#line 151 "interface.m"
    {
#line 151 "interface.m"
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
#line 152 "interface.m"
    {
#line 152 "interface.m"
      interface__V_9_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
#line 117 "interface.m"
    {
#line 117 "interface.m"
      interface__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_server_to", interface__V_9_9);
    }
#line 116 "interface.m"
    {
#line 116 "interface.m"
      interface__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__V_7_7);
    }
#line 116 "interface.m"
    {
#line 116 "interface.m"
      return interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__V_5_5);
    }
#line 115 "interface.m"
    return interface__HeadVar__2_2;
#line 115 "interface.m"
  }
#line 63 "interface.m"
}

void mercury__interface__init(void)
{
}

void mercury__interface__init_type_tables(void)
{
}

void mercury__interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module interface. */
