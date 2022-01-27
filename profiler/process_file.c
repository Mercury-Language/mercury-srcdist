/*
** Automatically generated from `process_file.m'
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


// :- module process_file.
// :- implementation.

/*
INIT mercury__process_file__init
ENDINIT
*/

#include "process_file.mih"


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
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prof_info.mih"
#include "read.mih"
#include "require.mih"
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
  MR_Word * DynamicCallGraph_8,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_18,
  MR_Word * STATE_VARIABLE_ProfNodeMap_19,
  MR_Word STATE_VARIABLE_AddrDecl_0_20,
  MR_Word * STATE_VARIABLE_AddrDecl_21);

static void MR_CALL 
process_file__process_addr_pair_2_10_p_0(
  MR_Word InputStream_11,
  MR_Word Dynamic_12,
  MR_Word STATE_VARIABLE_DynamicCallGraph_0_32,
  MR_Word * STATE_VARIABLE_DynamicCallGraph_33,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_34,
  MR_Word * STATE_VARIABLE_ProfNodeMap_35,
  MR_Word STATE_VARIABLE_AddrDecl_0_36,
  MR_Word * STATE_VARIABLE_AddrDecl_37);

static void MR_CALL 
process_file__lookup_addr_6_p_0(
  MR_Integer Addr_7,
  MR_Word * ProfNode_8,
  MR_Word STATE_VARIABLE_AddrDeclMap_0_13,
  MR_Word * STATE_VARIABLE_AddrDeclMap_14,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_15,
  MR_Word * STATE_VARIABLE_ProfNodeMap_16);

static void MR_CALL 
process_file__process_addr_9_p_0(
  MR_Word ErrorStream_10,
  MR_Word * WhatToProfile_11,
  MR_Float * Scale_12,
  MR_String * Units_13,
  MR_Integer * TotalCounts_14,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_22,
  MR_Word * STATE_VARIABLE_ProfNodeMap_23);

static void MR_CALL 
process_file__process_addr_2_8_p_0(
  MR_Word InputStream_9,
  MR_Word ErrorStream_10,
  MR_Integer STATE_VARIABLE_TotalCounts_0_21,
  MR_Integer * STATE_VARIABLE_TotalCounts_22,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_23,
  MR_Word * STATE_VARIABLE_ProfNodeMap_24);

static void MR_CALL 
process_file__process_addr_decl_2_7_p_0(
  MR_Word InputStream_8,
  MR_Word STATE_VARIABLE_AddrDecl_0_18,
  MR_Word * STATE_VARIABLE_AddrDecl_19,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_20,
  MR_Word * STATE_VARIABLE_ProfNodeMap_21);


static /* final */ const MR_Box process_file_scalar_common_1[1][1];




static /* final */ const MR_Box process_file_scalar_common_1[1][1] = {
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
process_file__process_profiling_data_files_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ErrorStream_8,
  MR_Word * Prof_9,
  MR_Word * DynamicCallGraph_10)
{
  {
    MR_Word VVerbose_12;
    MR_String DeclFile_13;
    MR_String CountFile_14;
    MR_String PairFile_15;
    MR_Word AddrDeclMap0_17;
    MR_Word ProfNodeMap0_18;
    MR_Word WhatToProfile_19;
    MR_Float Scale_20;
    MR_String Units_21;
    MR_Integer TotalCounts_22;
    MR_Word ProfNodeMap1_23;
    MR_Word ProfNodeMap_24;
    MR_Word AddrDeclMap_25;
    MR_Word CycleMap_26;
    MR_Word Globals0_27;
    MR_Word Globals_28;
    MR_String DeclFile_74;
    MR_Word DeclResult_75;
    MR_Word Dynamic_16;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &VVerbose_12);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &DeclFile_13);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &CountFile_14);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &PairFile_15);
    globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &Dynamic_16);
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) "\n\t% Processing ");
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, DeclFile_13);
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) "...");
    globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &DeclFile_74);
    mercury__io__open_input_4_p_0(DeclFile_74, &DeclResult_75);
    if (((MR_tag((MR_Word) DeclResult_75)) == (MR_Integer) 1))
    {
      MR_Word Error_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclResult_75, (MR_Integer) 0))));
      MR_String ErrorStr_78;
      MR_String Var_83;
      MR_String Var_84;
      MR_String Var_86;
      MR_String Var_87;

      Var_87 = mercury__io__error_message_1_f_0(Error_77);
      Var_86 = mercury__string__f_43_43_2_f_0(Var_87, (MR_String) "\n");
      Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_86);
      Var_83 = mercury__string__f_43_43_2_f_0(DeclFile_74, Var_84);
      ErrorStr_78 = mercury__string__f_43_43_2_f_0((MR_String) "error opening declaration file \140", Var_83);
      {
        mercury__require__error_1_p_0(ErrorStr_78);
        return;
      }
    }
    else
    {
      MR_Word DeclFileStream_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclResult_75, (MR_Integer) 0))));
      MR_Word Var_89;
      MR_Word Var_90;

      Var_89 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      Var_90 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0));
      process_file__process_addr_decl_2_7_p_0(DeclFileStream_76, Var_89, &AddrDeclMap0_17, Var_90, &ProfNodeMap0_18);
      mercury__io__close_input_3_p_0(DeclFileStream_76);
    }
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) " done.\n");
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) "\t% Processing ");
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, CountFile_14);
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) "...");
    process_file__process_addr_9_p_0(ErrorStream_8, &WhatToProfile_19, &Scale_20, &Units_21, &TotalCounts_22, ProfNodeMap0_18, &ProfNodeMap1_23);
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) " done.\n");
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) "\t% Processing ");
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, PairFile_15);
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) "...");
    process_file__process_addr_pair_7_p_0(DynamicCallGraph_10, ProfNodeMap1_23, &ProfNodeMap_24, AddrDeclMap0_17, &AddrDeclMap_25);
    options__maybe_write_string_5_p_0(ProgressStream_7, VVerbose_12, (MR_String) " done.\n");
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &CycleMap_26);
    prof_info__prof_set_entire_7_p_0(Scale_20, Units_21, TotalCounts_22, AddrDeclMap_25, ProfNodeMap_24, CycleMap_26, Prof_9);
    globals__io_get_globals_3_p_0(&Globals0_27);
    globals__set_what_to_profile_3_p_0(WhatToProfile_19, Globals0_27, &Globals_28);
    globals__io_set_globals_3_p_0(Globals_28);
  }
}

static void MR_CALL 
process_file__process_addr_pair_7_p_0(
  MR_Word * DynamicCallGraph_8,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_18,
  MR_Word * STATE_VARIABLE_ProfNodeMap_19,
  MR_Word STATE_VARIABLE_AddrDecl_0_20,
  MR_Word * STATE_VARIABLE_AddrDecl_21)
{
  {
    MR_Word Dynamic_12;
    MR_String PairFile_13;
    MR_Word Result_14;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &Dynamic_12);
    globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &PairFile_13);
    mercury__io__open_input_4_p_0(PairFile_13, &Result_14);
    if (((MR_tag((MR_Word) Result_14)) == (MR_Integer) 1))
    {
      MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_14, (MR_Integer) 0))));
      MR_String ErrorStr_17;
      MR_String Var_30;
      MR_String Var_31;
      MR_String Var_33;
      MR_String Var_34;

      Var_34 = mercury__io__error_message_1_f_0(Error_16);
      Var_33 = mercury__string__f_43_43_2_f_0(Var_34, (MR_String) "\n");
      Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_33);
      Var_30 = mercury__string__f_43_43_2_f_0(PairFile_13, Var_31);
      ErrorStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "error opening pair file \140", Var_30);
      {
        mercury__require__error_1_p_0(ErrorStr_17);
        return;
      }
    }
    else
    {
      MR_Word PairFileStream_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_14, (MR_Integer) 0))));
      MR_Word Var_36;

      Var_36 = mercury__digraph__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      process_file__process_addr_pair_2_10_p_0(PairFileStream_15, Dynamic_12, Var_36, DynamicCallGraph_8, STATE_VARIABLE_ProfNodeMap_0_18, STATE_VARIABLE_ProfNodeMap_19, STATE_VARIABLE_AddrDecl_0_20, STATE_VARIABLE_AddrDecl_21);
      mercury__io__close_input_3_p_0(PairFileStream_15);
    }
  }
}

static void MR_CALL 
process_file__process_addr_pair_2_10_p_0(
  MR_Word InputStream_11,
  MR_Word Dynamic_12,
  MR_Word STATE_VARIABLE_DynamicCallGraph_0_32,
  MR_Word * STATE_VARIABLE_DynamicCallGraph_33,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_34,
  MR_Word * STATE_VARIABLE_ProfNodeMap_35,
  MR_Word STATE_VARIABLE_AddrDecl_0_36,
  MR_Word * STATE_VARIABLE_AddrDecl_37)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeLabelAddr_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_addr_4_p_0(InputStream_11, &MaybeLabelAddr_17);
    if ((MaybeLabelAddr_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DynamicCallGraph_33 = STATE_VARIABLE_DynamicCallGraph_0_32;
      *STATE_VARIABLE_ProfNodeMap_35 = STATE_VARIABLE_ProfNodeMap_0_34;
      *STATE_VARIABLE_AddrDecl_37 = STATE_VARIABLE_AddrDecl_0_36;
    }
    else
    {
      MR_Integer CallerAddr_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLabelAddr_17, (MR_Integer) 0))));
      MR_Integer CalleeAddr_19;
      MR_Integer Count_20;
      MR_Word CallerProfNode0_21;
      MR_Word CalleeProfNode0_22;
      MR_String CallerName_23;
      MR_String CalleeName_24;
      MR_Word CallerProfNode_25;
      MR_Word CalleeProfNode_26;
      MR_Word STATE_VARIABLE_AddrDecl_43_43;
      MR_Word STATE_VARIABLE_ProfNodeMap_44_44;
      MR_Word STATE_VARIABLE_AddrDecl_45_45;
      MR_Word STATE_VARIABLE_ProfNodeMap_46_46;
      MR_Word STATE_VARIABLE_ProfNodeMap_47_47;
      MR_Word STATE_VARIABLE_ProfNodeMap_48_48;
      MR_Word STATE_VARIABLE_DynamicCallGraph_51_51;
      MR_Word ProfNode0_67;
      MR_Box conv0_ProfNode0_67;
      MR_Word next_value_of_STATE_VARIABLE_DynamicCallGraph_0_32;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_34;
      MR_Word next_value_of_STATE_VARIABLE_AddrDecl_0_36;

      read__read_label_addr_4_p_0(InputStream_11, &CalleeAddr_19);
      read__read_int_4_p_0(InputStream_11, &Count_20);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), STATE_VARIABLE_ProfNodeMap_0_34, CallerAddr_18, &conv0_ProfNode0_67);
      if (succeeded)
      {
        ProfNode0_67 = ((MR_Word) (conv0_ProfNode0_67));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        CallerProfNode0_21 = ProfNode0_67;
        STATE_VARIABLE_ProfNodeMap_44_44 = STATE_VARIABLE_ProfNodeMap_0_34;
        STATE_VARIABLE_AddrDecl_43_43 = STATE_VARIABLE_AddrDecl_0_36;
      }
      else
      {
        MR_String Str_68;
        MR_String Var_80;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&process_file_scalar_common_1[0]), CallerAddr_18, &Var_80);
        Str_68 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", Var_80);
        CallerProfNode0_21 = prof_info__prof_node_init_1_f_0(Str_68);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), CallerAddr_18, ((MR_Box) (CallerProfNode0_21)), STATE_VARIABLE_ProfNodeMap_0_34, &STATE_VARIABLE_ProfNodeMap_44_44);
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Str_68)), ((MR_Box) (CallerAddr_18)), STATE_VARIABLE_AddrDecl_0_36, &STATE_VARIABLE_AddrDecl_43_43);
      }
      process_file__lookup_addr_6_p_0(CalleeAddr_19, &CalleeProfNode0_22, STATE_VARIABLE_AddrDecl_43_43, &STATE_VARIABLE_AddrDecl_45_45, STATE_VARIABLE_ProfNodeMap_44_44, &STATE_VARIABLE_ProfNodeMap_46_46);
      prof_info__prof_node_get_pred_name_2_p_0(CallerProfNode0_21, &CallerName_23);
      prof_info__prof_node_get_pred_name_2_p_0(CalleeProfNode0_22, &CalleeName_24);
      prof_info__prof_node_concat_to_child_4_p_0(CalleeName_24, Count_20, CallerProfNode0_21, &CallerProfNode_25);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), CallerAddr_18, ((MR_Box) (CallerProfNode_25)), STATE_VARIABLE_ProfNodeMap_46_46, &STATE_VARIABLE_ProfNodeMap_47_47);
      succeeded = (CalleeAddr_19 == CallerAddr_18);
      if (succeeded)
        prof_info__prof_node_set_self_calls_3_p_0(Count_20, CalleeProfNode0_22, &CalleeProfNode_26);
      else
      {
        MR_Integer TotalCalls0_27;
        MR_Integer TotalCalls_28;
        MR_Word CalleeProfNode1_29;

        prof_info__prof_node_get_total_calls_2_p_0(CalleeProfNode0_22, &TotalCalls0_27);
        TotalCalls_28 = (MR_Integer) ((MR_Unsigned) TotalCalls0_27 + (MR_Unsigned) Count_20);
        prof_info__prof_node_set_total_calls_3_p_0(TotalCalls_28, CalleeProfNode0_22, &CalleeProfNode1_29);
        prof_info__prof_node_concat_to_parent_4_p_0(CallerName_23, Count_20, CalleeProfNode1_29, &CalleeProfNode_26);
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), CalleeAddr_19, ((MR_Box) (CalleeProfNode_26)), STATE_VARIABLE_ProfNodeMap_47_47, &STATE_VARIABLE_ProfNodeMap_48_48);
      switch (Dynamic_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_DynamicCallGraph_51_51 = STATE_VARIABLE_DynamicCallGraph_0_32;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallerKey_30;
            MR_Word CalleeKey_31;
            MR_Word STATE_VARIABLE_DynamicCallGraph_49_49;
            MR_Word STATE_VARIABLE_DynamicCallGraph_50_50;

            mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CallerName_23)), &CallerKey_30, STATE_VARIABLE_DynamicCallGraph_0_32, &STATE_VARIABLE_DynamicCallGraph_49_49);
            mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CalleeName_24)), &CalleeKey_31, STATE_VARIABLE_DynamicCallGraph_49_49, &STATE_VARIABLE_DynamicCallGraph_50_50);
            mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallerKey_30, CalleeKey_31, STATE_VARIABLE_DynamicCallGraph_50_50, &STATE_VARIABLE_DynamicCallGraph_51_51);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_DynamicCallGraph_0_32 = STATE_VARIABLE_DynamicCallGraph_51_51;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_34 = STATE_VARIABLE_ProfNodeMap_48_48;
      next_value_of_STATE_VARIABLE_AddrDecl_0_36 = STATE_VARIABLE_AddrDecl_45_45;
      STATE_VARIABLE_DynamicCallGraph_0_32 = next_value_of_STATE_VARIABLE_DynamicCallGraph_0_32;
      STATE_VARIABLE_ProfNodeMap_0_34 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_34;
      STATE_VARIABLE_AddrDecl_0_36 = next_value_of_STATE_VARIABLE_AddrDecl_0_36;
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
process_file__process_addr_9_p_0(
  MR_Word ErrorStream_10,
  MR_Word * WhatToProfile_11,
  MR_Float * Scale_12,
  MR_String * Units_13,
  MR_Integer * TotalCounts_14,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_22,
  MR_Word * STATE_VARIABLE_ProfNodeMap_23)
{
  {
    MR_String CountFile_17;
    MR_Word CountResult_18;

    globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &CountFile_17);
    mercury__io__open_input_4_p_0(CountFile_17, &CountResult_18);
    if (((MR_tag((MR_Word) CountResult_18)) == (MR_Integer) 1))
    {
      MR_Word Error_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CountResult_18, (MR_Integer) 0))));
      MR_String ErrorMsg_21;

      mercury__io__error_message_2_p_0(Error_20, &ErrorMsg_21);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\nWarning: error opening \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, CountFile_17);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\': ");
      mercury__io__write_string_4_p_0(ErrorStream_10, ErrorMsg_21);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\n");
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "The generated profile will only include call counts.\n\n");
      *TotalCounts_14 = (MR_Integer) 0;
      *WhatToProfile_11 = (MR_Integer) 3;
      *Scale_12 = (MR_Float) 1.0000000000000000;
      *Units_13 = (MR_String) "";
      *STATE_VARIABLE_ProfNodeMap_23 = STATE_VARIABLE_ProfNodeMap_0_22;
    }
    else
    {
      MR_Word CountFileStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CountResult_18, (MR_Integer) 0))));

      read__read_what_to_profile_4_p_0(CountFileStream_19, WhatToProfile_11);
      read__read_float_4_p_0(CountFileStream_19, Scale_12);
      read__read_string_4_p_0(CountFileStream_19, Units_13);
      process_file__process_addr_2_8_p_0(CountFileStream_19, ErrorStream_10, (MR_Integer) 0, TotalCounts_14, STATE_VARIABLE_ProfNodeMap_0_22, STATE_VARIABLE_ProfNodeMap_23);
      mercury__io__close_input_3_p_0(CountFileStream_19);
    }
  }
}

static void MR_CALL 
process_file__process_addr_2_8_p_0(
  MR_Word InputStream_9,
  MR_Word ErrorStream_10,
  MR_Integer STATE_VARIABLE_TotalCounts_0_21,
  MR_Integer * STATE_VARIABLE_TotalCounts_22,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_23,
  MR_Word * STATE_VARIABLE_ProfNodeMap_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeLabelAddr_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_addr_4_p_0(InputStream_9, &MaybeLabelAddr_14);
    if ((MaybeLabelAddr_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TotalCounts_22 = STATE_VARIABLE_TotalCounts_0_21;
      *STATE_VARIABLE_ProfNodeMap_24 = STATE_VARIABLE_ProfNodeMap_0_23;
    }
    else
    {
      MR_Integer LabelAddr_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLabelAddr_14, (MR_Integer) 0))));
      MR_Integer Count_16;
      MR_Word STATE_VARIABLE_ProfNodeMap_29_29;
      MR_Integer STATE_VARIABLE_TotalCounts_30_30;
      MR_Word ProfNode0_17;
      MR_Box conv0_ProfNode0_17;
      MR_Integer next_value_of_STATE_VARIABLE_TotalCounts_0_21;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_23;

      read__read_int_4_p_0(InputStream_9, &Count_16);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), STATE_VARIABLE_ProfNodeMap_0_23, LabelAddr_15, &conv0_ProfNode0_17);
      if (succeeded)
      {
        ProfNode0_17 = ((MR_Word) (conv0_ProfNode0_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer InitCount0_18;
        MR_Integer InitCount_19;
        MR_Word ProfNode_20;

        prof_info__prof_node_get_initial_counts_2_p_0(ProfNode0_17, &InitCount0_18);
        InitCount_19 = (MR_Integer) ((MR_Unsigned) InitCount0_18 + (MR_Unsigned) Count_16);
        prof_info__prof_node_set_initial_counts_3_p_0(InitCount_19, ProfNode0_17, &ProfNode_20);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_15, ((MR_Box) (ProfNode_20)), STATE_VARIABLE_ProfNodeMap_0_23, &STATE_VARIABLE_ProfNodeMap_29_29);
        STATE_VARIABLE_TotalCounts_30_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalCounts_0_21 + (MR_Unsigned) Count_16);
      }
      else
      {
        MR_String Var_48;

        mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\nWarning address ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&process_file_scalar_common_1[0]), LabelAddr_15, &Var_48);
        mercury__io__write_string_4_p_0(ErrorStream_10, Var_48);
        mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) " not found!  Ignoring address and continuing computation.\n");
        STATE_VARIABLE_ProfNodeMap_29_29 = STATE_VARIABLE_ProfNodeMap_0_23;
        STATE_VARIABLE_TotalCounts_30_30 = STATE_VARIABLE_TotalCounts_0_21;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_TotalCounts_0_21 = STATE_VARIABLE_TotalCounts_30_30;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_23 = STATE_VARIABLE_ProfNodeMap_29_29;
      STATE_VARIABLE_TotalCounts_0_21 = next_value_of_STATE_VARIABLE_TotalCounts_0_21;
      STATE_VARIABLE_ProfNodeMap_0_23 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_23;
      continue;
    }
    break;
  }
}

static void MR_CALL 
process_file__process_addr_decl_2_7_p_0(
  MR_Word InputStream_8,
  MR_Word STATE_VARIABLE_AddrDecl_0_18,
  MR_Word * STATE_VARIABLE_AddrDecl_19,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_20,
  MR_Word * STATE_VARIABLE_ProfNodeMap_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeLabelAddr_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    read__maybe_read_label_addr_4_p_0(InputStream_8, &MaybeLabelAddr_12);
    if ((MaybeLabelAddr_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_AddrDecl_19 = STATE_VARIABLE_AddrDecl_0_18;
      *STATE_VARIABLE_ProfNodeMap_21 = STATE_VARIABLE_ProfNodeMap_0_20;
    }
    else
    {
      MR_Integer LabelAddr_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLabelAddr_12, (MR_Integer) 0))));
      MR_String LabelName_14;
      MR_Word ProfNode_15;
      MR_Word STATE_VARIABLE_AddrDecl_26_26;
      MR_Word STATE_VARIABLE_AddrDecl_28_28;
      MR_Word STATE_VARIABLE_ProfNodeMap_30_30;
      MR_Word STATE_VARIABLE_ProfNodeMap_27_27;
      MR_Word next_value_of_STATE_VARIABLE_AddrDecl_0_18;
      MR_Word next_value_of_STATE_VARIABLE_ProfNodeMap_0_20;

      read__read_label_name_4_p_0(InputStream_8, &LabelName_14);
      ProfNode_15 = prof_info__prof_node_init_1_f_0(LabelName_14);
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LabelName_14)), ((MR_Box) (LabelAddr_13)), STATE_VARIABLE_AddrDecl_0_18, &STATE_VARIABLE_AddrDecl_26_26);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_13, ((MR_Box) (ProfNode_15)), STATE_VARIABLE_ProfNodeMap_0_20, &STATE_VARIABLE_ProfNodeMap_27_27);
      if (succeeded)
      {
        STATE_VARIABLE_ProfNodeMap_30_30 = STATE_VARIABLE_ProfNodeMap_27_27;
        STATE_VARIABLE_AddrDecl_28_28 = STATE_VARIABLE_AddrDecl_26_26;
      }
      else
      {
        MR_Word ProfNode0_16;
        MR_Word NewProfNode_17;
        MR_Word STATE_VARIABLE_ProfNodeMap_29_29;
        MR_Word ProfNode0_46;
        MR_Box conv0_ProfNode0_46;

        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), STATE_VARIABLE_ProfNodeMap_0_20, LabelAddr_13, &conv0_ProfNode0_46);
        if (succeeded)
        {
          ProfNode0_46 = ((MR_Word) (conv0_ProfNode0_46));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          ProfNode0_16 = ProfNode0_46;
          STATE_VARIABLE_ProfNodeMap_29_29 = STATE_VARIABLE_ProfNodeMap_0_20;
          STATE_VARIABLE_AddrDecl_28_28 = STATE_VARIABLE_AddrDecl_26_26;
        }
        else
        {
          MR_String Str_47;
          MR_String Var_59;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&process_file_scalar_common_1[0]), LabelAddr_13, &Var_59);
          Str_47 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", Var_59);
          ProfNode0_16 = prof_info__prof_node_init_1_f_0(Str_47);
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_13, ((MR_Box) (ProfNode0_16)), STATE_VARIABLE_ProfNodeMap_0_20, &STATE_VARIABLE_ProfNodeMap_29_29);
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Str_47)), ((MR_Box) (LabelAddr_13)), STATE_VARIABLE_AddrDecl_26_26, &STATE_VARIABLE_AddrDecl_28_28);
        }
        prof_info__prof_node_concat_to_name_list_3_p_0(LabelName_14, ProfNode0_16, &NewProfNode_17);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), LabelAddr_13, ((MR_Box) (NewProfNode_17)), STATE_VARIABLE_ProfNodeMap_29_29, &STATE_VARIABLE_ProfNodeMap_30_30);
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_AddrDecl_0_18 = STATE_VARIABLE_AddrDecl_28_28;
      next_value_of_STATE_VARIABLE_ProfNodeMap_0_20 = STATE_VARIABLE_ProfNodeMap_30_30;
      STATE_VARIABLE_AddrDecl_0_18 = next_value_of_STATE_VARIABLE_AddrDecl_0_18;
      STATE_VARIABLE_ProfNodeMap_0_20 = next_value_of_STATE_VARIABLE_ProfNodeMap_0_20;
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
