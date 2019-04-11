/*
** Automatically generated from `interface.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


#include "conf.mih"
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




static MR_Word MR_CALL 
interface__filename_mangle_2_1_f_0(
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
#include "string.mh"
#include "time.mh"



static MR_Word MR_CALL 
interface__filename_mangle_2_1_f_0(
  MR_Word interface__HeadVar__1_1)
{
  {
    MR_bool interface__succeeded;
    MR_Word interface__HeadVar__2_2;

    if ((interface__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Char interface__First_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), interface__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word interface__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word interface__MangledRest_6;

        {
          interface__MangledRest_6 = interface__filename_mangle_2_1_f_0(interface__Rest_4);
        }
        interface__succeeded = (interface__First_3 == (MR_Char) 47);
        if (interface__succeeded)
          {
            MR_Word interface__Var_8;

            {
              interface__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), interface__Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Char) 46));
              MR_hl_field(MR_mktag(1), interface__Var_8, 1) = ((MR_Box) (interface__MangledRest_6));
            }
            {
              interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
              MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 1) = ((MR_Box) (interface__Var_8));
            }
          }
        else
          {
            interface__succeeded = (interface__First_3 == (MR_Char) 58);
            if (interface__succeeded)
              {
                MR_Word interface__Var_11;

                {
                  interface__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), interface__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
                  MR_hl_field(MR_mktag(1), interface__Var_11, 1) = ((MR_Box) (interface__MangledRest_6));
                }
                {
                  interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
                  MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 1) = ((MR_Box) (interface__Var_11));
                }
              }
            else
              {
                interface__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (interface__First_3));
                MR_hl_field(MR_mktag(1), interface__HeadVar__2_2, 1) = ((MR_Box) (interface__MangledRest_6));
              }
          }
      }
    return interface__HeadVar__2_2;
  }
}

void MR_CALL 
interface__recv_string_5_p_0(
  MR_String interface__FromPipeName_6,
  MR_Word interface__Debug_7,
  MR_String * interface__Resp_8)
{
  {
    MR_bool interface__succeeded;
    MR_Word interface__FromPipeRes_10;

    {
      mercury__io__open_input_4_p_0(interface__FromPipeName_6, &interface__FromPipeRes_10);
    }
    if (((MR_tag((MR_Word) interface__FromPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word interface__FromPipeError_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__FromPipeRes_10, (MR_Integer) 0)));
        MR_String interface__FromPipeErrorMsg_24;
        MR_String interface__FromPipeMsg_25;
        MR_String interface__Var_65;
        MR_String interface__Var_66;

        {
          mercury__io__error_message_2_p_0(interface__FromPipeError_23, &interface__FromPipeErrorMsg_24);
        }
        {
          interface__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__FromPipeErrorMsg_24);
        }
        {
          interface__Var_66 = mercury__string__f_43_43_2_f_0(interface__FromPipeName_6, interface__Var_65);
        }
        {
          interface__FromPipeMsg_25 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", interface__Var_66);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.recv_string\'/5", interface__FromPipeMsg_25);
          return;
        }
      }
    else
      {
        MR_Word interface__FromStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__FromPipeRes_10, (MR_Integer) 0)));
        MR_Word interface__ReadRes_12;

        {
          mercury__io__read_file_as_string_4_p_0(interface__FromStream_11, &interface__ReadRes_12);
        }
        if (((MR_tag((MR_Word) interface__ReadRes_12)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word interface__ReadError_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__ReadRes_12, (MR_Integer) 1)));
            MR_String interface__ReadErrorMsg_15;
            MR_String interface__ReadMsg_16;
            MR_String interface__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), interface__ReadRes_12, (MR_Integer) 0)));

            {
              mercury__io__error_message_2_p_0(interface__ReadError_14, &interface__ReadErrorMsg_15);
            }
            {
              interface__ReadMsg_16 = mercury__string__f_43_43_2_f_0((MR_String) "read failed: ", interface__ReadErrorMsg_15);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.recv_string\'/5", interface__ReadMsg_16);
              return;
            }
          }
        else
          *interface__Resp_8 = ((MR_String) (MR_hl_field(MR_mktag(0), interface__ReadRes_12, (MR_Integer) 0)));
        {
          mercury__io__close_input_3_p_0(interface__FromStream_11);
        }
        switch (interface__Debug_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word interface__DebugRes_18;

              {
                mercury__io__open_output_4_p_0((MR_String) "/tmp/.recv_string", &interface__DebugRes_18);
              }
              if (((MR_tag((MR_Word) interface__DebugRes_18)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word interface__DebugError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_18, (MR_Integer) 0)));
                  MR_String interface__DebugErrorMsg_21;
                  MR_String interface__DebugMsg_22;
                  MR_String interface__Var_61;
                  MR_String interface__Var_62;

                  {
                    mercury__io__error_message_2_p_0(interface__DebugError_20, &interface__DebugErrorMsg_21);
                  }
                  {
                    interface__Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__DebugErrorMsg_21);
                  }
                  {
                    interface__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.recv_string", interface__Var_61);
                  }
                  {
                    interface__DebugMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", interface__Var_62);
                  }
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.recv_string\'/5", interface__DebugMsg_22);
                    return;
                  }
                }
              else
                {
                  MR_Word interface__DebugStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_18, (MR_Integer) 0)));

                  {
                    mercury__io__write_4_p_0((MR_Word) &interface_scalar_common_1[0], interface__DebugStream_19, ((MR_Box) (interface__ReadRes_12)));
                  }
                  {
                    mercury__io__write_string_4_p_0(interface__DebugStream_19, (MR_String) ".\n");
                  }
                  {
                    mercury__io__close_output_3_p_0(interface__DebugStream_19);
                  }
                }
            }
            break;
        }
      }
  }
}

void MR_CALL 
interface__recv_term_5_p_0(
  MR_Word interface__TypeInfo_for_T_62,
  MR_String interface__FromPipeName_6,
  MR_Word interface__Debug_7,
  MR_Box * interface__Resp_8)
{
  {
    MR_bool interface__succeeded;
    MR_Word interface__FromPipeRes_10;

    {
      mercury__io__open_input_4_p_0(interface__FromPipeName_6, &interface__FromPipeRes_10);
    }
    if (((MR_tag((MR_Word) interface__FromPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word interface__FromPipeError_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__FromPipeRes_10, (MR_Integer) 0)));
        MR_String interface__FromPipeErrorMsg_23;
        MR_String interface__FromPipeMsg_24;
        MR_String interface__Var_81;
        MR_String interface__Var_82;

        {
          mercury__io__error_message_2_p_0(interface__FromPipeError_22, &interface__FromPipeErrorMsg_23);
        }
        {
          interface__Var_81 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__FromPipeErrorMsg_23);
        }
        {
          interface__Var_82 = mercury__string__f_43_43_2_f_0(interface__FromPipeName_6, interface__Var_81);
        }
        {
          interface__FromPipeMsg_24 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", interface__Var_82);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.recv_term\'/5", interface__FromPipeMsg_24);
          return;
        }
      }
    else
      {
        MR_Word interface__FromStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__FromPipeRes_10, (MR_Integer) 0)));
        MR_Word interface__ReadRes_12;

        {
          mercury__io__read_4_p_0(interface__TypeInfo_for_T_62, interface__FromStream_11, &interface__ReadRes_12);
        }
        switch (MR_tag((MR_Word) interface__ReadRes_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.recv_term\'/5", (MR_String) "read failed: premature eof");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            *interface__Resp_8 = (MR_hl_field(MR_mktag(1), interface__ReadRes_12, (MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            {
              MR_String interface__ReadErrorMsg_13 = ((MR_String) (MR_hl_field(MR_mktag(2), interface__ReadRes_12, (MR_Integer) 0)));
              MR_Integer interface__ReadErrorLineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), interface__ReadRes_12, (MR_Integer) 1)));
              MR_String interface__ReadMsg_15;
              MR_String interface__Var_66;
              MR_String interface__Var_67;
              MR_String interface__Var_74;

              {
                interface__Var_66 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__ReadErrorMsg_13);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &interface_scalar_common_2[0], interface__ReadErrorLineNumber_14, &interface__Var_67);
              }
              {
                interface__Var_74 = mercury__string__f_43_43_2_f_0(interface__Var_67, interface__Var_66);
              }
              {
                interface__ReadMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "read failed at line ", interface__Var_74);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.recv_term\'/5", interface__ReadMsg_15);
                return;
              }
            }
            break;
        }
        {
          mercury__io__close_input_3_p_0(interface__FromStream_11);
        }
        switch (interface__Debug_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word interface__DebugRes_17;

              {
                mercury__io__open_output_4_p_0((MR_String) "/tmp/.recv_term", &interface__DebugRes_17);
              }
              if (((MR_tag((MR_Word) interface__DebugRes_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word interface__DebugError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_17, (MR_Integer) 0)));
                  MR_String interface__DebugErrorMsg_20;
                  MR_String interface__DebugMsg_21;
                  MR_String interface__Var_77;
                  MR_String interface__Var_78;

                  {
                    mercury__io__error_message_2_p_0(interface__DebugError_19, &interface__DebugErrorMsg_20);
                  }
                  {
                    interface__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__DebugErrorMsg_20);
                  }
                  {
                    interface__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.recv_term", interface__Var_77);
                  }
                  {
                    interface__DebugMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", interface__Var_78);
                  }
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.recv_term\'/5", interface__DebugMsg_21);
                    return;
                  }
                }
              else
                {
                  MR_Word interface__TypeInfo_64_64;
                  MR_Word interface__DebugStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_17, (MR_Integer) 0)));

                  {
                    interface__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), interface__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__io__io__type_ctor_info_read_result_1));
                    MR_hl_field(MR_mktag(0), interface__TypeInfo_64_64, 1) = ((MR_Box) (interface__TypeInfo_for_T_62));
                  }
                  {
                    mercury__io__write_4_p_0(interface__TypeInfo_64_64, interface__DebugStream_18, ((MR_Box) (interface__ReadRes_12)));
                  }
                  {
                    mercury__io__write_string_4_p_0(interface__DebugStream_18, (MR_String) ".\n");
                  }
                  {
                    mercury__io__close_output_3_p_0(interface__DebugStream_18);
                  }
                }
            }
            break;
        }
      }
  }
}

void MR_CALL 
interface__send_string_5_p_0(
  MR_String interface__ToPipeName_6,
  MR_Word interface__Debug_7,
  MR_String interface__Data_8)
{
  {
    MR_bool interface__succeeded;
    MR_Word interface__ToPipeRes_10;

    {
      mercury__io__open_output_4_p_0(interface__ToPipeName_6, &interface__ToPipeRes_10);
    }
    if (((MR_tag((MR_Word) interface__ToPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word interface__ToPipeError_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__ToPipeRes_10, (MR_Integer) 0)));
        MR_String interface__ToPipeErrorMsg_13;
        MR_String interface__ToPipeMsg_14;
        MR_String interface__Var_46;
        MR_String interface__Var_47;

        {
          mercury__io__error_message_2_p_0(interface__ToPipeError_12, &interface__ToPipeErrorMsg_13);
        }
        {
          interface__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__ToPipeErrorMsg_13);
        }
        {
          interface__Var_47 = mercury__string__f_43_43_2_f_0(interface__ToPipeName_6, interface__Var_46);
        }
        {
          interface__ToPipeMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", interface__Var_47);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.send_string\'/5", interface__ToPipeMsg_14);
          return;
        }
      }
    else
      {
        MR_Word interface__ToStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__ToPipeRes_10, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(interface__ToStream_11, interface__Data_8);
        }
        {
          mercury__io__close_output_3_p_0(interface__ToStream_11);
        }
      }
    switch (interface__Debug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word interface__DebugRes_16;

          {
            mercury__io__open_output_4_p_0((MR_String) "/tmp/.send_string", &interface__DebugRes_16);
          }
          if (((MR_tag((MR_Word) interface__DebugRes_16)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word interface__DebugError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_16, (MR_Integer) 0)));
              MR_String interface__DebugErrorMsg_19;
              MR_String interface__DebugMsg_20;
              MR_String interface__Var_50;
              MR_String interface__Var_51;

              {
                mercury__io__error_message_2_p_0(interface__DebugError_18, &interface__DebugErrorMsg_19);
              }
              {
                interface__Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__DebugErrorMsg_19);
              }
              {
                interface__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.send_string", interface__Var_50);
              }
              {
                interface__DebugMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", interface__Var_51);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.send_string\'/5", interface__DebugMsg_20);
                return;
              }
            }
          else
            {
              MR_Word interface__DebugStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_16, (MR_Integer) 0)));

              {
                mercury__io__write_string_4_p_0(interface__DebugStream_17, interface__Data_8);
              }
              {
                mercury__io__close_output_3_p_0(interface__DebugStream_17);
              }
            }
        }
        break;
    }
  }
}

void MR_CALL 
interface__send_term_5_p_0(
  MR_Word interface__TypeInfo_for_T_49,
  MR_String interface__ToPipeName_6,
  MR_Word interface__Debug_7,
  MR_Box interface__Data_8)
{
  {
    MR_bool interface__succeeded;
    MR_Word interface__ToPipeRes_10;

    {
      mercury__io__open_output_4_p_0(interface__ToPipeName_6, &interface__ToPipeRes_10);
    }
    if (((MR_tag((MR_Word) interface__ToPipeRes_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word interface__ToPipeError_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__ToPipeRes_10, (MR_Integer) 0)));
        MR_String interface__ToPipeErrorMsg_13;
        MR_String interface__ToPipeMsg_14;
        MR_String interface__Var_51;
        MR_String interface__Var_52;

        {
          mercury__io__error_message_2_p_0(interface__ToPipeError_12, &interface__ToPipeErrorMsg_13);
        }
        {
          interface__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__ToPipeErrorMsg_13);
        }
        {
          interface__Var_52 = mercury__string__f_43_43_2_f_0(interface__ToPipeName_6, interface__Var_51);
        }
        {
          interface__ToPipeMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", interface__Var_52);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.send_term\'/5", interface__ToPipeMsg_14);
          return;
        }
      }
    else
      {
        MR_Word interface__ToStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__ToPipeRes_10, (MR_Integer) 0)));

        {
          mercury__io__write_4_p_0(interface__TypeInfo_for_T_49, interface__ToStream_11, interface__Data_8);
        }
        {
          mercury__io__write_string_4_p_0(interface__ToStream_11, (MR_String) ".\n");
        }
        {
          mercury__io__close_output_3_p_0(interface__ToStream_11);
        }
      }
    switch (interface__Debug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word interface__DebugRes_16;

          {
            mercury__io__open_output_4_p_0((MR_String) "/tmp/.send_term", &interface__DebugRes_16);
          }
          if (((MR_tag((MR_Word) interface__DebugRes_16)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word interface__DebugError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), interface__DebugRes_16, (MR_Integer) 0)));
              MR_String interface__DebugErrorMsg_19;
              MR_String interface__DebugMsg_20;
              MR_String interface__Var_55;
              MR_String interface__Var_56;

              {
                mercury__io__error_message_2_p_0(interface__DebugError_18, &interface__DebugErrorMsg_19);
              }
              {
                interface__Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ": ", interface__DebugErrorMsg_19);
              }
              {
                interface__Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.send_term", interface__Var_55);
              }
              {
                interface__DebugMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", interface__Var_56);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "interface", (MR_String) "predicate \140interface.send_term\'/5", interface__DebugMsg_20);
                return;
              }
            }
          else
            {
              MR_Word interface__DebugStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), interface__DebugRes_16, (MR_Integer) 0)));

              {
                mercury__io__write_4_p_0(interface__TypeInfo_for_T_49, interface__DebugStream_17, interface__Data_8);
              }
              {
                mercury__io__write_string_4_p_0(interface__DebugStream_17, (MR_String) ".\n");
              }
              {
                mercury__io__close_output_3_p_0(interface__DebugStream_17);
              }
            }
        }
        break;
    }
  }
}

MR_String MR_CALL 
interface__response_file_name_2_f_0(
  MR_String interface__DataFileName_4,
  MR_Integer interface__QueryNum_5)
{
  {
    MR_bool interface__succeeded;
    MR_String interface__HeadVar__3_3;
    MR_String interface__Var_7;
    MR_String interface__Var_9;
    MR_String interface__Var_11;
    MR_String interface__Var_12;
    MR_String interface__Var_13;
    MR_Word interface__FileNameChars_16;
    MR_Word interface__MangledFileNameChars_17;

    {
      interface__FileNameChars_16 = mercury__string__to_char_list_1_f_0(interface__DataFileName_4);
    }
    {
      interface__MangledFileNameChars_17 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_16);
    }
    {
      interface__Var_12 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_17);
    }
    {
      interface__Var_13 = mercury__string__int_to_string_1_f_0(interface__QueryNum_5);
    }
    {
      interface__Var_11 = mercury__string__f_43_43_2_f_0(interface__Var_12, interface__Var_13);
    }
    {
      interface__Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_response", interface__Var_11);
    }
    {
      interface__Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__Var_9);
    }
    {
      interface__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__Var_7);
    }
    return interface__HeadVar__3_3;
  }
}

MR_String MR_CALL 
interface__want_file_name_0_f_0(void)
{
  {
    MR_bool interface__succeeded;
    MR_String interface__HeadVar__1_1;
    MR_String interface__Var_3;
    MR_String interface__Var_5;
    MR_String interface__Var_7;
    MR_Integer interface__Var_8;

    {
      interface__Var_8 = conf__getpid_0_f_0();
    }
    {
      interface__Var_7 = mercury__string__int_to_string_1_f_0(interface__Var_8);
    }
    {
      interface__Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_want", interface__Var_7);
    }
    {
      interface__Var_3 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__Var_5);
    }
    {
      interface__HeadVar__1_1 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__Var_3);
    }
    return interface__HeadVar__1_1;
  }
}

MR_String MR_CALL 
interface__want_prefix_0_f_0(void)
{
  {
    MR_bool interface__succeeded;

    return (MR_String) "mdprof_want";
  }
}

MR_String MR_CALL 
interface__want_dir_0_f_0(void)
{
  {
    MR_bool interface__succeeded;

    return (MR_String) "/var/tmp";
  }
}

MR_String MR_CALL 
interface__mutex_file_name_1_f_0(
  MR_String interface__DataFileName_3)
{
  {
    MR_bool interface__succeeded;
    MR_String interface__HeadVar__2_2;
    MR_String interface__Var_5;
    MR_String interface__Var_7;
    MR_String interface__Var_9;
    MR_Word interface__FileNameChars_12;
    MR_Word interface__MangledFileNameChars_13;

    {
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
    {
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
    {
      interface__Var_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
    {
      interface__Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_mutex", interface__Var_9);
    }
    {
      interface__Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__Var_7);
    }
    {
      interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__Var_5);
    }
    return interface__HeadVar__2_2;
  }
}

MR_String MR_CALL 
interface__server_startup_name_1_f_0(
  MR_String interface__DataFileName_3)
{
  {
    MR_bool interface__succeeded;
    MR_String interface__HeadVar__2_2;
    MR_String interface__Var_5;
    MR_String interface__Var_7;
    MR_String interface__Var_9;
    MR_Word interface__FileNameChars_12;
    MR_Word interface__MangledFileNameChars_13;

    {
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
    {
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
    {
      interface__Var_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
    {
      interface__Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_startup_err", interface__Var_9);
    }
    {
      interface__Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__Var_7);
    }
    {
      interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__Var_5);
    }
    return interface__HeadVar__2_2;
  }
}

MR_String MR_CALL 
interface__from_server_pipe_name_1_f_0(
  MR_String interface__DataFileName_3)
{
  {
    MR_bool interface__succeeded;
    MR_String interface__HeadVar__2_2;
    MR_String interface__Var_5;
    MR_String interface__Var_7;
    MR_String interface__Var_9;
    MR_Word interface__FileNameChars_12;
    MR_Word interface__MangledFileNameChars_13;

    {
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
    {
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
    {
      interface__Var_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
    {
      interface__Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_server_from", interface__Var_9);
    }
    {
      interface__Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__Var_7);
    }
    {
      interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__Var_5);
    }
    return interface__HeadVar__2_2;
  }
}

MR_String MR_CALL 
interface__to_server_pipe_name_1_f_0(
  MR_String interface__DataFileName_3)
{
  {
    MR_bool interface__succeeded;
    MR_String interface__HeadVar__2_2;
    MR_String interface__Var_5;
    MR_String interface__Var_7;
    MR_String interface__Var_9;
    MR_Word interface__FileNameChars_12;
    MR_Word interface__MangledFileNameChars_13;

    {
      interface__FileNameChars_12 = mercury__string__to_char_list_1_f_0(interface__DataFileName_3);
    }
    {
      interface__MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(interface__FileNameChars_12);
    }
    {
      interface__Var_9 = mercury__string__from_char_list_1_f_0(interface__MangledFileNameChars_13);
    }
    {
      interface__Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_server_to", interface__Var_9);
    }
    {
      interface__Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", interface__Var_7);
    }
    {
      interface__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", interface__Var_5);
    }
    return interface__HeadVar__2_2;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module interface. */
