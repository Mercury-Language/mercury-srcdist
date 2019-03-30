/*
** Automatically generated from `process_file.m'
** by the Mercury compiler,
** version rotd-2019-03-29
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


// :- module process_file.
// :- implementation.

/*
INIT mercury__process_file__init
ENDINIT
*/

#include "process_file.mih"


#include "globals.mih"
#include "options.mih"
#include "prof_info.mih"
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
#include "int.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
process_file__process_addr_pair_7_p_0(
  MR_Word STATE_VARIABLE_ProfNodeMap_0_17,
  MR_Word * STATE_VARIABLE_ProfNodeMap_18,
  MR_Word STATE_VARIABLE_AddrDecl_0_19,
  MR_Word * STATE_VARIABLE_AddrDecl_20,
  MR_Word * DynamicCallGraph_10);

static void MR_CALL 
process_file__process_addr_pair_2_9_p_0(
  MR_Word Dynamic_10,
  MR_Word STATE_VARIABLE_DynamicCallGraph_0_30,
  MR_Word * STATE_VARIABLE_DynamicCallGraph_31,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_32,
  MR_Word * STATE_VARIABLE_ProfNodeMap_33,
  MR_Word STATE_VARIABLE_AddrDecl_0_34,
  MR_Word * STATE_VARIABLE_AddrDecl_35);

static void MR_CALL 
process_file__lookup_addr_6_p_0(
  MR_Integer Addr_7,
  MR_Word * ProfNode_8,
  MR_Word STATE_VARIABLE_AddrDeclMap_0_13,
  MR_Word * STATE_VARIABLE_AddrDeclMap_14,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_15,
  MR_Word * STATE_VARIABLE_ProfNodeMap_16);

static void MR_CALL 
process_file__process_addr_8_p_0(
  MR_Word STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * STATE_VARIABLE_ProfNodeMap_20,
  MR_Word * WhatToProfile_10,
  MR_Float * Scale_11,
  MR_String * Units_12,
  MR_Integer * TotalCounts_13);

static void MR_CALL 
process_file__process_addr_2_6_p_0(
  MR_Integer STATE_VARIABLE_TotalCounts_0_17,
  MR_Integer * STATE_VARIABLE_TotalCounts_18,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * STATE_VARIABLE_ProfNodeMap_20);

static void MR_CALL 
process_file__process_addr_decl_2_6_p_0(
  MR_Word STATE_VARIABLE_AddrDecl_0_16,
  MR_Word * STATE_VARIABLE_AddrDecl_17,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_18,
  MR_Word * STATE_VARIABLE_ProfNodeMap_19);


static /* final */ const MR_Box process_file_scalar_common_1[1][1];




static /* final */ const MR_Box process_file_scalar_common_1[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
process_file__process_profiling_data_files_4_p_0(
  MR_Word * Prof_5,
  MR_Word * DynamicCallGraph_6)
{
  {
    MR_Word VVerbose_8;
    MR_String DeclFile_9;
    MR_String CountFile_10;
    MR_String PairFile_11;
    MR_Word AddrDeclMap0_13;
    MR_Word ProfNodeMap0_14;
    MR_Word ProfNodeMap1_15;
    MR_Word WhatToProfile_16;
    MR_Float Scale_17;
    MR_String Units_18;
    MR_Integer TotalCounts_19;
    MR_Word ProfNodeMap_20;
    MR_Word AddrDeclMap_21;
    MR_Word CycleMap_22;
    MR_Word Globals0_23;
    MR_Word Globals_24;
    MR_String DeclFile_70;
    MR_Word Result_71;
    MR_Word Dynamic_12;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &VVerbose_8);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &DeclFile_9);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &CountFile_10);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &PairFile_11);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &Dynamic_12);
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) "\n\t% Processing ");
    options__maybe_write_string_4_p_0(VVerbose_8, DeclFile_9);
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) "...");
    globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &DeclFile_70);
    mercury__io__see_4_p_0(DeclFile_70, &Result_71);
    if ((Result_71 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_84;
      MR_Word Var_85;

      Var_84 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      Var_85 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0));
      process_file__process_addr_decl_2_6_p_0(Var_84, &AddrDeclMap0_13, Var_85, &ProfNodeMap0_14);
      mercury__io__seen_2_p_0();
    }
    else
    {
      MR_Word Error_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_71, (MR_Integer) 0))));
      MR_String ErrorStr_73;
      MR_String Var_78;
      MR_String Var_79;
      MR_String Var_81;
      MR_String Var_82;

      Var_82 = mercury__io__error_message_1_f_0(Error_72);
      Var_81 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "\n");
      Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_81);
      Var_78 = mercury__string__f_43_43_2_f_0(DeclFile_70, Var_79);
      ErrorStr_73 = mercury__string__f_43_43_2_f_0((MR_String) "error opening declaration file \140", Var_78);
      {
        mercury__require__error_1_p_0(ErrorStr_73);
        return;
      }
    }
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) " done.\n");
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) "\t% Processing ");
    options__maybe_write_string_4_p_0(VVerbose_8, CountFile_10);
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) "...");
    process_file__process_addr_8_p_0(ProfNodeMap0_14, &ProfNodeMap1_15, &WhatToProfile_16, &Scale_17, &Units_18, &TotalCounts_19);
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) " done.\n");
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) "\t% Processing ");
    options__maybe_write_string_4_p_0(VVerbose_8, PairFile_11);
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) "...");
    process_file__process_addr_pair_7_p_0(ProfNodeMap1_15, &ProfNodeMap_20, AddrDeclMap0_13, &AddrDeclMap_21, DynamicCallGraph_6);
    options__maybe_write_string_4_p_0(VVerbose_8, (MR_String) " done.\n");
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &CycleMap_22);
    prof_info__prof_set_entire_7_p_0(Scale_17, Units_18, TotalCounts_19, AddrDeclMap_21, ProfNodeMap_20, CycleMap_22, Prof_5);
    globals__io_get_globals_3_p_0(&Globals0_23);
    globals__set_what_to_profile_3_p_0(WhatToProfile_16, Globals0_23, &Globals_24);
    globals__io_set_globals_3_p_0(Globals_24);
  }
}

static void MR_CALL 
process_file__process_addr_pair_7_p_0(
  MR_Word STATE_VARIABLE_ProfNodeMap_0_17,
  MR_Word * STATE_VARIABLE_ProfNodeMap_18,
  MR_Word STATE_VARIABLE_AddrDecl_0_19,
  MR_Word * STATE_VARIABLE_AddrDecl_20,
  MR_Word * DynamicCallGraph_10)
{
  {
    MR_Word Dynamic_12;
    MR_String PairFile_13;
    MR_Word Result_14;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &Dynamic_12);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &PairFile_13);
    mercury__io__see_4_p_0(PairFile_13, &Result_14);
    if ((Result_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_35;

      Var_35 = mercury__digraph__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      process_file__process_addr_pair_2_9_p_0(Dynamic_12, Var_35, DynamicCallGraph_10, STATE_VARIABLE_ProfNodeMap_0_17, STATE_VARIABLE_ProfNodeMap_18, STATE_VARIABLE_AddrDecl_0_19, STATE_VARIABLE_AddrDecl_20);
      mercury__io__seen_2_p_0();
    }
    else
    {
      MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_14, (MR_Integer) 0))));
      MR_String ErrorStr_16;
      MR_String Var_29;
      MR_String Var_30;
      MR_String Var_32;
      MR_String Var_33;

      Var_33 = mercury__io__error_message_1_f_0(Error_15);
      Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) "\n");
      Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_32);
      Var_29 = mercury__string__f_43_43_2_f_0(PairFile_13, Var_30);
      ErrorStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "error opening pair file \140", Var_29);
      {
        mercury__require__error_1_p_0(ErrorStr_16);
        return;
      }
    }
  }
}

static void MR_CALL 
process_file__process_addr_pair_2_9_p_0(
  MR_Word Dynamic_10,
  MR_Word STATE_VARIABLE_DynamicCallGraph_0_30,
  MR_Word * STATE_VARIABLE_DynamicCallGraph_31,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_32,
  MR_Word * STATE_VARIABLE_ProfNodeMap_33,
  MR_Word STATE_VARIABLE_AddrDecl_0_34,
  MR_Word * STATE_VARIABLE_AddrDecl_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeLabelAddr_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_addr_3_p_0(&MaybeLabelAddr_15);
    if ((MaybeLabelAddr_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DynamicCallGraph_31 = STATE_VARIABLE_DynamicCallGraph_0_30;
      *STATE_VARIABLE_ProfNodeMap_33 = STATE_VARIABLE_ProfNodeMap_0_32;
      *STATE_VARIABLE_AddrDecl_35 = STATE_VARIABLE_AddrDecl_0_34;
    }
    else
    {
      MR_Integer CallerAddr_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLabelAddr_15, (MR_Integer) 0))));
      MR_Integer CalleeAddr_17;
      MR_Integer Count_18;
      MR_Word CallerProfNode0_19;
      MR_Word CalleeProfNode0_20;
      MR_String CallerName_21;
      MR_String CalleeName_22;
      MR_Word CallerProfNode_23;
      MR_Word CalleeProfNode_24;
      MR_Word STATE_VARIABLE_AddrDecl_41_41;
      MR_Word STATE_VARIABLE_ProfNodeMap_42_42;
      MR_Word STATE_VARIABLE_AddrDecl_43_43;
      MR_Word STATE_VARIABLE_ProfNodeMap_44_44;
      MR_Word STATE_VARIABLE_ProfNodeMap_45_45;
      MR_Word STATE_VARIABLE_ProfNodeMap_46_46;
      MR_Word STATE_VARIABLE_DynamicCallGraph_49_49;
      MR_Word ProfNode0_65;
      MR_Box conv0_ProfNode0_65;
      MR_Word next_value_of_STATE_VARIABLE_DynamicCallGraph_0_30;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_32;
      MR_Word next_value_of_STATE_VARIABLE_AddrDecl_0_34;

      read__read_label_addr_3_p_0(&CalleeAddr_17);
      read__read_int_3_p_0(&Count_18);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), STATE_VARIABLE_ProfNodeMap_0_32, CallerAddr_16, &conv0_ProfNode0_65);
      if (succeeded)
      {
        ProfNode0_65 = ((MR_Word) (conv0_ProfNode0_65));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        CallerProfNode0_19 = ProfNode0_65;
        STATE_VARIABLE_ProfNodeMap_42_42 = STATE_VARIABLE_ProfNodeMap_0_32;
        STATE_VARIABLE_AddrDecl_41_41 = STATE_VARIABLE_AddrDecl_0_34;
      }
      else
      {
        MR_String Str_66;
        MR_String Var_78;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&process_file_scalar_common_1[0]), CallerAddr_16, &Var_78);
        Str_66 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", Var_78);
        CallerProfNode0_19 = prof_info__prof_node_init_1_f_0(Str_66);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), CallerAddr_16, ((MR_Box) (CallerProfNode0_19)), STATE_VARIABLE_ProfNodeMap_0_32, &STATE_VARIABLE_ProfNodeMap_42_42);
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Str_66)), ((MR_Box) (CallerAddr_16)), STATE_VARIABLE_AddrDecl_0_34, &STATE_VARIABLE_AddrDecl_41_41);
      }
      process_file__lookup_addr_6_p_0(CalleeAddr_17, &CalleeProfNode0_20, STATE_VARIABLE_AddrDecl_41_41, &STATE_VARIABLE_AddrDecl_43_43, STATE_VARIABLE_ProfNodeMap_42_42, &STATE_VARIABLE_ProfNodeMap_44_44);
      prof_info__prof_node_get_pred_name_2_p_0(CallerProfNode0_19, &CallerName_21);
      prof_info__prof_node_get_pred_name_2_p_0(CalleeProfNode0_20, &CalleeName_22);
      prof_info__prof_node_concat_to_child_4_p_0(CalleeName_22, Count_18, CallerProfNode0_19, &CallerProfNode_23);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), CallerAddr_16, ((MR_Box) (CallerProfNode_23)), STATE_VARIABLE_ProfNodeMap_44_44, &STATE_VARIABLE_ProfNodeMap_45_45);
      succeeded = (CalleeAddr_17 == CallerAddr_16);
      if (succeeded)
        prof_info__prof_node_set_self_calls_3_p_0(Count_18, CalleeProfNode0_20, &CalleeProfNode_24);
      else
      {
        MR_Integer TotalCalls0_25;
        MR_Integer TotalCalls_26;
        MR_Word CalleeProfNode1_27;

        prof_info__prof_node_get_total_calls_2_p_0(CalleeProfNode0_20, &TotalCalls0_25);
        TotalCalls_26 = (MR_Integer) ((MR_Unsigned) TotalCalls0_25 + (MR_Unsigned) Count_18);
        prof_info__prof_node_set_total_calls_3_p_0(TotalCalls_26, CalleeProfNode0_20, &CalleeProfNode1_27);
        prof_info__prof_node_concat_to_parent_4_p_0(CallerName_21, Count_18, CalleeProfNode1_27, &CalleeProfNode_24);
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), CalleeAddr_17, ((MR_Box) (CalleeProfNode_24)), STATE_VARIABLE_ProfNodeMap_45_45, &STATE_VARIABLE_ProfNodeMap_46_46);
      switch (Dynamic_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_DynamicCallGraph_49_49 = STATE_VARIABLE_DynamicCallGraph_0_30;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallerKey_28;
            MR_Word CalleeKey_29;
            MR_Word STATE_VARIABLE_DynamicCallGraph_47_47;
            MR_Word STATE_VARIABLE_DynamicCallGraph_48_48;

            mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CallerName_21)), &CallerKey_28, STATE_VARIABLE_DynamicCallGraph_0_30, &STATE_VARIABLE_DynamicCallGraph_47_47);
            mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CalleeName_22)), &CalleeKey_29, STATE_VARIABLE_DynamicCallGraph_47_47, &STATE_VARIABLE_DynamicCallGraph_48_48);
            mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallerKey_28, CalleeKey_29, STATE_VARIABLE_DynamicCallGraph_48_48, &STATE_VARIABLE_DynamicCallGraph_49_49);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_DynamicCallGraph_0_30 = STATE_VARIABLE_DynamicCallGraph_49_49;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_32 = STATE_VARIABLE_ProfNodeMap_46_46;
      next_value_of_STATE_VARIABLE_AddrDecl_0_34 = STATE_VARIABLE_AddrDecl_43_43;
      STATE_VARIABLE_DynamicCallGraph_0_30 = next_value_of_STATE_VARIABLE_DynamicCallGraph_0_30;
      STATE_VARIABLE_ProfNodeMap_0_32 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_32;
      STATE_VARIABLE_AddrDecl_0_34 = next_value_of_STATE_VARIABLE_AddrDecl_0_34;
      continue;
    }
    break;
  }
}

static void MR_CALL 
process_file__lookup_addr_6_p_0(
  MR_Integer Addr_7,
  MR_Word * ProfNode_8,
  MR_Word STATE_VARIABLE_AddrDeclMap_0_13,
  MR_Word * STATE_VARIABLE_AddrDeclMap_14,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_15,
  MR_Word * STATE_VARIABLE_ProfNodeMap_16)
{
  {
    MR_bool succeeded;
    MR_Word ProfNode0_11;
    MR_Box conv0_ProfNode0_11;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), STATE_VARIABLE_ProfNodeMap_0_15, Addr_7, &conv0_ProfNode0_11);
    if (succeeded)
    {
      ProfNode0_11 = ((MR_Word) (conv0_ProfNode0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *ProfNode_8 = ProfNode0_11;
      *STATE_VARIABLE_ProfNodeMap_16 = STATE_VARIABLE_ProfNodeMap_0_15;
      *STATE_VARIABLE_AddrDeclMap_14 = STATE_VARIABLE_AddrDeclMap_0_13;
    }
    else
    {
      MR_String Str_12;
      MR_String Var_28;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&process_file_scalar_common_1[0]), Addr_7, &Var_28);
      Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", Var_28);
      *ProfNode_8 = prof_info__prof_node_init_1_f_0(Str_12);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), Addr_7, ((MR_Box) (*ProfNode_8)), STATE_VARIABLE_ProfNodeMap_0_15, STATE_VARIABLE_ProfNodeMap_16);
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Str_12)), ((MR_Box) (Addr_7)), STATE_VARIABLE_AddrDeclMap_0_13, STATE_VARIABLE_AddrDeclMap_14);
    }
  }
}

static void MR_CALL 
process_file__process_addr_8_p_0(
  MR_Word STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * STATE_VARIABLE_ProfNodeMap_20,
  MR_Word * WhatToProfile_10,
  MR_Float * Scale_11,
  MR_String * Units_12,
  MR_Integer * TotalCounts_13)
{
  {
    MR_String CountFile_15;
    MR_Word Result_16;

    globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &CountFile_15);
    mercury__io__see_4_p_0(CountFile_15, &Result_16);
    if ((Result_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      read__read_what_to_profile_3_p_0(WhatToProfile_10);
      read__read_float_3_p_0(Scale_11);
      read__read_string_3_p_0(Units_12);
      process_file__process_addr_2_6_p_0((MR_Integer) 0, TotalCounts_13, STATE_VARIABLE_ProfNodeMap_0_19, STATE_VARIABLE_ProfNodeMap_20);
      mercury__io__seen_2_p_0();
    }
    else
    {
      MR_Word Error_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_16, (MR_Integer) 0))));
      MR_String ErrorMsg_18;

      mercury__io__error_message_2_p_0(Error_17, &ErrorMsg_18);
      mercury__io__write_string_3_p_0((MR_String) "\nWarning: error opening \140");
      mercury__io__write_string_3_p_0(CountFile_15);
      mercury__io__write_string_3_p_0((MR_String) "\': ");
      mercury__io__write_string_3_p_0(ErrorMsg_18);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0((MR_String) "The generated profile will only include ");
      mercury__io__write_string_3_p_0((MR_String) "call counts.\n\n");
      *TotalCounts_13 = (MR_Integer) 0;
      *WhatToProfile_10 = (MR_Integer) 3;
      *Scale_11 = (MR_Float) 1.0000000000000000;
      *Units_12 = (MR_String) "";
      *STATE_VARIABLE_ProfNodeMap_20 = STATE_VARIABLE_ProfNodeMap_0_19;
    }
  }
}

static void MR_CALL 
process_file__process_addr_2_6_p_0(
  MR_Integer STATE_VARIABLE_TotalCounts_0_17,
  MR_Integer * STATE_VARIABLE_TotalCounts_18,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * STATE_VARIABLE_ProfNodeMap_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeLabelAddr_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_addr_3_p_0(&MaybeLabelAddr_10);
    if ((MaybeLabelAddr_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TotalCounts_18 = STATE_VARIABLE_TotalCounts_0_17;
      *STATE_VARIABLE_ProfNodeMap_20 = STATE_VARIABLE_ProfNodeMap_0_19;
    }
    else
    {
      MR_Integer LabelAddr_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLabelAddr_10, (MR_Integer) 0))));
      MR_Integer Count_12;
      MR_Word STATE_VARIABLE_ProfNodeMap_25_25;
      MR_Integer STATE_VARIABLE_TotalCounts_26_26;
      MR_Word ProfNode0_13;
      MR_Box conv0_ProfNode0_13;
      MR_Integer next_value_of_STATE_VARIABLE_TotalCounts_0_17;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_19;

      read__read_int_3_p_0(&Count_12);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), STATE_VARIABLE_ProfNodeMap_0_19, LabelAddr_11, &conv0_ProfNode0_13);
      if (succeeded)
      {
        ProfNode0_13 = ((MR_Word) (conv0_ProfNode0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer InitCount0_14;
        MR_Integer InitCount_15;
        MR_Word ProfNode_16;

        prof_info__prof_node_get_initial_counts_2_p_0(ProfNode0_13, &InitCount0_14);
        InitCount_15 = (MR_Integer) ((MR_Unsigned) InitCount0_14 + (MR_Unsigned) Count_12);
        prof_info__prof_node_set_initial_counts_3_p_0(InitCount_15, ProfNode0_13, &ProfNode_16);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_11, ((MR_Box) (ProfNode_16)), STATE_VARIABLE_ProfNodeMap_0_19, &STATE_VARIABLE_ProfNodeMap_25_25);
        STATE_VARIABLE_TotalCounts_26_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalCounts_0_17 + (MR_Unsigned) Count_12);
      }
      else
      {
        MR_String Var_44;

        mercury__io__write_string_3_p_0((MR_String) "\nWarning address ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&process_file_scalar_common_1[0]), LabelAddr_11, &Var_44);
        mercury__io__write_string_3_p_0(Var_44);
        mercury__io__write_string_3_p_0((MR_String) " not found!  Ignoring address and continuing computation.\n");
        STATE_VARIABLE_ProfNodeMap_25_25 = STATE_VARIABLE_ProfNodeMap_0_19;
        STATE_VARIABLE_TotalCounts_26_26 = STATE_VARIABLE_TotalCounts_0_17;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_TotalCounts_0_17 = STATE_VARIABLE_TotalCounts_26_26;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_19 = STATE_VARIABLE_ProfNodeMap_25_25;
      STATE_VARIABLE_TotalCounts_0_17 = next_value_of_STATE_VARIABLE_TotalCounts_0_17;
      STATE_VARIABLE_ProfNodeMap_0_19 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
process_file__process_addr_decl_2_6_p_0(
  MR_Word STATE_VARIABLE_AddrDecl_0_16,
  MR_Word * STATE_VARIABLE_AddrDecl_17,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_18,
  MR_Word * STATE_VARIABLE_ProfNodeMap_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeLabelAddr_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_addr_3_p_0(&MaybeLabelAddr_10);
    if ((MaybeLabelAddr_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AddrDecl_17 = STATE_VARIABLE_AddrDecl_0_16;
      *STATE_VARIABLE_ProfNodeMap_19 = STATE_VARIABLE_ProfNodeMap_0_18;
    }
    else
    {
      MR_Integer LabelAddr_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLabelAddr_10, (MR_Integer) 0))));
      MR_String LabelName_12;
      MR_Word ProfNode_13;
      MR_Word STATE_VARIABLE_AddrDecl_24_24;
      MR_Word STATE_VARIABLE_AddrDecl_26_26;
      MR_Word STATE_VARIABLE_ProfNodeMap_28_28;
      MR_Word STATE_VARIABLE_ProfNodeMap_25_25;
      MR_Word next_value_of_STATE_VARIABLE_AddrDecl_0_16;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_18;

      read__read_label_name_3_p_0(&LabelName_12);
      ProfNode_13 = prof_info__prof_node_init_1_f_0(LabelName_12);
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LabelName_12)), ((MR_Box) (LabelAddr_11)), STATE_VARIABLE_AddrDecl_0_16, &STATE_VARIABLE_AddrDecl_24_24);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_11, ((MR_Box) (ProfNode_13)), STATE_VARIABLE_ProfNodeMap_0_18, &STATE_VARIABLE_ProfNodeMap_25_25);
      if (succeeded)
      {
        STATE_VARIABLE_ProfNodeMap_28_28 = STATE_VARIABLE_ProfNodeMap_25_25;
        STATE_VARIABLE_AddrDecl_26_26 = STATE_VARIABLE_AddrDecl_24_24;
      }
      else
      {
        MR_Word ProfNode0_14;
        MR_Word NewProfNode_15;
        MR_Word STATE_VARIABLE_ProfNodeMap_27_27;
        MR_Word ProfNode0_44;
        MR_Box conv0_ProfNode0_44;

        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), STATE_VARIABLE_ProfNodeMap_0_18, LabelAddr_11, &conv0_ProfNode0_44);
        if (succeeded)
        {
          ProfNode0_44 = ((MR_Word) (conv0_ProfNode0_44));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          ProfNode0_14 = ProfNode0_44;
          STATE_VARIABLE_ProfNodeMap_27_27 = STATE_VARIABLE_ProfNodeMap_0_18;
          STATE_VARIABLE_AddrDecl_26_26 = STATE_VARIABLE_AddrDecl_24_24;
        }
        else
        {
          MR_String Str_45;
          MR_String Var_57;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&process_file_scalar_common_1[0]), LabelAddr_11, &Var_57);
          Str_45 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", Var_57);
          ProfNode0_14 = prof_info__prof_node_init_1_f_0(Str_45);
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_11, ((MR_Box) (ProfNode0_14)), STATE_VARIABLE_ProfNodeMap_0_18, &STATE_VARIABLE_ProfNodeMap_27_27);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Str_45)), ((MR_Box) (LabelAddr_11)), STATE_VARIABLE_AddrDecl_24_24, &STATE_VARIABLE_AddrDecl_26_26);
        }
        prof_info__prof_node_concat_to_name_list_3_p_0(LabelName_12, ProfNode0_14, &NewProfNode_15);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_11, ((MR_Box) (NewProfNode_15)), STATE_VARIABLE_ProfNodeMap_27_27, &STATE_VARIABLE_ProfNodeMap_28_28);
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_AddrDecl_0_16 = STATE_VARIABLE_AddrDecl_26_26;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_18 = STATE_VARIABLE_ProfNodeMap_28_28;
      STATE_VARIABLE_AddrDecl_0_16 = next_value_of_STATE_VARIABLE_AddrDecl_0_16;
      STATE_VARIABLE_ProfNodeMap_0_18 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_18;
      continue;
    }
    break;
  }
}

void mercury__process_file__init(void)
{
}

void mercury__process_file__init_type_tables(void)
{
}

void mercury__process_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__process_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module process_file.
