/*
** Automatically generated from `process_file.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "random.mih"
#include "read.mih"
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




#line 351 "process_file.m"
static void MR_CALL 
process_file__lookup_addr_6_p_0(
#line 351 "process_file.m"
  MR_Integer process_file__Addr_7,
#line 351 "process_file.m"
  MR_Word * process_file__ProfNode_8,
#line 351 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDeclMap_0_13,
#line 351 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDeclMap_14,
#line 351 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_15,
#line 351 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_16);

#line 249 "process_file.m"
static void MR_CALL 
process_file__process_addr_pair_2_9_p_0(
#line 249 "process_file.m"
  MR_Word process_file__Dynamic_10,
#line 249 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_0_30,
#line 249 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_DynamicCallGraph_31,
#line 249 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_32,
#line 249 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_33,
#line 249 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_34,
#line 249 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_35);

#line 229 "process_file.m"
static void MR_CALL 
process_file__process_addr_pair_7_p_0(
#line 229 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_17,
#line 229 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_18,
#line 229 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_19,
#line 229 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_20,
#line 229 "process_file.m"
  MR_Word * process_file__DynamicCallGraph_10);

#line 194 "process_file.m"
static void MR_CALL 
process_file__process_addr_2_6_p_0(
#line 194 "process_file.m"
  MR_Integer process_file__STATE_VARIABLE_TotalCounts_0_17,
#line 194 "process_file.m"
  MR_Integer * process_file__STATE_VARIABLE_TotalCounts_18,
#line 194 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
#line 194 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20);

#line 161 "process_file.m"
static void MR_CALL 
process_file__process_addr_8_p_0(
#line 161 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
#line 161 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20,
#line 161 "process_file.m"
  MR_Word * process_file__WhatToProfile_10,
#line 161 "process_file.m"
  MR_Float * process_file__Scale_11,
#line 161 "process_file.m"
  MR_String * process_file__Units_12,
#line 161 "process_file.m"
  MR_Integer * process_file__TotalCounts_13);

#line 129 "process_file.m"
static void MR_CALL 
process_file__process_addr_decl_2_6_p_0(
#line 129 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_16,
#line 129 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_17,
#line 129 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_18,
#line 129 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_19);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 351 "process_file.m"
static void MR_CALL 
process_file__lookup_addr_6_p_0(
#line 351 "process_file.m"
  MR_Integer process_file__Addr_7,
#line 351 "process_file.m"
  MR_Word * process_file__ProfNode_8,
#line 351 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDeclMap_0_13,
#line 351 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDeclMap_14,
#line 351 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_15,
#line 351 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_16)
#line 351 "process_file.m"
{
#line 357 "process_file.m"
  {
#line 357 "process_file.m"
    MR_bool process_file__succeeded;
#line 357 "process_file.m"
    MR_Word process_file__ProfNode0_11;
#line 355 "process_file.m"
    MR_Box process_file__conv0_ProfNode0_11;

#line 355 "process_file.m"
    {
#line 355 "process_file.m"
      process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_15, process_file__Addr_7, &process_file__conv0_ProfNode0_11);
    }
#line 355 "process_file.m"
    if (process_file__succeeded)
#line 355 "process_file.m"
      {
#line 355 "process_file.m"
        process_file__ProfNode0_11 = ((MR_Word) process_file__conv0_ProfNode0_11);
#line 355 "process_file.m"
        process_file__succeeded = MR_TRUE;
#line 355 "process_file.m"
      }
#line 357 "process_file.m"
    if (process_file__succeeded)
#line 356 "process_file.m"
      {
#line 356 "process_file.m"
        *process_file__ProfNode_8 = process_file__ProfNode0_11;
#line 356 "process_file.m"
        *process_file__STATE_VARIABLE_ProfNodeMap_16 = process_file__STATE_VARIABLE_ProfNodeMap_0_15;
#line 356 "process_file.m"
        *process_file__STATE_VARIABLE_AddrDeclMap_14 = process_file__STATE_VARIABLE_AddrDeclMap_0_13;
#line 356 "process_file.m"
      }
#line 357 "process_file.m"
    else
#line 358 "process_file.m"
      {
#line 358 "process_file.m"
        MR_String process_file__Str_12;
#line 358 "process_file.m"
        MR_String process_file__V_28_28;

#line 242 "process_file.c"
        {
#line 244 "process_file.c"
          process_file__V_28_28 = mercury__string__int_to_string_1_f_0(process_file__Addr_7);
        }
#line 247 "process_file.c"
        {
#line 249 "process_file.c"
          process_file__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", process_file__V_28_28);
        }
#line 359 "process_file.m"
        {
#line 359 "process_file.m"
          *process_file__ProfNode_8 = prof_info__prof_node_init_1_f_0(process_file__Str_12);
        }
#line 360 "process_file.m"
        {
#line 360 "process_file.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__Addr_7, ((MR_Box) (*process_file__ProfNode_8)), process_file__STATE_VARIABLE_ProfNodeMap_0_15, process_file__STATE_VARIABLE_ProfNodeMap_16);
        }
#line 361 "process_file.m"
        {
#line 361 "process_file.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__Str_12)), ((MR_Box) (process_file__Addr_7)), process_file__STATE_VARIABLE_AddrDeclMap_0_13, process_file__STATE_VARIABLE_AddrDeclMap_14);
#line 361 "process_file.m"
          return;
        }
#line 358 "process_file.m"
      }
#line 357 "process_file.m"
  }
#line 351 "process_file.m"
}

#line 249 "process_file.m"
static void MR_CALL 
process_file__process_addr_pair_2_9_p_0(
#line 249 "process_file.m"
  MR_Word process_file__Dynamic_10,
#line 249 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_0_30,
#line 249 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_DynamicCallGraph_31,
#line 249 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_32,
#line 249 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_33,
#line 249 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_34,
#line 249 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_35)
#line 249 "process_file.m"
{
#line 255 "process_file.m"
  while (MR_TRUE)
#line 255 "process_file.m"
    {
#line 255 "process_file.m"
      /* tailcall optimized into a loop */
#line 255 "process_file.m"
      {
#line 255 "process_file.m"
        MR_bool process_file__succeeded;
#line 255 "process_file.m"
        MR_Word process_file__MaybeLabelAddr_15;

#line 256 "process_file.m"
        {
#line 256 "process_file.m"
          read__maybe_read_label_addr_3_p_0(&process_file__MaybeLabelAddr_15);
        }
#line 299 "process_file.m"
        if ((process_file__MaybeLabelAddr_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "process_file.m"
          {
#line 300 "process_file.m"
            *process_file__STATE_VARIABLE_DynamicCallGraph_31 = process_file__STATE_VARIABLE_DynamicCallGraph_0_30;
#line 300 "process_file.m"
            *process_file__STATE_VARIABLE_ProfNodeMap_33 = process_file__STATE_VARIABLE_ProfNodeMap_0_32;
#line 300 "process_file.m"
            *process_file__STATE_VARIABLE_AddrDecl_35 = process_file__STATE_VARIABLE_AddrDecl_0_34;
#line 300 "process_file.m"
          }
#line 299 "process_file.m"
        else
#line 258 "process_file.m"
          {
#line 258 "process_file.m"
            MR_Word process_file__TypeCtorInfo_55_55;
#line 258 "process_file.m"
            MR_Integer process_file__CallerAddr_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), process_file__MaybeLabelAddr_15, (MR_Integer) 0)));
#line 258 "process_file.m"
            MR_Integer process_file__CalleeAddr_17;
#line 258 "process_file.m"
            MR_Integer process_file__Count_18;
#line 258 "process_file.m"
            MR_Word process_file__CallerProfNode0_19;
#line 258 "process_file.m"
            MR_Word process_file__CalleeProfNode0_20;
#line 258 "process_file.m"
            MR_String process_file__CallerName_21;
#line 258 "process_file.m"
            MR_String process_file__CalleeName_22;
#line 258 "process_file.m"
            MR_Word process_file__CallerProfNode_23;
#line 258 "process_file.m"
            MR_Word process_file__CalleeProfNode_27;
#line 258 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_AddrDecl_41_41;
#line 258 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_42_42;
#line 258 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_AddrDecl_43_43;
#line 258 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_44_44;
#line 258 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_45_45;
#line 258 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_46_46;
#line 258 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_49_49;
#line 357 "process_file.m"
            MR_Word process_file__ProfNode0_65;
#line 355 "process_file.m"
            MR_Box process_file__conv0_ProfNode0_65;

#line 259 "process_file.m"
            {
#line 259 "process_file.m"
              read__read_label_addr_3_p_0(&process_file__CalleeAddr_17);
            }
#line 260 "process_file.m"
            {
#line 260 "process_file.m"
              read__read_int_3_p_0(&process_file__Count_18);
            }
#line 355 "process_file.m"
            {
#line 355 "process_file.m"
              process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_32, process_file__CallerAddr_16, &process_file__conv0_ProfNode0_65);
            }
#line 355 "process_file.m"
            if (process_file__succeeded)
#line 355 "process_file.m"
              {
#line 355 "process_file.m"
                process_file__ProfNode0_65 = ((MR_Word) process_file__conv0_ProfNode0_65);
#line 355 "process_file.m"
                process_file__succeeded = MR_TRUE;
#line 355 "process_file.m"
              }
#line 357 "process_file.m"
            if (process_file__succeeded)
#line 356 "process_file.m"
              {
#line 356 "process_file.m"
                process_file__CallerProfNode0_19 = process_file__ProfNode0_65;
#line 356 "process_file.m"
                process_file__STATE_VARIABLE_ProfNodeMap_42_42 = process_file__STATE_VARIABLE_ProfNodeMap_0_32;
#line 356 "process_file.m"
                process_file__STATE_VARIABLE_AddrDecl_41_41 = process_file__STATE_VARIABLE_AddrDecl_0_34;
#line 356 "process_file.m"
              }
#line 357 "process_file.m"
            else
#line 358 "process_file.m"
              {
#line 358 "process_file.m"
                MR_String process_file__Str_66;
#line 358 "process_file.m"
                MR_String process_file__V_78_78;

#line 414 "process_file.c"
                {
#line 416 "process_file.c"
                  process_file__V_78_78 = mercury__string__int_to_string_1_f_0(process_file__CallerAddr_16);
                }
#line 419 "process_file.c"
                {
#line 421 "process_file.c"
                  process_file__Str_66 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", process_file__V_78_78);
                }
#line 359 "process_file.m"
                {
#line 359 "process_file.m"
                  process_file__CallerProfNode0_19 = prof_info__prof_node_init_1_f_0(process_file__Str_66);
                }
#line 360 "process_file.m"
                {
#line 360 "process_file.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__CallerAddr_16, ((MR_Box) (process_file__CallerProfNode0_19)), process_file__STATE_VARIABLE_ProfNodeMap_0_32, &process_file__STATE_VARIABLE_ProfNodeMap_42_42);
                }
#line 361 "process_file.m"
                {
#line 361 "process_file.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__Str_66)), ((MR_Box) (process_file__CallerAddr_16)), process_file__STATE_VARIABLE_AddrDecl_0_34, &process_file__STATE_VARIABLE_AddrDecl_41_41);
                }
#line 358 "process_file.m"
              }
#line 264 "process_file.m"
            {
#line 264 "process_file.m"
              process_file__lookup_addr_6_p_0(process_file__CalleeAddr_17, &process_file__CalleeProfNode0_20, process_file__STATE_VARIABLE_AddrDecl_41_41, &process_file__STATE_VARIABLE_AddrDecl_43_43, process_file__STATE_VARIABLE_ProfNodeMap_42_42, &process_file__STATE_VARIABLE_ProfNodeMap_44_44);
            }
#line 265 "process_file.m"
            {
#line 265 "process_file.m"
              prof_info__prof_node_get_pred_name_2_p_0(process_file__CallerProfNode0_19, &process_file__CallerName_21);
            }
#line 266 "process_file.m"
            {
#line 266 "process_file.m"
              prof_info__prof_node_get_pred_name_2_p_0(process_file__CalleeProfNode0_20, &process_file__CalleeName_22);
            }
#line 269 "process_file.m"
            {
#line 269 "process_file.m"
              prof_info__prof_node_concat_to_child_4_p_0(process_file__CalleeName_22, process_file__Count_18, process_file__CallerProfNode0_19, &process_file__CallerProfNode_23);
            }
#line 461 "process_file.c"
            process_file__TypeCtorInfo_55_55 = (MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0;
#line 271 "process_file.m"
            {
#line 271 "process_file.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(process_file__TypeCtorInfo_55_55, process_file__CallerAddr_16, ((MR_Box) (process_file__CallerProfNode_23)), process_file__STATE_VARIABLE_ProfNodeMap_44_44, &process_file__STATE_VARIABLE_ProfNodeMap_45_45);
            }
#line 274 "process_file.m"
            process_file__succeeded = (process_file__CalleeAddr_17 == process_file__CallerAddr_16);
#line 274 "process_file.m"
            process_file__succeeded = !(process_file__succeeded);
#line 281 "process_file.m"
            if (process_file__succeeded)
#line 275 "process_file.m"
              {
#line 275 "process_file.m"
                MR_Integer process_file__TotalCalls0_24;
#line 275 "process_file.m"
                MR_Integer process_file__TotalCalls_25;
#line 275 "process_file.m"
                MR_Word process_file__CalleeProfNode1_26;

#line 275 "process_file.m"
                {
#line 275 "process_file.m"
                  prof_info__prof_node_get_total_calls_2_p_0(process_file__CalleeProfNode0_20, &process_file__TotalCalls0_24);
                }
#line 276 "process_file.m"
                process_file__TotalCalls_25 = (process_file__TotalCalls0_24 + process_file__Count_18);
#line 277 "process_file.m"
                {
#line 277 "process_file.m"
                  prof_info__prof_node_set_total_calls_3_p_0(process_file__TotalCalls_25, process_file__CalleeProfNode0_20, &process_file__CalleeProfNode1_26);
                }
#line 279 "process_file.m"
                {
#line 279 "process_file.m"
                  prof_info__prof_node_concat_to_parent_4_p_0(process_file__CallerName_21, process_file__Count_18, process_file__CalleeProfNode1_26, &process_file__CalleeProfNode_27);
                }
#line 275 "process_file.m"
              }
#line 281 "process_file.m"
            else
#line 282 "process_file.m"
              {
#line 282 "process_file.m"
                prof_info__prof_node_set_self_calls_3_p_0(process_file__Count_18, process_file__CalleeProfNode0_20, &process_file__CalleeProfNode_27);
              }
#line 286 "process_file.m"
            {
#line 286 "process_file.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(process_file__TypeCtorInfo_55_55, process_file__CalleeAddr_17, ((MR_Box) (process_file__CalleeProfNode_27)), process_file__STATE_VARIABLE_ProfNodeMap_45_45, &process_file__STATE_VARIABLE_ProfNodeMap_46_46);
            }
#line 294 "process_file.m"
            if ((process_file__Dynamic_10 == (MR_Integer) 0))
#line 295 "process_file.m"
              process_file__STATE_VARIABLE_DynamicCallGraph_49_49 = process_file__STATE_VARIABLE_DynamicCallGraph_0_30;
#line 294 "process_file.m"
            else
#line 290 "process_file.m"
              {
#line 290 "process_file.m"
                MR_Word process_file__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "process_file.m"
                MR_Word process_file__CallerKey_28;
#line 290 "process_file.m"
                MR_Word process_file__CalleeKey_29;
#line 290 "process_file.m"
                MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_47_47;
#line 290 "process_file.m"
                MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_48_48;

#line 291 "process_file.m"
                {
#line 291 "process_file.m"
                  mercury__digraph__add_vertex_4_p_0(process_file__TypeCtorInfo_56_56, ((MR_Box) (process_file__CallerName_21)), &process_file__CallerKey_28, process_file__STATE_VARIABLE_DynamicCallGraph_0_30, &process_file__STATE_VARIABLE_DynamicCallGraph_47_47);
                }
#line 292 "process_file.m"
                {
#line 292 "process_file.m"
                  mercury__digraph__add_vertex_4_p_0(process_file__TypeCtorInfo_56_56, ((MR_Box) (process_file__CalleeName_22)), &process_file__CalleeKey_29, process_file__STATE_VARIABLE_DynamicCallGraph_47_47, &process_file__STATE_VARIABLE_DynamicCallGraph_48_48);
                }
#line 293 "process_file.m"
                {
#line 293 "process_file.m"
                  mercury__digraph__add_edge_4_p_0(process_file__TypeCtorInfo_56_56, process_file__CallerKey_28, process_file__CalleeKey_29, process_file__STATE_VARIABLE_DynamicCallGraph_48_48, &process_file__STATE_VARIABLE_DynamicCallGraph_49_49);
                }
#line 290 "process_file.m"
              }
#line 297 "process_file.m"
            /* direct tailcall eliminated */
#line 297 "process_file.m"
            {
#line 297 "process_file.m"
              MR_Word process_file__STATE_VARIABLE_DynamicCallGraph_0__tmp_copy_30 = process_file__STATE_VARIABLE_DynamicCallGraph_49_49;
#line 297 "process_file.m"
              MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_32 = process_file__STATE_VARIABLE_ProfNodeMap_46_46;
#line 297 "process_file.m"
              MR_Word process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_34 = process_file__STATE_VARIABLE_AddrDecl_43_43;

#line 297 "process_file.m"
              process_file__STATE_VARIABLE_AddrDecl_0_34 = process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_34;
#line 297 "process_file.m"
              process_file__STATE_VARIABLE_ProfNodeMap_0_32 = process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_32;
#line 297 "process_file.m"
              process_file__STATE_VARIABLE_DynamicCallGraph_0_30 = process_file__STATE_VARIABLE_DynamicCallGraph_0__tmp_copy_30;
#line 297 "process_file.m"
            }
#line 297 "process_file.m"
            continue;
#line 258 "process_file.m"
          }
#line 255 "process_file.m"
      }
#line 255 "process_file.m"
      break;
#line 255 "process_file.m"
    }
#line 249 "process_file.m"
}

#line 229 "process_file.m"
static void MR_CALL 
process_file__process_addr_pair_7_p_0(
#line 229 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_17,
#line 229 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_18,
#line 229 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_19,
#line 229 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_20,
#line 229 "process_file.m"
  MR_Word * process_file__DynamicCallGraph_10)
#line 229 "process_file.m"
{
#line 233 "process_file.m"
  {
#line 233 "process_file.m"
    MR_bool process_file__succeeded;
#line 233 "process_file.m"
    MR_Word process_file__Dynamic_12;
#line 233 "process_file.m"
    MR_String process_file__PairFile_13;
#line 233 "process_file.m"
    MR_Word process_file__Result_14;

#line 234 "process_file.m"
    {
#line 234 "process_file.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &process_file__Dynamic_12);
    }
#line 235 "process_file.m"
    {
#line 235 "process_file.m"
      globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &process_file__PairFile_13);
    }
#line 236 "process_file.m"
    {
#line 236 "process_file.m"
      mercury__io__see_4_p_0(process_file__PairFile_13, &process_file__Result_14);
    }
#line 242 "process_file.m"
    if ((process_file__Result_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "process_file.m"
      {
#line 238 "process_file.m"
        MR_Word process_file__V_35_35;

#line 239 "process_file.m"
        {
#line 239 "process_file.m"
          process_file__V_35_35 = mercury__digraph__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 239 "process_file.m"
        {
#line 239 "process_file.m"
          process_file__process_addr_pair_2_9_p_0(process_file__Dynamic_12, process_file__V_35_35, process_file__DynamicCallGraph_10, process_file__STATE_VARIABLE_ProfNodeMap_0_17, process_file__STATE_VARIABLE_ProfNodeMap_18, process_file__STATE_VARIABLE_AddrDecl_0_19, process_file__STATE_VARIABLE_AddrDecl_20);
        }
#line 241 "process_file.m"
        {
#line 241 "process_file.m"
          mercury__io__seen_2_p_0();
#line 241 "process_file.m"
          return;
        }
#line 238 "process_file.m"
      }
#line 242 "process_file.m"
    else
#line 243 "process_file.m"
      {
#line 243 "process_file.m"
        MR_Word process_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), process_file__Result_14, (MR_Integer) 0)));
#line 243 "process_file.m"
        MR_String process_file__ErrorStr_16;
#line 243 "process_file.m"
        MR_String process_file__V_29_29;
#line 243 "process_file.m"
        MR_String process_file__V_30_30;
#line 243 "process_file.m"
        MR_String process_file__V_32_32;
#line 243 "process_file.m"
        MR_String process_file__V_33_33;

#line 245 "process_file.m"
        {
#line 245 "process_file.m"
          process_file__V_33_33 = mercury__io__error_message_1_f_0(process_file__Error_15);
        }
#line 245 "process_file.m"
        {
#line 245 "process_file.m"
          process_file__V_32_32 = mercury__string__f_43_43_2_f_0(process_file__V_33_33, (MR_String) "\n");
        }
#line 244 "process_file.m"
        {
#line 244 "process_file.m"
          process_file__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", process_file__V_32_32);
        }
#line 244 "process_file.m"
        {
#line 244 "process_file.m"
          process_file__V_29_29 = mercury__string__f_43_43_2_f_0(process_file__PairFile_13, process_file__V_30_30);
        }
#line 244 "process_file.m"
        {
#line 244 "process_file.m"
          process_file__ErrorStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "error opening pair file \140", process_file__V_29_29);
        }
#line 246 "process_file.m"
        {
#line 246 "process_file.m"
          mercury__require__error_1_p_0(process_file__ErrorStr_16);
#line 246 "process_file.m"
          return;
        }
#line 243 "process_file.m"
      }
#line 233 "process_file.m"
  }
#line 229 "process_file.m"
}

#line 194 "process_file.m"
static void MR_CALL 
process_file__process_addr_2_6_p_0(
#line 194 "process_file.m"
  MR_Integer process_file__STATE_VARIABLE_TotalCounts_0_17,
#line 194 "process_file.m"
  MR_Integer * process_file__STATE_VARIABLE_TotalCounts_18,
#line 194 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
#line 194 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20)
#line 194 "process_file.m"
{
#line 197 "process_file.m"
  while (MR_TRUE)
#line 197 "process_file.m"
    {
#line 197 "process_file.m"
      /* tailcall optimized into a loop */
#line 197 "process_file.m"
      {
#line 197 "process_file.m"
        MR_bool process_file__succeeded;
#line 197 "process_file.m"
        MR_Word process_file__MaybeLabelAddr_10;

#line 198 "process_file.m"
        {
#line 198 "process_file.m"
          read__maybe_read_label_addr_3_p_0(&process_file__MaybeLabelAddr_10);
        }
#line 217 "process_file.m"
        if ((process_file__MaybeLabelAddr_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "process_file.m"
          {
#line 218 "process_file.m"
            *process_file__STATE_VARIABLE_TotalCounts_18 = process_file__STATE_VARIABLE_TotalCounts_0_17;
#line 218 "process_file.m"
            *process_file__STATE_VARIABLE_ProfNodeMap_20 = process_file__STATE_VARIABLE_ProfNodeMap_0_19;
#line 218 "process_file.m"
          }
#line 217 "process_file.m"
        else
#line 200 "process_file.m"
          {
#line 200 "process_file.m"
            MR_Integer process_file__LabelAddr_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), process_file__MaybeLabelAddr_10, (MR_Integer) 0)));
#line 200 "process_file.m"
            MR_Integer process_file__Count_12;
#line 200 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_25_25;
#line 200 "process_file.m"
            MR_Integer process_file__STATE_VARIABLE_TotalCounts_26_26;
#line 211 "process_file.m"
            MR_Word process_file__ProfNode0_13;
#line 205 "process_file.m"
            MR_Box process_file__conv0_ProfNode0_13;

#line 201 "process_file.m"
            {
#line 201 "process_file.m"
              read__read_int_3_p_0(&process_file__Count_12);
            }
#line 205 "process_file.m"
            {
#line 205 "process_file.m"
              process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_19, process_file__LabelAddr_11, &process_file__conv0_ProfNode0_13);
            }
#line 205 "process_file.m"
            if (process_file__succeeded)
#line 205 "process_file.m"
              {
#line 205 "process_file.m"
                process_file__ProfNode0_13 = ((MR_Word) process_file__conv0_ProfNode0_13);
#line 205 "process_file.m"
                process_file__succeeded = MR_TRUE;
#line 205 "process_file.m"
              }
#line 211 "process_file.m"
            if (process_file__succeeded)
#line 206 "process_file.m"
              {
#line 206 "process_file.m"
                MR_Integer process_file__InitCount0_14;
#line 206 "process_file.m"
                MR_Integer process_file__InitCount_15;
#line 206 "process_file.m"
                MR_Word process_file__ProfNode_16;

#line 206 "process_file.m"
                {
#line 206 "process_file.m"
                  prof_info__prof_node_get_initial_counts_2_p_0(process_file__ProfNode0_13, &process_file__InitCount0_14);
                }
#line 207 "process_file.m"
                process_file__InitCount_15 = (process_file__InitCount0_14 + process_file__Count_12);
#line 208 "process_file.m"
                {
#line 208 "process_file.m"
                  prof_info__prof_node_set_initial_counts_3_p_0(process_file__InitCount_15, process_file__ProfNode0_13, &process_file__ProfNode_16);
                }
#line 209 "process_file.m"
                {
#line 209 "process_file.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__ProfNode_16)), process_file__STATE_VARIABLE_ProfNodeMap_0_19, &process_file__STATE_VARIABLE_ProfNodeMap_25_25);
                }
#line 210 "process_file.m"
                process_file__STATE_VARIABLE_TotalCounts_26_26 = (process_file__STATE_VARIABLE_TotalCounts_0_17 + process_file__Count_12);
#line 206 "process_file.m"
              }
#line 211 "process_file.m"
            else
#line 212 "process_file.m"
              {
#line 212 "process_file.m"
                MR_String process_file__V_42_42;
#line 212 "process_file.m"
                MR_String process_file__V_43_43;
#line 212 "process_file.m"
                MR_String process_file__V_45_45;

#line 826 "process_file.c"
                {
#line 828 "process_file.c"
                  process_file__V_42_42 = mercury__string__int_to_string_1_f_0(process_file__LabelAddr_11);
                }
#line 831 "process_file.c"
                {
#line 833 "process_file.c"
                  process_file__V_43_43 = mercury__string__f_43_43_2_f_0(process_file__V_42_42, (MR_String) " not found!  Ignoring address and continuing computation.\n");
                }
#line 836 "process_file.c"
                {
#line 838 "process_file.c"
                  process_file__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "\nWarning address ", process_file__V_43_43);
                }
#line 841 "process_file.c"
                {
#line 843 "process_file.c"
                  mercury__io__write_string_3_p_0(process_file__V_45_45);
                }
#line 212 "process_file.m"
                process_file__STATE_VARIABLE_ProfNodeMap_25_25 = process_file__STATE_VARIABLE_ProfNodeMap_0_19;
#line 212 "process_file.m"
                process_file__STATE_VARIABLE_TotalCounts_26_26 = process_file__STATE_VARIABLE_TotalCounts_0_17;
#line 212 "process_file.m"
              }
#line 216 "process_file.m"
            /* direct tailcall eliminated */
#line 216 "process_file.m"
            {
#line 216 "process_file.m"
              MR_Integer process_file__STATE_VARIABLE_TotalCounts_0__tmp_copy_17 = process_file__STATE_VARIABLE_TotalCounts_26_26;
#line 216 "process_file.m"
              MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_19 = process_file__STATE_VARIABLE_ProfNodeMap_25_25;

#line 216 "process_file.m"
              process_file__STATE_VARIABLE_ProfNodeMap_0_19 = process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_19;
#line 216 "process_file.m"
              process_file__STATE_VARIABLE_TotalCounts_0_17 = process_file__STATE_VARIABLE_TotalCounts_0__tmp_copy_17;
#line 216 "process_file.m"
            }
#line 216 "process_file.m"
            continue;
#line 200 "process_file.m"
          }
#line 197 "process_file.m"
      }
#line 197 "process_file.m"
      break;
#line 197 "process_file.m"
    }
#line 194 "process_file.m"
}

#line 161 "process_file.m"
static void MR_CALL 
process_file__process_addr_8_p_0(
#line 161 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_19,
#line 161 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_20,
#line 161 "process_file.m"
  MR_Word * process_file__WhatToProfile_10,
#line 161 "process_file.m"
  MR_Float * process_file__Scale_11,
#line 161 "process_file.m"
  MR_String * process_file__Units_12,
#line 161 "process_file.m"
  MR_Integer * process_file__TotalCounts_13)
#line 161 "process_file.m"
{
#line 165 "process_file.m"
  {
#line 165 "process_file.m"
    MR_bool process_file__succeeded;
#line 165 "process_file.m"
    MR_String process_file__CountFile_15;
#line 165 "process_file.m"
    MR_Word process_file__Result_16;

#line 166 "process_file.m"
    {
#line 166 "process_file.m"
      globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &process_file__CountFile_15);
    }
#line 167 "process_file.m"
    {
#line 167 "process_file.m"
      mercury__io__see_4_p_0(process_file__CountFile_15, &process_file__Result_16);
    }
#line 175 "process_file.m"
    if ((process_file__Result_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "process_file.m"
      {
#line 170 "process_file.m"
        {
#line 170 "process_file.m"
          read__read_what_to_profile_3_p_0(process_file__WhatToProfile_10);
        }
#line 171 "process_file.m"
        {
#line 171 "process_file.m"
          read__read_float_3_p_0(process_file__Scale_11);
        }
#line 172 "process_file.m"
        {
#line 172 "process_file.m"
          read__read_string_3_p_0(process_file__Units_12);
        }
#line 173 "process_file.m"
        {
#line 173 "process_file.m"
          process_file__process_addr_2_6_p_0((MR_Integer) 0, process_file__TotalCounts_13, process_file__STATE_VARIABLE_ProfNodeMap_0_19, process_file__STATE_VARIABLE_ProfNodeMap_20);
        }
#line 174 "process_file.m"
        {
#line 174 "process_file.m"
          mercury__io__seen_2_p_0();
#line 174 "process_file.m"
          return;
        }
#line 169 "process_file.m"
      }
#line 175 "process_file.m"
    else
#line 176 "process_file.m"
      {
#line 176 "process_file.m"
        MR_Word process_file__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), process_file__Result_16, (MR_Integer) 0)));
#line 176 "process_file.m"
        MR_String process_file__ErrorMsg_18;

#line 177 "process_file.m"
        {
#line 177 "process_file.m"
          mercury__io__error_message_2_p_0(process_file__Error_17, &process_file__ErrorMsg_18);
        }
#line 178 "process_file.m"
        {
#line 178 "process_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\nWarning: error opening \140");
        }
#line 179 "process_file.m"
        {
#line 179 "process_file.m"
          mercury__io__write_string_3_p_0(process_file__CountFile_15);
        }
#line 180 "process_file.m"
        {
#line 180 "process_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
#line 181 "process_file.m"
        {
#line 181 "process_file.m"
          mercury__io__write_string_3_p_0(process_file__ErrorMsg_18);
        }
#line 182 "process_file.m"
        {
#line 182 "process_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 183 "process_file.m"
        {
#line 183 "process_file.m"
          mercury__io__write_string_3_p_0((MR_String) "The generated profile will only include ");
        }
#line 184 "process_file.m"
        {
#line 184 "process_file.m"
          mercury__io__write_string_3_p_0((MR_String) "call counts.\n\n");
        }
#line 185 "process_file.m"
        *process_file__TotalCounts_13 = (MR_Integer) 0;
#line 189 "process_file.m"
        *process_file__WhatToProfile_10 = (MR_Integer) 3;
#line 190 "process_file.m"
        *process_file__Scale_11 = (MR_Float) 1.0000000000000000;
#line 191 "process_file.m"
        *process_file__Units_12 = (MR_String) "";
#line 191 "process_file.m"
        *process_file__STATE_VARIABLE_ProfNodeMap_20 = process_file__STATE_VARIABLE_ProfNodeMap_0_19;
#line 176 "process_file.m"
      }
#line 165 "process_file.m"
  }
#line 161 "process_file.m"
}

#line 129 "process_file.m"
static void MR_CALL 
process_file__process_addr_decl_2_6_p_0(
#line 129 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_AddrDecl_0_16,
#line 129 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_AddrDecl_17,
#line 129 "process_file.m"
  MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0_18,
#line 129 "process_file.m"
  MR_Word * process_file__STATE_VARIABLE_ProfNodeMap_19)
#line 129 "process_file.m"
{
#line 132 "process_file.m"
  while (MR_TRUE)
#line 132 "process_file.m"
    {
#line 132 "process_file.m"
      /* tailcall optimized into a loop */
#line 132 "process_file.m"
      {
#line 132 "process_file.m"
        MR_bool process_file__succeeded;
#line 132 "process_file.m"
        MR_Word process_file__MaybeLabelAddr_10;

#line 133 "process_file.m"
        {
#line 133 "process_file.m"
          read__maybe_read_label_addr_3_p_0(&process_file__MaybeLabelAddr_10);
        }
#line 149 "process_file.m"
        if ((process_file__MaybeLabelAddr_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 150 "process_file.m"
          {
#line 150 "process_file.m"
            *process_file__STATE_VARIABLE_AddrDecl_17 = process_file__STATE_VARIABLE_AddrDecl_0_16;
#line 150 "process_file.m"
            *process_file__STATE_VARIABLE_ProfNodeMap_19 = process_file__STATE_VARIABLE_ProfNodeMap_0_18;
#line 150 "process_file.m"
          }
#line 149 "process_file.m"
        else
#line 135 "process_file.m"
          {
#line 135 "process_file.m"
            MR_Integer process_file__LabelAddr_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), process_file__MaybeLabelAddr_10, (MR_Integer) 0)));
#line 135 "process_file.m"
            MR_String process_file__LabelName_12;
#line 135 "process_file.m"
            MR_Word process_file__ProfNode_13;
#line 135 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_AddrDecl_24_24;
#line 135 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_AddrDecl_26_26;
#line 135 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_28_28;
#line 143 "process_file.m"
            MR_Word process_file__STATE_VARIABLE_ProfNodeMap_25_25;

#line 136 "process_file.m"
            {
#line 136 "process_file.m"
              read__read_label_name_3_p_0(&process_file__LabelName_12);
            }
#line 137 "process_file.m"
            {
#line 137 "process_file.m"
              process_file__ProfNode_13 = prof_info__prof_node_init_1_f_0(process_file__LabelName_12);
            }
#line 138 "process_file.m"
            {
#line 138 "process_file.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__LabelName_12)), ((MR_Box) (process_file__LabelAddr_11)), process_file__STATE_VARIABLE_AddrDecl_0_16, &process_file__STATE_VARIABLE_AddrDecl_24_24);
            }
#line 141 "process_file.m"
            {
#line 141 "process_file.m"
              process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__ProfNode_13)), process_file__STATE_VARIABLE_ProfNodeMap_0_18, &process_file__STATE_VARIABLE_ProfNodeMap_25_25);
            }
#line 143 "process_file.m"
            if (process_file__succeeded)
#line 142 "process_file.m"
              {
#line 142 "process_file.m"
                process_file__STATE_VARIABLE_ProfNodeMap_28_28 = process_file__STATE_VARIABLE_ProfNodeMap_25_25;
#line 142 "process_file.m"
                process_file__STATE_VARIABLE_AddrDecl_26_26 = process_file__STATE_VARIABLE_AddrDecl_24_24;
#line 142 "process_file.m"
              }
#line 143 "process_file.m"
            else
#line 144 "process_file.m"
              {
#line 144 "process_file.m"
                MR_Word process_file__ProfNode0_14;
#line 144 "process_file.m"
                MR_Word process_file__NewProfNode_15;
#line 144 "process_file.m"
                MR_Word process_file__STATE_VARIABLE_ProfNodeMap_27_27;
#line 357 "process_file.m"
                MR_Word process_file__ProfNode0_44;
#line 355 "process_file.m"
                MR_Box process_file__conv0_ProfNode0_44;

#line 355 "process_file.m"
                {
#line 355 "process_file.m"
                  process_file__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__STATE_VARIABLE_ProfNodeMap_0_18, process_file__LabelAddr_11, &process_file__conv0_ProfNode0_44);
                }
#line 355 "process_file.m"
                if (process_file__succeeded)
#line 355 "process_file.m"
                  {
#line 355 "process_file.m"
                    process_file__ProfNode0_44 = ((MR_Word) process_file__conv0_ProfNode0_44);
#line 355 "process_file.m"
                    process_file__succeeded = MR_TRUE;
#line 355 "process_file.m"
                  }
#line 357 "process_file.m"
                if (process_file__succeeded)
#line 356 "process_file.m"
                  {
#line 356 "process_file.m"
                    process_file__ProfNode0_14 = process_file__ProfNode0_44;
#line 356 "process_file.m"
                    process_file__STATE_VARIABLE_ProfNodeMap_27_27 = process_file__STATE_VARIABLE_ProfNodeMap_0_18;
#line 356 "process_file.m"
                    process_file__STATE_VARIABLE_AddrDecl_26_26 = process_file__STATE_VARIABLE_AddrDecl_24_24;
#line 356 "process_file.m"
                  }
#line 357 "process_file.m"
                else
#line 358 "process_file.m"
                  {
#line 358 "process_file.m"
                    MR_String process_file__Str_45;
#line 358 "process_file.m"
                    MR_String process_file__V_57_57;

#line 1156 "process_file.c"
                    {
#line 1158 "process_file.c"
                      process_file__V_57_57 = mercury__string__int_to_string_1_f_0(process_file__LabelAddr_11);
                    }
#line 1161 "process_file.c"
                    {
#line 1163 "process_file.c"
                      process_file__Str_45 = mercury__string__f_43_43_2_f_0((MR_String) "unknown__", process_file__V_57_57);
                    }
#line 359 "process_file.m"
                    {
#line 359 "process_file.m"
                      process_file__ProfNode0_14 = prof_info__prof_node_init_1_f_0(process_file__Str_45);
                    }
#line 360 "process_file.m"
                    {
#line 360 "process_file.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__ProfNode0_14)), process_file__STATE_VARIABLE_ProfNodeMap_0_18, &process_file__STATE_VARIABLE_ProfNodeMap_27_27);
                    }
#line 361 "process_file.m"
                    {
#line 361 "process_file.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (process_file__Str_45)), ((MR_Box) (process_file__LabelAddr_11)), process_file__STATE_VARIABLE_AddrDecl_24_24, &process_file__STATE_VARIABLE_AddrDecl_26_26);
                    }
#line 358 "process_file.m"
                  }
#line 145 "process_file.m"
                {
#line 145 "process_file.m"
                  prof_info__prof_node_concat_to_name_list_3_p_0(process_file__LabelName_12, process_file__ProfNode0_14, &process_file__NewProfNode_15);
                }
#line 146 "process_file.m"
                {
#line 146 "process_file.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, process_file__LabelAddr_11, ((MR_Box) (process_file__NewProfNode_15)), process_file__STATE_VARIABLE_ProfNodeMap_27_27, &process_file__STATE_VARIABLE_ProfNodeMap_28_28);
                }
#line 144 "process_file.m"
              }
#line 148 "process_file.m"
            /* direct tailcall eliminated */
#line 148 "process_file.m"
            {
#line 148 "process_file.m"
              MR_Word process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_16 = process_file__STATE_VARIABLE_AddrDecl_26_26;
#line 148 "process_file.m"
              MR_Word process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_18 = process_file__STATE_VARIABLE_ProfNodeMap_28_28;

#line 148 "process_file.m"
              process_file__STATE_VARIABLE_ProfNodeMap_0_18 = process_file__STATE_VARIABLE_ProfNodeMap_0__tmp_copy_18;
#line 148 "process_file.m"
              process_file__STATE_VARIABLE_AddrDecl_0_16 = process_file__STATE_VARIABLE_AddrDecl_0__tmp_copy_16;
#line 148 "process_file.m"
            }
#line 148 "process_file.m"
            continue;
#line 135 "process_file.m"
          }
#line 132 "process_file.m"
      }
#line 132 "process_file.m"
      break;
#line 132 "process_file.m"
    }
#line 129 "process_file.m"
}

#line 29 "process_file.m"
void MR_CALL 
process_file__process_profiling_data_files_4_p_0(
#line 29 "process_file.m"
  MR_Word * process_file__Prof_5,
#line 29 "process_file.m"
  MR_Word * process_file__DynamicCallGraph_6)
#line 29 "process_file.m"
{
#line 52 "process_file.m"
  {
#line 52 "process_file.m"
    MR_bool process_file__succeeded;
#line 52 "process_file.m"
    MR_Word process_file__VVerbose_8;
#line 52 "process_file.m"
    MR_String process_file__DeclFile_9;
#line 52 "process_file.m"
    MR_String process_file__CountFile_10;
#line 52 "process_file.m"
    MR_String process_file__PairFile_11;
#line 52 "process_file.m"
    MR_Word process_file__AddrDeclMap0_13;
#line 52 "process_file.m"
    MR_Word process_file__ProfNodeMap0_14;
#line 52 "process_file.m"
    MR_Word process_file__ProfNodeMap1_15;
#line 52 "process_file.m"
    MR_Word process_file__WhatToProfile_16;
#line 52 "process_file.m"
    MR_Float process_file__Scale_17;
#line 52 "process_file.m"
    MR_String process_file__Units_18;
#line 52 "process_file.m"
    MR_Integer process_file__TotalCounts_19;
#line 52 "process_file.m"
    MR_Word process_file__ProfNodeMap_20;
#line 52 "process_file.m"
    MR_Word process_file__AddrDeclMap_21;
#line 52 "process_file.m"
    MR_Word process_file__CycleMap_22;
#line 52 "process_file.m"
    MR_Word process_file__Globals0_23;
#line 52 "process_file.m"
    MR_Word process_file__Globals_24;
#line 52 "process_file.m"
    MR_String process_file__DeclFile_70;
#line 52 "process_file.m"
    MR_Word process_file__Result_71;
#line 58 "process_file.m"
    MR_Word process_file__Dynamic_12;

#line 53 "process_file.m"
    {
#line 53 "process_file.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &process_file__VVerbose_8);
    }
#line 54 "process_file.m"
    {
#line 54 "process_file.m"
      globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &process_file__DeclFile_9);
    }
#line 55 "process_file.m"
    {
#line 55 "process_file.m"
      globals__io_lookup_string_option_4_p_0((MR_Integer) 9, &process_file__CountFile_10);
    }
#line 56 "process_file.m"
    {
#line 56 "process_file.m"
      globals__io_lookup_string_option_4_p_0((MR_Integer) 10, &process_file__PairFile_11);
    }
#line 58 "process_file.m"
    {
#line 58 "process_file.m"
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 2, &process_file__Dynamic_12);
    }
#line 61 "process_file.m"
    {
#line 61 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "\n\t% Processing ");
    }
#line 62 "process_file.m"
    {
#line 62 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, process_file__DeclFile_9);
    }
#line 63 "process_file.m"
    {
#line 63 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "...");
    }
#line 116 "process_file.m"
    {
#line 116 "process_file.m"
      globals__io_lookup_string_option_4_p_0((MR_Integer) 11, &process_file__DeclFile_70);
    }
#line 117 "process_file.m"
    {
#line 117 "process_file.m"
      mercury__io__see_4_p_0(process_file__DeclFile_70, &process_file__Result_71);
    }
#line 122 "process_file.m"
    if ((process_file__Result_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "process_file.m"
      {
#line 119 "process_file.m"
        MR_Word process_file__TypeCtorInfo_29_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 119 "process_file.m"
        MR_Word process_file__V_84_84;
#line 119 "process_file.m"
        MR_Word process_file__V_85_85;

#line 120 "process_file.m"
        {
#line 120 "process_file.m"
          process_file__V_84_84 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, process_file__TypeCtorInfo_29_89);
        }
#line 120 "process_file.m"
        {
#line 120 "process_file.m"
          process_file__V_85_85 = mercury__map__init_0_f_0(process_file__TypeCtorInfo_29_89, (MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0);
        }
#line 120 "process_file.m"
        {
#line 120 "process_file.m"
          process_file__process_addr_decl_2_6_p_0(process_file__V_84_84, &process_file__AddrDeclMap0_13, process_file__V_85_85, &process_file__ProfNodeMap0_14);
        }
#line 121 "process_file.m"
        {
#line 121 "process_file.m"
          mercury__io__seen_2_p_0();
        }
#line 119 "process_file.m"
      }
#line 122 "process_file.m"
    else
#line 123 "process_file.m"
      {
#line 123 "process_file.m"
        MR_Word process_file__Error_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), process_file__Result_71, (MR_Integer) 0)));
#line 123 "process_file.m"
        MR_String process_file__ErrorStr_73;
#line 123 "process_file.m"
        MR_String process_file__V_78_78;
#line 123 "process_file.m"
        MR_String process_file__V_79_79;
#line 123 "process_file.m"
        MR_String process_file__V_81_81;
#line 123 "process_file.m"
        MR_String process_file__V_82_82;

#line 125 "process_file.m"
        {
#line 125 "process_file.m"
          process_file__V_82_82 = mercury__io__error_message_1_f_0(process_file__Error_72);
        }
#line 125 "process_file.m"
        {
#line 125 "process_file.m"
          process_file__V_81_81 = mercury__string__f_43_43_2_f_0(process_file__V_82_82, (MR_String) "\n");
        }
#line 124 "process_file.m"
        {
#line 124 "process_file.m"
          process_file__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", process_file__V_81_81);
        }
#line 124 "process_file.m"
        {
#line 124 "process_file.m"
          process_file__V_78_78 = mercury__string__f_43_43_2_f_0(process_file__DeclFile_70, process_file__V_79_79);
        }
#line 124 "process_file.m"
        {
#line 124 "process_file.m"
          process_file__ErrorStr_73 = mercury__string__f_43_43_2_f_0((MR_String) "error opening declaration file \140", process_file__V_78_78);
        }
#line 126 "process_file.m"
        {
#line 126 "process_file.m"
          mercury__require__error_1_p_0(process_file__ErrorStr_73);
#line 126 "process_file.m"
          return;
        }
#line 123 "process_file.m"
      }
#line 65 "process_file.m"
    {
#line 65 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) " done.\n");
    }
#line 68 "process_file.m"
    {
#line 68 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "\t% Processing ");
    }
#line 69 "process_file.m"
    {
#line 69 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, process_file__CountFile_10);
    }
#line 70 "process_file.m"
    {
#line 70 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "...");
    }
#line 71 "process_file.m"
    {
#line 71 "process_file.m"
      process_file__process_addr_8_p_0(process_file__ProfNodeMap0_14, &process_file__ProfNodeMap1_15, &process_file__WhatToProfile_16, &process_file__Scale_17, &process_file__Units_18, &process_file__TotalCounts_19);
    }
#line 73 "process_file.m"
    {
#line 73 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) " done.\n");
    }
#line 76 "process_file.m"
    {
#line 76 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "\t% Processing ");
    }
#line 77 "process_file.m"
    {
#line 77 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, process_file__PairFile_11);
    }
#line 78 "process_file.m"
    {
#line 78 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) "...");
    }
#line 79 "process_file.m"
    {
#line 79 "process_file.m"
      process_file__process_addr_pair_7_p_0(process_file__ProfNodeMap1_15, &process_file__ProfNodeMap_20, process_file__AddrDeclMap0_13, &process_file__AddrDeclMap_21, process_file__DynamicCallGraph_6);
    }
#line 81 "process_file.m"
    {
#line 81 "process_file.m"
      options__maybe_write_string_4_p_0(process_file__VVerbose_8, (MR_String) " done.\n");
    }
#line 83 "process_file.m"
    {
#line 83 "process_file.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &process_file__CycleMap_22);
    }
#line 84 "process_file.m"
    {
#line 84 "process_file.m"
      prof_info__prof_set_entire_7_p_0(process_file__Scale_17, process_file__Units_18, process_file__TotalCounts_19, process_file__AddrDeclMap_21, process_file__ProfNodeMap_20, process_file__CycleMap_22, process_file__Prof_5);
    }
#line 86 "process_file.m"
    {
#line 86 "process_file.m"
      globals__io_get_globals_3_p_0(&process_file__Globals0_23);
    }
#line 87 "process_file.m"
    {
#line 87 "process_file.m"
      globals__set_what_to_profile_3_p_0(process_file__WhatToProfile_16, process_file__Globals0_23, &process_file__Globals_24);
    }
#line 88 "process_file.m"
    {
#line 88 "process_file.m"
      globals__io_set_globals_3_p_0(process_file__Globals_24);
#line 88 "process_file.m"
      return;
    }
#line 52 "process_file.m"
  }
#line 29 "process_file.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module process_file. */
