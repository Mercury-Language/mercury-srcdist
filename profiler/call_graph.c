/*
** Automatically generated from `call_graph.m'
** by the Mercury compiler,
** version rotd-2021-04-29
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


// :- module call_graph.
// :- implementation.

/*
INIT mercury__call_graph__init
ENDINIT
*/

#include "call_graph.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "read.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
call_graph__process_prof_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word VeryVerbose_9,
  MR_String File_10,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_18,
  MR_Word * STATE_VARIABLE_StaticCallGraph_19);

static void MR_CALL 
call_graph__process_prof_file_2_5_p_0(
  MR_Word InputStream_6,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_14,
  MR_Word * STATE_VARIABLE_StaticCallGraph_15);

static void MR_CALL 
call_graph__build_call_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box call_graph_scalar_common_1[1][2];

static /* final */ const MR_Box call_graph_scalar_common_2[1][10];




static /* final */ const MR_Box call_graph_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box call_graph_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static void MR_CALL 
call_graph__process_prof_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word VeryVerbose_9,
  MR_String File_10,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_18,
  MR_Word * STATE_VARIABLE_StaticCallGraph_19)
{
  {
    MR_Word Result_13;

    options__maybe_write_string_5_p_0(ProgressStream_8, VeryVerbose_9, (MR_String) "\n\tProcessing ");
    options__maybe_write_string_5_p_0(ProgressStream_8, VeryVerbose_9, File_10);
    options__maybe_write_string_5_p_0(ProgressStream_8, VeryVerbose_9, (MR_String) "...");
    mercury__io__open_input_4_p_0(File_10, &Result_13);
    if (((MR_tag((MR_Word) Result_13)) == (MR_Integer) 1))
    {
      MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_13, (MR_Integer) 0))));
      MR_String ErrorMsg_16;
      MR_Word StdErr_17;

      mercury__io__error_message_2_p_0(Error_15, &ErrorMsg_16);
      mercury__io__stderr_stream_3_p_0(&StdErr_17);
      mercury__io__write_string_4_p_0(StdErr_17, (MR_String) "mprof: error opening file \140");
      mercury__io__write_string_4_p_0(StdErr_17, File_10);
      mercury__io__write_string_4_p_0(StdErr_17, (MR_String) "\': ");
      mercury__io__write_string_4_p_0(StdErr_17, ErrorMsg_16);
      mercury__io__write_string_4_p_0(StdErr_17, (MR_String) "\n");
      *STATE_VARIABLE_StaticCallGraph_19 = STATE_VARIABLE_StaticCallGraph_0_18;
    }
    else
    {
      MR_Word FileStream_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_13, (MR_Integer) 0))));

      call_graph__process_prof_file_2_5_p_0(FileStream_14, STATE_VARIABLE_StaticCallGraph_0_18, STATE_VARIABLE_StaticCallGraph_19);
      mercury__io__close_input_3_p_0(FileStream_14);
    }
    options__maybe_write_string_5_p_0(ProgressStream_8, VeryVerbose_9, (MR_String) " done");
  }
}

static void MR_CALL 
call_graph__process_prof_file_2_5_p_0(
  MR_Word InputStream_6,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_14,
  MR_Word * STATE_VARIABLE_StaticCallGraph_15)
{
  while (MR_TRUE)
  {
    MR_Word MaybeLabelName_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_name_4_p_0(InputStream_6, &MaybeLabelName_9);
    if ((MaybeLabelName_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StaticCallGraph_15 = STATE_VARIABLE_StaticCallGraph_0_14;
    else
    {
      MR_String CallerLabel_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeLabelName_9, (MR_Integer) 0))));
      MR_String CalleeLabel_11;
      MR_Word CallerKey_12;
      MR_Word CalleeKey_13;
      MR_Word STATE_VARIABLE_StaticCallGraph_20_20;
      MR_Word next_value_of_STATE_VARIABLE_StaticCallGraph_0_14;

      read__read_label_name_4_p_0(InputStream_6, &CalleeLabel_11);
      mercury__digraph__lookup_key_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_StaticCallGraph_0_14, ((MR_Box) (CallerLabel_10)), &CallerKey_12);
      mercury__digraph__lookup_key_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_StaticCallGraph_0_14, ((MR_Box) (CalleeLabel_11)), &CalleeKey_13);
      mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallerKey_12, CalleeKey_13, STATE_VARIABLE_StaticCallGraph_0_14, &STATE_VARIABLE_StaticCallGraph_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StaticCallGraph_0_14 = STATE_VARIABLE_StaticCallGraph_20_20;
      STATE_VARIABLE_StaticCallGraph_0_14 = next_value_of_STATE_VARIABLE_StaticCallGraph_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
call_graph__build_call_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_StaticCallGraph_19;

    call_graph__process_prof_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StaticCallGraph_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCallGraph_19));
  }
}

void MR_CALL 
call_graph__build_call_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Args_8,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_13,
  MR_Word * STATE_VARIABLE_StaticCallGraph_14)
{
  {
    MR_Word Dynamic_11;
    MR_Word VeryVerbose_12;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &Dynamic_11);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &VeryVerbose_12);
    switch (Dynamic_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_32;
          MR_Box conv2_STATE_VARIABLE_StaticCallGraph_14;
          MR_Box conv1_STATE_VARIABLE_IO_16;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&call_graph_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (call_graph__build_call_graph_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ProgressStream_7));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (VeryVerbose_12));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&call_graph_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, Args_8, ((MR_Box) (STATE_VARIABLE_StaticCallGraph_0_13)), &conv2_STATE_VARIABLE_StaticCallGraph_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
          *STATE_VARIABLE_StaticCallGraph_14 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCallGraph_14));
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_StaticCallGraph_14 = STATE_VARIABLE_StaticCallGraph_0_13;
        break;
    }
  }
}

void mercury__call_graph__init(void)
{
}

void mercury__call_graph__init_type_tables(void)
{
}

void mercury__call_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__call_graph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module call_graph.
