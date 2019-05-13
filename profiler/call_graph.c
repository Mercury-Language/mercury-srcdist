/*
** Automatically generated from `call_graph.m'
** by the Mercury compiler,
** version rotd-2019-05-13
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


#include "globals.mih"
#include "options.mih"
#include "read.mih"
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
#include "rtti_implementation.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
call_graph__process_prof_file_6_p_0(
  MR_Word VeryVerbose_7,
  MR_String File_8,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_15,
  MR_Word * STATE_VARIABLE_StaticCallGraph_16);

static void MR_CALL 
call_graph__process_prof_file_2_4_p_0(
  MR_Word STATE_VARIABLE_StaticCallGraph_0_12,
  MR_Word * STATE_VARIABLE_StaticCallGraph_13);

static void MR_CALL 
call_graph__build_call_graph_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box call_graph_scalar_common_1[2][2];

static /* final */ const MR_Box call_graph_scalar_common_2[1][9];




static /* final */ const MR_Box call_graph_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box call_graph_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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
call_graph__process_prof_file_6_p_0(
  MR_Word VeryVerbose_7,
  MR_String File_8,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_15,
  MR_Word * STATE_VARIABLE_StaticCallGraph_16)
{
  {
    MR_Word Result_11;

    options__maybe_write_string_4_p_0(VeryVerbose_7, (MR_String) "\n\tProcessing ");
    options__maybe_write_string_4_p_0(VeryVerbose_7, File_8);
    options__maybe_write_string_4_p_0(VeryVerbose_7, (MR_String) "...");
    mercury__io__see_4_p_0(File_8, &Result_11);
    if ((Result_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      call_graph__process_prof_file_2_4_p_0(STATE_VARIABLE_StaticCallGraph_0_15, STATE_VARIABLE_StaticCallGraph_16);
      mercury__io__seen_2_p_0();
    }
    else
    {
      MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_11, (MR_Integer) 0))));
      MR_String ErrorMsg_13;
      MR_Word StdErr_14;
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_32;

      mercury__io__error_message_2_p_0(Error_12, &ErrorMsg_13);
      mercury__io__stderr_stream_3_p_0(&StdErr_14);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ErrorMsg_13));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &call_graph_scalar_common_1[1])));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "\': "));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (File_8));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "mprof: error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
      }
      mercury__io__write_strings_4_p_0(StdErr_14, Var_26);
      *STATE_VARIABLE_StaticCallGraph_16 = STATE_VARIABLE_StaticCallGraph_0_15;
    }
    options__maybe_write_string_4_p_0(VeryVerbose_7, (MR_String) " done");
  }
}

static void MR_CALL 
call_graph__process_prof_file_2_4_p_0(
  MR_Word STATE_VARIABLE_StaticCallGraph_0_12,
  MR_Word * STATE_VARIABLE_StaticCallGraph_13)
{
  while (MR_TRUE)
  {
    MR_Word MaybeLabelName_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_name_3_p_0(&MaybeLabelName_7);
    if ((MaybeLabelName_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StaticCallGraph_13 = STATE_VARIABLE_StaticCallGraph_0_12;
    else
    {
      MR_String CallerLabel_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeLabelName_7, (MR_Integer) 0))));
      MR_String CalleeLabel_9;
      MR_Word CallerKey_10;
      MR_Word CalleeKey_11;
      MR_Word STATE_VARIABLE_StaticCallGraph_18_18;
      MR_Word next_value_of_STATE_VARIABLE_StaticCallGraph_0_12;

      read__read_label_name_3_p_0(&CalleeLabel_9);
      mercury__digraph__lookup_key_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_StaticCallGraph_0_12, ((MR_Box) (CallerLabel_8)), &CallerKey_10);
      mercury__digraph__lookup_key_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_StaticCallGraph_0_12, ((MR_Box) (CalleeLabel_9)), &CalleeKey_11);
      mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallerKey_10, CalleeKey_11, STATE_VARIABLE_StaticCallGraph_0_12, &STATE_VARIABLE_StaticCallGraph_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_StaticCallGraph_0_12 = STATE_VARIABLE_StaticCallGraph_18_18;
      STATE_VARIABLE_StaticCallGraph_0_12 = next_value_of_STATE_VARIABLE_StaticCallGraph_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
call_graph__build_call_graph_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_StaticCallGraph_16;

    call_graph__process_prof_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StaticCallGraph_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCallGraph_16));
  }
}

void MR_CALL 
call_graph__build_call_graph_5_p_0(
  MR_Word Args_6,
  MR_Word STATE_VARIABLE_StaticCallGraph_0_11,
  MR_Word * STATE_VARIABLE_StaticCallGraph_12)
{
  {
    MR_Word Dynamic_9;
    MR_Word VeryVerbose_10;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &Dynamic_9);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &VeryVerbose_10);
    switch (Dynamic_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_29;
          MR_Box conv2_STATE_VARIABLE_StaticCallGraph_12;
          MR_Box conv1_STATE_VARIABLE_IO_14;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&call_graph_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (call_graph__build_call_graph_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (VeryVerbose_10));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&call_graph_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Args_6, ((MR_Box) (STATE_VARIABLE_StaticCallGraph_0_11)), &conv2_STATE_VARIABLE_StaticCallGraph_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
          *STATE_VARIABLE_StaticCallGraph_12 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCallGraph_12));
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_StaticCallGraph_12 = STATE_VARIABLE_StaticCallGraph_0_11;
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
