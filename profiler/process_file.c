/*
** Automatically generated from `process_file.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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


/* :- module process_file. */
/* :- implementation. */

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
process_file__lookup_addr_6_p_0(
  MR_Integer process_file__Addr_7,
  MR_Word * process_file__ProfNode_8,
  MR_Word process_file__STATE_VARIABLE_AddrDeclMap_0_13,
  MR_Word * process_file__STATE_VARIABLE_AddrDeclMap_14,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_15,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_16);

static void MR_CALL 
process_file__process_addr_pair_2_9_p_0(
  MR_Word process_file__Dynamic_10,
  MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_0_30,
  MR_Word * process_file__STATE_VARIABLE_DynamicCallGraph_31,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_32,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_33,
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_34,
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_35);

static void MR_CALL 
process_file__process_addr_pair_7_p_0(
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_17,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_18,
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_19,
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_20,
  MR_Word * process_file__DynamicCallGraph_10);

static void MR_CALL 
process_file__process_addr_2_6_p_0(
  MR_Integer process_file__STATE_VARIABLE_TotalCounts_0_17,
  MR_Integer * process_file__STATE_VARIABLE_TotalCounts_18,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20);

static void MR_CALL 
process_file__process_addr_8_p_0(
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20,
  MR_Word * process_file__WhatToProfile_10,
  MR_Float * process_file__Scale_11,
  MR_String * process_file__Units_12,
  MR_Integer * process_file__TotalCounts_13);

static void MR_CALL 
process_file__process_addr_decl_2_6_p_0(
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_16,
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_17,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_18,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_19);


static /* final */ const MR_Box process_file_scalar_common_1[1][1];




static /* final */ const MR_Box process_file_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static void MR_CALL 
process_file__lookup_addr_6_p_0(
  MR_Integer process_file__Addr_7,
  MR_Word * process_file__ProfNode_8,
  MR_Word process_file__STATE_VARIABLE_AddrDeclMap_0_13,
  MR_Word * process_file__STATE_VARIABLE_AddrDeclMap_14,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_15,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_16)
{
  {
    MR_bool process_file__succeeded;
    MR_Word process_file__ProfNode0_11;
    MR_Box process_file__conv0_ProfNode0_11;

    {
      process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_15, process_file__Addr_7, &process_file__conv0_ProfNode0_11);
    }
    if (process_file__succeeded)
      {
        process_file__ProfNode0_11 = ((MR_Word) process_file__conv0_ProfNode0_11);
        process_file__succeeded = MR_TRUE;
      }
    if (process_file__succeeded)
      {
        *process_file__ProfNode_8 = process_file__ProfNode0_11;
        *process_file__STATE_VARIABLE_ProfNodeMap_16 = process_file__STATE_VARIABLE_ProfNodeMap_0_15;
        *process_file__STATE_VARIABLE_AddrDeclMap_14 = process_file__STATE_VARIABLE_AddrDeclMap_0_13;
      }
    else
      {
        MR_String process_file__Str_12;
        MR_String process_file__V_28_28;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &process_file_scalar_common_1[0], process_file__Addr_7, &process_file__V_28_28);
        }
        {
          process_file__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", process_file__V_28_28);
        }
        {
          *process_file__ProfNode_8 = prof_info__prof_node_init_1_f_0(process_file__Str_12);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__Addr_7, ((MR_Box) (*process_file__ProfNode_8)), process_file__STATE_VARIABLE_ProfNodeMap_0_15, process_file__STATE_VARIABLE_ProfNodeMap_16);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__Str_12)), ((MR_Box) (process_file__Addr_7)), process_file__STATE_VARIABLE_AddrDeclMap_0_13, process_file__STATE_VARIABLE_AddrDeclMap_14);
        }
      }
  }
}

static void MR_CALL 
process_file__process_addr_pair_2_9_p_0(
  MR_Word process_file__Dynamic_10,
  MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_0_30,
  MR_Word * process_file__STATE_VARIABLE_DynamicCallGraph_31,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_32,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_33,
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_34,
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_35)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool process_file__succeeded;
        MR_Word process_file__MaybeLabelAddr_15;

        {
          read__maybe_read_label_addr_3_p_0(&process_file__MaybeLabelAddr_15);
        }
        if ((process_file__MaybeLabelAddr_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *process_file__STATE_VARIABLE_DynamicCallGraph_31 = process_file__STATE_VARIABLE_DynamicCallGraph_0_30;
            *process_file__STATE_VARIABLE_ProfNodeMap_33 = process_file__STATE_VARIABLE_ProfNodeMap_0_32;
            *process_file__STATE_VARIABLE_AddrDecl_35 = process_file__STATE_VARIABLE_AddrDecl_0_34;
          }
        else
          {
            MR_Word process_file__TypeCtorInfo_55_55;
            MR_Integer process_file__CallerAddr_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), process_file__MaybeLabelAddr_15, (MR_Integer) 0)));
            MR_Integer process_file__CalleeAddr_17;
            MR_Integer process_file__Count_18;
            MR_Word process_file__CallerProfNode0_19;
            MR_Word process_file__CalleeProfNode0_20;
            MR_String process_file__CallerName_21;
            MR_String process_file__CalleeName_22;
            MR_Word process_file__CallerProfNode_23;
            MR_Word process_file__CalleeProfNode_24;
            MR_Word process_file__STATE_VARIABLE_AddrDecl_41_41;
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_42_42;
            MR_Word process_file__STATE_VARIABLE_AddrDecl_43_43;
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_44_44;
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_45_45;
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_46_46;
            MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_49_49;
            MR_Word process_file__ProfNode0_65;
            MR_Box process_file__conv0_ProfNode0_65;

            {
              read__read_label_addr_3_p_0(&process_file__CalleeAddr_17);
            }
            {
              read__read_int_3_p_0(&process_file__Count_18);
            }
            {
              process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_32, process_file__CallerAddr_16, &process_file__conv0_ProfNode0_65);
            }
            if (process_file__succeeded)
              {
                process_file__ProfNode0_65 = ((MR_Word) process_file__conv0_ProfNode0_65);
                process_file__succeeded = MR_TRUE;
              }
            if (process_file__succeeded)
              {
                process_file__CallerProfNode0_19 = process_file__ProfNode0_65;
                process_file__STATE_VARIABLE_ProfNodeMap_42_42 = process_file__STATE_VARIABLE_ProfNodeMap_0_32;
                process_file__STATE_VARIABLE_AddrDecl_41_41 = process_file__STATE_VARIABLE_AddrDecl_0_34;
              }
            else
              {
                MR_String process_file__Str_66;
                MR_String process_file__V_78_78;

                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &process_file_scalar_common_1[0], process_file__CallerAddr_16, &process_file__V_78_78);
                }
                {
                  process_file__Str_66 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", process_file__V_78_78);
                }
                {
                  process_file__CallerProfNode0_19 = prof_info__prof_node_init_1_f_0(process_file__Str_66);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__CallerAddr_16, ((MR_Box) (process_file__CallerProfNode0_19)), process_file__STATE_VARIABLE_ProfNodeMap_0_32, &process_file__STATE_VARIABLE_ProfNodeMap_42_42);
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__Str_66)), ((MR_Box) (process_file__CallerAddr_16)), process_file__STATE_VARIABLE_AddrDecl_0_34, &process_file__STATE_VARIABLE_AddrDecl_41_41);
                }
              }
            {
              process_file__lookup_addr_6_p_0(process_file__CalleeAddr_17, &process_file__CalleeProfNode0_20, process_file__STATE_VARIABLE_AddrDecl_41_41, &process_file__STATE_VARIABLE_AddrDecl_43_43, process_file__STATE_VARIABLE_ProfNodeMap_42_42, &process_file__STATE_VARIABLE_ProfNodeMap_44_44);
            }
            {
              prof_info__prof_node_get_pred_name_2_p_0(process_file__CallerProfNode0_19, &process_file__CallerName_21);
            }
            {
              prof_info__prof_node_get_pred_name_2_p_0(process_file__CalleeProfNode0_20, &process_file__CalleeName_22);
            }
            {
              prof_info__prof_node_concat_to_child_4_p_0(process_file__CalleeName_22, process_file__Count_18, process_file__CallerProfNode0_19, &process_file__CallerProfNode_23);
            }
            process_file__TypeCtorInfo_55_55 = (MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(process_file__TypeCtorInfo_55_55, process_file__CallerAddr_16, ((MR_Box) (process_file__CallerProfNode_23)), process_file__STATE_VARIABLE_ProfNodeMap_44_44, &process_file__STATE_VARIABLE_ProfNodeMap_45_45);
            }
            process_file__succeeded = (process_file__CalleeAddr_17 == process_file__CallerAddr_16);
            if (process_file__succeeded)
              {
                prof_info__prof_node_set_self_calls_3_p_0(process_file__Count_18, process_file__CalleeProfNode0_20, &process_file__CalleeProfNode_24);
              }
            else
              {
                MR_Integer process_file__TotalCalls0_25;
                MR_Integer process_file__TotalCalls_26;
                MR_Word process_file__CalleeProfNode1_27;

                {
                  prof_info__prof_node_get_total_calls_2_p_0(process_file__CalleeProfNode0_20, &process_file__TotalCalls0_25);
                }
                process_file__TotalCalls_26 = (process_file__TotalCalls0_25 + process_file__Count_18);
                {
                  prof_info__prof_node_set_total_calls_3_p_0(process_file__TotalCalls_26, process_file__CalleeProfNode0_20, &process_file__CalleeProfNode1_27);
                }
                {
                  prof_info__prof_node_concat_to_parent_4_p_0(process_file__CallerName_21, process_file__Count_18, process_file__CalleeProfNode1_27, &process_file__CalleeProfNode_24);
                }
              }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(process_file__TypeCtorInfo_55_55, process_file__CalleeAddr_17, ((MR_Box) (process_file__CalleeProfNode_24)), process_file__STATE_VARIABLE_ProfNodeMap_45_45, &process_file__STATE_VARIABLE_ProfNodeMap_46_46);
            }
            switch (process_file__Dynamic_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                process_file__STATE_VARIABLE_DynamicCallGraph_49_49 = process_file__STATE_VARIABLE_DynamicCallGraph_0_30;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word process_file__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  MR_Word process_file__CallerKey_28;
                  MR_Word process_file__CalleeKey_29;
                  MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_47_47;
                  MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_48_48;

                  {
                    mercury__digraph__add_vertex_4_p_0(process_file__TypeCtorInfo_56_56, ((MR_Box) (process_file__CallerName_21)), &process_file__CallerKey_28, process_file__STATE_VARIABLE_DynamicCallGraph_0_30, &process_file__STATE_VARIABLE_DynamicCallGraph_47_47);
                  }
                  {
                    mercury__digraph__add_vertex_4_p_0(process_file__TypeCtorInfo_56_56, ((MR_Box) (process_file__CalleeName_22)), &process_file__CalleeKey_29, process_file__STATE_VARIABLE_DynamicCallGraph_47_47, &process_file__STATE_VARIABLE_DynamicCallGraph_48_48);
                  }
                  {
                    mercury__digraph__add_edge_4_p_0(process_file__TypeCtorInfo_56_56, process_file__CallerKey_28, process_file__CalleeKey_29, process_file__STATE_VARIABLE_DynamicCallGraph_48_48, &process_file__STATE_VARIABLE_DynamicCallGraph_49_49);
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_0__tmp_copy_30 = process_file__STATE_VARIABLE_DynamicCallGraph_49_49;
              MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_32 = process_file__STATE_VARIABLE_ProfNodeMap_46_46;
              MR_Word process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_34 = process_file__STATE_VARIABLE_AddrDecl_43_43;

              process_file__STATE_VARIABLE_AddrDecl_0_34 = process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_34;
              process_file__STATE_VARIABLE_ProfNodeMap_0_32 = process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_32;
              process_file__STATE_VARIABLE_DynamicCallGraph_0_30 = process_file__STATE_VARIABLE_DynamicCallGraph_0__tmp_copy_30;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
process_file__process_addr_pair_7_p_0(
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_17,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_18,
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_19,
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_20,
  MR_Word * process_file__DynamicCallGraph_10)
{
  {
    MR_bool process_file__succeeded;
    MR_Word process_file__Dynamic_12;
    MR_String process_file__PairFile_13;
    MR_Word process_file__Result_14;

    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &process_file__Dynamic_12);
    }
    {
      globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &process_file__PairFile_13);
    }
    {
      mercury__io__see_4_p_0(process_file__PairFile_13, &process_file__Result_14);
    }
    if ((process_file__Result_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word process_file__V_35_35;

        {
          process_file__V_35_35 = mercury__digraph__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
        {
          process_file__process_addr_pair_2_9_p_0(process_file__Dynamic_12, process_file__V_35_35, process_file__DynamicCallGraph_10, process_file__STATE_VARIABLE_ProfNodeMap_0_17, process_file__STATE_VARIABLE_ProfNodeMap_18, process_file__STATE_VARIABLE_AddrDecl_0_19, process_file__STATE_VARIABLE_AddrDecl_20);
        }
        {
          mercury__io__seen_2_p_0();
        }
      }
    else
      {
        MR_Word process_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), process_file__Result_14, (MR_Integer) 0)));
        MR_String process_file__ErrorStr_16;
        MR_String process_file__V_29_29;
        MR_String process_file__V_30_30;
        MR_String process_file__V_32_32;
        MR_String process_file__V_33_33;

        {
          process_file__V_33_33 = mercury__io__error_message_1_f_0(process_file__Error_15);
        }
        {
          process_file__V_32_32 = mercury__string__f_43_43_2_f_0(process_file__V_33_33, (MR_String) "\n");
        }
        {
          process_file__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", process_file__V_32_32);
        }
        {
          process_file__V_29_29 = mercury__string__f_43_43_2_f_0(process_file__PairFile_13, process_file__V_30_30);
        }
        {
          process_file__ErrorStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "error opening pair file \140", process_file__V_29_29);
        }
        {
          mercury__require__error_1_p_0(process_file__ErrorStr_16);
          return;
        }
      }
  }
}

static void MR_CALL 
process_file__process_addr_2_6_p_0(
  MR_Integer process_file__STATE_VARIABLE_TotalCounts_0_17,
  MR_Integer * process_file__STATE_VARIABLE_TotalCounts_18,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool process_file__succeeded;
        MR_Word process_file__MaybeLabelAddr_10;

        {
          read__maybe_read_label_addr_3_p_0(&process_file__MaybeLabelAddr_10);
        }
        if ((process_file__MaybeLabelAddr_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *process_file__STATE_VARIABLE_TotalCounts_18 = process_file__STATE_VARIABLE_TotalCounts_0_17;
            *process_file__STATE_VARIABLE_ProfNodeMap_20 = process_file__STATE_VARIABLE_ProfNodeMap_0_19;
          }
        else
          {
            MR_Integer process_file__LabelAddr_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), process_file__MaybeLabelAddr_10, (MR_Integer) 0)));
            MR_Integer process_file__Count_12;
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_25_25;
            MR_Integer process_file__STATE_VARIABLE_TotalCounts_26_26;
            MR_Word process_file__ProfNode0_13;
            MR_Box process_file__conv0_ProfNode0_13;

            {
              read__read_int_3_p_0(&process_file__Count_12);
            }
            {
              process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_19, process_file__LabelAddr_11, &process_file__conv0_ProfNode0_13);
            }
            if (process_file__succeeded)
              {
                process_file__ProfNode0_13 = ((MR_Word) process_file__conv0_ProfNode0_13);
                process_file__succeeded = MR_TRUE;
              }
            if (process_file__succeeded)
              {
                MR_Integer process_file__InitCount0_14;
                MR_Integer process_file__InitCount_15;
                MR_Word process_file__ProfNode_16;

                {
                  prof_info__prof_node_get_initial_counts_2_p_0(process_file__ProfNode0_13, &process_file__InitCount0_14);
                }
                process_file__InitCount_15 = (process_file__InitCount0_14 + process_file__Count_12);
                {
                  prof_info__prof_node_set_initial_counts_3_p_0(process_file__InitCount_15, process_file__ProfNode0_13, &process_file__ProfNode_16);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__ProfNode_16)), process_file__STATE_VARIABLE_ProfNodeMap_0_19, &process_file__STATE_VARIABLE_ProfNodeMap_25_25);
                }
                process_file__STATE_VARIABLE_TotalCounts_26_26 = (process_file__STATE_VARIABLE_TotalCounts_0_17 + process_file__Count_12);
              }
            else
              {
                MR_String process_file__V_44_44;

                {
                  mercury__io__write_string_3_p_0((MR_String) "\nWarning address ");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &process_file_scalar_common_1[0], process_file__LabelAddr_11, &process_file__V_44_44);
                }
                {
                  mercury__io__write_string_3_p_0(process_file__V_44_44);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " not found!  Ignoring address and continuing computation.\n");
                }
                process_file__STATE_VARIABLE_ProfNodeMap_25_25 = process_file__STATE_VARIABLE_ProfNodeMap_0_19;
                process_file__STATE_VARIABLE_TotalCounts_26_26 = process_file__STATE_VARIABLE_TotalCounts_0_17;
              }
            /* direct tailcall eliminated */
            {
              MR_Integer process_file__STATE_VARIABLE_TotalCounts_0__tmp_copy_17 = process_file__STATE_VARIABLE_TotalCounts_26_26;
              MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_19 = process_file__STATE_VARIABLE_ProfNodeMap_25_25;

              process_file__STATE_VARIABLE_ProfNodeMap_0_19 = process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_19;
              process_file__STATE_VARIABLE_TotalCounts_0_17 = process_file__STATE_VARIABLE_TotalCounts_0__tmp_copy_17;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
process_file__process_addr_8_p_0(
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20,
  MR_Word * process_file__WhatToProfile_10,
  MR_Float * process_file__Scale_11,
  MR_String * process_file__Units_12,
  MR_Integer * process_file__TotalCounts_13)
{
  {
    MR_bool process_file__succeeded;
    MR_String process_file__CountFile_15;
    MR_Word process_file__Result_16;

    {
      globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &process_file__CountFile_15);
    }
    {
      mercury__io__see_4_p_0(process_file__CountFile_15, &process_file__Result_16);
    }
    if ((process_file__Result_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          read__read_what_to_profile_3_p_0(process_file__WhatToProfile_10);
        }
        {
          read__read_float_3_p_0(process_file__Scale_11);
        }
        {
          read__read_string_3_p_0(process_file__Units_12);
        }
        {
          process_file__process_addr_2_6_p_0((MR_Integer) 0, process_file__TotalCounts_13, process_file__STATE_VARIABLE_ProfNodeMap_0_19, process_file__STATE_VARIABLE_ProfNodeMap_20);
        }
        {
          mercury__io__seen_2_p_0();
        }
      }
    else
      {
        MR_Word process_file__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), process_file__Result_16, (MR_Integer) 0)));
        MR_String process_file__ErrorMsg_18;

        {
          mercury__io__error_message_2_p_0(process_file__Error_17, &process_file__ErrorMsg_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\nWarning: error opening \140");
        }
        {
          mercury__io__write_string_3_p_0(process_file__CountFile_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
        {
          mercury__io__write_string_3_p_0(process_file__ErrorMsg_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "The generated profile will only include ");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "call counts.\n\n");
        }
        *process_file__TotalCounts_13 = (MR_Integer) 0;
        *process_file__WhatToProfile_10 = (MR_Integer) 3;
        *process_file__Scale_11 = (MR_Float) 1.0000000000000000;
        *process_file__Units_12 = (MR_String) "";
        *process_file__STATE_VARIABLE_ProfNodeMap_20 = process_file__STATE_VARIABLE_ProfNodeMap_0_19;
      }
  }
}

static void MR_CALL 
process_file__process_addr_decl_2_6_p_0(
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_16,
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_17,
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_18,
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool process_file__succeeded;
        MR_Word process_file__MaybeLabelAddr_10;

        {
          read__maybe_read_label_addr_3_p_0(&process_file__MaybeLabelAddr_10);
        }
        if ((process_file__MaybeLabelAddr_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *process_file__STATE_VARIABLE_AddrDecl_17 = process_file__STATE_VARIABLE_AddrDecl_0_16;
            *process_file__STATE_VARIABLE_ProfNodeMap_19 = process_file__STATE_VARIABLE_ProfNodeMap_0_18;
          }
        else
          {
            MR_Integer process_file__LabelAddr_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), process_file__MaybeLabelAddr_10, (MR_Integer) 0)));
            MR_String process_file__LabelName_12;
            MR_Word process_file__ProfNode_13;
            MR_Word process_file__STATE_VARIABLE_AddrDecl_24_24;
            MR_Word process_file__STATE_VARIABLE_AddrDecl_26_26;
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_28_28;
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_25_25;

            {
              read__read_label_name_3_p_0(&process_file__LabelName_12);
            }
            {
              process_file__ProfNode_13 = prof_info__prof_node_init_1_f_0(process_file__LabelName_12);
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__LabelName_12)), ((MR_Box) (process_file__LabelAddr_11)), process_file__STATE_VARIABLE_AddrDecl_0_16, &process_file__STATE_VARIABLE_AddrDecl_24_24);
            }
            {
              process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__ProfNode_13)), process_file__STATE_VARIABLE_ProfNodeMap_0_18, &process_file__STATE_VARIABLE_ProfNodeMap_25_25);
            }
            if (process_file__succeeded)
              {
                process_file__STATE_VARIABLE_ProfNodeMap_28_28 = process_file__STATE_VARIABLE_ProfNodeMap_25_25;
                process_file__STATE_VARIABLE_AddrDecl_26_26 = process_file__STATE_VARIABLE_AddrDecl_24_24;
              }
            else
              {
                MR_Word process_file__ProfNode0_14;
                MR_Word process_file__NewProfNode_15;
                MR_Word process_file__STATE_VARIABLE_ProfNodeMap_27_27;
                MR_Word process_file__ProfNode0_44;
                MR_Box process_file__conv0_ProfNode0_44;

                {
                  process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_18, process_file__LabelAddr_11, &process_file__conv0_ProfNode0_44);
                }
                if (process_file__succeeded)
                  {
                    process_file__ProfNode0_44 = ((MR_Word) process_file__conv0_ProfNode0_44);
                    process_file__succeeded = MR_TRUE;
                  }
                if (process_file__succeeded)
                  {
                    process_file__ProfNode0_14 = process_file__ProfNode0_44;
                    process_file__STATE_VARIABLE_ProfNodeMap_27_27 = process_file__STATE_VARIABLE_ProfNodeMap_0_18;
                    process_file__STATE_VARIABLE_AddrDecl_26_26 = process_file__STATE_VARIABLE_AddrDecl_24_24;
                  }
                else
                  {
                    MR_String process_file__Str_45;
                    MR_String process_file__V_57_57;

                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &process_file_scalar_common_1[0], process_file__LabelAddr_11, &process_file__V_57_57);
                    }
                    {
                      process_file__Str_45 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", process_file__V_57_57);
                    }
                    {
                      process_file__ProfNode0_14 = prof_info__prof_node_init_1_f_0(process_file__Str_45);
                    }
                    {
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__ProfNode0_14)), process_file__STATE_VARIABLE_ProfNodeMap_0_18, &process_file__STATE_VARIABLE_ProfNodeMap_27_27);
                    }
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__Str_45)), ((MR_Box) (process_file__LabelAddr_11)), process_file__STATE_VARIABLE_AddrDecl_24_24, &process_file__STATE_VARIABLE_AddrDecl_26_26);
                    }
                  }
                {
                  prof_info__prof_node_concat_to_name_list_3_p_0(process_file__LabelName_12, process_file__ProfNode0_14, &process_file__NewProfNode_15);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__NewProfNode_15)), process_file__STATE_VARIABLE_ProfNodeMap_27_27, &process_file__STATE_VARIABLE_ProfNodeMap_28_28);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_16 = process_file__STATE_VARIABLE_AddrDecl_26_26;
              MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_18 = process_file__STATE_VARIABLE_ProfNodeMap_28_28;

              process_file__STATE_VARIABLE_ProfNodeMap_0_18 = process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_18;
              process_file__STATE_VARIABLE_AddrDecl_0_16 = process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_16;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
process_file__process_profiling_data_files_4_p_0(
  MR_Word * process_file__Prof_5,
  MR_Word * process_file__DynamicCallGraph_6)
{
  {
    MR_bool process_file__succeeded;
    MR_Word process_file__VVerbose_8;
    MR_String process_file__DeclFile_9;
    MR_String process_file__CountFile_10;
    MR_String process_file__PairFile_11;
    MR_Word process_file__AddrDeclMap0_13;
    MR_Word process_file__ProfNodeMap0_14;
    MR_Word process_file__ProfNodeMap1_15;
    MR_Word process_file__WhatToProfile_16;
    MR_Float process_file__Scale_17;
    MR_String process_file__Units_18;
    MR_Integer process_file__TotalCounts_19;
    MR_Word process_file__ProfNodeMap_20;
    MR_Word process_file__AddrDeclMap_21;
    MR_Word process_file__CycleMap_22;
    MR_Word process_file__Globals0_23;
    MR_Word process_file__Globals_24;
    MR_String process_file__DeclFile_70;
    MR_Word process_file__Result_71;
    MR_Word process_file__Dynamic_12;

    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &process_file__VVerbose_8);
    }
    {
      globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &process_file__DeclFile_9);
    }
    {
      globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &process_file__CountFile_10);
    }
    {
      globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &process_file__PairFile_11);
    }
    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &process_file__Dynamic_12);
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "\n\t% Processing ");
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, process_file__DeclFile_9);
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "...");
    }
    {
      globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &process_file__DeclFile_70);
    }
    {
      mercury__io__see_4_p_0(process_file__DeclFile_70, &process_file__Result_71);
    }
    if ((process_file__Result_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word process_file__TypeCtorInfo_29_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word process_file__V_84_84;
        MR_Word process_file__V_85_85;

        {
          process_file__V_84_84 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, process_file__TypeCtorInfo_29_89);
        }
        {
          process_file__V_85_85 = mercury__map__init_0_f_0(process_file__TypeCtorInfo_29_89, (MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0);
        }
        {
          process_file__process_addr_decl_2_6_p_0(process_file__V_84_84, &process_file__AddrDeclMap0_13, process_file__V_85_85, &process_file__ProfNodeMap0_14);
        }
        {
          mercury__io__seen_2_p_0();
        }
      }
    else
      {
        MR_Word process_file__Error_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), process_file__Result_71, (MR_Integer) 0)));
        MR_String process_file__ErrorStr_73;
        MR_String process_file__V_78_78;
        MR_String process_file__V_79_79;
        MR_String process_file__V_81_81;
        MR_String process_file__V_82_82;

        {
          process_file__V_82_82 = mercury__io__error_message_1_f_0(process_file__Error_72);
        }
        {
          process_file__V_81_81 = mercury__string__f_43_43_2_f_0(process_file__V_82_82, (MR_String) "\n");
        }
        {
          process_file__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", process_file__V_81_81);
        }
        {
          process_file__V_78_78 = mercury__string__f_43_43_2_f_0(process_file__DeclFile_70, process_file__V_79_79);
        }
        {
          process_file__ErrorStr_73 = mercury__string__f_43_43_2_f_0((MR_String) "error opening declaration file \140", process_file__V_78_78);
        }
        {
          mercury__require__error_1_p_0(process_file__ErrorStr_73);
          return;
        }
      }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) " done.\n");
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "\t% Processing ");
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, process_file__CountFile_10);
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "...");
    }
    {
      process_file__process_addr_8_p_0(process_file__ProfNodeMap0_14, &process_file__ProfNodeMap1_15, &process_file__WhatToProfile_16, &process_file__Scale_17, &process_file__Units_18, &process_file__TotalCounts_19);
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) " done.\n");
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "\t% Processing ");
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, process_file__PairFile_11);
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "...");
    }
    {
      process_file__process_addr_pair_7_p_0(process_file__ProfNodeMap1_15, &process_file__ProfNodeMap_20, process_file__AddrDeclMap0_13, &process_file__AddrDeclMap_21, process_file__DynamicCallGraph_6);
    }
    {
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) " done.\n");
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &process_file__CycleMap_22);
    }
    {
      prof_info__prof_set_entire_7_p_0(process_file__Scale_17, process_file__Units_18, process_file__TotalCounts_19, process_file__AddrDeclMap_21, process_file__ProfNodeMap_20, process_file__CycleMap_22, process_file__Prof_5);
    }
    {
      globals__io_get_globals_3_p_0(&process_file__Globals0_23);
    }
    {
      globals__set_what_to_profile_3_p_0(process_file__WhatToProfile_16, process_file__Globals0_23, &process_file__Globals_24);
    }
    {
      globals__io_set_globals_3_p_0(process_file__Globals_24);
    }
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

/* :- end_module process_file. */
