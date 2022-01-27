/*
** Automatically generated from `call_graph.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module call_graph. */
/* :- implementation. */

/*
INIT mercury__call_graph__init
ENDINIT
*/

#include "call_graph.mih"


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
#include "integer.mih"
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




#line 69 "call_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0;

#line 96 "call_graph.m"
static void MR_CALL 
call_graph__process_prof_file_2_4_p_0(
#line 96 "call_graph.m"
  MR_Word call_graph__STATE_VARIABLE_StaticCallGraph_0_12,
#line 96 "call_graph.m"
  MR_Word * call_graph__STATE_VARIABLE_StaticCallGraph_13);

#line 75 "call_graph.m"
static void MR_CALL 
call_graph__process_prof_file_6_p_0(
#line 75 "call_graph.m"
  MR_Word call_graph__VeryVerbose_7,
#line 75 "call_graph.m"
  MR_String call_graph__File_8,
#line 75 "call_graph.m"
  MR_Word call_graph__STATE_VARIABLE_StaticCallGraph_0_15,
#line 75 "call_graph.m"
  MR_Word * call_graph__STATE_VARIABLE_StaticCallGraph_16);

#line 68 "call_graph.m"
static void MR_CALL 
call_graph__build_call_graph_5_p_0_1(
#line 68 "call_graph.m"
  MR_Box call_graph__closure_arg,
#line 68 "call_graph.m"
  MR_Box call_graph__wrapper_arg_1,
#line 68 "call_graph.m"
  MR_Box call_graph__wrapper_arg_2,
#line 68 "call_graph.m"
  MR_Box * call_graph__wrapper_arg_3,
#line 68 "call_graph.m"
  MR_Box call_graph__wrapper_arg_4,
#line 68 "call_graph.m"
  MR_Box * call_graph__wrapper_arg_5);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box call_graph_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



#line 157 "call_graph.c"
static const MR_FA_PseudoTypeInfo_Struct1 call_graph__digraph__pti_digraph_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 96 "call_graph.m"
static void MR_CALL 
call_graph__process_prof_file_2_4_p_0(
#line 96 "call_graph.m"
  MR_Word call_graph__STATE_VARIABLE_StaticCallGraph_0_12,
#line 96 "call_graph.m"
  MR_Word * call_graph__STATE_VARIABLE_StaticCallGraph_13)
#line 96 "call_graph.m"
{
#line 99 "call_graph.m"
  while (MR_TRUE)
#line 99 "call_graph.m"
    {
#line 99 "call_graph.m"
      /* tailcall optimized into a loop */
#line 99 "call_graph.m"
      {
#line 99 "call_graph.m"
        MR_bool call_graph__succeeded;
#line 99 "call_graph.m"
        MR_Word call_graph__MaybeLabelName_7;
#line 107 "call_graph.m"
        MR_String call_graph__CallerLabel_8;

#line 100 "call_graph.m"
        {
#line 100 "call_graph.m"
          read__maybe_read_label_name_3_p_0(&call_graph__MaybeLabelName_7);
        }
#line 101 "call_graph.m"
        call_graph__succeeded = ((MR_tag((MR_Word) call_graph__MaybeLabelName_7)) == (MR_mktag((MR_Integer) 1)));
#line 101 "call_graph.m"
        if (call_graph__succeeded)
#line 101 "call_graph.m"
          {
#line 101 "call_graph.m"
            call_graph__CallerLabel_8 = ((MR_String) (MR_hl_field(MR_mktag(1), call_graph__MaybeLabelName_7, (MR_Integer) 0)));
#line 102 "call_graph.m"
            {
#line 102 "call_graph.m"
              MR_Word call_graph__TypeCtorInfo_21_21;
#line 102 "call_graph.m"
              MR_String call_graph__CalleeLabel_9;
#line 102 "call_graph.m"
              MR_Word call_graph__CallerKey_10;
#line 102 "call_graph.m"
              MR_Word call_graph__CalleeKey_11;
#line 102 "call_graph.m"
              MR_Word call_graph__STATE_VARIABLE_StaticCallGraph_18_18;

#line 102 "call_graph.m"
              {
#line 102 "call_graph.m"
                read__read_label_name_3_p_0(&call_graph__CalleeLabel_9);
              }
#line 220 "call_graph.c"
              call_graph__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 103 "call_graph.m"
              {
#line 103 "call_graph.m"
                mercury__digraph__lookup_key_3_p_0(call_graph__TypeCtorInfo_21_21, call_graph__STATE_VARIABLE_StaticCallGraph_0_12, ((MR_Box) (call_graph__CallerLabel_8)), &call_graph__CallerKey_10);
              }
#line 104 "call_graph.m"
              {
#line 104 "call_graph.m"
                mercury__digraph__lookup_key_3_p_0(call_graph__TypeCtorInfo_21_21, call_graph__STATE_VARIABLE_StaticCallGraph_0_12, ((MR_Box) (call_graph__CalleeLabel_9)), &call_graph__CalleeKey_11);
              }
#line 105 "call_graph.m"
              {
#line 105 "call_graph.m"
                mercury__digraph__add_edge_4_p_0(call_graph__TypeCtorInfo_21_21, call_graph__CallerKey_10, call_graph__CalleeKey_11, call_graph__STATE_VARIABLE_StaticCallGraph_0_12, &call_graph__STATE_VARIABLE_StaticCallGraph_18_18);
              }
#line 106 "call_graph.m"
              /* direct tailcall eliminated */
#line 106 "call_graph.m"
              {
#line 106 "call_graph.m"
                MR_Word call_graph__STATE_VARIABLE_StaticCallGraph_0__tmp_copy_12 = call_graph__STATE_VARIABLE_StaticCallGraph_18_18;

#line 106 "call_graph.m"
                call_graph__STATE_VARIABLE_StaticCallGraph_0_12 = call_graph__STATE_VARIABLE_StaticCallGraph_0__tmp_copy_12;
#line 106 "call_graph.m"
              }
#line 106 "call_graph.m"
              continue;
#line 102 "call_graph.m"
            }
#line 101 "call_graph.m"
          }
#line 101 "call_graph.m"
        else
#line 108 "call_graph.m"
          *call_graph__STATE_VARIABLE_StaticCallGraph_13 = call_graph__STATE_VARIABLE_StaticCallGraph_0_12;
#line 99 "call_graph.m"
      }
#line 99 "call_graph.m"
      break;
#line 99 "call_graph.m"
    }
#line 96 "call_graph.m"
}

#line 75 "call_graph.m"
static void MR_CALL 
call_graph__process_prof_file_6_p_0(
#line 75 "call_graph.m"
  MR_Word call_graph__VeryVerbose_7,
#line 75 "call_graph.m"
  MR_String call_graph__File_8,
#line 75 "call_graph.m"
  MR_Word call_graph__STATE_VARIABLE_StaticCallGraph_0_15,
#line 75 "call_graph.m"
  MR_Word * call_graph__STATE_VARIABLE_StaticCallGraph_16)
#line 75 "call_graph.m"
{
#line 78 "call_graph.m"
  {
#line 78 "call_graph.m"
    MR_bool call_graph__succeeded;
#line 78 "call_graph.m"
    MR_Word call_graph__Result_11;

#line 79 "call_graph.m"
    {
#line 79 "call_graph.m"
      options__maybe_write_string_4_p_0(call_graph__VeryVerbose_7, (MR_String) "\n\tProcessing ");
    }
#line 80 "call_graph.m"
    {
#line 80 "call_graph.m"
      options__maybe_write_string_4_p_0(call_graph__VeryVerbose_7, call_graph__File_8);
    }
#line 81 "call_graph.m"
    {
#line 81 "call_graph.m"
      options__maybe_write_string_4_p_0(call_graph__VeryVerbose_7, (MR_String) "...");
    }
#line 82 "call_graph.m"
    {
#line 82 "call_graph.m"
      mercury__io__see_4_p_0(call_graph__File_8, &call_graph__Result_11);
    }
#line 87 "call_graph.m"
    if ((call_graph__Result_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "call_graph.m"
      {
#line 85 "call_graph.m"
        {
#line 85 "call_graph.m"
          call_graph__process_prof_file_2_4_p_0(call_graph__STATE_VARIABLE_StaticCallGraph_0_15, call_graph__STATE_VARIABLE_StaticCallGraph_16);
        }
#line 86 "call_graph.m"
        {
#line 86 "call_graph.m"
          mercury__io__seen_2_p_0();
        }
#line 84 "call_graph.m"
      }
#line 87 "call_graph.m"
    else
#line 88 "call_graph.m"
      {
#line 88 "call_graph.m"
        MR_Word call_graph__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), call_graph__Result_11, (MR_Integer) 0)));
#line 88 "call_graph.m"
        MR_String call_graph__ErrorMsg_13;
#line 88 "call_graph.m"
        MR_Word call_graph__StdErr_14;
#line 88 "call_graph.m"
        MR_Word call_graph__V_26_26;
#line 88 "call_graph.m"
        MR_Word call_graph__V_29_29;
#line 88 "call_graph.m"
        MR_Word call_graph__V_30_30;
#line 88 "call_graph.m"
        MR_Word call_graph__V_32_32;

#line 89 "call_graph.m"
        {
#line 89 "call_graph.m"
          mercury__io__error_message_2_p_0(call_graph__Error_12, &call_graph__ErrorMsg_13);
        }
#line 90 "call_graph.m"
        {
#line 90 "call_graph.m"
          mercury__io__stderr_stream_3_p_0(&call_graph__StdErr_14);
        }
#line 92 "call_graph.m"
        {
#line 92 "call_graph.m"
          call_graph__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_32_32, 0) = ((MR_Box) (call_graph__ErrorMsg_13));
#line 92 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &call_graph_scalar_common_1[1])));
#line 92 "call_graph.m"
        }
#line 92 "call_graph.m"
        {
#line 92 "call_graph.m"
          call_graph__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_30_30, 0) = ((MR_Box) ((MR_String) "\': "));
#line 92 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_30_30, 1) = ((MR_Box) (call_graph__V_32_32));
#line 92 "call_graph.m"
        }
#line 92 "call_graph.m"
        {
#line 92 "call_graph.m"
          call_graph__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 92 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_29_29, 0) = ((MR_Box) (call_graph__File_8));
#line 92 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_29_29, 1) = ((MR_Box) (call_graph__V_30_30));
#line 92 "call_graph.m"
        }
#line 91 "call_graph.m"
        {
#line 91 "call_graph.m"
          call_graph__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 91 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_26_26, 0) = ((MR_Box) ((MR_String) "mprof: error opening file \140"));
#line 91 "call_graph.m"
          MR_hl_field(MR_mktag(1), call_graph__V_26_26, 1) = ((MR_Box) (call_graph__V_29_29));
#line 91 "call_graph.m"
        }
#line 91 "call_graph.m"
        {
#line 91 "call_graph.m"
          mercury__io__write_strings_4_p_0(call_graph__StdErr_14, call_graph__V_26_26);
        }
#line 88 "call_graph.m"
        *call_graph__STATE_VARIABLE_StaticCallGraph_16 = call_graph__STATE_VARIABLE_StaticCallGraph_0_15;
#line 88 "call_graph.m"
      }
#line 94 "call_graph.m"
    {
#line 94 "call_graph.m"
      options__maybe_write_string_4_p_0(call_graph__VeryVerbose_7, (MR_String) " done");
#line 94 "call_graph.m"
      return;
    }
#line 78 "call_graph.m"
  }
#line 75 "call_graph.m"
}

#line 68 "call_graph.m"
static void MR_CALL 
call_graph__build_call_graph_5_p_0_1(
#line 68 "call_graph.m"
  MR_Box call_graph__closure_arg,
#line 68 "call_graph.m"
  MR_Box call_graph__wrapper_arg_1,
#line 68 "call_graph.m"
  MR_Box call_graph__wrapper_arg_2,
#line 68 "call_graph.m"
  MR_Box * call_graph__wrapper_arg_3,
#line 68 "call_graph.m"
  MR_Box call_graph__wrapper_arg_4,
#line 68 "call_graph.m"
  MR_Box * call_graph__wrapper_arg_5)
#line 68 "call_graph.m"
{
#line 68 "call_graph.m"
  {
#line 68 "call_graph.m"
    MR_Box call_graph__closure = call_graph__closure_arg;
#line 68 "call_graph.m"
    MR_Word call_graph__conv0_STATE_VARIABLE_StaticCallGraph_16;

#line 68 "call_graph.m"
    {
#line 68 "call_graph.m"
      call_graph__process_prof_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), call_graph__closure, (MR_Integer) 3))), ((MR_String) call_graph__wrapper_arg_1), ((MR_Word) call_graph__wrapper_arg_2), &call_graph__conv0_STATE_VARIABLE_StaticCallGraph_16);
    }
#line 68 "call_graph.m"
    *call_graph__wrapper_arg_3 = ((MR_Box) (call_graph__conv0_STATE_VARIABLE_StaticCallGraph_16));
#line 68 "call_graph.m"
  }
#line 68 "call_graph.m"
}

#line 28 "call_graph.m"
void MR_CALL 
call_graph__build_call_graph_5_p_0(
#line 28 "call_graph.m"
  MR_Word call_graph__Args_6,
#line 28 "call_graph.m"
  MR_Word call_graph__STATE_VARIABLE_StaticCallGraph_0_11,
#line 28 "call_graph.m"
  MR_Word * call_graph__STATE_VARIABLE_StaticCallGraph_12)
#line 28 "call_graph.m"
{
#line 45 "call_graph.m"
  {
#line 45 "call_graph.m"
    MR_bool call_graph__succeeded;
#line 45 "call_graph.m"
    MR_Word call_graph__Dynamic_9;
#line 45 "call_graph.m"
    MR_Word call_graph__VeryVerbose_10;

#line 46 "call_graph.m"
    {
#line 46 "call_graph.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &call_graph__Dynamic_9);
    }
#line 47 "call_graph.m"
    {
#line 47 "call_graph.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &call_graph__VeryVerbose_10);
    }
#line 55 "call_graph.m"
    if ((call_graph__Dynamic_9 == (MR_Integer) 0))
#line 67 "call_graph.m"
      {
#line 67 "call_graph.m"
        MR_Word call_graph__V_29_29;
#line 68 "call_graph.m"
        MR_Box call_graph__conv2_STATE_VARIABLE_StaticCallGraph_12;
#line 68 "call_graph.m"
        MR_Box call_graph__conv1_STATE_VARIABLE_IO_14;

#line 68 "call_graph.m"
        {
#line 68 "call_graph.m"
          call_graph__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 68 "call_graph.m"
          MR_hl_field(MR_mktag(0), call_graph__V_29_29, 0) = ((MR_Box) (&call_graph_scalar_common_2[0]));
#line 68 "call_graph.m"
          MR_hl_field(MR_mktag(0), call_graph__V_29_29, 1) = ((MR_Box) (call_graph__build_call_graph_5_p_0_1));
#line 68 "call_graph.m"
          MR_hl_field(MR_mktag(0), call_graph__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 68 "call_graph.m"
          MR_hl_field(MR_mktag(0), call_graph__V_29_29, 3) = ((MR_Box) (call_graph__VeryVerbose_10));
#line 68 "call_graph.m"
        }
#line 68 "call_graph.m"
        {
#line 68 "call_graph.m"
          mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &call_graph_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, call_graph__V_29_29, call_graph__Args_6, ((MR_Box) (call_graph__STATE_VARIABLE_StaticCallGraph_0_11)), &call_graph__conv2_STATE_VARIABLE_StaticCallGraph_12, ((MR_Box) ((MR_Integer) 0)), &call_graph__conv1_STATE_VARIABLE_IO_14);
        }
#line 68 "call_graph.m"
        *call_graph__STATE_VARIABLE_StaticCallGraph_12 = ((MR_Word) call_graph__conv2_STATE_VARIABLE_StaticCallGraph_12);
#line 67 "call_graph.m"
      }
#line 55 "call_graph.m"
    else
#line 54 "call_graph.m"
      *call_graph__STATE_VARIABLE_StaticCallGraph_12 = call_graph__STATE_VARIABLE_StaticCallGraph_0_11;
#line 45 "call_graph.m"
  }
#line 28 "call_graph.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module call_graph. */
