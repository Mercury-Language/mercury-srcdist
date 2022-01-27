/*
** Automatically generated from `io_combinator.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


#include "array.mih"
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
#include "random.mih"
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



void MR_CALL 
io_combinator__maybe_error_sequence_13_17_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_88,
  MR_Word io_combinator__TypeInfo_for_T2_89,
  MR_Word io_combinator__TypeInfo_for_T3_90,
  MR_Word io_combinator__TypeInfo_for_T4_91,
  MR_Word io_combinator__TypeInfo_for_T5_92,
  MR_Word io_combinator__TypeInfo_for_T6_93,
  MR_Word io_combinator__TypeInfo_for_T7_94,
  MR_Word io_combinator__TypeInfo_for_T8_95,
  MR_Word io_combinator__TypeInfo_for_T9_96,
  MR_Word io_combinator__TypeInfo_for_T10_97,
  MR_Word io_combinator__TypeInfo_for_T11_98,
  MR_Word io_combinator__TypeInfo_for_T12_99,
  MR_Word io_combinator__TypeInfo_for_T13_100,
  MR_Word io_combinator__TypeInfo_for_T_101,
  MR_Word io_combinator__P1_18,
  MR_Word io_combinator__P2_19,
  MR_Word io_combinator__P3_20,
  MR_Word io_combinator__P4_21,
  MR_Word io_combinator__P5_22,
  MR_Word io_combinator__P6_23,
  MR_Word io_combinator__P7_24,
  MR_Word io_combinator__P8_25,
  MR_Word io_combinator__P9_26,
  MR_Word io_combinator__P10_27,
  MR_Word io_combinator__P11_28,
  MR_Word io_combinator__P12_29,
  MR_Word io_combinator__P13_30,
  MR_Word io_combinator__Combine_31,
  MR_Word * io_combinator__Res_32)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_34;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_18, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_34;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_63_63;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_18), &io_combinator__conv2_Res1_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_63_63);
    }
    io_combinator__Res1_34 = ((MR_Word) io_combinator__conv2_Res1_34);
    if (((MR_tag((MR_Word) io_combinator__Res1_34)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_32 = io_combinator__Res1_34;
    else
      {
        MR_Box io_combinator__T1_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_34, (MR_Integer) 0));
        MR_Word io_combinator__Res2_36;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_19, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_36;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_64_64;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_19), &io_combinator__conv5_Res2_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_64_64);
        }
        io_combinator__Res2_36 = ((MR_Word) io_combinator__conv5_Res2_36);
        if (((MR_tag((MR_Word) io_combinator__Res2_36)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_32 = io_combinator__Res2_36;
        else
          {
            MR_Box io_combinator__T2_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_36, (MR_Integer) 0));
            MR_Word io_combinator__Res3_38;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_20, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_38;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_65_65;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_20), &io_combinator__conv8_Res3_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_65_65);
            }
            io_combinator__Res3_38 = ((MR_Word) io_combinator__conv8_Res3_38);
            if (((MR_tag((MR_Word) io_combinator__Res3_38)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_32 = io_combinator__Res3_38;
            else
              {
                MR_Box io_combinator__T3_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_38, (MR_Integer) 0));
                MR_Word io_combinator__Res4_40;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_21, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_40;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_66_66;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_21), &io_combinator__conv11_Res4_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_66_66);
                }
                io_combinator__Res4_40 = ((MR_Word) io_combinator__conv11_Res4_40);
                if (((MR_tag((MR_Word) io_combinator__Res4_40)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_32 = io_combinator__Res4_40;
                else
                  {
                    MR_Box io_combinator__T4_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_40, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_42;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_22, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_42;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_67_67;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_22), &io_combinator__conv14_Res5_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_67_67);
                    }
                    io_combinator__Res5_42 = ((MR_Word) io_combinator__conv14_Res5_42);
                    if (((MR_tag((MR_Word) io_combinator__Res5_42)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_32 = io_combinator__Res5_42;
                    else
                      {
                        MR_Box io_combinator__T5_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_42, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_44;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_23, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_44;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_68_68;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_23), &io_combinator__conv17_Res6_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_68_68);
                        }
                        io_combinator__Res6_44 = ((MR_Word) io_combinator__conv17_Res6_44);
                        if (((MR_tag((MR_Word) io_combinator__Res6_44)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_32 = io_combinator__Res6_44;
                        else
                          {
                            MR_Box io_combinator__T6_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_44, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_46;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_24, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_46;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_69_69;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_24), &io_combinator__conv20_Res7_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_69_69);
                            }
                            io_combinator__Res7_46 = ((MR_Word) io_combinator__conv20_Res7_46);
                            if (((MR_tag((MR_Word) io_combinator__Res7_46)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_32 = io_combinator__Res7_46;
                            else
                              {
                                MR_Box io_combinator__T7_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_46, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_48;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_25, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_48;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_70_70;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_25), &io_combinator__conv23_Res8_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_70_70);
                                }
                                io_combinator__Res8_48 = ((MR_Word) io_combinator__conv23_Res8_48);
                                if (((MR_tag((MR_Word) io_combinator__Res8_48)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_32 = io_combinator__Res8_48;
                                else
                                  {
                                    MR_Box io_combinator__T8_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_48, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_50;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_26, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_50;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_71_71;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_26), &io_combinator__conv26_Res9_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_71_71);
                                    }
                                    io_combinator__Res9_50 = ((MR_Word) io_combinator__conv26_Res9_50);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_50)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_32 = io_combinator__Res9_50;
                                    else
                                      {
                                        MR_Box io_combinator__T9_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_50, (MR_Integer) 0));
                                        MR_Word io_combinator__Res10_52;
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_27, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv29_Res10_52;
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_72_72;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_27), &io_combinator__conv29_Res10_52, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_72_72);
                                        }
                                        io_combinator__Res10_52 = ((MR_Word) io_combinator__conv29_Res10_52);
                                        if (((MR_tag((MR_Word) io_combinator__Res10_52)) == (MR_mktag((MR_Integer) 1))))
                                          *io_combinator__Res_32 = io_combinator__Res10_52;
                                        else
                                          {
                                            MR_Box io_combinator__T10_53 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_52, (MR_Integer) 0));
                                            MR_Word io_combinator__Res11_54;
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_28, (MR_Integer) 1)));
                                            MR_Box io_combinator__conv32_Res11_54;
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_73_73;

                                            {
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_28), &io_combinator__conv32_Res11_54, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_73_73);
                                            }
                                            io_combinator__Res11_54 = ((MR_Word) io_combinator__conv32_Res11_54);
                                            if (((MR_tag((MR_Word) io_combinator__Res11_54)) == (MR_mktag((MR_Integer) 1))))
                                              *io_combinator__Res_32 = io_combinator__Res11_54;
                                            else
                                              {
                                                MR_Box io_combinator__T11_55 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_54, (MR_Integer) 0));
                                                MR_Word io_combinator__Res12_56;
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P12_29, (MR_Integer) 1)));
                                                MR_Box io_combinator__conv35_Res12_56;
                                                MR_Box io_combinator__conv34_STATE_VARIABLE_IO_74_74;

                                                {
                                                  io_combinator__func_33(((MR_Box) io_combinator__P12_29), &io_combinator__conv35_Res12_56, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv34_STATE_VARIABLE_IO_74_74);
                                                }
                                                io_combinator__Res12_56 = ((MR_Word) io_combinator__conv35_Res12_56);
                                                if (((MR_tag((MR_Word) io_combinator__Res12_56)) == (MR_mktag((MR_Integer) 1))))
                                                  *io_combinator__Res_32 = io_combinator__Res12_56;
                                                else
                                                  {
                                                    MR_Box io_combinator__T12_57 = (MR_hl_field(MR_mktag(0), io_combinator__Res12_56, (MR_Integer) 0));
                                                    MR_Word io_combinator__Res13_58;
                                                    void MR_CALL (* io_combinator__func_36)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P13_30, (MR_Integer) 1)));
                                                    MR_Box io_combinator__conv38_Res13_58;
                                                    MR_Box io_combinator__conv37_STATE_VARIABLE_IO_62;

                                                    {
                                                      io_combinator__func_36(((MR_Box) io_combinator__P13_30), &io_combinator__conv38_Res13_58, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv37_STATE_VARIABLE_IO_62);
                                                    }
                                                    io_combinator__Res13_58 = ((MR_Word) io_combinator__conv38_Res13_58);
                                                    if (((MR_tag((MR_Word) io_combinator__Res13_58)) == (MR_mktag((MR_Integer) 1))))
                                                      *io_combinator__Res_32 = io_combinator__Res13_58;
                                                    else
                                                      {
                                                        MR_Box io_combinator__T13_59 = (MR_hl_field(MR_mktag(0), io_combinator__Res13_58, (MR_Integer) 0));
                                                        void MR_CALL (* io_combinator__func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_31, (MR_Integer) 1)));
                                                        MR_Box io_combinator__conv40_Res_32;

                                                        {
                                                          io_combinator__func_39(((MR_Box) io_combinator__Combine_31), io_combinator__T1_35, io_combinator__T2_37, io_combinator__T3_39, io_combinator__T4_41, io_combinator__T5_43, io_combinator__T6_45, io_combinator__T7_47, io_combinator__T8_49, io_combinator__T9_51, io_combinator__T10_53, io_combinator__T11_55, io_combinator__T12_57, io_combinator__T13_59, &io_combinator__conv40_Res_32);
                                                        }
                                                        *io_combinator__Res_32 = ((MR_Word) io_combinator__conv40_Res_32);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_12_16_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_82,
  MR_Word io_combinator__TypeInfo_for_T2_83,
  MR_Word io_combinator__TypeInfo_for_T3_84,
  MR_Word io_combinator__TypeInfo_for_T4_85,
  MR_Word io_combinator__TypeInfo_for_T5_86,
  MR_Word io_combinator__TypeInfo_for_T6_87,
  MR_Word io_combinator__TypeInfo_for_T7_88,
  MR_Word io_combinator__TypeInfo_for_T8_89,
  MR_Word io_combinator__TypeInfo_for_T9_90,
  MR_Word io_combinator__TypeInfo_for_T10_91,
  MR_Word io_combinator__TypeInfo_for_T11_92,
  MR_Word io_combinator__TypeInfo_for_T12_93,
  MR_Word io_combinator__TypeInfo_for_T_94,
  MR_Word io_combinator__P1_17,
  MR_Word io_combinator__P2_18,
  MR_Word io_combinator__P3_19,
  MR_Word io_combinator__P4_20,
  MR_Word io_combinator__P5_21,
  MR_Word io_combinator__P6_22,
  MR_Word io_combinator__P7_23,
  MR_Word io_combinator__P8_24,
  MR_Word io_combinator__P9_25,
  MR_Word io_combinator__P10_26,
  MR_Word io_combinator__P11_27,
  MR_Word io_combinator__P12_28,
  MR_Word io_combinator__Combine_29,
  MR_Word * io_combinator__Res_30)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_32;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_17, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_32;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_59_59;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_17), &io_combinator__conv2_Res1_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_59_59);
    }
    io_combinator__Res1_32 = ((MR_Word) io_combinator__conv2_Res1_32);
    if (((MR_tag((MR_Word) io_combinator__Res1_32)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_30 = io_combinator__Res1_32;
    else
      {
        MR_Box io_combinator__T1_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_32, (MR_Integer) 0));
        MR_Word io_combinator__Res2_34;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_18, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_34;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_60_60;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_18), &io_combinator__conv5_Res2_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_60_60);
        }
        io_combinator__Res2_34 = ((MR_Word) io_combinator__conv5_Res2_34);
        if (((MR_tag((MR_Word) io_combinator__Res2_34)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_30 = io_combinator__Res2_34;
        else
          {
            MR_Box io_combinator__T2_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_34, (MR_Integer) 0));
            MR_Word io_combinator__Res3_36;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_19, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_36;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_61_61;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_19), &io_combinator__conv8_Res3_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_61_61);
            }
            io_combinator__Res3_36 = ((MR_Word) io_combinator__conv8_Res3_36);
            if (((MR_tag((MR_Word) io_combinator__Res3_36)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_30 = io_combinator__Res3_36;
            else
              {
                MR_Box io_combinator__T3_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_36, (MR_Integer) 0));
                MR_Word io_combinator__Res4_38;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_20, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_38;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_62_62;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_20), &io_combinator__conv11_Res4_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_62_62);
                }
                io_combinator__Res4_38 = ((MR_Word) io_combinator__conv11_Res4_38);
                if (((MR_tag((MR_Word) io_combinator__Res4_38)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_30 = io_combinator__Res4_38;
                else
                  {
                    MR_Box io_combinator__T4_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_38, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_40;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_21, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_40;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_63_63;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_21), &io_combinator__conv14_Res5_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_63_63);
                    }
                    io_combinator__Res5_40 = ((MR_Word) io_combinator__conv14_Res5_40);
                    if (((MR_tag((MR_Word) io_combinator__Res5_40)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_30 = io_combinator__Res5_40;
                    else
                      {
                        MR_Box io_combinator__T5_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_40, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_42;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_22, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_42;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_64_64;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_22), &io_combinator__conv17_Res6_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_64_64);
                        }
                        io_combinator__Res6_42 = ((MR_Word) io_combinator__conv17_Res6_42);
                        if (((MR_tag((MR_Word) io_combinator__Res6_42)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_30 = io_combinator__Res6_42;
                        else
                          {
                            MR_Box io_combinator__T6_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_42, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_44;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_23, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_44;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_65_65;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_23), &io_combinator__conv20_Res7_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_65_65);
                            }
                            io_combinator__Res7_44 = ((MR_Word) io_combinator__conv20_Res7_44);
                            if (((MR_tag((MR_Word) io_combinator__Res7_44)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_30 = io_combinator__Res7_44;
                            else
                              {
                                MR_Box io_combinator__T7_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_44, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_46;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_24, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_46;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_66_66;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_24), &io_combinator__conv23_Res8_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_66_66);
                                }
                                io_combinator__Res8_46 = ((MR_Word) io_combinator__conv23_Res8_46);
                                if (((MR_tag((MR_Word) io_combinator__Res8_46)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_30 = io_combinator__Res8_46;
                                else
                                  {
                                    MR_Box io_combinator__T8_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_46, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_48;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_25, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_48;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_67_67;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_25), &io_combinator__conv26_Res9_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_67_67);
                                    }
                                    io_combinator__Res9_48 = ((MR_Word) io_combinator__conv26_Res9_48);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_48)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_30 = io_combinator__Res9_48;
                                    else
                                      {
                                        MR_Box io_combinator__T9_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_48, (MR_Integer) 0));
                                        MR_Word io_combinator__Res10_50;
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_26, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv29_Res10_50;
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_68_68;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_26), &io_combinator__conv29_Res10_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_68_68);
                                        }
                                        io_combinator__Res10_50 = ((MR_Word) io_combinator__conv29_Res10_50);
                                        if (((MR_tag((MR_Word) io_combinator__Res10_50)) == (MR_mktag((MR_Integer) 1))))
                                          *io_combinator__Res_30 = io_combinator__Res10_50;
                                        else
                                          {
                                            MR_Box io_combinator__T10_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_50, (MR_Integer) 0));
                                            MR_Word io_combinator__Res11_52;
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_27, (MR_Integer) 1)));
                                            MR_Box io_combinator__conv32_Res11_52;
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_69_69;

                                            {
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_27), &io_combinator__conv32_Res11_52, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_69_69);
                                            }
                                            io_combinator__Res11_52 = ((MR_Word) io_combinator__conv32_Res11_52);
                                            if (((MR_tag((MR_Word) io_combinator__Res11_52)) == (MR_mktag((MR_Integer) 1))))
                                              *io_combinator__Res_30 = io_combinator__Res11_52;
                                            else
                                              {
                                                MR_Box io_combinator__T11_53 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_52, (MR_Integer) 0));
                                                MR_Word io_combinator__Res12_54;
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P12_28, (MR_Integer) 1)));
                                                MR_Box io_combinator__conv35_Res12_54;
                                                MR_Box io_combinator__conv34_STATE_VARIABLE_IO_58;

                                                {
                                                  io_combinator__func_33(((MR_Box) io_combinator__P12_28), &io_combinator__conv35_Res12_54, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv34_STATE_VARIABLE_IO_58);
                                                }
                                                io_combinator__Res12_54 = ((MR_Word) io_combinator__conv35_Res12_54);
                                                if (((MR_tag((MR_Word) io_combinator__Res12_54)) == (MR_mktag((MR_Integer) 1))))
                                                  *io_combinator__Res_30 = io_combinator__Res12_54;
                                                else
                                                  {
                                                    MR_Box io_combinator__T12_55 = (MR_hl_field(MR_mktag(0), io_combinator__Res12_54, (MR_Integer) 0));
                                                    void MR_CALL (* io_combinator__func_36)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_29, (MR_Integer) 1)));
                                                    MR_Box io_combinator__conv37_Res_30;

                                                    {
                                                      io_combinator__func_36(((MR_Box) io_combinator__Combine_29), io_combinator__T1_33, io_combinator__T2_35, io_combinator__T3_37, io_combinator__T4_39, io_combinator__T5_41, io_combinator__T6_43, io_combinator__T7_45, io_combinator__T8_47, io_combinator__T9_49, io_combinator__T10_51, io_combinator__T11_53, io_combinator__T12_55, &io_combinator__conv37_Res_30);
                                                    }
                                                    *io_combinator__Res_30 = ((MR_Word) io_combinator__conv37_Res_30);
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_11_15_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_76,
  MR_Word io_combinator__TypeInfo_for_T2_77,
  MR_Word io_combinator__TypeInfo_for_T3_78,
  MR_Word io_combinator__TypeInfo_for_T4_79,
  MR_Word io_combinator__TypeInfo_for_T5_80,
  MR_Word io_combinator__TypeInfo_for_T6_81,
  MR_Word io_combinator__TypeInfo_for_T7_82,
  MR_Word io_combinator__TypeInfo_for_T8_83,
  MR_Word io_combinator__TypeInfo_for_T9_84,
  MR_Word io_combinator__TypeInfo_for_T10_85,
  MR_Word io_combinator__TypeInfo_for_T11_86,
  MR_Word io_combinator__TypeInfo_for_T_87,
  MR_Word io_combinator__P1_16,
  MR_Word io_combinator__P2_17,
  MR_Word io_combinator__P3_18,
  MR_Word io_combinator__P4_19,
  MR_Word io_combinator__P5_20,
  MR_Word io_combinator__P6_21,
  MR_Word io_combinator__P7_22,
  MR_Word io_combinator__P8_23,
  MR_Word io_combinator__P9_24,
  MR_Word io_combinator__P10_25,
  MR_Word io_combinator__P11_26,
  MR_Word io_combinator__Combine_27,
  MR_Word * io_combinator__Res_28)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_30;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_16, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_30;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_55_55;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_16), &io_combinator__conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_55_55);
    }
    io_combinator__Res1_30 = ((MR_Word) io_combinator__conv2_Res1_30);
    if (((MR_tag((MR_Word) io_combinator__Res1_30)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_28 = io_combinator__Res1_30;
    else
      {
        MR_Box io_combinator__T1_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_30, (MR_Integer) 0));
        MR_Word io_combinator__Res2_32;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_17, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_32;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_56_56;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_17), &io_combinator__conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_56_56);
        }
        io_combinator__Res2_32 = ((MR_Word) io_combinator__conv5_Res2_32);
        if (((MR_tag((MR_Word) io_combinator__Res2_32)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_28 = io_combinator__Res2_32;
        else
          {
            MR_Box io_combinator__T2_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_32, (MR_Integer) 0));
            MR_Word io_combinator__Res3_34;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_18, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_34;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_57_57;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_18), &io_combinator__conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_57_57);
            }
            io_combinator__Res3_34 = ((MR_Word) io_combinator__conv8_Res3_34);
            if (((MR_tag((MR_Word) io_combinator__Res3_34)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_28 = io_combinator__Res3_34;
            else
              {
                MR_Box io_combinator__T3_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_34, (MR_Integer) 0));
                MR_Word io_combinator__Res4_36;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_19, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_36;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_58_58;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_19), &io_combinator__conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_58_58);
                }
                io_combinator__Res4_36 = ((MR_Word) io_combinator__conv11_Res4_36);
                if (((MR_tag((MR_Word) io_combinator__Res4_36)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_28 = io_combinator__Res4_36;
                else
                  {
                    MR_Box io_combinator__T4_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_36, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_38;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_20, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_38;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_59_59;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_20), &io_combinator__conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_59_59);
                    }
                    io_combinator__Res5_38 = ((MR_Word) io_combinator__conv14_Res5_38);
                    if (((MR_tag((MR_Word) io_combinator__Res5_38)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_28 = io_combinator__Res5_38;
                    else
                      {
                        MR_Box io_combinator__T5_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_38, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_40;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_21, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_40;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_60_60;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_21), &io_combinator__conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_60_60);
                        }
                        io_combinator__Res6_40 = ((MR_Word) io_combinator__conv17_Res6_40);
                        if (((MR_tag((MR_Word) io_combinator__Res6_40)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_28 = io_combinator__Res6_40;
                        else
                          {
                            MR_Box io_combinator__T6_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_40, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_42;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_22, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_42;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_61_61;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_22), &io_combinator__conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_61_61);
                            }
                            io_combinator__Res7_42 = ((MR_Word) io_combinator__conv20_Res7_42);
                            if (((MR_tag((MR_Word) io_combinator__Res7_42)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_28 = io_combinator__Res7_42;
                            else
                              {
                                MR_Box io_combinator__T7_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_42, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_44;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_23, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_44;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_62_62;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_23), &io_combinator__conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_62_62);
                                }
                                io_combinator__Res8_44 = ((MR_Word) io_combinator__conv23_Res8_44);
                                if (((MR_tag((MR_Word) io_combinator__Res8_44)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_28 = io_combinator__Res8_44;
                                else
                                  {
                                    MR_Box io_combinator__T8_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_44, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_46;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_24, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_46;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_63_63;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_24), &io_combinator__conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_63_63);
                                    }
                                    io_combinator__Res9_46 = ((MR_Word) io_combinator__conv26_Res9_46);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_46)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_28 = io_combinator__Res9_46;
                                    else
                                      {
                                        MR_Box io_combinator__T9_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_46, (MR_Integer) 0));
                                        MR_Word io_combinator__Res10_48;
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_25, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv29_Res10_48;
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_64_64;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_25), &io_combinator__conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_64_64);
                                        }
                                        io_combinator__Res10_48 = ((MR_Word) io_combinator__conv29_Res10_48);
                                        if (((MR_tag((MR_Word) io_combinator__Res10_48)) == (MR_mktag((MR_Integer) 1))))
                                          *io_combinator__Res_28 = io_combinator__Res10_48;
                                        else
                                          {
                                            MR_Box io_combinator__T10_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_48, (MR_Integer) 0));
                                            MR_Word io_combinator__Res11_50;
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_26, (MR_Integer) 1)));
                                            MR_Box io_combinator__conv32_Res11_50;
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_54;

                                            {
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_26), &io_combinator__conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_54);
                                            }
                                            io_combinator__Res11_50 = ((MR_Word) io_combinator__conv32_Res11_50);
                                            if (((MR_tag((MR_Word) io_combinator__Res11_50)) == (MR_mktag((MR_Integer) 1))))
                                              *io_combinator__Res_28 = io_combinator__Res11_50;
                                            else
                                              {
                                                MR_Box io_combinator__T11_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_50, (MR_Integer) 0));
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_27, (MR_Integer) 1)));
                                                MR_Box io_combinator__conv34_Res_28;

                                                {
                                                  io_combinator__func_33(((MR_Box) io_combinator__Combine_27), io_combinator__T1_31, io_combinator__T2_33, io_combinator__T3_35, io_combinator__T4_37, io_combinator__T5_39, io_combinator__T6_41, io_combinator__T7_43, io_combinator__T8_45, io_combinator__T9_47, io_combinator__T10_49, io_combinator__T11_51, &io_combinator__conv34_Res_28);
                                                }
                                                *io_combinator__Res_28 = ((MR_Word) io_combinator__conv34_Res_28);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_10_14_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_70,
  MR_Word io_combinator__TypeInfo_for_T2_71,
  MR_Word io_combinator__TypeInfo_for_T3_72,
  MR_Word io_combinator__TypeInfo_for_T4_73,
  MR_Word io_combinator__TypeInfo_for_T5_74,
  MR_Word io_combinator__TypeInfo_for_T6_75,
  MR_Word io_combinator__TypeInfo_for_T7_76,
  MR_Word io_combinator__TypeInfo_for_T8_77,
  MR_Word io_combinator__TypeInfo_for_T9_78,
  MR_Word io_combinator__TypeInfo_for_T10_79,
  MR_Word io_combinator__TypeInfo_for_T_80,
  MR_Word io_combinator__P1_15,
  MR_Word io_combinator__P2_16,
  MR_Word io_combinator__P3_17,
  MR_Word io_combinator__P4_18,
  MR_Word io_combinator__P5_19,
  MR_Word io_combinator__P6_20,
  MR_Word io_combinator__P7_21,
  MR_Word io_combinator__P8_22,
  MR_Word io_combinator__P9_23,
  MR_Word io_combinator__P10_24,
  MR_Word io_combinator__Combine_25,
  MR_Word * io_combinator__Res_26)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_28;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_15, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_28;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_51_51;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_15), &io_combinator__conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_51_51);
    }
    io_combinator__Res1_28 = ((MR_Word) io_combinator__conv2_Res1_28);
    if (((MR_tag((MR_Word) io_combinator__Res1_28)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_26 = io_combinator__Res1_28;
    else
      {
        MR_Box io_combinator__T1_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_28, (MR_Integer) 0));
        MR_Word io_combinator__Res2_30;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_16, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_30;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_52_52;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_16), &io_combinator__conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_52_52);
        }
        io_combinator__Res2_30 = ((MR_Word) io_combinator__conv5_Res2_30);
        if (((MR_tag((MR_Word) io_combinator__Res2_30)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_26 = io_combinator__Res2_30;
        else
          {
            MR_Box io_combinator__T2_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_30, (MR_Integer) 0));
            MR_Word io_combinator__Res3_32;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_17, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_32;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_53_53;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_17), &io_combinator__conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_53_53);
            }
            io_combinator__Res3_32 = ((MR_Word) io_combinator__conv8_Res3_32);
            if (((MR_tag((MR_Word) io_combinator__Res3_32)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_26 = io_combinator__Res3_32;
            else
              {
                MR_Box io_combinator__T3_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_32, (MR_Integer) 0));
                MR_Word io_combinator__Res4_34;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_18, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_34;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_54_54;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_18), &io_combinator__conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_54_54);
                }
                io_combinator__Res4_34 = ((MR_Word) io_combinator__conv11_Res4_34);
                if (((MR_tag((MR_Word) io_combinator__Res4_34)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_26 = io_combinator__Res4_34;
                else
                  {
                    MR_Box io_combinator__T4_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_34, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_36;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_19, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_36;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_55_55;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_19), &io_combinator__conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_55_55);
                    }
                    io_combinator__Res5_36 = ((MR_Word) io_combinator__conv14_Res5_36);
                    if (((MR_tag((MR_Word) io_combinator__Res5_36)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_26 = io_combinator__Res5_36;
                    else
                      {
                        MR_Box io_combinator__T5_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_36, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_38;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_20, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_38;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_56_56;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_20), &io_combinator__conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_56_56);
                        }
                        io_combinator__Res6_38 = ((MR_Word) io_combinator__conv17_Res6_38);
                        if (((MR_tag((MR_Word) io_combinator__Res6_38)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_26 = io_combinator__Res6_38;
                        else
                          {
                            MR_Box io_combinator__T6_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_38, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_40;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_21, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_40;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_57_57;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_21), &io_combinator__conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_57_57);
                            }
                            io_combinator__Res7_40 = ((MR_Word) io_combinator__conv20_Res7_40);
                            if (((MR_tag((MR_Word) io_combinator__Res7_40)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_26 = io_combinator__Res7_40;
                            else
                              {
                                MR_Box io_combinator__T7_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_40, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_42;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_22, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_42;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_58_58;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_22), &io_combinator__conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_58_58);
                                }
                                io_combinator__Res8_42 = ((MR_Word) io_combinator__conv23_Res8_42);
                                if (((MR_tag((MR_Word) io_combinator__Res8_42)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_26 = io_combinator__Res8_42;
                                else
                                  {
                                    MR_Box io_combinator__T8_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_42, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_44;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_23, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_44;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_59_59;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_23), &io_combinator__conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_59_59);
                                    }
                                    io_combinator__Res9_44 = ((MR_Word) io_combinator__conv26_Res9_44);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_44)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_26 = io_combinator__Res9_44;
                                    else
                                      {
                                        MR_Box io_combinator__T9_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_44, (MR_Integer) 0));
                                        MR_Word io_combinator__Res10_46;
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_24, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv29_Res10_46;
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_50;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_24), &io_combinator__conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_50);
                                        }
                                        io_combinator__Res10_46 = ((MR_Word) io_combinator__conv29_Res10_46);
                                        if (((MR_tag((MR_Word) io_combinator__Res10_46)) == (MR_mktag((MR_Integer) 1))))
                                          *io_combinator__Res_26 = io_combinator__Res10_46;
                                        else
                                          {
                                            MR_Box io_combinator__T10_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_46, (MR_Integer) 0));
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_25, (MR_Integer) 1)));
                                            MR_Box io_combinator__conv31_Res_26;

                                            {
                                              io_combinator__func_30(((MR_Box) io_combinator__Combine_25), io_combinator__T1_29, io_combinator__T2_31, io_combinator__T3_33, io_combinator__T4_35, io_combinator__T5_37, io_combinator__T6_39, io_combinator__T7_41, io_combinator__T8_43, io_combinator__T9_45, io_combinator__T10_47, &io_combinator__conv31_Res_26);
                                            }
                                            *io_combinator__Res_26 = ((MR_Word) io_combinator__conv31_Res_26);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_9_13_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_64,
  MR_Word io_combinator__TypeInfo_for_T2_65,
  MR_Word io_combinator__TypeInfo_for_T3_66,
  MR_Word io_combinator__TypeInfo_for_T4_67,
  MR_Word io_combinator__TypeInfo_for_T5_68,
  MR_Word io_combinator__TypeInfo_for_T6_69,
  MR_Word io_combinator__TypeInfo_for_T7_70,
  MR_Word io_combinator__TypeInfo_for_T8_71,
  MR_Word io_combinator__TypeInfo_for_T9_72,
  MR_Word io_combinator__TypeInfo_for_T_73,
  MR_Word io_combinator__P1_14,
  MR_Word io_combinator__P2_15,
  MR_Word io_combinator__P3_16,
  MR_Word io_combinator__P4_17,
  MR_Word io_combinator__P5_18,
  MR_Word io_combinator__P6_19,
  MR_Word io_combinator__P7_20,
  MR_Word io_combinator__P8_21,
  MR_Word io_combinator__P9_22,
  MR_Word io_combinator__Combine_23,
  MR_Word * io_combinator__Res_24)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_26;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_14, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_26;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_47_47;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_14), &io_combinator__conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_47_47);
    }
    io_combinator__Res1_26 = ((MR_Word) io_combinator__conv2_Res1_26);
    if (((MR_tag((MR_Word) io_combinator__Res1_26)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_24 = io_combinator__Res1_26;
    else
      {
        MR_Box io_combinator__T1_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_26, (MR_Integer) 0));
        MR_Word io_combinator__Res2_28;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_15, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_28;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_48_48;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_15), &io_combinator__conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_48_48);
        }
        io_combinator__Res2_28 = ((MR_Word) io_combinator__conv5_Res2_28);
        if (((MR_tag((MR_Word) io_combinator__Res2_28)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_24 = io_combinator__Res2_28;
        else
          {
            MR_Box io_combinator__T2_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_28, (MR_Integer) 0));
            MR_Word io_combinator__Res3_30;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_16, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_30;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_49_49;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_16), &io_combinator__conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_49_49);
            }
            io_combinator__Res3_30 = ((MR_Word) io_combinator__conv8_Res3_30);
            if (((MR_tag((MR_Word) io_combinator__Res3_30)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_24 = io_combinator__Res3_30;
            else
              {
                MR_Box io_combinator__T3_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_30, (MR_Integer) 0));
                MR_Word io_combinator__Res4_32;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_17, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_32;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_50_50;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_17), &io_combinator__conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_50_50);
                }
                io_combinator__Res4_32 = ((MR_Word) io_combinator__conv11_Res4_32);
                if (((MR_tag((MR_Word) io_combinator__Res4_32)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_24 = io_combinator__Res4_32;
                else
                  {
                    MR_Box io_combinator__T4_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_32, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_34;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_18, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_34;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_51_51;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_18), &io_combinator__conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_51_51);
                    }
                    io_combinator__Res5_34 = ((MR_Word) io_combinator__conv14_Res5_34);
                    if (((MR_tag((MR_Word) io_combinator__Res5_34)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_24 = io_combinator__Res5_34;
                    else
                      {
                        MR_Box io_combinator__T5_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_34, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_36;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_19, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_36;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_52_52;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_19), &io_combinator__conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_52_52);
                        }
                        io_combinator__Res6_36 = ((MR_Word) io_combinator__conv17_Res6_36);
                        if (((MR_tag((MR_Word) io_combinator__Res6_36)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_24 = io_combinator__Res6_36;
                        else
                          {
                            MR_Box io_combinator__T6_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_36, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_38;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_20, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_38;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_53_53;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_20), &io_combinator__conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_53_53);
                            }
                            io_combinator__Res7_38 = ((MR_Word) io_combinator__conv20_Res7_38);
                            if (((MR_tag((MR_Word) io_combinator__Res7_38)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_24 = io_combinator__Res7_38;
                            else
                              {
                                MR_Box io_combinator__T7_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_38, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_40;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_21, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_40;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_54_54;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_21), &io_combinator__conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_54_54);
                                }
                                io_combinator__Res8_40 = ((MR_Word) io_combinator__conv23_Res8_40);
                                if (((MR_tag((MR_Word) io_combinator__Res8_40)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_24 = io_combinator__Res8_40;
                                else
                                  {
                                    MR_Box io_combinator__T8_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_40, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_42;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_22, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_42;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_46;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_22), &io_combinator__conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_46);
                                    }
                                    io_combinator__Res9_42 = ((MR_Word) io_combinator__conv26_Res9_42);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_42)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_24 = io_combinator__Res9_42;
                                    else
                                      {
                                        MR_Box io_combinator__T9_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_42, (MR_Integer) 0));
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_23, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv28_Res_24;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__Combine_23), io_combinator__T1_27, io_combinator__T2_29, io_combinator__T3_31, io_combinator__T4_33, io_combinator__T5_35, io_combinator__T6_37, io_combinator__T7_39, io_combinator__T8_41, io_combinator__T9_43, &io_combinator__conv28_Res_24);
                                        }
                                        *io_combinator__Res_24 = ((MR_Word) io_combinator__conv28_Res_24);
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_8_12_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_58,
  MR_Word io_combinator__TypeInfo_for_T2_59,
  MR_Word io_combinator__TypeInfo_for_T3_60,
  MR_Word io_combinator__TypeInfo_for_T4_61,
  MR_Word io_combinator__TypeInfo_for_T5_62,
  MR_Word io_combinator__TypeInfo_for_T6_63,
  MR_Word io_combinator__TypeInfo_for_T7_64,
  MR_Word io_combinator__TypeInfo_for_T8_65,
  MR_Word io_combinator__TypeInfo_for_T_66,
  MR_Word io_combinator__P1_13,
  MR_Word io_combinator__P2_14,
  MR_Word io_combinator__P3_15,
  MR_Word io_combinator__P4_16,
  MR_Word io_combinator__P5_17,
  MR_Word io_combinator__P6_18,
  MR_Word io_combinator__P7_19,
  MR_Word io_combinator__P8_20,
  MR_Word io_combinator__Combine_21,
  MR_Word * io_combinator__Res_22)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_24;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_13, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_24;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_43_43;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_13), &io_combinator__conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_43_43);
    }
    io_combinator__Res1_24 = ((MR_Word) io_combinator__conv2_Res1_24);
    if (((MR_tag((MR_Word) io_combinator__Res1_24)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_22 = io_combinator__Res1_24;
    else
      {
        MR_Box io_combinator__T1_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_24, (MR_Integer) 0));
        MR_Word io_combinator__Res2_26;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_14, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_26;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_44_44;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_14), &io_combinator__conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_44_44);
        }
        io_combinator__Res2_26 = ((MR_Word) io_combinator__conv5_Res2_26);
        if (((MR_tag((MR_Word) io_combinator__Res2_26)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_22 = io_combinator__Res2_26;
        else
          {
            MR_Box io_combinator__T2_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_26, (MR_Integer) 0));
            MR_Word io_combinator__Res3_28;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_15, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_28;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_45_45;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_15), &io_combinator__conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_45_45);
            }
            io_combinator__Res3_28 = ((MR_Word) io_combinator__conv8_Res3_28);
            if (((MR_tag((MR_Word) io_combinator__Res3_28)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_22 = io_combinator__Res3_28;
            else
              {
                MR_Box io_combinator__T3_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_28, (MR_Integer) 0));
                MR_Word io_combinator__Res4_30;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_16, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_30;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_46_46;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_16), &io_combinator__conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_46_46);
                }
                io_combinator__Res4_30 = ((MR_Word) io_combinator__conv11_Res4_30);
                if (((MR_tag((MR_Word) io_combinator__Res4_30)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_22 = io_combinator__Res4_30;
                else
                  {
                    MR_Box io_combinator__T4_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_30, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_32;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_17, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_32;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_47_47;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_17), &io_combinator__conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_47_47);
                    }
                    io_combinator__Res5_32 = ((MR_Word) io_combinator__conv14_Res5_32);
                    if (((MR_tag((MR_Word) io_combinator__Res5_32)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_22 = io_combinator__Res5_32;
                    else
                      {
                        MR_Box io_combinator__T5_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_32, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_34;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_18, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_34;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_48_48;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_18), &io_combinator__conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_48_48);
                        }
                        io_combinator__Res6_34 = ((MR_Word) io_combinator__conv17_Res6_34);
                        if (((MR_tag((MR_Word) io_combinator__Res6_34)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_22 = io_combinator__Res6_34;
                        else
                          {
                            MR_Box io_combinator__T6_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_34, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_36;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_19, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_36;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_49_49;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_19), &io_combinator__conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_49_49);
                            }
                            io_combinator__Res7_36 = ((MR_Word) io_combinator__conv20_Res7_36);
                            if (((MR_tag((MR_Word) io_combinator__Res7_36)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_22 = io_combinator__Res7_36;
                            else
                              {
                                MR_Box io_combinator__T7_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_36, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_38;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_20, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_38;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_42;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_20), &io_combinator__conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_42);
                                }
                                io_combinator__Res8_38 = ((MR_Word) io_combinator__conv23_Res8_38);
                                if (((MR_tag((MR_Word) io_combinator__Res8_38)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_22 = io_combinator__Res8_38;
                                else
                                  {
                                    MR_Box io_combinator__T8_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_38, (MR_Integer) 0));
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_21, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv25_Res_22;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__Combine_21), io_combinator__T1_25, io_combinator__T2_27, io_combinator__T3_29, io_combinator__T4_31, io_combinator__T5_33, io_combinator__T6_35, io_combinator__T7_37, io_combinator__T8_39, &io_combinator__conv25_Res_22);
                                    }
                                    *io_combinator__Res_22 = ((MR_Word) io_combinator__conv25_Res_22);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_7_11_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_52,
  MR_Word io_combinator__TypeInfo_for_T2_53,
  MR_Word io_combinator__TypeInfo_for_T3_54,
  MR_Word io_combinator__TypeInfo_for_T4_55,
  MR_Word io_combinator__TypeInfo_for_T5_56,
  MR_Word io_combinator__TypeInfo_for_T6_57,
  MR_Word io_combinator__TypeInfo_for_T7_58,
  MR_Word io_combinator__TypeInfo_for_T_59,
  MR_Word io_combinator__P1_12,
  MR_Word io_combinator__P2_13,
  MR_Word io_combinator__P3_14,
  MR_Word io_combinator__P4_15,
  MR_Word io_combinator__P5_16,
  MR_Word io_combinator__P6_17,
  MR_Word io_combinator__P7_18,
  MR_Word io_combinator__Combine_19,
  MR_Word * io_combinator__Res_20)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_22;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_12, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_22;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_39_39;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_12), &io_combinator__conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_39_39);
    }
    io_combinator__Res1_22 = ((MR_Word) io_combinator__conv2_Res1_22);
    if (((MR_tag((MR_Word) io_combinator__Res1_22)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_20 = io_combinator__Res1_22;
    else
      {
        MR_Box io_combinator__T1_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_22, (MR_Integer) 0));
        MR_Word io_combinator__Res2_24;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_13, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_24;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_40_40;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_13), &io_combinator__conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_40_40);
        }
        io_combinator__Res2_24 = ((MR_Word) io_combinator__conv5_Res2_24);
        if (((MR_tag((MR_Word) io_combinator__Res2_24)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_20 = io_combinator__Res2_24;
        else
          {
            MR_Box io_combinator__T2_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_24, (MR_Integer) 0));
            MR_Word io_combinator__Res3_26;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_14, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_26;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_41_41;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_14), &io_combinator__conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_41_41);
            }
            io_combinator__Res3_26 = ((MR_Word) io_combinator__conv8_Res3_26);
            if (((MR_tag((MR_Word) io_combinator__Res3_26)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_20 = io_combinator__Res3_26;
            else
              {
                MR_Box io_combinator__T3_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_26, (MR_Integer) 0));
                MR_Word io_combinator__Res4_28;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_15, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_28;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_42_42;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_15), &io_combinator__conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_42_42);
                }
                io_combinator__Res4_28 = ((MR_Word) io_combinator__conv11_Res4_28);
                if (((MR_tag((MR_Word) io_combinator__Res4_28)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_20 = io_combinator__Res4_28;
                else
                  {
                    MR_Box io_combinator__T4_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_28, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_30;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_16, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_30;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_43_43;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_16), &io_combinator__conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_43_43);
                    }
                    io_combinator__Res5_30 = ((MR_Word) io_combinator__conv14_Res5_30);
                    if (((MR_tag((MR_Word) io_combinator__Res5_30)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_20 = io_combinator__Res5_30;
                    else
                      {
                        MR_Box io_combinator__T5_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_30, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_32;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_17, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_32;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_44_44;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_17), &io_combinator__conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_44_44);
                        }
                        io_combinator__Res6_32 = ((MR_Word) io_combinator__conv17_Res6_32);
                        if (((MR_tag((MR_Word) io_combinator__Res6_32)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_20 = io_combinator__Res6_32;
                        else
                          {
                            MR_Box io_combinator__T6_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_32, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_34;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_18, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_34;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_38;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_18), &io_combinator__conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_38);
                            }
                            io_combinator__Res7_34 = ((MR_Word) io_combinator__conv20_Res7_34);
                            if (((MR_tag((MR_Word) io_combinator__Res7_34)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_20 = io_combinator__Res7_34;
                            else
                              {
                                MR_Box io_combinator__T7_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_34, (MR_Integer) 0));
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_19, (MR_Integer) 1)));
                                MR_Box io_combinator__conv22_Res_20;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__Combine_19), io_combinator__T1_23, io_combinator__T2_25, io_combinator__T3_27, io_combinator__T4_29, io_combinator__T5_31, io_combinator__T6_33, io_combinator__T7_35, &io_combinator__conv22_Res_20);
                                }
                                *io_combinator__Res_20 = ((MR_Word) io_combinator__conv22_Res_20);
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_6_10_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_46,
  MR_Word io_combinator__TypeInfo_for_T2_47,
  MR_Word io_combinator__TypeInfo_for_T3_48,
  MR_Word io_combinator__TypeInfo_for_T4_49,
  MR_Word io_combinator__TypeInfo_for_T5_50,
  MR_Word io_combinator__TypeInfo_for_T6_51,
  MR_Word io_combinator__TypeInfo_for_T_52,
  MR_Word io_combinator__P1_11,
  MR_Word io_combinator__P2_12,
  MR_Word io_combinator__P3_13,
  MR_Word io_combinator__P4_14,
  MR_Word io_combinator__P5_15,
  MR_Word io_combinator__P6_16,
  MR_Word io_combinator__Combine_17,
  MR_Word * io_combinator__Res_18)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_20;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_11, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_20;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_35_35;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_11), &io_combinator__conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_35_35);
    }
    io_combinator__Res1_20 = ((MR_Word) io_combinator__conv2_Res1_20);
    if (((MR_tag((MR_Word) io_combinator__Res1_20)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_18 = io_combinator__Res1_20;
    else
      {
        MR_Box io_combinator__T1_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_20, (MR_Integer) 0));
        MR_Word io_combinator__Res2_22;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_12, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_22;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_36_36;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_12), &io_combinator__conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_36_36);
        }
        io_combinator__Res2_22 = ((MR_Word) io_combinator__conv5_Res2_22);
        if (((MR_tag((MR_Word) io_combinator__Res2_22)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_18 = io_combinator__Res2_22;
        else
          {
            MR_Box io_combinator__T2_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_22, (MR_Integer) 0));
            MR_Word io_combinator__Res3_24;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_13, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_24;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_37_37;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_13), &io_combinator__conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_37_37);
            }
            io_combinator__Res3_24 = ((MR_Word) io_combinator__conv8_Res3_24);
            if (((MR_tag((MR_Word) io_combinator__Res3_24)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_18 = io_combinator__Res3_24;
            else
              {
                MR_Box io_combinator__T3_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_24, (MR_Integer) 0));
                MR_Word io_combinator__Res4_26;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_14, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_26;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_38_38;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_14), &io_combinator__conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_38_38);
                }
                io_combinator__Res4_26 = ((MR_Word) io_combinator__conv11_Res4_26);
                if (((MR_tag((MR_Word) io_combinator__Res4_26)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_18 = io_combinator__Res4_26;
                else
                  {
                    MR_Box io_combinator__T4_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_26, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_28;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_15, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_28;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_39_39;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_15), &io_combinator__conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_39_39);
                    }
                    io_combinator__Res5_28 = ((MR_Word) io_combinator__conv14_Res5_28);
                    if (((MR_tag((MR_Word) io_combinator__Res5_28)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_18 = io_combinator__Res5_28;
                    else
                      {
                        MR_Box io_combinator__T5_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_28, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_30;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_16, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_30;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_34;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_16), &io_combinator__conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_34);
                        }
                        io_combinator__Res6_30 = ((MR_Word) io_combinator__conv17_Res6_30);
                        if (((MR_tag((MR_Word) io_combinator__Res6_30)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_18 = io_combinator__Res6_30;
                        else
                          {
                            MR_Box io_combinator__T6_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_30, (MR_Integer) 0));
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_17, (MR_Integer) 1)));
                            MR_Box io_combinator__conv19_Res_18;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__Combine_17), io_combinator__T1_21, io_combinator__T2_23, io_combinator__T3_25, io_combinator__T4_27, io_combinator__T5_29, io_combinator__T6_31, &io_combinator__conv19_Res_18);
                            }
                            *io_combinator__Res_18 = ((MR_Word) io_combinator__conv19_Res_18);
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_5_9_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_40,
  MR_Word io_combinator__TypeInfo_for_T2_41,
  MR_Word io_combinator__TypeInfo_for_T3_42,
  MR_Word io_combinator__TypeInfo_for_T4_43,
  MR_Word io_combinator__TypeInfo_for_T5_44,
  MR_Word io_combinator__TypeInfo_for_T_45,
  MR_Word io_combinator__P1_10,
  MR_Word io_combinator__P2_11,
  MR_Word io_combinator__P3_12,
  MR_Word io_combinator__P4_13,
  MR_Word io_combinator__P5_14,
  MR_Word io_combinator__Combine_15,
  MR_Word * io_combinator__Res_16)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_18;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_10, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_18;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_31_31;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_10), &io_combinator__conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_31_31);
    }
    io_combinator__Res1_18 = ((MR_Word) io_combinator__conv2_Res1_18);
    if (((MR_tag((MR_Word) io_combinator__Res1_18)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_16 = io_combinator__Res1_18;
    else
      {
        MR_Box io_combinator__T1_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_18, (MR_Integer) 0));
        MR_Word io_combinator__Res2_20;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_11, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_20;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_32_32;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_11), &io_combinator__conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_32_32);
        }
        io_combinator__Res2_20 = ((MR_Word) io_combinator__conv5_Res2_20);
        if (((MR_tag((MR_Word) io_combinator__Res2_20)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_16 = io_combinator__Res2_20;
        else
          {
            MR_Box io_combinator__T2_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_20, (MR_Integer) 0));
            MR_Word io_combinator__Res3_22;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_12, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_22;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_33_33;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_12), &io_combinator__conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_33_33);
            }
            io_combinator__Res3_22 = ((MR_Word) io_combinator__conv8_Res3_22);
            if (((MR_tag((MR_Word) io_combinator__Res3_22)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_16 = io_combinator__Res3_22;
            else
              {
                MR_Box io_combinator__T3_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_22, (MR_Integer) 0));
                MR_Word io_combinator__Res4_24;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_13, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_24;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_34_34;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_13), &io_combinator__conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_34_34);
                }
                io_combinator__Res4_24 = ((MR_Word) io_combinator__conv11_Res4_24);
                if (((MR_tag((MR_Word) io_combinator__Res4_24)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_16 = io_combinator__Res4_24;
                else
                  {
                    MR_Box io_combinator__T4_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_24, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_26;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_14, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_26;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_30;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_14), &io_combinator__conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_30);
                    }
                    io_combinator__Res5_26 = ((MR_Word) io_combinator__conv14_Res5_26);
                    if (((MR_tag((MR_Word) io_combinator__Res5_26)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_16 = io_combinator__Res5_26;
                    else
                      {
                        MR_Box io_combinator__T5_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_26, (MR_Integer) 0));
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_15, (MR_Integer) 1)));
                        MR_Box io_combinator__conv16_Res_16;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__Combine_15), io_combinator__T1_19, io_combinator__T2_21, io_combinator__T3_23, io_combinator__T4_25, io_combinator__T5_27, &io_combinator__conv16_Res_16);
                        }
                        *io_combinator__Res_16 = ((MR_Word) io_combinator__conv16_Res_16);
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_4_8_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_34,
  MR_Word io_combinator__TypeInfo_for_T2_35,
  MR_Word io_combinator__TypeInfo_for_T3_36,
  MR_Word io_combinator__TypeInfo_for_T4_37,
  MR_Word io_combinator__TypeInfo_for_T_38,
  MR_Word io_combinator__P1_9,
  MR_Word io_combinator__P2_10,
  MR_Word io_combinator__P3_11,
  MR_Word io_combinator__P4_12,
  MR_Word io_combinator__Combine_13,
  MR_Word * io_combinator__Res_14)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_16;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_9, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_16;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_27_27;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_9), &io_combinator__conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_27_27);
    }
    io_combinator__Res1_16 = ((MR_Word) io_combinator__conv2_Res1_16);
    if (((MR_tag((MR_Word) io_combinator__Res1_16)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_14 = io_combinator__Res1_16;
    else
      {
        MR_Box io_combinator__T1_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_16, (MR_Integer) 0));
        MR_Word io_combinator__Res2_18;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_10, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_18;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_28_28;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_10), &io_combinator__conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_28_28);
        }
        io_combinator__Res2_18 = ((MR_Word) io_combinator__conv5_Res2_18);
        if (((MR_tag((MR_Word) io_combinator__Res2_18)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_14 = io_combinator__Res2_18;
        else
          {
            MR_Box io_combinator__T2_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_18, (MR_Integer) 0));
            MR_Word io_combinator__Res3_20;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_11, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_20;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_29_29;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_11), &io_combinator__conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_29_29);
            }
            io_combinator__Res3_20 = ((MR_Word) io_combinator__conv8_Res3_20);
            if (((MR_tag((MR_Word) io_combinator__Res3_20)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_14 = io_combinator__Res3_20;
            else
              {
                MR_Box io_combinator__T3_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_20, (MR_Integer) 0));
                MR_Word io_combinator__Res4_22;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_12, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_22;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_26;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_12), &io_combinator__conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_26);
                }
                io_combinator__Res4_22 = ((MR_Word) io_combinator__conv11_Res4_22);
                if (((MR_tag((MR_Word) io_combinator__Res4_22)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_14 = io_combinator__Res4_22;
                else
                  {
                    MR_Box io_combinator__T4_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_22, (MR_Integer) 0));
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_13, (MR_Integer) 1)));
                    MR_Box io_combinator__conv13_Res_14;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__Combine_13), io_combinator__T1_17, io_combinator__T2_19, io_combinator__T3_21, io_combinator__T4_23, &io_combinator__conv13_Res_14);
                    }
                    *io_combinator__Res_14 = ((MR_Word) io_combinator__conv13_Res_14);
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_3_7_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_28,
  MR_Word io_combinator__TypeInfo_for_T2_29,
  MR_Word io_combinator__TypeInfo_for_T3_30,
  MR_Word io_combinator__TypeInfo_for_T_31,
  MR_Word io_combinator__P1_8,
  MR_Word io_combinator__P2_9,
  MR_Word io_combinator__P3_10,
  MR_Word io_combinator__Combine_11,
  MR_Word * io_combinator__Res_12)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_14;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_8, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_14;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_23_23;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_8), &io_combinator__conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_23_23);
    }
    io_combinator__Res1_14 = ((MR_Word) io_combinator__conv2_Res1_14);
    if (((MR_tag((MR_Word) io_combinator__Res1_14)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_12 = io_combinator__Res1_14;
    else
      {
        MR_Box io_combinator__T1_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_14, (MR_Integer) 0));
        MR_Word io_combinator__Res2_16;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_9, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_16;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_24_24;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_9), &io_combinator__conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_24_24);
        }
        io_combinator__Res2_16 = ((MR_Word) io_combinator__conv5_Res2_16);
        if (((MR_tag((MR_Word) io_combinator__Res2_16)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_12 = io_combinator__Res2_16;
        else
          {
            MR_Box io_combinator__T2_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_16, (MR_Integer) 0));
            MR_Word io_combinator__Res3_18;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_10, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_18;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_22;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_10), &io_combinator__conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_22);
            }
            io_combinator__Res3_18 = ((MR_Word) io_combinator__conv8_Res3_18);
            if (((MR_tag((MR_Word) io_combinator__Res3_18)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_12 = io_combinator__Res3_18;
            else
              {
                MR_Box io_combinator__T3_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_18, (MR_Integer) 0));
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_11, (MR_Integer) 1)));
                MR_Box io_combinator__conv10_Res_12;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__Combine_11), io_combinator__T1_15, io_combinator__T2_17, io_combinator__T3_19, &io_combinator__conv10_Res_12);
                }
                *io_combinator__Res_12 = ((MR_Word) io_combinator__conv10_Res_12);
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_2_6_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_22,
  MR_Word io_combinator__TypeInfo_for_T2_23,
  MR_Word io_combinator__TypeInfo_for_T_24,
  MR_Word io_combinator__P1_7,
  MR_Word io_combinator__P2_8,
  MR_Word io_combinator__Combine_9,
  MR_Word * io_combinator__Res_10)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_12;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_7, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_12;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_19_19;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_7), &io_combinator__conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_19_19);
    }
    io_combinator__Res1_12 = ((MR_Word) io_combinator__conv2_Res1_12);
    if (((MR_tag((MR_Word) io_combinator__Res1_12)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_10 = io_combinator__Res1_12;
    else
      {
        MR_Box io_combinator__T1_13 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_12, (MR_Integer) 0));
        MR_Word io_combinator__Res2_14;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_8, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_14;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_18;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_8), &io_combinator__conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_18);
        }
        io_combinator__Res2_14 = ((MR_Word) io_combinator__conv5_Res2_14);
        if (((MR_tag((MR_Word) io_combinator__Res2_14)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_10 = io_combinator__Res2_14;
        else
          {
            MR_Box io_combinator__T2_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_14, (MR_Integer) 0));
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_9, (MR_Integer) 1)));
            MR_Box io_combinator__conv7_Res_10;

            {
              io_combinator__func_6(((MR_Box) io_combinator__Combine_9), io_combinator__T1_13, io_combinator__T2_15, &io_combinator__conv7_Res_10);
            }
            *io_combinator__Res_10 = ((MR_Word) io_combinator__conv7_Res_10);
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_11_15_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_76,
  MR_Word io_combinator__TypeInfo_for_T2_77,
  MR_Word io_combinator__TypeInfo_for_T3_78,
  MR_Word io_combinator__TypeInfo_for_T4_79,
  MR_Word io_combinator__TypeInfo_for_T5_80,
  MR_Word io_combinator__TypeInfo_for_T6_81,
  MR_Word io_combinator__TypeInfo_for_T7_82,
  MR_Word io_combinator__TypeInfo_for_T8_83,
  MR_Word io_combinator__TypeInfo_for_T9_84,
  MR_Word io_combinator__TypeInfo_for_T10_85,
  MR_Word io_combinator__TypeInfo_for_T11_86,
  MR_Word io_combinator__TypeInfo_for_T_87,
  MR_Word io_combinator__P1_16,
  MR_Word io_combinator__P2_17,
  MR_Word io_combinator__P3_18,
  MR_Word io_combinator__P4_19,
  MR_Word io_combinator__P5_20,
  MR_Word io_combinator__P6_21,
  MR_Word io_combinator__P7_22,
  MR_Word io_combinator__P8_23,
  MR_Word io_combinator__P9_24,
  MR_Word io_combinator__P10_25,
  MR_Word io_combinator__P11_26,
  MR_Word io_combinator__Combine_27,
  MR_Word * io_combinator__Res_28)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_30;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_16, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_30;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_55_55;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_16), &io_combinator__conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_55_55);
    }
    io_combinator__Res1_30 = ((MR_Word) io_combinator__conv2_Res1_30);
    if (((MR_tag((MR_Word) io_combinator__Res1_30)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_28 = io_combinator__Res1_30;
    else
      {
        MR_Box io_combinator__T1_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_30, (MR_Integer) 0));
        MR_Word io_combinator__Res2_32;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_17, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_32;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_56_56;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_17), &io_combinator__conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_56_56);
        }
        io_combinator__Res2_32 = ((MR_Word) io_combinator__conv5_Res2_32);
        if (((MR_tag((MR_Word) io_combinator__Res2_32)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_28 = io_combinator__Res2_32;
        else
          {
            MR_Box io_combinator__T2_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_32, (MR_Integer) 0));
            MR_Word io_combinator__Res3_34;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_18, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_34;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_57_57;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_18), &io_combinator__conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_57_57);
            }
            io_combinator__Res3_34 = ((MR_Word) io_combinator__conv8_Res3_34);
            if (((MR_tag((MR_Word) io_combinator__Res3_34)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_28 = io_combinator__Res3_34;
            else
              {
                MR_Box io_combinator__T3_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_34, (MR_Integer) 0));
                MR_Word io_combinator__Res4_36;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_19, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_36;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_58_58;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_19), &io_combinator__conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_58_58);
                }
                io_combinator__Res4_36 = ((MR_Word) io_combinator__conv11_Res4_36);
                if (((MR_tag((MR_Word) io_combinator__Res4_36)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_28 = io_combinator__Res4_36;
                else
                  {
                    MR_Box io_combinator__T4_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_36, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_38;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_20, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_38;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_59_59;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_20), &io_combinator__conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_59_59);
                    }
                    io_combinator__Res5_38 = ((MR_Word) io_combinator__conv14_Res5_38);
                    if (((MR_tag((MR_Word) io_combinator__Res5_38)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_28 = io_combinator__Res5_38;
                    else
                      {
                        MR_Box io_combinator__T5_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_38, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_40;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_21, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_40;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_60_60;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_21), &io_combinator__conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_60_60);
                        }
                        io_combinator__Res6_40 = ((MR_Word) io_combinator__conv17_Res6_40);
                        if (((MR_tag((MR_Word) io_combinator__Res6_40)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_28 = io_combinator__Res6_40;
                        else
                          {
                            MR_Box io_combinator__T6_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_40, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_42;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_22, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_42;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_61_61;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_22), &io_combinator__conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_61_61);
                            }
                            io_combinator__Res7_42 = ((MR_Word) io_combinator__conv20_Res7_42);
                            if (((MR_tag((MR_Word) io_combinator__Res7_42)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_28 = io_combinator__Res7_42;
                            else
                              {
                                MR_Box io_combinator__T7_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_42, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_44;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_23, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_44;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_62_62;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_23), &io_combinator__conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_62_62);
                                }
                                io_combinator__Res8_44 = ((MR_Word) io_combinator__conv23_Res8_44);
                                if (((MR_tag((MR_Word) io_combinator__Res8_44)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_28 = io_combinator__Res8_44;
                                else
                                  {
                                    MR_Box io_combinator__T8_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_44, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_46;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_24, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_46;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_63_63;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_24), &io_combinator__conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_63_63);
                                    }
                                    io_combinator__Res9_46 = ((MR_Word) io_combinator__conv26_Res9_46);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_46)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_28 = io_combinator__Res9_46;
                                    else
                                      {
                                        MR_Box io_combinator__T9_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_46, (MR_Integer) 0));
                                        MR_Word io_combinator__Res10_48;
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_25, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv29_Res10_48;
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_64_64;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_25), &io_combinator__conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_64_64);
                                        }
                                        io_combinator__Res10_48 = ((MR_Word) io_combinator__conv29_Res10_48);
                                        if (((MR_tag((MR_Word) io_combinator__Res10_48)) == (MR_mktag((MR_Integer) 1))))
                                          *io_combinator__Res_28 = io_combinator__Res10_48;
                                        else
                                          {
                                            MR_Box io_combinator__T10_49 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_48, (MR_Integer) 0));
                                            MR_Word io_combinator__Res11_50;
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_26, (MR_Integer) 1)));
                                            MR_Box io_combinator__conv32_Res11_50;
                                            MR_Box io_combinator__conv31_STATE_VARIABLE_IO_54;

                                            {
                                              io_combinator__func_30(((MR_Box) io_combinator__P11_26), &io_combinator__conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_54);
                                            }
                                            io_combinator__Res11_50 = ((MR_Word) io_combinator__conv32_Res11_50);
                                            if (((MR_tag((MR_Word) io_combinator__Res11_50)) == (MR_mktag((MR_Integer) 1))))
                                              *io_combinator__Res_28 = io_combinator__Res11_50;
                                            else
                                              {
                                                MR_Box io_combinator__T11_51 = (MR_hl_field(MR_mktag(0), io_combinator__Res11_50, (MR_Integer) 0));
                                                void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_27, (MR_Integer) 1)));
                                                MR_Box io_combinator__conv34_Res_28;

                                                {
                                                  io_combinator__func_33(((MR_Box) io_combinator__Combine_27), io_combinator__T1_31, io_combinator__T2_33, io_combinator__T3_35, io_combinator__T4_37, io_combinator__T5_39, io_combinator__T6_41, io_combinator__T7_43, io_combinator__T8_45, io_combinator__T9_47, io_combinator__T10_49, io_combinator__T11_51, &io_combinator__conv34_Res_28);
                                                }
                                                *io_combinator__Res_28 = ((MR_Word) io_combinator__conv34_Res_28);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_10_14_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_70,
  MR_Word io_combinator__TypeInfo_for_T2_71,
  MR_Word io_combinator__TypeInfo_for_T3_72,
  MR_Word io_combinator__TypeInfo_for_T4_73,
  MR_Word io_combinator__TypeInfo_for_T5_74,
  MR_Word io_combinator__TypeInfo_for_T6_75,
  MR_Word io_combinator__TypeInfo_for_T7_76,
  MR_Word io_combinator__TypeInfo_for_T8_77,
  MR_Word io_combinator__TypeInfo_for_T9_78,
  MR_Word io_combinator__TypeInfo_for_T10_79,
  MR_Word io_combinator__TypeInfo_for_T_80,
  MR_Word io_combinator__P1_15,
  MR_Word io_combinator__P2_16,
  MR_Word io_combinator__P3_17,
  MR_Word io_combinator__P4_18,
  MR_Word io_combinator__P5_19,
  MR_Word io_combinator__P6_20,
  MR_Word io_combinator__P7_21,
  MR_Word io_combinator__P8_22,
  MR_Word io_combinator__P9_23,
  MR_Word io_combinator__P10_24,
  MR_Word io_combinator__Combine_25,
  MR_Word * io_combinator__Res_26)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_28;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_15, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_28;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_51_51;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_15), &io_combinator__conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_51_51);
    }
    io_combinator__Res1_28 = ((MR_Word) io_combinator__conv2_Res1_28);
    if (((MR_tag((MR_Word) io_combinator__Res1_28)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_26 = io_combinator__Res1_28;
    else
      {
        MR_Box io_combinator__T1_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_28, (MR_Integer) 0));
        MR_Word io_combinator__Res2_30;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_16, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_30;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_52_52;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_16), &io_combinator__conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_52_52);
        }
        io_combinator__Res2_30 = ((MR_Word) io_combinator__conv5_Res2_30);
        if (((MR_tag((MR_Word) io_combinator__Res2_30)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_26 = io_combinator__Res2_30;
        else
          {
            MR_Box io_combinator__T2_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_30, (MR_Integer) 0));
            MR_Word io_combinator__Res3_32;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_17, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_32;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_53_53;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_17), &io_combinator__conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_53_53);
            }
            io_combinator__Res3_32 = ((MR_Word) io_combinator__conv8_Res3_32);
            if (((MR_tag((MR_Word) io_combinator__Res3_32)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_26 = io_combinator__Res3_32;
            else
              {
                MR_Box io_combinator__T3_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_32, (MR_Integer) 0));
                MR_Word io_combinator__Res4_34;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_18, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_34;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_54_54;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_18), &io_combinator__conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_54_54);
                }
                io_combinator__Res4_34 = ((MR_Word) io_combinator__conv11_Res4_34);
                if (((MR_tag((MR_Word) io_combinator__Res4_34)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_26 = io_combinator__Res4_34;
                else
                  {
                    MR_Box io_combinator__T4_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_34, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_36;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_19, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_36;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_55_55;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_19), &io_combinator__conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_55_55);
                    }
                    io_combinator__Res5_36 = ((MR_Word) io_combinator__conv14_Res5_36);
                    if (((MR_tag((MR_Word) io_combinator__Res5_36)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_26 = io_combinator__Res5_36;
                    else
                      {
                        MR_Box io_combinator__T5_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_36, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_38;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_20, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_38;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_56_56;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_20), &io_combinator__conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_56_56);
                        }
                        io_combinator__Res6_38 = ((MR_Word) io_combinator__conv17_Res6_38);
                        if (((MR_tag((MR_Word) io_combinator__Res6_38)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_26 = io_combinator__Res6_38;
                        else
                          {
                            MR_Box io_combinator__T6_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_38, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_40;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_21, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_40;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_57_57;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_21), &io_combinator__conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_57_57);
                            }
                            io_combinator__Res7_40 = ((MR_Word) io_combinator__conv20_Res7_40);
                            if (((MR_tag((MR_Word) io_combinator__Res7_40)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_26 = io_combinator__Res7_40;
                            else
                              {
                                MR_Box io_combinator__T7_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_40, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_42;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_22, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_42;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_58_58;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_22), &io_combinator__conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_58_58);
                                }
                                io_combinator__Res8_42 = ((MR_Word) io_combinator__conv23_Res8_42);
                                if (((MR_tag((MR_Word) io_combinator__Res8_42)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_26 = io_combinator__Res8_42;
                                else
                                  {
                                    MR_Box io_combinator__T8_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_42, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_44;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_23, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_44;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_59_59;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_23), &io_combinator__conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_59_59);
                                    }
                                    io_combinator__Res9_44 = ((MR_Word) io_combinator__conv26_Res9_44);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_44)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_26 = io_combinator__Res9_44;
                                    else
                                      {
                                        MR_Box io_combinator__T9_45 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_44, (MR_Integer) 0));
                                        MR_Word io_combinator__Res10_46;
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_24, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv29_Res10_46;
                                        MR_Box io_combinator__conv28_STATE_VARIABLE_IO_50;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__P10_24), &io_combinator__conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_50);
                                        }
                                        io_combinator__Res10_46 = ((MR_Word) io_combinator__conv29_Res10_46);
                                        if (((MR_tag((MR_Word) io_combinator__Res10_46)) == (MR_mktag((MR_Integer) 1))))
                                          *io_combinator__Res_26 = io_combinator__Res10_46;
                                        else
                                          {
                                            MR_Box io_combinator__T10_47 = (MR_hl_field(MR_mktag(0), io_combinator__Res10_46, (MR_Integer) 0));
                                            void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_25, (MR_Integer) 1)));
                                            MR_Box io_combinator__conv31_Res_26;

                                            {
                                              io_combinator__func_30(((MR_Box) io_combinator__Combine_25), io_combinator__T1_29, io_combinator__T2_31, io_combinator__T3_33, io_combinator__T4_35, io_combinator__T5_37, io_combinator__T6_39, io_combinator__T7_41, io_combinator__T8_43, io_combinator__T9_45, io_combinator__T10_47, &io_combinator__conv31_Res_26);
                                            }
                                            *io_combinator__Res_26 = ((MR_Word) io_combinator__conv31_Res_26);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_9_13_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_64,
  MR_Word io_combinator__TypeInfo_for_T2_65,
  MR_Word io_combinator__TypeInfo_for_T3_66,
  MR_Word io_combinator__TypeInfo_for_T4_67,
  MR_Word io_combinator__TypeInfo_for_T5_68,
  MR_Word io_combinator__TypeInfo_for_T6_69,
  MR_Word io_combinator__TypeInfo_for_T7_70,
  MR_Word io_combinator__TypeInfo_for_T8_71,
  MR_Word io_combinator__TypeInfo_for_T9_72,
  MR_Word io_combinator__TypeInfo_for_T_73,
  MR_Word io_combinator__P1_14,
  MR_Word io_combinator__P2_15,
  MR_Word io_combinator__P3_16,
  MR_Word io_combinator__P4_17,
  MR_Word io_combinator__P5_18,
  MR_Word io_combinator__P6_19,
  MR_Word io_combinator__P7_20,
  MR_Word io_combinator__P8_21,
  MR_Word io_combinator__P9_22,
  MR_Word io_combinator__Combine_23,
  MR_Word * io_combinator__Res_24)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_26;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_14, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_26;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_47_47;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_14), &io_combinator__conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_47_47);
    }
    io_combinator__Res1_26 = ((MR_Word) io_combinator__conv2_Res1_26);
    if (((MR_tag((MR_Word) io_combinator__Res1_26)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_24 = io_combinator__Res1_26;
    else
      {
        MR_Box io_combinator__T1_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_26, (MR_Integer) 0));
        MR_Word io_combinator__Res2_28;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_15, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_28;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_48_48;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_15), &io_combinator__conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_48_48);
        }
        io_combinator__Res2_28 = ((MR_Word) io_combinator__conv5_Res2_28);
        if (((MR_tag((MR_Word) io_combinator__Res2_28)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_24 = io_combinator__Res2_28;
        else
          {
            MR_Box io_combinator__T2_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_28, (MR_Integer) 0));
            MR_Word io_combinator__Res3_30;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_16, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_30;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_49_49;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_16), &io_combinator__conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_49_49);
            }
            io_combinator__Res3_30 = ((MR_Word) io_combinator__conv8_Res3_30);
            if (((MR_tag((MR_Word) io_combinator__Res3_30)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_24 = io_combinator__Res3_30;
            else
              {
                MR_Box io_combinator__T3_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_30, (MR_Integer) 0));
                MR_Word io_combinator__Res4_32;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_17, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_32;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_50_50;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_17), &io_combinator__conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_50_50);
                }
                io_combinator__Res4_32 = ((MR_Word) io_combinator__conv11_Res4_32);
                if (((MR_tag((MR_Word) io_combinator__Res4_32)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_24 = io_combinator__Res4_32;
                else
                  {
                    MR_Box io_combinator__T4_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_32, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_34;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_18, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_34;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_51_51;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_18), &io_combinator__conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_51_51);
                    }
                    io_combinator__Res5_34 = ((MR_Word) io_combinator__conv14_Res5_34);
                    if (((MR_tag((MR_Word) io_combinator__Res5_34)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_24 = io_combinator__Res5_34;
                    else
                      {
                        MR_Box io_combinator__T5_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_34, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_36;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_19, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_36;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_52_52;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_19), &io_combinator__conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_52_52);
                        }
                        io_combinator__Res6_36 = ((MR_Word) io_combinator__conv17_Res6_36);
                        if (((MR_tag((MR_Word) io_combinator__Res6_36)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_24 = io_combinator__Res6_36;
                        else
                          {
                            MR_Box io_combinator__T6_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_36, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_38;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_20, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_38;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_53_53;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_20), &io_combinator__conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_53_53);
                            }
                            io_combinator__Res7_38 = ((MR_Word) io_combinator__conv20_Res7_38);
                            if (((MR_tag((MR_Word) io_combinator__Res7_38)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_24 = io_combinator__Res7_38;
                            else
                              {
                                MR_Box io_combinator__T7_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_38, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_40;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_21, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_40;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_54_54;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_21), &io_combinator__conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_54_54);
                                }
                                io_combinator__Res8_40 = ((MR_Word) io_combinator__conv23_Res8_40);
                                if (((MR_tag((MR_Word) io_combinator__Res8_40)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_24 = io_combinator__Res8_40;
                                else
                                  {
                                    MR_Box io_combinator__T8_41 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_40, (MR_Integer) 0));
                                    MR_Word io_combinator__Res9_42;
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_22, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv26_Res9_42;
                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_46;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__P9_22), &io_combinator__conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_46);
                                    }
                                    io_combinator__Res9_42 = ((MR_Word) io_combinator__conv26_Res9_42);
                                    if (((MR_tag((MR_Word) io_combinator__Res9_42)) == (MR_mktag((MR_Integer) 1))))
                                      *io_combinator__Res_24 = io_combinator__Res9_42;
                                    else
                                      {
                                        MR_Box io_combinator__T9_43 = (MR_hl_field(MR_mktag(0), io_combinator__Res9_42, (MR_Integer) 0));
                                        void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_23, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv28_Res_24;

                                        {
                                          io_combinator__func_27(((MR_Box) io_combinator__Combine_23), io_combinator__T1_27, io_combinator__T2_29, io_combinator__T3_31, io_combinator__T4_33, io_combinator__T5_35, io_combinator__T6_37, io_combinator__T7_39, io_combinator__T8_41, io_combinator__T9_43, &io_combinator__conv28_Res_24);
                                        }
                                        *io_combinator__Res_24 = ((MR_Word) io_combinator__conv28_Res_24);
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_8_12_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_58,
  MR_Word io_combinator__TypeInfo_for_T2_59,
  MR_Word io_combinator__TypeInfo_for_T3_60,
  MR_Word io_combinator__TypeInfo_for_T4_61,
  MR_Word io_combinator__TypeInfo_for_T5_62,
  MR_Word io_combinator__TypeInfo_for_T6_63,
  MR_Word io_combinator__TypeInfo_for_T7_64,
  MR_Word io_combinator__TypeInfo_for_T8_65,
  MR_Word io_combinator__TypeInfo_for_T_66,
  MR_Word io_combinator__P1_13,
  MR_Word io_combinator__P2_14,
  MR_Word io_combinator__P3_15,
  MR_Word io_combinator__P4_16,
  MR_Word io_combinator__P5_17,
  MR_Word io_combinator__P6_18,
  MR_Word io_combinator__P7_19,
  MR_Word io_combinator__P8_20,
  MR_Word io_combinator__Combine_21,
  MR_Word * io_combinator__Res_22)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_24;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_13, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_24;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_43_43;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_13), &io_combinator__conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_43_43);
    }
    io_combinator__Res1_24 = ((MR_Word) io_combinator__conv2_Res1_24);
    if (((MR_tag((MR_Word) io_combinator__Res1_24)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_22 = io_combinator__Res1_24;
    else
      {
        MR_Box io_combinator__T1_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_24, (MR_Integer) 0));
        MR_Word io_combinator__Res2_26;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_14, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_26;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_44_44;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_14), &io_combinator__conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_44_44);
        }
        io_combinator__Res2_26 = ((MR_Word) io_combinator__conv5_Res2_26);
        if (((MR_tag((MR_Word) io_combinator__Res2_26)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_22 = io_combinator__Res2_26;
        else
          {
            MR_Box io_combinator__T2_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_26, (MR_Integer) 0));
            MR_Word io_combinator__Res3_28;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_15, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_28;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_45_45;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_15), &io_combinator__conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_45_45);
            }
            io_combinator__Res3_28 = ((MR_Word) io_combinator__conv8_Res3_28);
            if (((MR_tag((MR_Word) io_combinator__Res3_28)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_22 = io_combinator__Res3_28;
            else
              {
                MR_Box io_combinator__T3_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_28, (MR_Integer) 0));
                MR_Word io_combinator__Res4_30;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_16, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_30;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_46_46;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_16), &io_combinator__conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_46_46);
                }
                io_combinator__Res4_30 = ((MR_Word) io_combinator__conv11_Res4_30);
                if (((MR_tag((MR_Word) io_combinator__Res4_30)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_22 = io_combinator__Res4_30;
                else
                  {
                    MR_Box io_combinator__T4_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_30, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_32;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_17, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_32;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_47_47;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_17), &io_combinator__conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_47_47);
                    }
                    io_combinator__Res5_32 = ((MR_Word) io_combinator__conv14_Res5_32);
                    if (((MR_tag((MR_Word) io_combinator__Res5_32)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_22 = io_combinator__Res5_32;
                    else
                      {
                        MR_Box io_combinator__T5_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_32, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_34;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_18, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_34;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_48_48;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_18), &io_combinator__conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_48_48);
                        }
                        io_combinator__Res6_34 = ((MR_Word) io_combinator__conv17_Res6_34);
                        if (((MR_tag((MR_Word) io_combinator__Res6_34)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_22 = io_combinator__Res6_34;
                        else
                          {
                            MR_Box io_combinator__T6_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_34, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_36;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_19, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_36;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_49_49;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_19), &io_combinator__conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_49_49);
                            }
                            io_combinator__Res7_36 = ((MR_Word) io_combinator__conv20_Res7_36);
                            if (((MR_tag((MR_Word) io_combinator__Res7_36)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_22 = io_combinator__Res7_36;
                            else
                              {
                                MR_Box io_combinator__T7_37 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_36, (MR_Integer) 0));
                                MR_Word io_combinator__Res8_38;
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_20, (MR_Integer) 1)));
                                MR_Box io_combinator__conv23_Res8_38;
                                MR_Box io_combinator__conv22_STATE_VARIABLE_IO_42;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__P8_20), &io_combinator__conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_42);
                                }
                                io_combinator__Res8_38 = ((MR_Word) io_combinator__conv23_Res8_38);
                                if (((MR_tag((MR_Word) io_combinator__Res8_38)) == (MR_mktag((MR_Integer) 1))))
                                  *io_combinator__Res_22 = io_combinator__Res8_38;
                                else
                                  {
                                    MR_Box io_combinator__T8_39 = (MR_hl_field(MR_mktag(0), io_combinator__Res8_38, (MR_Integer) 0));
                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_21, (MR_Integer) 1)));
                                    MR_Box io_combinator__conv25_Res_22;

                                    {
                                      io_combinator__func_24(((MR_Box) io_combinator__Combine_21), io_combinator__T1_25, io_combinator__T2_27, io_combinator__T3_29, io_combinator__T4_31, io_combinator__T5_33, io_combinator__T6_35, io_combinator__T7_37, io_combinator__T8_39, &io_combinator__conv25_Res_22);
                                    }
                                    *io_combinator__Res_22 = ((MR_Word) io_combinator__conv25_Res_22);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_7_11_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_52,
  MR_Word io_combinator__TypeInfo_for_T2_53,
  MR_Word io_combinator__TypeInfo_for_T3_54,
  MR_Word io_combinator__TypeInfo_for_T4_55,
  MR_Word io_combinator__TypeInfo_for_T5_56,
  MR_Word io_combinator__TypeInfo_for_T6_57,
  MR_Word io_combinator__TypeInfo_for_T7_58,
  MR_Word io_combinator__TypeInfo_for_T_59,
  MR_Word io_combinator__P1_12,
  MR_Word io_combinator__P2_13,
  MR_Word io_combinator__P3_14,
  MR_Word io_combinator__P4_15,
  MR_Word io_combinator__P5_16,
  MR_Word io_combinator__P6_17,
  MR_Word io_combinator__P7_18,
  MR_Word io_combinator__Combine_19,
  MR_Word * io_combinator__Res_20)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_22;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_12, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_22;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_39_39;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_12), &io_combinator__conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_39_39);
    }
    io_combinator__Res1_22 = ((MR_Word) io_combinator__conv2_Res1_22);
    if (((MR_tag((MR_Word) io_combinator__Res1_22)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_20 = io_combinator__Res1_22;
    else
      {
        MR_Box io_combinator__T1_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_22, (MR_Integer) 0));
        MR_Word io_combinator__Res2_24;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_13, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_24;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_40_40;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_13), &io_combinator__conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_40_40);
        }
        io_combinator__Res2_24 = ((MR_Word) io_combinator__conv5_Res2_24);
        if (((MR_tag((MR_Word) io_combinator__Res2_24)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_20 = io_combinator__Res2_24;
        else
          {
            MR_Box io_combinator__T2_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_24, (MR_Integer) 0));
            MR_Word io_combinator__Res3_26;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_14, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_26;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_41_41;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_14), &io_combinator__conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_41_41);
            }
            io_combinator__Res3_26 = ((MR_Word) io_combinator__conv8_Res3_26);
            if (((MR_tag((MR_Word) io_combinator__Res3_26)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_20 = io_combinator__Res3_26;
            else
              {
                MR_Box io_combinator__T3_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_26, (MR_Integer) 0));
                MR_Word io_combinator__Res4_28;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_15, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_28;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_42_42;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_15), &io_combinator__conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_42_42);
                }
                io_combinator__Res4_28 = ((MR_Word) io_combinator__conv11_Res4_28);
                if (((MR_tag((MR_Word) io_combinator__Res4_28)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_20 = io_combinator__Res4_28;
                else
                  {
                    MR_Box io_combinator__T4_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_28, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_30;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_16, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_30;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_43_43;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_16), &io_combinator__conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_43_43);
                    }
                    io_combinator__Res5_30 = ((MR_Word) io_combinator__conv14_Res5_30);
                    if (((MR_tag((MR_Word) io_combinator__Res5_30)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_20 = io_combinator__Res5_30;
                    else
                      {
                        MR_Box io_combinator__T5_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_30, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_32;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_17, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_32;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_44_44;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_17), &io_combinator__conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_44_44);
                        }
                        io_combinator__Res6_32 = ((MR_Word) io_combinator__conv17_Res6_32);
                        if (((MR_tag((MR_Word) io_combinator__Res6_32)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_20 = io_combinator__Res6_32;
                        else
                          {
                            MR_Box io_combinator__T6_33 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_32, (MR_Integer) 0));
                            MR_Word io_combinator__Res7_34;
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_18, (MR_Integer) 1)));
                            MR_Box io_combinator__conv20_Res7_34;
                            MR_Box io_combinator__conv19_STATE_VARIABLE_IO_38;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__P7_18), &io_combinator__conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_38);
                            }
                            io_combinator__Res7_34 = ((MR_Word) io_combinator__conv20_Res7_34);
                            if (((MR_tag((MR_Word) io_combinator__Res7_34)) == (MR_mktag((MR_Integer) 1))))
                              *io_combinator__Res_20 = io_combinator__Res7_34;
                            else
                              {
                                MR_Box io_combinator__T7_35 = (MR_hl_field(MR_mktag(0), io_combinator__Res7_34, (MR_Integer) 0));
                                void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_19, (MR_Integer) 1)));
                                MR_Box io_combinator__conv22_Res_20;

                                {
                                  io_combinator__func_21(((MR_Box) io_combinator__Combine_19), io_combinator__T1_23, io_combinator__T2_25, io_combinator__T3_27, io_combinator__T4_29, io_combinator__T5_31, io_combinator__T6_33, io_combinator__T7_35, &io_combinator__conv22_Res_20);
                                }
                                *io_combinator__Res_20 = ((MR_Word) io_combinator__conv22_Res_20);
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_6_10_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_46,
  MR_Word io_combinator__TypeInfo_for_T2_47,
  MR_Word io_combinator__TypeInfo_for_T3_48,
  MR_Word io_combinator__TypeInfo_for_T4_49,
  MR_Word io_combinator__TypeInfo_for_T5_50,
  MR_Word io_combinator__TypeInfo_for_T6_51,
  MR_Word io_combinator__TypeInfo_for_T_52,
  MR_Word io_combinator__P1_11,
  MR_Word io_combinator__P2_12,
  MR_Word io_combinator__P3_13,
  MR_Word io_combinator__P4_14,
  MR_Word io_combinator__P5_15,
  MR_Word io_combinator__P6_16,
  MR_Word io_combinator__Combine_17,
  MR_Word * io_combinator__Res_18)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_20;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_11, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_20;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_35_35;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_11), &io_combinator__conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_35_35);
    }
    io_combinator__Res1_20 = ((MR_Word) io_combinator__conv2_Res1_20);
    if (((MR_tag((MR_Word) io_combinator__Res1_20)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_18 = io_combinator__Res1_20;
    else
      {
        MR_Box io_combinator__T1_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_20, (MR_Integer) 0));
        MR_Word io_combinator__Res2_22;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_12, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_22;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_36_36;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_12), &io_combinator__conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_36_36);
        }
        io_combinator__Res2_22 = ((MR_Word) io_combinator__conv5_Res2_22);
        if (((MR_tag((MR_Word) io_combinator__Res2_22)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_18 = io_combinator__Res2_22;
        else
          {
            MR_Box io_combinator__T2_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_22, (MR_Integer) 0));
            MR_Word io_combinator__Res3_24;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_13, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_24;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_37_37;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_13), &io_combinator__conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_37_37);
            }
            io_combinator__Res3_24 = ((MR_Word) io_combinator__conv8_Res3_24);
            if (((MR_tag((MR_Word) io_combinator__Res3_24)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_18 = io_combinator__Res3_24;
            else
              {
                MR_Box io_combinator__T3_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_24, (MR_Integer) 0));
                MR_Word io_combinator__Res4_26;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_14, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_26;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_38_38;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_14), &io_combinator__conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_38_38);
                }
                io_combinator__Res4_26 = ((MR_Word) io_combinator__conv11_Res4_26);
                if (((MR_tag((MR_Word) io_combinator__Res4_26)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_18 = io_combinator__Res4_26;
                else
                  {
                    MR_Box io_combinator__T4_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_26, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_28;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_15, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_28;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_39_39;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_15), &io_combinator__conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_39_39);
                    }
                    io_combinator__Res5_28 = ((MR_Word) io_combinator__conv14_Res5_28);
                    if (((MR_tag((MR_Word) io_combinator__Res5_28)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_18 = io_combinator__Res5_28;
                    else
                      {
                        MR_Box io_combinator__T5_29 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_28, (MR_Integer) 0));
                        MR_Word io_combinator__Res6_30;
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_16, (MR_Integer) 1)));
                        MR_Box io_combinator__conv17_Res6_30;
                        MR_Box io_combinator__conv16_STATE_VARIABLE_IO_34;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__P6_16), &io_combinator__conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_34);
                        }
                        io_combinator__Res6_30 = ((MR_Word) io_combinator__conv17_Res6_30);
                        if (((MR_tag((MR_Word) io_combinator__Res6_30)) == (MR_mktag((MR_Integer) 1))))
                          *io_combinator__Res_18 = io_combinator__Res6_30;
                        else
                          {
                            MR_Box io_combinator__T6_31 = (MR_hl_field(MR_mktag(0), io_combinator__Res6_30, (MR_Integer) 0));
                            void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_17, (MR_Integer) 1)));
                            MR_Box io_combinator__conv19_Res_18;

                            {
                              io_combinator__func_18(((MR_Box) io_combinator__Combine_17), io_combinator__T1_21, io_combinator__T2_23, io_combinator__T3_25, io_combinator__T4_27, io_combinator__T5_29, io_combinator__T6_31, &io_combinator__conv19_Res_18);
                            }
                            *io_combinator__Res_18 = ((MR_Word) io_combinator__conv19_Res_18);
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_5_9_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_40,
  MR_Word io_combinator__TypeInfo_for_T2_41,
  MR_Word io_combinator__TypeInfo_for_T3_42,
  MR_Word io_combinator__TypeInfo_for_T4_43,
  MR_Word io_combinator__TypeInfo_for_T5_44,
  MR_Word io_combinator__TypeInfo_for_T_45,
  MR_Word io_combinator__P1_10,
  MR_Word io_combinator__P2_11,
  MR_Word io_combinator__P3_12,
  MR_Word io_combinator__P4_13,
  MR_Word io_combinator__P5_14,
  MR_Word io_combinator__Combine_15,
  MR_Word * io_combinator__Res_16)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_18;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_10, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_18;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_31_31;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_10), &io_combinator__conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_31_31);
    }
    io_combinator__Res1_18 = ((MR_Word) io_combinator__conv2_Res1_18);
    if (((MR_tag((MR_Word) io_combinator__Res1_18)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_16 = io_combinator__Res1_18;
    else
      {
        MR_Box io_combinator__T1_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_18, (MR_Integer) 0));
        MR_Word io_combinator__Res2_20;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_11, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_20;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_32_32;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_11), &io_combinator__conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_32_32);
        }
        io_combinator__Res2_20 = ((MR_Word) io_combinator__conv5_Res2_20);
        if (((MR_tag((MR_Word) io_combinator__Res2_20)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_16 = io_combinator__Res2_20;
        else
          {
            MR_Box io_combinator__T2_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_20, (MR_Integer) 0));
            MR_Word io_combinator__Res3_22;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_12, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_22;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_33_33;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_12), &io_combinator__conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_33_33);
            }
            io_combinator__Res3_22 = ((MR_Word) io_combinator__conv8_Res3_22);
            if (((MR_tag((MR_Word) io_combinator__Res3_22)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_16 = io_combinator__Res3_22;
            else
              {
                MR_Box io_combinator__T3_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_22, (MR_Integer) 0));
                MR_Word io_combinator__Res4_24;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_13, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_24;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_34_34;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_13), &io_combinator__conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_34_34);
                }
                io_combinator__Res4_24 = ((MR_Word) io_combinator__conv11_Res4_24);
                if (((MR_tag((MR_Word) io_combinator__Res4_24)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_16 = io_combinator__Res4_24;
                else
                  {
                    MR_Box io_combinator__T4_25 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_24, (MR_Integer) 0));
                    MR_Word io_combinator__Res5_26;
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_14, (MR_Integer) 1)));
                    MR_Box io_combinator__conv14_Res5_26;
                    MR_Box io_combinator__conv13_STATE_VARIABLE_IO_30;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__P5_14), &io_combinator__conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_30);
                    }
                    io_combinator__Res5_26 = ((MR_Word) io_combinator__conv14_Res5_26);
                    if (((MR_tag((MR_Word) io_combinator__Res5_26)) == (MR_mktag((MR_Integer) 1))))
                      *io_combinator__Res_16 = io_combinator__Res5_26;
                    else
                      {
                        MR_Box io_combinator__T5_27 = (MR_hl_field(MR_mktag(0), io_combinator__Res5_26, (MR_Integer) 0));
                        void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_15, (MR_Integer) 1)));
                        MR_Box io_combinator__conv16_Res_16;

                        {
                          io_combinator__func_15(((MR_Box) io_combinator__Combine_15), io_combinator__T1_19, io_combinator__T2_21, io_combinator__T3_23, io_combinator__T4_25, io_combinator__T5_27, &io_combinator__conv16_Res_16);
                        }
                        *io_combinator__Res_16 = ((MR_Word) io_combinator__conv16_Res_16);
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_4_8_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_34,
  MR_Word io_combinator__TypeInfo_for_T2_35,
  MR_Word io_combinator__TypeInfo_for_T3_36,
  MR_Word io_combinator__TypeInfo_for_T4_37,
  MR_Word io_combinator__TypeInfo_for_T_38,
  MR_Word io_combinator__P1_9,
  MR_Word io_combinator__P2_10,
  MR_Word io_combinator__P3_11,
  MR_Word io_combinator__P4_12,
  MR_Word io_combinator__Combine_13,
  MR_Word * io_combinator__Res_14)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_16;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_9, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_16;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_27_27;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_9), &io_combinator__conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_27_27);
    }
    io_combinator__Res1_16 = ((MR_Word) io_combinator__conv2_Res1_16);
    if (((MR_tag((MR_Word) io_combinator__Res1_16)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_14 = io_combinator__Res1_16;
    else
      {
        MR_Box io_combinator__T1_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_16, (MR_Integer) 0));
        MR_Word io_combinator__Res2_18;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_10, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_18;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_28_28;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_10), &io_combinator__conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_28_28);
        }
        io_combinator__Res2_18 = ((MR_Word) io_combinator__conv5_Res2_18);
        if (((MR_tag((MR_Word) io_combinator__Res2_18)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_14 = io_combinator__Res2_18;
        else
          {
            MR_Box io_combinator__T2_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_18, (MR_Integer) 0));
            MR_Word io_combinator__Res3_20;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_11, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_20;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_29_29;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_11), &io_combinator__conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_29_29);
            }
            io_combinator__Res3_20 = ((MR_Word) io_combinator__conv8_Res3_20);
            if (((MR_tag((MR_Word) io_combinator__Res3_20)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_14 = io_combinator__Res3_20;
            else
              {
                MR_Box io_combinator__T3_21 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_20, (MR_Integer) 0));
                MR_Word io_combinator__Res4_22;
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_12, (MR_Integer) 1)));
                MR_Box io_combinator__conv11_Res4_22;
                MR_Box io_combinator__conv10_STATE_VARIABLE_IO_26;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__P4_12), &io_combinator__conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_26);
                }
                io_combinator__Res4_22 = ((MR_Word) io_combinator__conv11_Res4_22);
                if (((MR_tag((MR_Word) io_combinator__Res4_22)) == (MR_mktag((MR_Integer) 1))))
                  *io_combinator__Res_14 = io_combinator__Res4_22;
                else
                  {
                    MR_Box io_combinator__T4_23 = (MR_hl_field(MR_mktag(0), io_combinator__Res4_22, (MR_Integer) 0));
                    void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_13, (MR_Integer) 1)));
                    MR_Box io_combinator__conv13_Res_14;

                    {
                      io_combinator__func_12(((MR_Box) io_combinator__Combine_13), io_combinator__T1_17, io_combinator__T2_19, io_combinator__T3_21, io_combinator__T4_23, &io_combinator__conv13_Res_14);
                    }
                    *io_combinator__Res_14 = ((MR_Word) io_combinator__conv13_Res_14);
                  }
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_3_7_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_28,
  MR_Word io_combinator__TypeInfo_for_T2_29,
  MR_Word io_combinator__TypeInfo_for_T3_30,
  MR_Word io_combinator__TypeInfo_for_T_31,
  MR_Word io_combinator__P1_8,
  MR_Word io_combinator__P2_9,
  MR_Word io_combinator__P3_10,
  MR_Word io_combinator__Combine_11,
  MR_Word * io_combinator__Res_12)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_14;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_8, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_14;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_23_23;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_8), &io_combinator__conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_23_23);
    }
    io_combinator__Res1_14 = ((MR_Word) io_combinator__conv2_Res1_14);
    if (((MR_tag((MR_Word) io_combinator__Res1_14)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_12 = io_combinator__Res1_14;
    else
      {
        MR_Box io_combinator__T1_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_14, (MR_Integer) 0));
        MR_Word io_combinator__Res2_16;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_9, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_16;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_24_24;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_9), &io_combinator__conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_24_24);
        }
        io_combinator__Res2_16 = ((MR_Word) io_combinator__conv5_Res2_16);
        if (((MR_tag((MR_Word) io_combinator__Res2_16)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_12 = io_combinator__Res2_16;
        else
          {
            MR_Box io_combinator__T2_17 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_16, (MR_Integer) 0));
            MR_Word io_combinator__Res3_18;
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_10, (MR_Integer) 1)));
            MR_Box io_combinator__conv8_Res3_18;
            MR_Box io_combinator__conv7_STATE_VARIABLE_IO_22;

            {
              io_combinator__func_6(((MR_Box) io_combinator__P3_10), &io_combinator__conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_22);
            }
            io_combinator__Res3_18 = ((MR_Word) io_combinator__conv8_Res3_18);
            if (((MR_tag((MR_Word) io_combinator__Res3_18)) == (MR_mktag((MR_Integer) 1))))
              *io_combinator__Res_12 = io_combinator__Res3_18;
            else
              {
                MR_Box io_combinator__T3_19 = (MR_hl_field(MR_mktag(0), io_combinator__Res3_18, (MR_Integer) 0));
                void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_11, (MR_Integer) 1)));
                MR_Box io_combinator__conv10_Res_12;

                {
                  io_combinator__func_9(((MR_Box) io_combinator__Combine_11), io_combinator__T1_15, io_combinator__T2_17, io_combinator__T3_19, &io_combinator__conv10_Res_12);
                }
                *io_combinator__Res_12 = ((MR_Word) io_combinator__conv10_Res_12);
              }
          }
      }
  }
}

void MR_CALL 
io_combinator__res_sequence_2_6_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_22,
  MR_Word io_combinator__TypeInfo_for_T2_23,
  MR_Word io_combinator__TypeInfo_for_T_24,
  MR_Word io_combinator__P1_7,
  MR_Word io_combinator__P2_8,
  MR_Word io_combinator__Combine_9,
  MR_Word * io_combinator__Res_10)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_12;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_7, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_12;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_19_19;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_7), &io_combinator__conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_19_19);
    }
    io_combinator__Res1_12 = ((MR_Word) io_combinator__conv2_Res1_12);
    if (((MR_tag((MR_Word) io_combinator__Res1_12)) == (MR_mktag((MR_Integer) 1))))
      *io_combinator__Res_10 = io_combinator__Res1_12;
    else
      {
        MR_Box io_combinator__T1_13 = (MR_hl_field(MR_mktag(0), io_combinator__Res1_12, (MR_Integer) 0));
        MR_Word io_combinator__Res2_14;
        void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_8, (MR_Integer) 1)));
        MR_Box io_combinator__conv5_Res2_14;
        MR_Box io_combinator__conv4_STATE_VARIABLE_IO_18;

        {
          io_combinator__func_3(((MR_Box) io_combinator__P2_8), &io_combinator__conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_18);
        }
        io_combinator__Res2_14 = ((MR_Word) io_combinator__conv5_Res2_14);
        if (((MR_tag((MR_Word) io_combinator__Res2_14)) == (MR_mktag((MR_Integer) 1))))
          *io_combinator__Res_10 = io_combinator__Res2_14;
        else
          {
            MR_Box io_combinator__T2_15 = (MR_hl_field(MR_mktag(0), io_combinator__Res2_14, (MR_Integer) 0));
            void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_9, (MR_Integer) 1)));
            MR_Box io_combinator__conv7_Res_10;

            {
              io_combinator__func_6(((MR_Box) io_combinator__Combine_9), io_combinator__T1_13, io_combinator__T2_15, &io_combinator__conv7_Res_10);
            }
            *io_combinator__Res_10 = ((MR_Word) io_combinator__conv7_Res_10);
          }
      }
  }
}

void MR_CALL 
io_combinator__sequence_11_15_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_76,
  MR_Word io_combinator__TypeInfo_for_T2_77,
  MR_Word io_combinator__TypeInfo_for_T3_78,
  MR_Word io_combinator__TypeInfo_for_T4_79,
  MR_Word io_combinator__TypeInfo_for_T5_80,
  MR_Word io_combinator__TypeInfo_for_T6_81,
  MR_Word io_combinator__TypeInfo_for_T7_82,
  MR_Word io_combinator__TypeInfo_for_T8_83,
  MR_Word io_combinator__TypeInfo_for_T9_84,
  MR_Word io_combinator__TypeInfo_for_T10_85,
  MR_Word io_combinator__TypeInfo_for_T11_86,
  MR_Word io_combinator__TypeInfo_for_T_87,
  MR_Word io_combinator__P1_16,
  MR_Word io_combinator__P2_17,
  MR_Word io_combinator__P3_18,
  MR_Word io_combinator__P4_19,
  MR_Word io_combinator__P5_20,
  MR_Word io_combinator__P6_21,
  MR_Word io_combinator__P7_22,
  MR_Word io_combinator__P8_23,
  MR_Word io_combinator__P9_24,
  MR_Word io_combinator__P10_25,
  MR_Word io_combinator__P11_26,
  MR_Word io_combinator__Combine_27,
  MR_Word * io_combinator__Res_28)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_30;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_16, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_30;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_55_55;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_16), &io_combinator__conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_55_55);
    }
    io_combinator__Res1_30 = ((MR_Word) io_combinator__conv2_Res1_30);
    switch (MR_tag((MR_Word) io_combinator__Res1_30)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_30, (MR_Integer) 0));
          MR_Word io_combinator__Res2_32;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_17, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_32;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_56_56;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_17), &io_combinator__conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_56_56);
          }
          io_combinator__Res2_32 = ((MR_Word) io_combinator__conv5_Res2_32);
          switch (MR_tag((MR_Word) io_combinator__Res2_32)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_32, (MR_Integer) 0));
                MR_Word io_combinator__Res3_34;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_18, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_34;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_57_57;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_18), &io_combinator__conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_57_57);
                }
                io_combinator__Res3_34 = ((MR_Word) io_combinator__conv8_Res3_34);
                switch (MR_tag((MR_Word) io_combinator__Res3_34)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_34, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_36;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_19, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_36;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_58_58;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_19), &io_combinator__conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_58_58);
                      }
                      io_combinator__Res4_36 = ((MR_Word) io_combinator__conv11_Res4_36);
                      switch (MR_tag((MR_Word) io_combinator__Res4_36)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_36, (MR_Integer) 0));
                            MR_Word io_combinator__Res5_38;
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_20, (MR_Integer) 1)));
                            MR_Box io_combinator__conv14_Res5_38;
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_59_59;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__P5_20), &io_combinator__conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_59_59);
                            }
                            io_combinator__Res5_38 = ((MR_Word) io_combinator__conv14_Res5_38);
                            switch (MR_tag((MR_Word) io_combinator__Res5_38)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Box io_combinator__T5_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_38, (MR_Integer) 0));
                                  MR_Word io_combinator__Res6_40;
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_21, (MR_Integer) 1)));
                                  MR_Box io_combinator__conv17_Res6_40;
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_60_60;

                                  {
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_21), &io_combinator__conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_60_60);
                                  }
                                  io_combinator__Res6_40 = ((MR_Word) io_combinator__conv17_Res6_40);
                                  switch (MR_tag((MR_Word) io_combinator__Res6_40)) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        MR_Box io_combinator__T6_41 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_40, (MR_Integer) 0));
                                        MR_Word io_combinator__Res7_42;
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_22, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv20_Res7_42;
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_61_61;

                                        {
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_22), &io_combinator__conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_61_61);
                                        }
                                        io_combinator__Res7_42 = ((MR_Word) io_combinator__conv20_Res7_42);
                                        switch (MR_tag((MR_Word) io_combinator__Res7_42)) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Box io_combinator__T7_43 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_42, (MR_Integer) 0));
                                              MR_Word io_combinator__Res8_44;
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_23, (MR_Integer) 1)));
                                              MR_Box io_combinator__conv23_Res8_44;
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_62_62;

                                              {
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_23), &io_combinator__conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_62_62);
                                              }
                                              io_combinator__Res8_44 = ((MR_Word) io_combinator__conv23_Res8_44);
                                              switch (MR_tag((MR_Word) io_combinator__Res8_44)) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    MR_Box io_combinator__T8_45 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_44, (MR_Integer) 0));
                                                    MR_Word io_combinator__Res9_46;
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_24, (MR_Integer) 1)));
                                                    MR_Box io_combinator__conv26_Res9_46;
                                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_63_63;

                                                    {
                                                      io_combinator__func_24(((MR_Box) io_combinator__P9_24), &io_combinator__conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_63_63);
                                                    }
                                                    io_combinator__Res9_46 = ((MR_Word) io_combinator__conv26_Res9_46);
                                                    switch (MR_tag((MR_Word) io_combinator__Res9_46)) {
                                                      default: /*NOTREACHED*/ MR_assert(0);
                                                      case (MR_Integer) 0:
                                                        *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        break;
                                                      case (MR_Integer) 1:
                                                        {
                                                          MR_Box io_combinator__T9_47 = (MR_hl_field(MR_mktag(1), io_combinator__Res9_46, (MR_Integer) 0));
                                                          MR_Word io_combinator__Res10_48;
                                                          void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_25, (MR_Integer) 1)));
                                                          MR_Box io_combinator__conv29_Res10_48;
                                                          MR_Box io_combinator__conv28_STATE_VARIABLE_IO_64_64;

                                                          {
                                                            io_combinator__func_27(((MR_Box) io_combinator__P10_25), &io_combinator__conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_64_64);
                                                          }
                                                          io_combinator__Res10_48 = ((MR_Word) io_combinator__conv29_Res10_48);
                                                          switch (MR_tag((MR_Word) io_combinator__Res10_48)) {
                                                            default: /*NOTREACHED*/ MR_assert(0);
                                                            case (MR_Integer) 0:
                                                              *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                              break;
                                                            case (MR_Integer) 1:
                                                              {
                                                                MR_Box io_combinator__T10_49 = (MR_hl_field(MR_mktag(1), io_combinator__Res10_48, (MR_Integer) 0));
                                                                MR_Word io_combinator__Res11_50;
                                                                void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P11_26, (MR_Integer) 1)));
                                                                MR_Box io_combinator__conv32_Res11_50;
                                                                MR_Box io_combinator__conv31_STATE_VARIABLE_IO_54;

                                                                {
                                                                  io_combinator__func_30(((MR_Box) io_combinator__P11_26), &io_combinator__conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv31_STATE_VARIABLE_IO_54);
                                                                }
                                                                io_combinator__Res11_50 = ((MR_Word) io_combinator__conv32_Res11_50);
                                                                switch (MR_tag((MR_Word) io_combinator__Res11_50)) {
                                                                  default: /*NOTREACHED*/ MR_assert(0);
                                                                  case (MR_Integer) 0:
                                                                    *io_combinator__Res_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                    break;
                                                                  case (MR_Integer) 1:
                                                                    {
                                                                      MR_Box io_combinator__T11_51 = (MR_hl_field(MR_mktag(1), io_combinator__Res11_50, (MR_Integer) 0));
                                                                      void MR_CALL (* io_combinator__func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_27, (MR_Integer) 1)));
                                                                      MR_Box io_combinator__conv34_Res_28;

                                                                      {
                                                                        io_combinator__func_33(((MR_Box) io_combinator__Combine_27), io_combinator__T1_31, io_combinator__T2_33, io_combinator__T3_35, io_combinator__T4_37, io_combinator__T5_39, io_combinator__T6_41, io_combinator__T7_43, io_combinator__T8_45, io_combinator__T9_47, io_combinator__T10_49, io_combinator__T11_51, &io_combinator__conv34_Res_28);
                                                                      }
                                                                      *io_combinator__Res_28 = ((MR_Word) io_combinator__conv34_Res_28);
                                                                    }
                                                                    break;
                                                                  case (MR_Integer) 2:
                                                                    *io_combinator__Res_28 = io_combinator__Res11_50;
                                                                    break;
                                                                }
                                                              }
                                                              break;
                                                            case (MR_Integer) 2:
                                                              *io_combinator__Res_28 = io_combinator__Res10_48;
                                                              break;
                                                          }
                                                        }
                                                        break;
                                                      case (MR_Integer) 2:
                                                        *io_combinator__Res_28 = io_combinator__Res9_46;
                                                        break;
                                                    }
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  *io_combinator__Res_28 = io_combinator__Res8_44;
                                                  break;
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            *io_combinator__Res_28 = io_combinator__Res7_42;
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      *io_combinator__Res_28 = io_combinator__Res6_40;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                *io_combinator__Res_28 = io_combinator__Res5_38;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_28 = io_combinator__Res4_36;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_28 = io_combinator__Res3_34;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_28 = io_combinator__Res2_32;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_28 = io_combinator__Res1_30;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_10_14_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_70,
  MR_Word io_combinator__TypeInfo_for_T2_71,
  MR_Word io_combinator__TypeInfo_for_T3_72,
  MR_Word io_combinator__TypeInfo_for_T4_73,
  MR_Word io_combinator__TypeInfo_for_T5_74,
  MR_Word io_combinator__TypeInfo_for_T6_75,
  MR_Word io_combinator__TypeInfo_for_T7_76,
  MR_Word io_combinator__TypeInfo_for_T8_77,
  MR_Word io_combinator__TypeInfo_for_T9_78,
  MR_Word io_combinator__TypeInfo_for_T10_79,
  MR_Word io_combinator__TypeInfo_for_T_80,
  MR_Word io_combinator__P1_15,
  MR_Word io_combinator__P2_16,
  MR_Word io_combinator__P3_17,
  MR_Word io_combinator__P4_18,
  MR_Word io_combinator__P5_19,
  MR_Word io_combinator__P6_20,
  MR_Word io_combinator__P7_21,
  MR_Word io_combinator__P8_22,
  MR_Word io_combinator__P9_23,
  MR_Word io_combinator__P10_24,
  MR_Word io_combinator__Combine_25,
  MR_Word * io_combinator__Res_26)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_28;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_15, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_28;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_51_51;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_15), &io_combinator__conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_51_51);
    }
    io_combinator__Res1_28 = ((MR_Word) io_combinator__conv2_Res1_28);
    switch (MR_tag((MR_Word) io_combinator__Res1_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_28, (MR_Integer) 0));
          MR_Word io_combinator__Res2_30;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_16, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_30;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_52_52;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_16), &io_combinator__conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_52_52);
          }
          io_combinator__Res2_30 = ((MR_Word) io_combinator__conv5_Res2_30);
          switch (MR_tag((MR_Word) io_combinator__Res2_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_30, (MR_Integer) 0));
                MR_Word io_combinator__Res3_32;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_17, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_32;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_53_53;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_17), &io_combinator__conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_53_53);
                }
                io_combinator__Res3_32 = ((MR_Word) io_combinator__conv8_Res3_32);
                switch (MR_tag((MR_Word) io_combinator__Res3_32)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_32, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_34;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_18, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_34;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_54_54;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_18), &io_combinator__conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_54_54);
                      }
                      io_combinator__Res4_34 = ((MR_Word) io_combinator__conv11_Res4_34);
                      switch (MR_tag((MR_Word) io_combinator__Res4_34)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_34, (MR_Integer) 0));
                            MR_Word io_combinator__Res5_36;
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_19, (MR_Integer) 1)));
                            MR_Box io_combinator__conv14_Res5_36;
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_55_55;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__P5_19), &io_combinator__conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_55_55);
                            }
                            io_combinator__Res5_36 = ((MR_Word) io_combinator__conv14_Res5_36);
                            switch (MR_tag((MR_Word) io_combinator__Res5_36)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Box io_combinator__T5_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_36, (MR_Integer) 0));
                                  MR_Word io_combinator__Res6_38;
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_20, (MR_Integer) 1)));
                                  MR_Box io_combinator__conv17_Res6_38;
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_56_56;

                                  {
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_20), &io_combinator__conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_56_56);
                                  }
                                  io_combinator__Res6_38 = ((MR_Word) io_combinator__conv17_Res6_38);
                                  switch (MR_tag((MR_Word) io_combinator__Res6_38)) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        MR_Box io_combinator__T6_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_38, (MR_Integer) 0));
                                        MR_Word io_combinator__Res7_40;
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_21, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv20_Res7_40;
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_57_57;

                                        {
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_21), &io_combinator__conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_57_57);
                                        }
                                        io_combinator__Res7_40 = ((MR_Word) io_combinator__conv20_Res7_40);
                                        switch (MR_tag((MR_Word) io_combinator__Res7_40)) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Box io_combinator__T7_41 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_40, (MR_Integer) 0));
                                              MR_Word io_combinator__Res8_42;
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_22, (MR_Integer) 1)));
                                              MR_Box io_combinator__conv23_Res8_42;
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_58_58;

                                              {
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_22), &io_combinator__conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_58_58);
                                              }
                                              io_combinator__Res8_42 = ((MR_Word) io_combinator__conv23_Res8_42);
                                              switch (MR_tag((MR_Word) io_combinator__Res8_42)) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    MR_Box io_combinator__T8_43 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_42, (MR_Integer) 0));
                                                    MR_Word io_combinator__Res9_44;
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_23, (MR_Integer) 1)));
                                                    MR_Box io_combinator__conv26_Res9_44;
                                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_59_59;

                                                    {
                                                      io_combinator__func_24(((MR_Box) io_combinator__P9_23), &io_combinator__conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_59_59);
                                                    }
                                                    io_combinator__Res9_44 = ((MR_Word) io_combinator__conv26_Res9_44);
                                                    switch (MR_tag((MR_Word) io_combinator__Res9_44)) {
                                                      default: /*NOTREACHED*/ MR_assert(0);
                                                      case (MR_Integer) 0:
                                                        *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        break;
                                                      case (MR_Integer) 1:
                                                        {
                                                          MR_Box io_combinator__T9_45 = (MR_hl_field(MR_mktag(1), io_combinator__Res9_44, (MR_Integer) 0));
                                                          MR_Word io_combinator__Res10_46;
                                                          void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P10_24, (MR_Integer) 1)));
                                                          MR_Box io_combinator__conv29_Res10_46;
                                                          MR_Box io_combinator__conv28_STATE_VARIABLE_IO_50;

                                                          {
                                                            io_combinator__func_27(((MR_Box) io_combinator__P10_24), &io_combinator__conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv28_STATE_VARIABLE_IO_50);
                                                          }
                                                          io_combinator__Res10_46 = ((MR_Word) io_combinator__conv29_Res10_46);
                                                          switch (MR_tag((MR_Word) io_combinator__Res10_46)) {
                                                            default: /*NOTREACHED*/ MR_assert(0);
                                                            case (MR_Integer) 0:
                                                              *io_combinator__Res_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                              break;
                                                            case (MR_Integer) 1:
                                                              {
                                                                MR_Box io_combinator__T10_47 = (MR_hl_field(MR_mktag(1), io_combinator__Res10_46, (MR_Integer) 0));
                                                                void MR_CALL (* io_combinator__func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_25, (MR_Integer) 1)));
                                                                MR_Box io_combinator__conv31_Res_26;

                                                                {
                                                                  io_combinator__func_30(((MR_Box) io_combinator__Combine_25), io_combinator__T1_29, io_combinator__T2_31, io_combinator__T3_33, io_combinator__T4_35, io_combinator__T5_37, io_combinator__T6_39, io_combinator__T7_41, io_combinator__T8_43, io_combinator__T9_45, io_combinator__T10_47, &io_combinator__conv31_Res_26);
                                                                }
                                                                *io_combinator__Res_26 = ((MR_Word) io_combinator__conv31_Res_26);
                                                              }
                                                              break;
                                                            case (MR_Integer) 2:
                                                              *io_combinator__Res_26 = io_combinator__Res10_46;
                                                              break;
                                                          }
                                                        }
                                                        break;
                                                      case (MR_Integer) 2:
                                                        *io_combinator__Res_26 = io_combinator__Res9_44;
                                                        break;
                                                    }
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  *io_combinator__Res_26 = io_combinator__Res8_42;
                                                  break;
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            *io_combinator__Res_26 = io_combinator__Res7_40;
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      *io_combinator__Res_26 = io_combinator__Res6_38;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                *io_combinator__Res_26 = io_combinator__Res5_36;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_26 = io_combinator__Res4_34;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_26 = io_combinator__Res3_32;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_26 = io_combinator__Res2_30;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_26 = io_combinator__Res1_28;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_9_13_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_64,
  MR_Word io_combinator__TypeInfo_for_T2_65,
  MR_Word io_combinator__TypeInfo_for_T3_66,
  MR_Word io_combinator__TypeInfo_for_T4_67,
  MR_Word io_combinator__TypeInfo_for_T5_68,
  MR_Word io_combinator__TypeInfo_for_T6_69,
  MR_Word io_combinator__TypeInfo_for_T7_70,
  MR_Word io_combinator__TypeInfo_for_T8_71,
  MR_Word io_combinator__TypeInfo_for_T9_72,
  MR_Word io_combinator__TypeInfo_for_T_73,
  MR_Word io_combinator__P1_14,
  MR_Word io_combinator__P2_15,
  MR_Word io_combinator__P3_16,
  MR_Word io_combinator__P4_17,
  MR_Word io_combinator__P5_18,
  MR_Word io_combinator__P6_19,
  MR_Word io_combinator__P7_20,
  MR_Word io_combinator__P8_21,
  MR_Word io_combinator__P9_22,
  MR_Word io_combinator__Combine_23,
  MR_Word * io_combinator__Res_24)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_26;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_14, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_26;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_47_47;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_14), &io_combinator__conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_47_47);
    }
    io_combinator__Res1_26 = ((MR_Word) io_combinator__conv2_Res1_26);
    switch (MR_tag((MR_Word) io_combinator__Res1_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_26, (MR_Integer) 0));
          MR_Word io_combinator__Res2_28;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_15, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_28;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_48_48;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_15), &io_combinator__conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_48_48);
          }
          io_combinator__Res2_28 = ((MR_Word) io_combinator__conv5_Res2_28);
          switch (MR_tag((MR_Word) io_combinator__Res2_28)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_28, (MR_Integer) 0));
                MR_Word io_combinator__Res3_30;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_16, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_30;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_49_49;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_16), &io_combinator__conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_49_49);
                }
                io_combinator__Res3_30 = ((MR_Word) io_combinator__conv8_Res3_30);
                switch (MR_tag((MR_Word) io_combinator__Res3_30)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_30, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_32;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_17, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_32;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_50_50;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_17), &io_combinator__conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_50_50);
                      }
                      io_combinator__Res4_32 = ((MR_Word) io_combinator__conv11_Res4_32);
                      switch (MR_tag((MR_Word) io_combinator__Res4_32)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_32, (MR_Integer) 0));
                            MR_Word io_combinator__Res5_34;
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_18, (MR_Integer) 1)));
                            MR_Box io_combinator__conv14_Res5_34;
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_51_51;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__P5_18), &io_combinator__conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_51_51);
                            }
                            io_combinator__Res5_34 = ((MR_Word) io_combinator__conv14_Res5_34);
                            switch (MR_tag((MR_Word) io_combinator__Res5_34)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Box io_combinator__T5_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_34, (MR_Integer) 0));
                                  MR_Word io_combinator__Res6_36;
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_19, (MR_Integer) 1)));
                                  MR_Box io_combinator__conv17_Res6_36;
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_52_52;

                                  {
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_19), &io_combinator__conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_52_52);
                                  }
                                  io_combinator__Res6_36 = ((MR_Word) io_combinator__conv17_Res6_36);
                                  switch (MR_tag((MR_Word) io_combinator__Res6_36)) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        MR_Box io_combinator__T6_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_36, (MR_Integer) 0));
                                        MR_Word io_combinator__Res7_38;
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_20, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv20_Res7_38;
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_53_53;

                                        {
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_20), &io_combinator__conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_53_53);
                                        }
                                        io_combinator__Res7_38 = ((MR_Word) io_combinator__conv20_Res7_38);
                                        switch (MR_tag((MR_Word) io_combinator__Res7_38)) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Box io_combinator__T7_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_38, (MR_Integer) 0));
                                              MR_Word io_combinator__Res8_40;
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_21, (MR_Integer) 1)));
                                              MR_Box io_combinator__conv23_Res8_40;
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_54_54;

                                              {
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_21), &io_combinator__conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_54_54);
                                              }
                                              io_combinator__Res8_40 = ((MR_Word) io_combinator__conv23_Res8_40);
                                              switch (MR_tag((MR_Word) io_combinator__Res8_40)) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    MR_Box io_combinator__T8_41 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_40, (MR_Integer) 0));
                                                    MR_Word io_combinator__Res9_42;
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P9_22, (MR_Integer) 1)));
                                                    MR_Box io_combinator__conv26_Res9_42;
                                                    MR_Box io_combinator__conv25_STATE_VARIABLE_IO_46;

                                                    {
                                                      io_combinator__func_24(((MR_Box) io_combinator__P9_22), &io_combinator__conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv25_STATE_VARIABLE_IO_46);
                                                    }
                                                    io_combinator__Res9_42 = ((MR_Word) io_combinator__conv26_Res9_42);
                                                    switch (MR_tag((MR_Word) io_combinator__Res9_42)) {
                                                      default: /*NOTREACHED*/ MR_assert(0);
                                                      case (MR_Integer) 0:
                                                        *io_combinator__Res_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                        break;
                                                      case (MR_Integer) 1:
                                                        {
                                                          MR_Box io_combinator__T9_43 = (MR_hl_field(MR_mktag(1), io_combinator__Res9_42, (MR_Integer) 0));
                                                          void MR_CALL (* io_combinator__func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_23, (MR_Integer) 1)));
                                                          MR_Box io_combinator__conv28_Res_24;

                                                          {
                                                            io_combinator__func_27(((MR_Box) io_combinator__Combine_23), io_combinator__T1_27, io_combinator__T2_29, io_combinator__T3_31, io_combinator__T4_33, io_combinator__T5_35, io_combinator__T6_37, io_combinator__T7_39, io_combinator__T8_41, io_combinator__T9_43, &io_combinator__conv28_Res_24);
                                                          }
                                                          *io_combinator__Res_24 = ((MR_Word) io_combinator__conv28_Res_24);
                                                        }
                                                        break;
                                                      case (MR_Integer) 2:
                                                        *io_combinator__Res_24 = io_combinator__Res9_42;
                                                        break;
                                                    }
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  *io_combinator__Res_24 = io_combinator__Res8_40;
                                                  break;
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            *io_combinator__Res_24 = io_combinator__Res7_38;
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      *io_combinator__Res_24 = io_combinator__Res6_36;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                *io_combinator__Res_24 = io_combinator__Res5_34;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_24 = io_combinator__Res4_32;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_24 = io_combinator__Res3_30;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_24 = io_combinator__Res2_28;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_24 = io_combinator__Res1_26;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_8_12_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_58,
  MR_Word io_combinator__TypeInfo_for_T2_59,
  MR_Word io_combinator__TypeInfo_for_T3_60,
  MR_Word io_combinator__TypeInfo_for_T4_61,
  MR_Word io_combinator__TypeInfo_for_T5_62,
  MR_Word io_combinator__TypeInfo_for_T6_63,
  MR_Word io_combinator__TypeInfo_for_T7_64,
  MR_Word io_combinator__TypeInfo_for_T8_65,
  MR_Word io_combinator__TypeInfo_for_T_66,
  MR_Word io_combinator__P1_13,
  MR_Word io_combinator__P2_14,
  MR_Word io_combinator__P3_15,
  MR_Word io_combinator__P4_16,
  MR_Word io_combinator__P5_17,
  MR_Word io_combinator__P6_18,
  MR_Word io_combinator__P7_19,
  MR_Word io_combinator__P8_20,
  MR_Word io_combinator__Combine_21,
  MR_Word * io_combinator__Res_22)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_24;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_13, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_24;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_43_43;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_13), &io_combinator__conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_43_43);
    }
    io_combinator__Res1_24 = ((MR_Word) io_combinator__conv2_Res1_24);
    switch (MR_tag((MR_Word) io_combinator__Res1_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_24, (MR_Integer) 0));
          MR_Word io_combinator__Res2_26;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_14, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_26;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_44_44;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_14), &io_combinator__conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_44_44);
          }
          io_combinator__Res2_26 = ((MR_Word) io_combinator__conv5_Res2_26);
          switch (MR_tag((MR_Word) io_combinator__Res2_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_26, (MR_Integer) 0));
                MR_Word io_combinator__Res3_28;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_15, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_28;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_45_45;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_15), &io_combinator__conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_45_45);
                }
                io_combinator__Res3_28 = ((MR_Word) io_combinator__conv8_Res3_28);
                switch (MR_tag((MR_Word) io_combinator__Res3_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_28, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_30;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_16, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_30;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_46_46;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_16), &io_combinator__conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_46_46);
                      }
                      io_combinator__Res4_30 = ((MR_Word) io_combinator__conv11_Res4_30);
                      switch (MR_tag((MR_Word) io_combinator__Res4_30)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_30, (MR_Integer) 0));
                            MR_Word io_combinator__Res5_32;
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_17, (MR_Integer) 1)));
                            MR_Box io_combinator__conv14_Res5_32;
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_47_47;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__P5_17), &io_combinator__conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_47_47);
                            }
                            io_combinator__Res5_32 = ((MR_Word) io_combinator__conv14_Res5_32);
                            switch (MR_tag((MR_Word) io_combinator__Res5_32)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Box io_combinator__T5_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_32, (MR_Integer) 0));
                                  MR_Word io_combinator__Res6_34;
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_18, (MR_Integer) 1)));
                                  MR_Box io_combinator__conv17_Res6_34;
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_48_48;

                                  {
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_18), &io_combinator__conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_48_48);
                                  }
                                  io_combinator__Res6_34 = ((MR_Word) io_combinator__conv17_Res6_34);
                                  switch (MR_tag((MR_Word) io_combinator__Res6_34)) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        MR_Box io_combinator__T6_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_34, (MR_Integer) 0));
                                        MR_Word io_combinator__Res7_36;
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_19, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv20_Res7_36;
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_49_49;

                                        {
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_19), &io_combinator__conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_49_49);
                                        }
                                        io_combinator__Res7_36 = ((MR_Word) io_combinator__conv20_Res7_36);
                                        switch (MR_tag((MR_Word) io_combinator__Res7_36)) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Box io_combinator__T7_37 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_36, (MR_Integer) 0));
                                              MR_Word io_combinator__Res8_38;
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P8_20, (MR_Integer) 1)));
                                              MR_Box io_combinator__conv23_Res8_38;
                                              MR_Box io_combinator__conv22_STATE_VARIABLE_IO_42;

                                              {
                                                io_combinator__func_21(((MR_Box) io_combinator__P8_20), &io_combinator__conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv22_STATE_VARIABLE_IO_42);
                                              }
                                              io_combinator__Res8_38 = ((MR_Word) io_combinator__conv23_Res8_38);
                                              switch (MR_tag((MR_Word) io_combinator__Res8_38)) {
                                                default: /*NOTREACHED*/ MR_assert(0);
                                                case (MR_Integer) 0:
                                                  *io_combinator__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                  break;
                                                case (MR_Integer) 1:
                                                  {
                                                    MR_Box io_combinator__T8_39 = (MR_hl_field(MR_mktag(1), io_combinator__Res8_38, (MR_Integer) 0));
                                                    void MR_CALL (* io_combinator__func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_21, (MR_Integer) 1)));
                                                    MR_Box io_combinator__conv25_Res_22;

                                                    {
                                                      io_combinator__func_24(((MR_Box) io_combinator__Combine_21), io_combinator__T1_25, io_combinator__T2_27, io_combinator__T3_29, io_combinator__T4_31, io_combinator__T5_33, io_combinator__T6_35, io_combinator__T7_37, io_combinator__T8_39, &io_combinator__conv25_Res_22);
                                                    }
                                                    *io_combinator__Res_22 = ((MR_Word) io_combinator__conv25_Res_22);
                                                  }
                                                  break;
                                                case (MR_Integer) 2:
                                                  *io_combinator__Res_22 = io_combinator__Res8_38;
                                                  break;
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            *io_combinator__Res_22 = io_combinator__Res7_36;
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      *io_combinator__Res_22 = io_combinator__Res6_34;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                *io_combinator__Res_22 = io_combinator__Res5_32;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_22 = io_combinator__Res4_30;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_22 = io_combinator__Res3_28;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_22 = io_combinator__Res2_26;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_22 = io_combinator__Res1_24;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_7_11_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_52,
  MR_Word io_combinator__TypeInfo_for_T2_53,
  MR_Word io_combinator__TypeInfo_for_T3_54,
  MR_Word io_combinator__TypeInfo_for_T4_55,
  MR_Word io_combinator__TypeInfo_for_T5_56,
  MR_Word io_combinator__TypeInfo_for_T6_57,
  MR_Word io_combinator__TypeInfo_for_T7_58,
  MR_Word io_combinator__TypeInfo_for_T_59,
  MR_Word io_combinator__P1_12,
  MR_Word io_combinator__P2_13,
  MR_Word io_combinator__P3_14,
  MR_Word io_combinator__P4_15,
  MR_Word io_combinator__P5_16,
  MR_Word io_combinator__P6_17,
  MR_Word io_combinator__P7_18,
  MR_Word io_combinator__Combine_19,
  MR_Word * io_combinator__Res_20)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_22;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_12, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_22;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_39_39;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_12), &io_combinator__conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_39_39);
    }
    io_combinator__Res1_22 = ((MR_Word) io_combinator__conv2_Res1_22);
    switch (MR_tag((MR_Word) io_combinator__Res1_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_22, (MR_Integer) 0));
          MR_Word io_combinator__Res2_24;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_13, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_24;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_40_40;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_13), &io_combinator__conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_40_40);
          }
          io_combinator__Res2_24 = ((MR_Word) io_combinator__conv5_Res2_24);
          switch (MR_tag((MR_Word) io_combinator__Res2_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_24, (MR_Integer) 0));
                MR_Word io_combinator__Res3_26;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_14, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_26;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_41_41;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_14), &io_combinator__conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_41_41);
                }
                io_combinator__Res3_26 = ((MR_Word) io_combinator__conv8_Res3_26);
                switch (MR_tag((MR_Word) io_combinator__Res3_26)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_26, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_28;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_15, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_28;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_42_42;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_15), &io_combinator__conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_42_42);
                      }
                      io_combinator__Res4_28 = ((MR_Word) io_combinator__conv11_Res4_28);
                      switch (MR_tag((MR_Word) io_combinator__Res4_28)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_28, (MR_Integer) 0));
                            MR_Word io_combinator__Res5_30;
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_16, (MR_Integer) 1)));
                            MR_Box io_combinator__conv14_Res5_30;
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_43_43;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__P5_16), &io_combinator__conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_43_43);
                            }
                            io_combinator__Res5_30 = ((MR_Word) io_combinator__conv14_Res5_30);
                            switch (MR_tag((MR_Word) io_combinator__Res5_30)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Box io_combinator__T5_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_30, (MR_Integer) 0));
                                  MR_Word io_combinator__Res6_32;
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_17, (MR_Integer) 1)));
                                  MR_Box io_combinator__conv17_Res6_32;
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_44_44;

                                  {
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_17), &io_combinator__conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_44_44);
                                  }
                                  io_combinator__Res6_32 = ((MR_Word) io_combinator__conv17_Res6_32);
                                  switch (MR_tag((MR_Word) io_combinator__Res6_32)) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        MR_Box io_combinator__T6_33 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_32, (MR_Integer) 0));
                                        MR_Word io_combinator__Res7_34;
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P7_18, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv20_Res7_34;
                                        MR_Box io_combinator__conv19_STATE_VARIABLE_IO_38;

                                        {
                                          io_combinator__func_18(((MR_Box) io_combinator__P7_18), &io_combinator__conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv19_STATE_VARIABLE_IO_38);
                                        }
                                        io_combinator__Res7_34 = ((MR_Word) io_combinator__conv20_Res7_34);
                                        switch (MR_tag((MR_Word) io_combinator__Res7_34)) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            *io_combinator__Res_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Box io_combinator__T7_35 = (MR_hl_field(MR_mktag(1), io_combinator__Res7_34, (MR_Integer) 0));
                                              void MR_CALL (* io_combinator__func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_19, (MR_Integer) 1)));
                                              MR_Box io_combinator__conv22_Res_20;

                                              {
                                                io_combinator__func_21(((MR_Box) io_combinator__Combine_19), io_combinator__T1_23, io_combinator__T2_25, io_combinator__T3_27, io_combinator__T4_29, io_combinator__T5_31, io_combinator__T6_33, io_combinator__T7_35, &io_combinator__conv22_Res_20);
                                              }
                                              *io_combinator__Res_20 = ((MR_Word) io_combinator__conv22_Res_20);
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            *io_combinator__Res_20 = io_combinator__Res7_34;
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      *io_combinator__Res_20 = io_combinator__Res6_32;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                *io_combinator__Res_20 = io_combinator__Res5_30;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_20 = io_combinator__Res4_28;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_20 = io_combinator__Res3_26;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_20 = io_combinator__Res2_24;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_20 = io_combinator__Res1_22;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_6_10_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_46,
  MR_Word io_combinator__TypeInfo_for_T2_47,
  MR_Word io_combinator__TypeInfo_for_T3_48,
  MR_Word io_combinator__TypeInfo_for_T4_49,
  MR_Word io_combinator__TypeInfo_for_T5_50,
  MR_Word io_combinator__TypeInfo_for_T6_51,
  MR_Word io_combinator__TypeInfo_for_T_52,
  MR_Word io_combinator__P1_11,
  MR_Word io_combinator__P2_12,
  MR_Word io_combinator__P3_13,
  MR_Word io_combinator__P4_14,
  MR_Word io_combinator__P5_15,
  MR_Word io_combinator__P6_16,
  MR_Word io_combinator__Combine_17,
  MR_Word * io_combinator__Res_18)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_20;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_11, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_20;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_35_35;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_11), &io_combinator__conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_35_35);
    }
    io_combinator__Res1_20 = ((MR_Word) io_combinator__conv2_Res1_20);
    switch (MR_tag((MR_Word) io_combinator__Res1_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_21 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_20, (MR_Integer) 0));
          MR_Word io_combinator__Res2_22;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_12, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_22;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_36_36;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_12), &io_combinator__conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_36_36);
          }
          io_combinator__Res2_22 = ((MR_Word) io_combinator__conv5_Res2_22);
          switch (MR_tag((MR_Word) io_combinator__Res2_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_22, (MR_Integer) 0));
                MR_Word io_combinator__Res3_24;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_13, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_24;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_37_37;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_13), &io_combinator__conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_37_37);
                }
                io_combinator__Res3_24 = ((MR_Word) io_combinator__conv8_Res3_24);
                switch (MR_tag((MR_Word) io_combinator__Res3_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_24, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_26;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_14, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_26;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_38_38;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_14), &io_combinator__conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_38_38);
                      }
                      io_combinator__Res4_26 = ((MR_Word) io_combinator__conv11_Res4_26);
                      switch (MR_tag((MR_Word) io_combinator__Res4_26)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_26, (MR_Integer) 0));
                            MR_Word io_combinator__Res5_28;
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_15, (MR_Integer) 1)));
                            MR_Box io_combinator__conv14_Res5_28;
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_39_39;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__P5_15), &io_combinator__conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_39_39);
                            }
                            io_combinator__Res5_28 = ((MR_Word) io_combinator__conv14_Res5_28);
                            switch (MR_tag((MR_Word) io_combinator__Res5_28)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Box io_combinator__T5_29 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_28, (MR_Integer) 0));
                                  MR_Word io_combinator__Res6_30;
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P6_16, (MR_Integer) 1)));
                                  MR_Box io_combinator__conv17_Res6_30;
                                  MR_Box io_combinator__conv16_STATE_VARIABLE_IO_34;

                                  {
                                    io_combinator__func_15(((MR_Box) io_combinator__P6_16), &io_combinator__conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv16_STATE_VARIABLE_IO_34);
                                  }
                                  io_combinator__Res6_30 = ((MR_Word) io_combinator__conv17_Res6_30);
                                  switch (MR_tag((MR_Word) io_combinator__Res6_30)) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      *io_combinator__Res_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        MR_Box io_combinator__T6_31 = (MR_hl_field(MR_mktag(1), io_combinator__Res6_30, (MR_Integer) 0));
                                        void MR_CALL (* io_combinator__func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_17, (MR_Integer) 1)));
                                        MR_Box io_combinator__conv19_Res_18;

                                        {
                                          io_combinator__func_18(((MR_Box) io_combinator__Combine_17), io_combinator__T1_21, io_combinator__T2_23, io_combinator__T3_25, io_combinator__T4_27, io_combinator__T5_29, io_combinator__T6_31, &io_combinator__conv19_Res_18);
                                        }
                                        *io_combinator__Res_18 = ((MR_Word) io_combinator__conv19_Res_18);
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      *io_combinator__Res_18 = io_combinator__Res6_30;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                *io_combinator__Res_18 = io_combinator__Res5_28;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_18 = io_combinator__Res4_26;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_18 = io_combinator__Res3_24;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_18 = io_combinator__Res2_22;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_18 = io_combinator__Res1_20;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_5_9_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_40,
  MR_Word io_combinator__TypeInfo_for_T2_41,
  MR_Word io_combinator__TypeInfo_for_T3_42,
  MR_Word io_combinator__TypeInfo_for_T4_43,
  MR_Word io_combinator__TypeInfo_for_T5_44,
  MR_Word io_combinator__TypeInfo_for_T_45,
  MR_Word io_combinator__P1_10,
  MR_Word io_combinator__P2_11,
  MR_Word io_combinator__P3_12,
  MR_Word io_combinator__P4_13,
  MR_Word io_combinator__P5_14,
  MR_Word io_combinator__Combine_15,
  MR_Word * io_combinator__Res_16)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_18;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_10, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_18;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_31_31;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_10), &io_combinator__conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_31_31);
    }
    io_combinator__Res1_18 = ((MR_Word) io_combinator__conv2_Res1_18);
    switch (MR_tag((MR_Word) io_combinator__Res1_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_19 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_18, (MR_Integer) 0));
          MR_Word io_combinator__Res2_20;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_11, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_20;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_32_32;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_11), &io_combinator__conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_32_32);
          }
          io_combinator__Res2_20 = ((MR_Word) io_combinator__conv5_Res2_20);
          switch (MR_tag((MR_Word) io_combinator__Res2_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_21 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_20, (MR_Integer) 0));
                MR_Word io_combinator__Res3_22;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_12, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_22;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_33_33;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_12), &io_combinator__conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_33_33);
                }
                io_combinator__Res3_22 = ((MR_Word) io_combinator__conv8_Res3_22);
                switch (MR_tag((MR_Word) io_combinator__Res3_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_22, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_24;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_13, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_24;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_34_34;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_13), &io_combinator__conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_34_34);
                      }
                      io_combinator__Res4_24 = ((MR_Word) io_combinator__conv11_Res4_24);
                      switch (MR_tag((MR_Word) io_combinator__Res4_24)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_25 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_24, (MR_Integer) 0));
                            MR_Word io_combinator__Res5_26;
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P5_14, (MR_Integer) 1)));
                            MR_Box io_combinator__conv14_Res5_26;
                            MR_Box io_combinator__conv13_STATE_VARIABLE_IO_30;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__P5_14), &io_combinator__conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv13_STATE_VARIABLE_IO_30);
                            }
                            io_combinator__Res5_26 = ((MR_Word) io_combinator__conv14_Res5_26);
                            switch (MR_tag((MR_Word) io_combinator__Res5_26)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *io_combinator__Res_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Box io_combinator__T5_27 = (MR_hl_field(MR_mktag(1), io_combinator__Res5_26, (MR_Integer) 0));
                                  void MR_CALL (* io_combinator__func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_15, (MR_Integer) 1)));
                                  MR_Box io_combinator__conv16_Res_16;

                                  {
                                    io_combinator__func_15(((MR_Box) io_combinator__Combine_15), io_combinator__T1_19, io_combinator__T2_21, io_combinator__T3_23, io_combinator__T4_25, io_combinator__T5_27, &io_combinator__conv16_Res_16);
                                  }
                                  *io_combinator__Res_16 = ((MR_Word) io_combinator__conv16_Res_16);
                                }
                                break;
                              case (MR_Integer) 2:
                                *io_combinator__Res_16 = io_combinator__Res5_26;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_16 = io_combinator__Res4_24;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_16 = io_combinator__Res3_22;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_16 = io_combinator__Res2_20;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_16 = io_combinator__Res1_18;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_4_8_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_34,
  MR_Word io_combinator__TypeInfo_for_T2_35,
  MR_Word io_combinator__TypeInfo_for_T3_36,
  MR_Word io_combinator__TypeInfo_for_T4_37,
  MR_Word io_combinator__TypeInfo_for_T_38,
  MR_Word io_combinator__P1_9,
  MR_Word io_combinator__P2_10,
  MR_Word io_combinator__P3_11,
  MR_Word io_combinator__P4_12,
  MR_Word io_combinator__Combine_13,
  MR_Word * io_combinator__Res_14)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_16;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_9, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_16;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_27_27;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_9), &io_combinator__conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_27_27);
    }
    io_combinator__Res1_16 = ((MR_Word) io_combinator__conv2_Res1_16);
    switch (MR_tag((MR_Word) io_combinator__Res1_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_17 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_16, (MR_Integer) 0));
          MR_Word io_combinator__Res2_18;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_10, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_18;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_28_28;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_10), &io_combinator__conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_28_28);
          }
          io_combinator__Res2_18 = ((MR_Word) io_combinator__conv5_Res2_18);
          switch (MR_tag((MR_Word) io_combinator__Res2_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_19 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_18, (MR_Integer) 0));
                MR_Word io_combinator__Res3_20;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_11, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_20;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_29_29;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_11), &io_combinator__conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_29_29);
                }
                io_combinator__Res3_20 = ((MR_Word) io_combinator__conv8_Res3_20);
                switch (MR_tag((MR_Word) io_combinator__Res3_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_21 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_20, (MR_Integer) 0));
                      MR_Word io_combinator__Res4_22;
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P4_12, (MR_Integer) 1)));
                      MR_Box io_combinator__conv11_Res4_22;
                      MR_Box io_combinator__conv10_STATE_VARIABLE_IO_26;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__P4_12), &io_combinator__conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv10_STATE_VARIABLE_IO_26);
                      }
                      io_combinator__Res4_22 = ((MR_Word) io_combinator__conv11_Res4_22);
                      switch (MR_tag((MR_Word) io_combinator__Res4_22)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *io_combinator__Res_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box io_combinator__T4_23 = (MR_hl_field(MR_mktag(1), io_combinator__Res4_22, (MR_Integer) 0));
                            void MR_CALL (* io_combinator__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_13, (MR_Integer) 1)));
                            MR_Box io_combinator__conv13_Res_14;

                            {
                              io_combinator__func_12(((MR_Box) io_combinator__Combine_13), io_combinator__T1_17, io_combinator__T2_19, io_combinator__T3_21, io_combinator__T4_23, &io_combinator__conv13_Res_14);
                            }
                            *io_combinator__Res_14 = ((MR_Word) io_combinator__conv13_Res_14);
                          }
                          break;
                        case (MR_Integer) 2:
                          *io_combinator__Res_14 = io_combinator__Res4_22;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_14 = io_combinator__Res3_20;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_14 = io_combinator__Res2_18;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_14 = io_combinator__Res1_16;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_3_7_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_28,
  MR_Word io_combinator__TypeInfo_for_T2_29,
  MR_Word io_combinator__TypeInfo_for_T3_30,
  MR_Word io_combinator__TypeInfo_for_T_31,
  MR_Word io_combinator__P1_8,
  MR_Word io_combinator__P2_9,
  MR_Word io_combinator__P3_10,
  MR_Word io_combinator__Combine_11,
  MR_Word * io_combinator__Res_12)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_14;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_8, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_14;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_23_23;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_8), &io_combinator__conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_23_23);
    }
    io_combinator__Res1_14 = ((MR_Word) io_combinator__conv2_Res1_14);
    switch (MR_tag((MR_Word) io_combinator__Res1_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_15 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_14, (MR_Integer) 0));
          MR_Word io_combinator__Res2_16;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_9, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_16;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_24_24;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_9), &io_combinator__conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_24_24);
          }
          io_combinator__Res2_16 = ((MR_Word) io_combinator__conv5_Res2_16);
          switch (MR_tag((MR_Word) io_combinator__Res2_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_17 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_16, (MR_Integer) 0));
                MR_Word io_combinator__Res3_18;
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P3_10, (MR_Integer) 1)));
                MR_Box io_combinator__conv8_Res3_18;
                MR_Box io_combinator__conv7_STATE_VARIABLE_IO_22;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__P3_10), &io_combinator__conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv7_STATE_VARIABLE_IO_22);
                }
                io_combinator__Res3_18 = ((MR_Word) io_combinator__conv8_Res3_18);
                switch (MR_tag((MR_Word) io_combinator__Res3_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *io_combinator__Res_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box io_combinator__T3_19 = (MR_hl_field(MR_mktag(1), io_combinator__Res3_18, (MR_Integer) 0));
                      void MR_CALL (* io_combinator__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_11, (MR_Integer) 1)));
                      MR_Box io_combinator__conv10_Res_12;

                      {
                        io_combinator__func_9(((MR_Box) io_combinator__Combine_11), io_combinator__T1_15, io_combinator__T2_17, io_combinator__T3_19, &io_combinator__conv10_Res_12);
                      }
                      *io_combinator__Res_12 = ((MR_Word) io_combinator__conv10_Res_12);
                    }
                    break;
                  case (MR_Integer) 2:
                    *io_combinator__Res_12 = io_combinator__Res3_18;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_12 = io_combinator__Res2_16;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_12 = io_combinator__Res1_14;
        break;
    }
  }
}

void MR_CALL 
io_combinator__sequence_2_6_p_0(
  MR_Word io_combinator__TypeInfo_for_T1_22,
  MR_Word io_combinator__TypeInfo_for_T2_23,
  MR_Word io_combinator__TypeInfo_for_T_24,
  MR_Word io_combinator__P1_7,
  MR_Word io_combinator__P2_8,
  MR_Word io_combinator__Combine_9,
  MR_Word * io_combinator__Res_10)
{
  {
    MR_bool io_combinator__succeeded;
    MR_Word io_combinator__Res1_12;
    void MR_CALL (* io_combinator__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P1_7, (MR_Integer) 1)));
    MR_Box io_combinator__conv2_Res1_12;
    MR_Box io_combinator__conv1_STATE_VARIABLE_IO_19_19;

    {
      io_combinator__func_0(((MR_Box) io_combinator__P1_7), &io_combinator__conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv1_STATE_VARIABLE_IO_19_19);
    }
    io_combinator__Res1_12 = ((MR_Word) io_combinator__conv2_Res1_12);
    switch (MR_tag((MR_Word) io_combinator__Res1_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *io_combinator__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box io_combinator__T1_13 = (MR_hl_field(MR_mktag(1), io_combinator__Res1_12, (MR_Integer) 0));
          MR_Word io_combinator__Res2_14;
          void MR_CALL (* io_combinator__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__P2_8, (MR_Integer) 1)));
          MR_Box io_combinator__conv5_Res2_14;
          MR_Box io_combinator__conv4_STATE_VARIABLE_IO_18;

          {
            io_combinator__func_3(((MR_Box) io_combinator__P2_8), &io_combinator__conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &io_combinator__conv4_STATE_VARIABLE_IO_18);
          }
          io_combinator__Res2_14 = ((MR_Word) io_combinator__conv5_Res2_14);
          switch (MR_tag((MR_Word) io_combinator__Res2_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *io_combinator__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Box io_combinator__T2_15 = (MR_hl_field(MR_mktag(1), io_combinator__Res2_14, (MR_Integer) 0));
                void MR_CALL (* io_combinator__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), io_combinator__Combine_9, (MR_Integer) 1)));
                MR_Box io_combinator__conv7_Res_10;

                {
                  io_combinator__func_6(((MR_Box) io_combinator__Combine_9), io_combinator__T1_13, io_combinator__T2_15, &io_combinator__conv7_Res_10);
                }
                *io_combinator__Res_10 = ((MR_Word) io_combinator__conv7_Res_10);
              }
              break;
            case (MR_Integer) 2:
              *io_combinator__Res_10 = io_combinator__Res2_14;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *io_combinator__Res_10 = io_combinator__Res1_12;
        break;
    }
  }
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
