/*
** Automatically generated from `interface.m'
** by the Mercury compiler,
** version rotd-2020-03-27
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


// :- module interface.
// :- implementation.

/*
INIT mercury__interface__init
ENDINIT
*/

#include "interface.mih"


#include "array.mih"
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
  MR_Word HeadVar__1_1);


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
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
interface__recv_string_5_p_0(
  MR_String FromPipeName_6,
  MR_Word Debug_7,
  MR_String * Resp_8)
{
  {
    MR_Word FromPipeRes_10;

    mercury__io__open_input_4_p_0(FromPipeName_6, &FromPipeRes_10);
    if (((MR_tag((MR_Word) FromPipeRes_10)) == (MR_Integer) 1))
    {
      MR_Word FromPipeError_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FromPipeRes_10, (MR_Integer) 0))));
      MR_String FromPipeErrorMsg_24;
      MR_String FromPipeMsg_25;
      MR_String Var_62;
      MR_String Var_63;

      mercury__io__error_message_2_p_0(FromPipeError_23, &FromPipeErrorMsg_24);
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ": ", FromPipeErrorMsg_24);
      Var_63 = mercury__string__f_43_43_2_f_0(FromPipeName_6, Var_62);
      FromPipeMsg_25 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", Var_63);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.recv_string\'/5", FromPipeMsg_25);
        return;
      }
    }
    else
    {
      MR_Word FromStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromPipeRes_10, (MR_Integer) 0))));
      MR_Word ReadRes_12;

      mercury__io__read_file_as_string_4_p_0(FromStream_11, &ReadRes_12);
      if (((MR_tag((MR_Word) ReadRes_12)) == (MR_Integer) 1))
      {
        MR_Word ReadError_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadRes_12, (MR_Integer) 1))));
        MR_String ReadErrorMsg_15;
        MR_String ReadMsg_16;

        mercury__io__error_message_2_p_0(ReadError_14, &ReadErrorMsg_15);
        ReadMsg_16 = mercury__string__f_43_43_2_f_0((MR_String) "read failed: ", ReadErrorMsg_15);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.recv_string\'/5", ReadMsg_16);
          return;
        }
      }
      else
        *Resp_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReadRes_12, (MR_Integer) 0))));
      mercury__io__close_input_3_p_0(FromStream_11);
      switch (Debug_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DebugRes_18;

            mercury__io__open_output_4_p_0((MR_String) "/tmp/.recv_string", &DebugRes_18);
            if (((MR_tag((MR_Word) DebugRes_18)) == (MR_Integer) 1))
            {
              MR_Word DebugError_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebugRes_18, (MR_Integer) 0))));
              MR_String DebugErrorMsg_21;
              MR_String DebugMsg_22;
              MR_String Var_58;
              MR_String Var_59;

              mercury__io__error_message_2_p_0(DebugError_20, &DebugErrorMsg_21);
              Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ": ", DebugErrorMsg_21);
              Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.recv_string", Var_58);
              DebugMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", Var_59);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.recv_string\'/5", DebugMsg_22);
                return;
              }
            }
            else
            {
              MR_Word DebugStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugRes_18, (MR_Integer) 0))));

              mercury__io__write_4_p_0((MR_Word) (&interface_scalar_common_1[0]), DebugStream_19, ((MR_Box) (ReadRes_12)));
              mercury__io__write_string_4_p_0(DebugStream_19, (MR_String) ".\n");
              mercury__io__close_output_3_p_0(DebugStream_19);
            }
          }
          break;
      }
    }
  }
}

void MR_CALL 
interface__recv_term_5_p_0(
  MR_Word TypeInfo_for_T_58,
  MR_String FromPipeName_6,
  MR_Word Debug_7,
  MR_Box * Resp_8)
{
  {
    MR_Word FromPipeRes_10;

    mercury__io__open_input_4_p_0(FromPipeName_6, &FromPipeRes_10);
    if (((MR_tag((MR_Word) FromPipeRes_10)) == (MR_Integer) 1))
    {
      MR_Word FromPipeError_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FromPipeRes_10, (MR_Integer) 0))));
      MR_String FromPipeErrorMsg_23;
      MR_String FromPipeMsg_24;
      MR_String Var_77;
      MR_String Var_78;

      mercury__io__error_message_2_p_0(FromPipeError_22, &FromPipeErrorMsg_23);
      Var_77 = mercury__string__f_43_43_2_f_0((MR_String) ": ", FromPipeErrorMsg_23);
      Var_78 = mercury__string__f_43_43_2_f_0(FromPipeName_6, Var_77);
      FromPipeMsg_24 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", Var_78);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.recv_term\'/5", FromPipeMsg_24);
        return;
      }
    }
    else
    {
      MR_Word FromStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromPipeRes_10, (MR_Integer) 0))));
      MR_Word ReadRes_12;

      mercury__io__read_4_p_0(TypeInfo_for_T_58, FromStream_11, &ReadRes_12);
      switch (MR_tag((MR_Word) ReadRes_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.recv_term\'/5", (MR_String) "read failed: premature eof");
            return;
          }
          break;
        case (MR_Integer) 1:
          *Resp_8 = (MR_hl_field(MR_mktag(1), ReadRes_12, (MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_String ReadErrorMsg_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), ReadRes_12, (MR_Integer) 0))));
            MR_Integer ReadErrorLineNumber_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), ReadRes_12, (MR_Integer) 1))));
            MR_String ReadMsg_15;
            MR_String Var_62;
            MR_String Var_63;
            MR_String Var_70;

            Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ": ", ReadErrorMsg_13);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&interface_scalar_common_2[0]), ReadErrorLineNumber_14, &Var_63);
            Var_70 = mercury__string__f_43_43_2_f_0(Var_63, Var_62);
            ReadMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "read failed at line ", Var_70);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.recv_term\'/5", ReadMsg_15);
              return;
            }
          }
          break;
      }
      mercury__io__close_input_3_p_0(FromStream_11);
      switch (Debug_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DebugRes_17;

            mercury__io__open_output_4_p_0((MR_String) "/tmp/.recv_term", &DebugRes_17);
            if (((MR_tag((MR_Word) DebugRes_17)) == (MR_Integer) 1))
            {
              MR_Word DebugError_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebugRes_17, (MR_Integer) 0))));
              MR_String DebugErrorMsg_20;
              MR_String DebugMsg_21;
              MR_String Var_73;
              MR_String Var_74;

              mercury__io__error_message_2_p_0(DebugError_19, &DebugErrorMsg_20);
              Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ": ", DebugErrorMsg_20);
              Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.recv_term", Var_73);
              DebugMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", Var_74);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.recv_term\'/5", DebugMsg_21);
                return;
              }
            }
            else
            {
              MR_Word TypeInfo_60_60;
              MR_Word DebugStream_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugRes_17, (MR_Integer) 0))));

              {
                TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_60_60, 0) = ((MR_Box) (&mercury__io__io__type_ctor_info_read_result_1));
                MR_hl_field(MR_mktag(0), TypeInfo_60_60, 1) = ((MR_Box) (TypeInfo_for_T_58));
              }
              mercury__io__write_4_p_0(TypeInfo_60_60, DebugStream_18, ((MR_Box) (ReadRes_12)));
              mercury__io__write_string_4_p_0(DebugStream_18, (MR_String) ".\n");
              mercury__io__close_output_3_p_0(DebugStream_18);
            }
          }
          break;
      }
    }
  }
}

void MR_CALL 
interface__send_string_5_p_0(
  MR_String ToPipeName_6,
  MR_Word Debug_7,
  MR_String Data_8)
{
  {
    MR_Word ToPipeRes_10;

    mercury__io__open_output_4_p_0(ToPipeName_6, &ToPipeRes_10);
    if (((MR_tag((MR_Word) ToPipeRes_10)) == (MR_Integer) 1))
    {
      MR_Word ToPipeError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToPipeRes_10, (MR_Integer) 0))));
      MR_String ToPipeErrorMsg_13;
      MR_String ToPipeMsg_14;
      MR_String Var_44;
      MR_String Var_45;

      mercury__io__error_message_2_p_0(ToPipeError_12, &ToPipeErrorMsg_13);
      Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ": ", ToPipeErrorMsg_13);
      Var_45 = mercury__string__f_43_43_2_f_0(ToPipeName_6, Var_44);
      ToPipeMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", Var_45);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.send_string\'/5", ToPipeMsg_14);
        return;
      }
    }
    else
    {
      MR_Word ToStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToPipeRes_10, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(ToStream_11, Data_8);
      mercury__io__close_output_3_p_0(ToStream_11);
    }
    switch (Debug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DebugRes_16;

          mercury__io__open_output_4_p_0((MR_String) "/tmp/.send_string", &DebugRes_16);
          if (((MR_tag((MR_Word) DebugRes_16)) == (MR_Integer) 1))
          {
            MR_Word DebugError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebugRes_16, (MR_Integer) 0))));
            MR_String DebugErrorMsg_19;
            MR_String DebugMsg_20;
            MR_String Var_48;
            MR_String Var_49;

            mercury__io__error_message_2_p_0(DebugError_18, &DebugErrorMsg_19);
            Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ": ", DebugErrorMsg_19);
            Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.send_string", Var_48);
            DebugMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", Var_49);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.send_string\'/5", DebugMsg_20);
              return;
            }
          }
          else
          {
            MR_Word DebugStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugRes_16, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(DebugStream_17, Data_8);
            mercury__io__close_output_3_p_0(DebugStream_17);
          }
        }
        break;
    }
  }
}

void MR_CALL 
interface__send_term_5_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_String ToPipeName_6,
  MR_Word Debug_7,
  MR_Box Data_8)
{
  {
    MR_Word ToPipeRes_10;

    mercury__io__open_output_4_p_0(ToPipeName_6, &ToPipeRes_10);
    if (((MR_tag((MR_Word) ToPipeRes_10)) == (MR_Integer) 1))
    {
      MR_Word ToPipeError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToPipeRes_10, (MR_Integer) 0))));
      MR_String ToPipeErrorMsg_13;
      MR_String ToPipeMsg_14;
      MR_String Var_49;
      MR_String Var_50;

      mercury__io__error_message_2_p_0(ToPipeError_12, &ToPipeErrorMsg_13);
      Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ": ", ToPipeErrorMsg_13);
      Var_50 = mercury__string__f_43_43_2_f_0(ToPipeName_6, Var_49);
      ToPipeMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open pipe ", Var_50);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.send_term\'/5", ToPipeMsg_14);
        return;
      }
    }
    else
    {
      MR_Word ToStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToPipeRes_10, (MR_Integer) 0))));

      mercury__io__write_4_p_0(TypeInfo_for_T_47, ToStream_11, Data_8);
      mercury__io__write_string_4_p_0(ToStream_11, (MR_String) ".\n");
      mercury__io__close_output_3_p_0(ToStream_11);
    }
    switch (Debug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DebugRes_16;

          mercury__io__open_output_4_p_0((MR_String) "/tmp/.send_term", &DebugRes_16);
          if (((MR_tag((MR_Word) DebugRes_16)) == (MR_Integer) 1))
          {
            MR_Word DebugError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebugRes_16, (MR_Integer) 0))));
            MR_String DebugErrorMsg_19;
            MR_String DebugMsg_20;
            MR_String Var_53;
            MR_String Var_54;

            mercury__io__error_message_2_p_0(DebugError_18, &DebugErrorMsg_19);
            Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ": ", DebugErrorMsg_19);
            Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "/tmp/.send_term", Var_53);
            DebugMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t open debug file ", Var_54);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140interface.send_term\'/5", DebugMsg_20);
              return;
            }
          }
          else
          {
            MR_Word DebugStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugRes_16, (MR_Integer) 0))));

            mercury__io__write_4_p_0(TypeInfo_for_T_47, DebugStream_17, Data_8);
            mercury__io__write_string_4_p_0(DebugStream_17, (MR_String) ".\n");
            mercury__io__close_output_3_p_0(DebugStream_17);
          }
        }
        break;
    }
  }
}

MR_String MR_CALL 
interface__response_file_name_2_f_0(
  MR_String DataFileName_4,
  MR_Integer QueryNum_5)
{
  {
    MR_String HeadVar__3_3;
    MR_String Var_7;
    MR_String Var_9;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_13;
    MR_Word FileNameChars_16;
    MR_Word MangledFileNameChars_17;

    FileNameChars_16 = mercury__string__to_char_list_1_f_0(DataFileName_4);
    MangledFileNameChars_17 = interface__filename_mangle_2_1_f_0(FileNameChars_16);
    Var_12 = mercury__string__from_char_list_1_f_0(MangledFileNameChars_17);
    Var_13 = mercury__string__int_to_string_1_f_0(QueryNum_5);
    Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_response", Var_11);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_9);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", Var_7);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
interface__want_file_name_0_f_0(void)
{
  {
    MR_String HeadVar__1_1;
    MR_String Var_3;
    MR_String Var_5;
    MR_String Var_7;
    MR_Integer Var_8;

    Var_8 = conf__getpid_0_f_0();
    Var_7 = mercury__string__int_to_string_1_f_0(Var_8);
    Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_want", Var_7);
    Var_3 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_5);
    HeadVar__1_1 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", Var_3);
    return HeadVar__1_1;
  }
}

MR_String MR_CALL 
interface__want_prefix_0_f_0(void)
{
  return (MR_String) "mdprof_want";
}

MR_String MR_CALL 
interface__want_dir_0_f_0(void)
{
  return (MR_String) "/var/tmp";
}

MR_String MR_CALL 
interface__mutex_file_name_1_f_0(
  MR_String DataFileName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_5;
    MR_String Var_7;
    MR_String Var_9;
    MR_Word FileNameChars_12;
    MR_Word MangledFileNameChars_13;

    FileNameChars_12 = mercury__string__to_char_list_1_f_0(DataFileName_3);
    MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(FileNameChars_12);
    Var_9 = mercury__string__from_char_list_1_f_0(MangledFileNameChars_13);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_mutex", Var_9);
    Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_7);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", Var_5);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
interface__server_startup_name_1_f_0(
  MR_String DataFileName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_5;
    MR_String Var_7;
    MR_String Var_9;
    MR_Word FileNameChars_12;
    MR_Word MangledFileNameChars_13;

    FileNameChars_12 = mercury__string__to_char_list_1_f_0(DataFileName_3);
    MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(FileNameChars_12);
    Var_9 = mercury__string__from_char_list_1_f_0(MangledFileNameChars_13);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_startup_err", Var_9);
    Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_7);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", Var_5);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
interface__from_server_pipe_name_1_f_0(
  MR_String DataFileName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_5;
    MR_String Var_7;
    MR_String Var_9;
    MR_Word FileNameChars_12;
    MR_Word MangledFileNameChars_13;

    FileNameChars_12 = mercury__string__to_char_list_1_f_0(DataFileName_3);
    MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(FileNameChars_12);
    Var_9 = mercury__string__from_char_list_1_f_0(MangledFileNameChars_13);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_server_from", Var_9);
    Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_7);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", Var_5);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
interface__to_server_pipe_name_1_f_0(
  MR_String DataFileName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_5;
    MR_String Var_7;
    MR_String Var_9;
    MR_Word FileNameChars_12;
    MR_Word MangledFileNameChars_13;

    FileNameChars_12 = mercury__string__to_char_list_1_f_0(DataFileName_3);
    MangledFileNameChars_13 = interface__filename_mangle_2_1_f_0(FileNameChars_12);
    Var_9 = mercury__string__from_char_list_1_f_0(MangledFileNameChars_13);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "mdprof_server_to", Var_9);
    Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_7);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "/var/tmp", Var_5);
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
interface__filename_mangle_2_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Char First_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rest_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MangledRest_6;

      MangledRest_6 = interface__filename_mangle_2_1_f_0(Rest_4);
      succeeded = (First_3 == (MR_Char) 47);
      if (succeeded)
      {
        MR_Word Var_8;

        {
          Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Char) 46));
          MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (MangledRest_6));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_8));
        }
      }
      else
      {
        succeeded = (First_3 == (MR_Char) 58);
        if (succeeded)
        {
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MangledRest_6));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_11));
          }
        }
        else
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (First_3));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (MangledRest_6));
          }
      }
    }
    return HeadVar__2_2;
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

// :- end_module interface.
