/*
** Automatically generated from `io_combinator.m'
** by the Mercury compiler,
** version DEV
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


/* :- module io_combinator. */
/* :- implementation. */

/*
INIT mercury__io_combinator__init
ENDINIT
*/

#include "io_combinator.mih"


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










#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 699 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_13_17_p_0(
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_88,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_89,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_90,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_91,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_92,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_93,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_94,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_95,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_96,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_97,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T11_98,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T12_99,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T13_100,
#line 699 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_101,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P1_18,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P2_19,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P3_20,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P4_21,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P5_22,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P6_23,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P7_24,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P8_25,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P9_26,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P10_27,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P11_28,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P12_29,
#line 699 "io_combinator.m"
  MR_Word io_combinator__P13_30,
#line 699 "io_combinator.m"
  MR_Word io_combinator__Combine_31,
#line 699 "io_combinator.m"
  MR_Word * io_combinator__Res_32)
#line 699 "io_combinator.m"
{
#line 2496 "io_combinator.m"
  {
#line 2496 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2496 "io_combinator.m"
    MR_Word io_combinator__Res1_34;
#line 2497 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_18, (MR_Integer) 1)));
#line 2497 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_34;
#line 2497 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_63_63;

#line 2497 "io_combinator.m"
    {
#line 2497 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_18), &io_combinator__conv2_Res1_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_63_63);
    }
#line 2497 "io_combinator.m"
    io_combinator__Res1_34 = ((MR_Word) io_combinator__conv2_Res1_34);
#line 2588 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_34)) == (MR_mktag((MR_Integer) 1))))
#line 2590 "io_combinator.m"
      *io_combinator__Res_32 = io_combinator__Res1_34;
#line 2588 "io_combinator.m"
    else
#line 2499 "io_combinator.m"
      {
#line 2499 "io_combinator.m"
        MR_Box io_combinator__T1_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_34, (MR_Integer) 0));
#line 2499 "io_combinator.m"
        MR_Word io_combinator__Res2_36;
#line 2500 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_19, (MR_Integer) 1)));
#line 2500 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_36;
#line 2500 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_64_64;

#line 2500 "io_combinator.m"
        {
#line 2500 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_19), &io_combinator__conv5_Res2_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_64_64);
        }
#line 2500 "io_combinator.m"
        io_combinator__Res2_36 = ((MR_Word) io_combinator__conv5_Res2_36);
#line 2584 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_36)) == (MR_mktag((MR_Integer) 1))))
#line 2586 "io_combinator.m"
          *io_combinator__Res_32 = io_combinator__Res2_36;
#line 2584 "io_combinator.m"
        else
#line 2502 "io_combinator.m"
          {
#line 2502 "io_combinator.m"
            MR_Box io_combinator__T2_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_36, (MR_Integer) 0));
#line 2502 "io_combinator.m"
            MR_Word io_combinator__Res3_38;
#line 2503 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_20, (MR_Integer) 1)));
#line 2503 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_38;
#line 2503 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_65_65;

#line 2503 "io_combinator.m"
            {
#line 2503 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_20), &io_combinator__conv8_Res3_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_65_65);
            }
#line 2503 "io_combinator.m"
            io_combinator__Res3_38 = ((MR_Word) io_combinator__conv8_Res3_38);
#line 2580 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_38)) == (MR_mktag((MR_Integer) 1))))
#line 2582 "io_combinator.m"
              *io_combinator__Res_32 = io_combinator__Res3_38;
#line 2580 "io_combinator.m"
            else
#line 2505 "io_combinator.m"
              {
#line 2505 "io_combinator.m"
                MR_Box io_combinator__T3_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_38, (MR_Integer) 0));
#line 2505 "io_combinator.m"
                MR_Word io_combinator__Res4_40;
#line 2506 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_21, (MR_Integer) 1)));
#line 2506 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_40;
#line 2506 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_66_66;

#line 2506 "io_combinator.m"
                {
#line 2506 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_21), &io_combinator__conv11_Res4_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_66_66);
                }
#line 2506 "io_combinator.m"
                io_combinator__Res4_40 = ((MR_Word) io_combinator__conv11_Res4_40);
#line 2576 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_40)) == (MR_mktag((MR_Integer) 1))))
#line 2578 "io_combinator.m"
                  *io_combinator__Res_32 = io_combinator__Res4_40;
#line 2576 "io_combinator.m"
                else
#line 2508 "io_combinator.m"
                  {
#line 2508 "io_combinator.m"
                    MR_Box io_combinator__T4_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_40, (MR_Integer) 0));
#line 2508 "io_combinator.m"
                    MR_Word io_combinator__Res5_42;
#line 2509 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_22, (MR_Integer) 1)));
#line 2509 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_42;
#line 2509 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_67_67;

#line 2509 "io_combinator.m"
                    {
#line 2509 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_22), &io_combinator__conv14_Res5_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_67_67);
                    }
#line 2509 "io_combinator.m"
                    io_combinator__Res5_42 = ((MR_Word) io_combinator__conv14_Res5_42);
#line 2572 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_42)) == (MR_mktag((MR_Integer) 1))))
#line 2574 "io_combinator.m"
                      *io_combinator__Res_32 = io_combinator__Res5_42;
#line 2572 "io_combinator.m"
                    else
#line 2511 "io_combinator.m"
                      {
#line 2511 "io_combinator.m"
                        MR_Box io_combinator__T5_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_42, (MR_Integer) 0));
#line 2511 "io_combinator.m"
                        MR_Word io_combinator__Res6_44;
#line 2512 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_23, (MR_Integer) 1)));
#line 2512 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_44;
#line 2512 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_68_68;

#line 2512 "io_combinator.m"
                        {
#line 2512 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_23), &io_combinator__conv17_Res6_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_68_68);
                        }
#line 2512 "io_combinator.m"
                        io_combinator__Res6_44 = ((MR_Word) io_combinator__conv17_Res6_44);
#line 2568 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_44)) == (MR_mktag((MR_Integer) 1))))
#line 2570 "io_combinator.m"
                          *io_combinator__Res_32 = io_combinator__Res6_44;
#line 2568 "io_combinator.m"
                        else
#line 2514 "io_combinator.m"
                          {
#line 2514 "io_combinator.m"
                            MR_Box io_combinator__T6_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_44, (MR_Integer) 0));
#line 2514 "io_combinator.m"
                            MR_Word io_combinator__Res7_46;
#line 2515 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_24, (MR_Integer) 1)));
#line 2515 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_46;
#line 2515 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_69_69;

#line 2515 "io_combinator.m"
                            {
#line 2515 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_24), &io_combinator__conv20_Res7_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_69_69);
                            }
#line 2515 "io_combinator.m"
                            io_combinator__Res7_46 = ((MR_Word) io_combinator__conv20_Res7_46);
#line 2564 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_46)) == (MR_mktag((MR_Integer) 1))))
#line 2566 "io_combinator.m"
                              *io_combinator__Res_32 = io_combinator__Res7_46;
#line 2564 "io_combinator.m"
                            else
#line 2517 "io_combinator.m"
                              {
#line 2517 "io_combinator.m"
                                MR_Box io_combinator__T7_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_46, (MR_Integer) 0));
#line 2517 "io_combinator.m"
                                MR_Word io_combinator__Res8_48;
#line 2518 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_25, (MR_Integer) 1)));
#line 2518 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_48;
#line 2518 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_70_70;

#line 2518 "io_combinator.m"
                                {
#line 2518 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_25), &io_combinator__conv23_Res8_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_70_70);
                                }
#line 2518 "io_combinator.m"
                                io_combinator__Res8_48 = ((MR_Word) io_combinator__conv23_Res8_48);
#line 2560 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_48)) == (MR_mktag((MR_Integer) 1))))
#line 2562 "io_combinator.m"
                                  *io_combinator__Res_32 = io_combinator__Res8_48;
#line 2560 "io_combinator.m"
                                else
#line 2520 "io_combinator.m"
                                  {
#line 2520 "io_combinator.m"
                                    MR_Box io_combinator__T8_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_48, (MR_Integer) 0));
#line 2520 "io_combinator.m"
                                    MR_Word io_combinator__Res9_50;
#line 2521 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_26, (MR_Integer) 1)));
#line 2521 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_50;
#line 2521 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_71_71;

#line 2521 "io_combinator.m"
                                    {
#line 2521 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_26), &io_combinator__conv26_Res9_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_71_71);
                                    }
#line 2521 "io_combinator.m"
                                    io_combinator__Res9_50 = ((MR_Word) io_combinator__conv26_Res9_50);
#line 2556 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_50)) == (MR_mktag((MR_Integer) 1))))
#line 2558 "io_combinator.m"
                                      *io_combinator__Res_32 = io_combinator__Res9_50;
#line 2556 "io_combinator.m"
                                    else
#line 2523 "io_combinator.m"
                                      {
#line 2523 "io_combinator.m"
                                        MR_Box io_combinator__T9_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_50, (MR_Integer) 0));
#line 2523 "io_combinator.m"
                                        MR_Word io_combinator__Res10_52;
#line 2524 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_27, (MR_Integer) 1)));
#line 2524 "io_combinator.m"
                                        MR_Box io_combinator__conv29_Res10_52;
#line 2524 "io_combinator.m"
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_72_72;

#line 2524 "io_combinator.m"
                                        {
#line 2524 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_27), &io_combinator__conv29_Res10_52, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_72_72);
                                        }
#line 2524 "io_combinator.m"
                                        io_combinator__Res10_52 = ((MR_Word) io_combinator__conv29_Res10_52);
#line 2552 "io_combinator.m"
                                        if (((MR_tag((MR_Word) io_combinator__Res10_52)) == (MR_mktag((MR_Integer) 1))))
#line 2554 "io_combinator.m"
                                          *io_combinator__Res_32 = io_combinator__Res10_52;
#line 2552 "io_combinator.m"
                                        else
#line 2526 "io_combinator.m"
                                          {
#line 2526 "io_combinator.m"
                                            MR_Box io_combinator__T10_53 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_52, (MR_Integer) 0));
#line 2526 "io_combinator.m"
                                            MR_Word io_combinator__Res11_54;
#line 2527 "io_combinator.m"
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_28, (MR_Integer) 1)));
#line 2527 "io_combinator.m"
                                            MR_Box io_combinator__conv32_Res11_54;
#line 2527 "io_combinator.m"
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_73_73;

#line 2527 "io_combinator.m"
                                            {
#line 2527 "io_combinator.m"
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_28), &io_combinator__conv32_Res11_54, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_73_73);
                                            }
#line 2527 "io_combinator.m"
                                            io_combinator__Res11_54 = ((MR_Word) io_combinator__conv32_Res11_54);
#line 2548 "io_combinator.m"
                                            if (((MR_tag((MR_Word) io_combinator__Res11_54)) == (MR_mktag((MR_Integer) 1))))
#line 2550 "io_combinator.m"
                                              *io_combinator__Res_32 = io_combinator__Res11_54;
#line 2548 "io_combinator.m"
                                            else
#line 2529 "io_combinator.m"
                                              {
#line 2529 "io_combinator.m"
                                                MR_Box io_combinator__T11_55 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_54, (MR_Integer) 0));
#line 2529 "io_combinator.m"
                                                MR_Word io_combinator__Res12_56;
#line 2530 "io_combinator.m"
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P12_29, (MR_Integer) 1)));
#line 2530 "io_combinator.m"
                                                MR_Box io_combinator__conv35_Res12_56;
#line 2530 "io_combinator.m"
                                                MR_Box io_combinator__conv34_STATE_VARIABLE_IO_74_74;

#line 2530 "io_combinator.m"
                                                {
#line 2530 "io_combinator.m"
                                                  io_combinator__func_33(((MR_Box) io_combinator__P12_29), &io_combinator__conv35_Res12_56, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv34_STATE_VARIABLE_IO_74_74);
                                                }
#line 2530 "io_combinator.m"
                                                io_combinator__Res12_56 = ((MR_Word) io_combinator__conv35_Res12_56);
#line 2544 "io_combinator.m"
                                                if (((MR_tag((MR_Word) io_combinator__Res12_56)) == (MR_mktag((MR_Integer) 1))))
#line 2546 "io_combinator.m"
                                                  *io_combinator__Res_32 = io_combinator__Res12_56;
#line 2544 "io_combinator.m"
                                                else
#line 2532 "io_combinator.m"
                                                  {
#line 2532 "io_combinator.m"
                                                    MR_Box io_combinator__T12_57 = (MR_hl_field(MR_mktag(0), io_combinator__Res12_56, (MR_Integer) 0));
#line 2532 "io_combinator.m"
                                                    MR_Word io_combinator__Res13_58;
#line 2533 "io_combinator.m"
                                                    void MR_CALL (* io_combinator__func_36)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P13_30, (MR_Integer) 1)));
#line 2533 "io_combinator.m"
                                                    MR_Box io_combinator__conv38_Res13_58;
#line 2533 "io_combinator.m"
                                                    MR_Box io_combinator__conv37_STATE_VARIABLE_IO_62;

#line 2533 "io_combinator.m"
                                                    {
#line 2533 "io_combinator.m"
                                                      io_combinator__func_36(((MR_Box) io_combinator__P13_30), &io_combinator__conv38_Res13_58, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv37_STATE_VARIABLE_IO_62);
                                                    }
#line 2533 "io_combinator.m"
                                                    io_combinator__Res13_58 = ((MR_Word) io_combinator__conv38_Res13_58);
#line 2540 "io_combinator.m"
                                                    if (((MR_tag((MR_Word) io_combinator__Res13_58)) == (MR_mktag((MR_Integer) 1))))
#line 2542 "io_combinator.m"
                                                      *io_combinator__Res_32 = io_combinator__Res13_58;
#line 2540 "io_combinator.m"
                                                    else
#line 2535 "io_combinator.m"
                                                      {
#line 2535 "io_combinator.m"
                                                        MR_Box io_combinator__T13_59 = (MR_hl_field(MR_mktag(0), io_combinator__Res13_58, (MR_Integer) 0));
#line 2536 "io_combinator.m"
                                                        void MR_CALL (* io_combinator__func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_31, (MR_Integer) 1)));
#line 2536 "io_combinator.m"
                                                        MR_Box io_combinator__conv40_Res_32;

#line 2536 "io_combinator.m"
                                                        {
#line 2536 "io_combinator.m"
                                                          io_combinator__func_39(((MR_Box) io_combinator__Combine_31), io_combinator__T1_35, io_combinator__T2_37, io_combinator__T3_39, io_combinator__T4_41, io_combinator__T5_43, io_combinator__T6_45, io_combinator__T7_47, io_combinator__T8_49, io_combinator__T9_51, io_combinator__T10_53, io_combinator__T11_55, io_combinator__T12_57, io_combinator__T13_59, &io_combinator__conv40_Res_32);
                                                        }
#line 2536 "io_combinator.m"
                                                        *io_combinator__Res_32 = ((MR_Word) io_combinator__conv40_Res_32);
#line 2535 "io_combinator.m"
                                                      }
#line 2532 "io_combinator.m"
                                                  }
#line 2529 "io_combinator.m"
                                              }
#line 2526 "io_combinator.m"
                                          }
#line 2523 "io_combinator.m"
                                      }
#line 2520 "io_combinator.m"
                                  }
#line 2517 "io_combinator.m"
                              }
#line 2514 "io_combinator.m"
                          }
#line 2511 "io_combinator.m"
                      }
#line 2508 "io_combinator.m"
                  }
#line 2505 "io_combinator.m"
              }
#line 2502 "io_combinator.m"
          }
#line 2499 "io_combinator.m"
      }
#line 2496 "io_combinator.m"
  }
#line 699 "io_combinator.m"
}

#line 666 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_12_16_p_0(
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_82,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_83,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_84,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_85,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_86,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_87,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_88,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_89,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_90,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_91,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T11_92,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T12_93,
#line 666 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_94,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P1_17,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P2_18,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P3_19,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P4_20,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P5_21,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P6_22,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P7_23,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P8_24,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P9_25,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P10_26,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P11_27,
#line 666 "io_combinator.m"
  MR_Word io_combinator__P12_28,
#line 666 "io_combinator.m"
  MR_Word io_combinator__Combine_29,
#line 666 "io_combinator.m"
  MR_Word * io_combinator__Res_30)
#line 666 "io_combinator.m"
{
#line 2406 "io_combinator.m"
  {
#line 2406 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2406 "io_combinator.m"
    MR_Word io_combinator__Res1_32;
#line 2407 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_17, (MR_Integer) 1)));
#line 2407 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_32;
#line 2407 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_59_59;

#line 2407 "io_combinator.m"
    {
#line 2407 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_17), &io_combinator__conv2_Res1_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_59_59);
    }
#line 2407 "io_combinator.m"
    io_combinator__Res1_32 = ((MR_Word) io_combinator__conv2_Res1_32);
#line 2490 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_32)) == (MR_mktag((MR_Integer) 1))))
#line 2492 "io_combinator.m"
      *io_combinator__Res_30 = io_combinator__Res1_32;
#line 2490 "io_combinator.m"
    else
#line 2409 "io_combinator.m"
      {
#line 2409 "io_combinator.m"
        MR_Box io_combinator__T1_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_32, (MR_Integer) 0));
#line 2409 "io_combinator.m"
        MR_Word io_combinator__Res2_34;
#line 2410 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_18, (MR_Integer) 1)));
#line 2410 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_34;
#line 2410 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_60_60;

#line 2410 "io_combinator.m"
        {
#line 2410 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_18), &io_combinator__conv5_Res2_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_60_60);
        }
#line 2410 "io_combinator.m"
        io_combinator__Res2_34 = ((MR_Word) io_combinator__conv5_Res2_34);
#line 2486 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_34)) == (MR_mktag((MR_Integer) 1))))
#line 2488 "io_combinator.m"
          *io_combinator__Res_30 = io_combinator__Res2_34;
#line 2486 "io_combinator.m"
        else
#line 2412 "io_combinator.m"
          {
#line 2412 "io_combinator.m"
            MR_Box io_combinator__T2_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_34, (MR_Integer) 0));
#line 2412 "io_combinator.m"
            MR_Word io_combinator__Res3_36;
#line 2413 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_19, (MR_Integer) 1)));
#line 2413 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_36;
#line 2413 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_61_61;

#line 2413 "io_combinator.m"
            {
#line 2413 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_19), &io_combinator__conv8_Res3_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_61_61);
            }
#line 2413 "io_combinator.m"
            io_combinator__Res3_36 = ((MR_Word) io_combinator__conv8_Res3_36);
#line 2482 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_36)) == (MR_mktag((MR_Integer) 1))))
#line 2484 "io_combinator.m"
              *io_combinator__Res_30 = io_combinator__Res3_36;
#line 2482 "io_combinator.m"
            else
#line 2415 "io_combinator.m"
              {
#line 2415 "io_combinator.m"
                MR_Box io_combinator__T3_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_36, (MR_Integer) 0));
#line 2415 "io_combinator.m"
                MR_Word io_combinator__Res4_38;
#line 2416 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_20, (MR_Integer) 1)));
#line 2416 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_38;
#line 2416 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_62_62;

#line 2416 "io_combinator.m"
                {
#line 2416 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_20), &io_combinator__conv11_Res4_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_62_62);
                }
#line 2416 "io_combinator.m"
                io_combinator__Res4_38 = ((MR_Word) io_combinator__conv11_Res4_38);
#line 2478 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_38)) == (MR_mktag((MR_Integer) 1))))
#line 2480 "io_combinator.m"
                  *io_combinator__Res_30 = io_combinator__Res4_38;
#line 2478 "io_combinator.m"
                else
#line 2418 "io_combinator.m"
                  {
#line 2418 "io_combinator.m"
                    MR_Box io_combinator__T4_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_38, (MR_Integer) 0));
#line 2418 "io_combinator.m"
                    MR_Word io_combinator__Res5_40;
#line 2419 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_21, (MR_Integer) 1)));
#line 2419 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_40;
#line 2419 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_63_63;

#line 2419 "io_combinator.m"
                    {
#line 2419 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_21), &io_combinator__conv14_Res5_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_63_63);
                    }
#line 2419 "io_combinator.m"
                    io_combinator__Res5_40 = ((MR_Word) io_combinator__conv14_Res5_40);
#line 2474 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_40)) == (MR_mktag((MR_Integer) 1))))
#line 2476 "io_combinator.m"
                      *io_combinator__Res_30 = io_combinator__Res5_40;
#line 2474 "io_combinator.m"
                    else
#line 2421 "io_combinator.m"
                      {
#line 2421 "io_combinator.m"
                        MR_Box io_combinator__T5_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_40, (MR_Integer) 0));
#line 2421 "io_combinator.m"
                        MR_Word io_combinator__Res6_42;
#line 2422 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_22, (MR_Integer) 1)));
#line 2422 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_42;
#line 2422 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_64_64;

#line 2422 "io_combinator.m"
                        {
#line 2422 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_22), &io_combinator__conv17_Res6_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_64_64);
                        }
#line 2422 "io_combinator.m"
                        io_combinator__Res6_42 = ((MR_Word) io_combinator__conv17_Res6_42);
#line 2470 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_42)) == (MR_mktag((MR_Integer) 1))))
#line 2472 "io_combinator.m"
                          *io_combinator__Res_30 = io_combinator__Res6_42;
#line 2470 "io_combinator.m"
                        else
#line 2424 "io_combinator.m"
                          {
#line 2424 "io_combinator.m"
                            MR_Box io_combinator__T6_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_42, (MR_Integer) 0));
#line 2424 "io_combinator.m"
                            MR_Word io_combinator__Res7_44;
#line 2425 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_23, (MR_Integer) 1)));
#line 2425 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_44;
#line 2425 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_65_65;

#line 2425 "io_combinator.m"
                            {
#line 2425 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_23), &io_combinator__conv20_Res7_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_65_65);
                            }
#line 2425 "io_combinator.m"
                            io_combinator__Res7_44 = ((MR_Word) io_combinator__conv20_Res7_44);
#line 2466 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_44)) == (MR_mktag((MR_Integer) 1))))
#line 2468 "io_combinator.m"
                              *io_combinator__Res_30 = io_combinator__Res7_44;
#line 2466 "io_combinator.m"
                            else
#line 2427 "io_combinator.m"
                              {
#line 2427 "io_combinator.m"
                                MR_Box io_combinator__T7_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_44, (MR_Integer) 0));
#line 2427 "io_combinator.m"
                                MR_Word io_combinator__Res8_46;
#line 2428 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_24, (MR_Integer) 1)));
#line 2428 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_46;
#line 2428 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_66_66;

#line 2428 "io_combinator.m"
                                {
#line 2428 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_24), &io_combinator__conv23_Res8_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_66_66);
                                }
#line 2428 "io_combinator.m"
                                io_combinator__Res8_46 = ((MR_Word) io_combinator__conv23_Res8_46);
#line 2462 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_46)) == (MR_mktag((MR_Integer) 1))))
#line 2464 "io_combinator.m"
                                  *io_combinator__Res_30 = io_combinator__Res8_46;
#line 2462 "io_combinator.m"
                                else
#line 2430 "io_combinator.m"
                                  {
#line 2430 "io_combinator.m"
                                    MR_Box io_combinator__T8_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_46, (MR_Integer) 0));
#line 2430 "io_combinator.m"
                                    MR_Word io_combinator__Res9_48;
#line 2431 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_25, (MR_Integer) 1)));
#line 2431 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_48;
#line 2431 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_67_67;

#line 2431 "io_combinator.m"
                                    {
#line 2431 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_25), &io_combinator__conv26_Res9_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_67_67);
                                    }
#line 2431 "io_combinator.m"
                                    io_combinator__Res9_48 = ((MR_Word) io_combinator__conv26_Res9_48);
#line 2458 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_48)) == (MR_mktag((MR_Integer) 1))))
#line 2460 "io_combinator.m"
                                      *io_combinator__Res_30 = io_combinator__Res9_48;
#line 2458 "io_combinator.m"
                                    else
#line 2433 "io_combinator.m"
                                      {
#line 2433 "io_combinator.m"
                                        MR_Box io_combinator__T9_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_48, (MR_Integer) 0));
#line 2433 "io_combinator.m"
                                        MR_Word io_combinator__Res10_50;
#line 2434 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_26, (MR_Integer) 1)));
#line 2434 "io_combinator.m"
                                        MR_Box io_combinator__conv29_Res10_50;
#line 2434 "io_combinator.m"
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_68_68;

#line 2434 "io_combinator.m"
                                        {
#line 2434 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_26), &io_combinator__conv29_Res10_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_68_68);
                                        }
#line 2434 "io_combinator.m"
                                        io_combinator__Res10_50 = ((MR_Word) io_combinator__conv29_Res10_50);
#line 2454 "io_combinator.m"
                                        if (((MR_tag((MR_Word) io_combinator__Res10_50)) == (MR_mktag((MR_Integer) 1))))
#line 2456 "io_combinator.m"
                                          *io_combinator__Res_30 = io_combinator__Res10_50;
#line 2454 "io_combinator.m"
                                        else
#line 2436 "io_combinator.m"
                                          {
#line 2436 "io_combinator.m"
                                            MR_Box io_combinator__T10_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_50, (MR_Integer) 0));
#line 2436 "io_combinator.m"
                                            MR_Word io_combinator__Res11_52;
#line 2437 "io_combinator.m"
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_27, (MR_Integer) 1)));
#line 2437 "io_combinator.m"
                                            MR_Box io_combinator__conv32_Res11_52;
#line 2437 "io_combinator.m"
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_69_69;

#line 2437 "io_combinator.m"
                                            {
#line 2437 "io_combinator.m"
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_27), &io_combinator__conv32_Res11_52, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_69_69);
                                            }
#line 2437 "io_combinator.m"
                                            io_combinator__Res11_52 = ((MR_Word) io_combinator__conv32_Res11_52);
#line 2450 "io_combinator.m"
                                            if (((MR_tag((MR_Word) io_combinator__Res11_52)) == (MR_mktag((MR_Integer) 1))))
#line 2452 "io_combinator.m"
                                              *io_combinator__Res_30 = io_combinator__Res11_52;
#line 2450 "io_combinator.m"
                                            else
#line 2439 "io_combinator.m"
                                              {
#line 2439 "io_combinator.m"
                                                MR_Box io_combinator__T11_53 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_52, (MR_Integer) 0));
#line 2439 "io_combinator.m"
                                                MR_Word io_combinator__Res12_54;
#line 2440 "io_combinator.m"
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P12_28, (MR_Integer) 1)));
#line 2440 "io_combinator.m"
                                                MR_Box io_combinator__conv35_Res12_54;
#line 2440 "io_combinator.m"
                                                MR_Box io_combinator__conv34_STATE_VARIABLE_IO_58;

#line 2440 "io_combinator.m"
                                                {
#line 2440 "io_combinator.m"
                                                  io_combinator__func_33(((MR_Box) io_combinator__P12_28), &io_combinator__conv35_Res12_54, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv34_STATE_VARIABLE_IO_58);
                                                }
#line 2440 "io_combinator.m"
                                                io_combinator__Res12_54 = ((MR_Word) io_combinator__conv35_Res12_54);
#line 2446 "io_combinator.m"
                                                if (((MR_tag((MR_Word) io_combinator__Res12_54)) == (MR_mktag((MR_Integer) 1))))
#line 2448 "io_combinator.m"
                                                  *io_combinator__Res_30 = io_combinator__Res12_54;
#line 2446 "io_combinator.m"
                                                else
#line 2442 "io_combinator.m"
                                                  {
#line 2442 "io_combinator.m"
                                                    MR_Box io_combinator__T12_55 = (MR_hl_field(MR_mktag(0), io_combinator__Res12_54, (MR_Integer) 0));
#line 2443 "io_combinator.m"
                                                    void MR_CALL (* io_combinator__func_36)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_29, (MR_Integer) 1)));
#line 2443 "io_combinator.m"
                                                    MR_Box io_combinator__conv37_Res_30;

#line 2443 "io_combinator.m"
                                                    {
#line 2443 "io_combinator.m"
                                                      io_combinator__func_36(((MR_Box) io_combinator__Combine_29), io_combinator__T1_33, io_combinator__T2_35, io_combinator__T3_37, io_combinator__T4_39, io_combinator__T5_41, io_combinator__T6_43, io_combinator__T7_45, io_combinator__T8_47, io_combinator__T9_49, io_combinator__T10_51, io_combinator__T11_53, io_combinator__T12_55, &io_combinator__conv37_Res_30);
                                                    }
#line 2443 "io_combinator.m"
                                                    *io_combinator__Res_30 = ((MR_Word) io_combinator__conv37_Res_30);
#line 2442 "io_combinator.m"
                                                  }
#line 2439 "io_combinator.m"
                                              }
#line 2436 "io_combinator.m"
                                          }
#line 2433 "io_combinator.m"
                                      }
#line 2430 "io_combinator.m"
                                  }
#line 2427 "io_combinator.m"
                              }
#line 2424 "io_combinator.m"
                          }
#line 2421 "io_combinator.m"
                      }
#line 2418 "io_combinator.m"
                  }
#line 2415 "io_combinator.m"
              }
#line 2412 "io_combinator.m"
          }
#line 2409 "io_combinator.m"
      }
#line 2406 "io_combinator.m"
  }
#line 666 "io_combinator.m"
}

#line 636 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_11_15_p_0(
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_76,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_77,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_78,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_79,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_80,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_81,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_82,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_83,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_84,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_85,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T11_86,
#line 636 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_87,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P1_16,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P2_17,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P3_18,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P4_19,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P5_20,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P6_21,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P7_22,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P8_23,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P9_24,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P10_25,
#line 636 "io_combinator.m"
  MR_Word io_combinator__P11_26,
#line 636 "io_combinator.m"
  MR_Word io_combinator__Combine_27,
#line 636 "io_combinator.m"
  MR_Word * io_combinator__Res_28)
#line 636 "io_combinator.m"
{
#line 2323 "io_combinator.m"
  {
#line 2323 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2323 "io_combinator.m"
    MR_Word io_combinator__Res1_30;
#line 2324 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_16, (MR_Integer) 1)));
#line 2324 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_30;
#line 2324 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_55_55;

#line 2324 "io_combinator.m"
    {
#line 2324 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_16), &io_combinator__conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_55_55);
    }
#line 2324 "io_combinator.m"
    io_combinator__Res1_30 = ((MR_Word) io_combinator__conv2_Res1_30);
#line 2400 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_30)) == (MR_mktag((MR_Integer) 1))))
#line 2402 "io_combinator.m"
      *io_combinator__Res_28 = io_combinator__Res1_30;
#line 2400 "io_combinator.m"
    else
#line 2326 "io_combinator.m"
      {
#line 2326 "io_combinator.m"
        MR_Box io_combinator__T1_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_30, (MR_Integer) 0));
#line 2326 "io_combinator.m"
        MR_Word io_combinator__Res2_32;
#line 2327 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_17, (MR_Integer) 1)));
#line 2327 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_32;
#line 2327 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_56_56;

#line 2327 "io_combinator.m"
        {
#line 2327 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_17), &io_combinator__conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_56_56);
        }
#line 2327 "io_combinator.m"
        io_combinator__Res2_32 = ((MR_Word) io_combinator__conv5_Res2_32);
#line 2396 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_32)) == (MR_mktag((MR_Integer) 1))))
#line 2398 "io_combinator.m"
          *io_combinator__Res_28 = io_combinator__Res2_32;
#line 2396 "io_combinator.m"
        else
#line 2329 "io_combinator.m"
          {
#line 2329 "io_combinator.m"
            MR_Box io_combinator__T2_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_32, (MR_Integer) 0));
#line 2329 "io_combinator.m"
            MR_Word io_combinator__Res3_34;
#line 2330 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_18, (MR_Integer) 1)));
#line 2330 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_34;
#line 2330 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_57_57;

#line 2330 "io_combinator.m"
            {
#line 2330 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_18), &io_combinator__conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_57_57);
            }
#line 2330 "io_combinator.m"
            io_combinator__Res3_34 = ((MR_Word) io_combinator__conv8_Res3_34);
#line 2392 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_34)) == (MR_mktag((MR_Integer) 1))))
#line 2394 "io_combinator.m"
              *io_combinator__Res_28 = io_combinator__Res3_34;
#line 2392 "io_combinator.m"
            else
#line 2332 "io_combinator.m"
              {
#line 2332 "io_combinator.m"
                MR_Box io_combinator__T3_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_34, (MR_Integer) 0));
#line 2332 "io_combinator.m"
                MR_Word io_combinator__Res4_36;
#line 2333 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_19, (MR_Integer) 1)));
#line 2333 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_36;
#line 2333 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_58_58;

#line 2333 "io_combinator.m"
                {
#line 2333 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_19), &io_combinator__conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_58_58);
                }
#line 2333 "io_combinator.m"
                io_combinator__Res4_36 = ((MR_Word) io_combinator__conv11_Res4_36);
#line 2388 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_36)) == (MR_mktag((MR_Integer) 1))))
#line 2390 "io_combinator.m"
                  *io_combinator__Res_28 = io_combinator__Res4_36;
#line 2388 "io_combinator.m"
                else
#line 2335 "io_combinator.m"
                  {
#line 2335 "io_combinator.m"
                    MR_Box io_combinator__T4_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_36, (MR_Integer) 0));
#line 2335 "io_combinator.m"
                    MR_Word io_combinator__Res5_38;
#line 2336 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_20, (MR_Integer) 1)));
#line 2336 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_38;
#line 2336 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_59_59;

#line 2336 "io_combinator.m"
                    {
#line 2336 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_20), &io_combinator__conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_59_59);
                    }
#line 2336 "io_combinator.m"
                    io_combinator__Res5_38 = ((MR_Word) io_combinator__conv14_Res5_38);
#line 2384 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_38)) == (MR_mktag((MR_Integer) 1))))
#line 2386 "io_combinator.m"
                      *io_combinator__Res_28 = io_combinator__Res5_38;
#line 2384 "io_combinator.m"
                    else
#line 2338 "io_combinator.m"
                      {
#line 2338 "io_combinator.m"
                        MR_Box io_combinator__T5_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_38, (MR_Integer) 0));
#line 2338 "io_combinator.m"
                        MR_Word io_combinator__Res6_40;
#line 2339 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_21, (MR_Integer) 1)));
#line 2339 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_40;
#line 2339 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_60_60;

#line 2339 "io_combinator.m"
                        {
#line 2339 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_21), &io_combinator__conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_60_60);
                        }
#line 2339 "io_combinator.m"
                        io_combinator__Res6_40 = ((MR_Word) io_combinator__conv17_Res6_40);
#line 2380 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_40)) == (MR_mktag((MR_Integer) 1))))
#line 2382 "io_combinator.m"
                          *io_combinator__Res_28 = io_combinator__Res6_40;
#line 2380 "io_combinator.m"
                        else
#line 2341 "io_combinator.m"
                          {
#line 2341 "io_combinator.m"
                            MR_Box io_combinator__T6_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_40, (MR_Integer) 0));
#line 2341 "io_combinator.m"
                            MR_Word io_combinator__Res7_42;
#line 2342 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_22, (MR_Integer) 1)));
#line 2342 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_42;
#line 2342 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_61_61;

#line 2342 "io_combinator.m"
                            {
#line 2342 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_22), &io_combinator__conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_61_61);
                            }
#line 2342 "io_combinator.m"
                            io_combinator__Res7_42 = ((MR_Word) io_combinator__conv20_Res7_42);
#line 2376 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_42)) == (MR_mktag((MR_Integer) 1))))
#line 2378 "io_combinator.m"
                              *io_combinator__Res_28 = io_combinator__Res7_42;
#line 2376 "io_combinator.m"
                            else
#line 2344 "io_combinator.m"
                              {
#line 2344 "io_combinator.m"
                                MR_Box io_combinator__T7_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_42, (MR_Integer) 0));
#line 2344 "io_combinator.m"
                                MR_Word io_combinator__Res8_44;
#line 2345 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_23, (MR_Integer) 1)));
#line 2345 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_44;
#line 2345 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_62_62;

#line 2345 "io_combinator.m"
                                {
#line 2345 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_23), &io_combinator__conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_62_62);
                                }
#line 2345 "io_combinator.m"
                                io_combinator__Res8_44 = ((MR_Word) io_combinator__conv23_Res8_44);
#line 2372 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_44)) == (MR_mktag((MR_Integer) 1))))
#line 2374 "io_combinator.m"
                                  *io_combinator__Res_28 = io_combinator__Res8_44;
#line 2372 "io_combinator.m"
                                else
#line 2347 "io_combinator.m"
                                  {
#line 2347 "io_combinator.m"
                                    MR_Box io_combinator__T8_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_44, (MR_Integer) 0));
#line 2347 "io_combinator.m"
                                    MR_Word io_combinator__Res9_46;
#line 2348 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_24, (MR_Integer) 1)));
#line 2348 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_46;
#line 2348 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_63_63;

#line 2348 "io_combinator.m"
                                    {
#line 2348 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_24), &io_combinator__conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_63_63);
                                    }
#line 2348 "io_combinator.m"
                                    io_combinator__Res9_46 = ((MR_Word) io_combinator__conv26_Res9_46);
#line 2368 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_46)) == (MR_mktag((MR_Integer) 1))))
#line 2370 "io_combinator.m"
                                      *io_combinator__Res_28 = io_combinator__Res9_46;
#line 2368 "io_combinator.m"
                                    else
#line 2350 "io_combinator.m"
                                      {
#line 2350 "io_combinator.m"
                                        MR_Box io_combinator__T9_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_46, (MR_Integer) 0));
#line 2350 "io_combinator.m"
                                        MR_Word io_combinator__Res10_48;
#line 2351 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_25, (MR_Integer) 1)));
#line 2351 "io_combinator.m"
                                        MR_Box io_combinator__conv29_Res10_48;
#line 2351 "io_combinator.m"
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_64_64;

#line 2351 "io_combinator.m"
                                        {
#line 2351 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_25), &io_combinator__conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_64_64);
                                        }
#line 2351 "io_combinator.m"
                                        io_combinator__Res10_48 = ((MR_Word) io_combinator__conv29_Res10_48);
#line 2364 "io_combinator.m"
                                        if (((MR_tag((MR_Word) io_combinator__Res10_48)) == (MR_mktag((MR_Integer) 1))))
#line 2366 "io_combinator.m"
                                          *io_combinator__Res_28 = io_combinator__Res10_48;
#line 2364 "io_combinator.m"
                                        else
#line 2353 "io_combinator.m"
                                          {
#line 2353 "io_combinator.m"
                                            MR_Box io_combinator__T10_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_48, (MR_Integer) 0));
#line 2353 "io_combinator.m"
                                            MR_Word io_combinator__Res11_50;
#line 2354 "io_combinator.m"
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_26, (MR_Integer) 1)));
#line 2354 "io_combinator.m"
                                            MR_Box io_combinator__conv32_Res11_50;
#line 2354 "io_combinator.m"
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_54;

#line 2354 "io_combinator.m"
                                            {
#line 2354 "io_combinator.m"
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_26), &io_combinator__conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_54);
                                            }
#line 2354 "io_combinator.m"
                                            io_combinator__Res11_50 = ((MR_Word) io_combinator__conv32_Res11_50);
#line 2360 "io_combinator.m"
                                            if (((MR_tag((MR_Word) io_combinator__Res11_50)) == (MR_mktag((MR_Integer) 1))))
#line 2362 "io_combinator.m"
                                              *io_combinator__Res_28 = io_combinator__Res11_50;
#line 2360 "io_combinator.m"
                                            else
#line 2356 "io_combinator.m"
                                              {
#line 2356 "io_combinator.m"
                                                MR_Box io_combinator__T11_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_50, (MR_Integer) 0));
#line 2357 "io_combinator.m"
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_27, (MR_Integer) 1)));
#line 2357 "io_combinator.m"
                                                MR_Box io_combinator__conv34_Res_28;

#line 2357 "io_combinator.m"
                                                {
#line 2357 "io_combinator.m"
                                                  io_combinator__func_33(((MR_Box) io_combinator__Combine_27), io_combinator__T1_31, io_combinator__T2_33, io_combinator__T3_35, io_combinator__T4_37, io_combinator__T5_39, io_combinator__T6_41, io_combinator__T7_43, io_combinator__T8_45, io_combinator__T9_47, io_combinator__T10_49, io_combinator__T11_51, &io_combinator__conv34_Res_28);
                                                }
#line 2357 "io_combinator.m"
                                                *io_combinator__Res_28 = ((MR_Word) io_combinator__conv34_Res_28);
#line 2356 "io_combinator.m"
                                              }
#line 2353 "io_combinator.m"
                                          }
#line 2350 "io_combinator.m"
                                      }
#line 2347 "io_combinator.m"
                                  }
#line 2344 "io_combinator.m"
                              }
#line 2341 "io_combinator.m"
                          }
#line 2338 "io_combinator.m"
                      }
#line 2335 "io_combinator.m"
                  }
#line 2332 "io_combinator.m"
              }
#line 2329 "io_combinator.m"
          }
#line 2326 "io_combinator.m"
      }
#line 2323 "io_combinator.m"
  }
#line 636 "io_combinator.m"
}

#line 608 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_10_14_p_0(
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_70,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_71,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_72,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_73,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_74,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_75,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_76,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_77,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_78,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_79,
#line 608 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_80,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P1_15,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P2_16,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P3_17,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P4_18,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P5_19,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P6_20,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P7_21,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P8_22,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P9_23,
#line 608 "io_combinator.m"
  MR_Word io_combinator__P10_24,
#line 608 "io_combinator.m"
  MR_Word io_combinator__Combine_25,
#line 608 "io_combinator.m"
  MR_Word * io_combinator__Res_26)
#line 608 "io_combinator.m"
{
#line 2248 "io_combinator.m"
  {
#line 2248 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2248 "io_combinator.m"
    MR_Word io_combinator__Res1_28;
#line 2249 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_15, (MR_Integer) 1)));
#line 2249 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_28;
#line 2249 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_51_51;

#line 2249 "io_combinator.m"
    {
#line 2249 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_15), &io_combinator__conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_51_51);
    }
#line 2249 "io_combinator.m"
    io_combinator__Res1_28 = ((MR_Word) io_combinator__conv2_Res1_28);
#line 2317 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_28)) == (MR_mktag((MR_Integer) 1))))
#line 2319 "io_combinator.m"
      *io_combinator__Res_26 = io_combinator__Res1_28;
#line 2317 "io_combinator.m"
    else
#line 2251 "io_combinator.m"
      {
#line 2251 "io_combinator.m"
        MR_Box io_combinator__T1_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_28, (MR_Integer) 0));
#line 2251 "io_combinator.m"
        MR_Word io_combinator__Res2_30;
#line 2252 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_16, (MR_Integer) 1)));
#line 2252 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_30;
#line 2252 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_52_52;

#line 2252 "io_combinator.m"
        {
#line 2252 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_16), &io_combinator__conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_52_52);
        }
#line 2252 "io_combinator.m"
        io_combinator__Res2_30 = ((MR_Word) io_combinator__conv5_Res2_30);
#line 2313 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_30)) == (MR_mktag((MR_Integer) 1))))
#line 2315 "io_combinator.m"
          *io_combinator__Res_26 = io_combinator__Res2_30;
#line 2313 "io_combinator.m"
        else
#line 2254 "io_combinator.m"
          {
#line 2254 "io_combinator.m"
            MR_Box io_combinator__T2_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_30, (MR_Integer) 0));
#line 2254 "io_combinator.m"
            MR_Word io_combinator__Res3_32;
#line 2255 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_17, (MR_Integer) 1)));
#line 2255 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_32;
#line 2255 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_53_53;

#line 2255 "io_combinator.m"
            {
#line 2255 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_17), &io_combinator__conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_53_53);
            }
#line 2255 "io_combinator.m"
            io_combinator__Res3_32 = ((MR_Word) io_combinator__conv8_Res3_32);
#line 2309 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2311 "io_combinator.m"
              *io_combinator__Res_26 = io_combinator__Res3_32;
#line 2309 "io_combinator.m"
            else
#line 2257 "io_combinator.m"
              {
#line 2257 "io_combinator.m"
                MR_Box io_combinator__T3_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_32, (MR_Integer) 0));
#line 2257 "io_combinator.m"
                MR_Word io_combinator__Res4_34;
#line 2258 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_18, (MR_Integer) 1)));
#line 2258 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_34;
#line 2258 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_54_54;

#line 2258 "io_combinator.m"
                {
#line 2258 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_18), &io_combinator__conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_54_54);
                }
#line 2258 "io_combinator.m"
                io_combinator__Res4_34 = ((MR_Word) io_combinator__conv11_Res4_34);
#line 2305 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_34)) == (MR_mktag((MR_Integer) 1))))
#line 2307 "io_combinator.m"
                  *io_combinator__Res_26 = io_combinator__Res4_34;
#line 2305 "io_combinator.m"
                else
#line 2260 "io_combinator.m"
                  {
#line 2260 "io_combinator.m"
                    MR_Box io_combinator__T4_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_34, (MR_Integer) 0));
#line 2260 "io_combinator.m"
                    MR_Word io_combinator__Res5_36;
#line 2261 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_19, (MR_Integer) 1)));
#line 2261 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_36;
#line 2261 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_55_55;

#line 2261 "io_combinator.m"
                    {
#line 2261 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_19), &io_combinator__conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_55_55);
                    }
#line 2261 "io_combinator.m"
                    io_combinator__Res5_36 = ((MR_Word) io_combinator__conv14_Res5_36);
#line 2301 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_36)) == (MR_mktag((MR_Integer) 1))))
#line 2303 "io_combinator.m"
                      *io_combinator__Res_26 = io_combinator__Res5_36;
#line 2301 "io_combinator.m"
                    else
#line 2263 "io_combinator.m"
                      {
#line 2263 "io_combinator.m"
                        MR_Box io_combinator__T5_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_36, (MR_Integer) 0));
#line 2263 "io_combinator.m"
                        MR_Word io_combinator__Res6_38;
#line 2264 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_20, (MR_Integer) 1)));
#line 2264 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_38;
#line 2264 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_56_56;

#line 2264 "io_combinator.m"
                        {
#line 2264 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_20), &io_combinator__conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_56_56);
                        }
#line 2264 "io_combinator.m"
                        io_combinator__Res6_38 = ((MR_Word) io_combinator__conv17_Res6_38);
#line 2297 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_38)) == (MR_mktag((MR_Integer) 1))))
#line 2299 "io_combinator.m"
                          *io_combinator__Res_26 = io_combinator__Res6_38;
#line 2297 "io_combinator.m"
                        else
#line 2266 "io_combinator.m"
                          {
#line 2266 "io_combinator.m"
                            MR_Box io_combinator__T6_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_38, (MR_Integer) 0));
#line 2266 "io_combinator.m"
                            MR_Word io_combinator__Res7_40;
#line 2267 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_21, (MR_Integer) 1)));
#line 2267 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_40;
#line 2267 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_57_57;

#line 2267 "io_combinator.m"
                            {
#line 2267 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_21), &io_combinator__conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_57_57);
                            }
#line 2267 "io_combinator.m"
                            io_combinator__Res7_40 = ((MR_Word) io_combinator__conv20_Res7_40);
#line 2293 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_40)) == (MR_mktag((MR_Integer) 1))))
#line 2295 "io_combinator.m"
                              *io_combinator__Res_26 = io_combinator__Res7_40;
#line 2293 "io_combinator.m"
                            else
#line 2269 "io_combinator.m"
                              {
#line 2269 "io_combinator.m"
                                MR_Box io_combinator__T7_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_40, (MR_Integer) 0));
#line 2269 "io_combinator.m"
                                MR_Word io_combinator__Res8_42;
#line 2270 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_22, (MR_Integer) 1)));
#line 2270 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_42;
#line 2270 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_58_58;

#line 2270 "io_combinator.m"
                                {
#line 2270 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_22), &io_combinator__conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_58_58);
                                }
#line 2270 "io_combinator.m"
                                io_combinator__Res8_42 = ((MR_Word) io_combinator__conv23_Res8_42);
#line 2289 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_42)) == (MR_mktag((MR_Integer) 1))))
#line 2291 "io_combinator.m"
                                  *io_combinator__Res_26 = io_combinator__Res8_42;
#line 2289 "io_combinator.m"
                                else
#line 2272 "io_combinator.m"
                                  {
#line 2272 "io_combinator.m"
                                    MR_Box io_combinator__T8_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_42, (MR_Integer) 0));
#line 2272 "io_combinator.m"
                                    MR_Word io_combinator__Res9_44;
#line 2273 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_23, (MR_Integer) 1)));
#line 2273 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_44;
#line 2273 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_59_59;

#line 2273 "io_combinator.m"
                                    {
#line 2273 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_23), &io_combinator__conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_59_59);
                                    }
#line 2273 "io_combinator.m"
                                    io_combinator__Res9_44 = ((MR_Word) io_combinator__conv26_Res9_44);
#line 2285 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_44)) == (MR_mktag((MR_Integer) 1))))
#line 2287 "io_combinator.m"
                                      *io_combinator__Res_26 = io_combinator__Res9_44;
#line 2285 "io_combinator.m"
                                    else
#line 2275 "io_combinator.m"
                                      {
#line 2275 "io_combinator.m"
                                        MR_Box io_combinator__T9_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_44, (MR_Integer) 0));
#line 2275 "io_combinator.m"
                                        MR_Word io_combinator__Res10_46;
#line 2276 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_24, (MR_Integer) 1)));
#line 2276 "io_combinator.m"
                                        MR_Box io_combinator__conv29_Res10_46;
#line 2276 "io_combinator.m"
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_50;

#line 2276 "io_combinator.m"
                                        {
#line 2276 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_24), &io_combinator__conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_50);
                                        }
#line 2276 "io_combinator.m"
                                        io_combinator__Res10_46 = ((MR_Word) io_combinator__conv29_Res10_46);
#line 2281 "io_combinator.m"
                                        if (((MR_tag((MR_Word) io_combinator__Res10_46)) == (MR_mktag((MR_Integer) 1))))
#line 2283 "io_combinator.m"
                                          *io_combinator__Res_26 = io_combinator__Res10_46;
#line 2281 "io_combinator.m"
                                        else
#line 2278 "io_combinator.m"
                                          {
#line 2278 "io_combinator.m"
                                            MR_Box io_combinator__T10_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_46, (MR_Integer) 0));
#line 2279 "io_combinator.m"
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_25, (MR_Integer) 1)));
#line 2279 "io_combinator.m"
                                            MR_Box io_combinator__conv31_Res_26;

#line 2279 "io_combinator.m"
                                            {
#line 2279 "io_combinator.m"
                                              io_combinator__func_30(((MR_Box) io_combinator__Combine_25), io_combinator__T1_29, io_combinator__T2_31, io_combinator__T3_33, io_combinator__T4_35, io_combinator__T5_37, io_combinator__T6_39, io_combinator__T7_41, io_combinator__T8_43, io_combinator__T9_45, io_combinator__T10_47, &io_combinator__conv31_Res_26);
                                            }
#line 2279 "io_combinator.m"
                                            *io_combinator__Res_26 = ((MR_Word) io_combinator__conv31_Res_26);
#line 2278 "io_combinator.m"
                                          }
#line 2275 "io_combinator.m"
                                      }
#line 2272 "io_combinator.m"
                                  }
#line 2269 "io_combinator.m"
                              }
#line 2266 "io_combinator.m"
                          }
#line 2263 "io_combinator.m"
                      }
#line 2260 "io_combinator.m"
                  }
#line 2257 "io_combinator.m"
              }
#line 2254 "io_combinator.m"
          }
#line 2251 "io_combinator.m"
      }
#line 2248 "io_combinator.m"
  }
#line 608 "io_combinator.m"
}

#line 582 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_9_13_p_0(
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_64,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_65,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_66,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_67,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_68,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_69,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_70,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_71,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_72,
#line 582 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_73,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P1_14,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P2_15,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P3_16,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P4_17,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P5_18,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P6_19,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P7_20,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P8_21,
#line 582 "io_combinator.m"
  MR_Word io_combinator__P9_22,
#line 582 "io_combinator.m"
  MR_Word io_combinator__Combine_23,
#line 582 "io_combinator.m"
  MR_Word * io_combinator__Res_24)
#line 582 "io_combinator.m"
{
#line 2180 "io_combinator.m"
  {
#line 2180 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2180 "io_combinator.m"
    MR_Word io_combinator__Res1_26;
#line 2181 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_14, (MR_Integer) 1)));
#line 2181 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_26;
#line 2181 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_47_47;

#line 2181 "io_combinator.m"
    {
#line 2181 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_14), &io_combinator__conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_47_47);
    }
#line 2181 "io_combinator.m"
    io_combinator__Res1_26 = ((MR_Word) io_combinator__conv2_Res1_26);
#line 2242 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_26)) == (MR_mktag((MR_Integer) 1))))
#line 2244 "io_combinator.m"
      *io_combinator__Res_24 = io_combinator__Res1_26;
#line 2242 "io_combinator.m"
    else
#line 2183 "io_combinator.m"
      {
#line 2183 "io_combinator.m"
        MR_Box io_combinator__T1_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_26, (MR_Integer) 0));
#line 2183 "io_combinator.m"
        MR_Word io_combinator__Res2_28;
#line 2184 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_15, (MR_Integer) 1)));
#line 2184 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_28;
#line 2184 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_48_48;

#line 2184 "io_combinator.m"
        {
#line 2184 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_15), &io_combinator__conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_48_48);
        }
#line 2184 "io_combinator.m"
        io_combinator__Res2_28 = ((MR_Word) io_combinator__conv5_Res2_28);
#line 2238 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2240 "io_combinator.m"
          *io_combinator__Res_24 = io_combinator__Res2_28;
#line 2238 "io_combinator.m"
        else
#line 2186 "io_combinator.m"
          {
#line 2186 "io_combinator.m"
            MR_Box io_combinator__T2_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_28, (MR_Integer) 0));
#line 2186 "io_combinator.m"
            MR_Word io_combinator__Res3_30;
#line 2187 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_16, (MR_Integer) 1)));
#line 2187 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_30;
#line 2187 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_49_49;

#line 2187 "io_combinator.m"
            {
#line 2187 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_16), &io_combinator__conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_49_49);
            }
#line 2187 "io_combinator.m"
            io_combinator__Res3_30 = ((MR_Word) io_combinator__conv8_Res3_30);
#line 2234 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_30)) == (MR_mktag((MR_Integer) 1))))
#line 2236 "io_combinator.m"
              *io_combinator__Res_24 = io_combinator__Res3_30;
#line 2234 "io_combinator.m"
            else
#line 2189 "io_combinator.m"
              {
#line 2189 "io_combinator.m"
                MR_Box io_combinator__T3_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_30, (MR_Integer) 0));
#line 2189 "io_combinator.m"
                MR_Word io_combinator__Res4_32;
#line 2190 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_17, (MR_Integer) 1)));
#line 2190 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_32;
#line 2190 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_50_50;

#line 2190 "io_combinator.m"
                {
#line 2190 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_17), &io_combinator__conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_50_50);
                }
#line 2190 "io_combinator.m"
                io_combinator__Res4_32 = ((MR_Word) io_combinator__conv11_Res4_32);
#line 2230 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_32)) == (MR_mktag((MR_Integer) 1))))
#line 2232 "io_combinator.m"
                  *io_combinator__Res_24 = io_combinator__Res4_32;
#line 2230 "io_combinator.m"
                else
#line 2192 "io_combinator.m"
                  {
#line 2192 "io_combinator.m"
                    MR_Box io_combinator__T4_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_32, (MR_Integer) 0));
#line 2192 "io_combinator.m"
                    MR_Word io_combinator__Res5_34;
#line 2193 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_18, (MR_Integer) 1)));
#line 2193 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_34;
#line 2193 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_51_51;

#line 2193 "io_combinator.m"
                    {
#line 2193 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_18), &io_combinator__conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_51_51);
                    }
#line 2193 "io_combinator.m"
                    io_combinator__Res5_34 = ((MR_Word) io_combinator__conv14_Res5_34);
#line 2226 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_34)) == (MR_mktag((MR_Integer) 1))))
#line 2228 "io_combinator.m"
                      *io_combinator__Res_24 = io_combinator__Res5_34;
#line 2226 "io_combinator.m"
                    else
#line 2195 "io_combinator.m"
                      {
#line 2195 "io_combinator.m"
                        MR_Box io_combinator__T5_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_34, (MR_Integer) 0));
#line 2195 "io_combinator.m"
                        MR_Word io_combinator__Res6_36;
#line 2196 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_19, (MR_Integer) 1)));
#line 2196 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_36;
#line 2196 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_52_52;

#line 2196 "io_combinator.m"
                        {
#line 2196 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_19), &io_combinator__conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_52_52);
                        }
#line 2196 "io_combinator.m"
                        io_combinator__Res6_36 = ((MR_Word) io_combinator__conv17_Res6_36);
#line 2222 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_36)) == (MR_mktag((MR_Integer) 1))))
#line 2224 "io_combinator.m"
                          *io_combinator__Res_24 = io_combinator__Res6_36;
#line 2222 "io_combinator.m"
                        else
#line 2198 "io_combinator.m"
                          {
#line 2198 "io_combinator.m"
                            MR_Box io_combinator__T6_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_36, (MR_Integer) 0));
#line 2198 "io_combinator.m"
                            MR_Word io_combinator__Res7_38;
#line 2199 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_20, (MR_Integer) 1)));
#line 2199 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_38;
#line 2199 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_53_53;

#line 2199 "io_combinator.m"
                            {
#line 2199 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_20), &io_combinator__conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_53_53);
                            }
#line 2199 "io_combinator.m"
                            io_combinator__Res7_38 = ((MR_Word) io_combinator__conv20_Res7_38);
#line 2218 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_38)) == (MR_mktag((MR_Integer) 1))))
#line 2220 "io_combinator.m"
                              *io_combinator__Res_24 = io_combinator__Res7_38;
#line 2218 "io_combinator.m"
                            else
#line 2201 "io_combinator.m"
                              {
#line 2201 "io_combinator.m"
                                MR_Box io_combinator__T7_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_38, (MR_Integer) 0));
#line 2201 "io_combinator.m"
                                MR_Word io_combinator__Res8_40;
#line 2202 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_21, (MR_Integer) 1)));
#line 2202 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_40;
#line 2202 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_54_54;

#line 2202 "io_combinator.m"
                                {
#line 2202 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_21), &io_combinator__conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_54_54);
                                }
#line 2202 "io_combinator.m"
                                io_combinator__Res8_40 = ((MR_Word) io_combinator__conv23_Res8_40);
#line 2214 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_40)) == (MR_mktag((MR_Integer) 1))))
#line 2216 "io_combinator.m"
                                  *io_combinator__Res_24 = io_combinator__Res8_40;
#line 2214 "io_combinator.m"
                                else
#line 2204 "io_combinator.m"
                                  {
#line 2204 "io_combinator.m"
                                    MR_Box io_combinator__T8_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_40, (MR_Integer) 0));
#line 2204 "io_combinator.m"
                                    MR_Word io_combinator__Res9_42;
#line 2205 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_22, (MR_Integer) 1)));
#line 2205 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_42;
#line 2205 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_46;

#line 2205 "io_combinator.m"
                                    {
#line 2205 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_22), &io_combinator__conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_46);
                                    }
#line 2205 "io_combinator.m"
                                    io_combinator__Res9_42 = ((MR_Word) io_combinator__conv26_Res9_42);
#line 2210 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_42)) == (MR_mktag((MR_Integer) 1))))
#line 2212 "io_combinator.m"
                                      *io_combinator__Res_24 = io_combinator__Res9_42;
#line 2210 "io_combinator.m"
                                    else
#line 2207 "io_combinator.m"
                                      {
#line 2207 "io_combinator.m"
                                        MR_Box io_combinator__T9_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_42, (MR_Integer) 0));
#line 2208 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_23, (MR_Integer) 1)));
#line 2208 "io_combinator.m"
                                        MR_Box io_combinator__conv28_Res_24;

#line 2208 "io_combinator.m"
                                        {
#line 2208 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__Combine_23), io_combinator__T1_27, io_combinator__T2_29, io_combinator__T3_31, io_combinator__T4_33, io_combinator__T5_35, io_combinator__T6_37, io_combinator__T7_39, io_combinator__T8_41, io_combinator__T9_43, &io_combinator__conv28_Res_24);
                                        }
#line 2208 "io_combinator.m"
                                        *io_combinator__Res_24 = ((MR_Word) io_combinator__conv28_Res_24);
#line 2207 "io_combinator.m"
                                      }
#line 2204 "io_combinator.m"
                                  }
#line 2201 "io_combinator.m"
                              }
#line 2198 "io_combinator.m"
                          }
#line 2195 "io_combinator.m"
                      }
#line 2192 "io_combinator.m"
                  }
#line 2189 "io_combinator.m"
              }
#line 2186 "io_combinator.m"
          }
#line 2183 "io_combinator.m"
      }
#line 2180 "io_combinator.m"
  }
#line 582 "io_combinator.m"
}

#line 558 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_8_12_p_0(
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_58,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_59,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_60,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_61,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_62,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_63,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_64,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_65,
#line 558 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_66,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P1_13,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P2_14,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P3_15,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P4_16,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P5_17,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P6_18,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P7_19,
#line 558 "io_combinator.m"
  MR_Word io_combinator__P8_20,
#line 558 "io_combinator.m"
  MR_Word io_combinator__Combine_21,
#line 558 "io_combinator.m"
  MR_Word * io_combinator__Res_22)
#line 558 "io_combinator.m"
{
#line 2119 "io_combinator.m"
  {
#line 2119 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2119 "io_combinator.m"
    MR_Word io_combinator__Res1_24;
#line 2120 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_13, (MR_Integer) 1)));
#line 2120 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_24;
#line 2120 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_43_43;

#line 2120 "io_combinator.m"
    {
#line 2120 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_13), &io_combinator__conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 2120 "io_combinator.m"
    io_combinator__Res1_24 = ((MR_Word) io_combinator__conv2_Res1_24);
#line 2174 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_24)) == (MR_mktag((MR_Integer) 1))))
#line 2176 "io_combinator.m"
      *io_combinator__Res_22 = io_combinator__Res1_24;
#line 2174 "io_combinator.m"
    else
#line 2122 "io_combinator.m"
      {
#line 2122 "io_combinator.m"
        MR_Box io_combinator__T1_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_24, (MR_Integer) 0));
#line 2122 "io_combinator.m"
        MR_Word io_combinator__Res2_26;
#line 2123 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_14, (MR_Integer) 1)));
#line 2123 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_26;
#line 2123 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_44_44;

#line 2123 "io_combinator.m"
        {
#line 2123 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_14), &io_combinator__conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_44_44);
        }
#line 2123 "io_combinator.m"
        io_combinator__Res2_26 = ((MR_Word) io_combinator__conv5_Res2_26);
#line 2170 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_26)) == (MR_mktag((MR_Integer) 1))))
#line 2172 "io_combinator.m"
          *io_combinator__Res_22 = io_combinator__Res2_26;
#line 2170 "io_combinator.m"
        else
#line 2125 "io_combinator.m"
          {
#line 2125 "io_combinator.m"
            MR_Box io_combinator__T2_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_26, (MR_Integer) 0));
#line 2125 "io_combinator.m"
            MR_Word io_combinator__Res3_28;
#line 2126 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_15, (MR_Integer) 1)));
#line 2126 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_28;
#line 2126 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_45_45;

#line 2126 "io_combinator.m"
            {
#line 2126 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_15), &io_combinator__conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_45_45);
            }
#line 2126 "io_combinator.m"
            io_combinator__Res3_28 = ((MR_Word) io_combinator__conv8_Res3_28);
#line 2166 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_28)) == (MR_mktag((MR_Integer) 1))))
#line 2168 "io_combinator.m"
              *io_combinator__Res_22 = io_combinator__Res3_28;
#line 2166 "io_combinator.m"
            else
#line 2128 "io_combinator.m"
              {
#line 2128 "io_combinator.m"
                MR_Box io_combinator__T3_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_28, (MR_Integer) 0));
#line 2128 "io_combinator.m"
                MR_Word io_combinator__Res4_30;
#line 2129 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_16, (MR_Integer) 1)));
#line 2129 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_30;
#line 2129 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_46_46;

#line 2129 "io_combinator.m"
                {
#line 2129 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_16), &io_combinator__conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_46_46);
                }
#line 2129 "io_combinator.m"
                io_combinator__Res4_30 = ((MR_Word) io_combinator__conv11_Res4_30);
#line 2162 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_30)) == (MR_mktag((MR_Integer) 1))))
#line 2164 "io_combinator.m"
                  *io_combinator__Res_22 = io_combinator__Res4_30;
#line 2162 "io_combinator.m"
                else
#line 2131 "io_combinator.m"
                  {
#line 2131 "io_combinator.m"
                    MR_Box io_combinator__T4_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_30, (MR_Integer) 0));
#line 2131 "io_combinator.m"
                    MR_Word io_combinator__Res5_32;
#line 2132 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_17, (MR_Integer) 1)));
#line 2132 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_32;
#line 2132 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_47_47;

#line 2132 "io_combinator.m"
                    {
#line 2132 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_17), &io_combinator__conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_47_47);
                    }
#line 2132 "io_combinator.m"
                    io_combinator__Res5_32 = ((MR_Word) io_combinator__conv14_Res5_32);
#line 2158 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_32)) == (MR_mktag((MR_Integer) 1))))
#line 2160 "io_combinator.m"
                      *io_combinator__Res_22 = io_combinator__Res5_32;
#line 2158 "io_combinator.m"
                    else
#line 2134 "io_combinator.m"
                      {
#line 2134 "io_combinator.m"
                        MR_Box io_combinator__T5_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_32, (MR_Integer) 0));
#line 2134 "io_combinator.m"
                        MR_Word io_combinator__Res6_34;
#line 2135 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_18, (MR_Integer) 1)));
#line 2135 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_34;
#line 2135 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_48_48;

#line 2135 "io_combinator.m"
                        {
#line 2135 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_18), &io_combinator__conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_48_48);
                        }
#line 2135 "io_combinator.m"
                        io_combinator__Res6_34 = ((MR_Word) io_combinator__conv17_Res6_34);
#line 2154 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_34)) == (MR_mktag((MR_Integer) 1))))
#line 2156 "io_combinator.m"
                          *io_combinator__Res_22 = io_combinator__Res6_34;
#line 2154 "io_combinator.m"
                        else
#line 2137 "io_combinator.m"
                          {
#line 2137 "io_combinator.m"
                            MR_Box io_combinator__T6_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_34, (MR_Integer) 0));
#line 2137 "io_combinator.m"
                            MR_Word io_combinator__Res7_36;
#line 2138 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_19, (MR_Integer) 1)));
#line 2138 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_36;
#line 2138 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_49_49;

#line 2138 "io_combinator.m"
                            {
#line 2138 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_19), &io_combinator__conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_49_49);
                            }
#line 2138 "io_combinator.m"
                            io_combinator__Res7_36 = ((MR_Word) io_combinator__conv20_Res7_36);
#line 2150 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_36)) == (MR_mktag((MR_Integer) 1))))
#line 2152 "io_combinator.m"
                              *io_combinator__Res_22 = io_combinator__Res7_36;
#line 2150 "io_combinator.m"
                            else
#line 2140 "io_combinator.m"
                              {
#line 2140 "io_combinator.m"
                                MR_Box io_combinator__T7_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_36, (MR_Integer) 0));
#line 2140 "io_combinator.m"
                                MR_Word io_combinator__Res8_38;
#line 2141 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_20, (MR_Integer) 1)));
#line 2141 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_38;
#line 2141 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_42;

#line 2141 "io_combinator.m"
                                {
#line 2141 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_20), &io_combinator__conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_42);
                                }
#line 2141 "io_combinator.m"
                                io_combinator__Res8_38 = ((MR_Word) io_combinator__conv23_Res8_38);
#line 2146 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_38)) == (MR_mktag((MR_Integer) 1))))
#line 2148 "io_combinator.m"
                                  *io_combinator__Res_22 = io_combinator__Res8_38;
#line 2146 "io_combinator.m"
                                else
#line 2143 "io_combinator.m"
                                  {
#line 2143 "io_combinator.m"
                                    MR_Box io_combinator__T8_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_38, (MR_Integer) 0));
#line 2144 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_21, (MR_Integer) 1)));
#line 2144 "io_combinator.m"
                                    MR_Box io_combinator__conv25_Res_22;

#line 2144 "io_combinator.m"
                                    {
#line 2144 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__Combine_21), io_combinator__T1_25, io_combinator__T2_27, io_combinator__T3_29, io_combinator__T4_31, io_combinator__T5_33, io_combinator__T6_35, io_combinator__T7_37, io_combinator__T8_39, &io_combinator__conv25_Res_22);
                                    }
#line 2144 "io_combinator.m"
                                    *io_combinator__Res_22 = ((MR_Word) io_combinator__conv25_Res_22);
#line 2143 "io_combinator.m"
                                  }
#line 2140 "io_combinator.m"
                              }
#line 2137 "io_combinator.m"
                          }
#line 2134 "io_combinator.m"
                      }
#line 2131 "io_combinator.m"
                  }
#line 2128 "io_combinator.m"
              }
#line 2125 "io_combinator.m"
          }
#line 2122 "io_combinator.m"
      }
#line 2119 "io_combinator.m"
  }
#line 558 "io_combinator.m"
}

#line 536 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_7_11_p_0(
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_52,
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_53,
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_54,
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_55,
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_56,
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_57,
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_58,
#line 536 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_59,
#line 536 "io_combinator.m"
  MR_Word io_combinator__P1_12,
#line 536 "io_combinator.m"
  MR_Word io_combinator__P2_13,
#line 536 "io_combinator.m"
  MR_Word io_combinator__P3_14,
#line 536 "io_combinator.m"
  MR_Word io_combinator__P4_15,
#line 536 "io_combinator.m"
  MR_Word io_combinator__P5_16,
#line 536 "io_combinator.m"
  MR_Word io_combinator__P6_17,
#line 536 "io_combinator.m"
  MR_Word io_combinator__P7_18,
#line 536 "io_combinator.m"
  MR_Word io_combinator__Combine_19,
#line 536 "io_combinator.m"
  MR_Word * io_combinator__Res_20)
#line 536 "io_combinator.m"
{
#line 2066 "io_combinator.m"
  {
#line 2066 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2066 "io_combinator.m"
    MR_Word io_combinator__Res1_22;
#line 2067 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_12, (MR_Integer) 1)));
#line 2067 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_22;
#line 2067 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_39_39;

#line 2067 "io_combinator.m"
    {
#line 2067 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_12), &io_combinator__conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_39_39);
    }
#line 2067 "io_combinator.m"
    io_combinator__Res1_22 = ((MR_Word) io_combinator__conv2_Res1_22);
#line 2113 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_22)) == (MR_mktag((MR_Integer) 1))))
#line 2115 "io_combinator.m"
      *io_combinator__Res_20 = io_combinator__Res1_22;
#line 2113 "io_combinator.m"
    else
#line 2069 "io_combinator.m"
      {
#line 2069 "io_combinator.m"
        MR_Box io_combinator__T1_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_22, (MR_Integer) 0));
#line 2069 "io_combinator.m"
        MR_Word io_combinator__Res2_24;
#line 2070 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_13, (MR_Integer) 1)));
#line 2070 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_24;
#line 2070 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_40_40;

#line 2070 "io_combinator.m"
        {
#line 2070 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_13), &io_combinator__conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_40_40);
        }
#line 2070 "io_combinator.m"
        io_combinator__Res2_24 = ((MR_Word) io_combinator__conv5_Res2_24);
#line 2109 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_24)) == (MR_mktag((MR_Integer) 1))))
#line 2111 "io_combinator.m"
          *io_combinator__Res_20 = io_combinator__Res2_24;
#line 2109 "io_combinator.m"
        else
#line 2072 "io_combinator.m"
          {
#line 2072 "io_combinator.m"
            MR_Box io_combinator__T2_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_24, (MR_Integer) 0));
#line 2072 "io_combinator.m"
            MR_Word io_combinator__Res3_26;
#line 2073 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_14, (MR_Integer) 1)));
#line 2073 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_26;
#line 2073 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_41_41;

#line 2073 "io_combinator.m"
            {
#line 2073 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_14), &io_combinator__conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_41_41);
            }
#line 2073 "io_combinator.m"
            io_combinator__Res3_26 = ((MR_Word) io_combinator__conv8_Res3_26);
#line 2105 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_26)) == (MR_mktag((MR_Integer) 1))))
#line 2107 "io_combinator.m"
              *io_combinator__Res_20 = io_combinator__Res3_26;
#line 2105 "io_combinator.m"
            else
#line 2075 "io_combinator.m"
              {
#line 2075 "io_combinator.m"
                MR_Box io_combinator__T3_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_26, (MR_Integer) 0));
#line 2075 "io_combinator.m"
                MR_Word io_combinator__Res4_28;
#line 2076 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_15, (MR_Integer) 1)));
#line 2076 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_28;
#line 2076 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_42_42;

#line 2076 "io_combinator.m"
                {
#line 2076 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_15), &io_combinator__conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_42_42);
                }
#line 2076 "io_combinator.m"
                io_combinator__Res4_28 = ((MR_Word) io_combinator__conv11_Res4_28);
#line 2101 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_28)) == (MR_mktag((MR_Integer) 1))))
#line 2103 "io_combinator.m"
                  *io_combinator__Res_20 = io_combinator__Res4_28;
#line 2101 "io_combinator.m"
                else
#line 2078 "io_combinator.m"
                  {
#line 2078 "io_combinator.m"
                    MR_Box io_combinator__T4_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_28, (MR_Integer) 0));
#line 2078 "io_combinator.m"
                    MR_Word io_combinator__Res5_30;
#line 2079 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_16, (MR_Integer) 1)));
#line 2079 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_30;
#line 2079 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_43_43;

#line 2079 "io_combinator.m"
                    {
#line 2079 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_16), &io_combinator__conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_43_43);
                    }
#line 2079 "io_combinator.m"
                    io_combinator__Res5_30 = ((MR_Word) io_combinator__conv14_Res5_30);
#line 2097 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_30)) == (MR_mktag((MR_Integer) 1))))
#line 2099 "io_combinator.m"
                      *io_combinator__Res_20 = io_combinator__Res5_30;
#line 2097 "io_combinator.m"
                    else
#line 2081 "io_combinator.m"
                      {
#line 2081 "io_combinator.m"
                        MR_Box io_combinator__T5_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_30, (MR_Integer) 0));
#line 2081 "io_combinator.m"
                        MR_Word io_combinator__Res6_32;
#line 2082 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_17, (MR_Integer) 1)));
#line 2082 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_32;
#line 2082 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_44_44;

#line 2082 "io_combinator.m"
                        {
#line 2082 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_17), &io_combinator__conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_44_44);
                        }
#line 2082 "io_combinator.m"
                        io_combinator__Res6_32 = ((MR_Word) io_combinator__conv17_Res6_32);
#line 2093 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_32)) == (MR_mktag((MR_Integer) 1))))
#line 2095 "io_combinator.m"
                          *io_combinator__Res_20 = io_combinator__Res6_32;
#line 2093 "io_combinator.m"
                        else
#line 2084 "io_combinator.m"
                          {
#line 2084 "io_combinator.m"
                            MR_Box io_combinator__T6_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_32, (MR_Integer) 0));
#line 2084 "io_combinator.m"
                            MR_Word io_combinator__Res7_34;
#line 2085 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_18, (MR_Integer) 1)));
#line 2085 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_34;
#line 2085 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_38;

#line 2085 "io_combinator.m"
                            {
#line 2085 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_18), &io_combinator__conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_38);
                            }
#line 2085 "io_combinator.m"
                            io_combinator__Res7_34 = ((MR_Word) io_combinator__conv20_Res7_34);
#line 2089 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_34)) == (MR_mktag((MR_Integer) 1))))
#line 2091 "io_combinator.m"
                              *io_combinator__Res_20 = io_combinator__Res7_34;
#line 2089 "io_combinator.m"
                            else
#line 2087 "io_combinator.m"
                              {
#line 2087 "io_combinator.m"
                                MR_Box io_combinator__T7_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_34, (MR_Integer) 0));
#line 2088 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_19, (MR_Integer) 1)));
#line 2088 "io_combinator.m"
                                MR_Box io_combinator__conv22_Res_20;

#line 2088 "io_combinator.m"
                                {
#line 2088 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__Combine_19), io_combinator__T1_23, io_combinator__T2_25, io_combinator__T3_27, io_combinator__T4_29, io_combinator__T5_31, io_combinator__T6_33, io_combinator__T7_35, &io_combinator__conv22_Res_20);
                                }
#line 2088 "io_combinator.m"
                                *io_combinator__Res_20 = ((MR_Word) io_combinator__conv22_Res_20);
#line 2087 "io_combinator.m"
                              }
#line 2084 "io_combinator.m"
                          }
#line 2081 "io_combinator.m"
                      }
#line 2078 "io_combinator.m"
                  }
#line 2075 "io_combinator.m"
              }
#line 2072 "io_combinator.m"
          }
#line 2069 "io_combinator.m"
      }
#line 2066 "io_combinator.m"
  }
#line 536 "io_combinator.m"
}

#line 516 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_6_10_p_0(
#line 516 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_46,
#line 516 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_47,
#line 516 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_48,
#line 516 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_49,
#line 516 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_50,
#line 516 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_51,
#line 516 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_52,
#line 516 "io_combinator.m"
  MR_Word io_combinator__P1_11,
#line 516 "io_combinator.m"
  MR_Word io_combinator__P2_12,
#line 516 "io_combinator.m"
  MR_Word io_combinator__P3_13,
#line 516 "io_combinator.m"
  MR_Word io_combinator__P4_14,
#line 516 "io_combinator.m"
  MR_Word io_combinator__P5_15,
#line 516 "io_combinator.m"
  MR_Word io_combinator__P6_16,
#line 516 "io_combinator.m"
  MR_Word io_combinator__Combine_17,
#line 516 "io_combinator.m"
  MR_Word * io_combinator__Res_18)
#line 516 "io_combinator.m"
{
#line 2020 "io_combinator.m"
  {
#line 2020 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 2020 "io_combinator.m"
    MR_Word io_combinator__Res1_20;
#line 2021 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_11, (MR_Integer) 1)));
#line 2021 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_20;
#line 2021 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_35_35;

#line 2021 "io_combinator.m"
    {
#line 2021 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_11), &io_combinator__conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_35_35);
    }
#line 2021 "io_combinator.m"
    io_combinator__Res1_20 = ((MR_Word) io_combinator__conv2_Res1_20);
#line 2060 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_20)) == (MR_mktag((MR_Integer) 1))))
#line 2062 "io_combinator.m"
      *io_combinator__Res_18 = io_combinator__Res1_20;
#line 2060 "io_combinator.m"
    else
#line 2023 "io_combinator.m"
      {
#line 2023 "io_combinator.m"
        MR_Box io_combinator__T1_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_20, (MR_Integer) 0));
#line 2023 "io_combinator.m"
        MR_Word io_combinator__Res2_22;
#line 2024 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_12, (MR_Integer) 1)));
#line 2024 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_22;
#line 2024 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_36_36;

#line 2024 "io_combinator.m"
        {
#line 2024 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_12), &io_combinator__conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_36_36);
        }
#line 2024 "io_combinator.m"
        io_combinator__Res2_22 = ((MR_Word) io_combinator__conv5_Res2_22);
#line 2056 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_22)) == (MR_mktag((MR_Integer) 1))))
#line 2058 "io_combinator.m"
          *io_combinator__Res_18 = io_combinator__Res2_22;
#line 2056 "io_combinator.m"
        else
#line 2026 "io_combinator.m"
          {
#line 2026 "io_combinator.m"
            MR_Box io_combinator__T2_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_22, (MR_Integer) 0));
#line 2026 "io_combinator.m"
            MR_Word io_combinator__Res3_24;
#line 2027 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_13, (MR_Integer) 1)));
#line 2027 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_24;
#line 2027 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_37_37;

#line 2027 "io_combinator.m"
            {
#line 2027 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_13), &io_combinator__conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_37_37);
            }
#line 2027 "io_combinator.m"
            io_combinator__Res3_24 = ((MR_Word) io_combinator__conv8_Res3_24);
#line 2052 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_24)) == (MR_mktag((MR_Integer) 1))))
#line 2054 "io_combinator.m"
              *io_combinator__Res_18 = io_combinator__Res3_24;
#line 2052 "io_combinator.m"
            else
#line 2029 "io_combinator.m"
              {
#line 2029 "io_combinator.m"
                MR_Box io_combinator__T3_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_24, (MR_Integer) 0));
#line 2029 "io_combinator.m"
                MR_Word io_combinator__Res4_26;
#line 2030 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_14, (MR_Integer) 1)));
#line 2030 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_26;
#line 2030 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_38_38;

#line 2030 "io_combinator.m"
                {
#line 2030 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_14), &io_combinator__conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_38_38);
                }
#line 2030 "io_combinator.m"
                io_combinator__Res4_26 = ((MR_Word) io_combinator__conv11_Res4_26);
#line 2048 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_26)) == (MR_mktag((MR_Integer) 1))))
#line 2050 "io_combinator.m"
                  *io_combinator__Res_18 = io_combinator__Res4_26;
#line 2048 "io_combinator.m"
                else
#line 2032 "io_combinator.m"
                  {
#line 2032 "io_combinator.m"
                    MR_Box io_combinator__T4_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_26, (MR_Integer) 0));
#line 2032 "io_combinator.m"
                    MR_Word io_combinator__Res5_28;
#line 2033 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_15, (MR_Integer) 1)));
#line 2033 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_28;
#line 2033 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_39_39;

#line 2033 "io_combinator.m"
                    {
#line 2033 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_15), &io_combinator__conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_39_39);
                    }
#line 2033 "io_combinator.m"
                    io_combinator__Res5_28 = ((MR_Word) io_combinator__conv14_Res5_28);
#line 2044 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_28)) == (MR_mktag((MR_Integer) 1))))
#line 2046 "io_combinator.m"
                      *io_combinator__Res_18 = io_combinator__Res5_28;
#line 2044 "io_combinator.m"
                    else
#line 2035 "io_combinator.m"
                      {
#line 2035 "io_combinator.m"
                        MR_Box io_combinator__T5_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_28, (MR_Integer) 0));
#line 2035 "io_combinator.m"
                        MR_Word io_combinator__Res6_30;
#line 2036 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_16, (MR_Integer) 1)));
#line 2036 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_30;
#line 2036 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_34;

#line 2036 "io_combinator.m"
                        {
#line 2036 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_16), &io_combinator__conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_34);
                        }
#line 2036 "io_combinator.m"
                        io_combinator__Res6_30 = ((MR_Word) io_combinator__conv17_Res6_30);
#line 2040 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_30)) == (MR_mktag((MR_Integer) 1))))
#line 2042 "io_combinator.m"
                          *io_combinator__Res_18 = io_combinator__Res6_30;
#line 2040 "io_combinator.m"
                        else
#line 2038 "io_combinator.m"
                          {
#line 2038 "io_combinator.m"
                            MR_Box io_combinator__T6_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_30, (MR_Integer) 0));
#line 2039 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_17, (MR_Integer) 1)));
#line 2039 "io_combinator.m"
                            MR_Box io_combinator__conv19_Res_18;

#line 2039 "io_combinator.m"
                            {
#line 2039 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__Combine_17), io_combinator__T1_21, io_combinator__T2_23, io_combinator__T3_25, io_combinator__T4_27, io_combinator__T5_29, io_combinator__T6_31, &io_combinator__conv19_Res_18);
                            }
#line 2039 "io_combinator.m"
                            *io_combinator__Res_18 = ((MR_Word) io_combinator__conv19_Res_18);
#line 2038 "io_combinator.m"
                          }
#line 2035 "io_combinator.m"
                      }
#line 2032 "io_combinator.m"
                  }
#line 2029 "io_combinator.m"
              }
#line 2026 "io_combinator.m"
          }
#line 2023 "io_combinator.m"
      }
#line 2020 "io_combinator.m"
  }
#line 516 "io_combinator.m"
}

#line 498 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_5_9_p_0(
#line 498 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_40,
#line 498 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_41,
#line 498 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_42,
#line 498 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_43,
#line 498 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_44,
#line 498 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_45,
#line 498 "io_combinator.m"
  MR_Word io_combinator__P1_10,
#line 498 "io_combinator.m"
  MR_Word io_combinator__P2_11,
#line 498 "io_combinator.m"
  MR_Word io_combinator__P3_12,
#line 498 "io_combinator.m"
  MR_Word io_combinator__P4_13,
#line 498 "io_combinator.m"
  MR_Word io_combinator__P5_14,
#line 498 "io_combinator.m"
  MR_Word io_combinator__Combine_15,
#line 498 "io_combinator.m"
  MR_Word * io_combinator__Res_16)
#line 498 "io_combinator.m"
{
#line 1981 "io_combinator.m"
  {
#line 1981 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1981 "io_combinator.m"
    MR_Word io_combinator__Res1_18;
#line 1982 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_10, (MR_Integer) 1)));
#line 1982 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_18;
#line 1982 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_31_31;

#line 1982 "io_combinator.m"
    {
#line 1982 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_10), &io_combinator__conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_31_31);
    }
#line 1982 "io_combinator.m"
    io_combinator__Res1_18 = ((MR_Word) io_combinator__conv2_Res1_18);
#line 2014 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_18)) == (MR_mktag((MR_Integer) 1))))
#line 2016 "io_combinator.m"
      *io_combinator__Res_16 = io_combinator__Res1_18;
#line 2014 "io_combinator.m"
    else
#line 1984 "io_combinator.m"
      {
#line 1984 "io_combinator.m"
        MR_Box io_combinator__T1_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_18, (MR_Integer) 0));
#line 1984 "io_combinator.m"
        MR_Word io_combinator__Res2_20;
#line 1985 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_11, (MR_Integer) 1)));
#line 1985 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_20;
#line 1985 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_32_32;

#line 1985 "io_combinator.m"
        {
#line 1985 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_11), &io_combinator__conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_32_32);
        }
#line 1985 "io_combinator.m"
        io_combinator__Res2_20 = ((MR_Word) io_combinator__conv5_Res2_20);
#line 2010 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_20)) == (MR_mktag((MR_Integer) 1))))
#line 2012 "io_combinator.m"
          *io_combinator__Res_16 = io_combinator__Res2_20;
#line 2010 "io_combinator.m"
        else
#line 1987 "io_combinator.m"
          {
#line 1987 "io_combinator.m"
            MR_Box io_combinator__T2_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_20, (MR_Integer) 0));
#line 1987 "io_combinator.m"
            MR_Word io_combinator__Res3_22;
#line 1988 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_12, (MR_Integer) 1)));
#line 1988 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_22;
#line 1988 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_33_33;

#line 1988 "io_combinator.m"
            {
#line 1988 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_12), &io_combinator__conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_33_33);
            }
#line 1988 "io_combinator.m"
            io_combinator__Res3_22 = ((MR_Word) io_combinator__conv8_Res3_22);
#line 2006 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_22)) == (MR_mktag((MR_Integer) 1))))
#line 2008 "io_combinator.m"
              *io_combinator__Res_16 = io_combinator__Res3_22;
#line 2006 "io_combinator.m"
            else
#line 1990 "io_combinator.m"
              {
#line 1990 "io_combinator.m"
                MR_Box io_combinator__T3_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_22, (MR_Integer) 0));
#line 1990 "io_combinator.m"
                MR_Word io_combinator__Res4_24;
#line 1991 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_13, (MR_Integer) 1)));
#line 1991 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_24;
#line 1991 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_34_34;

#line 1991 "io_combinator.m"
                {
#line 1991 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_13), &io_combinator__conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_34_34);
                }
#line 1991 "io_combinator.m"
                io_combinator__Res4_24 = ((MR_Word) io_combinator__conv11_Res4_24);
#line 2002 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_24)) == (MR_mktag((MR_Integer) 1))))
#line 2004 "io_combinator.m"
                  *io_combinator__Res_16 = io_combinator__Res4_24;
#line 2002 "io_combinator.m"
                else
#line 1993 "io_combinator.m"
                  {
#line 1993 "io_combinator.m"
                    MR_Box io_combinator__T4_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_24, (MR_Integer) 0));
#line 1993 "io_combinator.m"
                    MR_Word io_combinator__Res5_26;
#line 1994 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_14, (MR_Integer) 1)));
#line 1994 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_26;
#line 1994 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_30;

#line 1994 "io_combinator.m"
                    {
#line 1994 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_14), &io_combinator__conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_30);
                    }
#line 1994 "io_combinator.m"
                    io_combinator__Res5_26 = ((MR_Word) io_combinator__conv14_Res5_26);
#line 1998 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_26)) == (MR_mktag((MR_Integer) 1))))
#line 2000 "io_combinator.m"
                      *io_combinator__Res_16 = io_combinator__Res5_26;
#line 1998 "io_combinator.m"
                    else
#line 1996 "io_combinator.m"
                      {
#line 1996 "io_combinator.m"
                        MR_Box io_combinator__T5_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_26, (MR_Integer) 0));
#line 1997 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_15, (MR_Integer) 1)));
#line 1997 "io_combinator.m"
                        MR_Box io_combinator__conv16_Res_16;

#line 1997 "io_combinator.m"
                        {
#line 1997 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__Combine_15), io_combinator__T1_19, io_combinator__T2_21, io_combinator__T3_23, io_combinator__T4_25, io_combinator__T5_27, &io_combinator__conv16_Res_16);
                        }
#line 1997 "io_combinator.m"
                        *io_combinator__Res_16 = ((MR_Word) io_combinator__conv16_Res_16);
#line 1996 "io_combinator.m"
                      }
#line 1993 "io_combinator.m"
                  }
#line 1990 "io_combinator.m"
              }
#line 1987 "io_combinator.m"
          }
#line 1984 "io_combinator.m"
      }
#line 1981 "io_combinator.m"
  }
#line 498 "io_combinator.m"
}

#line 482 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_4_8_p_0(
#line 482 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_34,
#line 482 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_35,
#line 482 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_36,
#line 482 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_37,
#line 482 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_38,
#line 482 "io_combinator.m"
  MR_Word io_combinator__P1_9,
#line 482 "io_combinator.m"
  MR_Word io_combinator__P2_10,
#line 482 "io_combinator.m"
  MR_Word io_combinator__P3_11,
#line 482 "io_combinator.m"
  MR_Word io_combinator__P4_12,
#line 482 "io_combinator.m"
  MR_Word io_combinator__Combine_13,
#line 482 "io_combinator.m"
  MR_Word * io_combinator__Res_14)
#line 482 "io_combinator.m"
{
#line 1950 "io_combinator.m"
  {
#line 1950 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1950 "io_combinator.m"
    MR_Word io_combinator__Res1_16;
#line 1951 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_9, (MR_Integer) 1)));
#line 1951 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_16;
#line 1951 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_27_27;

#line 1951 "io_combinator.m"
    {
#line 1951 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_9), &io_combinator__conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_27_27);
    }
#line 1951 "io_combinator.m"
    io_combinator__Res1_16 = ((MR_Word) io_combinator__conv2_Res1_16);
#line 1976 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_16)) == (MR_mktag((MR_Integer) 1))))
#line 1978 "io_combinator.m"
      *io_combinator__Res_14 = io_combinator__Res1_16;
#line 1976 "io_combinator.m"
    else
#line 1953 "io_combinator.m"
      {
#line 1953 "io_combinator.m"
        MR_Box io_combinator__T1_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_16, (MR_Integer) 0));
#line 1953 "io_combinator.m"
        MR_Word io_combinator__Res2_18;
#line 1954 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_10, (MR_Integer) 1)));
#line 1954 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_18;
#line 1954 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_28_28;

#line 1954 "io_combinator.m"
        {
#line 1954 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_10), &io_combinator__conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_28_28);
        }
#line 1954 "io_combinator.m"
        io_combinator__Res2_18 = ((MR_Word) io_combinator__conv5_Res2_18);
#line 1972 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_18)) == (MR_mktag((MR_Integer) 1))))
#line 1974 "io_combinator.m"
          *io_combinator__Res_14 = io_combinator__Res2_18;
#line 1972 "io_combinator.m"
        else
#line 1956 "io_combinator.m"
          {
#line 1956 "io_combinator.m"
            MR_Box io_combinator__T2_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_18, (MR_Integer) 0));
#line 1956 "io_combinator.m"
            MR_Word io_combinator__Res3_20;
#line 1957 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_11, (MR_Integer) 1)));
#line 1957 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_20;
#line 1957 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_29_29;

#line 1957 "io_combinator.m"
            {
#line 1957 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_11), &io_combinator__conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_29_29);
            }
#line 1957 "io_combinator.m"
            io_combinator__Res3_20 = ((MR_Word) io_combinator__conv8_Res3_20);
#line 1968 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_20)) == (MR_mktag((MR_Integer) 1))))
#line 1970 "io_combinator.m"
              *io_combinator__Res_14 = io_combinator__Res3_20;
#line 1968 "io_combinator.m"
            else
#line 1959 "io_combinator.m"
              {
#line 1959 "io_combinator.m"
                MR_Box io_combinator__T3_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_20, (MR_Integer) 0));
#line 1959 "io_combinator.m"
                MR_Word io_combinator__Res4_22;
#line 1960 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_12, (MR_Integer) 1)));
#line 1960 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_22;
#line 1960 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_26;

#line 1960 "io_combinator.m"
                {
#line 1960 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_12), &io_combinator__conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_26);
                }
#line 1960 "io_combinator.m"
                io_combinator__Res4_22 = ((MR_Word) io_combinator__conv11_Res4_22);
#line 1964 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_22)) == (MR_mktag((MR_Integer) 1))))
#line 1966 "io_combinator.m"
                  *io_combinator__Res_14 = io_combinator__Res4_22;
#line 1964 "io_combinator.m"
                else
#line 1962 "io_combinator.m"
                  {
#line 1962 "io_combinator.m"
                    MR_Box io_combinator__T4_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_22, (MR_Integer) 0));
#line 1963 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_13, (MR_Integer) 1)));
#line 1963 "io_combinator.m"
                    MR_Box io_combinator__conv13_Res_14;

#line 1963 "io_combinator.m"
                    {
#line 1963 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__Combine_13), io_combinator__T1_17, io_combinator__T2_19, io_combinator__T3_21, io_combinator__T4_23, &io_combinator__conv13_Res_14);
                    }
#line 1963 "io_combinator.m"
                    *io_combinator__Res_14 = ((MR_Word) io_combinator__conv13_Res_14);
#line 1962 "io_combinator.m"
                  }
#line 1959 "io_combinator.m"
              }
#line 1956 "io_combinator.m"
          }
#line 1953 "io_combinator.m"
      }
#line 1950 "io_combinator.m"
  }
#line 482 "io_combinator.m"
}

#line 468 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_3_7_p_0(
#line 468 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_28,
#line 468 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_29,
#line 468 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_30,
#line 468 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_31,
#line 468 "io_combinator.m"
  MR_Word io_combinator__P1_8,
#line 468 "io_combinator.m"
  MR_Word io_combinator__P2_9,
#line 468 "io_combinator.m"
  MR_Word io_combinator__P3_10,
#line 468 "io_combinator.m"
  MR_Word io_combinator__Combine_11,
#line 468 "io_combinator.m"
  MR_Word * io_combinator__Res_12)
#line 468 "io_combinator.m"
{
#line 1926 "io_combinator.m"
  {
#line 1926 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1926 "io_combinator.m"
    MR_Word io_combinator__Res1_14;
#line 1927 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_8, (MR_Integer) 1)));
#line 1927 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_14;
#line 1927 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_23_23;

#line 1927 "io_combinator.m"
    {
#line 1927 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_8), &io_combinator__conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 1927 "io_combinator.m"
    io_combinator__Res1_14 = ((MR_Word) io_combinator__conv2_Res1_14);
#line 1945 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_14)) == (MR_mktag((MR_Integer) 1))))
#line 1947 "io_combinator.m"
      *io_combinator__Res_12 = io_combinator__Res1_14;
#line 1945 "io_combinator.m"
    else
#line 1929 "io_combinator.m"
      {
#line 1929 "io_combinator.m"
        MR_Box io_combinator__T1_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_14, (MR_Integer) 0));
#line 1929 "io_combinator.m"
        MR_Word io_combinator__Res2_16;
#line 1930 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_9, (MR_Integer) 1)));
#line 1930 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_16;
#line 1930 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_24_24;

#line 1930 "io_combinator.m"
        {
#line 1930 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_9), &io_combinator__conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_24_24);
        }
#line 1930 "io_combinator.m"
        io_combinator__Res2_16 = ((MR_Word) io_combinator__conv5_Res2_16);
#line 1941 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_16)) == (MR_mktag((MR_Integer) 1))))
#line 1943 "io_combinator.m"
          *io_combinator__Res_12 = io_combinator__Res2_16;
#line 1941 "io_combinator.m"
        else
#line 1932 "io_combinator.m"
          {
#line 1932 "io_combinator.m"
            MR_Box io_combinator__T2_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_16, (MR_Integer) 0));
#line 1932 "io_combinator.m"
            MR_Word io_combinator__Res3_18;
#line 1933 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_10, (MR_Integer) 1)));
#line 1933 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_18;
#line 1933 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_22;

#line 1933 "io_combinator.m"
            {
#line 1933 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_10), &io_combinator__conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_22);
            }
#line 1933 "io_combinator.m"
            io_combinator__Res3_18 = ((MR_Word) io_combinator__conv8_Res3_18);
#line 1937 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_18)) == (MR_mktag((MR_Integer) 1))))
#line 1939 "io_combinator.m"
              *io_combinator__Res_12 = io_combinator__Res3_18;
#line 1937 "io_combinator.m"
            else
#line 1935 "io_combinator.m"
              {
#line 1935 "io_combinator.m"
                MR_Box io_combinator__T3_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_18, (MR_Integer) 0));
#line 1936 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_11, (MR_Integer) 1)));
#line 1936 "io_combinator.m"
                MR_Box io_combinator__conv10_Res_12;

#line 1936 "io_combinator.m"
                {
#line 1936 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__Combine_11), io_combinator__T1_15, io_combinator__T2_17, io_combinator__T3_19, &io_combinator__conv10_Res_12);
                }
#line 1936 "io_combinator.m"
                *io_combinator__Res_12 = ((MR_Word) io_combinator__conv10_Res_12);
#line 1935 "io_combinator.m"
              }
#line 1932 "io_combinator.m"
          }
#line 1929 "io_combinator.m"
      }
#line 1926 "io_combinator.m"
  }
#line 468 "io_combinator.m"
}

#line 456 "io_combinator.m"
void MR_CALL 
io_combinator__maybe_error_sequence_2_6_p_0(
#line 456 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_22,
#line 456 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_23,
#line 456 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_24,
#line 456 "io_combinator.m"
  MR_Word io_combinator__P1_7,
#line 456 "io_combinator.m"
  MR_Word io_combinator__P2_8,
#line 456 "io_combinator.m"
  MR_Word io_combinator__Combine_9,
#line 456 "io_combinator.m"
  MR_Word * io_combinator__Res_10)
#line 456 "io_combinator.m"
{
#line 1909 "io_combinator.m"
  {
#line 1909 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1909 "io_combinator.m"
    MR_Word io_combinator__Res1_12;
#line 1910 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_7, (MR_Integer) 1)));
#line 1910 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_12;
#line 1910 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_19_19;

#line 1910 "io_combinator.m"
    {
#line 1910 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_7), &io_combinator__conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 1910 "io_combinator.m"
    io_combinator__Res1_12 = ((MR_Word) io_combinator__conv2_Res1_12);
#line 1921 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_12)) == (MR_mktag((MR_Integer) 1))))
#line 1923 "io_combinator.m"
      *io_combinator__Res_10 = io_combinator__Res1_12;
#line 1921 "io_combinator.m"
    else
#line 1912 "io_combinator.m"
      {
#line 1912 "io_combinator.m"
        MR_Box io_combinator__T1_13 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_12, (MR_Integer) 0));
#line 1912 "io_combinator.m"
        MR_Word io_combinator__Res2_14;
#line 1913 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_8, (MR_Integer) 1)));
#line 1913 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_14;
#line 1913 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_18;

#line 1913 "io_combinator.m"
        {
#line 1913 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_8), &io_combinator__conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_18);
        }
#line 1913 "io_combinator.m"
        io_combinator__Res2_14 = ((MR_Word) io_combinator__conv5_Res2_14);
#line 1917 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_14)) == (MR_mktag((MR_Integer) 1))))
#line 1919 "io_combinator.m"
          *io_combinator__Res_10 = io_combinator__Res2_14;
#line 1917 "io_combinator.m"
        else
#line 1915 "io_combinator.m"
          {
#line 1915 "io_combinator.m"
            MR_Box io_combinator__T2_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_14, (MR_Integer) 0));
#line 1916 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_9, (MR_Integer) 1)));
#line 1916 "io_combinator.m"
            MR_Box io_combinator__conv7_Res_10;

#line 1916 "io_combinator.m"
            {
#line 1916 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__Combine_9), io_combinator__T1_13, io_combinator__T2_15, &io_combinator__conv7_Res_10);
            }
#line 1916 "io_combinator.m"
            *io_combinator__Res_10 = ((MR_Word) io_combinator__conv7_Res_10);
#line 1915 "io_combinator.m"
          }
#line 1912 "io_combinator.m"
      }
#line 1909 "io_combinator.m"
  }
#line 456 "io_combinator.m"
}

#line 434 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_11_15_p_0(
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_76,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_77,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_78,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_79,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_80,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_81,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_82,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_83,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_84,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_85,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T11_86,
#line 434 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_87,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P1_16,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P2_17,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P3_18,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P4_19,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P5_20,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P6_21,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P7_22,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P8_23,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P9_24,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P10_25,
#line 434 "io_combinator.m"
  MR_Word io_combinator__P11_26,
#line 434 "io_combinator.m"
  MR_Word io_combinator__Combine_27,
#line 434 "io_combinator.m"
  MR_Word * io_combinator__Res_28)
#line 434 "io_combinator.m"
{
#line 1825 "io_combinator.m"
  {
#line 1825 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1825 "io_combinator.m"
    MR_Word io_combinator__Res1_30;
#line 1826 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_16, (MR_Integer) 1)));
#line 1826 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_30;
#line 1826 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_55_55;

#line 1826 "io_combinator.m"
    {
#line 1826 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_16), &io_combinator__conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_55_55);
    }
#line 1826 "io_combinator.m"
    io_combinator__Res1_30 = ((MR_Word) io_combinator__conv2_Res1_30);
#line 1902 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_30)) == (MR_mktag((MR_Integer) 1))))
#line 1904 "io_combinator.m"
      *io_combinator__Res_28 = io_combinator__Res1_30;
#line 1902 "io_combinator.m"
    else
#line 1828 "io_combinator.m"
      {
#line 1828 "io_combinator.m"
        MR_Box io_combinator__T1_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_30, (MR_Integer) 0));
#line 1828 "io_combinator.m"
        MR_Word io_combinator__Res2_32;
#line 1829 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_17, (MR_Integer) 1)));
#line 1829 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_32;
#line 1829 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_56_56;

#line 1829 "io_combinator.m"
        {
#line 1829 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_17), &io_combinator__conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_56_56);
        }
#line 1829 "io_combinator.m"
        io_combinator__Res2_32 = ((MR_Word) io_combinator__conv5_Res2_32);
#line 1898 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_32)) == (MR_mktag((MR_Integer) 1))))
#line 1900 "io_combinator.m"
          *io_combinator__Res_28 = io_combinator__Res2_32;
#line 1898 "io_combinator.m"
        else
#line 1831 "io_combinator.m"
          {
#line 1831 "io_combinator.m"
            MR_Box io_combinator__T2_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_32, (MR_Integer) 0));
#line 1831 "io_combinator.m"
            MR_Word io_combinator__Res3_34;
#line 1832 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_18, (MR_Integer) 1)));
#line 1832 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_34;
#line 1832 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_57_57;

#line 1832 "io_combinator.m"
            {
#line 1832 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_18), &io_combinator__conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_57_57);
            }
#line 1832 "io_combinator.m"
            io_combinator__Res3_34 = ((MR_Word) io_combinator__conv8_Res3_34);
#line 1894 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_34)) == (MR_mktag((MR_Integer) 1))))
#line 1896 "io_combinator.m"
              *io_combinator__Res_28 = io_combinator__Res3_34;
#line 1894 "io_combinator.m"
            else
#line 1834 "io_combinator.m"
              {
#line 1834 "io_combinator.m"
                MR_Box io_combinator__T3_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_34, (MR_Integer) 0));
#line 1834 "io_combinator.m"
                MR_Word io_combinator__Res4_36;
#line 1835 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_19, (MR_Integer) 1)));
#line 1835 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_36;
#line 1835 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_58_58;

#line 1835 "io_combinator.m"
                {
#line 1835 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_19), &io_combinator__conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_58_58);
                }
#line 1835 "io_combinator.m"
                io_combinator__Res4_36 = ((MR_Word) io_combinator__conv11_Res4_36);
#line 1890 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_36)) == (MR_mktag((MR_Integer) 1))))
#line 1892 "io_combinator.m"
                  *io_combinator__Res_28 = io_combinator__Res4_36;
#line 1890 "io_combinator.m"
                else
#line 1837 "io_combinator.m"
                  {
#line 1837 "io_combinator.m"
                    MR_Box io_combinator__T4_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_36, (MR_Integer) 0));
#line 1837 "io_combinator.m"
                    MR_Word io_combinator__Res5_38;
#line 1838 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_20, (MR_Integer) 1)));
#line 1838 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_38;
#line 1838 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_59_59;

#line 1838 "io_combinator.m"
                    {
#line 1838 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_20), &io_combinator__conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_59_59);
                    }
#line 1838 "io_combinator.m"
                    io_combinator__Res5_38 = ((MR_Word) io_combinator__conv14_Res5_38);
#line 1886 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_38)) == (MR_mktag((MR_Integer) 1))))
#line 1888 "io_combinator.m"
                      *io_combinator__Res_28 = io_combinator__Res5_38;
#line 1886 "io_combinator.m"
                    else
#line 1840 "io_combinator.m"
                      {
#line 1840 "io_combinator.m"
                        MR_Box io_combinator__T5_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_38, (MR_Integer) 0));
#line 1840 "io_combinator.m"
                        MR_Word io_combinator__Res6_40;
#line 1841 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_21, (MR_Integer) 1)));
#line 1841 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_40;
#line 1841 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_60_60;

#line 1841 "io_combinator.m"
                        {
#line 1841 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_21), &io_combinator__conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_60_60);
                        }
#line 1841 "io_combinator.m"
                        io_combinator__Res6_40 = ((MR_Word) io_combinator__conv17_Res6_40);
#line 1882 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_40)) == (MR_mktag((MR_Integer) 1))))
#line 1884 "io_combinator.m"
                          *io_combinator__Res_28 = io_combinator__Res6_40;
#line 1882 "io_combinator.m"
                        else
#line 1843 "io_combinator.m"
                          {
#line 1843 "io_combinator.m"
                            MR_Box io_combinator__T6_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_40, (MR_Integer) 0));
#line 1843 "io_combinator.m"
                            MR_Word io_combinator__Res7_42;
#line 1844 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_22, (MR_Integer) 1)));
#line 1844 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_42;
#line 1844 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_61_61;

#line 1844 "io_combinator.m"
                            {
#line 1844 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_22), &io_combinator__conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_61_61);
                            }
#line 1844 "io_combinator.m"
                            io_combinator__Res7_42 = ((MR_Word) io_combinator__conv20_Res7_42);
#line 1878 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_42)) == (MR_mktag((MR_Integer) 1))))
#line 1880 "io_combinator.m"
                              *io_combinator__Res_28 = io_combinator__Res7_42;
#line 1878 "io_combinator.m"
                            else
#line 1846 "io_combinator.m"
                              {
#line 1846 "io_combinator.m"
                                MR_Box io_combinator__T7_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_42, (MR_Integer) 0));
#line 1846 "io_combinator.m"
                                MR_Word io_combinator__Res8_44;
#line 1847 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_23, (MR_Integer) 1)));
#line 1847 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_44;
#line 1847 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_62_62;

#line 1847 "io_combinator.m"
                                {
#line 1847 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_23), &io_combinator__conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_62_62);
                                }
#line 1847 "io_combinator.m"
                                io_combinator__Res8_44 = ((MR_Word) io_combinator__conv23_Res8_44);
#line 1874 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_44)) == (MR_mktag((MR_Integer) 1))))
#line 1876 "io_combinator.m"
                                  *io_combinator__Res_28 = io_combinator__Res8_44;
#line 1874 "io_combinator.m"
                                else
#line 1849 "io_combinator.m"
                                  {
#line 1849 "io_combinator.m"
                                    MR_Box io_combinator__T8_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_44, (MR_Integer) 0));
#line 1849 "io_combinator.m"
                                    MR_Word io_combinator__Res9_46;
#line 1850 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_24, (MR_Integer) 1)));
#line 1850 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_46;
#line 1850 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_63_63;

#line 1850 "io_combinator.m"
                                    {
#line 1850 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_24), &io_combinator__conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_63_63);
                                    }
#line 1850 "io_combinator.m"
                                    io_combinator__Res9_46 = ((MR_Word) io_combinator__conv26_Res9_46);
#line 1870 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_46)) == (MR_mktag((MR_Integer) 1))))
#line 1872 "io_combinator.m"
                                      *io_combinator__Res_28 = io_combinator__Res9_46;
#line 1870 "io_combinator.m"
                                    else
#line 1852 "io_combinator.m"
                                      {
#line 1852 "io_combinator.m"
                                        MR_Box io_combinator__T9_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_46, (MR_Integer) 0));
#line 1852 "io_combinator.m"
                                        MR_Word io_combinator__Res10_48;
#line 1853 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_25, (MR_Integer) 1)));
#line 1853 "io_combinator.m"
                                        MR_Box io_combinator__conv29_Res10_48;
#line 1853 "io_combinator.m"
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_64_64;

#line 1853 "io_combinator.m"
                                        {
#line 1853 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_25), &io_combinator__conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_64_64);
                                        }
#line 1853 "io_combinator.m"
                                        io_combinator__Res10_48 = ((MR_Word) io_combinator__conv29_Res10_48);
#line 1866 "io_combinator.m"
                                        if (((MR_tag((MR_Word) io_combinator__Res10_48)) == (MR_mktag((MR_Integer) 1))))
#line 1868 "io_combinator.m"
                                          *io_combinator__Res_28 = io_combinator__Res10_48;
#line 1866 "io_combinator.m"
                                        else
#line 1855 "io_combinator.m"
                                          {
#line 1855 "io_combinator.m"
                                            MR_Box io_combinator__T10_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_48, (MR_Integer) 0));
#line 1855 "io_combinator.m"
                                            MR_Word io_combinator__Res11_50;
#line 1856 "io_combinator.m"
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_26, (MR_Integer) 1)));
#line 1856 "io_combinator.m"
                                            MR_Box io_combinator__conv32_Res11_50;
#line 1856 "io_combinator.m"
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_54;

#line 1856 "io_combinator.m"
                                            {
#line 1856 "io_combinator.m"
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_26), &io_combinator__conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_54);
                                            }
#line 1856 "io_combinator.m"
                                            io_combinator__Res11_50 = ((MR_Word) io_combinator__conv32_Res11_50);
#line 1862 "io_combinator.m"
                                            if (((MR_tag((MR_Word) io_combinator__Res11_50)) == (MR_mktag((MR_Integer) 1))))
#line 1864 "io_combinator.m"
                                              *io_combinator__Res_28 = io_combinator__Res11_50;
#line 1862 "io_combinator.m"
                                            else
#line 1858 "io_combinator.m"
                                              {
#line 1858 "io_combinator.m"
                                                MR_Box io_combinator__T11_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_50, (MR_Integer) 0));
#line 1859 "io_combinator.m"
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_27, (MR_Integer) 1)));
#line 1859 "io_combinator.m"
                                                MR_Box io_combinator__conv34_Res_28;

#line 1859 "io_combinator.m"
                                                {
#line 1859 "io_combinator.m"
                                                  io_combinator__func_33(((MR_Box) io_combinator__Combine_27), io_combinator__T1_31, io_combinator__T2_33, io_combinator__T3_35, io_combinator__T4_37, io_combinator__T5_39, io_combinator__T6_41, io_combinator__T7_43, io_combinator__T8_45, io_combinator__T9_47, io_combinator__T10_49, io_combinator__T11_51, &io_combinator__conv34_Res_28);
                                                }
#line 1859 "io_combinator.m"
                                                *io_combinator__Res_28 = ((MR_Word) io_combinator__conv34_Res_28);
#line 1858 "io_combinator.m"
                                              }
#line 1855 "io_combinator.m"
                                          }
#line 1852 "io_combinator.m"
                                      }
#line 1849 "io_combinator.m"
                                  }
#line 1846 "io_combinator.m"
                              }
#line 1843 "io_combinator.m"
                          }
#line 1840 "io_combinator.m"
                      }
#line 1837 "io_combinator.m"
                  }
#line 1834 "io_combinator.m"
              }
#line 1831 "io_combinator.m"
          }
#line 1828 "io_combinator.m"
      }
#line 1825 "io_combinator.m"
  }
#line 434 "io_combinator.m"
}

#line 406 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_10_14_p_0(
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_70,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_71,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_72,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_73,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_74,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_75,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_76,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_77,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_78,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_79,
#line 406 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_80,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P1_15,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P2_16,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P3_17,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P4_18,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P5_19,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P6_20,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P7_21,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P8_22,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P9_23,
#line 406 "io_combinator.m"
  MR_Word io_combinator__P10_24,
#line 406 "io_combinator.m"
  MR_Word io_combinator__Combine_25,
#line 406 "io_combinator.m"
  MR_Word * io_combinator__Res_26)
#line 406 "io_combinator.m"
{
#line 1750 "io_combinator.m"
  {
#line 1750 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1750 "io_combinator.m"
    MR_Word io_combinator__Res1_28;
#line 1751 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_15, (MR_Integer) 1)));
#line 1751 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_28;
#line 1751 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_51_51;

#line 1751 "io_combinator.m"
    {
#line 1751 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_15), &io_combinator__conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_51_51);
    }
#line 1751 "io_combinator.m"
    io_combinator__Res1_28 = ((MR_Word) io_combinator__conv2_Res1_28);
#line 1819 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_28)) == (MR_mktag((MR_Integer) 1))))
#line 1821 "io_combinator.m"
      *io_combinator__Res_26 = io_combinator__Res1_28;
#line 1819 "io_combinator.m"
    else
#line 1753 "io_combinator.m"
      {
#line 1753 "io_combinator.m"
        MR_Box io_combinator__T1_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_28, (MR_Integer) 0));
#line 1753 "io_combinator.m"
        MR_Word io_combinator__Res2_30;
#line 1754 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_16, (MR_Integer) 1)));
#line 1754 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_30;
#line 1754 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_52_52;

#line 1754 "io_combinator.m"
        {
#line 1754 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_16), &io_combinator__conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_52_52);
        }
#line 1754 "io_combinator.m"
        io_combinator__Res2_30 = ((MR_Word) io_combinator__conv5_Res2_30);
#line 1815 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_30)) == (MR_mktag((MR_Integer) 1))))
#line 1817 "io_combinator.m"
          *io_combinator__Res_26 = io_combinator__Res2_30;
#line 1815 "io_combinator.m"
        else
#line 1756 "io_combinator.m"
          {
#line 1756 "io_combinator.m"
            MR_Box io_combinator__T2_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_30, (MR_Integer) 0));
#line 1756 "io_combinator.m"
            MR_Word io_combinator__Res3_32;
#line 1757 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_17, (MR_Integer) 1)));
#line 1757 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_32;
#line 1757 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_53_53;

#line 1757 "io_combinator.m"
            {
#line 1757 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_17), &io_combinator__conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_53_53);
            }
#line 1757 "io_combinator.m"
            io_combinator__Res3_32 = ((MR_Word) io_combinator__conv8_Res3_32);
#line 1811 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_32)) == (MR_mktag((MR_Integer) 1))))
#line 1813 "io_combinator.m"
              *io_combinator__Res_26 = io_combinator__Res3_32;
#line 1811 "io_combinator.m"
            else
#line 1759 "io_combinator.m"
              {
#line 1759 "io_combinator.m"
                MR_Box io_combinator__T3_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_32, (MR_Integer) 0));
#line 1759 "io_combinator.m"
                MR_Word io_combinator__Res4_34;
#line 1760 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_18, (MR_Integer) 1)));
#line 1760 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_34;
#line 1760 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_54_54;

#line 1760 "io_combinator.m"
                {
#line 1760 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_18), &io_combinator__conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_54_54);
                }
#line 1760 "io_combinator.m"
                io_combinator__Res4_34 = ((MR_Word) io_combinator__conv11_Res4_34);
#line 1807 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_34)) == (MR_mktag((MR_Integer) 1))))
#line 1809 "io_combinator.m"
                  *io_combinator__Res_26 = io_combinator__Res4_34;
#line 1807 "io_combinator.m"
                else
#line 1762 "io_combinator.m"
                  {
#line 1762 "io_combinator.m"
                    MR_Box io_combinator__T4_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_34, (MR_Integer) 0));
#line 1762 "io_combinator.m"
                    MR_Word io_combinator__Res5_36;
#line 1763 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_19, (MR_Integer) 1)));
#line 1763 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_36;
#line 1763 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_55_55;

#line 1763 "io_combinator.m"
                    {
#line 1763 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_19), &io_combinator__conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_55_55);
                    }
#line 1763 "io_combinator.m"
                    io_combinator__Res5_36 = ((MR_Word) io_combinator__conv14_Res5_36);
#line 1803 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_36)) == (MR_mktag((MR_Integer) 1))))
#line 1805 "io_combinator.m"
                      *io_combinator__Res_26 = io_combinator__Res5_36;
#line 1803 "io_combinator.m"
                    else
#line 1765 "io_combinator.m"
                      {
#line 1765 "io_combinator.m"
                        MR_Box io_combinator__T5_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_36, (MR_Integer) 0));
#line 1765 "io_combinator.m"
                        MR_Word io_combinator__Res6_38;
#line 1766 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_20, (MR_Integer) 1)));
#line 1766 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_38;
#line 1766 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_56_56;

#line 1766 "io_combinator.m"
                        {
#line 1766 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_20), &io_combinator__conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_56_56);
                        }
#line 1766 "io_combinator.m"
                        io_combinator__Res6_38 = ((MR_Word) io_combinator__conv17_Res6_38);
#line 1799 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_38)) == (MR_mktag((MR_Integer) 1))))
#line 1801 "io_combinator.m"
                          *io_combinator__Res_26 = io_combinator__Res6_38;
#line 1799 "io_combinator.m"
                        else
#line 1768 "io_combinator.m"
                          {
#line 1768 "io_combinator.m"
                            MR_Box io_combinator__T6_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_38, (MR_Integer) 0));
#line 1768 "io_combinator.m"
                            MR_Word io_combinator__Res7_40;
#line 1769 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_21, (MR_Integer) 1)));
#line 1769 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_40;
#line 1769 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_57_57;

#line 1769 "io_combinator.m"
                            {
#line 1769 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_21), &io_combinator__conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_57_57);
                            }
#line 1769 "io_combinator.m"
                            io_combinator__Res7_40 = ((MR_Word) io_combinator__conv20_Res7_40);
#line 1795 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_40)) == (MR_mktag((MR_Integer) 1))))
#line 1797 "io_combinator.m"
                              *io_combinator__Res_26 = io_combinator__Res7_40;
#line 1795 "io_combinator.m"
                            else
#line 1771 "io_combinator.m"
                              {
#line 1771 "io_combinator.m"
                                MR_Box io_combinator__T7_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_40, (MR_Integer) 0));
#line 1771 "io_combinator.m"
                                MR_Word io_combinator__Res8_42;
#line 1772 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_22, (MR_Integer) 1)));
#line 1772 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_42;
#line 1772 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_58_58;

#line 1772 "io_combinator.m"
                                {
#line 1772 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_22), &io_combinator__conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_58_58);
                                }
#line 1772 "io_combinator.m"
                                io_combinator__Res8_42 = ((MR_Word) io_combinator__conv23_Res8_42);
#line 1791 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_42)) == (MR_mktag((MR_Integer) 1))))
#line 1793 "io_combinator.m"
                                  *io_combinator__Res_26 = io_combinator__Res8_42;
#line 1791 "io_combinator.m"
                                else
#line 1774 "io_combinator.m"
                                  {
#line 1774 "io_combinator.m"
                                    MR_Box io_combinator__T8_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_42, (MR_Integer) 0));
#line 1774 "io_combinator.m"
                                    MR_Word io_combinator__Res9_44;
#line 1775 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_23, (MR_Integer) 1)));
#line 1775 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_44;
#line 1775 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_59_59;

#line 1775 "io_combinator.m"
                                    {
#line 1775 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_23), &io_combinator__conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_59_59);
                                    }
#line 1775 "io_combinator.m"
                                    io_combinator__Res9_44 = ((MR_Word) io_combinator__conv26_Res9_44);
#line 1787 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_44)) == (MR_mktag((MR_Integer) 1))))
#line 1789 "io_combinator.m"
                                      *io_combinator__Res_26 = io_combinator__Res9_44;
#line 1787 "io_combinator.m"
                                    else
#line 1777 "io_combinator.m"
                                      {
#line 1777 "io_combinator.m"
                                        MR_Box io_combinator__T9_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_44, (MR_Integer) 0));
#line 1777 "io_combinator.m"
                                        MR_Word io_combinator__Res10_46;
#line 1778 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_24, (MR_Integer) 1)));
#line 1778 "io_combinator.m"
                                        MR_Box io_combinator__conv29_Res10_46;
#line 1778 "io_combinator.m"
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_50;

#line 1778 "io_combinator.m"
                                        {
#line 1778 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_24), &io_combinator__conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_50);
                                        }
#line 1778 "io_combinator.m"
                                        io_combinator__Res10_46 = ((MR_Word) io_combinator__conv29_Res10_46);
#line 1783 "io_combinator.m"
                                        if (((MR_tag((MR_Word) io_combinator__Res10_46)) == (MR_mktag((MR_Integer) 1))))
#line 1785 "io_combinator.m"
                                          *io_combinator__Res_26 = io_combinator__Res10_46;
#line 1783 "io_combinator.m"
                                        else
#line 1780 "io_combinator.m"
                                          {
#line 1780 "io_combinator.m"
                                            MR_Box io_combinator__T10_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_46, (MR_Integer) 0));
#line 1781 "io_combinator.m"
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_25, (MR_Integer) 1)));
#line 1781 "io_combinator.m"
                                            MR_Box io_combinator__conv31_Res_26;

#line 1781 "io_combinator.m"
                                            {
#line 1781 "io_combinator.m"
                                              io_combinator__func_30(((MR_Box) io_combinator__Combine_25), io_combinator__T1_29, io_combinator__T2_31, io_combinator__T3_33, io_combinator__T4_35, io_combinator__T5_37, io_combinator__T6_39, io_combinator__T7_41, io_combinator__T8_43, io_combinator__T9_45, io_combinator__T10_47, &io_combinator__conv31_Res_26);
                                            }
#line 1781 "io_combinator.m"
                                            *io_combinator__Res_26 = ((MR_Word) io_combinator__conv31_Res_26);
#line 1780 "io_combinator.m"
                                          }
#line 1777 "io_combinator.m"
                                      }
#line 1774 "io_combinator.m"
                                  }
#line 1771 "io_combinator.m"
                              }
#line 1768 "io_combinator.m"
                          }
#line 1765 "io_combinator.m"
                      }
#line 1762 "io_combinator.m"
                  }
#line 1759 "io_combinator.m"
              }
#line 1756 "io_combinator.m"
          }
#line 1753 "io_combinator.m"
      }
#line 1750 "io_combinator.m"
  }
#line 406 "io_combinator.m"
}

#line 380 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_9_13_p_0(
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_64,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_65,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_66,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_67,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_68,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_69,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_70,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_71,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_72,
#line 380 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_73,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P1_14,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P2_15,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P3_16,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P4_17,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P5_18,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P6_19,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P7_20,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P8_21,
#line 380 "io_combinator.m"
  MR_Word io_combinator__P9_22,
#line 380 "io_combinator.m"
  MR_Word io_combinator__Combine_23,
#line 380 "io_combinator.m"
  MR_Word * io_combinator__Res_24)
#line 380 "io_combinator.m"
{
#line 1682 "io_combinator.m"
  {
#line 1682 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1682 "io_combinator.m"
    MR_Word io_combinator__Res1_26;
#line 1683 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_14, (MR_Integer) 1)));
#line 1683 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_26;
#line 1683 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_47_47;

#line 1683 "io_combinator.m"
    {
#line 1683 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_14), &io_combinator__conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_47_47);
    }
#line 1683 "io_combinator.m"
    io_combinator__Res1_26 = ((MR_Word) io_combinator__conv2_Res1_26);
#line 1744 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_26)) == (MR_mktag((MR_Integer) 1))))
#line 1746 "io_combinator.m"
      *io_combinator__Res_24 = io_combinator__Res1_26;
#line 1744 "io_combinator.m"
    else
#line 1685 "io_combinator.m"
      {
#line 1685 "io_combinator.m"
        MR_Box io_combinator__T1_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_26, (MR_Integer) 0));
#line 1685 "io_combinator.m"
        MR_Word io_combinator__Res2_28;
#line 1686 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_15, (MR_Integer) 1)));
#line 1686 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_28;
#line 1686 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_48_48;

#line 1686 "io_combinator.m"
        {
#line 1686 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_15), &io_combinator__conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_48_48);
        }
#line 1686 "io_combinator.m"
        io_combinator__Res2_28 = ((MR_Word) io_combinator__conv5_Res2_28);
#line 1740 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_28)) == (MR_mktag((MR_Integer) 1))))
#line 1742 "io_combinator.m"
          *io_combinator__Res_24 = io_combinator__Res2_28;
#line 1740 "io_combinator.m"
        else
#line 1688 "io_combinator.m"
          {
#line 1688 "io_combinator.m"
            MR_Box io_combinator__T2_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_28, (MR_Integer) 0));
#line 1688 "io_combinator.m"
            MR_Word io_combinator__Res3_30;
#line 1689 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_16, (MR_Integer) 1)));
#line 1689 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_30;
#line 1689 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_49_49;

#line 1689 "io_combinator.m"
            {
#line 1689 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_16), &io_combinator__conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_49_49);
            }
#line 1689 "io_combinator.m"
            io_combinator__Res3_30 = ((MR_Word) io_combinator__conv8_Res3_30);
#line 1736 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_30)) == (MR_mktag((MR_Integer) 1))))
#line 1738 "io_combinator.m"
              *io_combinator__Res_24 = io_combinator__Res3_30;
#line 1736 "io_combinator.m"
            else
#line 1691 "io_combinator.m"
              {
#line 1691 "io_combinator.m"
                MR_Box io_combinator__T3_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_30, (MR_Integer) 0));
#line 1691 "io_combinator.m"
                MR_Word io_combinator__Res4_32;
#line 1692 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_17, (MR_Integer) 1)));
#line 1692 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_32;
#line 1692 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_50_50;

#line 1692 "io_combinator.m"
                {
#line 1692 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_17), &io_combinator__conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_50_50);
                }
#line 1692 "io_combinator.m"
                io_combinator__Res4_32 = ((MR_Word) io_combinator__conv11_Res4_32);
#line 1732 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_32)) == (MR_mktag((MR_Integer) 1))))
#line 1734 "io_combinator.m"
                  *io_combinator__Res_24 = io_combinator__Res4_32;
#line 1732 "io_combinator.m"
                else
#line 1694 "io_combinator.m"
                  {
#line 1694 "io_combinator.m"
                    MR_Box io_combinator__T4_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_32, (MR_Integer) 0));
#line 1694 "io_combinator.m"
                    MR_Word io_combinator__Res5_34;
#line 1695 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_18, (MR_Integer) 1)));
#line 1695 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_34;
#line 1695 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_51_51;

#line 1695 "io_combinator.m"
                    {
#line 1695 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_18), &io_combinator__conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_51_51);
                    }
#line 1695 "io_combinator.m"
                    io_combinator__Res5_34 = ((MR_Word) io_combinator__conv14_Res5_34);
#line 1728 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_34)) == (MR_mktag((MR_Integer) 1))))
#line 1730 "io_combinator.m"
                      *io_combinator__Res_24 = io_combinator__Res5_34;
#line 1728 "io_combinator.m"
                    else
#line 1697 "io_combinator.m"
                      {
#line 1697 "io_combinator.m"
                        MR_Box io_combinator__T5_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_34, (MR_Integer) 0));
#line 1697 "io_combinator.m"
                        MR_Word io_combinator__Res6_36;
#line 1698 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_19, (MR_Integer) 1)));
#line 1698 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_36;
#line 1698 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_52_52;

#line 1698 "io_combinator.m"
                        {
#line 1698 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_19), &io_combinator__conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_52_52);
                        }
#line 1698 "io_combinator.m"
                        io_combinator__Res6_36 = ((MR_Word) io_combinator__conv17_Res6_36);
#line 1724 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_36)) == (MR_mktag((MR_Integer) 1))))
#line 1726 "io_combinator.m"
                          *io_combinator__Res_24 = io_combinator__Res6_36;
#line 1724 "io_combinator.m"
                        else
#line 1700 "io_combinator.m"
                          {
#line 1700 "io_combinator.m"
                            MR_Box io_combinator__T6_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_36, (MR_Integer) 0));
#line 1700 "io_combinator.m"
                            MR_Word io_combinator__Res7_38;
#line 1701 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_20, (MR_Integer) 1)));
#line 1701 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_38;
#line 1701 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_53_53;

#line 1701 "io_combinator.m"
                            {
#line 1701 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_20), &io_combinator__conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_53_53);
                            }
#line 1701 "io_combinator.m"
                            io_combinator__Res7_38 = ((MR_Word) io_combinator__conv20_Res7_38);
#line 1720 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_38)) == (MR_mktag((MR_Integer) 1))))
#line 1722 "io_combinator.m"
                              *io_combinator__Res_24 = io_combinator__Res7_38;
#line 1720 "io_combinator.m"
                            else
#line 1703 "io_combinator.m"
                              {
#line 1703 "io_combinator.m"
                                MR_Box io_combinator__T7_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_38, (MR_Integer) 0));
#line 1703 "io_combinator.m"
                                MR_Word io_combinator__Res8_40;
#line 1704 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_21, (MR_Integer) 1)));
#line 1704 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_40;
#line 1704 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_54_54;

#line 1704 "io_combinator.m"
                                {
#line 1704 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_21), &io_combinator__conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_54_54);
                                }
#line 1704 "io_combinator.m"
                                io_combinator__Res8_40 = ((MR_Word) io_combinator__conv23_Res8_40);
#line 1716 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_40)) == (MR_mktag((MR_Integer) 1))))
#line 1718 "io_combinator.m"
                                  *io_combinator__Res_24 = io_combinator__Res8_40;
#line 1716 "io_combinator.m"
                                else
#line 1706 "io_combinator.m"
                                  {
#line 1706 "io_combinator.m"
                                    MR_Box io_combinator__T8_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_40, (MR_Integer) 0));
#line 1706 "io_combinator.m"
                                    MR_Word io_combinator__Res9_42;
#line 1707 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_22, (MR_Integer) 1)));
#line 1707 "io_combinator.m"
                                    MR_Box io_combinator__conv26_Res9_42;
#line 1707 "io_combinator.m"
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_46;

#line 1707 "io_combinator.m"
                                    {
#line 1707 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_22), &io_combinator__conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_46);
                                    }
#line 1707 "io_combinator.m"
                                    io_combinator__Res9_42 = ((MR_Word) io_combinator__conv26_Res9_42);
#line 1712 "io_combinator.m"
                                    if (((MR_tag((MR_Word) io_combinator__Res9_42)) == (MR_mktag((MR_Integer) 1))))
#line 1714 "io_combinator.m"
                                      *io_combinator__Res_24 = io_combinator__Res9_42;
#line 1712 "io_combinator.m"
                                    else
#line 1709 "io_combinator.m"
                                      {
#line 1709 "io_combinator.m"
                                        MR_Box io_combinator__T9_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_42, (MR_Integer) 0));
#line 1710 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_23, (MR_Integer) 1)));
#line 1710 "io_combinator.m"
                                        MR_Box io_combinator__conv28_Res_24;

#line 1710 "io_combinator.m"
                                        {
#line 1710 "io_combinator.m"
                                          io_combinator__func_27(((MR_Box) io_combinator__Combine_23), io_combinator__T1_27, io_combinator__T2_29, io_combinator__T3_31, io_combinator__T4_33, io_combinator__T5_35, io_combinator__T6_37, io_combinator__T7_39, io_combinator__T8_41, io_combinator__T9_43, &io_combinator__conv28_Res_24);
                                        }
#line 1710 "io_combinator.m"
                                        *io_combinator__Res_24 = ((MR_Word) io_combinator__conv28_Res_24);
#line 1709 "io_combinator.m"
                                      }
#line 1706 "io_combinator.m"
                                  }
#line 1703 "io_combinator.m"
                              }
#line 1700 "io_combinator.m"
                          }
#line 1697 "io_combinator.m"
                      }
#line 1694 "io_combinator.m"
                  }
#line 1691 "io_combinator.m"
              }
#line 1688 "io_combinator.m"
          }
#line 1685 "io_combinator.m"
      }
#line 1682 "io_combinator.m"
  }
#line 380 "io_combinator.m"
}

#line 356 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_8_12_p_0(
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_58,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_59,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_60,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_61,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_62,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_63,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_64,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_65,
#line 356 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_66,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P1_13,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P2_14,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P3_15,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P4_16,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P5_17,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P6_18,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P7_19,
#line 356 "io_combinator.m"
  MR_Word io_combinator__P8_20,
#line 356 "io_combinator.m"
  MR_Word io_combinator__Combine_21,
#line 356 "io_combinator.m"
  MR_Word * io_combinator__Res_22)
#line 356 "io_combinator.m"
{
#line 1621 "io_combinator.m"
  {
#line 1621 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1621 "io_combinator.m"
    MR_Word io_combinator__Res1_24;
#line 1622 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_13, (MR_Integer) 1)));
#line 1622 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_24;
#line 1622 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_43_43;

#line 1622 "io_combinator.m"
    {
#line 1622 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_13), &io_combinator__conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 1622 "io_combinator.m"
    io_combinator__Res1_24 = ((MR_Word) io_combinator__conv2_Res1_24);
#line 1676 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_24)) == (MR_mktag((MR_Integer) 1))))
#line 1678 "io_combinator.m"
      *io_combinator__Res_22 = io_combinator__Res1_24;
#line 1676 "io_combinator.m"
    else
#line 1624 "io_combinator.m"
      {
#line 1624 "io_combinator.m"
        MR_Box io_combinator__T1_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_24, (MR_Integer) 0));
#line 1624 "io_combinator.m"
        MR_Word io_combinator__Res2_26;
#line 1625 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_14, (MR_Integer) 1)));
#line 1625 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_26;
#line 1625 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_44_44;

#line 1625 "io_combinator.m"
        {
#line 1625 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_14), &io_combinator__conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_44_44);
        }
#line 1625 "io_combinator.m"
        io_combinator__Res2_26 = ((MR_Word) io_combinator__conv5_Res2_26);
#line 1672 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_26)) == (MR_mktag((MR_Integer) 1))))
#line 1674 "io_combinator.m"
          *io_combinator__Res_22 = io_combinator__Res2_26;
#line 1672 "io_combinator.m"
        else
#line 1627 "io_combinator.m"
          {
#line 1627 "io_combinator.m"
            MR_Box io_combinator__T2_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_26, (MR_Integer) 0));
#line 1627 "io_combinator.m"
            MR_Word io_combinator__Res3_28;
#line 1628 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_15, (MR_Integer) 1)));
#line 1628 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_28;
#line 1628 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_45_45;

#line 1628 "io_combinator.m"
            {
#line 1628 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_15), &io_combinator__conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_45_45);
            }
#line 1628 "io_combinator.m"
            io_combinator__Res3_28 = ((MR_Word) io_combinator__conv8_Res3_28);
#line 1668 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_28)) == (MR_mktag((MR_Integer) 1))))
#line 1670 "io_combinator.m"
              *io_combinator__Res_22 = io_combinator__Res3_28;
#line 1668 "io_combinator.m"
            else
#line 1630 "io_combinator.m"
              {
#line 1630 "io_combinator.m"
                MR_Box io_combinator__T3_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_28, (MR_Integer) 0));
#line 1630 "io_combinator.m"
                MR_Word io_combinator__Res4_30;
#line 1631 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_16, (MR_Integer) 1)));
#line 1631 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_30;
#line 1631 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_46_46;

#line 1631 "io_combinator.m"
                {
#line 1631 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_16), &io_combinator__conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_46_46);
                }
#line 1631 "io_combinator.m"
                io_combinator__Res4_30 = ((MR_Word) io_combinator__conv11_Res4_30);
#line 1664 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_30)) == (MR_mktag((MR_Integer) 1))))
#line 1666 "io_combinator.m"
                  *io_combinator__Res_22 = io_combinator__Res4_30;
#line 1664 "io_combinator.m"
                else
#line 1633 "io_combinator.m"
                  {
#line 1633 "io_combinator.m"
                    MR_Box io_combinator__T4_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_30, (MR_Integer) 0));
#line 1633 "io_combinator.m"
                    MR_Word io_combinator__Res5_32;
#line 1634 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_17, (MR_Integer) 1)));
#line 1634 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_32;
#line 1634 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_47_47;

#line 1634 "io_combinator.m"
                    {
#line 1634 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_17), &io_combinator__conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_47_47);
                    }
#line 1634 "io_combinator.m"
                    io_combinator__Res5_32 = ((MR_Word) io_combinator__conv14_Res5_32);
#line 1660 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_32)) == (MR_mktag((MR_Integer) 1))))
#line 1662 "io_combinator.m"
                      *io_combinator__Res_22 = io_combinator__Res5_32;
#line 1660 "io_combinator.m"
                    else
#line 1636 "io_combinator.m"
                      {
#line 1636 "io_combinator.m"
                        MR_Box io_combinator__T5_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_32, (MR_Integer) 0));
#line 1636 "io_combinator.m"
                        MR_Word io_combinator__Res6_34;
#line 1637 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_18, (MR_Integer) 1)));
#line 1637 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_34;
#line 1637 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_48_48;

#line 1637 "io_combinator.m"
                        {
#line 1637 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_18), &io_combinator__conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_48_48);
                        }
#line 1637 "io_combinator.m"
                        io_combinator__Res6_34 = ((MR_Word) io_combinator__conv17_Res6_34);
#line 1656 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_34)) == (MR_mktag((MR_Integer) 1))))
#line 1658 "io_combinator.m"
                          *io_combinator__Res_22 = io_combinator__Res6_34;
#line 1656 "io_combinator.m"
                        else
#line 1639 "io_combinator.m"
                          {
#line 1639 "io_combinator.m"
                            MR_Box io_combinator__T6_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_34, (MR_Integer) 0));
#line 1639 "io_combinator.m"
                            MR_Word io_combinator__Res7_36;
#line 1640 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_19, (MR_Integer) 1)));
#line 1640 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_36;
#line 1640 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_49_49;

#line 1640 "io_combinator.m"
                            {
#line 1640 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_19), &io_combinator__conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_49_49);
                            }
#line 1640 "io_combinator.m"
                            io_combinator__Res7_36 = ((MR_Word) io_combinator__conv20_Res7_36);
#line 1652 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_36)) == (MR_mktag((MR_Integer) 1))))
#line 1654 "io_combinator.m"
                              *io_combinator__Res_22 = io_combinator__Res7_36;
#line 1652 "io_combinator.m"
                            else
#line 1642 "io_combinator.m"
                              {
#line 1642 "io_combinator.m"
                                MR_Box io_combinator__T7_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_36, (MR_Integer) 0));
#line 1642 "io_combinator.m"
                                MR_Word io_combinator__Res8_38;
#line 1643 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_20, (MR_Integer) 1)));
#line 1643 "io_combinator.m"
                                MR_Box io_combinator__conv23_Res8_38;
#line 1643 "io_combinator.m"
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_42;

#line 1643 "io_combinator.m"
                                {
#line 1643 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_20), &io_combinator__conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_42);
                                }
#line 1643 "io_combinator.m"
                                io_combinator__Res8_38 = ((MR_Word) io_combinator__conv23_Res8_38);
#line 1648 "io_combinator.m"
                                if (((MR_tag((MR_Word) io_combinator__Res8_38)) == (MR_mktag((MR_Integer) 1))))
#line 1650 "io_combinator.m"
                                  *io_combinator__Res_22 = io_combinator__Res8_38;
#line 1648 "io_combinator.m"
                                else
#line 1645 "io_combinator.m"
                                  {
#line 1645 "io_combinator.m"
                                    MR_Box io_combinator__T8_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_38, (MR_Integer) 0));
#line 1646 "io_combinator.m"
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_21, (MR_Integer) 1)));
#line 1646 "io_combinator.m"
                                    MR_Box io_combinator__conv25_Res_22;

#line 1646 "io_combinator.m"
                                    {
#line 1646 "io_combinator.m"
                                      io_combinator__func_24(((MR_Box) io_combinator__Combine_21), io_combinator__T1_25, io_combinator__T2_27, io_combinator__T3_29, io_combinator__T4_31, io_combinator__T5_33, io_combinator__T6_35, io_combinator__T7_37, io_combinator__T8_39, &io_combinator__conv25_Res_22);
                                    }
#line 1646 "io_combinator.m"
                                    *io_combinator__Res_22 = ((MR_Word) io_combinator__conv25_Res_22);
#line 1645 "io_combinator.m"
                                  }
#line 1642 "io_combinator.m"
                              }
#line 1639 "io_combinator.m"
                          }
#line 1636 "io_combinator.m"
                      }
#line 1633 "io_combinator.m"
                  }
#line 1630 "io_combinator.m"
              }
#line 1627 "io_combinator.m"
          }
#line 1624 "io_combinator.m"
      }
#line 1621 "io_combinator.m"
  }
#line 356 "io_combinator.m"
}

#line 334 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_7_11_p_0(
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_52,
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_53,
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_54,
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_55,
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_56,
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_57,
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_58,
#line 334 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_59,
#line 334 "io_combinator.m"
  MR_Word io_combinator__P1_12,
#line 334 "io_combinator.m"
  MR_Word io_combinator__P2_13,
#line 334 "io_combinator.m"
  MR_Word io_combinator__P3_14,
#line 334 "io_combinator.m"
  MR_Word io_combinator__P4_15,
#line 334 "io_combinator.m"
  MR_Word io_combinator__P5_16,
#line 334 "io_combinator.m"
  MR_Word io_combinator__P6_17,
#line 334 "io_combinator.m"
  MR_Word io_combinator__P7_18,
#line 334 "io_combinator.m"
  MR_Word io_combinator__Combine_19,
#line 334 "io_combinator.m"
  MR_Word * io_combinator__Res_20)
#line 334 "io_combinator.m"
{
#line 1568 "io_combinator.m"
  {
#line 1568 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1568 "io_combinator.m"
    MR_Word io_combinator__Res1_22;
#line 1569 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_12, (MR_Integer) 1)));
#line 1569 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_22;
#line 1569 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_39_39;

#line 1569 "io_combinator.m"
    {
#line 1569 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_12), &io_combinator__conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_39_39);
    }
#line 1569 "io_combinator.m"
    io_combinator__Res1_22 = ((MR_Word) io_combinator__conv2_Res1_22);
#line 1615 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_22)) == (MR_mktag((MR_Integer) 1))))
#line 1617 "io_combinator.m"
      *io_combinator__Res_20 = io_combinator__Res1_22;
#line 1615 "io_combinator.m"
    else
#line 1571 "io_combinator.m"
      {
#line 1571 "io_combinator.m"
        MR_Box io_combinator__T1_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_22, (MR_Integer) 0));
#line 1571 "io_combinator.m"
        MR_Word io_combinator__Res2_24;
#line 1572 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_13, (MR_Integer) 1)));
#line 1572 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_24;
#line 1572 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_40_40;

#line 1572 "io_combinator.m"
        {
#line 1572 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_13), &io_combinator__conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_40_40);
        }
#line 1572 "io_combinator.m"
        io_combinator__Res2_24 = ((MR_Word) io_combinator__conv5_Res2_24);
#line 1611 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_24)) == (MR_mktag((MR_Integer) 1))))
#line 1613 "io_combinator.m"
          *io_combinator__Res_20 = io_combinator__Res2_24;
#line 1611 "io_combinator.m"
        else
#line 1574 "io_combinator.m"
          {
#line 1574 "io_combinator.m"
            MR_Box io_combinator__T2_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_24, (MR_Integer) 0));
#line 1574 "io_combinator.m"
            MR_Word io_combinator__Res3_26;
#line 1575 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_14, (MR_Integer) 1)));
#line 1575 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_26;
#line 1575 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_41_41;

#line 1575 "io_combinator.m"
            {
#line 1575 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_14), &io_combinator__conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_41_41);
            }
#line 1575 "io_combinator.m"
            io_combinator__Res3_26 = ((MR_Word) io_combinator__conv8_Res3_26);
#line 1607 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_26)) == (MR_mktag((MR_Integer) 1))))
#line 1609 "io_combinator.m"
              *io_combinator__Res_20 = io_combinator__Res3_26;
#line 1607 "io_combinator.m"
            else
#line 1577 "io_combinator.m"
              {
#line 1577 "io_combinator.m"
                MR_Box io_combinator__T3_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_26, (MR_Integer) 0));
#line 1577 "io_combinator.m"
                MR_Word io_combinator__Res4_28;
#line 1578 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_15, (MR_Integer) 1)));
#line 1578 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_28;
#line 1578 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_42_42;

#line 1578 "io_combinator.m"
                {
#line 1578 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_15), &io_combinator__conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_42_42);
                }
#line 1578 "io_combinator.m"
                io_combinator__Res4_28 = ((MR_Word) io_combinator__conv11_Res4_28);
#line 1603 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_28)) == (MR_mktag((MR_Integer) 1))))
#line 1605 "io_combinator.m"
                  *io_combinator__Res_20 = io_combinator__Res4_28;
#line 1603 "io_combinator.m"
                else
#line 1580 "io_combinator.m"
                  {
#line 1580 "io_combinator.m"
                    MR_Box io_combinator__T4_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_28, (MR_Integer) 0));
#line 1580 "io_combinator.m"
                    MR_Word io_combinator__Res5_30;
#line 1581 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_16, (MR_Integer) 1)));
#line 1581 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_30;
#line 1581 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_43_43;

#line 1581 "io_combinator.m"
                    {
#line 1581 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_16), &io_combinator__conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_43_43);
                    }
#line 1581 "io_combinator.m"
                    io_combinator__Res5_30 = ((MR_Word) io_combinator__conv14_Res5_30);
#line 1599 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_30)) == (MR_mktag((MR_Integer) 1))))
#line 1601 "io_combinator.m"
                      *io_combinator__Res_20 = io_combinator__Res5_30;
#line 1599 "io_combinator.m"
                    else
#line 1583 "io_combinator.m"
                      {
#line 1583 "io_combinator.m"
                        MR_Box io_combinator__T5_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_30, (MR_Integer) 0));
#line 1583 "io_combinator.m"
                        MR_Word io_combinator__Res6_32;
#line 1584 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_17, (MR_Integer) 1)));
#line 1584 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_32;
#line 1584 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_44_44;

#line 1584 "io_combinator.m"
                        {
#line 1584 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_17), &io_combinator__conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_44_44);
                        }
#line 1584 "io_combinator.m"
                        io_combinator__Res6_32 = ((MR_Word) io_combinator__conv17_Res6_32);
#line 1595 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_32)) == (MR_mktag((MR_Integer) 1))))
#line 1597 "io_combinator.m"
                          *io_combinator__Res_20 = io_combinator__Res6_32;
#line 1595 "io_combinator.m"
                        else
#line 1586 "io_combinator.m"
                          {
#line 1586 "io_combinator.m"
                            MR_Box io_combinator__T6_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_32, (MR_Integer) 0));
#line 1586 "io_combinator.m"
                            MR_Word io_combinator__Res7_34;
#line 1587 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_18, (MR_Integer) 1)));
#line 1587 "io_combinator.m"
                            MR_Box io_combinator__conv20_Res7_34;
#line 1587 "io_combinator.m"
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_38;

#line 1587 "io_combinator.m"
                            {
#line 1587 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__P7_18), &io_combinator__conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_38);
                            }
#line 1587 "io_combinator.m"
                            io_combinator__Res7_34 = ((MR_Word) io_combinator__conv20_Res7_34);
#line 1591 "io_combinator.m"
                            if (((MR_tag((MR_Word) io_combinator__Res7_34)) == (MR_mktag((MR_Integer) 1))))
#line 1593 "io_combinator.m"
                              *io_combinator__Res_20 = io_combinator__Res7_34;
#line 1591 "io_combinator.m"
                            else
#line 1589 "io_combinator.m"
                              {
#line 1589 "io_combinator.m"
                                MR_Box io_combinator__T7_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_34, (MR_Integer) 0));
#line 1590 "io_combinator.m"
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_19, (MR_Integer) 1)));
#line 1590 "io_combinator.m"
                                MR_Box io_combinator__conv22_Res_20;

#line 1590 "io_combinator.m"
                                {
#line 1590 "io_combinator.m"
                                  io_combinator__func_21(((MR_Box) io_combinator__Combine_19), io_combinator__T1_23, io_combinator__T2_25, io_combinator__T3_27, io_combinator__T4_29, io_combinator__T5_31, io_combinator__T6_33, io_combinator__T7_35, &io_combinator__conv22_Res_20);
                                }
#line 1590 "io_combinator.m"
                                *io_combinator__Res_20 = ((MR_Word) io_combinator__conv22_Res_20);
#line 1589 "io_combinator.m"
                              }
#line 1586 "io_combinator.m"
                          }
#line 1583 "io_combinator.m"
                      }
#line 1580 "io_combinator.m"
                  }
#line 1577 "io_combinator.m"
              }
#line 1574 "io_combinator.m"
          }
#line 1571 "io_combinator.m"
      }
#line 1568 "io_combinator.m"
  }
#line 334 "io_combinator.m"
}

#line 314 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_6_10_p_0(
#line 314 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_46,
#line 314 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_47,
#line 314 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_48,
#line 314 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_49,
#line 314 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_50,
#line 314 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_51,
#line 314 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_52,
#line 314 "io_combinator.m"
  MR_Word io_combinator__P1_11,
#line 314 "io_combinator.m"
  MR_Word io_combinator__P2_12,
#line 314 "io_combinator.m"
  MR_Word io_combinator__P3_13,
#line 314 "io_combinator.m"
  MR_Word io_combinator__P4_14,
#line 314 "io_combinator.m"
  MR_Word io_combinator__P5_15,
#line 314 "io_combinator.m"
  MR_Word io_combinator__P6_16,
#line 314 "io_combinator.m"
  MR_Word io_combinator__Combine_17,
#line 314 "io_combinator.m"
  MR_Word * io_combinator__Res_18)
#line 314 "io_combinator.m"
{
#line 1523 "io_combinator.m"
  {
#line 1523 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1523 "io_combinator.m"
    MR_Word io_combinator__Res1_20;
#line 1524 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_11, (MR_Integer) 1)));
#line 1524 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_20;
#line 1524 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_35_35;

#line 1524 "io_combinator.m"
    {
#line 1524 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_11), &io_combinator__conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_35_35);
    }
#line 1524 "io_combinator.m"
    io_combinator__Res1_20 = ((MR_Word) io_combinator__conv2_Res1_20);
#line 1563 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_20)) == (MR_mktag((MR_Integer) 1))))
#line 1565 "io_combinator.m"
      *io_combinator__Res_18 = io_combinator__Res1_20;
#line 1563 "io_combinator.m"
    else
#line 1526 "io_combinator.m"
      {
#line 1526 "io_combinator.m"
        MR_Box io_combinator__T1_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_20, (MR_Integer) 0));
#line 1526 "io_combinator.m"
        MR_Word io_combinator__Res2_22;
#line 1527 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_12, (MR_Integer) 1)));
#line 1527 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_22;
#line 1527 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_36_36;

#line 1527 "io_combinator.m"
        {
#line 1527 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_12), &io_combinator__conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_36_36);
        }
#line 1527 "io_combinator.m"
        io_combinator__Res2_22 = ((MR_Word) io_combinator__conv5_Res2_22);
#line 1559 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_22)) == (MR_mktag((MR_Integer) 1))))
#line 1561 "io_combinator.m"
          *io_combinator__Res_18 = io_combinator__Res2_22;
#line 1559 "io_combinator.m"
        else
#line 1529 "io_combinator.m"
          {
#line 1529 "io_combinator.m"
            MR_Box io_combinator__T2_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_22, (MR_Integer) 0));
#line 1529 "io_combinator.m"
            MR_Word io_combinator__Res3_24;
#line 1530 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_13, (MR_Integer) 1)));
#line 1530 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_24;
#line 1530 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_37_37;

#line 1530 "io_combinator.m"
            {
#line 1530 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_13), &io_combinator__conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_37_37);
            }
#line 1530 "io_combinator.m"
            io_combinator__Res3_24 = ((MR_Word) io_combinator__conv8_Res3_24);
#line 1555 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_24)) == (MR_mktag((MR_Integer) 1))))
#line 1557 "io_combinator.m"
              *io_combinator__Res_18 = io_combinator__Res3_24;
#line 1555 "io_combinator.m"
            else
#line 1532 "io_combinator.m"
              {
#line 1532 "io_combinator.m"
                MR_Box io_combinator__T3_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_24, (MR_Integer) 0));
#line 1532 "io_combinator.m"
                MR_Word io_combinator__Res4_26;
#line 1533 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_14, (MR_Integer) 1)));
#line 1533 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_26;
#line 1533 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_38_38;

#line 1533 "io_combinator.m"
                {
#line 1533 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_14), &io_combinator__conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_38_38);
                }
#line 1533 "io_combinator.m"
                io_combinator__Res4_26 = ((MR_Word) io_combinator__conv11_Res4_26);
#line 1551 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_26)) == (MR_mktag((MR_Integer) 1))))
#line 1553 "io_combinator.m"
                  *io_combinator__Res_18 = io_combinator__Res4_26;
#line 1551 "io_combinator.m"
                else
#line 1535 "io_combinator.m"
                  {
#line 1535 "io_combinator.m"
                    MR_Box io_combinator__T4_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_26, (MR_Integer) 0));
#line 1535 "io_combinator.m"
                    MR_Word io_combinator__Res5_28;
#line 1536 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_15, (MR_Integer) 1)));
#line 1536 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_28;
#line 1536 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_39_39;

#line 1536 "io_combinator.m"
                    {
#line 1536 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_15), &io_combinator__conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_39_39);
                    }
#line 1536 "io_combinator.m"
                    io_combinator__Res5_28 = ((MR_Word) io_combinator__conv14_Res5_28);
#line 1547 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_28)) == (MR_mktag((MR_Integer) 1))))
#line 1549 "io_combinator.m"
                      *io_combinator__Res_18 = io_combinator__Res5_28;
#line 1547 "io_combinator.m"
                    else
#line 1538 "io_combinator.m"
                      {
#line 1538 "io_combinator.m"
                        MR_Box io_combinator__T5_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_28, (MR_Integer) 0));
#line 1538 "io_combinator.m"
                        MR_Word io_combinator__Res6_30;
#line 1539 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_16, (MR_Integer) 1)));
#line 1539 "io_combinator.m"
                        MR_Box io_combinator__conv17_Res6_30;
#line 1539 "io_combinator.m"
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_34;

#line 1539 "io_combinator.m"
                        {
#line 1539 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__P6_16), &io_combinator__conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_34);
                        }
#line 1539 "io_combinator.m"
                        io_combinator__Res6_30 = ((MR_Word) io_combinator__conv17_Res6_30);
#line 1543 "io_combinator.m"
                        if (((MR_tag((MR_Word) io_combinator__Res6_30)) == (MR_mktag((MR_Integer) 1))))
#line 1545 "io_combinator.m"
                          *io_combinator__Res_18 = io_combinator__Res6_30;
#line 1543 "io_combinator.m"
                        else
#line 1541 "io_combinator.m"
                          {
#line 1541 "io_combinator.m"
                            MR_Box io_combinator__T6_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_30, (MR_Integer) 0));
#line 1542 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_17, (MR_Integer) 1)));
#line 1542 "io_combinator.m"
                            MR_Box io_combinator__conv19_Res_18;

#line 1542 "io_combinator.m"
                            {
#line 1542 "io_combinator.m"
                              io_combinator__func_18(((MR_Box) io_combinator__Combine_17), io_combinator__T1_21, io_combinator__T2_23, io_combinator__T3_25, io_combinator__T4_27, io_combinator__T5_29, io_combinator__T6_31, &io_combinator__conv19_Res_18);
                            }
#line 1542 "io_combinator.m"
                            *io_combinator__Res_18 = ((MR_Word) io_combinator__conv19_Res_18);
#line 1541 "io_combinator.m"
                          }
#line 1538 "io_combinator.m"
                      }
#line 1535 "io_combinator.m"
                  }
#line 1532 "io_combinator.m"
              }
#line 1529 "io_combinator.m"
          }
#line 1526 "io_combinator.m"
      }
#line 1523 "io_combinator.m"
  }
#line 314 "io_combinator.m"
}

#line 296 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_5_9_p_0(
#line 296 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_40,
#line 296 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_41,
#line 296 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_42,
#line 296 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_43,
#line 296 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_44,
#line 296 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_45,
#line 296 "io_combinator.m"
  MR_Word io_combinator__P1_10,
#line 296 "io_combinator.m"
  MR_Word io_combinator__P2_11,
#line 296 "io_combinator.m"
  MR_Word io_combinator__P3_12,
#line 296 "io_combinator.m"
  MR_Word io_combinator__P4_13,
#line 296 "io_combinator.m"
  MR_Word io_combinator__P5_14,
#line 296 "io_combinator.m"
  MR_Word io_combinator__Combine_15,
#line 296 "io_combinator.m"
  MR_Word * io_combinator__Res_16)
#line 296 "io_combinator.m"
{
#line 1485 "io_combinator.m"
  {
#line 1485 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1485 "io_combinator.m"
    MR_Word io_combinator__Res1_18;
#line 1486 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_10, (MR_Integer) 1)));
#line 1486 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_18;
#line 1486 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_31_31;

#line 1486 "io_combinator.m"
    {
#line 1486 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_10), &io_combinator__conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_31_31);
    }
#line 1486 "io_combinator.m"
    io_combinator__Res1_18 = ((MR_Word) io_combinator__conv2_Res1_18);
#line 1518 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_18)) == (MR_mktag((MR_Integer) 1))))
#line 1520 "io_combinator.m"
      *io_combinator__Res_16 = io_combinator__Res1_18;
#line 1518 "io_combinator.m"
    else
#line 1488 "io_combinator.m"
      {
#line 1488 "io_combinator.m"
        MR_Box io_combinator__T1_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_18, (MR_Integer) 0));
#line 1488 "io_combinator.m"
        MR_Word io_combinator__Res2_20;
#line 1489 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_11, (MR_Integer) 1)));
#line 1489 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_20;
#line 1489 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_32_32;

#line 1489 "io_combinator.m"
        {
#line 1489 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_11), &io_combinator__conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_32_32);
        }
#line 1489 "io_combinator.m"
        io_combinator__Res2_20 = ((MR_Word) io_combinator__conv5_Res2_20);
#line 1514 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_20)) == (MR_mktag((MR_Integer) 1))))
#line 1516 "io_combinator.m"
          *io_combinator__Res_16 = io_combinator__Res2_20;
#line 1514 "io_combinator.m"
        else
#line 1491 "io_combinator.m"
          {
#line 1491 "io_combinator.m"
            MR_Box io_combinator__T2_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_20, (MR_Integer) 0));
#line 1491 "io_combinator.m"
            MR_Word io_combinator__Res3_22;
#line 1492 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_12, (MR_Integer) 1)));
#line 1492 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_22;
#line 1492 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_33_33;

#line 1492 "io_combinator.m"
            {
#line 1492 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_12), &io_combinator__conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_33_33);
            }
#line 1492 "io_combinator.m"
            io_combinator__Res3_22 = ((MR_Word) io_combinator__conv8_Res3_22);
#line 1510 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_22)) == (MR_mktag((MR_Integer) 1))))
#line 1512 "io_combinator.m"
              *io_combinator__Res_16 = io_combinator__Res3_22;
#line 1510 "io_combinator.m"
            else
#line 1494 "io_combinator.m"
              {
#line 1494 "io_combinator.m"
                MR_Box io_combinator__T3_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_22, (MR_Integer) 0));
#line 1494 "io_combinator.m"
                MR_Word io_combinator__Res4_24;
#line 1495 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_13, (MR_Integer) 1)));
#line 1495 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_24;
#line 1495 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_34_34;

#line 1495 "io_combinator.m"
                {
#line 1495 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_13), &io_combinator__conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_34_34);
                }
#line 1495 "io_combinator.m"
                io_combinator__Res4_24 = ((MR_Word) io_combinator__conv11_Res4_24);
#line 1506 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_24)) == (MR_mktag((MR_Integer) 1))))
#line 1508 "io_combinator.m"
                  *io_combinator__Res_16 = io_combinator__Res4_24;
#line 1506 "io_combinator.m"
                else
#line 1497 "io_combinator.m"
                  {
#line 1497 "io_combinator.m"
                    MR_Box io_combinator__T4_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_24, (MR_Integer) 0));
#line 1497 "io_combinator.m"
                    MR_Word io_combinator__Res5_26;
#line 1498 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_14, (MR_Integer) 1)));
#line 1498 "io_combinator.m"
                    MR_Box io_combinator__conv14_Res5_26;
#line 1498 "io_combinator.m"
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_30;

#line 1498 "io_combinator.m"
                    {
#line 1498 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__P5_14), &io_combinator__conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_30);
                    }
#line 1498 "io_combinator.m"
                    io_combinator__Res5_26 = ((MR_Word) io_combinator__conv14_Res5_26);
#line 1502 "io_combinator.m"
                    if (((MR_tag((MR_Word) io_combinator__Res5_26)) == (MR_mktag((MR_Integer) 1))))
#line 1504 "io_combinator.m"
                      *io_combinator__Res_16 = io_combinator__Res5_26;
#line 1502 "io_combinator.m"
                    else
#line 1500 "io_combinator.m"
                      {
#line 1500 "io_combinator.m"
                        MR_Box io_combinator__T5_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_26, (MR_Integer) 0));
#line 1501 "io_combinator.m"
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_15, (MR_Integer) 1)));
#line 1501 "io_combinator.m"
                        MR_Box io_combinator__conv16_Res_16;

#line 1501 "io_combinator.m"
                        {
#line 1501 "io_combinator.m"
                          io_combinator__func_15(((MR_Box) io_combinator__Combine_15), io_combinator__T1_19, io_combinator__T2_21, io_combinator__T3_23, io_combinator__T4_25, io_combinator__T5_27, &io_combinator__conv16_Res_16);
                        }
#line 1501 "io_combinator.m"
                        *io_combinator__Res_16 = ((MR_Word) io_combinator__conv16_Res_16);
#line 1500 "io_combinator.m"
                      }
#line 1497 "io_combinator.m"
                  }
#line 1494 "io_combinator.m"
              }
#line 1491 "io_combinator.m"
          }
#line 1488 "io_combinator.m"
      }
#line 1485 "io_combinator.m"
  }
#line 296 "io_combinator.m"
}

#line 280 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_4_8_p_0(
#line 280 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_34,
#line 280 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_35,
#line 280 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_36,
#line 280 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_37,
#line 280 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_38,
#line 280 "io_combinator.m"
  MR_Word io_combinator__P1_9,
#line 280 "io_combinator.m"
  MR_Word io_combinator__P2_10,
#line 280 "io_combinator.m"
  MR_Word io_combinator__P3_11,
#line 280 "io_combinator.m"
  MR_Word io_combinator__P4_12,
#line 280 "io_combinator.m"
  MR_Word io_combinator__Combine_13,
#line 280 "io_combinator.m"
  MR_Word * io_combinator__Res_14)
#line 280 "io_combinator.m"
{
#line 1454 "io_combinator.m"
  {
#line 1454 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1454 "io_combinator.m"
    MR_Word io_combinator__Res1_16;
#line 1455 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_9, (MR_Integer) 1)));
#line 1455 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_16;
#line 1455 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_27_27;

#line 1455 "io_combinator.m"
    {
#line 1455 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_9), &io_combinator__conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_27_27);
    }
#line 1455 "io_combinator.m"
    io_combinator__Res1_16 = ((MR_Word) io_combinator__conv2_Res1_16);
#line 1480 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_16)) == (MR_mktag((MR_Integer) 1))))
#line 1482 "io_combinator.m"
      *io_combinator__Res_14 = io_combinator__Res1_16;
#line 1480 "io_combinator.m"
    else
#line 1457 "io_combinator.m"
      {
#line 1457 "io_combinator.m"
        MR_Box io_combinator__T1_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_16, (MR_Integer) 0));
#line 1457 "io_combinator.m"
        MR_Word io_combinator__Res2_18;
#line 1458 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_10, (MR_Integer) 1)));
#line 1458 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_18;
#line 1458 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_28_28;

#line 1458 "io_combinator.m"
        {
#line 1458 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_10), &io_combinator__conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_28_28);
        }
#line 1458 "io_combinator.m"
        io_combinator__Res2_18 = ((MR_Word) io_combinator__conv5_Res2_18);
#line 1476 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_18)) == (MR_mktag((MR_Integer) 1))))
#line 1478 "io_combinator.m"
          *io_combinator__Res_14 = io_combinator__Res2_18;
#line 1476 "io_combinator.m"
        else
#line 1460 "io_combinator.m"
          {
#line 1460 "io_combinator.m"
            MR_Box io_combinator__T2_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_18, (MR_Integer) 0));
#line 1460 "io_combinator.m"
            MR_Word io_combinator__Res3_20;
#line 1461 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_11, (MR_Integer) 1)));
#line 1461 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_20;
#line 1461 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_29_29;

#line 1461 "io_combinator.m"
            {
#line 1461 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_11), &io_combinator__conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_29_29);
            }
#line 1461 "io_combinator.m"
            io_combinator__Res3_20 = ((MR_Word) io_combinator__conv8_Res3_20);
#line 1472 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_20)) == (MR_mktag((MR_Integer) 1))))
#line 1474 "io_combinator.m"
              *io_combinator__Res_14 = io_combinator__Res3_20;
#line 1472 "io_combinator.m"
            else
#line 1463 "io_combinator.m"
              {
#line 1463 "io_combinator.m"
                MR_Box io_combinator__T3_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_20, (MR_Integer) 0));
#line 1463 "io_combinator.m"
                MR_Word io_combinator__Res4_22;
#line 1464 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_12, (MR_Integer) 1)));
#line 1464 "io_combinator.m"
                MR_Box io_combinator__conv11_Res4_22;
#line 1464 "io_combinator.m"
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_26;

#line 1464 "io_combinator.m"
                {
#line 1464 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__P4_12), &io_combinator__conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_26);
                }
#line 1464 "io_combinator.m"
                io_combinator__Res4_22 = ((MR_Word) io_combinator__conv11_Res4_22);
#line 1468 "io_combinator.m"
                if (((MR_tag((MR_Word) io_combinator__Res4_22)) == (MR_mktag((MR_Integer) 1))))
#line 1470 "io_combinator.m"
                  *io_combinator__Res_14 = io_combinator__Res4_22;
#line 1468 "io_combinator.m"
                else
#line 1466 "io_combinator.m"
                  {
#line 1466 "io_combinator.m"
                    MR_Box io_combinator__T4_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_22, (MR_Integer) 0));
#line 1467 "io_combinator.m"
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_13, (MR_Integer) 1)));
#line 1467 "io_combinator.m"
                    MR_Box io_combinator__conv13_Res_14;

#line 1467 "io_combinator.m"
                    {
#line 1467 "io_combinator.m"
                      io_combinator__func_12(((MR_Box) io_combinator__Combine_13), io_combinator__T1_17, io_combinator__T2_19, io_combinator__T3_21, io_combinator__T4_23, &io_combinator__conv13_Res_14);
                    }
#line 1467 "io_combinator.m"
                    *io_combinator__Res_14 = ((MR_Word) io_combinator__conv13_Res_14);
#line 1466 "io_combinator.m"
                  }
#line 1463 "io_combinator.m"
              }
#line 1460 "io_combinator.m"
          }
#line 1457 "io_combinator.m"
      }
#line 1454 "io_combinator.m"
  }
#line 280 "io_combinator.m"
}

#line 266 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_3_7_p_0(
#line 266 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_28,
#line 266 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_29,
#line 266 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_30,
#line 266 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_31,
#line 266 "io_combinator.m"
  MR_Word io_combinator__P1_8,
#line 266 "io_combinator.m"
  MR_Word io_combinator__P2_9,
#line 266 "io_combinator.m"
  MR_Word io_combinator__P3_10,
#line 266 "io_combinator.m"
  MR_Word io_combinator__Combine_11,
#line 266 "io_combinator.m"
  MR_Word * io_combinator__Res_12)
#line 266 "io_combinator.m"
{
#line 1430 "io_combinator.m"
  {
#line 1430 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1430 "io_combinator.m"
    MR_Word io_combinator__Res1_14;
#line 1431 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_8, (MR_Integer) 1)));
#line 1431 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_14;
#line 1431 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_23_23;

#line 1431 "io_combinator.m"
    {
#line 1431 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_8), &io_combinator__conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 1431 "io_combinator.m"
    io_combinator__Res1_14 = ((MR_Word) io_combinator__conv2_Res1_14);
#line 1449 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_14)) == (MR_mktag((MR_Integer) 1))))
#line 1451 "io_combinator.m"
      *io_combinator__Res_12 = io_combinator__Res1_14;
#line 1449 "io_combinator.m"
    else
#line 1433 "io_combinator.m"
      {
#line 1433 "io_combinator.m"
        MR_Box io_combinator__T1_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_14, (MR_Integer) 0));
#line 1433 "io_combinator.m"
        MR_Word io_combinator__Res2_16;
#line 1434 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_9, (MR_Integer) 1)));
#line 1434 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_16;
#line 1434 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_24_24;

#line 1434 "io_combinator.m"
        {
#line 1434 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_9), &io_combinator__conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_24_24);
        }
#line 1434 "io_combinator.m"
        io_combinator__Res2_16 = ((MR_Word) io_combinator__conv5_Res2_16);
#line 1445 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_16)) == (MR_mktag((MR_Integer) 1))))
#line 1447 "io_combinator.m"
          *io_combinator__Res_12 = io_combinator__Res2_16;
#line 1445 "io_combinator.m"
        else
#line 1436 "io_combinator.m"
          {
#line 1436 "io_combinator.m"
            MR_Box io_combinator__T2_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_16, (MR_Integer) 0));
#line 1436 "io_combinator.m"
            MR_Word io_combinator__Res3_18;
#line 1437 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_10, (MR_Integer) 1)));
#line 1437 "io_combinator.m"
            MR_Box io_combinator__conv8_Res3_18;
#line 1437 "io_combinator.m"
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_22;

#line 1437 "io_combinator.m"
            {
#line 1437 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__P3_10), &io_combinator__conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_22);
            }
#line 1437 "io_combinator.m"
            io_combinator__Res3_18 = ((MR_Word) io_combinator__conv8_Res3_18);
#line 1441 "io_combinator.m"
            if (((MR_tag((MR_Word) io_combinator__Res3_18)) == (MR_mktag((MR_Integer) 1))))
#line 1443 "io_combinator.m"
              *io_combinator__Res_12 = io_combinator__Res3_18;
#line 1441 "io_combinator.m"
            else
#line 1439 "io_combinator.m"
              {
#line 1439 "io_combinator.m"
                MR_Box io_combinator__T3_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_18, (MR_Integer) 0));
#line 1440 "io_combinator.m"
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_11, (MR_Integer) 1)));
#line 1440 "io_combinator.m"
                MR_Box io_combinator__conv10_Res_12;

#line 1440 "io_combinator.m"
                {
#line 1440 "io_combinator.m"
                  io_combinator__func_9(((MR_Box) io_combinator__Combine_11), io_combinator__T1_15, io_combinator__T2_17, io_combinator__T3_19, &io_combinator__conv10_Res_12);
                }
#line 1440 "io_combinator.m"
                *io_combinator__Res_12 = ((MR_Word) io_combinator__conv10_Res_12);
#line 1439 "io_combinator.m"
              }
#line 1436 "io_combinator.m"
          }
#line 1433 "io_combinator.m"
      }
#line 1430 "io_combinator.m"
  }
#line 266 "io_combinator.m"
}

#line 254 "io_combinator.m"
void MR_CALL 
io_combinator__res_sequence_2_6_p_0(
#line 254 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_22,
#line 254 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_23,
#line 254 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_24,
#line 254 "io_combinator.m"
  MR_Word io_combinator__P1_7,
#line 254 "io_combinator.m"
  MR_Word io_combinator__P2_8,
#line 254 "io_combinator.m"
  MR_Word io_combinator__Combine_9,
#line 254 "io_combinator.m"
  MR_Word * io_combinator__Res_10)
#line 254 "io_combinator.m"
{
#line 1413 "io_combinator.m"
  {
#line 1413 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1413 "io_combinator.m"
    MR_Word io_combinator__Res1_12;
#line 1414 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_7, (MR_Integer) 1)));
#line 1414 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_12;
#line 1414 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_19_19;

#line 1414 "io_combinator.m"
    {
#line 1414 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_7), &io_combinator__conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 1414 "io_combinator.m"
    io_combinator__Res1_12 = ((MR_Word) io_combinator__conv2_Res1_12);
#line 1425 "io_combinator.m"
    if (((MR_tag((MR_Word) io_combinator__Res1_12)) == (MR_mktag((MR_Integer) 1))))
#line 1427 "io_combinator.m"
      *io_combinator__Res_10 = io_combinator__Res1_12;
#line 1425 "io_combinator.m"
    else
#line 1416 "io_combinator.m"
      {
#line 1416 "io_combinator.m"
        MR_Box io_combinator__T1_13 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_12, (MR_Integer) 0));
#line 1416 "io_combinator.m"
        MR_Word io_combinator__Res2_14;
#line 1417 "io_combinator.m"
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_8, (MR_Integer) 1)));
#line 1417 "io_combinator.m"
        MR_Box io_combinator__conv5_Res2_14;
#line 1417 "io_combinator.m"
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_18;

#line 1417 "io_combinator.m"
        {
#line 1417 "io_combinator.m"
          io_combinator__func_3(((MR_Box) io_combinator__P2_8), &io_combinator__conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_18);
        }
#line 1417 "io_combinator.m"
        io_combinator__Res2_14 = ((MR_Word) io_combinator__conv5_Res2_14);
#line 1421 "io_combinator.m"
        if (((MR_tag((MR_Word) io_combinator__Res2_14)) == (MR_mktag((MR_Integer) 1))))
#line 1423 "io_combinator.m"
          *io_combinator__Res_10 = io_combinator__Res2_14;
#line 1421 "io_combinator.m"
        else
#line 1419 "io_combinator.m"
          {
#line 1419 "io_combinator.m"
            MR_Box io_combinator__T2_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_14, (MR_Integer) 0));
#line 1420 "io_combinator.m"
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_9, (MR_Integer) 1)));
#line 1420 "io_combinator.m"
            MR_Box io_combinator__conv7_Res_10;

#line 1420 "io_combinator.m"
            {
#line 1420 "io_combinator.m"
              io_combinator__func_6(((MR_Box) io_combinator__Combine_9), io_combinator__T1_13, io_combinator__T2_15, &io_combinator__conv7_Res_10);
            }
#line 1420 "io_combinator.m"
            *io_combinator__Res_10 = ((MR_Word) io_combinator__conv7_Res_10);
#line 1419 "io_combinator.m"
          }
#line 1416 "io_combinator.m"
      }
#line 1413 "io_combinator.m"
  }
#line 254 "io_combinator.m"
}

#line 232 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_11_15_p_0(
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_76,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_77,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_78,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_79,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_80,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_81,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_82,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_83,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_84,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_85,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T11_86,
#line 232 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_87,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P1_16,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P2_17,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P3_18,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P4_19,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P5_20,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P6_21,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P7_22,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P8_23,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P9_24,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P10_25,
#line 232 "io_combinator.m"
  MR_Word io_combinator__P11_26,
#line 232 "io_combinator.m"
  MR_Word io_combinator__Combine_27,
#line 232 "io_combinator.m"
  MR_Word * io_combinator__Res_28)
#line 232 "io_combinator.m"
{
#line 1296 "io_combinator.m"
  {
#line 1296 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1296 "io_combinator.m"
    MR_Word io_combinator__Res1_30;
#line 1297 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_16, (MR_Integer) 1)));
#line 1297 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_30;
#line 1297 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_55_55;

#line 1297 "io_combinator.m"
    {
#line 1297 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_16), &io_combinator__conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_55_55);
    }
#line 1297 "io_combinator.m"
    io_combinator__Res1_30 = ((MR_Word) io_combinator__conv2_Res1_30);
#line 1403 "io_combinator.m"
#line 1403 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_30)) {
#line 1403 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1403 "io_combinator.m"
      case (MR_Integer) 0:
#line 1405 "io_combinator.m"
        *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1403 "io_combinator.m"
        break;
#line 1403 "io_combinator.m"
      case (MR_Integer) 1:
#line 1299 "io_combinator.m"
        {
#line 1299 "io_combinator.m"
          MR_Box io_combinator__T1_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_30, (MR_Integer) 0));
#line 1299 "io_combinator.m"
          MR_Word io_combinator__Res2_32;
#line 1300 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_17, (MR_Integer) 1)));
#line 1300 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_32;
#line 1300 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_56_56;

#line 1300 "io_combinator.m"
          {
#line 1300 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_17), &io_combinator__conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_56_56);
          }
#line 1300 "io_combinator.m"
          io_combinator__Res2_32 = ((MR_Word) io_combinator__conv5_Res2_32);
#line 1396 "io_combinator.m"
#line 1396 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_32)) {
#line 1396 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1396 "io_combinator.m"
            case (MR_Integer) 0:
#line 1398 "io_combinator.m"
              *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1396 "io_combinator.m"
              break;
#line 1396 "io_combinator.m"
            case (MR_Integer) 1:
#line 1302 "io_combinator.m"
              {
#line 1302 "io_combinator.m"
                MR_Box io_combinator__T2_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_32, (MR_Integer) 0));
#line 1302 "io_combinator.m"
                MR_Word io_combinator__Res3_34;
#line 1303 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_18, (MR_Integer) 1)));
#line 1303 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_34;
#line 1303 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_57_57;

#line 1303 "io_combinator.m"
                {
#line 1303 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_18), &io_combinator__conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_57_57);
                }
#line 1303 "io_combinator.m"
                io_combinator__Res3_34 = ((MR_Word) io_combinator__conv8_Res3_34);
#line 1389 "io_combinator.m"
#line 1389 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_34)) {
#line 1389 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1389 "io_combinator.m"
                  case (MR_Integer) 0:
#line 1391 "io_combinator.m"
                    *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1389 "io_combinator.m"
                    break;
#line 1389 "io_combinator.m"
                  case (MR_Integer) 1:
#line 1305 "io_combinator.m"
                    {
#line 1305 "io_combinator.m"
                      MR_Box io_combinator__T3_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_34, (MR_Integer) 0));
#line 1305 "io_combinator.m"
                      MR_Word io_combinator__Res4_36;
#line 1306 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_19, (MR_Integer) 1)));
#line 1306 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_36;
#line 1306 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_58_58;

#line 1306 "io_combinator.m"
                      {
#line 1306 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_19), &io_combinator__conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_58_58);
                      }
#line 1306 "io_combinator.m"
                      io_combinator__Res4_36 = ((MR_Word) io_combinator__conv11_Res4_36);
#line 1382 "io_combinator.m"
#line 1382 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_36)) {
#line 1382 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "io_combinator.m"
                        case (MR_Integer) 0:
#line 1384 "io_combinator.m"
                          *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1382 "io_combinator.m"
                          break;
#line 1382 "io_combinator.m"
                        case (MR_Integer) 1:
#line 1308 "io_combinator.m"
                          {
#line 1308 "io_combinator.m"
                            MR_Box io_combinator__T4_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_36, (MR_Integer) 0));
#line 1308 "io_combinator.m"
                            MR_Word io_combinator__Res5_38;
#line 1309 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_20, (MR_Integer) 1)));
#line 1309 "io_combinator.m"
                            MR_Box io_combinator__conv14_Res5_38;
#line 1309 "io_combinator.m"
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_59_59;

#line 1309 "io_combinator.m"
                            {
#line 1309 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__P5_20), &io_combinator__conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_59_59);
                            }
#line 1309 "io_combinator.m"
                            io_combinator__Res5_38 = ((MR_Word) io_combinator__conv14_Res5_38);
#line 1375 "io_combinator.m"
#line 1375 "io_combinator.m"
                            switch (MR_tag((MR_Word) io_combinator__Res5_38)) {
#line 1375 "io_combinator.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1375 "io_combinator.m"
                              case (MR_Integer) 0:
#line 1377 "io_combinator.m"
                                *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "io_combinator.m"
                                break;
#line 1375 "io_combinator.m"
                              case (MR_Integer) 1:
#line 1311 "io_combinator.m"
                                {
#line 1311 "io_combinator.m"
                                  MR_Box io_combinator__T5_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_38, (MR_Integer) 0));
#line 1311 "io_combinator.m"
                                  MR_Word io_combinator__Res6_40;
#line 1312 "io_combinator.m"
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_21, (MR_Integer) 1)));
#line 1312 "io_combinator.m"
                                  MR_Box io_combinator__conv17_Res6_40;
#line 1312 "io_combinator.m"
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_60_60;

#line 1312 "io_combinator.m"
                                  {
#line 1312 "io_combinator.m"
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_21), &io_combinator__conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_60_60);
                                  }
#line 1312 "io_combinator.m"
                                  io_combinator__Res6_40 = ((MR_Word) io_combinator__conv17_Res6_40);
#line 1368 "io_combinator.m"
#line 1368 "io_combinator.m"
                                  switch (MR_tag((MR_Word) io_combinator__Res6_40)) {
#line 1368 "io_combinator.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 1368 "io_combinator.m"
                                    case (MR_Integer) 0:
#line 1370 "io_combinator.m"
                                      *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1368 "io_combinator.m"
                                      break;
#line 1368 "io_combinator.m"
                                    case (MR_Integer) 1:
#line 1314 "io_combinator.m"
                                      {
#line 1314 "io_combinator.m"
                                        MR_Box io_combinator__T6_41 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_40, (MR_Integer) 0));
#line 1314 "io_combinator.m"
                                        MR_Word io_combinator__Res7_42;
#line 1315 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_22, (MR_Integer) 1)));
#line 1315 "io_combinator.m"
                                        MR_Box io_combinator__conv20_Res7_42;
#line 1315 "io_combinator.m"
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_61_61;

#line 1315 "io_combinator.m"
                                        {
#line 1315 "io_combinator.m"
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_22), &io_combinator__conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_61_61);
                                        }
#line 1315 "io_combinator.m"
                                        io_combinator__Res7_42 = ((MR_Word) io_combinator__conv20_Res7_42);
#line 1361 "io_combinator.m"
#line 1361 "io_combinator.m"
                                        switch (MR_tag((MR_Word) io_combinator__Res7_42)) {
#line 1361 "io_combinator.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 1361 "io_combinator.m"
                                          case (MR_Integer) 0:
#line 1363 "io_combinator.m"
                                            *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1361 "io_combinator.m"
                                            break;
#line 1361 "io_combinator.m"
                                          case (MR_Integer) 1:
#line 1317 "io_combinator.m"
                                            {
#line 1317 "io_combinator.m"
                                              MR_Box io_combinator__T7_43 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_42, (MR_Integer) 0));
#line 1317 "io_combinator.m"
                                              MR_Word io_combinator__Res8_44;
#line 1318 "io_combinator.m"
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_23, (MR_Integer) 1)));
#line 1318 "io_combinator.m"
                                              MR_Box io_combinator__conv23_Res8_44;
#line 1318 "io_combinator.m"
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_62_62;

#line 1318 "io_combinator.m"
                                              {
#line 1318 "io_combinator.m"
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_23), &io_combinator__conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_62_62);
                                              }
#line 1318 "io_combinator.m"
                                              io_combinator__Res8_44 = ((MR_Word) io_combinator__conv23_Res8_44);
#line 1354 "io_combinator.m"
#line 1354 "io_combinator.m"
                                              switch (MR_tag((MR_Word) io_combinator__Res8_44)) {
#line 1354 "io_combinator.m"
                                                default: /*NOTREACHED*/ MR_assert(0);
#line 1354 "io_combinator.m"
                                                case (MR_Integer) 0:
#line 1356 "io_combinator.m"
                                                  *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1354 "io_combinator.m"
                                                  break;
#line 1354 "io_combinator.m"
                                                case (MR_Integer) 1:
#line 1320 "io_combinator.m"
                                                  {
#line 1320 "io_combinator.m"
                                                    MR_Box io_combinator__T8_45 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_44, (MR_Integer) 0));
#line 1320 "io_combinator.m"
                                                    MR_Word io_combinator__Res9_46;
#line 1321 "io_combinator.m"
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_24, (MR_Integer) 1)));
#line 1321 "io_combinator.m"
                                                    MR_Box io_combinator__conv26_Res9_46;
#line 1321 "io_combinator.m"
                                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_63_63;

#line 1321 "io_combinator.m"
                                                    {
#line 1321 "io_combinator.m"
                                                      io_combinator__func_24(((MR_Box) io_combinator__P9_24), &io_combinator__conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_63_63);
                                                    }
#line 1321 "io_combinator.m"
                                                    io_combinator__Res9_46 = ((MR_Word) io_combinator__conv26_Res9_46);
#line 1347 "io_combinator.m"
#line 1347 "io_combinator.m"
                                                    switch (MR_tag((MR_Word) io_combinator__Res9_46)) {
#line 1347 "io_combinator.m"
                                                      default: /*NOTREACHED*/ MR_assert(0);
#line 1347 "io_combinator.m"
                                                      case (MR_Integer) 0:
#line 1349 "io_combinator.m"
                                                        *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1347 "io_combinator.m"
                                                        break;
#line 1347 "io_combinator.m"
                                                      case (MR_Integer) 1:
#line 1323 "io_combinator.m"
                                                        {
#line 1323 "io_combinator.m"
                                                          MR_Box io_combinator__T9_47 = (MR_hl_field(MR_mktag(1), io_combinator__Res9_46, (MR_Integer) 0));
#line 1323 "io_combinator.m"
                                                          MR_Word io_combinator__Res10_48;
#line 1324 "io_combinator.m"
                                                          void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_25, (MR_Integer) 1)));
#line 1324 "io_combinator.m"
                                                          MR_Box io_combinator__conv29_Res10_48;
#line 1324 "io_combinator.m"
                                                          MR_Box io_combinator__conv28_STATE_VARIABLE_IO_64_64;

#line 1324 "io_combinator.m"
                                                          {
#line 1324 "io_combinator.m"
                                                            io_combinator__func_27(((MR_Box) io_combinator__P10_25), &io_combinator__conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_64_64);
                                                          }
#line 1324 "io_combinator.m"
                                                          io_combinator__Res10_48 = ((MR_Word) io_combinator__conv29_Res10_48);
#line 1340 "io_combinator.m"
#line 1340 "io_combinator.m"
                                                          switch (MR_tag((MR_Word) io_combinator__Res10_48)) {
#line 1340 "io_combinator.m"
                                                            default: /*NOTREACHED*/ MR_assert(0);
#line 1340 "io_combinator.m"
                                                            case (MR_Integer) 0:
#line 1342 "io_combinator.m"
                                                              *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1340 "io_combinator.m"
                                                              break;
#line 1340 "io_combinator.m"
                                                            case (MR_Integer) 1:
#line 1326 "io_combinator.m"
                                                              {
#line 1326 "io_combinator.m"
                                                                MR_Box io_combinator__T10_49 = (MR_hl_field(MR_mktag(1), io_combinator__Res10_48, (MR_Integer) 0));
#line 1326 "io_combinator.m"
                                                                MR_Word io_combinator__Res11_50;
#line 1327 "io_combinator.m"
                                                                void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_26, (MR_Integer) 1)));
#line 1327 "io_combinator.m"
                                                                MR_Box io_combinator__conv32_Res11_50;
#line 1327 "io_combinator.m"
                                                                MR_Box io_combinator__conv31_STATE_VARIABLE_IO_54;

#line 1327 "io_combinator.m"
                                                                {
#line 1327 "io_combinator.m"
                                                                  io_combinator__func_30(((MR_Box) io_combinator__P11_26), &io_combinator__conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_54);
                                                                }
#line 1327 "io_combinator.m"
                                                                io_combinator__Res11_50 = ((MR_Word) io_combinator__conv32_Res11_50);
#line 1333 "io_combinator.m"
#line 1333 "io_combinator.m"
                                                                switch (MR_tag((MR_Word) io_combinator__Res11_50)) {
#line 1333 "io_combinator.m"
                                                                  default: /*NOTREACHED*/ MR_assert(0);
#line 1333 "io_combinator.m"
                                                                  case (MR_Integer) 0:
#line 1335 "io_combinator.m"
                                                                    *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1333 "io_combinator.m"
                                                                    break;
#line 1333 "io_combinator.m"
                                                                  case (MR_Integer) 1:
#line 1329 "io_combinator.m"
                                                                    {
#line 1329 "io_combinator.m"
                                                                      MR_Box io_combinator__T11_51 = (MR_hl_field(MR_mktag(1), io_combinator__Res11_50, (MR_Integer) 0));
#line 1330 "io_combinator.m"
                                                                      void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_27, (MR_Integer) 1)));
#line 1330 "io_combinator.m"
                                                                      MR_Box io_combinator__conv34_Res_28;

#line 1330 "io_combinator.m"
                                                                      {
#line 1330 "io_combinator.m"
                                                                        io_combinator__func_33(((MR_Box) io_combinator__Combine_27), io_combinator__T1_31, io_combinator__T2_33, io_combinator__T3_35, io_combinator__T4_37, io_combinator__T5_39, io_combinator__T6_41, io_combinator__T7_43, io_combinator__T8_45, io_combinator__T9_47, io_combinator__T10_49, io_combinator__T11_51, &io_combinator__conv34_Res_28);
                                                                      }
#line 1330 "io_combinator.m"
                                                                      *io_combinator__Res_28 = ((MR_Word) io_combinator__conv34_Res_28);
#line 1329 "io_combinator.m"
                                                                    }
#line 1333 "io_combinator.m"
                                                                    break;
#line 1333 "io_combinator.m"
                                                                  case (MR_Integer) 2:
#line 1338 "io_combinator.m"
                                                                    *io_combinator__Res_28 = io_combinator__Res11_50;
#line 1333 "io_combinator.m"
                                                                    break;
#line 1333 "io_combinator.m"
                                                                }
#line 1326 "io_combinator.m"
                                                              }
#line 1340 "io_combinator.m"
                                                              break;
#line 1340 "io_combinator.m"
                                                            case (MR_Integer) 2:
#line 1345 "io_combinator.m"
                                                              *io_combinator__Res_28 = io_combinator__Res10_48;
#line 1340 "io_combinator.m"
                                                              break;
#line 1340 "io_combinator.m"
                                                          }
#line 1323 "io_combinator.m"
                                                        }
#line 1347 "io_combinator.m"
                                                        break;
#line 1347 "io_combinator.m"
                                                      case (MR_Integer) 2:
#line 1352 "io_combinator.m"
                                                        *io_combinator__Res_28 = io_combinator__Res9_46;
#line 1347 "io_combinator.m"
                                                        break;
#line 1347 "io_combinator.m"
                                                    }
#line 1320 "io_combinator.m"
                                                  }
#line 1354 "io_combinator.m"
                                                  break;
#line 1354 "io_combinator.m"
                                                case (MR_Integer) 2:
#line 1359 "io_combinator.m"
                                                  *io_combinator__Res_28 = io_combinator__Res8_44;
#line 1354 "io_combinator.m"
                                                  break;
#line 1354 "io_combinator.m"
                                              }
#line 1317 "io_combinator.m"
                                            }
#line 1361 "io_combinator.m"
                                            break;
#line 1361 "io_combinator.m"
                                          case (MR_Integer) 2:
#line 1366 "io_combinator.m"
                                            *io_combinator__Res_28 = io_combinator__Res7_42;
#line 1361 "io_combinator.m"
                                            break;
#line 1361 "io_combinator.m"
                                        }
#line 1314 "io_combinator.m"
                                      }
#line 1368 "io_combinator.m"
                                      break;
#line 1368 "io_combinator.m"
                                    case (MR_Integer) 2:
#line 1373 "io_combinator.m"
                                      *io_combinator__Res_28 = io_combinator__Res6_40;
#line 1368 "io_combinator.m"
                                      break;
#line 1368 "io_combinator.m"
                                  }
#line 1311 "io_combinator.m"
                                }
#line 1375 "io_combinator.m"
                                break;
#line 1375 "io_combinator.m"
                              case (MR_Integer) 2:
#line 1380 "io_combinator.m"
                                *io_combinator__Res_28 = io_combinator__Res5_38;
#line 1375 "io_combinator.m"
                                break;
#line 1375 "io_combinator.m"
                            }
#line 1308 "io_combinator.m"
                          }
#line 1382 "io_combinator.m"
                          break;
#line 1382 "io_combinator.m"
                        case (MR_Integer) 2:
#line 1387 "io_combinator.m"
                          *io_combinator__Res_28 = io_combinator__Res4_36;
#line 1382 "io_combinator.m"
                          break;
#line 1382 "io_combinator.m"
                      }
#line 1305 "io_combinator.m"
                    }
#line 1389 "io_combinator.m"
                    break;
#line 1389 "io_combinator.m"
                  case (MR_Integer) 2:
#line 1394 "io_combinator.m"
                    *io_combinator__Res_28 = io_combinator__Res3_34;
#line 1389 "io_combinator.m"
                    break;
#line 1389 "io_combinator.m"
                }
#line 1302 "io_combinator.m"
              }
#line 1396 "io_combinator.m"
              break;
#line 1396 "io_combinator.m"
            case (MR_Integer) 2:
#line 1401 "io_combinator.m"
              *io_combinator__Res_28 = io_combinator__Res2_32;
#line 1396 "io_combinator.m"
              break;
#line 1396 "io_combinator.m"
          }
#line 1299 "io_combinator.m"
        }
#line 1403 "io_combinator.m"
        break;
#line 1403 "io_combinator.m"
      case (MR_Integer) 2:
#line 1408 "io_combinator.m"
        *io_combinator__Res_28 = io_combinator__Res1_30;
#line 1403 "io_combinator.m"
        break;
#line 1403 "io_combinator.m"
    }
#line 1296 "io_combinator.m"
  }
#line 232 "io_combinator.m"
}

#line 204 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_10_14_p_0(
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_70,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_71,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_72,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_73,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_74,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_75,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_76,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_77,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_78,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T10_79,
#line 204 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_80,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P1_15,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P2_16,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P3_17,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P4_18,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P5_19,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P6_20,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P7_21,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P8_22,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P9_23,
#line 204 "io_combinator.m"
  MR_Word io_combinator__P10_24,
#line 204 "io_combinator.m"
  MR_Word io_combinator__Combine_25,
#line 204 "io_combinator.m"
  MR_Word * io_combinator__Res_26)
#line 204 "io_combinator.m"
{
#line 1191 "io_combinator.m"
  {
#line 1191 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1191 "io_combinator.m"
    MR_Word io_combinator__Res1_28;
#line 1192 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_15, (MR_Integer) 1)));
#line 1192 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_28;
#line 1192 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_51_51;

#line 1192 "io_combinator.m"
    {
#line 1192 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_15), &io_combinator__conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_51_51);
    }
#line 1192 "io_combinator.m"
    io_combinator__Res1_28 = ((MR_Word) io_combinator__conv2_Res1_28);
#line 1287 "io_combinator.m"
#line 1287 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_28)) {
#line 1287 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1287 "io_combinator.m"
      case (MR_Integer) 0:
#line 1289 "io_combinator.m"
        *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1287 "io_combinator.m"
        break;
#line 1287 "io_combinator.m"
      case (MR_Integer) 1:
#line 1194 "io_combinator.m"
        {
#line 1194 "io_combinator.m"
          MR_Box io_combinator__T1_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_28, (MR_Integer) 0));
#line 1194 "io_combinator.m"
          MR_Word io_combinator__Res2_30;
#line 1195 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_16, (MR_Integer) 1)));
#line 1195 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_30;
#line 1195 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_52_52;

#line 1195 "io_combinator.m"
          {
#line 1195 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_16), &io_combinator__conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_52_52);
          }
#line 1195 "io_combinator.m"
          io_combinator__Res2_30 = ((MR_Word) io_combinator__conv5_Res2_30);
#line 1280 "io_combinator.m"
#line 1280 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_30)) {
#line 1280 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1280 "io_combinator.m"
            case (MR_Integer) 0:
#line 1282 "io_combinator.m"
              *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1280 "io_combinator.m"
              break;
#line 1280 "io_combinator.m"
            case (MR_Integer) 1:
#line 1197 "io_combinator.m"
              {
#line 1197 "io_combinator.m"
                MR_Box io_combinator__T2_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_30, (MR_Integer) 0));
#line 1197 "io_combinator.m"
                MR_Word io_combinator__Res3_32;
#line 1198 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_17, (MR_Integer) 1)));
#line 1198 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_32;
#line 1198 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_53_53;

#line 1198 "io_combinator.m"
                {
#line 1198 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_17), &io_combinator__conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_53_53);
                }
#line 1198 "io_combinator.m"
                io_combinator__Res3_32 = ((MR_Word) io_combinator__conv8_Res3_32);
#line 1273 "io_combinator.m"
#line 1273 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_32)) {
#line 1273 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1273 "io_combinator.m"
                  case (MR_Integer) 0:
#line 1275 "io_combinator.m"
                    *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1273 "io_combinator.m"
                    break;
#line 1273 "io_combinator.m"
                  case (MR_Integer) 1:
#line 1200 "io_combinator.m"
                    {
#line 1200 "io_combinator.m"
                      MR_Box io_combinator__T3_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_32, (MR_Integer) 0));
#line 1200 "io_combinator.m"
                      MR_Word io_combinator__Res4_34;
#line 1201 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_18, (MR_Integer) 1)));
#line 1201 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_34;
#line 1201 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_54_54;

#line 1201 "io_combinator.m"
                      {
#line 1201 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_18), &io_combinator__conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_54_54);
                      }
#line 1201 "io_combinator.m"
                      io_combinator__Res4_34 = ((MR_Word) io_combinator__conv11_Res4_34);
#line 1266 "io_combinator.m"
#line 1266 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_34)) {
#line 1266 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1266 "io_combinator.m"
                        case (MR_Integer) 0:
#line 1268 "io_combinator.m"
                          *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1266 "io_combinator.m"
                          break;
#line 1266 "io_combinator.m"
                        case (MR_Integer) 1:
#line 1203 "io_combinator.m"
                          {
#line 1203 "io_combinator.m"
                            MR_Box io_combinator__T4_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_34, (MR_Integer) 0));
#line 1203 "io_combinator.m"
                            MR_Word io_combinator__Res5_36;
#line 1204 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_19, (MR_Integer) 1)));
#line 1204 "io_combinator.m"
                            MR_Box io_combinator__conv14_Res5_36;
#line 1204 "io_combinator.m"
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_55_55;

#line 1204 "io_combinator.m"
                            {
#line 1204 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__P5_19), &io_combinator__conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_55_55);
                            }
#line 1204 "io_combinator.m"
                            io_combinator__Res5_36 = ((MR_Word) io_combinator__conv14_Res5_36);
#line 1259 "io_combinator.m"
#line 1259 "io_combinator.m"
                            switch (MR_tag((MR_Word) io_combinator__Res5_36)) {
#line 1259 "io_combinator.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1259 "io_combinator.m"
                              case (MR_Integer) 0:
#line 1261 "io_combinator.m"
                                *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1259 "io_combinator.m"
                                break;
#line 1259 "io_combinator.m"
                              case (MR_Integer) 1:
#line 1206 "io_combinator.m"
                                {
#line 1206 "io_combinator.m"
                                  MR_Box io_combinator__T5_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_36, (MR_Integer) 0));
#line 1206 "io_combinator.m"
                                  MR_Word io_combinator__Res6_38;
#line 1207 "io_combinator.m"
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_20, (MR_Integer) 1)));
#line 1207 "io_combinator.m"
                                  MR_Box io_combinator__conv17_Res6_38;
#line 1207 "io_combinator.m"
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_56_56;

#line 1207 "io_combinator.m"
                                  {
#line 1207 "io_combinator.m"
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_20), &io_combinator__conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_56_56);
                                  }
#line 1207 "io_combinator.m"
                                  io_combinator__Res6_38 = ((MR_Word) io_combinator__conv17_Res6_38);
#line 1252 "io_combinator.m"
#line 1252 "io_combinator.m"
                                  switch (MR_tag((MR_Word) io_combinator__Res6_38)) {
#line 1252 "io_combinator.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 1252 "io_combinator.m"
                                    case (MR_Integer) 0:
#line 1254 "io_combinator.m"
                                      *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1252 "io_combinator.m"
                                      break;
#line 1252 "io_combinator.m"
                                    case (MR_Integer) 1:
#line 1209 "io_combinator.m"
                                      {
#line 1209 "io_combinator.m"
                                        MR_Box io_combinator__T6_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_38, (MR_Integer) 0));
#line 1209 "io_combinator.m"
                                        MR_Word io_combinator__Res7_40;
#line 1210 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_21, (MR_Integer) 1)));
#line 1210 "io_combinator.m"
                                        MR_Box io_combinator__conv20_Res7_40;
#line 1210 "io_combinator.m"
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_57_57;

#line 1210 "io_combinator.m"
                                        {
#line 1210 "io_combinator.m"
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_21), &io_combinator__conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_57_57);
                                        }
#line 1210 "io_combinator.m"
                                        io_combinator__Res7_40 = ((MR_Word) io_combinator__conv20_Res7_40);
#line 1245 "io_combinator.m"
#line 1245 "io_combinator.m"
                                        switch (MR_tag((MR_Word) io_combinator__Res7_40)) {
#line 1245 "io_combinator.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "io_combinator.m"
                                          case (MR_Integer) 0:
#line 1247 "io_combinator.m"
                                            *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1245 "io_combinator.m"
                                            break;
#line 1245 "io_combinator.m"
                                          case (MR_Integer) 1:
#line 1212 "io_combinator.m"
                                            {
#line 1212 "io_combinator.m"
                                              MR_Box io_combinator__T7_41 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_40, (MR_Integer) 0));
#line 1212 "io_combinator.m"
                                              MR_Word io_combinator__Res8_42;
#line 1213 "io_combinator.m"
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_22, (MR_Integer) 1)));
#line 1213 "io_combinator.m"
                                              MR_Box io_combinator__conv23_Res8_42;
#line 1213 "io_combinator.m"
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_58_58;

#line 1213 "io_combinator.m"
                                              {
#line 1213 "io_combinator.m"
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_22), &io_combinator__conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_58_58);
                                              }
#line 1213 "io_combinator.m"
                                              io_combinator__Res8_42 = ((MR_Word) io_combinator__conv23_Res8_42);
#line 1238 "io_combinator.m"
#line 1238 "io_combinator.m"
                                              switch (MR_tag((MR_Word) io_combinator__Res8_42)) {
#line 1238 "io_combinator.m"
                                                default: /*NOTREACHED*/ MR_assert(0);
#line 1238 "io_combinator.m"
                                                case (MR_Integer) 0:
#line 1240 "io_combinator.m"
                                                  *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1238 "io_combinator.m"
                                                  break;
#line 1238 "io_combinator.m"
                                                case (MR_Integer) 1:
#line 1215 "io_combinator.m"
                                                  {
#line 1215 "io_combinator.m"
                                                    MR_Box io_combinator__T8_43 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_42, (MR_Integer) 0));
#line 1215 "io_combinator.m"
                                                    MR_Word io_combinator__Res9_44;
#line 1216 "io_combinator.m"
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_23, (MR_Integer) 1)));
#line 1216 "io_combinator.m"
                                                    MR_Box io_combinator__conv26_Res9_44;
#line 1216 "io_combinator.m"
                                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_59_59;

#line 1216 "io_combinator.m"
                                                    {
#line 1216 "io_combinator.m"
                                                      io_combinator__func_24(((MR_Box) io_combinator__P9_23), &io_combinator__conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_59_59);
                                                    }
#line 1216 "io_combinator.m"
                                                    io_combinator__Res9_44 = ((MR_Word) io_combinator__conv26_Res9_44);
#line 1231 "io_combinator.m"
#line 1231 "io_combinator.m"
                                                    switch (MR_tag((MR_Word) io_combinator__Res9_44)) {
#line 1231 "io_combinator.m"
                                                      default: /*NOTREACHED*/ MR_assert(0);
#line 1231 "io_combinator.m"
                                                      case (MR_Integer) 0:
#line 1233 "io_combinator.m"
                                                        *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1231 "io_combinator.m"
                                                        break;
#line 1231 "io_combinator.m"
                                                      case (MR_Integer) 1:
#line 1218 "io_combinator.m"
                                                        {
#line 1218 "io_combinator.m"
                                                          MR_Box io_combinator__T9_45 = (MR_hl_field(MR_mktag(1), io_combinator__Res9_44, (MR_Integer) 0));
#line 1218 "io_combinator.m"
                                                          MR_Word io_combinator__Res10_46;
#line 1219 "io_combinator.m"
                                                          void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_24, (MR_Integer) 1)));
#line 1219 "io_combinator.m"
                                                          MR_Box io_combinator__conv29_Res10_46;
#line 1219 "io_combinator.m"
                                                          MR_Box io_combinator__conv28_STATE_VARIABLE_IO_50;

#line 1219 "io_combinator.m"
                                                          {
#line 1219 "io_combinator.m"
                                                            io_combinator__func_27(((MR_Box) io_combinator__P10_24), &io_combinator__conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_50);
                                                          }
#line 1219 "io_combinator.m"
                                                          io_combinator__Res10_46 = ((MR_Word) io_combinator__conv29_Res10_46);
#line 1224 "io_combinator.m"
#line 1224 "io_combinator.m"
                                                          switch (MR_tag((MR_Word) io_combinator__Res10_46)) {
#line 1224 "io_combinator.m"
                                                            default: /*NOTREACHED*/ MR_assert(0);
#line 1224 "io_combinator.m"
                                                            case (MR_Integer) 0:
#line 1226 "io_combinator.m"
                                                              *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1224 "io_combinator.m"
                                                              break;
#line 1224 "io_combinator.m"
                                                            case (MR_Integer) 1:
#line 1221 "io_combinator.m"
                                                              {
#line 1221 "io_combinator.m"
                                                                MR_Box io_combinator__T10_47 = (MR_hl_field(MR_mktag(1), io_combinator__Res10_46, (MR_Integer) 0));
#line 1222 "io_combinator.m"
                                                                void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_25, (MR_Integer) 1)));
#line 1222 "io_combinator.m"
                                                                MR_Box io_combinator__conv31_Res_26;

#line 1222 "io_combinator.m"
                                                                {
#line 1222 "io_combinator.m"
                                                                  io_combinator__func_30(((MR_Box) io_combinator__Combine_25), io_combinator__T1_29, io_combinator__T2_31, io_combinator__T3_33, io_combinator__T4_35, io_combinator__T5_37, io_combinator__T6_39, io_combinator__T7_41, io_combinator__T8_43, io_combinator__T9_45, io_combinator__T10_47, &io_combinator__conv31_Res_26);
                                                                }
#line 1222 "io_combinator.m"
                                                                *io_combinator__Res_26 = ((MR_Word) io_combinator__conv31_Res_26);
#line 1221 "io_combinator.m"
                                                              }
#line 1224 "io_combinator.m"
                                                              break;
#line 1224 "io_combinator.m"
                                                            case (MR_Integer) 2:
#line 1229 "io_combinator.m"
                                                              *io_combinator__Res_26 = io_combinator__Res10_46;
#line 1224 "io_combinator.m"
                                                              break;
#line 1224 "io_combinator.m"
                                                          }
#line 1218 "io_combinator.m"
                                                        }
#line 1231 "io_combinator.m"
                                                        break;
#line 1231 "io_combinator.m"
                                                      case (MR_Integer) 2:
#line 1236 "io_combinator.m"
                                                        *io_combinator__Res_26 = io_combinator__Res9_44;
#line 1231 "io_combinator.m"
                                                        break;
#line 1231 "io_combinator.m"
                                                    }
#line 1215 "io_combinator.m"
                                                  }
#line 1238 "io_combinator.m"
                                                  break;
#line 1238 "io_combinator.m"
                                                case (MR_Integer) 2:
#line 1243 "io_combinator.m"
                                                  *io_combinator__Res_26 = io_combinator__Res8_42;
#line 1238 "io_combinator.m"
                                                  break;
#line 1238 "io_combinator.m"
                                              }
#line 1212 "io_combinator.m"
                                            }
#line 1245 "io_combinator.m"
                                            break;
#line 1245 "io_combinator.m"
                                          case (MR_Integer) 2:
#line 1250 "io_combinator.m"
                                            *io_combinator__Res_26 = io_combinator__Res7_40;
#line 1245 "io_combinator.m"
                                            break;
#line 1245 "io_combinator.m"
                                        }
#line 1209 "io_combinator.m"
                                      }
#line 1252 "io_combinator.m"
                                      break;
#line 1252 "io_combinator.m"
                                    case (MR_Integer) 2:
#line 1257 "io_combinator.m"
                                      *io_combinator__Res_26 = io_combinator__Res6_38;
#line 1252 "io_combinator.m"
                                      break;
#line 1252 "io_combinator.m"
                                  }
#line 1206 "io_combinator.m"
                                }
#line 1259 "io_combinator.m"
                                break;
#line 1259 "io_combinator.m"
                              case (MR_Integer) 2:
#line 1264 "io_combinator.m"
                                *io_combinator__Res_26 = io_combinator__Res5_36;
#line 1259 "io_combinator.m"
                                break;
#line 1259 "io_combinator.m"
                            }
#line 1203 "io_combinator.m"
                          }
#line 1266 "io_combinator.m"
                          break;
#line 1266 "io_combinator.m"
                        case (MR_Integer) 2:
#line 1271 "io_combinator.m"
                          *io_combinator__Res_26 = io_combinator__Res4_34;
#line 1266 "io_combinator.m"
                          break;
#line 1266 "io_combinator.m"
                      }
#line 1200 "io_combinator.m"
                    }
#line 1273 "io_combinator.m"
                    break;
#line 1273 "io_combinator.m"
                  case (MR_Integer) 2:
#line 1278 "io_combinator.m"
                    *io_combinator__Res_26 = io_combinator__Res3_32;
#line 1273 "io_combinator.m"
                    break;
#line 1273 "io_combinator.m"
                }
#line 1197 "io_combinator.m"
              }
#line 1280 "io_combinator.m"
              break;
#line 1280 "io_combinator.m"
            case (MR_Integer) 2:
#line 1285 "io_combinator.m"
              *io_combinator__Res_26 = io_combinator__Res2_30;
#line 1280 "io_combinator.m"
              break;
#line 1280 "io_combinator.m"
          }
#line 1194 "io_combinator.m"
        }
#line 1287 "io_combinator.m"
        break;
#line 1287 "io_combinator.m"
      case (MR_Integer) 2:
#line 1292 "io_combinator.m"
        *io_combinator__Res_26 = io_combinator__Res1_28;
#line 1287 "io_combinator.m"
        break;
#line 1287 "io_combinator.m"
    }
#line 1191 "io_combinator.m"
  }
#line 204 "io_combinator.m"
}

#line 178 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_9_13_p_0(
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_64,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_65,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_66,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_67,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_68,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_69,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_70,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_71,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T9_72,
#line 178 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_73,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P1_14,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P2_15,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P3_16,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P4_17,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P5_18,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P6_19,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P7_20,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P8_21,
#line 178 "io_combinator.m"
  MR_Word io_combinator__P9_22,
#line 178 "io_combinator.m"
  MR_Word io_combinator__Combine_23,
#line 178 "io_combinator.m"
  MR_Word * io_combinator__Res_24)
#line 178 "io_combinator.m"
{
#line 1096 "io_combinator.m"
  {
#line 1096 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1096 "io_combinator.m"
    MR_Word io_combinator__Res1_26;
#line 1097 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_14, (MR_Integer) 1)));
#line 1097 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_26;
#line 1097 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_47_47;

#line 1097 "io_combinator.m"
    {
#line 1097 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_14), &io_combinator__conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_47_47);
    }
#line 1097 "io_combinator.m"
    io_combinator__Res1_26 = ((MR_Word) io_combinator__conv2_Res1_26);
#line 1182 "io_combinator.m"
#line 1182 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_26)) {
#line 1182 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1182 "io_combinator.m"
      case (MR_Integer) 0:
#line 1184 "io_combinator.m"
        *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "io_combinator.m"
        break;
#line 1182 "io_combinator.m"
      case (MR_Integer) 1:
#line 1099 "io_combinator.m"
        {
#line 1099 "io_combinator.m"
          MR_Box io_combinator__T1_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_26, (MR_Integer) 0));
#line 1099 "io_combinator.m"
          MR_Word io_combinator__Res2_28;
#line 1100 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_15, (MR_Integer) 1)));
#line 1100 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_28;
#line 1100 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_48_48;

#line 1100 "io_combinator.m"
          {
#line 1100 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_15), &io_combinator__conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_48_48);
          }
#line 1100 "io_combinator.m"
          io_combinator__Res2_28 = ((MR_Word) io_combinator__conv5_Res2_28);
#line 1175 "io_combinator.m"
#line 1175 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_28)) {
#line 1175 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1175 "io_combinator.m"
            case (MR_Integer) 0:
#line 1177 "io_combinator.m"
              *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "io_combinator.m"
              break;
#line 1175 "io_combinator.m"
            case (MR_Integer) 1:
#line 1102 "io_combinator.m"
              {
#line 1102 "io_combinator.m"
                MR_Box io_combinator__T2_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_28, (MR_Integer) 0));
#line 1102 "io_combinator.m"
                MR_Word io_combinator__Res3_30;
#line 1103 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_16, (MR_Integer) 1)));
#line 1103 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_30;
#line 1103 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_49_49;

#line 1103 "io_combinator.m"
                {
#line 1103 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_16), &io_combinator__conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_49_49);
                }
#line 1103 "io_combinator.m"
                io_combinator__Res3_30 = ((MR_Word) io_combinator__conv8_Res3_30);
#line 1168 "io_combinator.m"
#line 1168 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_30)) {
#line 1168 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1168 "io_combinator.m"
                  case (MR_Integer) 0:
#line 1170 "io_combinator.m"
                    *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1168 "io_combinator.m"
                    break;
#line 1168 "io_combinator.m"
                  case (MR_Integer) 1:
#line 1105 "io_combinator.m"
                    {
#line 1105 "io_combinator.m"
                      MR_Box io_combinator__T3_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_30, (MR_Integer) 0));
#line 1105 "io_combinator.m"
                      MR_Word io_combinator__Res4_32;
#line 1106 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_17, (MR_Integer) 1)));
#line 1106 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_32;
#line 1106 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_50_50;

#line 1106 "io_combinator.m"
                      {
#line 1106 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_17), &io_combinator__conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_50_50);
                      }
#line 1106 "io_combinator.m"
                      io_combinator__Res4_32 = ((MR_Word) io_combinator__conv11_Res4_32);
#line 1161 "io_combinator.m"
#line 1161 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_32)) {
#line 1161 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1161 "io_combinator.m"
                        case (MR_Integer) 0:
#line 1163 "io_combinator.m"
                          *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1161 "io_combinator.m"
                          break;
#line 1161 "io_combinator.m"
                        case (MR_Integer) 1:
#line 1108 "io_combinator.m"
                          {
#line 1108 "io_combinator.m"
                            MR_Box io_combinator__T4_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_32, (MR_Integer) 0));
#line 1108 "io_combinator.m"
                            MR_Word io_combinator__Res5_34;
#line 1109 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_18, (MR_Integer) 1)));
#line 1109 "io_combinator.m"
                            MR_Box io_combinator__conv14_Res5_34;
#line 1109 "io_combinator.m"
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_51_51;

#line 1109 "io_combinator.m"
                            {
#line 1109 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__P5_18), &io_combinator__conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_51_51);
                            }
#line 1109 "io_combinator.m"
                            io_combinator__Res5_34 = ((MR_Word) io_combinator__conv14_Res5_34);
#line 1154 "io_combinator.m"
#line 1154 "io_combinator.m"
                            switch (MR_tag((MR_Word) io_combinator__Res5_34)) {
#line 1154 "io_combinator.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1154 "io_combinator.m"
                              case (MR_Integer) 0:
#line 1156 "io_combinator.m"
                                *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "io_combinator.m"
                                break;
#line 1154 "io_combinator.m"
                              case (MR_Integer) 1:
#line 1111 "io_combinator.m"
                                {
#line 1111 "io_combinator.m"
                                  MR_Box io_combinator__T5_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_34, (MR_Integer) 0));
#line 1111 "io_combinator.m"
                                  MR_Word io_combinator__Res6_36;
#line 1112 "io_combinator.m"
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_19, (MR_Integer) 1)));
#line 1112 "io_combinator.m"
                                  MR_Box io_combinator__conv17_Res6_36;
#line 1112 "io_combinator.m"
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_52_52;

#line 1112 "io_combinator.m"
                                  {
#line 1112 "io_combinator.m"
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_19), &io_combinator__conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_52_52);
                                  }
#line 1112 "io_combinator.m"
                                  io_combinator__Res6_36 = ((MR_Word) io_combinator__conv17_Res6_36);
#line 1147 "io_combinator.m"
#line 1147 "io_combinator.m"
                                  switch (MR_tag((MR_Word) io_combinator__Res6_36)) {
#line 1147 "io_combinator.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 1147 "io_combinator.m"
                                    case (MR_Integer) 0:
#line 1149 "io_combinator.m"
                                      *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1147 "io_combinator.m"
                                      break;
#line 1147 "io_combinator.m"
                                    case (MR_Integer) 1:
#line 1114 "io_combinator.m"
                                      {
#line 1114 "io_combinator.m"
                                        MR_Box io_combinator__T6_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_36, (MR_Integer) 0));
#line 1114 "io_combinator.m"
                                        MR_Word io_combinator__Res7_38;
#line 1115 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_20, (MR_Integer) 1)));
#line 1115 "io_combinator.m"
                                        MR_Box io_combinator__conv20_Res7_38;
#line 1115 "io_combinator.m"
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_53_53;

#line 1115 "io_combinator.m"
                                        {
#line 1115 "io_combinator.m"
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_20), &io_combinator__conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_53_53);
                                        }
#line 1115 "io_combinator.m"
                                        io_combinator__Res7_38 = ((MR_Word) io_combinator__conv20_Res7_38);
#line 1140 "io_combinator.m"
#line 1140 "io_combinator.m"
                                        switch (MR_tag((MR_Word) io_combinator__Res7_38)) {
#line 1140 "io_combinator.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 1140 "io_combinator.m"
                                          case (MR_Integer) 0:
#line 1142 "io_combinator.m"
                                            *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1140 "io_combinator.m"
                                            break;
#line 1140 "io_combinator.m"
                                          case (MR_Integer) 1:
#line 1117 "io_combinator.m"
                                            {
#line 1117 "io_combinator.m"
                                              MR_Box io_combinator__T7_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_38, (MR_Integer) 0));
#line 1117 "io_combinator.m"
                                              MR_Word io_combinator__Res8_40;
#line 1118 "io_combinator.m"
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_21, (MR_Integer) 1)));
#line 1118 "io_combinator.m"
                                              MR_Box io_combinator__conv23_Res8_40;
#line 1118 "io_combinator.m"
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_54_54;

#line 1118 "io_combinator.m"
                                              {
#line 1118 "io_combinator.m"
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_21), &io_combinator__conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_54_54);
                                              }
#line 1118 "io_combinator.m"
                                              io_combinator__Res8_40 = ((MR_Word) io_combinator__conv23_Res8_40);
#line 1133 "io_combinator.m"
#line 1133 "io_combinator.m"
                                              switch (MR_tag((MR_Word) io_combinator__Res8_40)) {
#line 1133 "io_combinator.m"
                                                default: /*NOTREACHED*/ MR_assert(0);
#line 1133 "io_combinator.m"
                                                case (MR_Integer) 0:
#line 1135 "io_combinator.m"
                                                  *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1133 "io_combinator.m"
                                                  break;
#line 1133 "io_combinator.m"
                                                case (MR_Integer) 1:
#line 1120 "io_combinator.m"
                                                  {
#line 1120 "io_combinator.m"
                                                    MR_Box io_combinator__T8_41 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_40, (MR_Integer) 0));
#line 1120 "io_combinator.m"
                                                    MR_Word io_combinator__Res9_42;
#line 1121 "io_combinator.m"
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_22, (MR_Integer) 1)));
#line 1121 "io_combinator.m"
                                                    MR_Box io_combinator__conv26_Res9_42;
#line 1121 "io_combinator.m"
                                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_46;

#line 1121 "io_combinator.m"
                                                    {
#line 1121 "io_combinator.m"
                                                      io_combinator__func_24(((MR_Box) io_combinator__P9_22), &io_combinator__conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_46);
                                                    }
#line 1121 "io_combinator.m"
                                                    io_combinator__Res9_42 = ((MR_Word) io_combinator__conv26_Res9_42);
#line 1126 "io_combinator.m"
#line 1126 "io_combinator.m"
                                                    switch (MR_tag((MR_Word) io_combinator__Res9_42)) {
#line 1126 "io_combinator.m"
                                                      default: /*NOTREACHED*/ MR_assert(0);
#line 1126 "io_combinator.m"
                                                      case (MR_Integer) 0:
#line 1128 "io_combinator.m"
                                                        *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1126 "io_combinator.m"
                                                        break;
#line 1126 "io_combinator.m"
                                                      case (MR_Integer) 1:
#line 1123 "io_combinator.m"
                                                        {
#line 1123 "io_combinator.m"
                                                          MR_Box io_combinator__T9_43 = (MR_hl_field(MR_mktag(1), io_combinator__Res9_42, (MR_Integer) 0));
#line 1124 "io_combinator.m"
                                                          void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_23, (MR_Integer) 1)));
#line 1124 "io_combinator.m"
                                                          MR_Box io_combinator__conv28_Res_24;

#line 1124 "io_combinator.m"
                                                          {
#line 1124 "io_combinator.m"
                                                            io_combinator__func_27(((MR_Box) io_combinator__Combine_23), io_combinator__T1_27, io_combinator__T2_29, io_combinator__T3_31, io_combinator__T4_33, io_combinator__T5_35, io_combinator__T6_37, io_combinator__T7_39, io_combinator__T8_41, io_combinator__T9_43, &io_combinator__conv28_Res_24);
                                                          }
#line 1124 "io_combinator.m"
                                                          *io_combinator__Res_24 = ((MR_Word) io_combinator__conv28_Res_24);
#line 1123 "io_combinator.m"
                                                        }
#line 1126 "io_combinator.m"
                                                        break;
#line 1126 "io_combinator.m"
                                                      case (MR_Integer) 2:
#line 1131 "io_combinator.m"
                                                        *io_combinator__Res_24 = io_combinator__Res9_42;
#line 1126 "io_combinator.m"
                                                        break;
#line 1126 "io_combinator.m"
                                                    }
#line 1120 "io_combinator.m"
                                                  }
#line 1133 "io_combinator.m"
                                                  break;
#line 1133 "io_combinator.m"
                                                case (MR_Integer) 2:
#line 1138 "io_combinator.m"
                                                  *io_combinator__Res_24 = io_combinator__Res8_40;
#line 1133 "io_combinator.m"
                                                  break;
#line 1133 "io_combinator.m"
                                              }
#line 1117 "io_combinator.m"
                                            }
#line 1140 "io_combinator.m"
                                            break;
#line 1140 "io_combinator.m"
                                          case (MR_Integer) 2:
#line 1145 "io_combinator.m"
                                            *io_combinator__Res_24 = io_combinator__Res7_38;
#line 1140 "io_combinator.m"
                                            break;
#line 1140 "io_combinator.m"
                                        }
#line 1114 "io_combinator.m"
                                      }
#line 1147 "io_combinator.m"
                                      break;
#line 1147 "io_combinator.m"
                                    case (MR_Integer) 2:
#line 1152 "io_combinator.m"
                                      *io_combinator__Res_24 = io_combinator__Res6_36;
#line 1147 "io_combinator.m"
                                      break;
#line 1147 "io_combinator.m"
                                  }
#line 1111 "io_combinator.m"
                                }
#line 1154 "io_combinator.m"
                                break;
#line 1154 "io_combinator.m"
                              case (MR_Integer) 2:
#line 1159 "io_combinator.m"
                                *io_combinator__Res_24 = io_combinator__Res5_34;
#line 1154 "io_combinator.m"
                                break;
#line 1154 "io_combinator.m"
                            }
#line 1108 "io_combinator.m"
                          }
#line 1161 "io_combinator.m"
                          break;
#line 1161 "io_combinator.m"
                        case (MR_Integer) 2:
#line 1166 "io_combinator.m"
                          *io_combinator__Res_24 = io_combinator__Res4_32;
#line 1161 "io_combinator.m"
                          break;
#line 1161 "io_combinator.m"
                      }
#line 1105 "io_combinator.m"
                    }
#line 1168 "io_combinator.m"
                    break;
#line 1168 "io_combinator.m"
                  case (MR_Integer) 2:
#line 1173 "io_combinator.m"
                    *io_combinator__Res_24 = io_combinator__Res3_30;
#line 1168 "io_combinator.m"
                    break;
#line 1168 "io_combinator.m"
                }
#line 1102 "io_combinator.m"
              }
#line 1175 "io_combinator.m"
              break;
#line 1175 "io_combinator.m"
            case (MR_Integer) 2:
#line 1180 "io_combinator.m"
              *io_combinator__Res_24 = io_combinator__Res2_28;
#line 1175 "io_combinator.m"
              break;
#line 1175 "io_combinator.m"
          }
#line 1099 "io_combinator.m"
        }
#line 1182 "io_combinator.m"
        break;
#line 1182 "io_combinator.m"
      case (MR_Integer) 2:
#line 1187 "io_combinator.m"
        *io_combinator__Res_24 = io_combinator__Res1_26;
#line 1182 "io_combinator.m"
        break;
#line 1182 "io_combinator.m"
    }
#line 1096 "io_combinator.m"
  }
#line 178 "io_combinator.m"
}

#line 154 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_8_12_p_0(
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_58,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_59,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_60,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_61,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_62,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_63,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_64,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T8_65,
#line 154 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_66,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P1_13,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P2_14,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P3_15,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P4_16,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P5_17,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P6_18,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P7_19,
#line 154 "io_combinator.m"
  MR_Word io_combinator__P8_20,
#line 154 "io_combinator.m"
  MR_Word io_combinator__Combine_21,
#line 154 "io_combinator.m"
  MR_Word * io_combinator__Res_22)
#line 154 "io_combinator.m"
{
#line 1011 "io_combinator.m"
  {
#line 1011 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 1011 "io_combinator.m"
    MR_Word io_combinator__Res1_24;
#line 1012 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_13, (MR_Integer) 1)));
#line 1012 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_24;
#line 1012 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_43_43;

#line 1012 "io_combinator.m"
    {
#line 1012 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_13), &io_combinator__conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 1012 "io_combinator.m"
    io_combinator__Res1_24 = ((MR_Word) io_combinator__conv2_Res1_24);
#line 1087 "io_combinator.m"
#line 1087 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_24)) {
#line 1087 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1087 "io_combinator.m"
      case (MR_Integer) 0:
#line 1089 "io_combinator.m"
        *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1087 "io_combinator.m"
        break;
#line 1087 "io_combinator.m"
      case (MR_Integer) 1:
#line 1014 "io_combinator.m"
        {
#line 1014 "io_combinator.m"
          MR_Box io_combinator__T1_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_24, (MR_Integer) 0));
#line 1014 "io_combinator.m"
          MR_Word io_combinator__Res2_26;
#line 1015 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_14, (MR_Integer) 1)));
#line 1015 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_26;
#line 1015 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_44_44;

#line 1015 "io_combinator.m"
          {
#line 1015 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_14), &io_combinator__conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_44_44);
          }
#line 1015 "io_combinator.m"
          io_combinator__Res2_26 = ((MR_Word) io_combinator__conv5_Res2_26);
#line 1080 "io_combinator.m"
#line 1080 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_26)) {
#line 1080 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "io_combinator.m"
            case (MR_Integer) 0:
#line 1082 "io_combinator.m"
              *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1080 "io_combinator.m"
              break;
#line 1080 "io_combinator.m"
            case (MR_Integer) 1:
#line 1017 "io_combinator.m"
              {
#line 1017 "io_combinator.m"
                MR_Box io_combinator__T2_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_26, (MR_Integer) 0));
#line 1017 "io_combinator.m"
                MR_Word io_combinator__Res3_28;
#line 1018 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_15, (MR_Integer) 1)));
#line 1018 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_28;
#line 1018 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_45_45;

#line 1018 "io_combinator.m"
                {
#line 1018 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_15), &io_combinator__conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_45_45);
                }
#line 1018 "io_combinator.m"
                io_combinator__Res3_28 = ((MR_Word) io_combinator__conv8_Res3_28);
#line 1073 "io_combinator.m"
#line 1073 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_28)) {
#line 1073 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "io_combinator.m"
                  case (MR_Integer) 0:
#line 1075 "io_combinator.m"
                    *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1073 "io_combinator.m"
                    break;
#line 1073 "io_combinator.m"
                  case (MR_Integer) 1:
#line 1020 "io_combinator.m"
                    {
#line 1020 "io_combinator.m"
                      MR_Box io_combinator__T3_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_28, (MR_Integer) 0));
#line 1020 "io_combinator.m"
                      MR_Word io_combinator__Res4_30;
#line 1021 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_16, (MR_Integer) 1)));
#line 1021 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_30;
#line 1021 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_46_46;

#line 1021 "io_combinator.m"
                      {
#line 1021 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_16), &io_combinator__conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_46_46);
                      }
#line 1021 "io_combinator.m"
                      io_combinator__Res4_30 = ((MR_Word) io_combinator__conv11_Res4_30);
#line 1066 "io_combinator.m"
#line 1066 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_30)) {
#line 1066 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1066 "io_combinator.m"
                        case (MR_Integer) 0:
#line 1068 "io_combinator.m"
                          *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1066 "io_combinator.m"
                          break;
#line 1066 "io_combinator.m"
                        case (MR_Integer) 1:
#line 1023 "io_combinator.m"
                          {
#line 1023 "io_combinator.m"
                            MR_Box io_combinator__T4_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_30, (MR_Integer) 0));
#line 1023 "io_combinator.m"
                            MR_Word io_combinator__Res5_32;
#line 1024 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_17, (MR_Integer) 1)));
#line 1024 "io_combinator.m"
                            MR_Box io_combinator__conv14_Res5_32;
#line 1024 "io_combinator.m"
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_47_47;

#line 1024 "io_combinator.m"
                            {
#line 1024 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__P5_17), &io_combinator__conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_47_47);
                            }
#line 1024 "io_combinator.m"
                            io_combinator__Res5_32 = ((MR_Word) io_combinator__conv14_Res5_32);
#line 1059 "io_combinator.m"
#line 1059 "io_combinator.m"
                            switch (MR_tag((MR_Word) io_combinator__Res5_32)) {
#line 1059 "io_combinator.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1059 "io_combinator.m"
                              case (MR_Integer) 0:
#line 1061 "io_combinator.m"
                                *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1059 "io_combinator.m"
                                break;
#line 1059 "io_combinator.m"
                              case (MR_Integer) 1:
#line 1026 "io_combinator.m"
                                {
#line 1026 "io_combinator.m"
                                  MR_Box io_combinator__T5_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_32, (MR_Integer) 0));
#line 1026 "io_combinator.m"
                                  MR_Word io_combinator__Res6_34;
#line 1027 "io_combinator.m"
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_18, (MR_Integer) 1)));
#line 1027 "io_combinator.m"
                                  MR_Box io_combinator__conv17_Res6_34;
#line 1027 "io_combinator.m"
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_48_48;

#line 1027 "io_combinator.m"
                                  {
#line 1027 "io_combinator.m"
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_18), &io_combinator__conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_48_48);
                                  }
#line 1027 "io_combinator.m"
                                  io_combinator__Res6_34 = ((MR_Word) io_combinator__conv17_Res6_34);
#line 1052 "io_combinator.m"
#line 1052 "io_combinator.m"
                                  switch (MR_tag((MR_Word) io_combinator__Res6_34)) {
#line 1052 "io_combinator.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 1052 "io_combinator.m"
                                    case (MR_Integer) 0:
#line 1054 "io_combinator.m"
                                      *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1052 "io_combinator.m"
                                      break;
#line 1052 "io_combinator.m"
                                    case (MR_Integer) 1:
#line 1029 "io_combinator.m"
                                      {
#line 1029 "io_combinator.m"
                                        MR_Box io_combinator__T6_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_34, (MR_Integer) 0));
#line 1029 "io_combinator.m"
                                        MR_Word io_combinator__Res7_36;
#line 1030 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_19, (MR_Integer) 1)));
#line 1030 "io_combinator.m"
                                        MR_Box io_combinator__conv20_Res7_36;
#line 1030 "io_combinator.m"
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_49_49;

#line 1030 "io_combinator.m"
                                        {
#line 1030 "io_combinator.m"
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_19), &io_combinator__conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_49_49);
                                        }
#line 1030 "io_combinator.m"
                                        io_combinator__Res7_36 = ((MR_Word) io_combinator__conv20_Res7_36);
#line 1045 "io_combinator.m"
#line 1045 "io_combinator.m"
                                        switch (MR_tag((MR_Word) io_combinator__Res7_36)) {
#line 1045 "io_combinator.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 1045 "io_combinator.m"
                                          case (MR_Integer) 0:
#line 1047 "io_combinator.m"
                                            *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1045 "io_combinator.m"
                                            break;
#line 1045 "io_combinator.m"
                                          case (MR_Integer) 1:
#line 1032 "io_combinator.m"
                                            {
#line 1032 "io_combinator.m"
                                              MR_Box io_combinator__T7_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_36, (MR_Integer) 0));
#line 1032 "io_combinator.m"
                                              MR_Word io_combinator__Res8_38;
#line 1033 "io_combinator.m"
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_20, (MR_Integer) 1)));
#line 1033 "io_combinator.m"
                                              MR_Box io_combinator__conv23_Res8_38;
#line 1033 "io_combinator.m"
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_42;

#line 1033 "io_combinator.m"
                                              {
#line 1033 "io_combinator.m"
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_20), &io_combinator__conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_42);
                                              }
#line 1033 "io_combinator.m"
                                              io_combinator__Res8_38 = ((MR_Word) io_combinator__conv23_Res8_38);
#line 1038 "io_combinator.m"
#line 1038 "io_combinator.m"
                                              switch (MR_tag((MR_Word) io_combinator__Res8_38)) {
#line 1038 "io_combinator.m"
                                                default: /*NOTREACHED*/ MR_assert(0);
#line 1038 "io_combinator.m"
                                                case (MR_Integer) 0:
#line 1040 "io_combinator.m"
                                                  *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1038 "io_combinator.m"
                                                  break;
#line 1038 "io_combinator.m"
                                                case (MR_Integer) 1:
#line 1035 "io_combinator.m"
                                                  {
#line 1035 "io_combinator.m"
                                                    MR_Box io_combinator__T8_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_38, (MR_Integer) 0));
#line 1036 "io_combinator.m"
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_21, (MR_Integer) 1)));
#line 1036 "io_combinator.m"
                                                    MR_Box io_combinator__conv25_Res_22;

#line 1036 "io_combinator.m"
                                                    {
#line 1036 "io_combinator.m"
                                                      io_combinator__func_24(((MR_Box) io_combinator__Combine_21), io_combinator__T1_25, io_combinator__T2_27, io_combinator__T3_29, io_combinator__T4_31, io_combinator__T5_33, io_combinator__T6_35, io_combinator__T7_37, io_combinator__T8_39, &io_combinator__conv25_Res_22);
                                                    }
#line 1036 "io_combinator.m"
                                                    *io_combinator__Res_22 = ((MR_Word) io_combinator__conv25_Res_22);
#line 1035 "io_combinator.m"
                                                  }
#line 1038 "io_combinator.m"
                                                  break;
#line 1038 "io_combinator.m"
                                                case (MR_Integer) 2:
#line 1043 "io_combinator.m"
                                                  *io_combinator__Res_22 = io_combinator__Res8_38;
#line 1038 "io_combinator.m"
                                                  break;
#line 1038 "io_combinator.m"
                                              }
#line 1032 "io_combinator.m"
                                            }
#line 1045 "io_combinator.m"
                                            break;
#line 1045 "io_combinator.m"
                                          case (MR_Integer) 2:
#line 1050 "io_combinator.m"
                                            *io_combinator__Res_22 = io_combinator__Res7_36;
#line 1045 "io_combinator.m"
                                            break;
#line 1045 "io_combinator.m"
                                        }
#line 1029 "io_combinator.m"
                                      }
#line 1052 "io_combinator.m"
                                      break;
#line 1052 "io_combinator.m"
                                    case (MR_Integer) 2:
#line 1057 "io_combinator.m"
                                      *io_combinator__Res_22 = io_combinator__Res6_34;
#line 1052 "io_combinator.m"
                                      break;
#line 1052 "io_combinator.m"
                                  }
#line 1026 "io_combinator.m"
                                }
#line 1059 "io_combinator.m"
                                break;
#line 1059 "io_combinator.m"
                              case (MR_Integer) 2:
#line 1064 "io_combinator.m"
                                *io_combinator__Res_22 = io_combinator__Res5_32;
#line 1059 "io_combinator.m"
                                break;
#line 1059 "io_combinator.m"
                            }
#line 1023 "io_combinator.m"
                          }
#line 1066 "io_combinator.m"
                          break;
#line 1066 "io_combinator.m"
                        case (MR_Integer) 2:
#line 1071 "io_combinator.m"
                          *io_combinator__Res_22 = io_combinator__Res4_30;
#line 1066 "io_combinator.m"
                          break;
#line 1066 "io_combinator.m"
                      }
#line 1020 "io_combinator.m"
                    }
#line 1073 "io_combinator.m"
                    break;
#line 1073 "io_combinator.m"
                  case (MR_Integer) 2:
#line 1078 "io_combinator.m"
                    *io_combinator__Res_22 = io_combinator__Res3_28;
#line 1073 "io_combinator.m"
                    break;
#line 1073 "io_combinator.m"
                }
#line 1017 "io_combinator.m"
              }
#line 1080 "io_combinator.m"
              break;
#line 1080 "io_combinator.m"
            case (MR_Integer) 2:
#line 1085 "io_combinator.m"
              *io_combinator__Res_22 = io_combinator__Res2_26;
#line 1080 "io_combinator.m"
              break;
#line 1080 "io_combinator.m"
          }
#line 1014 "io_combinator.m"
        }
#line 1087 "io_combinator.m"
        break;
#line 1087 "io_combinator.m"
      case (MR_Integer) 2:
#line 1092 "io_combinator.m"
        *io_combinator__Res_22 = io_combinator__Res1_24;
#line 1087 "io_combinator.m"
        break;
#line 1087 "io_combinator.m"
    }
#line 1011 "io_combinator.m"
  }
#line 154 "io_combinator.m"
}

#line 132 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_7_11_p_0(
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_52,
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_53,
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_54,
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_55,
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_56,
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_57,
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T7_58,
#line 132 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_59,
#line 132 "io_combinator.m"
  MR_Word io_combinator__P1_12,
#line 132 "io_combinator.m"
  MR_Word io_combinator__P2_13,
#line 132 "io_combinator.m"
  MR_Word io_combinator__P3_14,
#line 132 "io_combinator.m"
  MR_Word io_combinator__P4_15,
#line 132 "io_combinator.m"
  MR_Word io_combinator__P5_16,
#line 132 "io_combinator.m"
  MR_Word io_combinator__P6_17,
#line 132 "io_combinator.m"
  MR_Word io_combinator__P7_18,
#line 132 "io_combinator.m"
  MR_Word io_combinator__Combine_19,
#line 132 "io_combinator.m"
  MR_Word * io_combinator__Res_20)
#line 132 "io_combinator.m"
{
#line 938 "io_combinator.m"
  {
#line 938 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 938 "io_combinator.m"
    MR_Word io_combinator__Res1_22;
#line 939 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_12, (MR_Integer) 1)));
#line 939 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_22;
#line 939 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_39_39;

#line 939 "io_combinator.m"
    {
#line 939 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_12), &io_combinator__conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_39_39);
    }
#line 939 "io_combinator.m"
    io_combinator__Res1_22 = ((MR_Word) io_combinator__conv2_Res1_22);
#line 1003 "io_combinator.m"
#line 1003 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_22)) {
#line 1003 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "io_combinator.m"
      case (MR_Integer) 0:
#line 1005 "io_combinator.m"
        *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1003 "io_combinator.m"
        break;
#line 1003 "io_combinator.m"
      case (MR_Integer) 1:
#line 941 "io_combinator.m"
        {
#line 941 "io_combinator.m"
          MR_Box io_combinator__T1_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_22, (MR_Integer) 0));
#line 941 "io_combinator.m"
          MR_Word io_combinator__Res2_24;
#line 942 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_13, (MR_Integer) 1)));
#line 942 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_24;
#line 942 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_40_40;

#line 942 "io_combinator.m"
          {
#line 942 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_13), &io_combinator__conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_40_40);
          }
#line 942 "io_combinator.m"
          io_combinator__Res2_24 = ((MR_Word) io_combinator__conv5_Res2_24);
#line 996 "io_combinator.m"
#line 996 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_24)) {
#line 996 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 996 "io_combinator.m"
            case (MR_Integer) 0:
#line 998 "io_combinator.m"
              *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "io_combinator.m"
              break;
#line 996 "io_combinator.m"
            case (MR_Integer) 1:
#line 944 "io_combinator.m"
              {
#line 944 "io_combinator.m"
                MR_Box io_combinator__T2_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_24, (MR_Integer) 0));
#line 944 "io_combinator.m"
                MR_Word io_combinator__Res3_26;
#line 945 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_14, (MR_Integer) 1)));
#line 945 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_26;
#line 945 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_41_41;

#line 945 "io_combinator.m"
                {
#line 945 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_14), &io_combinator__conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_41_41);
                }
#line 945 "io_combinator.m"
                io_combinator__Res3_26 = ((MR_Word) io_combinator__conv8_Res3_26);
#line 989 "io_combinator.m"
#line 989 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_26)) {
#line 989 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 989 "io_combinator.m"
                  case (MR_Integer) 0:
#line 991 "io_combinator.m"
                    *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 989 "io_combinator.m"
                    break;
#line 989 "io_combinator.m"
                  case (MR_Integer) 1:
#line 947 "io_combinator.m"
                    {
#line 947 "io_combinator.m"
                      MR_Box io_combinator__T3_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_26, (MR_Integer) 0));
#line 947 "io_combinator.m"
                      MR_Word io_combinator__Res4_28;
#line 948 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_15, (MR_Integer) 1)));
#line 948 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_28;
#line 948 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_42_42;

#line 948 "io_combinator.m"
                      {
#line 948 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_15), &io_combinator__conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_42_42);
                      }
#line 948 "io_combinator.m"
                      io_combinator__Res4_28 = ((MR_Word) io_combinator__conv11_Res4_28);
#line 982 "io_combinator.m"
#line 982 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_28)) {
#line 982 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 982 "io_combinator.m"
                        case (MR_Integer) 0:
#line 984 "io_combinator.m"
                          *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 982 "io_combinator.m"
                          break;
#line 982 "io_combinator.m"
                        case (MR_Integer) 1:
#line 950 "io_combinator.m"
                          {
#line 950 "io_combinator.m"
                            MR_Box io_combinator__T4_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_28, (MR_Integer) 0));
#line 950 "io_combinator.m"
                            MR_Word io_combinator__Res5_30;
#line 951 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_16, (MR_Integer) 1)));
#line 951 "io_combinator.m"
                            MR_Box io_combinator__conv14_Res5_30;
#line 951 "io_combinator.m"
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_43_43;

#line 951 "io_combinator.m"
                            {
#line 951 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__P5_16), &io_combinator__conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_43_43);
                            }
#line 951 "io_combinator.m"
                            io_combinator__Res5_30 = ((MR_Word) io_combinator__conv14_Res5_30);
#line 975 "io_combinator.m"
#line 975 "io_combinator.m"
                            switch (MR_tag((MR_Word) io_combinator__Res5_30)) {
#line 975 "io_combinator.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 975 "io_combinator.m"
                              case (MR_Integer) 0:
#line 977 "io_combinator.m"
                                *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 975 "io_combinator.m"
                                break;
#line 975 "io_combinator.m"
                              case (MR_Integer) 1:
#line 953 "io_combinator.m"
                                {
#line 953 "io_combinator.m"
                                  MR_Box io_combinator__T5_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_30, (MR_Integer) 0));
#line 953 "io_combinator.m"
                                  MR_Word io_combinator__Res6_32;
#line 954 "io_combinator.m"
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_17, (MR_Integer) 1)));
#line 954 "io_combinator.m"
                                  MR_Box io_combinator__conv17_Res6_32;
#line 954 "io_combinator.m"
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_44_44;

#line 954 "io_combinator.m"
                                  {
#line 954 "io_combinator.m"
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_17), &io_combinator__conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_44_44);
                                  }
#line 954 "io_combinator.m"
                                  io_combinator__Res6_32 = ((MR_Word) io_combinator__conv17_Res6_32);
#line 968 "io_combinator.m"
#line 968 "io_combinator.m"
                                  switch (MR_tag((MR_Word) io_combinator__Res6_32)) {
#line 968 "io_combinator.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 968 "io_combinator.m"
                                    case (MR_Integer) 0:
#line 970 "io_combinator.m"
                                      *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 968 "io_combinator.m"
                                      break;
#line 968 "io_combinator.m"
                                    case (MR_Integer) 1:
#line 956 "io_combinator.m"
                                      {
#line 956 "io_combinator.m"
                                        MR_Box io_combinator__T6_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_32, (MR_Integer) 0));
#line 956 "io_combinator.m"
                                        MR_Word io_combinator__Res7_34;
#line 957 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_18, (MR_Integer) 1)));
#line 957 "io_combinator.m"
                                        MR_Box io_combinator__conv20_Res7_34;
#line 957 "io_combinator.m"
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_38;

#line 957 "io_combinator.m"
                                        {
#line 957 "io_combinator.m"
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_18), &io_combinator__conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_38);
                                        }
#line 957 "io_combinator.m"
                                        io_combinator__Res7_34 = ((MR_Word) io_combinator__conv20_Res7_34);
#line 961 "io_combinator.m"
#line 961 "io_combinator.m"
                                        switch (MR_tag((MR_Word) io_combinator__Res7_34)) {
#line 961 "io_combinator.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 961 "io_combinator.m"
                                          case (MR_Integer) 0:
#line 963 "io_combinator.m"
                                            *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 961 "io_combinator.m"
                                            break;
#line 961 "io_combinator.m"
                                          case (MR_Integer) 1:
#line 959 "io_combinator.m"
                                            {
#line 959 "io_combinator.m"
                                              MR_Box io_combinator__T7_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_34, (MR_Integer) 0));
#line 960 "io_combinator.m"
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_19, (MR_Integer) 1)));
#line 960 "io_combinator.m"
                                              MR_Box io_combinator__conv22_Res_20;

#line 960 "io_combinator.m"
                                              {
#line 960 "io_combinator.m"
                                                io_combinator__func_21(((MR_Box) io_combinator__Combine_19), io_combinator__T1_23, io_combinator__T2_25, io_combinator__T3_27, io_combinator__T4_29, io_combinator__T5_31, io_combinator__T6_33, io_combinator__T7_35, &io_combinator__conv22_Res_20);
                                              }
#line 960 "io_combinator.m"
                                              *io_combinator__Res_20 = ((MR_Word) io_combinator__conv22_Res_20);
#line 959 "io_combinator.m"
                                            }
#line 961 "io_combinator.m"
                                            break;
#line 961 "io_combinator.m"
                                          case (MR_Integer) 2:
#line 966 "io_combinator.m"
                                            *io_combinator__Res_20 = io_combinator__Res7_34;
#line 961 "io_combinator.m"
                                            break;
#line 961 "io_combinator.m"
                                        }
#line 956 "io_combinator.m"
                                      }
#line 968 "io_combinator.m"
                                      break;
#line 968 "io_combinator.m"
                                    case (MR_Integer) 2:
#line 973 "io_combinator.m"
                                      *io_combinator__Res_20 = io_combinator__Res6_32;
#line 968 "io_combinator.m"
                                      break;
#line 968 "io_combinator.m"
                                  }
#line 953 "io_combinator.m"
                                }
#line 975 "io_combinator.m"
                                break;
#line 975 "io_combinator.m"
                              case (MR_Integer) 2:
#line 980 "io_combinator.m"
                                *io_combinator__Res_20 = io_combinator__Res5_30;
#line 975 "io_combinator.m"
                                break;
#line 975 "io_combinator.m"
                            }
#line 950 "io_combinator.m"
                          }
#line 982 "io_combinator.m"
                          break;
#line 982 "io_combinator.m"
                        case (MR_Integer) 2:
#line 987 "io_combinator.m"
                          *io_combinator__Res_20 = io_combinator__Res4_28;
#line 982 "io_combinator.m"
                          break;
#line 982 "io_combinator.m"
                      }
#line 947 "io_combinator.m"
                    }
#line 989 "io_combinator.m"
                    break;
#line 989 "io_combinator.m"
                  case (MR_Integer) 2:
#line 994 "io_combinator.m"
                    *io_combinator__Res_20 = io_combinator__Res3_26;
#line 989 "io_combinator.m"
                    break;
#line 989 "io_combinator.m"
                }
#line 944 "io_combinator.m"
              }
#line 996 "io_combinator.m"
              break;
#line 996 "io_combinator.m"
            case (MR_Integer) 2:
#line 1001 "io_combinator.m"
              *io_combinator__Res_20 = io_combinator__Res2_24;
#line 996 "io_combinator.m"
              break;
#line 996 "io_combinator.m"
          }
#line 941 "io_combinator.m"
        }
#line 1003 "io_combinator.m"
        break;
#line 1003 "io_combinator.m"
      case (MR_Integer) 2:
#line 1008 "io_combinator.m"
        *io_combinator__Res_20 = io_combinator__Res1_22;
#line 1003 "io_combinator.m"
        break;
#line 1003 "io_combinator.m"
    }
#line 938 "io_combinator.m"
  }
#line 132 "io_combinator.m"
}

#line 112 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_6_10_p_0(
#line 112 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_46,
#line 112 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_47,
#line 112 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_48,
#line 112 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_49,
#line 112 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_50,
#line 112 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T6_51,
#line 112 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_52,
#line 112 "io_combinator.m"
  MR_Word io_combinator__P1_11,
#line 112 "io_combinator.m"
  MR_Word io_combinator__P2_12,
#line 112 "io_combinator.m"
  MR_Word io_combinator__P3_13,
#line 112 "io_combinator.m"
  MR_Word io_combinator__P4_14,
#line 112 "io_combinator.m"
  MR_Word io_combinator__P5_15,
#line 112 "io_combinator.m"
  MR_Word io_combinator__P6_16,
#line 112 "io_combinator.m"
  MR_Word io_combinator__Combine_17,
#line 112 "io_combinator.m"
  MR_Word * io_combinator__Res_18)
#line 112 "io_combinator.m"
{
#line 875 "io_combinator.m"
  {
#line 875 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 875 "io_combinator.m"
    MR_Word io_combinator__Res1_20;
#line 876 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_11, (MR_Integer) 1)));
#line 876 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_20;
#line 876 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_35_35;

#line 876 "io_combinator.m"
    {
#line 876 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_11), &io_combinator__conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_35_35);
    }
#line 876 "io_combinator.m"
    io_combinator__Res1_20 = ((MR_Word) io_combinator__conv2_Res1_20);
#line 930 "io_combinator.m"
#line 930 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_20)) {
#line 930 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 930 "io_combinator.m"
      case (MR_Integer) 0:
#line 932 "io_combinator.m"
        *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 930 "io_combinator.m"
        break;
#line 930 "io_combinator.m"
      case (MR_Integer) 1:
#line 878 "io_combinator.m"
        {
#line 878 "io_combinator.m"
          MR_Box io_combinator__T1_21 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_20, (MR_Integer) 0));
#line 878 "io_combinator.m"
          MR_Word io_combinator__Res2_22;
#line 879 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_12, (MR_Integer) 1)));
#line 879 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_22;
#line 879 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_36_36;

#line 879 "io_combinator.m"
          {
#line 879 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_12), &io_combinator__conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_36_36);
          }
#line 879 "io_combinator.m"
          io_combinator__Res2_22 = ((MR_Word) io_combinator__conv5_Res2_22);
#line 923 "io_combinator.m"
#line 923 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_22)) {
#line 923 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 923 "io_combinator.m"
            case (MR_Integer) 0:
#line 925 "io_combinator.m"
              *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 923 "io_combinator.m"
              break;
#line 923 "io_combinator.m"
            case (MR_Integer) 1:
#line 881 "io_combinator.m"
              {
#line 881 "io_combinator.m"
                MR_Box io_combinator__T2_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_22, (MR_Integer) 0));
#line 881 "io_combinator.m"
                MR_Word io_combinator__Res3_24;
#line 882 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_13, (MR_Integer) 1)));
#line 882 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_24;
#line 882 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_37_37;

#line 882 "io_combinator.m"
                {
#line 882 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_13), &io_combinator__conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_37_37);
                }
#line 882 "io_combinator.m"
                io_combinator__Res3_24 = ((MR_Word) io_combinator__conv8_Res3_24);
#line 916 "io_combinator.m"
#line 916 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_24)) {
#line 916 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 916 "io_combinator.m"
                  case (MR_Integer) 0:
#line 918 "io_combinator.m"
                    *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 916 "io_combinator.m"
                    break;
#line 916 "io_combinator.m"
                  case (MR_Integer) 1:
#line 884 "io_combinator.m"
                    {
#line 884 "io_combinator.m"
                      MR_Box io_combinator__T3_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_24, (MR_Integer) 0));
#line 884 "io_combinator.m"
                      MR_Word io_combinator__Res4_26;
#line 885 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_14, (MR_Integer) 1)));
#line 885 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_26;
#line 885 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_38_38;

#line 885 "io_combinator.m"
                      {
#line 885 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_14), &io_combinator__conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_38_38);
                      }
#line 885 "io_combinator.m"
                      io_combinator__Res4_26 = ((MR_Word) io_combinator__conv11_Res4_26);
#line 909 "io_combinator.m"
#line 909 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_26)) {
#line 909 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 909 "io_combinator.m"
                        case (MR_Integer) 0:
#line 911 "io_combinator.m"
                          *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "io_combinator.m"
                          break;
#line 909 "io_combinator.m"
                        case (MR_Integer) 1:
#line 887 "io_combinator.m"
                          {
#line 887 "io_combinator.m"
                            MR_Box io_combinator__T4_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_26, (MR_Integer) 0));
#line 887 "io_combinator.m"
                            MR_Word io_combinator__Res5_28;
#line 888 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_15, (MR_Integer) 1)));
#line 888 "io_combinator.m"
                            MR_Box io_combinator__conv14_Res5_28;
#line 888 "io_combinator.m"
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_39_39;

#line 888 "io_combinator.m"
                            {
#line 888 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__P5_15), &io_combinator__conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_39_39);
                            }
#line 888 "io_combinator.m"
                            io_combinator__Res5_28 = ((MR_Word) io_combinator__conv14_Res5_28);
#line 902 "io_combinator.m"
#line 902 "io_combinator.m"
                            switch (MR_tag((MR_Word) io_combinator__Res5_28)) {
#line 902 "io_combinator.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 902 "io_combinator.m"
                              case (MR_Integer) 0:
#line 904 "io_combinator.m"
                                *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "io_combinator.m"
                                break;
#line 902 "io_combinator.m"
                              case (MR_Integer) 1:
#line 890 "io_combinator.m"
                                {
#line 890 "io_combinator.m"
                                  MR_Box io_combinator__T5_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_28, (MR_Integer) 0));
#line 890 "io_combinator.m"
                                  MR_Word io_combinator__Res6_30;
#line 891 "io_combinator.m"
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_16, (MR_Integer) 1)));
#line 891 "io_combinator.m"
                                  MR_Box io_combinator__conv17_Res6_30;
#line 891 "io_combinator.m"
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_34;

#line 891 "io_combinator.m"
                                  {
#line 891 "io_combinator.m"
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_16), &io_combinator__conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_34);
                                  }
#line 891 "io_combinator.m"
                                  io_combinator__Res6_30 = ((MR_Word) io_combinator__conv17_Res6_30);
#line 895 "io_combinator.m"
#line 895 "io_combinator.m"
                                  switch (MR_tag((MR_Word) io_combinator__Res6_30)) {
#line 895 "io_combinator.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 895 "io_combinator.m"
                                    case (MR_Integer) 0:
#line 897 "io_combinator.m"
                                      *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 895 "io_combinator.m"
                                      break;
#line 895 "io_combinator.m"
                                    case (MR_Integer) 1:
#line 893 "io_combinator.m"
                                      {
#line 893 "io_combinator.m"
                                        MR_Box io_combinator__T6_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_30, (MR_Integer) 0));
#line 894 "io_combinator.m"
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_17, (MR_Integer) 1)));
#line 894 "io_combinator.m"
                                        MR_Box io_combinator__conv19_Res_18;

#line 894 "io_combinator.m"
                                        {
#line 894 "io_combinator.m"
                                          io_combinator__func_18(((MR_Box) io_combinator__Combine_17), io_combinator__T1_21, io_combinator__T2_23, io_combinator__T3_25, io_combinator__T4_27, io_combinator__T5_29, io_combinator__T6_31, &io_combinator__conv19_Res_18);
                                        }
#line 894 "io_combinator.m"
                                        *io_combinator__Res_18 = ((MR_Word) io_combinator__conv19_Res_18);
#line 893 "io_combinator.m"
                                      }
#line 895 "io_combinator.m"
                                      break;
#line 895 "io_combinator.m"
                                    case (MR_Integer) 2:
#line 900 "io_combinator.m"
                                      *io_combinator__Res_18 = io_combinator__Res6_30;
#line 895 "io_combinator.m"
                                      break;
#line 895 "io_combinator.m"
                                  }
#line 890 "io_combinator.m"
                                }
#line 902 "io_combinator.m"
                                break;
#line 902 "io_combinator.m"
                              case (MR_Integer) 2:
#line 907 "io_combinator.m"
                                *io_combinator__Res_18 = io_combinator__Res5_28;
#line 902 "io_combinator.m"
                                break;
#line 902 "io_combinator.m"
                            }
#line 887 "io_combinator.m"
                          }
#line 909 "io_combinator.m"
                          break;
#line 909 "io_combinator.m"
                        case (MR_Integer) 2:
#line 914 "io_combinator.m"
                          *io_combinator__Res_18 = io_combinator__Res4_26;
#line 909 "io_combinator.m"
                          break;
#line 909 "io_combinator.m"
                      }
#line 884 "io_combinator.m"
                    }
#line 916 "io_combinator.m"
                    break;
#line 916 "io_combinator.m"
                  case (MR_Integer) 2:
#line 921 "io_combinator.m"
                    *io_combinator__Res_18 = io_combinator__Res3_24;
#line 916 "io_combinator.m"
                    break;
#line 916 "io_combinator.m"
                }
#line 881 "io_combinator.m"
              }
#line 923 "io_combinator.m"
              break;
#line 923 "io_combinator.m"
            case (MR_Integer) 2:
#line 928 "io_combinator.m"
              *io_combinator__Res_18 = io_combinator__Res2_22;
#line 923 "io_combinator.m"
              break;
#line 923 "io_combinator.m"
          }
#line 878 "io_combinator.m"
        }
#line 930 "io_combinator.m"
        break;
#line 930 "io_combinator.m"
      case (MR_Integer) 2:
#line 935 "io_combinator.m"
        *io_combinator__Res_18 = io_combinator__Res1_20;
#line 930 "io_combinator.m"
        break;
#line 930 "io_combinator.m"
    }
#line 875 "io_combinator.m"
  }
#line 112 "io_combinator.m"
}

#line 94 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_5_9_p_0(
#line 94 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_40,
#line 94 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_41,
#line 94 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_42,
#line 94 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_43,
#line 94 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T5_44,
#line 94 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_45,
#line 94 "io_combinator.m"
  MR_Word io_combinator__P1_10,
#line 94 "io_combinator.m"
  MR_Word io_combinator__P2_11,
#line 94 "io_combinator.m"
  MR_Word io_combinator__P3_12,
#line 94 "io_combinator.m"
  MR_Word io_combinator__P4_13,
#line 94 "io_combinator.m"
  MR_Word io_combinator__P5_14,
#line 94 "io_combinator.m"
  MR_Word io_combinator__Combine_15,
#line 94 "io_combinator.m"
  MR_Word * io_combinator__Res_16)
#line 94 "io_combinator.m"
{
#line 822 "io_combinator.m"
  {
#line 822 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 822 "io_combinator.m"
    MR_Word io_combinator__Res1_18;
#line 823 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_10, (MR_Integer) 1)));
#line 823 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_18;
#line 823 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_31_31;

#line 823 "io_combinator.m"
    {
#line 823 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_10), &io_combinator__conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_31_31);
    }
#line 823 "io_combinator.m"
    io_combinator__Res1_18 = ((MR_Word) io_combinator__conv2_Res1_18);
#line 867 "io_combinator.m"
#line 867 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_18)) {
#line 867 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "io_combinator.m"
      case (MR_Integer) 0:
#line 869 "io_combinator.m"
        *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "io_combinator.m"
        break;
#line 867 "io_combinator.m"
      case (MR_Integer) 1:
#line 825 "io_combinator.m"
        {
#line 825 "io_combinator.m"
          MR_Box io_combinator__T1_19 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_18, (MR_Integer) 0));
#line 825 "io_combinator.m"
          MR_Word io_combinator__Res2_20;
#line 826 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_11, (MR_Integer) 1)));
#line 826 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_20;
#line 826 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_32_32;

#line 826 "io_combinator.m"
          {
#line 826 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_11), &io_combinator__conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_32_32);
          }
#line 826 "io_combinator.m"
          io_combinator__Res2_20 = ((MR_Word) io_combinator__conv5_Res2_20);
#line 860 "io_combinator.m"
#line 860 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_20)) {
#line 860 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 860 "io_combinator.m"
            case (MR_Integer) 0:
#line 862 "io_combinator.m"
              *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 860 "io_combinator.m"
              break;
#line 860 "io_combinator.m"
            case (MR_Integer) 1:
#line 828 "io_combinator.m"
              {
#line 828 "io_combinator.m"
                MR_Box io_combinator__T2_21 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_20, (MR_Integer) 0));
#line 828 "io_combinator.m"
                MR_Word io_combinator__Res3_22;
#line 829 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_12, (MR_Integer) 1)));
#line 829 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_22;
#line 829 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_33_33;

#line 829 "io_combinator.m"
                {
#line 829 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_12), &io_combinator__conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_33_33);
                }
#line 829 "io_combinator.m"
                io_combinator__Res3_22 = ((MR_Word) io_combinator__conv8_Res3_22);
#line 853 "io_combinator.m"
#line 853 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_22)) {
#line 853 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 853 "io_combinator.m"
                  case (MR_Integer) 0:
#line 855 "io_combinator.m"
                    *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "io_combinator.m"
                    break;
#line 853 "io_combinator.m"
                  case (MR_Integer) 1:
#line 831 "io_combinator.m"
                    {
#line 831 "io_combinator.m"
                      MR_Box io_combinator__T3_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_22, (MR_Integer) 0));
#line 831 "io_combinator.m"
                      MR_Word io_combinator__Res4_24;
#line 832 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_13, (MR_Integer) 1)));
#line 832 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_24;
#line 832 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_34_34;

#line 832 "io_combinator.m"
                      {
#line 832 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_13), &io_combinator__conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_34_34);
                      }
#line 832 "io_combinator.m"
                      io_combinator__Res4_24 = ((MR_Word) io_combinator__conv11_Res4_24);
#line 846 "io_combinator.m"
#line 846 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_24)) {
#line 846 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 846 "io_combinator.m"
                        case (MR_Integer) 0:
#line 848 "io_combinator.m"
                          *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "io_combinator.m"
                          break;
#line 846 "io_combinator.m"
                        case (MR_Integer) 1:
#line 834 "io_combinator.m"
                          {
#line 834 "io_combinator.m"
                            MR_Box io_combinator__T4_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_24, (MR_Integer) 0));
#line 834 "io_combinator.m"
                            MR_Word io_combinator__Res5_26;
#line 835 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_14, (MR_Integer) 1)));
#line 835 "io_combinator.m"
                            MR_Box io_combinator__conv14_Res5_26;
#line 835 "io_combinator.m"
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_30;

#line 835 "io_combinator.m"
                            {
#line 835 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__P5_14), &io_combinator__conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_30);
                            }
#line 835 "io_combinator.m"
                            io_combinator__Res5_26 = ((MR_Word) io_combinator__conv14_Res5_26);
#line 839 "io_combinator.m"
#line 839 "io_combinator.m"
                            switch (MR_tag((MR_Word) io_combinator__Res5_26)) {
#line 839 "io_combinator.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 839 "io_combinator.m"
                              case (MR_Integer) 0:
#line 841 "io_combinator.m"
                                *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "io_combinator.m"
                                break;
#line 839 "io_combinator.m"
                              case (MR_Integer) 1:
#line 837 "io_combinator.m"
                                {
#line 837 "io_combinator.m"
                                  MR_Box io_combinator__T5_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_26, (MR_Integer) 0));
#line 838 "io_combinator.m"
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_15, (MR_Integer) 1)));
#line 838 "io_combinator.m"
                                  MR_Box io_combinator__conv16_Res_16;

#line 838 "io_combinator.m"
                                  {
#line 838 "io_combinator.m"
                                    io_combinator__func_15(((MR_Box) io_combinator__Combine_15), io_combinator__T1_19, io_combinator__T2_21, io_combinator__T3_23, io_combinator__T4_25, io_combinator__T5_27, &io_combinator__conv16_Res_16);
                                  }
#line 838 "io_combinator.m"
                                  *io_combinator__Res_16 = ((MR_Word) io_combinator__conv16_Res_16);
#line 837 "io_combinator.m"
                                }
#line 839 "io_combinator.m"
                                break;
#line 839 "io_combinator.m"
                              case (MR_Integer) 2:
#line 844 "io_combinator.m"
                                *io_combinator__Res_16 = io_combinator__Res5_26;
#line 839 "io_combinator.m"
                                break;
#line 839 "io_combinator.m"
                            }
#line 834 "io_combinator.m"
                          }
#line 846 "io_combinator.m"
                          break;
#line 846 "io_combinator.m"
                        case (MR_Integer) 2:
#line 851 "io_combinator.m"
                          *io_combinator__Res_16 = io_combinator__Res4_24;
#line 846 "io_combinator.m"
                          break;
#line 846 "io_combinator.m"
                      }
#line 831 "io_combinator.m"
                    }
#line 853 "io_combinator.m"
                    break;
#line 853 "io_combinator.m"
                  case (MR_Integer) 2:
#line 858 "io_combinator.m"
                    *io_combinator__Res_16 = io_combinator__Res3_22;
#line 853 "io_combinator.m"
                    break;
#line 853 "io_combinator.m"
                }
#line 828 "io_combinator.m"
              }
#line 860 "io_combinator.m"
              break;
#line 860 "io_combinator.m"
            case (MR_Integer) 2:
#line 865 "io_combinator.m"
              *io_combinator__Res_16 = io_combinator__Res2_20;
#line 860 "io_combinator.m"
              break;
#line 860 "io_combinator.m"
          }
#line 825 "io_combinator.m"
        }
#line 867 "io_combinator.m"
        break;
#line 867 "io_combinator.m"
      case (MR_Integer) 2:
#line 872 "io_combinator.m"
        *io_combinator__Res_16 = io_combinator__Res1_18;
#line 867 "io_combinator.m"
        break;
#line 867 "io_combinator.m"
    }
#line 822 "io_combinator.m"
  }
#line 94 "io_combinator.m"
}

#line 78 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_4_8_p_0(
#line 78 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_34,
#line 78 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_35,
#line 78 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_36,
#line 78 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T4_37,
#line 78 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_38,
#line 78 "io_combinator.m"
  MR_Word io_combinator__P1_9,
#line 78 "io_combinator.m"
  MR_Word io_combinator__P2_10,
#line 78 "io_combinator.m"
  MR_Word io_combinator__P3_11,
#line 78 "io_combinator.m"
  MR_Word io_combinator__P4_12,
#line 78 "io_combinator.m"
  MR_Word io_combinator__Combine_13,
#line 78 "io_combinator.m"
  MR_Word * io_combinator__Res_14)
#line 78 "io_combinator.m"
{
#line 779 "io_combinator.m"
  {
#line 779 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 779 "io_combinator.m"
    MR_Word io_combinator__Res1_16;
#line 780 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_9, (MR_Integer) 1)));
#line 780 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_16;
#line 780 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_27_27;

#line 780 "io_combinator.m"
    {
#line 780 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_9), &io_combinator__conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_27_27);
    }
#line 780 "io_combinator.m"
    io_combinator__Res1_16 = ((MR_Word) io_combinator__conv2_Res1_16);
#line 814 "io_combinator.m"
#line 814 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_16)) {
#line 814 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 814 "io_combinator.m"
      case (MR_Integer) 0:
#line 816 "io_combinator.m"
        *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 814 "io_combinator.m"
        break;
#line 814 "io_combinator.m"
      case (MR_Integer) 1:
#line 782 "io_combinator.m"
        {
#line 782 "io_combinator.m"
          MR_Box io_combinator__T1_17 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_16, (MR_Integer) 0));
#line 782 "io_combinator.m"
          MR_Word io_combinator__Res2_18;
#line 783 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_10, (MR_Integer) 1)));
#line 783 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_18;
#line 783 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_28_28;

#line 783 "io_combinator.m"
          {
#line 783 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_10), &io_combinator__conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_28_28);
          }
#line 783 "io_combinator.m"
          io_combinator__Res2_18 = ((MR_Word) io_combinator__conv5_Res2_18);
#line 807 "io_combinator.m"
#line 807 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_18)) {
#line 807 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 807 "io_combinator.m"
            case (MR_Integer) 0:
#line 809 "io_combinator.m"
              *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 807 "io_combinator.m"
              break;
#line 807 "io_combinator.m"
            case (MR_Integer) 1:
#line 785 "io_combinator.m"
              {
#line 785 "io_combinator.m"
                MR_Box io_combinator__T2_19 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_18, (MR_Integer) 0));
#line 785 "io_combinator.m"
                MR_Word io_combinator__Res3_20;
#line 786 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_11, (MR_Integer) 1)));
#line 786 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_20;
#line 786 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_29_29;

#line 786 "io_combinator.m"
                {
#line 786 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_11), &io_combinator__conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_29_29);
                }
#line 786 "io_combinator.m"
                io_combinator__Res3_20 = ((MR_Word) io_combinator__conv8_Res3_20);
#line 800 "io_combinator.m"
#line 800 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_20)) {
#line 800 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 800 "io_combinator.m"
                  case (MR_Integer) 0:
#line 802 "io_combinator.m"
                    *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "io_combinator.m"
                    break;
#line 800 "io_combinator.m"
                  case (MR_Integer) 1:
#line 788 "io_combinator.m"
                    {
#line 788 "io_combinator.m"
                      MR_Box io_combinator__T3_21 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_20, (MR_Integer) 0));
#line 788 "io_combinator.m"
                      MR_Word io_combinator__Res4_22;
#line 789 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_12, (MR_Integer) 1)));
#line 789 "io_combinator.m"
                      MR_Box io_combinator__conv11_Res4_22;
#line 789 "io_combinator.m"
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_26;

#line 789 "io_combinator.m"
                      {
#line 789 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__P4_12), &io_combinator__conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_26);
                      }
#line 789 "io_combinator.m"
                      io_combinator__Res4_22 = ((MR_Word) io_combinator__conv11_Res4_22);
#line 793 "io_combinator.m"
#line 793 "io_combinator.m"
                      switch (MR_tag((MR_Word) io_combinator__Res4_22)) {
#line 793 "io_combinator.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 793 "io_combinator.m"
                        case (MR_Integer) 0:
#line 795 "io_combinator.m"
                          *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "io_combinator.m"
                          break;
#line 793 "io_combinator.m"
                        case (MR_Integer) 1:
#line 791 "io_combinator.m"
                          {
#line 791 "io_combinator.m"
                            MR_Box io_combinator__T4_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_22, (MR_Integer) 0));
#line 792 "io_combinator.m"
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_13, (MR_Integer) 1)));
#line 792 "io_combinator.m"
                            MR_Box io_combinator__conv13_Res_14;

#line 792 "io_combinator.m"
                            {
#line 792 "io_combinator.m"
                              io_combinator__func_12(((MR_Box) io_combinator__Combine_13), io_combinator__T1_17, io_combinator__T2_19, io_combinator__T3_21, io_combinator__T4_23, &io_combinator__conv13_Res_14);
                            }
#line 792 "io_combinator.m"
                            *io_combinator__Res_14 = ((MR_Word) io_combinator__conv13_Res_14);
#line 791 "io_combinator.m"
                          }
#line 793 "io_combinator.m"
                          break;
#line 793 "io_combinator.m"
                        case (MR_Integer) 2:
#line 798 "io_combinator.m"
                          *io_combinator__Res_14 = io_combinator__Res4_22;
#line 793 "io_combinator.m"
                          break;
#line 793 "io_combinator.m"
                      }
#line 788 "io_combinator.m"
                    }
#line 800 "io_combinator.m"
                    break;
#line 800 "io_combinator.m"
                  case (MR_Integer) 2:
#line 805 "io_combinator.m"
                    *io_combinator__Res_14 = io_combinator__Res3_20;
#line 800 "io_combinator.m"
                    break;
#line 800 "io_combinator.m"
                }
#line 785 "io_combinator.m"
              }
#line 807 "io_combinator.m"
              break;
#line 807 "io_combinator.m"
            case (MR_Integer) 2:
#line 812 "io_combinator.m"
              *io_combinator__Res_14 = io_combinator__Res2_18;
#line 807 "io_combinator.m"
              break;
#line 807 "io_combinator.m"
          }
#line 782 "io_combinator.m"
        }
#line 814 "io_combinator.m"
        break;
#line 814 "io_combinator.m"
      case (MR_Integer) 2:
#line 819 "io_combinator.m"
        *io_combinator__Res_14 = io_combinator__Res1_16;
#line 814 "io_combinator.m"
        break;
#line 814 "io_combinator.m"
    }
#line 779 "io_combinator.m"
  }
#line 78 "io_combinator.m"
}

#line 64 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_3_7_p_0(
#line 64 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_28,
#line 64 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_29,
#line 64 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T3_30,
#line 64 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_31,
#line 64 "io_combinator.m"
  MR_Word io_combinator__P1_8,
#line 64 "io_combinator.m"
  MR_Word io_combinator__P2_9,
#line 64 "io_combinator.m"
  MR_Word io_combinator__P3_10,
#line 64 "io_combinator.m"
  MR_Word io_combinator__Combine_11,
#line 64 "io_combinator.m"
  MR_Word * io_combinator__Res_12)
#line 64 "io_combinator.m"
{
#line 746 "io_combinator.m"
  {
#line 746 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 746 "io_combinator.m"
    MR_Word io_combinator__Res1_14;
#line 747 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_8, (MR_Integer) 1)));
#line 747 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_14;
#line 747 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_23_23;

#line 747 "io_combinator.m"
    {
#line 747 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_8), &io_combinator__conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 747 "io_combinator.m"
    io_combinator__Res1_14 = ((MR_Word) io_combinator__conv2_Res1_14);
#line 771 "io_combinator.m"
#line 771 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_14)) {
#line 771 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 771 "io_combinator.m"
      case (MR_Integer) 0:
#line 773 "io_combinator.m"
        *io_combinator__Res_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "io_combinator.m"
        break;
#line 771 "io_combinator.m"
      case (MR_Integer) 1:
#line 749 "io_combinator.m"
        {
#line 749 "io_combinator.m"
          MR_Box io_combinator__T1_15 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_14, (MR_Integer) 0));
#line 749 "io_combinator.m"
          MR_Word io_combinator__Res2_16;
#line 750 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_9, (MR_Integer) 1)));
#line 750 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_16;
#line 750 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_24_24;

#line 750 "io_combinator.m"
          {
#line 750 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_9), &io_combinator__conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_24_24);
          }
#line 750 "io_combinator.m"
          io_combinator__Res2_16 = ((MR_Word) io_combinator__conv5_Res2_16);
#line 764 "io_combinator.m"
#line 764 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_16)) {
#line 764 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 764 "io_combinator.m"
            case (MR_Integer) 0:
#line 766 "io_combinator.m"
              *io_combinator__Res_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 764 "io_combinator.m"
              break;
#line 764 "io_combinator.m"
            case (MR_Integer) 1:
#line 752 "io_combinator.m"
              {
#line 752 "io_combinator.m"
                MR_Box io_combinator__T2_17 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_16, (MR_Integer) 0));
#line 752 "io_combinator.m"
                MR_Word io_combinator__Res3_18;
#line 753 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_10, (MR_Integer) 1)));
#line 753 "io_combinator.m"
                MR_Box io_combinator__conv8_Res3_18;
#line 753 "io_combinator.m"
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_22;

#line 753 "io_combinator.m"
                {
#line 753 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__P3_10), &io_combinator__conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_22);
                }
#line 753 "io_combinator.m"
                io_combinator__Res3_18 = ((MR_Word) io_combinator__conv8_Res3_18);
#line 757 "io_combinator.m"
#line 757 "io_combinator.m"
                switch (MR_tag((MR_Word) io_combinator__Res3_18)) {
#line 757 "io_combinator.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 757 "io_combinator.m"
                  case (MR_Integer) 0:
#line 759 "io_combinator.m"
                    *io_combinator__Res_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "io_combinator.m"
                    break;
#line 757 "io_combinator.m"
                  case (MR_Integer) 1:
#line 755 "io_combinator.m"
                    {
#line 755 "io_combinator.m"
                      MR_Box io_combinator__T3_19 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_18, (MR_Integer) 0));
#line 756 "io_combinator.m"
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_11, (MR_Integer) 1)));
#line 756 "io_combinator.m"
                      MR_Box io_combinator__conv10_Res_12;

#line 756 "io_combinator.m"
                      {
#line 756 "io_combinator.m"
                        io_combinator__func_9(((MR_Box) io_combinator__Combine_11), io_combinator__T1_15, io_combinator__T2_17, io_combinator__T3_19, &io_combinator__conv10_Res_12);
                      }
#line 756 "io_combinator.m"
                      *io_combinator__Res_12 = ((MR_Word) io_combinator__conv10_Res_12);
#line 755 "io_combinator.m"
                    }
#line 757 "io_combinator.m"
                    break;
#line 757 "io_combinator.m"
                  case (MR_Integer) 2:
#line 762 "io_combinator.m"
                    *io_combinator__Res_12 = io_combinator__Res3_18;
#line 757 "io_combinator.m"
                    break;
#line 757 "io_combinator.m"
                }
#line 752 "io_combinator.m"
              }
#line 764 "io_combinator.m"
              break;
#line 764 "io_combinator.m"
            case (MR_Integer) 2:
#line 769 "io_combinator.m"
              *io_combinator__Res_12 = io_combinator__Res2_16;
#line 764 "io_combinator.m"
              break;
#line 764 "io_combinator.m"
          }
#line 749 "io_combinator.m"
        }
#line 771 "io_combinator.m"
        break;
#line 771 "io_combinator.m"
      case (MR_Integer) 2:
#line 776 "io_combinator.m"
        *io_combinator__Res_12 = io_combinator__Res1_14;
#line 771 "io_combinator.m"
        break;
#line 771 "io_combinator.m"
    }
#line 746 "io_combinator.m"
  }
#line 64 "io_combinator.m"
}

#line 52 "io_combinator.m"
void MR_CALL 
io_combinator__sequence_2_6_p_0(
#line 52 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T1_22,
#line 52 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T2_23,
#line 52 "io_combinator.m"
  MR_Word io_combinator__TypeInfo_for_T_24,
#line 52 "io_combinator.m"
  MR_Word io_combinator__P1_7,
#line 52 "io_combinator.m"
  MR_Word io_combinator__P2_8,
#line 52 "io_combinator.m"
  MR_Word io_combinator__Combine_9,
#line 52 "io_combinator.m"
  MR_Word * io_combinator__Res_10)
#line 52 "io_combinator.m"
{
#line 723 "io_combinator.m"
  {
#line 723 "io_combinator.m"
    MR_bool io_combinator__succeeded;
#line 723 "io_combinator.m"
    MR_Word io_combinator__Res1_12;
#line 724 "io_combinator.m"
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_7, (MR_Integer) 1)));
#line 724 "io_combinator.m"
    MR_Box io_combinator__conv2_Res1_12;
#line 724 "io_combinator.m"
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_19_19;

#line 724 "io_combinator.m"
    {
#line 724 "io_combinator.m"
      io_combinator__func_0(((MR_Box) io_combinator__P1_7), &io_combinator__conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_19_19);
    }
#line 724 "io_combinator.m"
    io_combinator__Res1_12 = ((MR_Word) io_combinator__conv2_Res1_12);
#line 738 "io_combinator.m"
#line 738 "io_combinator.m"
    switch (MR_tag((MR_Word) io_combinator__Res1_12)) {
#line 738 "io_combinator.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 738 "io_combinator.m"
      case (MR_Integer) 0:
#line 740 "io_combinator.m"
        *io_combinator__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "io_combinator.m"
        break;
#line 738 "io_combinator.m"
      case (MR_Integer) 1:
#line 726 "io_combinator.m"
        {
#line 726 "io_combinator.m"
          MR_Box io_combinator__T1_13 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_12, (MR_Integer) 0));
#line 726 "io_combinator.m"
          MR_Word io_combinator__Res2_14;
#line 727 "io_combinator.m"
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_8, (MR_Integer) 1)));
#line 727 "io_combinator.m"
          MR_Box io_combinator__conv5_Res2_14;
#line 727 "io_combinator.m"
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_18;

#line 727 "io_combinator.m"
          {
#line 727 "io_combinator.m"
            io_combinator__func_3(((MR_Box) io_combinator__P2_8), &io_combinator__conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_18);
          }
#line 727 "io_combinator.m"
          io_combinator__Res2_14 = ((MR_Word) io_combinator__conv5_Res2_14);
#line 731 "io_combinator.m"
#line 731 "io_combinator.m"
          switch (MR_tag((MR_Word) io_combinator__Res2_14)) {
#line 731 "io_combinator.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 731 "io_combinator.m"
            case (MR_Integer) 0:
#line 733 "io_combinator.m"
              *io_combinator__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "io_combinator.m"
              break;
#line 731 "io_combinator.m"
            case (MR_Integer) 1:
#line 729 "io_combinator.m"
              {
#line 729 "io_combinator.m"
                MR_Box io_combinator__T2_15 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_14, (MR_Integer) 0));
#line 730 "io_combinator.m"
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_9, (MR_Integer) 1)));
#line 730 "io_combinator.m"
                MR_Box io_combinator__conv7_Res_10;

#line 730 "io_combinator.m"
                {
#line 730 "io_combinator.m"
                  io_combinator__func_6(((MR_Box) io_combinator__Combine_9), io_combinator__T1_13, io_combinator__T2_15, &io_combinator__conv7_Res_10);
                }
#line 730 "io_combinator.m"
                *io_combinator__Res_10 = ((MR_Word) io_combinator__conv7_Res_10);
#line 729 "io_combinator.m"
              }
#line 731 "io_combinator.m"
              break;
#line 731 "io_combinator.m"
            case (MR_Integer) 2:
#line 736 "io_combinator.m"
              *io_combinator__Res_10 = io_combinator__Res2_14;
#line 731 "io_combinator.m"
              break;
#line 731 "io_combinator.m"
          }
#line 726 "io_combinator.m"
        }
#line 738 "io_combinator.m"
        break;
#line 738 "io_combinator.m"
      case (MR_Integer) 2:
#line 743 "io_combinator.m"
        *io_combinator__Res_10 = io_combinator__Res1_12;
#line 738 "io_combinator.m"
        break;
#line 738 "io_combinator.m"
    }
#line 723 "io_combinator.m"
  }
#line 52 "io_combinator.m"
}

void mercury__io_combinator__init(void)
{
}

void mercury__io_combinator__init_type_tables(void)
{
}

void mercury__io_combinator__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module io_combinator. */
