/*
** Automatically generated from `io_combinator.m'
** by the Mercury compiler,
** version rotd-2022-07-27
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


// :- module io_combinator.
// :- implementation.

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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
io_combinator__maybe_error_sequence_13_17_p_0(
  MR_Word TypeInfo_for_T1_88,
  MR_Word TypeInfo_for_T2_89,
  MR_Word TypeInfo_for_T3_90,
  MR_Word TypeInfo_for_T4_91,
  MR_Word TypeInfo_for_T5_92,
  MR_Word TypeInfo_for_T6_93,
  MR_Word TypeInfo_for_T7_94,
  MR_Word TypeInfo_for_T8_95,
  MR_Word TypeInfo_for_T9_96,
  MR_Word TypeInfo_for_T10_97,
  MR_Word TypeInfo_for_T11_98,
  MR_Word TypeInfo_for_T12_99,
  MR_Word TypeInfo_for_T13_100,
  MR_Word TypeInfo_for_T_101,
  MR_Word P1_18,
  MR_Word P2_19,
  MR_Word P3_20,
  MR_Word P4_21,
  MR_Word P5_22,
  MR_Word P6_23,
  MR_Word P7_24,
  MR_Word P8_25,
  MR_Word P9_26,
  MR_Word P10_27,
  MR_Word P11_28,
  MR_Word P12_29,
  MR_Word P13_30,
  MR_Word Combine_31,
  MR_Word * Res_32)
{
  MR_Word Res1_34;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_18, (MR_Integer) 1))));
  MR_Box conv2_Res1_34;
  MR_Box conv1_STATE_VARIABLE_IO_63_63;

  func_0(((MR_Box) (P1_18)), &conv2_Res1_34, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_63_63);
  Res1_34 = ((MR_Word) (conv2_Res1_34));
  if (((MR_tag((MR_Word) Res1_34)) == (MR_Integer) 1))
    *Res_32 = Res1_34;
  else
  {
    MR_Box T1_35 = (MR_hl_field(MR_mktag(0), Res1_34, (MR_Integer) 0));
    MR_Word Res2_36;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_19, (MR_Integer) 1))));
    MR_Box conv5_Res2_36;
    MR_Box conv4_STATE_VARIABLE_IO_64_64;

    func_3(((MR_Box) (P2_19)), &conv5_Res2_36, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_64_64);
    Res2_36 = ((MR_Word) (conv5_Res2_36));
    if (((MR_tag((MR_Word) Res2_36)) == (MR_Integer) 1))
      *Res_32 = Res2_36;
    else
    {
      MR_Box T2_37 = (MR_hl_field(MR_mktag(0), Res2_36, (MR_Integer) 0));
      MR_Word Res3_38;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_20, (MR_Integer) 1))));
      MR_Box conv8_Res3_38;
      MR_Box conv7_STATE_VARIABLE_IO_65_65;

      func_6(((MR_Box) (P3_20)), &conv8_Res3_38, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_65_65);
      Res3_38 = ((MR_Word) (conv8_Res3_38));
      if (((MR_tag((MR_Word) Res3_38)) == (MR_Integer) 1))
        *Res_32 = Res3_38;
      else
      {
        MR_Box T3_39 = (MR_hl_field(MR_mktag(0), Res3_38, (MR_Integer) 0));
        MR_Word Res4_40;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_21, (MR_Integer) 1))));
        MR_Box conv11_Res4_40;
        MR_Box conv10_STATE_VARIABLE_IO_66_66;

        func_9(((MR_Box) (P4_21)), &conv11_Res4_40, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_66_66);
        Res4_40 = ((MR_Word) (conv11_Res4_40));
        if (((MR_tag((MR_Word) Res4_40)) == (MR_Integer) 1))
          *Res_32 = Res4_40;
        else
        {
          MR_Box T4_41 = (MR_hl_field(MR_mktag(0), Res4_40, (MR_Integer) 0));
          MR_Word Res5_42;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_22, (MR_Integer) 1))));
          MR_Box conv14_Res5_42;
          MR_Box conv13_STATE_VARIABLE_IO_67_67;

          func_12(((MR_Box) (P5_22)), &conv14_Res5_42, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_67_67);
          Res5_42 = ((MR_Word) (conv14_Res5_42));
          if (((MR_tag((MR_Word) Res5_42)) == (MR_Integer) 1))
            *Res_32 = Res5_42;
          else
          {
            MR_Box T5_43 = (MR_hl_field(MR_mktag(0), Res5_42, (MR_Integer) 0));
            MR_Word Res6_44;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_23, (MR_Integer) 1))));
            MR_Box conv17_Res6_44;
            MR_Box conv16_STATE_VARIABLE_IO_68_68;

            func_15(((MR_Box) (P6_23)), &conv17_Res6_44, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_68_68);
            Res6_44 = ((MR_Word) (conv17_Res6_44));
            if (((MR_tag((MR_Word) Res6_44)) == (MR_Integer) 1))
              *Res_32 = Res6_44;
            else
            {
              MR_Box T6_45 = (MR_hl_field(MR_mktag(0), Res6_44, (MR_Integer) 0));
              MR_Word Res7_46;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_24, (MR_Integer) 1))));
              MR_Box conv20_Res7_46;
              MR_Box conv19_STATE_VARIABLE_IO_69_69;

              func_18(((MR_Box) (P7_24)), &conv20_Res7_46, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_69_69);
              Res7_46 = ((MR_Word) (conv20_Res7_46));
              if (((MR_tag((MR_Word) Res7_46)) == (MR_Integer) 1))
                *Res_32 = Res7_46;
              else
              {
                MR_Box T7_47 = (MR_hl_field(MR_mktag(0), Res7_46, (MR_Integer) 0));
                MR_Word Res8_48;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_25, (MR_Integer) 1))));
                MR_Box conv23_Res8_48;
                MR_Box conv22_STATE_VARIABLE_IO_70_70;

                func_21(((MR_Box) (P8_25)), &conv23_Res8_48, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_70_70);
                Res8_48 = ((MR_Word) (conv23_Res8_48));
                if (((MR_tag((MR_Word) Res8_48)) == (MR_Integer) 1))
                  *Res_32 = Res8_48;
                else
                {
                  MR_Box T8_49 = (MR_hl_field(MR_mktag(0), Res8_48, (MR_Integer) 0));
                  MR_Word Res9_50;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_26, (MR_Integer) 1))));
                  MR_Box conv26_Res9_50;
                  MR_Box conv25_STATE_VARIABLE_IO_71_71;

                  func_24(((MR_Box) (P9_26)), &conv26_Res9_50, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_71_71);
                  Res9_50 = ((MR_Word) (conv26_Res9_50));
                  if (((MR_tag((MR_Word) Res9_50)) == (MR_Integer) 1))
                    *Res_32 = Res9_50;
                  else
                  {
                    MR_Box T9_51 = (MR_hl_field(MR_mktag(0), Res9_50, (MR_Integer) 0));
                    MR_Word Res10_52;
                    void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_27, (MR_Integer) 1))));
                    MR_Box conv29_Res10_52;
                    MR_Box conv28_STATE_VARIABLE_IO_72_72;

                    func_27(((MR_Box) (P10_27)), &conv29_Res10_52, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_72_72);
                    Res10_52 = ((MR_Word) (conv29_Res10_52));
                    if (((MR_tag((MR_Word) Res10_52)) == (MR_Integer) 1))
                      *Res_32 = Res10_52;
                    else
                    {
                      MR_Box T10_53 = (MR_hl_field(MR_mktag(0), Res10_52, (MR_Integer) 0));
                      MR_Word Res11_54;
                      void MR_CALL (* func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P11_28, (MR_Integer) 1))));
                      MR_Box conv32_Res11_54;
                      MR_Box conv31_STATE_VARIABLE_IO_73_73;

                      func_30(((MR_Box) (P11_28)), &conv32_Res11_54, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_73_73);
                      Res11_54 = ((MR_Word) (conv32_Res11_54));
                      if (((MR_tag((MR_Word) Res11_54)) == (MR_Integer) 1))
                        *Res_32 = Res11_54;
                      else
                      {
                        MR_Box T11_55 = (MR_hl_field(MR_mktag(0), Res11_54, (MR_Integer) 0));
                        MR_Word Res12_56;
                        void MR_CALL (* func_33)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P12_29, (MR_Integer) 1))));
                        MR_Box conv35_Res12_56;
                        MR_Box conv34_STATE_VARIABLE_IO_74_74;

                        func_33(((MR_Box) (P12_29)), &conv35_Res12_56, ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_74_74);
                        Res12_56 = ((MR_Word) (conv35_Res12_56));
                        if (((MR_tag((MR_Word) Res12_56)) == (MR_Integer) 1))
                          *Res_32 = Res12_56;
                        else
                        {
                          MR_Box T12_57 = (MR_hl_field(MR_mktag(0), Res12_56, (MR_Integer) 0));
                          MR_Word Res13_58;
                          void MR_CALL (* func_36)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P13_30, (MR_Integer) 1))));
                          MR_Box conv38_Res13_58;
                          MR_Box conv37_STATE_VARIABLE_IO_62;

                          func_36(((MR_Box) (P13_30)), &conv38_Res13_58, ((MR_Box) ((MR_Integer) 0)), &conv37_STATE_VARIABLE_IO_62);
                          Res13_58 = ((MR_Word) (conv38_Res13_58));
                          if (((MR_tag((MR_Word) Res13_58)) == (MR_Integer) 1))
                            *Res_32 = Res13_58;
                          else
                          {
                            MR_Box T13_59 = (MR_hl_field(MR_mktag(0), Res13_58, (MR_Integer) 0));
                            void MR_CALL (* func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_31, (MR_Integer) 1))));
                            MR_Box conv40_Res_32;

                            func_39(((MR_Box) (Combine_31)), T1_35, T2_37, T3_39, T4_41, T5_43, T6_45, T7_47, T8_49, T9_51, T10_53, T11_55, T12_57, T13_59, &conv40_Res_32);
                            *Res_32 = ((MR_Word) (conv40_Res_32));
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
  MR_Word TypeInfo_for_T1_82,
  MR_Word TypeInfo_for_T2_83,
  MR_Word TypeInfo_for_T3_84,
  MR_Word TypeInfo_for_T4_85,
  MR_Word TypeInfo_for_T5_86,
  MR_Word TypeInfo_for_T6_87,
  MR_Word TypeInfo_for_T7_88,
  MR_Word TypeInfo_for_T8_89,
  MR_Word TypeInfo_for_T9_90,
  MR_Word TypeInfo_for_T10_91,
  MR_Word TypeInfo_for_T11_92,
  MR_Word TypeInfo_for_T12_93,
  MR_Word TypeInfo_for_T_94,
  MR_Word P1_17,
  MR_Word P2_18,
  MR_Word P3_19,
  MR_Word P4_20,
  MR_Word P5_21,
  MR_Word P6_22,
  MR_Word P7_23,
  MR_Word P8_24,
  MR_Word P9_25,
  MR_Word P10_26,
  MR_Word P11_27,
  MR_Word P12_28,
  MR_Word Combine_29,
  MR_Word * Res_30)
{
  MR_Word Res1_32;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_17, (MR_Integer) 1))));
  MR_Box conv2_Res1_32;
  MR_Box conv1_STATE_VARIABLE_IO_59_59;

  func_0(((MR_Box) (P1_17)), &conv2_Res1_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_59_59);
  Res1_32 = ((MR_Word) (conv2_Res1_32));
  if (((MR_tag((MR_Word) Res1_32)) == (MR_Integer) 1))
    *Res_30 = Res1_32;
  else
  {
    MR_Box T1_33 = (MR_hl_field(MR_mktag(0), Res1_32, (MR_Integer) 0));
    MR_Word Res2_34;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_18, (MR_Integer) 1))));
    MR_Box conv5_Res2_34;
    MR_Box conv4_STATE_VARIABLE_IO_60_60;

    func_3(((MR_Box) (P2_18)), &conv5_Res2_34, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_60_60);
    Res2_34 = ((MR_Word) (conv5_Res2_34));
    if (((MR_tag((MR_Word) Res2_34)) == (MR_Integer) 1))
      *Res_30 = Res2_34;
    else
    {
      MR_Box T2_35 = (MR_hl_field(MR_mktag(0), Res2_34, (MR_Integer) 0));
      MR_Word Res3_36;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_19, (MR_Integer) 1))));
      MR_Box conv8_Res3_36;
      MR_Box conv7_STATE_VARIABLE_IO_61_61;

      func_6(((MR_Box) (P3_19)), &conv8_Res3_36, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_61_61);
      Res3_36 = ((MR_Word) (conv8_Res3_36));
      if (((MR_tag((MR_Word) Res3_36)) == (MR_Integer) 1))
        *Res_30 = Res3_36;
      else
      {
        MR_Box T3_37 = (MR_hl_field(MR_mktag(0), Res3_36, (MR_Integer) 0));
        MR_Word Res4_38;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_20, (MR_Integer) 1))));
        MR_Box conv11_Res4_38;
        MR_Box conv10_STATE_VARIABLE_IO_62_62;

        func_9(((MR_Box) (P4_20)), &conv11_Res4_38, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_62_62);
        Res4_38 = ((MR_Word) (conv11_Res4_38));
        if (((MR_tag((MR_Word) Res4_38)) == (MR_Integer) 1))
          *Res_30 = Res4_38;
        else
        {
          MR_Box T4_39 = (MR_hl_field(MR_mktag(0), Res4_38, (MR_Integer) 0));
          MR_Word Res5_40;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_21, (MR_Integer) 1))));
          MR_Box conv14_Res5_40;
          MR_Box conv13_STATE_VARIABLE_IO_63_63;

          func_12(((MR_Box) (P5_21)), &conv14_Res5_40, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_63_63);
          Res5_40 = ((MR_Word) (conv14_Res5_40));
          if (((MR_tag((MR_Word) Res5_40)) == (MR_Integer) 1))
            *Res_30 = Res5_40;
          else
          {
            MR_Box T5_41 = (MR_hl_field(MR_mktag(0), Res5_40, (MR_Integer) 0));
            MR_Word Res6_42;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_22, (MR_Integer) 1))));
            MR_Box conv17_Res6_42;
            MR_Box conv16_STATE_VARIABLE_IO_64_64;

            func_15(((MR_Box) (P6_22)), &conv17_Res6_42, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_64_64);
            Res6_42 = ((MR_Word) (conv17_Res6_42));
            if (((MR_tag((MR_Word) Res6_42)) == (MR_Integer) 1))
              *Res_30 = Res6_42;
            else
            {
              MR_Box T6_43 = (MR_hl_field(MR_mktag(0), Res6_42, (MR_Integer) 0));
              MR_Word Res7_44;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_23, (MR_Integer) 1))));
              MR_Box conv20_Res7_44;
              MR_Box conv19_STATE_VARIABLE_IO_65_65;

              func_18(((MR_Box) (P7_23)), &conv20_Res7_44, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_65_65);
              Res7_44 = ((MR_Word) (conv20_Res7_44));
              if (((MR_tag((MR_Word) Res7_44)) == (MR_Integer) 1))
                *Res_30 = Res7_44;
              else
              {
                MR_Box T7_45 = (MR_hl_field(MR_mktag(0), Res7_44, (MR_Integer) 0));
                MR_Word Res8_46;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_24, (MR_Integer) 1))));
                MR_Box conv23_Res8_46;
                MR_Box conv22_STATE_VARIABLE_IO_66_66;

                func_21(((MR_Box) (P8_24)), &conv23_Res8_46, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_66_66);
                Res8_46 = ((MR_Word) (conv23_Res8_46));
                if (((MR_tag((MR_Word) Res8_46)) == (MR_Integer) 1))
                  *Res_30 = Res8_46;
                else
                {
                  MR_Box T8_47 = (MR_hl_field(MR_mktag(0), Res8_46, (MR_Integer) 0));
                  MR_Word Res9_48;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_25, (MR_Integer) 1))));
                  MR_Box conv26_Res9_48;
                  MR_Box conv25_STATE_VARIABLE_IO_67_67;

                  func_24(((MR_Box) (P9_25)), &conv26_Res9_48, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_67_67);
                  Res9_48 = ((MR_Word) (conv26_Res9_48));
                  if (((MR_tag((MR_Word) Res9_48)) == (MR_Integer) 1))
                    *Res_30 = Res9_48;
                  else
                  {
                    MR_Box T9_49 = (MR_hl_field(MR_mktag(0), Res9_48, (MR_Integer) 0));
                    MR_Word Res10_50;
                    void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_26, (MR_Integer) 1))));
                    MR_Box conv29_Res10_50;
                    MR_Box conv28_STATE_VARIABLE_IO_68_68;

                    func_27(((MR_Box) (P10_26)), &conv29_Res10_50, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_68_68);
                    Res10_50 = ((MR_Word) (conv29_Res10_50));
                    if (((MR_tag((MR_Word) Res10_50)) == (MR_Integer) 1))
                      *Res_30 = Res10_50;
                    else
                    {
                      MR_Box T10_51 = (MR_hl_field(MR_mktag(0), Res10_50, (MR_Integer) 0));
                      MR_Word Res11_52;
                      void MR_CALL (* func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P11_27, (MR_Integer) 1))));
                      MR_Box conv32_Res11_52;
                      MR_Box conv31_STATE_VARIABLE_IO_69_69;

                      func_30(((MR_Box) (P11_27)), &conv32_Res11_52, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_69_69);
                      Res11_52 = ((MR_Word) (conv32_Res11_52));
                      if (((MR_tag((MR_Word) Res11_52)) == (MR_Integer) 1))
                        *Res_30 = Res11_52;
                      else
                      {
                        MR_Box T11_53 = (MR_hl_field(MR_mktag(0), Res11_52, (MR_Integer) 0));
                        MR_Word Res12_54;
                        void MR_CALL (* func_33)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P12_28, (MR_Integer) 1))));
                        MR_Box conv35_Res12_54;
                        MR_Box conv34_STATE_VARIABLE_IO_58;

                        func_33(((MR_Box) (P12_28)), &conv35_Res12_54, ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_IO_58);
                        Res12_54 = ((MR_Word) (conv35_Res12_54));
                        if (((MR_tag((MR_Word) Res12_54)) == (MR_Integer) 1))
                          *Res_30 = Res12_54;
                        else
                        {
                          MR_Box T12_55 = (MR_hl_field(MR_mktag(0), Res12_54, (MR_Integer) 0));
                          void MR_CALL (* func_36)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_29, (MR_Integer) 1))));
                          MR_Box conv37_Res_30;

                          func_36(((MR_Box) (Combine_29)), T1_33, T2_35, T3_37, T4_39, T5_41, T6_43, T7_45, T8_47, T9_49, T10_51, T11_53, T12_55, &conv37_Res_30);
                          *Res_30 = ((MR_Word) (conv37_Res_30));
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
  MR_Word TypeInfo_for_T1_76,
  MR_Word TypeInfo_for_T2_77,
  MR_Word TypeInfo_for_T3_78,
  MR_Word TypeInfo_for_T4_79,
  MR_Word TypeInfo_for_T5_80,
  MR_Word TypeInfo_for_T6_81,
  MR_Word TypeInfo_for_T7_82,
  MR_Word TypeInfo_for_T8_83,
  MR_Word TypeInfo_for_T9_84,
  MR_Word TypeInfo_for_T10_85,
  MR_Word TypeInfo_for_T11_86,
  MR_Word TypeInfo_for_T_87,
  MR_Word P1_16,
  MR_Word P2_17,
  MR_Word P3_18,
  MR_Word P4_19,
  MR_Word P5_20,
  MR_Word P6_21,
  MR_Word P7_22,
  MR_Word P8_23,
  MR_Word P9_24,
  MR_Word P10_25,
  MR_Word P11_26,
  MR_Word Combine_27,
  MR_Word * Res_28)
{
  MR_Word Res1_30;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_16, (MR_Integer) 1))));
  MR_Box conv2_Res1_30;
  MR_Box conv1_STATE_VARIABLE_IO_55_55;

  func_0(((MR_Box) (P1_16)), &conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_55_55);
  Res1_30 = ((MR_Word) (conv2_Res1_30));
  if (((MR_tag((MR_Word) Res1_30)) == (MR_Integer) 1))
    *Res_28 = Res1_30;
  else
  {
    MR_Box T1_31 = (MR_hl_field(MR_mktag(0), Res1_30, (MR_Integer) 0));
    MR_Word Res2_32;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_17, (MR_Integer) 1))));
    MR_Box conv5_Res2_32;
    MR_Box conv4_STATE_VARIABLE_IO_56_56;

    func_3(((MR_Box) (P2_17)), &conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_56);
    Res2_32 = ((MR_Word) (conv5_Res2_32));
    if (((MR_tag((MR_Word) Res2_32)) == (MR_Integer) 1))
      *Res_28 = Res2_32;
    else
    {
      MR_Box T2_33 = (MR_hl_field(MR_mktag(0), Res2_32, (MR_Integer) 0));
      MR_Word Res3_34;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_18, (MR_Integer) 1))));
      MR_Box conv8_Res3_34;
      MR_Box conv7_STATE_VARIABLE_IO_57_57;

      func_6(((MR_Box) (P3_18)), &conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_57_57);
      Res3_34 = ((MR_Word) (conv8_Res3_34));
      if (((MR_tag((MR_Word) Res3_34)) == (MR_Integer) 1))
        *Res_28 = Res3_34;
      else
      {
        MR_Box T3_35 = (MR_hl_field(MR_mktag(0), Res3_34, (MR_Integer) 0));
        MR_Word Res4_36;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_19, (MR_Integer) 1))));
        MR_Box conv11_Res4_36;
        MR_Box conv10_STATE_VARIABLE_IO_58_58;

        func_9(((MR_Box) (P4_19)), &conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_58_58);
        Res4_36 = ((MR_Word) (conv11_Res4_36));
        if (((MR_tag((MR_Word) Res4_36)) == (MR_Integer) 1))
          *Res_28 = Res4_36;
        else
        {
          MR_Box T4_37 = (MR_hl_field(MR_mktag(0), Res4_36, (MR_Integer) 0));
          MR_Word Res5_38;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_20, (MR_Integer) 1))));
          MR_Box conv14_Res5_38;
          MR_Box conv13_STATE_VARIABLE_IO_59_59;

          func_12(((MR_Box) (P5_20)), &conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_59_59);
          Res5_38 = ((MR_Word) (conv14_Res5_38));
          if (((MR_tag((MR_Word) Res5_38)) == (MR_Integer) 1))
            *Res_28 = Res5_38;
          else
          {
            MR_Box T5_39 = (MR_hl_field(MR_mktag(0), Res5_38, (MR_Integer) 0));
            MR_Word Res6_40;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_21, (MR_Integer) 1))));
            MR_Box conv17_Res6_40;
            MR_Box conv16_STATE_VARIABLE_IO_60_60;

            func_15(((MR_Box) (P6_21)), &conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_60_60);
            Res6_40 = ((MR_Word) (conv17_Res6_40));
            if (((MR_tag((MR_Word) Res6_40)) == (MR_Integer) 1))
              *Res_28 = Res6_40;
            else
            {
              MR_Box T6_41 = (MR_hl_field(MR_mktag(0), Res6_40, (MR_Integer) 0));
              MR_Word Res7_42;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_22, (MR_Integer) 1))));
              MR_Box conv20_Res7_42;
              MR_Box conv19_STATE_VARIABLE_IO_61_61;

              func_18(((MR_Box) (P7_22)), &conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_61_61);
              Res7_42 = ((MR_Word) (conv20_Res7_42));
              if (((MR_tag((MR_Word) Res7_42)) == (MR_Integer) 1))
                *Res_28 = Res7_42;
              else
              {
                MR_Box T7_43 = (MR_hl_field(MR_mktag(0), Res7_42, (MR_Integer) 0));
                MR_Word Res8_44;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_23, (MR_Integer) 1))));
                MR_Box conv23_Res8_44;
                MR_Box conv22_STATE_VARIABLE_IO_62_62;

                func_21(((MR_Box) (P8_23)), &conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_62_62);
                Res8_44 = ((MR_Word) (conv23_Res8_44));
                if (((MR_tag((MR_Word) Res8_44)) == (MR_Integer) 1))
                  *Res_28 = Res8_44;
                else
                {
                  MR_Box T8_45 = (MR_hl_field(MR_mktag(0), Res8_44, (MR_Integer) 0));
                  MR_Word Res9_46;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_24, (MR_Integer) 1))));
                  MR_Box conv26_Res9_46;
                  MR_Box conv25_STATE_VARIABLE_IO_63_63;

                  func_24(((MR_Box) (P9_24)), &conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_63_63);
                  Res9_46 = ((MR_Word) (conv26_Res9_46));
                  if (((MR_tag((MR_Word) Res9_46)) == (MR_Integer) 1))
                    *Res_28 = Res9_46;
                  else
                  {
                    MR_Box T9_47 = (MR_hl_field(MR_mktag(0), Res9_46, (MR_Integer) 0));
                    MR_Word Res10_48;
                    void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_25, (MR_Integer) 1))));
                    MR_Box conv29_Res10_48;
                    MR_Box conv28_STATE_VARIABLE_IO_64_64;

                    func_27(((MR_Box) (P10_25)), &conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_64_64);
                    Res10_48 = ((MR_Word) (conv29_Res10_48));
                    if (((MR_tag((MR_Word) Res10_48)) == (MR_Integer) 1))
                      *Res_28 = Res10_48;
                    else
                    {
                      MR_Box T10_49 = (MR_hl_field(MR_mktag(0), Res10_48, (MR_Integer) 0));
                      MR_Word Res11_50;
                      void MR_CALL (* func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P11_26, (MR_Integer) 1))));
                      MR_Box conv32_Res11_50;
                      MR_Box conv31_STATE_VARIABLE_IO_54;

                      func_30(((MR_Box) (P11_26)), &conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_54);
                      Res11_50 = ((MR_Word) (conv32_Res11_50));
                      if (((MR_tag((MR_Word) Res11_50)) == (MR_Integer) 1))
                        *Res_28 = Res11_50;
                      else
                      {
                        MR_Box T11_51 = (MR_hl_field(MR_mktag(0), Res11_50, (MR_Integer) 0));
                        void MR_CALL (* func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_27, (MR_Integer) 1))));
                        MR_Box conv34_Res_28;

                        func_33(((MR_Box) (Combine_27)), T1_31, T2_33, T3_35, T4_37, T5_39, T6_41, T7_43, T8_45, T9_47, T10_49, T11_51, &conv34_Res_28);
                        *Res_28 = ((MR_Word) (conv34_Res_28));
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
  MR_Word TypeInfo_for_T1_70,
  MR_Word TypeInfo_for_T2_71,
  MR_Word TypeInfo_for_T3_72,
  MR_Word TypeInfo_for_T4_73,
  MR_Word TypeInfo_for_T5_74,
  MR_Word TypeInfo_for_T6_75,
  MR_Word TypeInfo_for_T7_76,
  MR_Word TypeInfo_for_T8_77,
  MR_Word TypeInfo_for_T9_78,
  MR_Word TypeInfo_for_T10_79,
  MR_Word TypeInfo_for_T_80,
  MR_Word P1_15,
  MR_Word P2_16,
  MR_Word P3_17,
  MR_Word P4_18,
  MR_Word P5_19,
  MR_Word P6_20,
  MR_Word P7_21,
  MR_Word P8_22,
  MR_Word P9_23,
  MR_Word P10_24,
  MR_Word Combine_25,
  MR_Word * Res_26)
{
  MR_Word Res1_28;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_15, (MR_Integer) 1))));
  MR_Box conv2_Res1_28;
  MR_Box conv1_STATE_VARIABLE_IO_51_51;

  func_0(((MR_Box) (P1_15)), &conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_51_51);
  Res1_28 = ((MR_Word) (conv2_Res1_28));
  if (((MR_tag((MR_Word) Res1_28)) == (MR_Integer) 1))
    *Res_26 = Res1_28;
  else
  {
    MR_Box T1_29 = (MR_hl_field(MR_mktag(0), Res1_28, (MR_Integer) 0));
    MR_Word Res2_30;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_16, (MR_Integer) 1))));
    MR_Box conv5_Res2_30;
    MR_Box conv4_STATE_VARIABLE_IO_52_52;

    func_3(((MR_Box) (P2_16)), &conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_52_52);
    Res2_30 = ((MR_Word) (conv5_Res2_30));
    if (((MR_tag((MR_Word) Res2_30)) == (MR_Integer) 1))
      *Res_26 = Res2_30;
    else
    {
      MR_Box T2_31 = (MR_hl_field(MR_mktag(0), Res2_30, (MR_Integer) 0));
      MR_Word Res3_32;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_17, (MR_Integer) 1))));
      MR_Box conv8_Res3_32;
      MR_Box conv7_STATE_VARIABLE_IO_53_53;

      func_6(((MR_Box) (P3_17)), &conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_53_53);
      Res3_32 = ((MR_Word) (conv8_Res3_32));
      if (((MR_tag((MR_Word) Res3_32)) == (MR_Integer) 1))
        *Res_26 = Res3_32;
      else
      {
        MR_Box T3_33 = (MR_hl_field(MR_mktag(0), Res3_32, (MR_Integer) 0));
        MR_Word Res4_34;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_18, (MR_Integer) 1))));
        MR_Box conv11_Res4_34;
        MR_Box conv10_STATE_VARIABLE_IO_54_54;

        func_9(((MR_Box) (P4_18)), &conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_54_54);
        Res4_34 = ((MR_Word) (conv11_Res4_34));
        if (((MR_tag((MR_Word) Res4_34)) == (MR_Integer) 1))
          *Res_26 = Res4_34;
        else
        {
          MR_Box T4_35 = (MR_hl_field(MR_mktag(0), Res4_34, (MR_Integer) 0));
          MR_Word Res5_36;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_19, (MR_Integer) 1))));
          MR_Box conv14_Res5_36;
          MR_Box conv13_STATE_VARIABLE_IO_55_55;

          func_12(((MR_Box) (P5_19)), &conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_55_55);
          Res5_36 = ((MR_Word) (conv14_Res5_36));
          if (((MR_tag((MR_Word) Res5_36)) == (MR_Integer) 1))
            *Res_26 = Res5_36;
          else
          {
            MR_Box T5_37 = (MR_hl_field(MR_mktag(0), Res5_36, (MR_Integer) 0));
            MR_Word Res6_38;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_20, (MR_Integer) 1))));
            MR_Box conv17_Res6_38;
            MR_Box conv16_STATE_VARIABLE_IO_56_56;

            func_15(((MR_Box) (P6_20)), &conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_56_56);
            Res6_38 = ((MR_Word) (conv17_Res6_38));
            if (((MR_tag((MR_Word) Res6_38)) == (MR_Integer) 1))
              *Res_26 = Res6_38;
            else
            {
              MR_Box T6_39 = (MR_hl_field(MR_mktag(0), Res6_38, (MR_Integer) 0));
              MR_Word Res7_40;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_21, (MR_Integer) 1))));
              MR_Box conv20_Res7_40;
              MR_Box conv19_STATE_VARIABLE_IO_57_57;

              func_18(((MR_Box) (P7_21)), &conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_57_57);
              Res7_40 = ((MR_Word) (conv20_Res7_40));
              if (((MR_tag((MR_Word) Res7_40)) == (MR_Integer) 1))
                *Res_26 = Res7_40;
              else
              {
                MR_Box T7_41 = (MR_hl_field(MR_mktag(0), Res7_40, (MR_Integer) 0));
                MR_Word Res8_42;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_22, (MR_Integer) 1))));
                MR_Box conv23_Res8_42;
                MR_Box conv22_STATE_VARIABLE_IO_58_58;

                func_21(((MR_Box) (P8_22)), &conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_58_58);
                Res8_42 = ((MR_Word) (conv23_Res8_42));
                if (((MR_tag((MR_Word) Res8_42)) == (MR_Integer) 1))
                  *Res_26 = Res8_42;
                else
                {
                  MR_Box T8_43 = (MR_hl_field(MR_mktag(0), Res8_42, (MR_Integer) 0));
                  MR_Word Res9_44;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_23, (MR_Integer) 1))));
                  MR_Box conv26_Res9_44;
                  MR_Box conv25_STATE_VARIABLE_IO_59_59;

                  func_24(((MR_Box) (P9_23)), &conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_59_59);
                  Res9_44 = ((MR_Word) (conv26_Res9_44));
                  if (((MR_tag((MR_Word) Res9_44)) == (MR_Integer) 1))
                    *Res_26 = Res9_44;
                  else
                  {
                    MR_Box T9_45 = (MR_hl_field(MR_mktag(0), Res9_44, (MR_Integer) 0));
                    MR_Word Res10_46;
                    void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_24, (MR_Integer) 1))));
                    MR_Box conv29_Res10_46;
                    MR_Box conv28_STATE_VARIABLE_IO_50;

                    func_27(((MR_Box) (P10_24)), &conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_50);
                    Res10_46 = ((MR_Word) (conv29_Res10_46));
                    if (((MR_tag((MR_Word) Res10_46)) == (MR_Integer) 1))
                      *Res_26 = Res10_46;
                    else
                    {
                      MR_Box T10_47 = (MR_hl_field(MR_mktag(0), Res10_46, (MR_Integer) 0));
                      void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_25, (MR_Integer) 1))));
                      MR_Box conv31_Res_26;

                      func_30(((MR_Box) (Combine_25)), T1_29, T2_31, T3_33, T4_35, T5_37, T6_39, T7_41, T8_43, T9_45, T10_47, &conv31_Res_26);
                      *Res_26 = ((MR_Word) (conv31_Res_26));
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
  MR_Word TypeInfo_for_T1_64,
  MR_Word TypeInfo_for_T2_65,
  MR_Word TypeInfo_for_T3_66,
  MR_Word TypeInfo_for_T4_67,
  MR_Word TypeInfo_for_T5_68,
  MR_Word TypeInfo_for_T6_69,
  MR_Word TypeInfo_for_T7_70,
  MR_Word TypeInfo_for_T8_71,
  MR_Word TypeInfo_for_T9_72,
  MR_Word TypeInfo_for_T_73,
  MR_Word P1_14,
  MR_Word P2_15,
  MR_Word P3_16,
  MR_Word P4_17,
  MR_Word P5_18,
  MR_Word P6_19,
  MR_Word P7_20,
  MR_Word P8_21,
  MR_Word P9_22,
  MR_Word Combine_23,
  MR_Word * Res_24)
{
  MR_Word Res1_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_14, (MR_Integer) 1))));
  MR_Box conv2_Res1_26;
  MR_Box conv1_STATE_VARIABLE_IO_47_47;

  func_0(((MR_Box) (P1_14)), &conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
  Res1_26 = ((MR_Word) (conv2_Res1_26));
  if (((MR_tag((MR_Word) Res1_26)) == (MR_Integer) 1))
    *Res_24 = Res1_26;
  else
  {
    MR_Box T1_27 = (MR_hl_field(MR_mktag(0), Res1_26, (MR_Integer) 0));
    MR_Word Res2_28;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_15, (MR_Integer) 1))));
    MR_Box conv5_Res2_28;
    MR_Box conv4_STATE_VARIABLE_IO_48_48;

    func_3(((MR_Box) (P2_15)), &conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_48_48);
    Res2_28 = ((MR_Word) (conv5_Res2_28));
    if (((MR_tag((MR_Word) Res2_28)) == (MR_Integer) 1))
      *Res_24 = Res2_28;
    else
    {
      MR_Box T2_29 = (MR_hl_field(MR_mktag(0), Res2_28, (MR_Integer) 0));
      MR_Word Res3_30;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_16, (MR_Integer) 1))));
      MR_Box conv8_Res3_30;
      MR_Box conv7_STATE_VARIABLE_IO_49_49;

      func_6(((MR_Box) (P3_16)), &conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_49_49);
      Res3_30 = ((MR_Word) (conv8_Res3_30));
      if (((MR_tag((MR_Word) Res3_30)) == (MR_Integer) 1))
        *Res_24 = Res3_30;
      else
      {
        MR_Box T3_31 = (MR_hl_field(MR_mktag(0), Res3_30, (MR_Integer) 0));
        MR_Word Res4_32;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_17, (MR_Integer) 1))));
        MR_Box conv11_Res4_32;
        MR_Box conv10_STATE_VARIABLE_IO_50_50;

        func_9(((MR_Box) (P4_17)), &conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_50_50);
        Res4_32 = ((MR_Word) (conv11_Res4_32));
        if (((MR_tag((MR_Word) Res4_32)) == (MR_Integer) 1))
          *Res_24 = Res4_32;
        else
        {
          MR_Box T4_33 = (MR_hl_field(MR_mktag(0), Res4_32, (MR_Integer) 0));
          MR_Word Res5_34;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_18, (MR_Integer) 1))));
          MR_Box conv14_Res5_34;
          MR_Box conv13_STATE_VARIABLE_IO_51_51;

          func_12(((MR_Box) (P5_18)), &conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_51_51);
          Res5_34 = ((MR_Word) (conv14_Res5_34));
          if (((MR_tag((MR_Word) Res5_34)) == (MR_Integer) 1))
            *Res_24 = Res5_34;
          else
          {
            MR_Box T5_35 = (MR_hl_field(MR_mktag(0), Res5_34, (MR_Integer) 0));
            MR_Word Res6_36;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_19, (MR_Integer) 1))));
            MR_Box conv17_Res6_36;
            MR_Box conv16_STATE_VARIABLE_IO_52_52;

            func_15(((MR_Box) (P6_19)), &conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_52_52);
            Res6_36 = ((MR_Word) (conv17_Res6_36));
            if (((MR_tag((MR_Word) Res6_36)) == (MR_Integer) 1))
              *Res_24 = Res6_36;
            else
            {
              MR_Box T6_37 = (MR_hl_field(MR_mktag(0), Res6_36, (MR_Integer) 0));
              MR_Word Res7_38;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_20, (MR_Integer) 1))));
              MR_Box conv20_Res7_38;
              MR_Box conv19_STATE_VARIABLE_IO_53_53;

              func_18(((MR_Box) (P7_20)), &conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_53_53);
              Res7_38 = ((MR_Word) (conv20_Res7_38));
              if (((MR_tag((MR_Word) Res7_38)) == (MR_Integer) 1))
                *Res_24 = Res7_38;
              else
              {
                MR_Box T7_39 = (MR_hl_field(MR_mktag(0), Res7_38, (MR_Integer) 0));
                MR_Word Res8_40;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_21, (MR_Integer) 1))));
                MR_Box conv23_Res8_40;
                MR_Box conv22_STATE_VARIABLE_IO_54_54;

                func_21(((MR_Box) (P8_21)), &conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_54_54);
                Res8_40 = ((MR_Word) (conv23_Res8_40));
                if (((MR_tag((MR_Word) Res8_40)) == (MR_Integer) 1))
                  *Res_24 = Res8_40;
                else
                {
                  MR_Box T8_41 = (MR_hl_field(MR_mktag(0), Res8_40, (MR_Integer) 0));
                  MR_Word Res9_42;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_22, (MR_Integer) 1))));
                  MR_Box conv26_Res9_42;
                  MR_Box conv25_STATE_VARIABLE_IO_46;

                  func_24(((MR_Box) (P9_22)), &conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_46);
                  Res9_42 = ((MR_Word) (conv26_Res9_42));
                  if (((MR_tag((MR_Word) Res9_42)) == (MR_Integer) 1))
                    *Res_24 = Res9_42;
                  else
                  {
                    MR_Box T9_43 = (MR_hl_field(MR_mktag(0), Res9_42, (MR_Integer) 0));
                    void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_23, (MR_Integer) 1))));
                    MR_Box conv28_Res_24;

                    func_27(((MR_Box) (Combine_23)), T1_27, T2_29, T3_31, T4_33, T5_35, T6_37, T7_39, T8_41, T9_43, &conv28_Res_24);
                    *Res_24 = ((MR_Word) (conv28_Res_24));
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
  MR_Word TypeInfo_for_T1_58,
  MR_Word TypeInfo_for_T2_59,
  MR_Word TypeInfo_for_T3_60,
  MR_Word TypeInfo_for_T4_61,
  MR_Word TypeInfo_for_T5_62,
  MR_Word TypeInfo_for_T6_63,
  MR_Word TypeInfo_for_T7_64,
  MR_Word TypeInfo_for_T8_65,
  MR_Word TypeInfo_for_T_66,
  MR_Word P1_13,
  MR_Word P2_14,
  MR_Word P3_15,
  MR_Word P4_16,
  MR_Word P5_17,
  MR_Word P6_18,
  MR_Word P7_19,
  MR_Word P8_20,
  MR_Word Combine_21,
  MR_Word * Res_22)
{
  MR_Word Res1_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_13, (MR_Integer) 1))));
  MR_Box conv2_Res1_24;
  MR_Box conv1_STATE_VARIABLE_IO_43_43;

  func_0(((MR_Box) (P1_13)), &conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_43_43);
  Res1_24 = ((MR_Word) (conv2_Res1_24));
  if (((MR_tag((MR_Word) Res1_24)) == (MR_Integer) 1))
    *Res_22 = Res1_24;
  else
  {
    MR_Box T1_25 = (MR_hl_field(MR_mktag(0), Res1_24, (MR_Integer) 0));
    MR_Word Res2_26;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_14, (MR_Integer) 1))));
    MR_Box conv5_Res2_26;
    MR_Box conv4_STATE_VARIABLE_IO_44_44;

    func_3(((MR_Box) (P2_14)), &conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_44_44);
    Res2_26 = ((MR_Word) (conv5_Res2_26));
    if (((MR_tag((MR_Word) Res2_26)) == (MR_Integer) 1))
      *Res_22 = Res2_26;
    else
    {
      MR_Box T2_27 = (MR_hl_field(MR_mktag(0), Res2_26, (MR_Integer) 0));
      MR_Word Res3_28;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_15, (MR_Integer) 1))));
      MR_Box conv8_Res3_28;
      MR_Box conv7_STATE_VARIABLE_IO_45_45;

      func_6(((MR_Box) (P3_15)), &conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_45_45);
      Res3_28 = ((MR_Word) (conv8_Res3_28));
      if (((MR_tag((MR_Word) Res3_28)) == (MR_Integer) 1))
        *Res_22 = Res3_28;
      else
      {
        MR_Box T3_29 = (MR_hl_field(MR_mktag(0), Res3_28, (MR_Integer) 0));
        MR_Word Res4_30;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_16, (MR_Integer) 1))));
        MR_Box conv11_Res4_30;
        MR_Box conv10_STATE_VARIABLE_IO_46_46;

        func_9(((MR_Box) (P4_16)), &conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_46_46);
        Res4_30 = ((MR_Word) (conv11_Res4_30));
        if (((MR_tag((MR_Word) Res4_30)) == (MR_Integer) 1))
          *Res_22 = Res4_30;
        else
        {
          MR_Box T4_31 = (MR_hl_field(MR_mktag(0), Res4_30, (MR_Integer) 0));
          MR_Word Res5_32;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_17, (MR_Integer) 1))));
          MR_Box conv14_Res5_32;
          MR_Box conv13_STATE_VARIABLE_IO_47_47;

          func_12(((MR_Box) (P5_17)), &conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_47_47);
          Res5_32 = ((MR_Word) (conv14_Res5_32));
          if (((MR_tag((MR_Word) Res5_32)) == (MR_Integer) 1))
            *Res_22 = Res5_32;
          else
          {
            MR_Box T5_33 = (MR_hl_field(MR_mktag(0), Res5_32, (MR_Integer) 0));
            MR_Word Res6_34;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_18, (MR_Integer) 1))));
            MR_Box conv17_Res6_34;
            MR_Box conv16_STATE_VARIABLE_IO_48_48;

            func_15(((MR_Box) (P6_18)), &conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_48_48);
            Res6_34 = ((MR_Word) (conv17_Res6_34));
            if (((MR_tag((MR_Word) Res6_34)) == (MR_Integer) 1))
              *Res_22 = Res6_34;
            else
            {
              MR_Box T6_35 = (MR_hl_field(MR_mktag(0), Res6_34, (MR_Integer) 0));
              MR_Word Res7_36;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_19, (MR_Integer) 1))));
              MR_Box conv20_Res7_36;
              MR_Box conv19_STATE_VARIABLE_IO_49_49;

              func_18(((MR_Box) (P7_19)), &conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_49_49);
              Res7_36 = ((MR_Word) (conv20_Res7_36));
              if (((MR_tag((MR_Word) Res7_36)) == (MR_Integer) 1))
                *Res_22 = Res7_36;
              else
              {
                MR_Box T7_37 = (MR_hl_field(MR_mktag(0), Res7_36, (MR_Integer) 0));
                MR_Word Res8_38;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_20, (MR_Integer) 1))));
                MR_Box conv23_Res8_38;
                MR_Box conv22_STATE_VARIABLE_IO_42;

                func_21(((MR_Box) (P8_20)), &conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_42);
                Res8_38 = ((MR_Word) (conv23_Res8_38));
                if (((MR_tag((MR_Word) Res8_38)) == (MR_Integer) 1))
                  *Res_22 = Res8_38;
                else
                {
                  MR_Box T8_39 = (MR_hl_field(MR_mktag(0), Res8_38, (MR_Integer) 0));
                  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_21, (MR_Integer) 1))));
                  MR_Box conv25_Res_22;

                  func_24(((MR_Box) (Combine_21)), T1_25, T2_27, T3_29, T4_31, T5_33, T6_35, T7_37, T8_39, &conv25_Res_22);
                  *Res_22 = ((MR_Word) (conv25_Res_22));
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
  MR_Word TypeInfo_for_T1_52,
  MR_Word TypeInfo_for_T2_53,
  MR_Word TypeInfo_for_T3_54,
  MR_Word TypeInfo_for_T4_55,
  MR_Word TypeInfo_for_T5_56,
  MR_Word TypeInfo_for_T6_57,
  MR_Word TypeInfo_for_T7_58,
  MR_Word TypeInfo_for_T_59,
  MR_Word P1_12,
  MR_Word P2_13,
  MR_Word P3_14,
  MR_Word P4_15,
  MR_Word P5_16,
  MR_Word P6_17,
  MR_Word P7_18,
  MR_Word Combine_19,
  MR_Word * Res_20)
{
  MR_Word Res1_22;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_12, (MR_Integer) 1))));
  MR_Box conv2_Res1_22;
  MR_Box conv1_STATE_VARIABLE_IO_39_39;

  func_0(((MR_Box) (P1_12)), &conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39_39);
  Res1_22 = ((MR_Word) (conv2_Res1_22));
  if (((MR_tag((MR_Word) Res1_22)) == (MR_Integer) 1))
    *Res_20 = Res1_22;
  else
  {
    MR_Box T1_23 = (MR_hl_field(MR_mktag(0), Res1_22, (MR_Integer) 0));
    MR_Word Res2_24;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_13, (MR_Integer) 1))));
    MR_Box conv5_Res2_24;
    MR_Box conv4_STATE_VARIABLE_IO_40_40;

    func_3(((MR_Box) (P2_13)), &conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_40_40);
    Res2_24 = ((MR_Word) (conv5_Res2_24));
    if (((MR_tag((MR_Word) Res2_24)) == (MR_Integer) 1))
      *Res_20 = Res2_24;
    else
    {
      MR_Box T2_25 = (MR_hl_field(MR_mktag(0), Res2_24, (MR_Integer) 0));
      MR_Word Res3_26;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_14, (MR_Integer) 1))));
      MR_Box conv8_Res3_26;
      MR_Box conv7_STATE_VARIABLE_IO_41_41;

      func_6(((MR_Box) (P3_14)), &conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_41_41);
      Res3_26 = ((MR_Word) (conv8_Res3_26));
      if (((MR_tag((MR_Word) Res3_26)) == (MR_Integer) 1))
        *Res_20 = Res3_26;
      else
      {
        MR_Box T3_27 = (MR_hl_field(MR_mktag(0), Res3_26, (MR_Integer) 0));
        MR_Word Res4_28;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_15, (MR_Integer) 1))));
        MR_Box conv11_Res4_28;
        MR_Box conv10_STATE_VARIABLE_IO_42_42;

        func_9(((MR_Box) (P4_15)), &conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_42_42);
        Res4_28 = ((MR_Word) (conv11_Res4_28));
        if (((MR_tag((MR_Word) Res4_28)) == (MR_Integer) 1))
          *Res_20 = Res4_28;
        else
        {
          MR_Box T4_29 = (MR_hl_field(MR_mktag(0), Res4_28, (MR_Integer) 0));
          MR_Word Res5_30;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_16, (MR_Integer) 1))));
          MR_Box conv14_Res5_30;
          MR_Box conv13_STATE_VARIABLE_IO_43_43;

          func_12(((MR_Box) (P5_16)), &conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_43_43);
          Res5_30 = ((MR_Word) (conv14_Res5_30));
          if (((MR_tag((MR_Word) Res5_30)) == (MR_Integer) 1))
            *Res_20 = Res5_30;
          else
          {
            MR_Box T5_31 = (MR_hl_field(MR_mktag(0), Res5_30, (MR_Integer) 0));
            MR_Word Res6_32;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_17, (MR_Integer) 1))));
            MR_Box conv17_Res6_32;
            MR_Box conv16_STATE_VARIABLE_IO_44_44;

            func_15(((MR_Box) (P6_17)), &conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_44_44);
            Res6_32 = ((MR_Word) (conv17_Res6_32));
            if (((MR_tag((MR_Word) Res6_32)) == (MR_Integer) 1))
              *Res_20 = Res6_32;
            else
            {
              MR_Box T6_33 = (MR_hl_field(MR_mktag(0), Res6_32, (MR_Integer) 0));
              MR_Word Res7_34;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_18, (MR_Integer) 1))));
              MR_Box conv20_Res7_34;
              MR_Box conv19_STATE_VARIABLE_IO_38;

              func_18(((MR_Box) (P7_18)), &conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_38);
              Res7_34 = ((MR_Word) (conv20_Res7_34));
              if (((MR_tag((MR_Word) Res7_34)) == (MR_Integer) 1))
                *Res_20 = Res7_34;
              else
              {
                MR_Box T7_35 = (MR_hl_field(MR_mktag(0), Res7_34, (MR_Integer) 0));
                void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_19, (MR_Integer) 1))));
                MR_Box conv22_Res_20;

                func_21(((MR_Box) (Combine_19)), T1_23, T2_25, T3_27, T4_29, T5_31, T6_33, T7_35, &conv22_Res_20);
                *Res_20 = ((MR_Word) (conv22_Res_20));
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
  MR_Word TypeInfo_for_T1_46,
  MR_Word TypeInfo_for_T2_47,
  MR_Word TypeInfo_for_T3_48,
  MR_Word TypeInfo_for_T4_49,
  MR_Word TypeInfo_for_T5_50,
  MR_Word TypeInfo_for_T6_51,
  MR_Word TypeInfo_for_T_52,
  MR_Word P1_11,
  MR_Word P2_12,
  MR_Word P3_13,
  MR_Word P4_14,
  MR_Word P5_15,
  MR_Word P6_16,
  MR_Word Combine_17,
  MR_Word * Res_18)
{
  MR_Word Res1_20;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_11, (MR_Integer) 1))));
  MR_Box conv2_Res1_20;
  MR_Box conv1_STATE_VARIABLE_IO_35_35;

  func_0(((MR_Box) (P1_11)), &conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_35_35);
  Res1_20 = ((MR_Word) (conv2_Res1_20));
  if (((MR_tag((MR_Word) Res1_20)) == (MR_Integer) 1))
    *Res_18 = Res1_20;
  else
  {
    MR_Box T1_21 = (MR_hl_field(MR_mktag(0), Res1_20, (MR_Integer) 0));
    MR_Word Res2_22;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_12, (MR_Integer) 1))));
    MR_Box conv5_Res2_22;
    MR_Box conv4_STATE_VARIABLE_IO_36_36;

    func_3(((MR_Box) (P2_12)), &conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_36_36);
    Res2_22 = ((MR_Word) (conv5_Res2_22));
    if (((MR_tag((MR_Word) Res2_22)) == (MR_Integer) 1))
      *Res_18 = Res2_22;
    else
    {
      MR_Box T2_23 = (MR_hl_field(MR_mktag(0), Res2_22, (MR_Integer) 0));
      MR_Word Res3_24;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_13, (MR_Integer) 1))));
      MR_Box conv8_Res3_24;
      MR_Box conv7_STATE_VARIABLE_IO_37_37;

      func_6(((MR_Box) (P3_13)), &conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_37_37);
      Res3_24 = ((MR_Word) (conv8_Res3_24));
      if (((MR_tag((MR_Word) Res3_24)) == (MR_Integer) 1))
        *Res_18 = Res3_24;
      else
      {
        MR_Box T3_25 = (MR_hl_field(MR_mktag(0), Res3_24, (MR_Integer) 0));
        MR_Word Res4_26;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_14, (MR_Integer) 1))));
        MR_Box conv11_Res4_26;
        MR_Box conv10_STATE_VARIABLE_IO_38_38;

        func_9(((MR_Box) (P4_14)), &conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_38_38);
        Res4_26 = ((MR_Word) (conv11_Res4_26));
        if (((MR_tag((MR_Word) Res4_26)) == (MR_Integer) 1))
          *Res_18 = Res4_26;
        else
        {
          MR_Box T4_27 = (MR_hl_field(MR_mktag(0), Res4_26, (MR_Integer) 0));
          MR_Word Res5_28;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_15, (MR_Integer) 1))));
          MR_Box conv14_Res5_28;
          MR_Box conv13_STATE_VARIABLE_IO_39_39;

          func_12(((MR_Box) (P5_15)), &conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_39_39);
          Res5_28 = ((MR_Word) (conv14_Res5_28));
          if (((MR_tag((MR_Word) Res5_28)) == (MR_Integer) 1))
            *Res_18 = Res5_28;
          else
          {
            MR_Box T5_29 = (MR_hl_field(MR_mktag(0), Res5_28, (MR_Integer) 0));
            MR_Word Res6_30;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_16, (MR_Integer) 1))));
            MR_Box conv17_Res6_30;
            MR_Box conv16_STATE_VARIABLE_IO_34;

            func_15(((MR_Box) (P6_16)), &conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_34);
            Res6_30 = ((MR_Word) (conv17_Res6_30));
            if (((MR_tag((MR_Word) Res6_30)) == (MR_Integer) 1))
              *Res_18 = Res6_30;
            else
            {
              MR_Box T6_31 = (MR_hl_field(MR_mktag(0), Res6_30, (MR_Integer) 0));
              void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_17, (MR_Integer) 1))));
              MR_Box conv19_Res_18;

              func_18(((MR_Box) (Combine_17)), T1_21, T2_23, T3_25, T4_27, T5_29, T6_31, &conv19_Res_18);
              *Res_18 = ((MR_Word) (conv19_Res_18));
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_5_9_p_0(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word TypeInfo_for_T_45,
  MR_Word P1_10,
  MR_Word P2_11,
  MR_Word P3_12,
  MR_Word P4_13,
  MR_Word P5_14,
  MR_Word Combine_15,
  MR_Word * Res_16)
{
  MR_Word Res1_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_10, (MR_Integer) 1))));
  MR_Box conv2_Res1_18;
  MR_Box conv1_STATE_VARIABLE_IO_31_31;

  func_0(((MR_Box) (P1_10)), &conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
  Res1_18 = ((MR_Word) (conv2_Res1_18));
  if (((MR_tag((MR_Word) Res1_18)) == (MR_Integer) 1))
    *Res_16 = Res1_18;
  else
  {
    MR_Box T1_19 = (MR_hl_field(MR_mktag(0), Res1_18, (MR_Integer) 0));
    MR_Word Res2_20;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_11, (MR_Integer) 1))));
    MR_Box conv5_Res2_20;
    MR_Box conv4_STATE_VARIABLE_IO_32_32;

    func_3(((MR_Box) (P2_11)), &conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_32_32);
    Res2_20 = ((MR_Word) (conv5_Res2_20));
    if (((MR_tag((MR_Word) Res2_20)) == (MR_Integer) 1))
      *Res_16 = Res2_20;
    else
    {
      MR_Box T2_21 = (MR_hl_field(MR_mktag(0), Res2_20, (MR_Integer) 0));
      MR_Word Res3_22;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_12, (MR_Integer) 1))));
      MR_Box conv8_Res3_22;
      MR_Box conv7_STATE_VARIABLE_IO_33_33;

      func_6(((MR_Box) (P3_12)), &conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_33_33);
      Res3_22 = ((MR_Word) (conv8_Res3_22));
      if (((MR_tag((MR_Word) Res3_22)) == (MR_Integer) 1))
        *Res_16 = Res3_22;
      else
      {
        MR_Box T3_23 = (MR_hl_field(MR_mktag(0), Res3_22, (MR_Integer) 0));
        MR_Word Res4_24;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_13, (MR_Integer) 1))));
        MR_Box conv11_Res4_24;
        MR_Box conv10_STATE_VARIABLE_IO_34_34;

        func_9(((MR_Box) (P4_13)), &conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_34_34);
        Res4_24 = ((MR_Word) (conv11_Res4_24));
        if (((MR_tag((MR_Word) Res4_24)) == (MR_Integer) 1))
          *Res_16 = Res4_24;
        else
        {
          MR_Box T4_25 = (MR_hl_field(MR_mktag(0), Res4_24, (MR_Integer) 0));
          MR_Word Res5_26;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_14, (MR_Integer) 1))));
          MR_Box conv14_Res5_26;
          MR_Box conv13_STATE_VARIABLE_IO_30;

          func_12(((MR_Box) (P5_14)), &conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_30);
          Res5_26 = ((MR_Word) (conv14_Res5_26));
          if (((MR_tag((MR_Word) Res5_26)) == (MR_Integer) 1))
            *Res_16 = Res5_26;
          else
          {
            MR_Box T5_27 = (MR_hl_field(MR_mktag(0), Res5_26, (MR_Integer) 0));
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_15, (MR_Integer) 1))));
            MR_Box conv16_Res_16;

            func_15(((MR_Box) (Combine_15)), T1_19, T2_21, T3_23, T4_25, T5_27, &conv16_Res_16);
            *Res_16 = ((MR_Word) (conv16_Res_16));
          }
        }
      }
    }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_4_8_p_0(
  MR_Word TypeInfo_for_T1_34,
  MR_Word TypeInfo_for_T2_35,
  MR_Word TypeInfo_for_T3_36,
  MR_Word TypeInfo_for_T4_37,
  MR_Word TypeInfo_for_T_38,
  MR_Word P1_9,
  MR_Word P2_10,
  MR_Word P3_11,
  MR_Word P4_12,
  MR_Word Combine_13,
  MR_Word * Res_14)
{
  MR_Word Res1_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_9, (MR_Integer) 1))));
  MR_Box conv2_Res1_16;
  MR_Box conv1_STATE_VARIABLE_IO_27_27;

  func_0(((MR_Box) (P1_9)), &conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_27);
  Res1_16 = ((MR_Word) (conv2_Res1_16));
  if (((MR_tag((MR_Word) Res1_16)) == (MR_Integer) 1))
    *Res_14 = Res1_16;
  else
  {
    MR_Box T1_17 = (MR_hl_field(MR_mktag(0), Res1_16, (MR_Integer) 0));
    MR_Word Res2_18;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_10, (MR_Integer) 1))));
    MR_Box conv5_Res2_18;
    MR_Box conv4_STATE_VARIABLE_IO_28_28;

    func_3(((MR_Box) (P2_10)), &conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_28_28);
    Res2_18 = ((MR_Word) (conv5_Res2_18));
    if (((MR_tag((MR_Word) Res2_18)) == (MR_Integer) 1))
      *Res_14 = Res2_18;
    else
    {
      MR_Box T2_19 = (MR_hl_field(MR_mktag(0), Res2_18, (MR_Integer) 0));
      MR_Word Res3_20;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_11, (MR_Integer) 1))));
      MR_Box conv8_Res3_20;
      MR_Box conv7_STATE_VARIABLE_IO_29_29;

      func_6(((MR_Box) (P3_11)), &conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_29_29);
      Res3_20 = ((MR_Word) (conv8_Res3_20));
      if (((MR_tag((MR_Word) Res3_20)) == (MR_Integer) 1))
        *Res_14 = Res3_20;
      else
      {
        MR_Box T3_21 = (MR_hl_field(MR_mktag(0), Res3_20, (MR_Integer) 0));
        MR_Word Res4_22;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_12, (MR_Integer) 1))));
        MR_Box conv11_Res4_22;
        MR_Box conv10_STATE_VARIABLE_IO_26;

        func_9(((MR_Box) (P4_12)), &conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_26);
        Res4_22 = ((MR_Word) (conv11_Res4_22));
        if (((MR_tag((MR_Word) Res4_22)) == (MR_Integer) 1))
          *Res_14 = Res4_22;
        else
        {
          MR_Box T4_23 = (MR_hl_field(MR_mktag(0), Res4_22, (MR_Integer) 0));
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_13, (MR_Integer) 1))));
          MR_Box conv13_Res_14;

          func_12(((MR_Box) (Combine_13)), T1_17, T2_19, T3_21, T4_23, &conv13_Res_14);
          *Res_14 = ((MR_Word) (conv13_Res_14));
        }
      }
    }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_3_7_p_0(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T_31,
  MR_Word P1_8,
  MR_Word P2_9,
  MR_Word P3_10,
  MR_Word Combine_11,
  MR_Word * Res_12)
{
  MR_Word Res1_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_8, (MR_Integer) 1))));
  MR_Box conv2_Res1_14;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;

  func_0(((MR_Box) (P1_8)), &conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  Res1_14 = ((MR_Word) (conv2_Res1_14));
  if (((MR_tag((MR_Word) Res1_14)) == (MR_Integer) 1))
    *Res_12 = Res1_14;
  else
  {
    MR_Box T1_15 = (MR_hl_field(MR_mktag(0), Res1_14, (MR_Integer) 0));
    MR_Word Res2_16;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_9, (MR_Integer) 1))));
    MR_Box conv5_Res2_16;
    MR_Box conv4_STATE_VARIABLE_IO_24_24;

    func_3(((MR_Box) (P2_9)), &conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24_24);
    Res2_16 = ((MR_Word) (conv5_Res2_16));
    if (((MR_tag((MR_Word) Res2_16)) == (MR_Integer) 1))
      *Res_12 = Res2_16;
    else
    {
      MR_Box T2_17 = (MR_hl_field(MR_mktag(0), Res2_16, (MR_Integer) 0));
      MR_Word Res3_18;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_10, (MR_Integer) 1))));
      MR_Box conv8_Res3_18;
      MR_Box conv7_STATE_VARIABLE_IO_22;

      func_6(((MR_Box) (P3_10)), &conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_22);
      Res3_18 = ((MR_Word) (conv8_Res3_18));
      if (((MR_tag((MR_Word) Res3_18)) == (MR_Integer) 1))
        *Res_12 = Res3_18;
      else
      {
        MR_Box T3_19 = (MR_hl_field(MR_mktag(0), Res3_18, (MR_Integer) 0));
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_11, (MR_Integer) 1))));
        MR_Box conv10_Res_12;

        func_9(((MR_Box) (Combine_11)), T1_15, T2_17, T3_19, &conv10_Res_12);
        *Res_12 = ((MR_Word) (conv10_Res_12));
      }
    }
  }
}

void MR_CALL 
io_combinator__maybe_error_sequence_2_6_p_0(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T_24,
  MR_Word P1_7,
  MR_Word P2_8,
  MR_Word Combine_9,
  MR_Word * Res_10)
{
  MR_Word Res1_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_7, (MR_Integer) 1))));
  MR_Box conv2_Res1_12;
  MR_Box conv1_STATE_VARIABLE_IO_19_19;

  func_0(((MR_Box) (P1_7)), &conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
  Res1_12 = ((MR_Word) (conv2_Res1_12));
  if (((MR_tag((MR_Word) Res1_12)) == (MR_Integer) 1))
    *Res_10 = Res1_12;
  else
  {
    MR_Box T1_13 = (MR_hl_field(MR_mktag(0), Res1_12, (MR_Integer) 0));
    MR_Word Res2_14;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_8, (MR_Integer) 1))));
    MR_Box conv5_Res2_14;
    MR_Box conv4_STATE_VARIABLE_IO_18;

    func_3(((MR_Box) (P2_8)), &conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_18);
    Res2_14 = ((MR_Word) (conv5_Res2_14));
    if (((MR_tag((MR_Word) Res2_14)) == (MR_Integer) 1))
      *Res_10 = Res2_14;
    else
    {
      MR_Box T2_15 = (MR_hl_field(MR_mktag(0), Res2_14, (MR_Integer) 0));
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_9, (MR_Integer) 1))));
      MR_Box conv7_Res_10;

      func_6(((MR_Box) (Combine_9)), T1_13, T2_15, &conv7_Res_10);
      *Res_10 = ((MR_Word) (conv7_Res_10));
    }
  }
}

void MR_CALL 
io_combinator__res_sequence_11_15_p_0(
  MR_Word TypeInfo_for_T1_76,
  MR_Word TypeInfo_for_T2_77,
  MR_Word TypeInfo_for_T3_78,
  MR_Word TypeInfo_for_T4_79,
  MR_Word TypeInfo_for_T5_80,
  MR_Word TypeInfo_for_T6_81,
  MR_Word TypeInfo_for_T7_82,
  MR_Word TypeInfo_for_T8_83,
  MR_Word TypeInfo_for_T9_84,
  MR_Word TypeInfo_for_T10_85,
  MR_Word TypeInfo_for_T11_86,
  MR_Word TypeInfo_for_T_87,
  MR_Word P1_16,
  MR_Word P2_17,
  MR_Word P3_18,
  MR_Word P4_19,
  MR_Word P5_20,
  MR_Word P6_21,
  MR_Word P7_22,
  MR_Word P8_23,
  MR_Word P9_24,
  MR_Word P10_25,
  MR_Word P11_26,
  MR_Word Combine_27,
  MR_Word * Res_28)
{
  MR_Word Res1_30;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_16, (MR_Integer) 1))));
  MR_Box conv2_Res1_30;
  MR_Box conv1_STATE_VARIABLE_IO_55_55;

  func_0(((MR_Box) (P1_16)), &conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_55_55);
  Res1_30 = ((MR_Word) (conv2_Res1_30));
  if (((MR_tag((MR_Word) Res1_30)) == (MR_Integer) 1))
    *Res_28 = Res1_30;
  else
  {
    MR_Box T1_31 = (MR_hl_field(MR_mktag(0), Res1_30, (MR_Integer) 0));
    MR_Word Res2_32;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_17, (MR_Integer) 1))));
    MR_Box conv5_Res2_32;
    MR_Box conv4_STATE_VARIABLE_IO_56_56;

    func_3(((MR_Box) (P2_17)), &conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_56);
    Res2_32 = ((MR_Word) (conv5_Res2_32));
    if (((MR_tag((MR_Word) Res2_32)) == (MR_Integer) 1))
      *Res_28 = Res2_32;
    else
    {
      MR_Box T2_33 = (MR_hl_field(MR_mktag(0), Res2_32, (MR_Integer) 0));
      MR_Word Res3_34;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_18, (MR_Integer) 1))));
      MR_Box conv8_Res3_34;
      MR_Box conv7_STATE_VARIABLE_IO_57_57;

      func_6(((MR_Box) (P3_18)), &conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_57_57);
      Res3_34 = ((MR_Word) (conv8_Res3_34));
      if (((MR_tag((MR_Word) Res3_34)) == (MR_Integer) 1))
        *Res_28 = Res3_34;
      else
      {
        MR_Box T3_35 = (MR_hl_field(MR_mktag(0), Res3_34, (MR_Integer) 0));
        MR_Word Res4_36;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_19, (MR_Integer) 1))));
        MR_Box conv11_Res4_36;
        MR_Box conv10_STATE_VARIABLE_IO_58_58;

        func_9(((MR_Box) (P4_19)), &conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_58_58);
        Res4_36 = ((MR_Word) (conv11_Res4_36));
        if (((MR_tag((MR_Word) Res4_36)) == (MR_Integer) 1))
          *Res_28 = Res4_36;
        else
        {
          MR_Box T4_37 = (MR_hl_field(MR_mktag(0), Res4_36, (MR_Integer) 0));
          MR_Word Res5_38;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_20, (MR_Integer) 1))));
          MR_Box conv14_Res5_38;
          MR_Box conv13_STATE_VARIABLE_IO_59_59;

          func_12(((MR_Box) (P5_20)), &conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_59_59);
          Res5_38 = ((MR_Word) (conv14_Res5_38));
          if (((MR_tag((MR_Word) Res5_38)) == (MR_Integer) 1))
            *Res_28 = Res5_38;
          else
          {
            MR_Box T5_39 = (MR_hl_field(MR_mktag(0), Res5_38, (MR_Integer) 0));
            MR_Word Res6_40;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_21, (MR_Integer) 1))));
            MR_Box conv17_Res6_40;
            MR_Box conv16_STATE_VARIABLE_IO_60_60;

            func_15(((MR_Box) (P6_21)), &conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_60_60);
            Res6_40 = ((MR_Word) (conv17_Res6_40));
            if (((MR_tag((MR_Word) Res6_40)) == (MR_Integer) 1))
              *Res_28 = Res6_40;
            else
            {
              MR_Box T6_41 = (MR_hl_field(MR_mktag(0), Res6_40, (MR_Integer) 0));
              MR_Word Res7_42;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_22, (MR_Integer) 1))));
              MR_Box conv20_Res7_42;
              MR_Box conv19_STATE_VARIABLE_IO_61_61;

              func_18(((MR_Box) (P7_22)), &conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_61_61);
              Res7_42 = ((MR_Word) (conv20_Res7_42));
              if (((MR_tag((MR_Word) Res7_42)) == (MR_Integer) 1))
                *Res_28 = Res7_42;
              else
              {
                MR_Box T7_43 = (MR_hl_field(MR_mktag(0), Res7_42, (MR_Integer) 0));
                MR_Word Res8_44;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_23, (MR_Integer) 1))));
                MR_Box conv23_Res8_44;
                MR_Box conv22_STATE_VARIABLE_IO_62_62;

                func_21(((MR_Box) (P8_23)), &conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_62_62);
                Res8_44 = ((MR_Word) (conv23_Res8_44));
                if (((MR_tag((MR_Word) Res8_44)) == (MR_Integer) 1))
                  *Res_28 = Res8_44;
                else
                {
                  MR_Box T8_45 = (MR_hl_field(MR_mktag(0), Res8_44, (MR_Integer) 0));
                  MR_Word Res9_46;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_24, (MR_Integer) 1))));
                  MR_Box conv26_Res9_46;
                  MR_Box conv25_STATE_VARIABLE_IO_63_63;

                  func_24(((MR_Box) (P9_24)), &conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_63_63);
                  Res9_46 = ((MR_Word) (conv26_Res9_46));
                  if (((MR_tag((MR_Word) Res9_46)) == (MR_Integer) 1))
                    *Res_28 = Res9_46;
                  else
                  {
                    MR_Box T9_47 = (MR_hl_field(MR_mktag(0), Res9_46, (MR_Integer) 0));
                    MR_Word Res10_48;
                    void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_25, (MR_Integer) 1))));
                    MR_Box conv29_Res10_48;
                    MR_Box conv28_STATE_VARIABLE_IO_64_64;

                    func_27(((MR_Box) (P10_25)), &conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_64_64);
                    Res10_48 = ((MR_Word) (conv29_Res10_48));
                    if (((MR_tag((MR_Word) Res10_48)) == (MR_Integer) 1))
                      *Res_28 = Res10_48;
                    else
                    {
                      MR_Box T10_49 = (MR_hl_field(MR_mktag(0), Res10_48, (MR_Integer) 0));
                      MR_Word Res11_50;
                      void MR_CALL (* func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P11_26, (MR_Integer) 1))));
                      MR_Box conv32_Res11_50;
                      MR_Box conv31_STATE_VARIABLE_IO_54;

                      func_30(((MR_Box) (P11_26)), &conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_54);
                      Res11_50 = ((MR_Word) (conv32_Res11_50));
                      if (((MR_tag((MR_Word) Res11_50)) == (MR_Integer) 1))
                        *Res_28 = Res11_50;
                      else
                      {
                        MR_Box T11_51 = (MR_hl_field(MR_mktag(0), Res11_50, (MR_Integer) 0));
                        void MR_CALL (* func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_27, (MR_Integer) 1))));
                        MR_Box conv34_Res_28;

                        func_33(((MR_Box) (Combine_27)), T1_31, T2_33, T3_35, T4_37, T5_39, T6_41, T7_43, T8_45, T9_47, T10_49, T11_51, &conv34_Res_28);
                        *Res_28 = ((MR_Word) (conv34_Res_28));
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
  MR_Word TypeInfo_for_T1_70,
  MR_Word TypeInfo_for_T2_71,
  MR_Word TypeInfo_for_T3_72,
  MR_Word TypeInfo_for_T4_73,
  MR_Word TypeInfo_for_T5_74,
  MR_Word TypeInfo_for_T6_75,
  MR_Word TypeInfo_for_T7_76,
  MR_Word TypeInfo_for_T8_77,
  MR_Word TypeInfo_for_T9_78,
  MR_Word TypeInfo_for_T10_79,
  MR_Word TypeInfo_for_T_80,
  MR_Word P1_15,
  MR_Word P2_16,
  MR_Word P3_17,
  MR_Word P4_18,
  MR_Word P5_19,
  MR_Word P6_20,
  MR_Word P7_21,
  MR_Word P8_22,
  MR_Word P9_23,
  MR_Word P10_24,
  MR_Word Combine_25,
  MR_Word * Res_26)
{
  MR_Word Res1_28;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_15, (MR_Integer) 1))));
  MR_Box conv2_Res1_28;
  MR_Box conv1_STATE_VARIABLE_IO_51_51;

  func_0(((MR_Box) (P1_15)), &conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_51_51);
  Res1_28 = ((MR_Word) (conv2_Res1_28));
  if (((MR_tag((MR_Word) Res1_28)) == (MR_Integer) 1))
    *Res_26 = Res1_28;
  else
  {
    MR_Box T1_29 = (MR_hl_field(MR_mktag(0), Res1_28, (MR_Integer) 0));
    MR_Word Res2_30;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_16, (MR_Integer) 1))));
    MR_Box conv5_Res2_30;
    MR_Box conv4_STATE_VARIABLE_IO_52_52;

    func_3(((MR_Box) (P2_16)), &conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_52_52);
    Res2_30 = ((MR_Word) (conv5_Res2_30));
    if (((MR_tag((MR_Word) Res2_30)) == (MR_Integer) 1))
      *Res_26 = Res2_30;
    else
    {
      MR_Box T2_31 = (MR_hl_field(MR_mktag(0), Res2_30, (MR_Integer) 0));
      MR_Word Res3_32;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_17, (MR_Integer) 1))));
      MR_Box conv8_Res3_32;
      MR_Box conv7_STATE_VARIABLE_IO_53_53;

      func_6(((MR_Box) (P3_17)), &conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_53_53);
      Res3_32 = ((MR_Word) (conv8_Res3_32));
      if (((MR_tag((MR_Word) Res3_32)) == (MR_Integer) 1))
        *Res_26 = Res3_32;
      else
      {
        MR_Box T3_33 = (MR_hl_field(MR_mktag(0), Res3_32, (MR_Integer) 0));
        MR_Word Res4_34;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_18, (MR_Integer) 1))));
        MR_Box conv11_Res4_34;
        MR_Box conv10_STATE_VARIABLE_IO_54_54;

        func_9(((MR_Box) (P4_18)), &conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_54_54);
        Res4_34 = ((MR_Word) (conv11_Res4_34));
        if (((MR_tag((MR_Word) Res4_34)) == (MR_Integer) 1))
          *Res_26 = Res4_34;
        else
        {
          MR_Box T4_35 = (MR_hl_field(MR_mktag(0), Res4_34, (MR_Integer) 0));
          MR_Word Res5_36;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_19, (MR_Integer) 1))));
          MR_Box conv14_Res5_36;
          MR_Box conv13_STATE_VARIABLE_IO_55_55;

          func_12(((MR_Box) (P5_19)), &conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_55_55);
          Res5_36 = ((MR_Word) (conv14_Res5_36));
          if (((MR_tag((MR_Word) Res5_36)) == (MR_Integer) 1))
            *Res_26 = Res5_36;
          else
          {
            MR_Box T5_37 = (MR_hl_field(MR_mktag(0), Res5_36, (MR_Integer) 0));
            MR_Word Res6_38;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_20, (MR_Integer) 1))));
            MR_Box conv17_Res6_38;
            MR_Box conv16_STATE_VARIABLE_IO_56_56;

            func_15(((MR_Box) (P6_20)), &conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_56_56);
            Res6_38 = ((MR_Word) (conv17_Res6_38));
            if (((MR_tag((MR_Word) Res6_38)) == (MR_Integer) 1))
              *Res_26 = Res6_38;
            else
            {
              MR_Box T6_39 = (MR_hl_field(MR_mktag(0), Res6_38, (MR_Integer) 0));
              MR_Word Res7_40;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_21, (MR_Integer) 1))));
              MR_Box conv20_Res7_40;
              MR_Box conv19_STATE_VARIABLE_IO_57_57;

              func_18(((MR_Box) (P7_21)), &conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_57_57);
              Res7_40 = ((MR_Word) (conv20_Res7_40));
              if (((MR_tag((MR_Word) Res7_40)) == (MR_Integer) 1))
                *Res_26 = Res7_40;
              else
              {
                MR_Box T7_41 = (MR_hl_field(MR_mktag(0), Res7_40, (MR_Integer) 0));
                MR_Word Res8_42;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_22, (MR_Integer) 1))));
                MR_Box conv23_Res8_42;
                MR_Box conv22_STATE_VARIABLE_IO_58_58;

                func_21(((MR_Box) (P8_22)), &conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_58_58);
                Res8_42 = ((MR_Word) (conv23_Res8_42));
                if (((MR_tag((MR_Word) Res8_42)) == (MR_Integer) 1))
                  *Res_26 = Res8_42;
                else
                {
                  MR_Box T8_43 = (MR_hl_field(MR_mktag(0), Res8_42, (MR_Integer) 0));
                  MR_Word Res9_44;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_23, (MR_Integer) 1))));
                  MR_Box conv26_Res9_44;
                  MR_Box conv25_STATE_VARIABLE_IO_59_59;

                  func_24(((MR_Box) (P9_23)), &conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_59_59);
                  Res9_44 = ((MR_Word) (conv26_Res9_44));
                  if (((MR_tag((MR_Word) Res9_44)) == (MR_Integer) 1))
                    *Res_26 = Res9_44;
                  else
                  {
                    MR_Box T9_45 = (MR_hl_field(MR_mktag(0), Res9_44, (MR_Integer) 0));
                    MR_Word Res10_46;
                    void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_24, (MR_Integer) 1))));
                    MR_Box conv29_Res10_46;
                    MR_Box conv28_STATE_VARIABLE_IO_50;

                    func_27(((MR_Box) (P10_24)), &conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_50);
                    Res10_46 = ((MR_Word) (conv29_Res10_46));
                    if (((MR_tag((MR_Word) Res10_46)) == (MR_Integer) 1))
                      *Res_26 = Res10_46;
                    else
                    {
                      MR_Box T10_47 = (MR_hl_field(MR_mktag(0), Res10_46, (MR_Integer) 0));
                      void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_25, (MR_Integer) 1))));
                      MR_Box conv31_Res_26;

                      func_30(((MR_Box) (Combine_25)), T1_29, T2_31, T3_33, T4_35, T5_37, T6_39, T7_41, T8_43, T9_45, T10_47, &conv31_Res_26);
                      *Res_26 = ((MR_Word) (conv31_Res_26));
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
  MR_Word TypeInfo_for_T1_64,
  MR_Word TypeInfo_for_T2_65,
  MR_Word TypeInfo_for_T3_66,
  MR_Word TypeInfo_for_T4_67,
  MR_Word TypeInfo_for_T5_68,
  MR_Word TypeInfo_for_T6_69,
  MR_Word TypeInfo_for_T7_70,
  MR_Word TypeInfo_for_T8_71,
  MR_Word TypeInfo_for_T9_72,
  MR_Word TypeInfo_for_T_73,
  MR_Word P1_14,
  MR_Word P2_15,
  MR_Word P3_16,
  MR_Word P4_17,
  MR_Word P5_18,
  MR_Word P6_19,
  MR_Word P7_20,
  MR_Word P8_21,
  MR_Word P9_22,
  MR_Word Combine_23,
  MR_Word * Res_24)
{
  MR_Word Res1_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_14, (MR_Integer) 1))));
  MR_Box conv2_Res1_26;
  MR_Box conv1_STATE_VARIABLE_IO_47_47;

  func_0(((MR_Box) (P1_14)), &conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
  Res1_26 = ((MR_Word) (conv2_Res1_26));
  if (((MR_tag((MR_Word) Res1_26)) == (MR_Integer) 1))
    *Res_24 = Res1_26;
  else
  {
    MR_Box T1_27 = (MR_hl_field(MR_mktag(0), Res1_26, (MR_Integer) 0));
    MR_Word Res2_28;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_15, (MR_Integer) 1))));
    MR_Box conv5_Res2_28;
    MR_Box conv4_STATE_VARIABLE_IO_48_48;

    func_3(((MR_Box) (P2_15)), &conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_48_48);
    Res2_28 = ((MR_Word) (conv5_Res2_28));
    if (((MR_tag((MR_Word) Res2_28)) == (MR_Integer) 1))
      *Res_24 = Res2_28;
    else
    {
      MR_Box T2_29 = (MR_hl_field(MR_mktag(0), Res2_28, (MR_Integer) 0));
      MR_Word Res3_30;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_16, (MR_Integer) 1))));
      MR_Box conv8_Res3_30;
      MR_Box conv7_STATE_VARIABLE_IO_49_49;

      func_6(((MR_Box) (P3_16)), &conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_49_49);
      Res3_30 = ((MR_Word) (conv8_Res3_30));
      if (((MR_tag((MR_Word) Res3_30)) == (MR_Integer) 1))
        *Res_24 = Res3_30;
      else
      {
        MR_Box T3_31 = (MR_hl_field(MR_mktag(0), Res3_30, (MR_Integer) 0));
        MR_Word Res4_32;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_17, (MR_Integer) 1))));
        MR_Box conv11_Res4_32;
        MR_Box conv10_STATE_VARIABLE_IO_50_50;

        func_9(((MR_Box) (P4_17)), &conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_50_50);
        Res4_32 = ((MR_Word) (conv11_Res4_32));
        if (((MR_tag((MR_Word) Res4_32)) == (MR_Integer) 1))
          *Res_24 = Res4_32;
        else
        {
          MR_Box T4_33 = (MR_hl_field(MR_mktag(0), Res4_32, (MR_Integer) 0));
          MR_Word Res5_34;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_18, (MR_Integer) 1))));
          MR_Box conv14_Res5_34;
          MR_Box conv13_STATE_VARIABLE_IO_51_51;

          func_12(((MR_Box) (P5_18)), &conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_51_51);
          Res5_34 = ((MR_Word) (conv14_Res5_34));
          if (((MR_tag((MR_Word) Res5_34)) == (MR_Integer) 1))
            *Res_24 = Res5_34;
          else
          {
            MR_Box T5_35 = (MR_hl_field(MR_mktag(0), Res5_34, (MR_Integer) 0));
            MR_Word Res6_36;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_19, (MR_Integer) 1))));
            MR_Box conv17_Res6_36;
            MR_Box conv16_STATE_VARIABLE_IO_52_52;

            func_15(((MR_Box) (P6_19)), &conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_52_52);
            Res6_36 = ((MR_Word) (conv17_Res6_36));
            if (((MR_tag((MR_Word) Res6_36)) == (MR_Integer) 1))
              *Res_24 = Res6_36;
            else
            {
              MR_Box T6_37 = (MR_hl_field(MR_mktag(0), Res6_36, (MR_Integer) 0));
              MR_Word Res7_38;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_20, (MR_Integer) 1))));
              MR_Box conv20_Res7_38;
              MR_Box conv19_STATE_VARIABLE_IO_53_53;

              func_18(((MR_Box) (P7_20)), &conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_53_53);
              Res7_38 = ((MR_Word) (conv20_Res7_38));
              if (((MR_tag((MR_Word) Res7_38)) == (MR_Integer) 1))
                *Res_24 = Res7_38;
              else
              {
                MR_Box T7_39 = (MR_hl_field(MR_mktag(0), Res7_38, (MR_Integer) 0));
                MR_Word Res8_40;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_21, (MR_Integer) 1))));
                MR_Box conv23_Res8_40;
                MR_Box conv22_STATE_VARIABLE_IO_54_54;

                func_21(((MR_Box) (P8_21)), &conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_54_54);
                Res8_40 = ((MR_Word) (conv23_Res8_40));
                if (((MR_tag((MR_Word) Res8_40)) == (MR_Integer) 1))
                  *Res_24 = Res8_40;
                else
                {
                  MR_Box T8_41 = (MR_hl_field(MR_mktag(0), Res8_40, (MR_Integer) 0));
                  MR_Word Res9_42;
                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_22, (MR_Integer) 1))));
                  MR_Box conv26_Res9_42;
                  MR_Box conv25_STATE_VARIABLE_IO_46;

                  func_24(((MR_Box) (P9_22)), &conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_46);
                  Res9_42 = ((MR_Word) (conv26_Res9_42));
                  if (((MR_tag((MR_Word) Res9_42)) == (MR_Integer) 1))
                    *Res_24 = Res9_42;
                  else
                  {
                    MR_Box T9_43 = (MR_hl_field(MR_mktag(0), Res9_42, (MR_Integer) 0));
                    void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_23, (MR_Integer) 1))));
                    MR_Box conv28_Res_24;

                    func_27(((MR_Box) (Combine_23)), T1_27, T2_29, T3_31, T4_33, T5_35, T6_37, T7_39, T8_41, T9_43, &conv28_Res_24);
                    *Res_24 = ((MR_Word) (conv28_Res_24));
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
  MR_Word TypeInfo_for_T1_58,
  MR_Word TypeInfo_for_T2_59,
  MR_Word TypeInfo_for_T3_60,
  MR_Word TypeInfo_for_T4_61,
  MR_Word TypeInfo_for_T5_62,
  MR_Word TypeInfo_for_T6_63,
  MR_Word TypeInfo_for_T7_64,
  MR_Word TypeInfo_for_T8_65,
  MR_Word TypeInfo_for_T_66,
  MR_Word P1_13,
  MR_Word P2_14,
  MR_Word P3_15,
  MR_Word P4_16,
  MR_Word P5_17,
  MR_Word P6_18,
  MR_Word P7_19,
  MR_Word P8_20,
  MR_Word Combine_21,
  MR_Word * Res_22)
{
  MR_Word Res1_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_13, (MR_Integer) 1))));
  MR_Box conv2_Res1_24;
  MR_Box conv1_STATE_VARIABLE_IO_43_43;

  func_0(((MR_Box) (P1_13)), &conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_43_43);
  Res1_24 = ((MR_Word) (conv2_Res1_24));
  if (((MR_tag((MR_Word) Res1_24)) == (MR_Integer) 1))
    *Res_22 = Res1_24;
  else
  {
    MR_Box T1_25 = (MR_hl_field(MR_mktag(0), Res1_24, (MR_Integer) 0));
    MR_Word Res2_26;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_14, (MR_Integer) 1))));
    MR_Box conv5_Res2_26;
    MR_Box conv4_STATE_VARIABLE_IO_44_44;

    func_3(((MR_Box) (P2_14)), &conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_44_44);
    Res2_26 = ((MR_Word) (conv5_Res2_26));
    if (((MR_tag((MR_Word) Res2_26)) == (MR_Integer) 1))
      *Res_22 = Res2_26;
    else
    {
      MR_Box T2_27 = (MR_hl_field(MR_mktag(0), Res2_26, (MR_Integer) 0));
      MR_Word Res3_28;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_15, (MR_Integer) 1))));
      MR_Box conv8_Res3_28;
      MR_Box conv7_STATE_VARIABLE_IO_45_45;

      func_6(((MR_Box) (P3_15)), &conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_45_45);
      Res3_28 = ((MR_Word) (conv8_Res3_28));
      if (((MR_tag((MR_Word) Res3_28)) == (MR_Integer) 1))
        *Res_22 = Res3_28;
      else
      {
        MR_Box T3_29 = (MR_hl_field(MR_mktag(0), Res3_28, (MR_Integer) 0));
        MR_Word Res4_30;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_16, (MR_Integer) 1))));
        MR_Box conv11_Res4_30;
        MR_Box conv10_STATE_VARIABLE_IO_46_46;

        func_9(((MR_Box) (P4_16)), &conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_46_46);
        Res4_30 = ((MR_Word) (conv11_Res4_30));
        if (((MR_tag((MR_Word) Res4_30)) == (MR_Integer) 1))
          *Res_22 = Res4_30;
        else
        {
          MR_Box T4_31 = (MR_hl_field(MR_mktag(0), Res4_30, (MR_Integer) 0));
          MR_Word Res5_32;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_17, (MR_Integer) 1))));
          MR_Box conv14_Res5_32;
          MR_Box conv13_STATE_VARIABLE_IO_47_47;

          func_12(((MR_Box) (P5_17)), &conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_47_47);
          Res5_32 = ((MR_Word) (conv14_Res5_32));
          if (((MR_tag((MR_Word) Res5_32)) == (MR_Integer) 1))
            *Res_22 = Res5_32;
          else
          {
            MR_Box T5_33 = (MR_hl_field(MR_mktag(0), Res5_32, (MR_Integer) 0));
            MR_Word Res6_34;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_18, (MR_Integer) 1))));
            MR_Box conv17_Res6_34;
            MR_Box conv16_STATE_VARIABLE_IO_48_48;

            func_15(((MR_Box) (P6_18)), &conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_48_48);
            Res6_34 = ((MR_Word) (conv17_Res6_34));
            if (((MR_tag((MR_Word) Res6_34)) == (MR_Integer) 1))
              *Res_22 = Res6_34;
            else
            {
              MR_Box T6_35 = (MR_hl_field(MR_mktag(0), Res6_34, (MR_Integer) 0));
              MR_Word Res7_36;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_19, (MR_Integer) 1))));
              MR_Box conv20_Res7_36;
              MR_Box conv19_STATE_VARIABLE_IO_49_49;

              func_18(((MR_Box) (P7_19)), &conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_49_49);
              Res7_36 = ((MR_Word) (conv20_Res7_36));
              if (((MR_tag((MR_Word) Res7_36)) == (MR_Integer) 1))
                *Res_22 = Res7_36;
              else
              {
                MR_Box T7_37 = (MR_hl_field(MR_mktag(0), Res7_36, (MR_Integer) 0));
                MR_Word Res8_38;
                void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_20, (MR_Integer) 1))));
                MR_Box conv23_Res8_38;
                MR_Box conv22_STATE_VARIABLE_IO_42;

                func_21(((MR_Box) (P8_20)), &conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_42);
                Res8_38 = ((MR_Word) (conv23_Res8_38));
                if (((MR_tag((MR_Word) Res8_38)) == (MR_Integer) 1))
                  *Res_22 = Res8_38;
                else
                {
                  MR_Box T8_39 = (MR_hl_field(MR_mktag(0), Res8_38, (MR_Integer) 0));
                  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_21, (MR_Integer) 1))));
                  MR_Box conv25_Res_22;

                  func_24(((MR_Box) (Combine_21)), T1_25, T2_27, T3_29, T4_31, T5_33, T6_35, T7_37, T8_39, &conv25_Res_22);
                  *Res_22 = ((MR_Word) (conv25_Res_22));
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
  MR_Word TypeInfo_for_T1_52,
  MR_Word TypeInfo_for_T2_53,
  MR_Word TypeInfo_for_T3_54,
  MR_Word TypeInfo_for_T4_55,
  MR_Word TypeInfo_for_T5_56,
  MR_Word TypeInfo_for_T6_57,
  MR_Word TypeInfo_for_T7_58,
  MR_Word TypeInfo_for_T_59,
  MR_Word P1_12,
  MR_Word P2_13,
  MR_Word P3_14,
  MR_Word P4_15,
  MR_Word P5_16,
  MR_Word P6_17,
  MR_Word P7_18,
  MR_Word Combine_19,
  MR_Word * Res_20)
{
  MR_Word Res1_22;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_12, (MR_Integer) 1))));
  MR_Box conv2_Res1_22;
  MR_Box conv1_STATE_VARIABLE_IO_39_39;

  func_0(((MR_Box) (P1_12)), &conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39_39);
  Res1_22 = ((MR_Word) (conv2_Res1_22));
  if (((MR_tag((MR_Word) Res1_22)) == (MR_Integer) 1))
    *Res_20 = Res1_22;
  else
  {
    MR_Box T1_23 = (MR_hl_field(MR_mktag(0), Res1_22, (MR_Integer) 0));
    MR_Word Res2_24;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_13, (MR_Integer) 1))));
    MR_Box conv5_Res2_24;
    MR_Box conv4_STATE_VARIABLE_IO_40_40;

    func_3(((MR_Box) (P2_13)), &conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_40_40);
    Res2_24 = ((MR_Word) (conv5_Res2_24));
    if (((MR_tag((MR_Word) Res2_24)) == (MR_Integer) 1))
      *Res_20 = Res2_24;
    else
    {
      MR_Box T2_25 = (MR_hl_field(MR_mktag(0), Res2_24, (MR_Integer) 0));
      MR_Word Res3_26;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_14, (MR_Integer) 1))));
      MR_Box conv8_Res3_26;
      MR_Box conv7_STATE_VARIABLE_IO_41_41;

      func_6(((MR_Box) (P3_14)), &conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_41_41);
      Res3_26 = ((MR_Word) (conv8_Res3_26));
      if (((MR_tag((MR_Word) Res3_26)) == (MR_Integer) 1))
        *Res_20 = Res3_26;
      else
      {
        MR_Box T3_27 = (MR_hl_field(MR_mktag(0), Res3_26, (MR_Integer) 0));
        MR_Word Res4_28;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_15, (MR_Integer) 1))));
        MR_Box conv11_Res4_28;
        MR_Box conv10_STATE_VARIABLE_IO_42_42;

        func_9(((MR_Box) (P4_15)), &conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_42_42);
        Res4_28 = ((MR_Word) (conv11_Res4_28));
        if (((MR_tag((MR_Word) Res4_28)) == (MR_Integer) 1))
          *Res_20 = Res4_28;
        else
        {
          MR_Box T4_29 = (MR_hl_field(MR_mktag(0), Res4_28, (MR_Integer) 0));
          MR_Word Res5_30;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_16, (MR_Integer) 1))));
          MR_Box conv14_Res5_30;
          MR_Box conv13_STATE_VARIABLE_IO_43_43;

          func_12(((MR_Box) (P5_16)), &conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_43_43);
          Res5_30 = ((MR_Word) (conv14_Res5_30));
          if (((MR_tag((MR_Word) Res5_30)) == (MR_Integer) 1))
            *Res_20 = Res5_30;
          else
          {
            MR_Box T5_31 = (MR_hl_field(MR_mktag(0), Res5_30, (MR_Integer) 0));
            MR_Word Res6_32;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_17, (MR_Integer) 1))));
            MR_Box conv17_Res6_32;
            MR_Box conv16_STATE_VARIABLE_IO_44_44;

            func_15(((MR_Box) (P6_17)), &conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_44_44);
            Res6_32 = ((MR_Word) (conv17_Res6_32));
            if (((MR_tag((MR_Word) Res6_32)) == (MR_Integer) 1))
              *Res_20 = Res6_32;
            else
            {
              MR_Box T6_33 = (MR_hl_field(MR_mktag(0), Res6_32, (MR_Integer) 0));
              MR_Word Res7_34;
              void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_18, (MR_Integer) 1))));
              MR_Box conv20_Res7_34;
              MR_Box conv19_STATE_VARIABLE_IO_38;

              func_18(((MR_Box) (P7_18)), &conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_38);
              Res7_34 = ((MR_Word) (conv20_Res7_34));
              if (((MR_tag((MR_Word) Res7_34)) == (MR_Integer) 1))
                *Res_20 = Res7_34;
              else
              {
                MR_Box T7_35 = (MR_hl_field(MR_mktag(0), Res7_34, (MR_Integer) 0));
                void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_19, (MR_Integer) 1))));
                MR_Box conv22_Res_20;

                func_21(((MR_Box) (Combine_19)), T1_23, T2_25, T3_27, T4_29, T5_31, T6_33, T7_35, &conv22_Res_20);
                *Res_20 = ((MR_Word) (conv22_Res_20));
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
  MR_Word TypeInfo_for_T1_46,
  MR_Word TypeInfo_for_T2_47,
  MR_Word TypeInfo_for_T3_48,
  MR_Word TypeInfo_for_T4_49,
  MR_Word TypeInfo_for_T5_50,
  MR_Word TypeInfo_for_T6_51,
  MR_Word TypeInfo_for_T_52,
  MR_Word P1_11,
  MR_Word P2_12,
  MR_Word P3_13,
  MR_Word P4_14,
  MR_Word P5_15,
  MR_Word P6_16,
  MR_Word Combine_17,
  MR_Word * Res_18)
{
  MR_Word Res1_20;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_11, (MR_Integer) 1))));
  MR_Box conv2_Res1_20;
  MR_Box conv1_STATE_VARIABLE_IO_35_35;

  func_0(((MR_Box) (P1_11)), &conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_35_35);
  Res1_20 = ((MR_Word) (conv2_Res1_20));
  if (((MR_tag((MR_Word) Res1_20)) == (MR_Integer) 1))
    *Res_18 = Res1_20;
  else
  {
    MR_Box T1_21 = (MR_hl_field(MR_mktag(0), Res1_20, (MR_Integer) 0));
    MR_Word Res2_22;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_12, (MR_Integer) 1))));
    MR_Box conv5_Res2_22;
    MR_Box conv4_STATE_VARIABLE_IO_36_36;

    func_3(((MR_Box) (P2_12)), &conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_36_36);
    Res2_22 = ((MR_Word) (conv5_Res2_22));
    if (((MR_tag((MR_Word) Res2_22)) == (MR_Integer) 1))
      *Res_18 = Res2_22;
    else
    {
      MR_Box T2_23 = (MR_hl_field(MR_mktag(0), Res2_22, (MR_Integer) 0));
      MR_Word Res3_24;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_13, (MR_Integer) 1))));
      MR_Box conv8_Res3_24;
      MR_Box conv7_STATE_VARIABLE_IO_37_37;

      func_6(((MR_Box) (P3_13)), &conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_37_37);
      Res3_24 = ((MR_Word) (conv8_Res3_24));
      if (((MR_tag((MR_Word) Res3_24)) == (MR_Integer) 1))
        *Res_18 = Res3_24;
      else
      {
        MR_Box T3_25 = (MR_hl_field(MR_mktag(0), Res3_24, (MR_Integer) 0));
        MR_Word Res4_26;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_14, (MR_Integer) 1))));
        MR_Box conv11_Res4_26;
        MR_Box conv10_STATE_VARIABLE_IO_38_38;

        func_9(((MR_Box) (P4_14)), &conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_38_38);
        Res4_26 = ((MR_Word) (conv11_Res4_26));
        if (((MR_tag((MR_Word) Res4_26)) == (MR_Integer) 1))
          *Res_18 = Res4_26;
        else
        {
          MR_Box T4_27 = (MR_hl_field(MR_mktag(0), Res4_26, (MR_Integer) 0));
          MR_Word Res5_28;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_15, (MR_Integer) 1))));
          MR_Box conv14_Res5_28;
          MR_Box conv13_STATE_VARIABLE_IO_39_39;

          func_12(((MR_Box) (P5_15)), &conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_39_39);
          Res5_28 = ((MR_Word) (conv14_Res5_28));
          if (((MR_tag((MR_Word) Res5_28)) == (MR_Integer) 1))
            *Res_18 = Res5_28;
          else
          {
            MR_Box T5_29 = (MR_hl_field(MR_mktag(0), Res5_28, (MR_Integer) 0));
            MR_Word Res6_30;
            void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_16, (MR_Integer) 1))));
            MR_Box conv17_Res6_30;
            MR_Box conv16_STATE_VARIABLE_IO_34;

            func_15(((MR_Box) (P6_16)), &conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_34);
            Res6_30 = ((MR_Word) (conv17_Res6_30));
            if (((MR_tag((MR_Word) Res6_30)) == (MR_Integer) 1))
              *Res_18 = Res6_30;
            else
            {
              MR_Box T6_31 = (MR_hl_field(MR_mktag(0), Res6_30, (MR_Integer) 0));
              void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_17, (MR_Integer) 1))));
              MR_Box conv19_Res_18;

              func_18(((MR_Box) (Combine_17)), T1_21, T2_23, T3_25, T4_27, T5_29, T6_31, &conv19_Res_18);
              *Res_18 = ((MR_Word) (conv19_Res_18));
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
io_combinator__res_sequence_5_9_p_0(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word TypeInfo_for_T_45,
  MR_Word P1_10,
  MR_Word P2_11,
  MR_Word P3_12,
  MR_Word P4_13,
  MR_Word P5_14,
  MR_Word Combine_15,
  MR_Word * Res_16)
{
  MR_Word Res1_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_10, (MR_Integer) 1))));
  MR_Box conv2_Res1_18;
  MR_Box conv1_STATE_VARIABLE_IO_31_31;

  func_0(((MR_Box) (P1_10)), &conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
  Res1_18 = ((MR_Word) (conv2_Res1_18));
  if (((MR_tag((MR_Word) Res1_18)) == (MR_Integer) 1))
    *Res_16 = Res1_18;
  else
  {
    MR_Box T1_19 = (MR_hl_field(MR_mktag(0), Res1_18, (MR_Integer) 0));
    MR_Word Res2_20;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_11, (MR_Integer) 1))));
    MR_Box conv5_Res2_20;
    MR_Box conv4_STATE_VARIABLE_IO_32_32;

    func_3(((MR_Box) (P2_11)), &conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_32_32);
    Res2_20 = ((MR_Word) (conv5_Res2_20));
    if (((MR_tag((MR_Word) Res2_20)) == (MR_Integer) 1))
      *Res_16 = Res2_20;
    else
    {
      MR_Box T2_21 = (MR_hl_field(MR_mktag(0), Res2_20, (MR_Integer) 0));
      MR_Word Res3_22;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_12, (MR_Integer) 1))));
      MR_Box conv8_Res3_22;
      MR_Box conv7_STATE_VARIABLE_IO_33_33;

      func_6(((MR_Box) (P3_12)), &conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_33_33);
      Res3_22 = ((MR_Word) (conv8_Res3_22));
      if (((MR_tag((MR_Word) Res3_22)) == (MR_Integer) 1))
        *Res_16 = Res3_22;
      else
      {
        MR_Box T3_23 = (MR_hl_field(MR_mktag(0), Res3_22, (MR_Integer) 0));
        MR_Word Res4_24;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_13, (MR_Integer) 1))));
        MR_Box conv11_Res4_24;
        MR_Box conv10_STATE_VARIABLE_IO_34_34;

        func_9(((MR_Box) (P4_13)), &conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_34_34);
        Res4_24 = ((MR_Word) (conv11_Res4_24));
        if (((MR_tag((MR_Word) Res4_24)) == (MR_Integer) 1))
          *Res_16 = Res4_24;
        else
        {
          MR_Box T4_25 = (MR_hl_field(MR_mktag(0), Res4_24, (MR_Integer) 0));
          MR_Word Res5_26;
          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_14, (MR_Integer) 1))));
          MR_Box conv14_Res5_26;
          MR_Box conv13_STATE_VARIABLE_IO_30;

          func_12(((MR_Box) (P5_14)), &conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_30);
          Res5_26 = ((MR_Word) (conv14_Res5_26));
          if (((MR_tag((MR_Word) Res5_26)) == (MR_Integer) 1))
            *Res_16 = Res5_26;
          else
          {
            MR_Box T5_27 = (MR_hl_field(MR_mktag(0), Res5_26, (MR_Integer) 0));
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_15, (MR_Integer) 1))));
            MR_Box conv16_Res_16;

            func_15(((MR_Box) (Combine_15)), T1_19, T2_21, T3_23, T4_25, T5_27, &conv16_Res_16);
            *Res_16 = ((MR_Word) (conv16_Res_16));
          }
        }
      }
    }
  }
}

void MR_CALL 
io_combinator__res_sequence_4_8_p_0(
  MR_Word TypeInfo_for_T1_34,
  MR_Word TypeInfo_for_T2_35,
  MR_Word TypeInfo_for_T3_36,
  MR_Word TypeInfo_for_T4_37,
  MR_Word TypeInfo_for_T_38,
  MR_Word P1_9,
  MR_Word P2_10,
  MR_Word P3_11,
  MR_Word P4_12,
  MR_Word Combine_13,
  MR_Word * Res_14)
{
  MR_Word Res1_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_9, (MR_Integer) 1))));
  MR_Box conv2_Res1_16;
  MR_Box conv1_STATE_VARIABLE_IO_27_27;

  func_0(((MR_Box) (P1_9)), &conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_27);
  Res1_16 = ((MR_Word) (conv2_Res1_16));
  if (((MR_tag((MR_Word) Res1_16)) == (MR_Integer) 1))
    *Res_14 = Res1_16;
  else
  {
    MR_Box T1_17 = (MR_hl_field(MR_mktag(0), Res1_16, (MR_Integer) 0));
    MR_Word Res2_18;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_10, (MR_Integer) 1))));
    MR_Box conv5_Res2_18;
    MR_Box conv4_STATE_VARIABLE_IO_28_28;

    func_3(((MR_Box) (P2_10)), &conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_28_28);
    Res2_18 = ((MR_Word) (conv5_Res2_18));
    if (((MR_tag((MR_Word) Res2_18)) == (MR_Integer) 1))
      *Res_14 = Res2_18;
    else
    {
      MR_Box T2_19 = (MR_hl_field(MR_mktag(0), Res2_18, (MR_Integer) 0));
      MR_Word Res3_20;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_11, (MR_Integer) 1))));
      MR_Box conv8_Res3_20;
      MR_Box conv7_STATE_VARIABLE_IO_29_29;

      func_6(((MR_Box) (P3_11)), &conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_29_29);
      Res3_20 = ((MR_Word) (conv8_Res3_20));
      if (((MR_tag((MR_Word) Res3_20)) == (MR_Integer) 1))
        *Res_14 = Res3_20;
      else
      {
        MR_Box T3_21 = (MR_hl_field(MR_mktag(0), Res3_20, (MR_Integer) 0));
        MR_Word Res4_22;
        void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_12, (MR_Integer) 1))));
        MR_Box conv11_Res4_22;
        MR_Box conv10_STATE_VARIABLE_IO_26;

        func_9(((MR_Box) (P4_12)), &conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_26);
        Res4_22 = ((MR_Word) (conv11_Res4_22));
        if (((MR_tag((MR_Word) Res4_22)) == (MR_Integer) 1))
          *Res_14 = Res4_22;
        else
        {
          MR_Box T4_23 = (MR_hl_field(MR_mktag(0), Res4_22, (MR_Integer) 0));
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_13, (MR_Integer) 1))));
          MR_Box conv13_Res_14;

          func_12(((MR_Box) (Combine_13)), T1_17, T2_19, T3_21, T4_23, &conv13_Res_14);
          *Res_14 = ((MR_Word) (conv13_Res_14));
        }
      }
    }
  }
}

void MR_CALL 
io_combinator__res_sequence_3_7_p_0(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T_31,
  MR_Word P1_8,
  MR_Word P2_9,
  MR_Word P3_10,
  MR_Word Combine_11,
  MR_Word * Res_12)
{
  MR_Word Res1_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_8, (MR_Integer) 1))));
  MR_Box conv2_Res1_14;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;

  func_0(((MR_Box) (P1_8)), &conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  Res1_14 = ((MR_Word) (conv2_Res1_14));
  if (((MR_tag((MR_Word) Res1_14)) == (MR_Integer) 1))
    *Res_12 = Res1_14;
  else
  {
    MR_Box T1_15 = (MR_hl_field(MR_mktag(0), Res1_14, (MR_Integer) 0));
    MR_Word Res2_16;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_9, (MR_Integer) 1))));
    MR_Box conv5_Res2_16;
    MR_Box conv4_STATE_VARIABLE_IO_24_24;

    func_3(((MR_Box) (P2_9)), &conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24_24);
    Res2_16 = ((MR_Word) (conv5_Res2_16));
    if (((MR_tag((MR_Word) Res2_16)) == (MR_Integer) 1))
      *Res_12 = Res2_16;
    else
    {
      MR_Box T2_17 = (MR_hl_field(MR_mktag(0), Res2_16, (MR_Integer) 0));
      MR_Word Res3_18;
      void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_10, (MR_Integer) 1))));
      MR_Box conv8_Res3_18;
      MR_Box conv7_STATE_VARIABLE_IO_22;

      func_6(((MR_Box) (P3_10)), &conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_22);
      Res3_18 = ((MR_Word) (conv8_Res3_18));
      if (((MR_tag((MR_Word) Res3_18)) == (MR_Integer) 1))
        *Res_12 = Res3_18;
      else
      {
        MR_Box T3_19 = (MR_hl_field(MR_mktag(0), Res3_18, (MR_Integer) 0));
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_11, (MR_Integer) 1))));
        MR_Box conv10_Res_12;

        func_9(((MR_Box) (Combine_11)), T1_15, T2_17, T3_19, &conv10_Res_12);
        *Res_12 = ((MR_Word) (conv10_Res_12));
      }
    }
  }
}

void MR_CALL 
io_combinator__res_sequence_2_6_p_0(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T_24,
  MR_Word P1_7,
  MR_Word P2_8,
  MR_Word Combine_9,
  MR_Word * Res_10)
{
  MR_Word Res1_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_7, (MR_Integer) 1))));
  MR_Box conv2_Res1_12;
  MR_Box conv1_STATE_VARIABLE_IO_19_19;

  func_0(((MR_Box) (P1_7)), &conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
  Res1_12 = ((MR_Word) (conv2_Res1_12));
  if (((MR_tag((MR_Word) Res1_12)) == (MR_Integer) 1))
    *Res_10 = Res1_12;
  else
  {
    MR_Box T1_13 = (MR_hl_field(MR_mktag(0), Res1_12, (MR_Integer) 0));
    MR_Word Res2_14;
    void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_8, (MR_Integer) 1))));
    MR_Box conv5_Res2_14;
    MR_Box conv4_STATE_VARIABLE_IO_18;

    func_3(((MR_Box) (P2_8)), &conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_18);
    Res2_14 = ((MR_Word) (conv5_Res2_14));
    if (((MR_tag((MR_Word) Res2_14)) == (MR_Integer) 1))
      *Res_10 = Res2_14;
    else
    {
      MR_Box T2_15 = (MR_hl_field(MR_mktag(0), Res2_14, (MR_Integer) 0));
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_9, (MR_Integer) 1))));
      MR_Box conv7_Res_10;

      func_6(((MR_Box) (Combine_9)), T1_13, T2_15, &conv7_Res_10);
      *Res_10 = ((MR_Word) (conv7_Res_10));
    }
  }
}

void MR_CALL 
io_combinator__sequence_11_15_p_0(
  MR_Word TypeInfo_for_T1_76,
  MR_Word TypeInfo_for_T2_77,
  MR_Word TypeInfo_for_T3_78,
  MR_Word TypeInfo_for_T4_79,
  MR_Word TypeInfo_for_T5_80,
  MR_Word TypeInfo_for_T6_81,
  MR_Word TypeInfo_for_T7_82,
  MR_Word TypeInfo_for_T8_83,
  MR_Word TypeInfo_for_T9_84,
  MR_Word TypeInfo_for_T10_85,
  MR_Word TypeInfo_for_T11_86,
  MR_Word TypeInfo_for_T_87,
  MR_Word P1_16,
  MR_Word P2_17,
  MR_Word P3_18,
  MR_Word P4_19,
  MR_Word P5_20,
  MR_Word P6_21,
  MR_Word P7_22,
  MR_Word P8_23,
  MR_Word P9_24,
  MR_Word P10_25,
  MR_Word P11_26,
  MR_Word Combine_27,
  MR_Word * Res_28)
{
  MR_Word Res1_30;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_16, (MR_Integer) 1))));
  MR_Box conv2_Res1_30;
  MR_Box conv1_STATE_VARIABLE_IO_55_55;

  func_0(((MR_Box) (P1_16)), &conv2_Res1_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_55_55);
  Res1_30 = ((MR_Word) (conv2_Res1_30));
  switch (MR_tag((MR_Word) Res1_30)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_31 = (MR_hl_field(MR_mktag(1), Res1_30, (MR_Integer) 0));
        MR_Word Res2_32;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_17, (MR_Integer) 1))));
        MR_Box conv5_Res2_32;
        MR_Box conv4_STATE_VARIABLE_IO_56_56;

        func_3(((MR_Box) (P2_17)), &conv5_Res2_32, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_56_56);
        Res2_32 = ((MR_Word) (conv5_Res2_32));
        switch (MR_tag((MR_Word) Res2_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_33 = (MR_hl_field(MR_mktag(1), Res2_32, (MR_Integer) 0));
              MR_Word Res3_34;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_18, (MR_Integer) 1))));
              MR_Box conv8_Res3_34;
              MR_Box conv7_STATE_VARIABLE_IO_57_57;

              func_6(((MR_Box) (P3_18)), &conv8_Res3_34, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_57_57);
              Res3_34 = ((MR_Word) (conv8_Res3_34));
              switch (MR_tag((MR_Word) Res3_34)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_35 = (MR_hl_field(MR_mktag(1), Res3_34, (MR_Integer) 0));
                    MR_Word Res4_36;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_19, (MR_Integer) 1))));
                    MR_Box conv11_Res4_36;
                    MR_Box conv10_STATE_VARIABLE_IO_58_58;

                    func_9(((MR_Box) (P4_19)), &conv11_Res4_36, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_58_58);
                    Res4_36 = ((MR_Word) (conv11_Res4_36));
                    switch (MR_tag((MR_Word) Res4_36)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_37 = (MR_hl_field(MR_mktag(1), Res4_36, (MR_Integer) 0));
                          MR_Word Res5_38;
                          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_20, (MR_Integer) 1))));
                          MR_Box conv14_Res5_38;
                          MR_Box conv13_STATE_VARIABLE_IO_59_59;

                          func_12(((MR_Box) (P5_20)), &conv14_Res5_38, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_59_59);
                          Res5_38 = ((MR_Word) (conv14_Res5_38));
                          switch (MR_tag((MR_Word) Res5_38)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Box T5_39 = (MR_hl_field(MR_mktag(1), Res5_38, (MR_Integer) 0));
                                MR_Word Res6_40;
                                void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_21, (MR_Integer) 1))));
                                MR_Box conv17_Res6_40;
                                MR_Box conv16_STATE_VARIABLE_IO_60_60;

                                func_15(((MR_Box) (P6_21)), &conv17_Res6_40, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_60_60);
                                Res6_40 = ((MR_Word) (conv17_Res6_40));
                                switch (MR_tag((MR_Word) Res6_40)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Box T6_41 = (MR_hl_field(MR_mktag(1), Res6_40, (MR_Integer) 0));
                                      MR_Word Res7_42;
                                      void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_22, (MR_Integer) 1))));
                                      MR_Box conv20_Res7_42;
                                      MR_Box conv19_STATE_VARIABLE_IO_61_61;

                                      func_18(((MR_Box) (P7_22)), &conv20_Res7_42, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_61_61);
                                      Res7_42 = ((MR_Word) (conv20_Res7_42));
                                      switch (MR_tag((MR_Word) Res7_42)) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Box T7_43 = (MR_hl_field(MR_mktag(1), Res7_42, (MR_Integer) 0));
                                            MR_Word Res8_44;
                                            void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_23, (MR_Integer) 1))));
                                            MR_Box conv23_Res8_44;
                                            MR_Box conv22_STATE_VARIABLE_IO_62_62;

                                            func_21(((MR_Box) (P8_23)), &conv23_Res8_44, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_62_62);
                                            Res8_44 = ((MR_Word) (conv23_Res8_44));
                                            switch (MR_tag((MR_Word) Res8_44)) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  MR_Box T8_45 = (MR_hl_field(MR_mktag(1), Res8_44, (MR_Integer) 0));
                                                  MR_Word Res9_46;
                                                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_24, (MR_Integer) 1))));
                                                  MR_Box conv26_Res9_46;
                                                  MR_Box conv25_STATE_VARIABLE_IO_63_63;

                                                  func_24(((MR_Box) (P9_24)), &conv26_Res9_46, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_63_63);
                                                  Res9_46 = ((MR_Word) (conv26_Res9_46));
                                                  switch (MR_tag((MR_Word) Res9_46)) {
                                                    default: /*NOTREACHED*/ MR_assert(0);
                                                    case (MR_Integer) 0:
                                                      *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Box T9_47 = (MR_hl_field(MR_mktag(1), Res9_46, (MR_Integer) 0));
                                                        MR_Word Res10_48;
                                                        void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_25, (MR_Integer) 1))));
                                                        MR_Box conv29_Res10_48;
                                                        MR_Box conv28_STATE_VARIABLE_IO_64_64;

                                                        func_27(((MR_Box) (P10_25)), &conv29_Res10_48, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_64_64);
                                                        Res10_48 = ((MR_Word) (conv29_Res10_48));
                                                        switch (MR_tag((MR_Word) Res10_48)) {
                                                          default: /*NOTREACHED*/ MR_assert(0);
                                                          case (MR_Integer) 0:
                                                            *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                                                            break;
                                                          case (MR_Integer) 1:
                                                            {
                                                              MR_Box T10_49 = (MR_hl_field(MR_mktag(1), Res10_48, (MR_Integer) 0));
                                                              MR_Word Res11_50;
                                                              void MR_CALL (* func_30)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P11_26, (MR_Integer) 1))));
                                                              MR_Box conv32_Res11_50;
                                                              MR_Box conv31_STATE_VARIABLE_IO_54;

                                                              func_30(((MR_Box) (P11_26)), &conv32_Res11_50, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_54);
                                                              Res11_50 = ((MR_Word) (conv32_Res11_50));
                                                              switch (MR_tag((MR_Word) Res11_50)) {
                                                                default: /*NOTREACHED*/ MR_assert(0);
                                                                case (MR_Integer) 0:
                                                                  *Res_28 = (MR_Word) ((MR_Unsigned) 0U);
                                                                  break;
                                                                case (MR_Integer) 1:
                                                                  {
                                                                    MR_Box T11_51 = (MR_hl_field(MR_mktag(1), Res11_50, (MR_Integer) 0));
                                                                    void MR_CALL (* func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_27, (MR_Integer) 1))));
                                                                    MR_Box conv34_Res_28;

                                                                    func_33(((MR_Box) (Combine_27)), T1_31, T2_33, T3_35, T4_37, T5_39, T6_41, T7_43, T8_45, T9_47, T10_49, T11_51, &conv34_Res_28);
                                                                    *Res_28 = ((MR_Word) (conv34_Res_28));
                                                                  }
                                                                  break;
                                                                case (MR_Integer) 2:
                                                                  *Res_28 = Res11_50;
                                                                  break;
                                                              }
                                                            }
                                                            break;
                                                          case (MR_Integer) 2:
                                                            *Res_28 = Res10_48;
                                                            break;
                                                        }
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      *Res_28 = Res9_46;
                                                      break;
                                                  }
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                *Res_28 = Res8_44;
                                                break;
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 2:
                                          *Res_28 = Res7_42;
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    *Res_28 = Res6_40;
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              *Res_28 = Res5_38;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_28 = Res4_36;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_28 = Res3_34;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_28 = Res2_32;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_28 = Res1_30;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_10_14_p_0(
  MR_Word TypeInfo_for_T1_70,
  MR_Word TypeInfo_for_T2_71,
  MR_Word TypeInfo_for_T3_72,
  MR_Word TypeInfo_for_T4_73,
  MR_Word TypeInfo_for_T5_74,
  MR_Word TypeInfo_for_T6_75,
  MR_Word TypeInfo_for_T7_76,
  MR_Word TypeInfo_for_T8_77,
  MR_Word TypeInfo_for_T9_78,
  MR_Word TypeInfo_for_T10_79,
  MR_Word TypeInfo_for_T_80,
  MR_Word P1_15,
  MR_Word P2_16,
  MR_Word P3_17,
  MR_Word P4_18,
  MR_Word P5_19,
  MR_Word P6_20,
  MR_Word P7_21,
  MR_Word P8_22,
  MR_Word P9_23,
  MR_Word P10_24,
  MR_Word Combine_25,
  MR_Word * Res_26)
{
  MR_Word Res1_28;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_15, (MR_Integer) 1))));
  MR_Box conv2_Res1_28;
  MR_Box conv1_STATE_VARIABLE_IO_51_51;

  func_0(((MR_Box) (P1_15)), &conv2_Res1_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_51_51);
  Res1_28 = ((MR_Word) (conv2_Res1_28));
  switch (MR_tag((MR_Word) Res1_28)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_29 = (MR_hl_field(MR_mktag(1), Res1_28, (MR_Integer) 0));
        MR_Word Res2_30;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_16, (MR_Integer) 1))));
        MR_Box conv5_Res2_30;
        MR_Box conv4_STATE_VARIABLE_IO_52_52;

        func_3(((MR_Box) (P2_16)), &conv5_Res2_30, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_52_52);
        Res2_30 = ((MR_Word) (conv5_Res2_30));
        switch (MR_tag((MR_Word) Res2_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_31 = (MR_hl_field(MR_mktag(1), Res2_30, (MR_Integer) 0));
              MR_Word Res3_32;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_17, (MR_Integer) 1))));
              MR_Box conv8_Res3_32;
              MR_Box conv7_STATE_VARIABLE_IO_53_53;

              func_6(((MR_Box) (P3_17)), &conv8_Res3_32, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_53_53);
              Res3_32 = ((MR_Word) (conv8_Res3_32));
              switch (MR_tag((MR_Word) Res3_32)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_33 = (MR_hl_field(MR_mktag(1), Res3_32, (MR_Integer) 0));
                    MR_Word Res4_34;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_18, (MR_Integer) 1))));
                    MR_Box conv11_Res4_34;
                    MR_Box conv10_STATE_VARIABLE_IO_54_54;

                    func_9(((MR_Box) (P4_18)), &conv11_Res4_34, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_54_54);
                    Res4_34 = ((MR_Word) (conv11_Res4_34));
                    switch (MR_tag((MR_Word) Res4_34)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_35 = (MR_hl_field(MR_mktag(1), Res4_34, (MR_Integer) 0));
                          MR_Word Res5_36;
                          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_19, (MR_Integer) 1))));
                          MR_Box conv14_Res5_36;
                          MR_Box conv13_STATE_VARIABLE_IO_55_55;

                          func_12(((MR_Box) (P5_19)), &conv14_Res5_36, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_55_55);
                          Res5_36 = ((MR_Word) (conv14_Res5_36));
                          switch (MR_tag((MR_Word) Res5_36)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Box T5_37 = (MR_hl_field(MR_mktag(1), Res5_36, (MR_Integer) 0));
                                MR_Word Res6_38;
                                void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_20, (MR_Integer) 1))));
                                MR_Box conv17_Res6_38;
                                MR_Box conv16_STATE_VARIABLE_IO_56_56;

                                func_15(((MR_Box) (P6_20)), &conv17_Res6_38, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_56_56);
                                Res6_38 = ((MR_Word) (conv17_Res6_38));
                                switch (MR_tag((MR_Word) Res6_38)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Box T6_39 = (MR_hl_field(MR_mktag(1), Res6_38, (MR_Integer) 0));
                                      MR_Word Res7_40;
                                      void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_21, (MR_Integer) 1))));
                                      MR_Box conv20_Res7_40;
                                      MR_Box conv19_STATE_VARIABLE_IO_57_57;

                                      func_18(((MR_Box) (P7_21)), &conv20_Res7_40, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_57_57);
                                      Res7_40 = ((MR_Word) (conv20_Res7_40));
                                      switch (MR_tag((MR_Word) Res7_40)) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Box T7_41 = (MR_hl_field(MR_mktag(1), Res7_40, (MR_Integer) 0));
                                            MR_Word Res8_42;
                                            void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_22, (MR_Integer) 1))));
                                            MR_Box conv23_Res8_42;
                                            MR_Box conv22_STATE_VARIABLE_IO_58_58;

                                            func_21(((MR_Box) (P8_22)), &conv23_Res8_42, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_58_58);
                                            Res8_42 = ((MR_Word) (conv23_Res8_42));
                                            switch (MR_tag((MR_Word) Res8_42)) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  MR_Box T8_43 = (MR_hl_field(MR_mktag(1), Res8_42, (MR_Integer) 0));
                                                  MR_Word Res9_44;
                                                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_23, (MR_Integer) 1))));
                                                  MR_Box conv26_Res9_44;
                                                  MR_Box conv25_STATE_VARIABLE_IO_59_59;

                                                  func_24(((MR_Box) (P9_23)), &conv26_Res9_44, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_59_59);
                                                  Res9_44 = ((MR_Word) (conv26_Res9_44));
                                                  switch (MR_tag((MR_Word) Res9_44)) {
                                                    default: /*NOTREACHED*/ MR_assert(0);
                                                    case (MR_Integer) 0:
                                                      *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Box T9_45 = (MR_hl_field(MR_mktag(1), Res9_44, (MR_Integer) 0));
                                                        MR_Word Res10_46;
                                                        void MR_CALL (* func_27)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P10_24, (MR_Integer) 1))));
                                                        MR_Box conv29_Res10_46;
                                                        MR_Box conv28_STATE_VARIABLE_IO_50;

                                                        func_27(((MR_Box) (P10_24)), &conv29_Res10_46, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_50);
                                                        Res10_46 = ((MR_Word) (conv29_Res10_46));
                                                        switch (MR_tag((MR_Word) Res10_46)) {
                                                          default: /*NOTREACHED*/ MR_assert(0);
                                                          case (MR_Integer) 0:
                                                            *Res_26 = (MR_Word) ((MR_Unsigned) 0U);
                                                            break;
                                                          case (MR_Integer) 1:
                                                            {
                                                              MR_Box T10_47 = (MR_hl_field(MR_mktag(1), Res10_46, (MR_Integer) 0));
                                                              void MR_CALL (* func_30)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_25, (MR_Integer) 1))));
                                                              MR_Box conv31_Res_26;

                                                              func_30(((MR_Box) (Combine_25)), T1_29, T2_31, T3_33, T4_35, T5_37, T6_39, T7_41, T8_43, T9_45, T10_47, &conv31_Res_26);
                                                              *Res_26 = ((MR_Word) (conv31_Res_26));
                                                            }
                                                            break;
                                                          case (MR_Integer) 2:
                                                            *Res_26 = Res10_46;
                                                            break;
                                                        }
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      *Res_26 = Res9_44;
                                                      break;
                                                  }
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                *Res_26 = Res8_42;
                                                break;
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 2:
                                          *Res_26 = Res7_40;
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    *Res_26 = Res6_38;
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              *Res_26 = Res5_36;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_26 = Res4_34;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_26 = Res3_32;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_26 = Res2_30;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_26 = Res1_28;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_9_13_p_0(
  MR_Word TypeInfo_for_T1_64,
  MR_Word TypeInfo_for_T2_65,
  MR_Word TypeInfo_for_T3_66,
  MR_Word TypeInfo_for_T4_67,
  MR_Word TypeInfo_for_T5_68,
  MR_Word TypeInfo_for_T6_69,
  MR_Word TypeInfo_for_T7_70,
  MR_Word TypeInfo_for_T8_71,
  MR_Word TypeInfo_for_T9_72,
  MR_Word TypeInfo_for_T_73,
  MR_Word P1_14,
  MR_Word P2_15,
  MR_Word P3_16,
  MR_Word P4_17,
  MR_Word P5_18,
  MR_Word P6_19,
  MR_Word P7_20,
  MR_Word P8_21,
  MR_Word P9_22,
  MR_Word Combine_23,
  MR_Word * Res_24)
{
  MR_Word Res1_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_14, (MR_Integer) 1))));
  MR_Box conv2_Res1_26;
  MR_Box conv1_STATE_VARIABLE_IO_47_47;

  func_0(((MR_Box) (P1_14)), &conv2_Res1_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
  Res1_26 = ((MR_Word) (conv2_Res1_26));
  switch (MR_tag((MR_Word) Res1_26)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_27 = (MR_hl_field(MR_mktag(1), Res1_26, (MR_Integer) 0));
        MR_Word Res2_28;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_15, (MR_Integer) 1))));
        MR_Box conv5_Res2_28;
        MR_Box conv4_STATE_VARIABLE_IO_48_48;

        func_3(((MR_Box) (P2_15)), &conv5_Res2_28, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_48_48);
        Res2_28 = ((MR_Word) (conv5_Res2_28));
        switch (MR_tag((MR_Word) Res2_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_29 = (MR_hl_field(MR_mktag(1), Res2_28, (MR_Integer) 0));
              MR_Word Res3_30;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_16, (MR_Integer) 1))));
              MR_Box conv8_Res3_30;
              MR_Box conv7_STATE_VARIABLE_IO_49_49;

              func_6(((MR_Box) (P3_16)), &conv8_Res3_30, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_49_49);
              Res3_30 = ((MR_Word) (conv8_Res3_30));
              switch (MR_tag((MR_Word) Res3_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_31 = (MR_hl_field(MR_mktag(1), Res3_30, (MR_Integer) 0));
                    MR_Word Res4_32;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_17, (MR_Integer) 1))));
                    MR_Box conv11_Res4_32;
                    MR_Box conv10_STATE_VARIABLE_IO_50_50;

                    func_9(((MR_Box) (P4_17)), &conv11_Res4_32, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_50_50);
                    Res4_32 = ((MR_Word) (conv11_Res4_32));
                    switch (MR_tag((MR_Word) Res4_32)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_33 = (MR_hl_field(MR_mktag(1), Res4_32, (MR_Integer) 0));
                          MR_Word Res5_34;
                          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_18, (MR_Integer) 1))));
                          MR_Box conv14_Res5_34;
                          MR_Box conv13_STATE_VARIABLE_IO_51_51;

                          func_12(((MR_Box) (P5_18)), &conv14_Res5_34, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_51_51);
                          Res5_34 = ((MR_Word) (conv14_Res5_34));
                          switch (MR_tag((MR_Word) Res5_34)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Box T5_35 = (MR_hl_field(MR_mktag(1), Res5_34, (MR_Integer) 0));
                                MR_Word Res6_36;
                                void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_19, (MR_Integer) 1))));
                                MR_Box conv17_Res6_36;
                                MR_Box conv16_STATE_VARIABLE_IO_52_52;

                                func_15(((MR_Box) (P6_19)), &conv17_Res6_36, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_52_52);
                                Res6_36 = ((MR_Word) (conv17_Res6_36));
                                switch (MR_tag((MR_Word) Res6_36)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Box T6_37 = (MR_hl_field(MR_mktag(1), Res6_36, (MR_Integer) 0));
                                      MR_Word Res7_38;
                                      void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_20, (MR_Integer) 1))));
                                      MR_Box conv20_Res7_38;
                                      MR_Box conv19_STATE_VARIABLE_IO_53_53;

                                      func_18(((MR_Box) (P7_20)), &conv20_Res7_38, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_53_53);
                                      Res7_38 = ((MR_Word) (conv20_Res7_38));
                                      switch (MR_tag((MR_Word) Res7_38)) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Box T7_39 = (MR_hl_field(MR_mktag(1), Res7_38, (MR_Integer) 0));
                                            MR_Word Res8_40;
                                            void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_21, (MR_Integer) 1))));
                                            MR_Box conv23_Res8_40;
                                            MR_Box conv22_STATE_VARIABLE_IO_54_54;

                                            func_21(((MR_Box) (P8_21)), &conv23_Res8_40, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_54_54);
                                            Res8_40 = ((MR_Word) (conv23_Res8_40));
                                            switch (MR_tag((MR_Word) Res8_40)) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  MR_Box T8_41 = (MR_hl_field(MR_mktag(1), Res8_40, (MR_Integer) 0));
                                                  MR_Word Res9_42;
                                                  void MR_CALL (* func_24)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P9_22, (MR_Integer) 1))));
                                                  MR_Box conv26_Res9_42;
                                                  MR_Box conv25_STATE_VARIABLE_IO_46;

                                                  func_24(((MR_Box) (P9_22)), &conv26_Res9_42, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_46);
                                                  Res9_42 = ((MR_Word) (conv26_Res9_42));
                                                  switch (MR_tag((MR_Word) Res9_42)) {
                                                    default: /*NOTREACHED*/ MR_assert(0);
                                                    case (MR_Integer) 0:
                                                      *Res_24 = (MR_Word) ((MR_Unsigned) 0U);
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Box T9_43 = (MR_hl_field(MR_mktag(1), Res9_42, (MR_Integer) 0));
                                                        void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_23, (MR_Integer) 1))));
                                                        MR_Box conv28_Res_24;

                                                        func_27(((MR_Box) (Combine_23)), T1_27, T2_29, T3_31, T4_33, T5_35, T6_37, T7_39, T8_41, T9_43, &conv28_Res_24);
                                                        *Res_24 = ((MR_Word) (conv28_Res_24));
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      *Res_24 = Res9_42;
                                                      break;
                                                  }
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                *Res_24 = Res8_40;
                                                break;
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 2:
                                          *Res_24 = Res7_38;
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    *Res_24 = Res6_36;
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              *Res_24 = Res5_34;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_24 = Res4_32;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_24 = Res3_30;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_24 = Res2_28;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_24 = Res1_26;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_8_12_p_0(
  MR_Word TypeInfo_for_T1_58,
  MR_Word TypeInfo_for_T2_59,
  MR_Word TypeInfo_for_T3_60,
  MR_Word TypeInfo_for_T4_61,
  MR_Word TypeInfo_for_T5_62,
  MR_Word TypeInfo_for_T6_63,
  MR_Word TypeInfo_for_T7_64,
  MR_Word TypeInfo_for_T8_65,
  MR_Word TypeInfo_for_T_66,
  MR_Word P1_13,
  MR_Word P2_14,
  MR_Word P3_15,
  MR_Word P4_16,
  MR_Word P5_17,
  MR_Word P6_18,
  MR_Word P7_19,
  MR_Word P8_20,
  MR_Word Combine_21,
  MR_Word * Res_22)
{
  MR_Word Res1_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_13, (MR_Integer) 1))));
  MR_Box conv2_Res1_24;
  MR_Box conv1_STATE_VARIABLE_IO_43_43;

  func_0(((MR_Box) (P1_13)), &conv2_Res1_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_43_43);
  Res1_24 = ((MR_Word) (conv2_Res1_24));
  switch (MR_tag((MR_Word) Res1_24)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_25 = (MR_hl_field(MR_mktag(1), Res1_24, (MR_Integer) 0));
        MR_Word Res2_26;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_14, (MR_Integer) 1))));
        MR_Box conv5_Res2_26;
        MR_Box conv4_STATE_VARIABLE_IO_44_44;

        func_3(((MR_Box) (P2_14)), &conv5_Res2_26, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_44_44);
        Res2_26 = ((MR_Word) (conv5_Res2_26));
        switch (MR_tag((MR_Word) Res2_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_27 = (MR_hl_field(MR_mktag(1), Res2_26, (MR_Integer) 0));
              MR_Word Res3_28;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_15, (MR_Integer) 1))));
              MR_Box conv8_Res3_28;
              MR_Box conv7_STATE_VARIABLE_IO_45_45;

              func_6(((MR_Box) (P3_15)), &conv8_Res3_28, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_45_45);
              Res3_28 = ((MR_Word) (conv8_Res3_28));
              switch (MR_tag((MR_Word) Res3_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_29 = (MR_hl_field(MR_mktag(1), Res3_28, (MR_Integer) 0));
                    MR_Word Res4_30;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_16, (MR_Integer) 1))));
                    MR_Box conv11_Res4_30;
                    MR_Box conv10_STATE_VARIABLE_IO_46_46;

                    func_9(((MR_Box) (P4_16)), &conv11_Res4_30, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_46_46);
                    Res4_30 = ((MR_Word) (conv11_Res4_30));
                    switch (MR_tag((MR_Word) Res4_30)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_31 = (MR_hl_field(MR_mktag(1), Res4_30, (MR_Integer) 0));
                          MR_Word Res5_32;
                          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_17, (MR_Integer) 1))));
                          MR_Box conv14_Res5_32;
                          MR_Box conv13_STATE_VARIABLE_IO_47_47;

                          func_12(((MR_Box) (P5_17)), &conv14_Res5_32, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_47_47);
                          Res5_32 = ((MR_Word) (conv14_Res5_32));
                          switch (MR_tag((MR_Word) Res5_32)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Box T5_33 = (MR_hl_field(MR_mktag(1), Res5_32, (MR_Integer) 0));
                                MR_Word Res6_34;
                                void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_18, (MR_Integer) 1))));
                                MR_Box conv17_Res6_34;
                                MR_Box conv16_STATE_VARIABLE_IO_48_48;

                                func_15(((MR_Box) (P6_18)), &conv17_Res6_34, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_48_48);
                                Res6_34 = ((MR_Word) (conv17_Res6_34));
                                switch (MR_tag((MR_Word) Res6_34)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Box T6_35 = (MR_hl_field(MR_mktag(1), Res6_34, (MR_Integer) 0));
                                      MR_Word Res7_36;
                                      void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_19, (MR_Integer) 1))));
                                      MR_Box conv20_Res7_36;
                                      MR_Box conv19_STATE_VARIABLE_IO_49_49;

                                      func_18(((MR_Box) (P7_19)), &conv20_Res7_36, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_49_49);
                                      Res7_36 = ((MR_Word) (conv20_Res7_36));
                                      switch (MR_tag((MR_Word) Res7_36)) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Box T7_37 = (MR_hl_field(MR_mktag(1), Res7_36, (MR_Integer) 0));
                                            MR_Word Res8_38;
                                            void MR_CALL (* func_21)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P8_20, (MR_Integer) 1))));
                                            MR_Box conv23_Res8_38;
                                            MR_Box conv22_STATE_VARIABLE_IO_42;

                                            func_21(((MR_Box) (P8_20)), &conv23_Res8_38, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_42);
                                            Res8_38 = ((MR_Word) (conv23_Res8_38));
                                            switch (MR_tag((MR_Word) Res8_38)) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
                                                break;
                                              case (MR_Integer) 1:
                                                {
                                                  MR_Box T8_39 = (MR_hl_field(MR_mktag(1), Res8_38, (MR_Integer) 0));
                                                  void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_21, (MR_Integer) 1))));
                                                  MR_Box conv25_Res_22;

                                                  func_24(((MR_Box) (Combine_21)), T1_25, T2_27, T3_29, T4_31, T5_33, T6_35, T7_37, T8_39, &conv25_Res_22);
                                                  *Res_22 = ((MR_Word) (conv25_Res_22));
                                                }
                                                break;
                                              case (MR_Integer) 2:
                                                *Res_22 = Res8_38;
                                                break;
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 2:
                                          *Res_22 = Res7_36;
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    *Res_22 = Res6_34;
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              *Res_22 = Res5_32;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_22 = Res4_30;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_22 = Res3_28;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_22 = Res2_26;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_22 = Res1_24;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_7_11_p_0(
  MR_Word TypeInfo_for_T1_52,
  MR_Word TypeInfo_for_T2_53,
  MR_Word TypeInfo_for_T3_54,
  MR_Word TypeInfo_for_T4_55,
  MR_Word TypeInfo_for_T5_56,
  MR_Word TypeInfo_for_T6_57,
  MR_Word TypeInfo_for_T7_58,
  MR_Word TypeInfo_for_T_59,
  MR_Word P1_12,
  MR_Word P2_13,
  MR_Word P3_14,
  MR_Word P4_15,
  MR_Word P5_16,
  MR_Word P6_17,
  MR_Word P7_18,
  MR_Word Combine_19,
  MR_Word * Res_20)
{
  MR_Word Res1_22;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_12, (MR_Integer) 1))));
  MR_Box conv2_Res1_22;
  MR_Box conv1_STATE_VARIABLE_IO_39_39;

  func_0(((MR_Box) (P1_12)), &conv2_Res1_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39_39);
  Res1_22 = ((MR_Word) (conv2_Res1_22));
  switch (MR_tag((MR_Word) Res1_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_20 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_23 = (MR_hl_field(MR_mktag(1), Res1_22, (MR_Integer) 0));
        MR_Word Res2_24;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_13, (MR_Integer) 1))));
        MR_Box conv5_Res2_24;
        MR_Box conv4_STATE_VARIABLE_IO_40_40;

        func_3(((MR_Box) (P2_13)), &conv5_Res2_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_40_40);
        Res2_24 = ((MR_Word) (conv5_Res2_24));
        switch (MR_tag((MR_Word) Res2_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_20 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_25 = (MR_hl_field(MR_mktag(1), Res2_24, (MR_Integer) 0));
              MR_Word Res3_26;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_14, (MR_Integer) 1))));
              MR_Box conv8_Res3_26;
              MR_Box conv7_STATE_VARIABLE_IO_41_41;

              func_6(((MR_Box) (P3_14)), &conv8_Res3_26, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_41_41);
              Res3_26 = ((MR_Word) (conv8_Res3_26));
              switch (MR_tag((MR_Word) Res3_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_20 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_27 = (MR_hl_field(MR_mktag(1), Res3_26, (MR_Integer) 0));
                    MR_Word Res4_28;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_15, (MR_Integer) 1))));
                    MR_Box conv11_Res4_28;
                    MR_Box conv10_STATE_VARIABLE_IO_42_42;

                    func_9(((MR_Box) (P4_15)), &conv11_Res4_28, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_42_42);
                    Res4_28 = ((MR_Word) (conv11_Res4_28));
                    switch (MR_tag((MR_Word) Res4_28)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_20 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_29 = (MR_hl_field(MR_mktag(1), Res4_28, (MR_Integer) 0));
                          MR_Word Res5_30;
                          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_16, (MR_Integer) 1))));
                          MR_Box conv14_Res5_30;
                          MR_Box conv13_STATE_VARIABLE_IO_43_43;

                          func_12(((MR_Box) (P5_16)), &conv14_Res5_30, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_43_43);
                          Res5_30 = ((MR_Word) (conv14_Res5_30));
                          switch (MR_tag((MR_Word) Res5_30)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *Res_20 = (MR_Word) ((MR_Unsigned) 0U);
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Box T5_31 = (MR_hl_field(MR_mktag(1), Res5_30, (MR_Integer) 0));
                                MR_Word Res6_32;
                                void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_17, (MR_Integer) 1))));
                                MR_Box conv17_Res6_32;
                                MR_Box conv16_STATE_VARIABLE_IO_44_44;

                                func_15(((MR_Box) (P6_17)), &conv17_Res6_32, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_44_44);
                                Res6_32 = ((MR_Word) (conv17_Res6_32));
                                switch (MR_tag((MR_Word) Res6_32)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *Res_20 = (MR_Word) ((MR_Unsigned) 0U);
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Box T6_33 = (MR_hl_field(MR_mktag(1), Res6_32, (MR_Integer) 0));
                                      MR_Word Res7_34;
                                      void MR_CALL (* func_18)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P7_18, (MR_Integer) 1))));
                                      MR_Box conv20_Res7_34;
                                      MR_Box conv19_STATE_VARIABLE_IO_38;

                                      func_18(((MR_Box) (P7_18)), &conv20_Res7_34, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_38);
                                      Res7_34 = ((MR_Word) (conv20_Res7_34));
                                      switch (MR_tag((MR_Word) Res7_34)) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          *Res_20 = (MR_Word) ((MR_Unsigned) 0U);
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            MR_Box T7_35 = (MR_hl_field(MR_mktag(1), Res7_34, (MR_Integer) 0));
                                            void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_19, (MR_Integer) 1))));
                                            MR_Box conv22_Res_20;

                                            func_21(((MR_Box) (Combine_19)), T1_23, T2_25, T3_27, T4_29, T5_31, T6_33, T7_35, &conv22_Res_20);
                                            *Res_20 = ((MR_Word) (conv22_Res_20));
                                          }
                                          break;
                                        case (MR_Integer) 2:
                                          *Res_20 = Res7_34;
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    *Res_20 = Res6_32;
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              *Res_20 = Res5_30;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_20 = Res4_28;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_20 = Res3_26;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_20 = Res2_24;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_20 = Res1_22;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_6_10_p_0(
  MR_Word TypeInfo_for_T1_46,
  MR_Word TypeInfo_for_T2_47,
  MR_Word TypeInfo_for_T3_48,
  MR_Word TypeInfo_for_T4_49,
  MR_Word TypeInfo_for_T5_50,
  MR_Word TypeInfo_for_T6_51,
  MR_Word TypeInfo_for_T_52,
  MR_Word P1_11,
  MR_Word P2_12,
  MR_Word P3_13,
  MR_Word P4_14,
  MR_Word P5_15,
  MR_Word P6_16,
  MR_Word Combine_17,
  MR_Word * Res_18)
{
  MR_Word Res1_20;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_11, (MR_Integer) 1))));
  MR_Box conv2_Res1_20;
  MR_Box conv1_STATE_VARIABLE_IO_35_35;

  func_0(((MR_Box) (P1_11)), &conv2_Res1_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_35_35);
  Res1_20 = ((MR_Word) (conv2_Res1_20));
  switch (MR_tag((MR_Word) Res1_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_18 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_21 = (MR_hl_field(MR_mktag(1), Res1_20, (MR_Integer) 0));
        MR_Word Res2_22;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_12, (MR_Integer) 1))));
        MR_Box conv5_Res2_22;
        MR_Box conv4_STATE_VARIABLE_IO_36_36;

        func_3(((MR_Box) (P2_12)), &conv5_Res2_22, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_36_36);
        Res2_22 = ((MR_Word) (conv5_Res2_22));
        switch (MR_tag((MR_Word) Res2_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_18 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_23 = (MR_hl_field(MR_mktag(1), Res2_22, (MR_Integer) 0));
              MR_Word Res3_24;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_13, (MR_Integer) 1))));
              MR_Box conv8_Res3_24;
              MR_Box conv7_STATE_VARIABLE_IO_37_37;

              func_6(((MR_Box) (P3_13)), &conv8_Res3_24, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_37_37);
              Res3_24 = ((MR_Word) (conv8_Res3_24));
              switch (MR_tag((MR_Word) Res3_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_18 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_25 = (MR_hl_field(MR_mktag(1), Res3_24, (MR_Integer) 0));
                    MR_Word Res4_26;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_14, (MR_Integer) 1))));
                    MR_Box conv11_Res4_26;
                    MR_Box conv10_STATE_VARIABLE_IO_38_38;

                    func_9(((MR_Box) (P4_14)), &conv11_Res4_26, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_38_38);
                    Res4_26 = ((MR_Word) (conv11_Res4_26));
                    switch (MR_tag((MR_Word) Res4_26)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_18 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_27 = (MR_hl_field(MR_mktag(1), Res4_26, (MR_Integer) 0));
                          MR_Word Res5_28;
                          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_15, (MR_Integer) 1))));
                          MR_Box conv14_Res5_28;
                          MR_Box conv13_STATE_VARIABLE_IO_39_39;

                          func_12(((MR_Box) (P5_15)), &conv14_Res5_28, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_39_39);
                          Res5_28 = ((MR_Word) (conv14_Res5_28));
                          switch (MR_tag((MR_Word) Res5_28)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *Res_18 = (MR_Word) ((MR_Unsigned) 0U);
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Box T5_29 = (MR_hl_field(MR_mktag(1), Res5_28, (MR_Integer) 0));
                                MR_Word Res6_30;
                                void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P6_16, (MR_Integer) 1))));
                                MR_Box conv17_Res6_30;
                                MR_Box conv16_STATE_VARIABLE_IO_34;

                                func_15(((MR_Box) (P6_16)), &conv17_Res6_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_34);
                                Res6_30 = ((MR_Word) (conv17_Res6_30));
                                switch (MR_tag((MR_Word) Res6_30)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *Res_18 = (MR_Word) ((MR_Unsigned) 0U);
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Box T6_31 = (MR_hl_field(MR_mktag(1), Res6_30, (MR_Integer) 0));
                                      void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_17, (MR_Integer) 1))));
                                      MR_Box conv19_Res_18;

                                      func_18(((MR_Box) (Combine_17)), T1_21, T2_23, T3_25, T4_27, T5_29, T6_31, &conv19_Res_18);
                                      *Res_18 = ((MR_Word) (conv19_Res_18));
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    *Res_18 = Res6_30;
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              *Res_18 = Res5_28;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_18 = Res4_26;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_18 = Res3_24;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_18 = Res2_22;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_18 = Res1_20;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_5_9_p_0(
  MR_Word TypeInfo_for_T1_40,
  MR_Word TypeInfo_for_T2_41,
  MR_Word TypeInfo_for_T3_42,
  MR_Word TypeInfo_for_T4_43,
  MR_Word TypeInfo_for_T5_44,
  MR_Word TypeInfo_for_T_45,
  MR_Word P1_10,
  MR_Word P2_11,
  MR_Word P3_12,
  MR_Word P4_13,
  MR_Word P5_14,
  MR_Word Combine_15,
  MR_Word * Res_16)
{
  MR_Word Res1_18;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_10, (MR_Integer) 1))));
  MR_Box conv2_Res1_18;
  MR_Box conv1_STATE_VARIABLE_IO_31_31;

  func_0(((MR_Box) (P1_10)), &conv2_Res1_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
  Res1_18 = ((MR_Word) (conv2_Res1_18));
  switch (MR_tag((MR_Word) Res1_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_19 = (MR_hl_field(MR_mktag(1), Res1_18, (MR_Integer) 0));
        MR_Word Res2_20;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_11, (MR_Integer) 1))));
        MR_Box conv5_Res2_20;
        MR_Box conv4_STATE_VARIABLE_IO_32_32;

        func_3(((MR_Box) (P2_11)), &conv5_Res2_20, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_32_32);
        Res2_20 = ((MR_Word) (conv5_Res2_20));
        switch (MR_tag((MR_Word) Res2_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_21 = (MR_hl_field(MR_mktag(1), Res2_20, (MR_Integer) 0));
              MR_Word Res3_22;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_12, (MR_Integer) 1))));
              MR_Box conv8_Res3_22;
              MR_Box conv7_STATE_VARIABLE_IO_33_33;

              func_6(((MR_Box) (P3_12)), &conv8_Res3_22, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_33_33);
              Res3_22 = ((MR_Word) (conv8_Res3_22));
              switch (MR_tag((MR_Word) Res3_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_23 = (MR_hl_field(MR_mktag(1), Res3_22, (MR_Integer) 0));
                    MR_Word Res4_24;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_13, (MR_Integer) 1))));
                    MR_Box conv11_Res4_24;
                    MR_Box conv10_STATE_VARIABLE_IO_34_34;

                    func_9(((MR_Box) (P4_13)), &conv11_Res4_24, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_34_34);
                    Res4_24 = ((MR_Word) (conv11_Res4_24));
                    switch (MR_tag((MR_Word) Res4_24)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_25 = (MR_hl_field(MR_mktag(1), Res4_24, (MR_Integer) 0));
                          MR_Word Res5_26;
                          void MR_CALL (* func_12)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P5_14, (MR_Integer) 1))));
                          MR_Box conv14_Res5_26;
                          MR_Box conv13_STATE_VARIABLE_IO_30;

                          func_12(((MR_Box) (P5_14)), &conv14_Res5_26, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_30);
                          Res5_26 = ((MR_Word) (conv14_Res5_26));
                          switch (MR_tag((MR_Word) Res5_26)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Box T5_27 = (MR_hl_field(MR_mktag(1), Res5_26, (MR_Integer) 0));
                                void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_15, (MR_Integer) 1))));
                                MR_Box conv16_Res_16;

                                func_15(((MR_Box) (Combine_15)), T1_19, T2_21, T3_23, T4_25, T5_27, &conv16_Res_16);
                                *Res_16 = ((MR_Word) (conv16_Res_16));
                              }
                              break;
                            case (MR_Integer) 2:
                              *Res_16 = Res5_26;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_16 = Res4_24;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_16 = Res3_22;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_16 = Res2_20;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_16 = Res1_18;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_4_8_p_0(
  MR_Word TypeInfo_for_T1_34,
  MR_Word TypeInfo_for_T2_35,
  MR_Word TypeInfo_for_T3_36,
  MR_Word TypeInfo_for_T4_37,
  MR_Word TypeInfo_for_T_38,
  MR_Word P1_9,
  MR_Word P2_10,
  MR_Word P3_11,
  MR_Word P4_12,
  MR_Word Combine_13,
  MR_Word * Res_14)
{
  MR_Word Res1_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_9, (MR_Integer) 1))));
  MR_Box conv2_Res1_16;
  MR_Box conv1_STATE_VARIABLE_IO_27_27;

  func_0(((MR_Box) (P1_9)), &conv2_Res1_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_27);
  Res1_16 = ((MR_Word) (conv2_Res1_16));
  switch (MR_tag((MR_Word) Res1_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_17 = (MR_hl_field(MR_mktag(1), Res1_16, (MR_Integer) 0));
        MR_Word Res2_18;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_10, (MR_Integer) 1))));
        MR_Box conv5_Res2_18;
        MR_Box conv4_STATE_VARIABLE_IO_28_28;

        func_3(((MR_Box) (P2_10)), &conv5_Res2_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_28_28);
        Res2_18 = ((MR_Word) (conv5_Res2_18));
        switch (MR_tag((MR_Word) Res2_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_19 = (MR_hl_field(MR_mktag(1), Res2_18, (MR_Integer) 0));
              MR_Word Res3_20;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_11, (MR_Integer) 1))));
              MR_Box conv8_Res3_20;
              MR_Box conv7_STATE_VARIABLE_IO_29_29;

              func_6(((MR_Box) (P3_11)), &conv8_Res3_20, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_29_29);
              Res3_20 = ((MR_Word) (conv8_Res3_20));
              switch (MR_tag((MR_Word) Res3_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_21 = (MR_hl_field(MR_mktag(1), Res3_20, (MR_Integer) 0));
                    MR_Word Res4_22;
                    void MR_CALL (* func_9)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P4_12, (MR_Integer) 1))));
                    MR_Box conv11_Res4_22;
                    MR_Box conv10_STATE_VARIABLE_IO_26;

                    func_9(((MR_Box) (P4_12)), &conv11_Res4_22, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_26);
                    Res4_22 = ((MR_Word) (conv11_Res4_22));
                    switch (MR_tag((MR_Word) Res4_22)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box T4_23 = (MR_hl_field(MR_mktag(1), Res4_22, (MR_Integer) 0));
                          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_13, (MR_Integer) 1))));
                          MR_Box conv13_Res_14;

                          func_12(((MR_Box) (Combine_13)), T1_17, T2_19, T3_21, T4_23, &conv13_Res_14);
                          *Res_14 = ((MR_Word) (conv13_Res_14));
                        }
                        break;
                      case (MR_Integer) 2:
                        *Res_14 = Res4_22;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_14 = Res3_20;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_14 = Res2_18;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_14 = Res1_16;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_3_7_p_0(
  MR_Word TypeInfo_for_T1_28,
  MR_Word TypeInfo_for_T2_29,
  MR_Word TypeInfo_for_T3_30,
  MR_Word TypeInfo_for_T_31,
  MR_Word P1_8,
  MR_Word P2_9,
  MR_Word P3_10,
  MR_Word Combine_11,
  MR_Word * Res_12)
{
  MR_Word Res1_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_8, (MR_Integer) 1))));
  MR_Box conv2_Res1_14;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;

  func_0(((MR_Box) (P1_8)), &conv2_Res1_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  Res1_14 = ((MR_Word) (conv2_Res1_14));
  switch (MR_tag((MR_Word) Res1_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_15 = (MR_hl_field(MR_mktag(1), Res1_14, (MR_Integer) 0));
        MR_Word Res2_16;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_9, (MR_Integer) 1))));
        MR_Box conv5_Res2_16;
        MR_Box conv4_STATE_VARIABLE_IO_24_24;

        func_3(((MR_Box) (P2_9)), &conv5_Res2_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24_24);
        Res2_16 = ((MR_Word) (conv5_Res2_16));
        switch (MR_tag((MR_Word) Res2_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_17 = (MR_hl_field(MR_mktag(1), Res2_16, (MR_Integer) 0));
              MR_Word Res3_18;
              void MR_CALL (* func_6)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P3_10, (MR_Integer) 1))));
              MR_Box conv8_Res3_18;
              MR_Box conv7_STATE_VARIABLE_IO_22;

              func_6(((MR_Box) (P3_10)), &conv8_Res3_18, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_22);
              Res3_18 = ((MR_Word) (conv8_Res3_18));
              switch (MR_tag((MR_Word) Res3_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box T3_19 = (MR_hl_field(MR_mktag(1), Res3_18, (MR_Integer) 0));
                    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_11, (MR_Integer) 1))));
                    MR_Box conv10_Res_12;

                    func_9(((MR_Box) (Combine_11)), T1_15, T2_17, T3_19, &conv10_Res_12);
                    *Res_12 = ((MR_Word) (conv10_Res_12));
                  }
                  break;
                case (MR_Integer) 2:
                  *Res_12 = Res3_18;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *Res_12 = Res2_16;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_12 = Res1_14;
      break;
  }
}

void MR_CALL 
io_combinator__sequence_2_6_p_0(
  MR_Word TypeInfo_for_T1_22,
  MR_Word TypeInfo_for_T2_23,
  MR_Word TypeInfo_for_T_24,
  MR_Word P1_7,
  MR_Word P2_8,
  MR_Word Combine_9,
  MR_Word * Res_10)
{
  MR_Word Res1_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P1_7, (MR_Integer) 1))));
  MR_Box conv2_Res1_12;
  MR_Box conv1_STATE_VARIABLE_IO_19_19;

  func_0(((MR_Box) (P1_7)), &conv2_Res1_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_19);
  Res1_12 = ((MR_Word) (conv2_Res1_12));
  switch (MR_tag((MR_Word) Res1_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box T1_13 = (MR_hl_field(MR_mktag(1), Res1_12, (MR_Integer) 0));
        MR_Word Res2_14;
        void MR_CALL (* func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P2_8, (MR_Integer) 1))));
        MR_Box conv5_Res2_14;
        MR_Box conv4_STATE_VARIABLE_IO_18;

        func_3(((MR_Box) (P2_8)), &conv5_Res2_14, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_18);
        Res2_14 = ((MR_Word) (conv5_Res2_14));
        switch (MR_tag((MR_Word) Res2_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Box T2_15 = (MR_hl_field(MR_mktag(1), Res2_14, (MR_Integer) 0));
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Combine_9, (MR_Integer) 1))));
              MR_Box conv7_Res_10;

              func_6(((MR_Box) (Combine_9)), T1_13, T2_15, &conv7_Res_10);
              *Res_10 = ((MR_Word) (conv7_Res_10));
            }
            break;
          case (MR_Integer) 2:
            *Res_10 = Res2_14;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      *Res_10 = Res1_12;
      break;
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

// Ensure everything is compiled with the same grade.
const char *mercury__io_combinator__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io_combinator.
