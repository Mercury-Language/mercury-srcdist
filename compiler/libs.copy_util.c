/*
** Automatically generated from `copy_util.m'
** by the Mercury compiler,
** version rotd-2024-01-05
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


// :- module libs.copy_util.
// :- implementation.

/*
INIT mercury__libs__copy_util__init
ENDINIT
*/

#include "libs.copy_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.system_cmds.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0;

static const MR_PseudoTypeInfo libs__copy_util__libs__copy_util__field_types_copy_chunk_inner_res0_0_1[1];

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1;

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2;

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_0[2];

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_1[1];

static const MR_DuPtagLayout libs__copy_util__libs__copy_util__du_ptag_ordered_copy_chunk_inner_res0_0[2];

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_name_ordered_copy_chunk_inner_res0_0[3];

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_copy_chunk_inner_res0_0[3];

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__copy_util__should_reduce_stack_usage_1_p_0(
  MR_Word * ShouldReduce_1);

static void MR_CALL 
libs__copy_util__copy_bytes_chunk_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8);

static void MR_CALL 
libs__copy_util__copy_bytes_inner_6_p_0(
  MR_Integer Left_7,
  MR_Word Source_8,
  MR_Word Destination_9,
  MR_Word * Res_10);

static void MR_CALL 
libs__copy_util__copy_bytes_plain_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8);

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.copy_util.mh"


static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0 = {
  (MR_String) "ccir0_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__copy_util__libs__copy_util__field_types_copy_chunk_inner_res0_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1 = {
  (MR_String) "ccir0_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__copy_util__libs__copy_util__field_types_copy_chunk_inner_res0_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2 = {
  (MR_String) "ccir0_more",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_0[2] = {
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0,
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_1[1] = { &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1 };

static const MR_DuPtagLayout libs__copy_util__libs__copy_util__du_ptag_ordered_copy_chunk_inner_res0_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_name_ordered_copy_chunk_inner_res0_0[3] = {
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1,
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2,
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0
};

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_copy_chunk_inner_res0_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__copy_util__libs__copy_util__type_ctor_info_copy_chunk_inner_res0_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__copy_util____Unify____copy_chunk_inner_res0_0_0_10001)),
  ((MR_Box) (libs__copy_util____Compare____copy_chunk_inner_res0_0_0_10001)),
  (MR_String) "libs.copy_util",
  (MR_String) "copy_chunk_inner_res0",
  { libs__copy_util__libs__copy_util__du_name_ordered_copy_chunk_inner_res0_0 },
  { libs__copy_util__libs__copy_util__du_ptag_ordered_copy_chunk_inner_res0_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__copy_util__libs__copy_util__functor_number_map_copy_chunk_inner_res0_0,

};

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_13, ArgY1_7);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
libs__copy_util__should_reduce_stack_usage_1_p_0(
  MR_Word * ShouldReduce_1)
{
{
#define MR_PROC_LABEL libs__copy_util__should_reduce_stack_usage_1_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	*ShouldReduce_1  = ShouldReduce;
}
}

void MR_CALL 
libs__copy_util__copy_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_String Source_10,
  MR_String Destination_11,
  MR_Word * Res_12)
{
  MR_String Command_14;
  MR_Word Succeeded_15;

  Command_14 = libs__file_util__make_install_file_command_3_f_0(Globals_8, Source_10, Destination_11);
  libs__system_cmds__invoke_system_command_8_p_0(Globals_8, ProgressStream_9, ProgressStream_9, (MR_Integer) 0, Command_14, &Succeeded_15);
  switch (Succeeded_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SourceRes_21;

        mercury__io__open_binary_input_4_p_0(Source_10, &SourceRes_21);
        if (((MR_tag((MR_Word) SourceRes_21)) == (MR_Integer) 1))
        {
          MR_Word Error_30 = ((MR_Word) ((MR_hl_field(1, SourceRes_21, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_30));
          }
        }
        else
        {
          MR_Word SourceStream_22 = ((MR_Word) ((MR_hl_field(0, SourceRes_21, (MR_Integer) 0))));
          MR_Word DestRes_23;

          mercury__io__open_binary_output_4_p_0(Destination_11, &DestRes_23);
          if (((MR_tag((MR_Word) DestRes_23)) == (MR_Integer) 1))
          {
            MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, DestRes_23, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_25));
            }
          }
          else
          {
            MR_Word DestStream_24 = ((MR_Word) ((MR_hl_field(0, DestRes_23, (MR_Integer) 0))));
            MR_Word ShouldReduce_31;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_7_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_31  = ShouldReduce;
}
            switch (ShouldReduce_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                libs__copy_util__copy_bytes_plain_5_p_0(SourceStream_22, DestStream_24, Res_12);
                break;
              case (MR_Integer) 1:
                libs__copy_util__copy_bytes_chunk_5_p_0(SourceStream_22, DestStream_24, Res_12);
                break;
            }
            mercury__io__close_binary_input_3_p_0(SourceStream_22);
            mercury__io__close_binary_output_3_p_0(DestStream_24);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
libs__copy_util__copy_bytes_chunk_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    libs__copy_util__copy_bytes_inner_6_p_0((MR_Integer) 1000, Source_6, Destination_7, &InnerRes_11);
    switch (MR_tag((MR_Word) InnerRes_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InnerRes_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              // direct tailcall eliminated
              ;
              continue;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, InnerRes_11, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
libs__copy_util__copy_bytes_inner_6_p_0(
  MR_Integer Left_7,
  MR_Word Source_8,
  MR_Word Destination_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_7 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_12;
      uint8_t Byte_13;

      mercury__io__read_binary_uint8_unboxed_5_p_0(Source_8, &ByteResult_12, &Byte_13);
      switch (MR_tag((MR_Word) ByteResult_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ByteResult_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_20;
                MR_Integer next_value_of_Left_7;

                mercury__io__write_binary_uint8_4_p_0(Destination_9, Byte_13);
                Var_20 = (MR_Integer) ((MR_Unsigned) Left_7 - (MR_Unsigned) 1);
                // direct tailcall eliminated
                ;
                next_value_of_Left_7 = Var_20;
                Left_7 = next_value_of_Left_7;
                continue;
              }
              break;
            case (MR_Integer) 1:
              *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
            }
          }
          break;
      }
    }
    else
      *Res_10 = (MR_Word) ((MR_Unsigned) 4U);
    break;
  }
}

static void MR_CALL 
libs__copy_util__copy_bytes_plain_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_10;
    uint8_t Byte_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_binary_uint8_unboxed_5_p_0(Source_6, &ByteResult_10, &Byte_11);
    switch (MR_tag((MR_Word) ByteResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ByteResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_binary_uint8_4_p_0(Destination_7, Byte_11);
              // direct tailcall eliminated
              ;
              continue;
            }
            break;
          case (MR_Integer) 1:
            *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, ByteResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__copy_util____Unify____copy_chunk_inner_res0_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__copy_util____Compare____copy_chunk_inner_res0_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__copy_util__init(void)
{
}

void mercury__libs__copy_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__copy_util__libs__copy_util__type_ctor_info_copy_chunk_inner_res0_0);
}

void mercury__libs__copy_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__copy_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.copy_util.
