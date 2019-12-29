/*
** Automatically generated from `autopar_annotate.m'
** by the Mercury compiler,
** version rotd-2019-12-29
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


// :- module mdprof_fb.automatic_parallelism.autopar_annotate.
// :- implementation.

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_annotate.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"




static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(
  MR_Word Cond_11,
  MR_Word Then_12,
  MR_Word Else_13,
  MR_Word * SeenDuplicateInstantiation_14,
  MR_Word * ConsumedVars_15,
  MR_Word * BoundVars_16,
  MR_Word InstMap0_17,
  MR_Word * InstMap_18,
  MR_Word STATE_VARIABLE_InstMapArray_0_35,
  MR_Word * STATE_VARIABLE_InstMapArray_36);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_InstMapArray_0_7,
  MR_Word * STATE_VARIABLE_InstMapArray_8);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_InstMapArray_0_7,
  MR_Word * STATE_VARIABLE_InstMapArray_8);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_InstMap_0_5,
  MR_Word * STATE_VARIABLE_InstMap_6,
  MR_Word STATE_VARIABLE_InstMapArray_0_7,
  MR_Word * STATE_VARIABLE_InstMapArray_8);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(
  MR_Word Cond_11,
  MR_Word Then_12,
  MR_Word Else_13,
  MR_Word * SeenDuplicateInstantiation_14,
  MR_Word * ConsumedVars_15,
  MR_Word * BoundVars_16,
  MR_Word InstMap0_17,
  MR_Word * InstMap_18,
  MR_Word STATE_VARIABLE_InstMapArray_0_35,
  MR_Word * STATE_VARIABLE_InstMapArray_36)
{
  {
    MR_bool succeeded;
    MR_Word SeenDuplicateInstantiationCond_20;
    MR_Word ConsumedVarsCond_21;
    MR_Word InstMapAfterCond_23;
    MR_Word SeenDuplicateInstantiationThen_24;
    MR_Word ConsumedVarsThen_25;
    MR_Word BoundVarsThen_26;
    MR_Word InstMapAfterThen_27;
    MR_Word SeenDuplicateInstantiationElse_28;
    MR_Word ConsumedVarsElse_29;
    MR_Word BoundVarsElse_30;
    MR_Word InstMapAfterElse_31;
    MR_Word ConsumedVarsCondThen_32;
    MR_Word ThenDetism_33;
    MR_Word ElseDetism_34;
    MR_Word STATE_VARIABLE_InstMapArray_37_37;
    MR_Word STATE_VARIABLE_InstMapArray_38_38;
    MR_Word _BoundVarsCond_22;

    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Cond_11, &SeenDuplicateInstantiationCond_20, &ConsumedVarsCond_21, &_BoundVarsCond_22, InstMap0_17, &InstMapAfterCond_23, STATE_VARIABLE_InstMapArray_0_35, &STATE_VARIABLE_InstMapArray_37_37);
    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Then_12, &SeenDuplicateInstantiationThen_24, &ConsumedVarsThen_25, &BoundVarsThen_26, InstMapAfterCond_23, &InstMapAfterThen_27, STATE_VARIABLE_InstMapArray_37_37, &STATE_VARIABLE_InstMapArray_38_38);
    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Else_13, &SeenDuplicateInstantiationElse_28, &ConsumedVarsElse_29, &BoundVarsElse_30, InstMap0_17, &InstMapAfterElse_31, STATE_VARIABLE_InstMapArray_38_38, STATE_VARIABLE_InstMapArray_36);
    succeeded = (SeenDuplicateInstantiationCond_20 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (SeenDuplicateInstantiationThen_24 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (SeenDuplicateInstantiationElse_28 == (MR_Integer) 1);
    }
    if (succeeded)
      *SeenDuplicateInstantiation_14 = (MR_Integer) 1;
    else
      *SeenDuplicateInstantiation_14 = (MR_Integer) 0;
    mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsumedVarsCond_21, ConsumedVarsThen_25, &ConsumedVarsCondThen_32);
    mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsumedVarsCondThen_32, ConsumedVarsElse_29, ConsumedVars_15);
    mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BoundVarsThen_26, BoundVarsElse_30, BoundVars_16);
    ThenDetism_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Then_12, (MR_Integer) 1))) & (MR_Integer) 7);
    ElseDetism_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Else_13, (MR_Integer) 1))) & (MR_Integer) 7);
    *InstMap_18 = program_representation_utils__merge_inst_map_4_f_0(InstMapAfterThen_27, ThenDetism_33, InstMapAfterElse_31, ElseDetism_34);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_InstMapArray_0_7,
  MR_Word * STATE_VARIABLE_InstMapArray_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    *STATE_VARIABLE_InstMapArray_8 = STATE_VARIABLE_InstMapArray_0_7;
    *HeadVar__6_6 = HeadVar__5_5;
  }
  else
  {
    MR_Word Case_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 2))));
    MR_Word HeadDetism_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_25, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word SeenDuplicateInstantiationHead_27;
    MR_Word ConsumedVarsHead_28;
    MR_Word BoundVarsHead_29;
    MR_Word InstMapHead_30;
    MR_Word SeenDuplicateInstantiationTail_31;
    MR_Word ConsumedVarsTail_32;
    MR_Word BoundVarsTail_33;
    MR_Word InstMapTail_34;
    MR_Word TailDetism_35;
    MR_Word STATE_VARIABLE_InstMapArray_40_40;

    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Goal_25, &SeenDuplicateInstantiationHead_27, &ConsumedVarsHead_28, &BoundVarsHead_29, HeadVar__5_5, &InstMapHead_30, STATE_VARIABLE_InstMapArray_0_7, &STATE_VARIABLE_InstMapArray_40_40);
    mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(Cases_16, &SeenDuplicateInstantiationTail_31, &ConsumedVarsTail_32, &BoundVarsTail_33, HeadVar__5_5, &InstMapTail_34, STATE_VARIABLE_InstMapArray_40_40, STATE_VARIABLE_InstMapArray_8);
    mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsumedVarsTail_32, ConsumedVarsHead_28, HeadVar__3_3);
    if ((Cases_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      TailDetism_35 = (MR_Integer) 7;
      *HeadVar__4_4 = BoundVarsHead_29;
    }
    else
    {
      TailDetism_35 = (MR_Integer) 0;
      mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BoundVarsTail_33, BoundVarsHead_29, HeadVar__4_4);
    }
    *HeadVar__6_6 = program_representation_utils__merge_inst_map_4_f_0(InstMapHead_30, HeadDetism_26, InstMapTail_34, TailDetism_35);
    *HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(SeenDuplicateInstantiationHead_27, SeenDuplicateInstantiationTail_31);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_InstMapArray_0_7,
  MR_Word * STATE_VARIABLE_InstMapArray_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    *STATE_VARIABLE_InstMapArray_8 = STATE_VARIABLE_InstMapArray_0_7;
    *HeadVar__6_6 = HeadVar__5_5;
  }
  else
  {
    MR_Word Disj_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadDetism_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Disj_15, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word SeenDuplicateInstantiationHead_24;
    MR_Word ConsumedVarsHead_25;
    MR_Word BoundVarsHead_26;
    MR_Word InstMapHead_27;
    MR_Word SeenDuplicateInstantiationTail_28;
    MR_Word ConsumedVarsTail_29;
    MR_Word BoundVarsTail_30;
    MR_Word InstMapTail_31;
    MR_Word TailDetism_32;
    MR_Word STATE_VARIABLE_InstMapArray_37_37;

    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Disj_15, &SeenDuplicateInstantiationHead_24, &ConsumedVarsHead_25, &BoundVarsHead_26, HeadVar__5_5, &InstMapHead_27, STATE_VARIABLE_InstMapArray_0_7, &STATE_VARIABLE_InstMapArray_37_37);
    mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(Disjs_16, &SeenDuplicateInstantiationTail_28, &ConsumedVarsTail_29, &BoundVarsTail_30, HeadVar__5_5, &InstMapTail_31, STATE_VARIABLE_InstMapArray_37_37, STATE_VARIABLE_InstMapArray_8);
    mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsumedVarsTail_29, ConsumedVarsHead_25, HeadVar__3_3);
    if ((Disjs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      TailDetism_32 = (MR_Integer) 7;
      *HeadVar__4_4 = BoundVarsHead_26;
    }
    else
    {
      TailDetism_32 = (MR_Integer) 0;
      mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BoundVarsTail_30, BoundVarsHead_26, HeadVar__4_4);
    }
    *HeadVar__6_6 = program_representation_utils__merge_inst_map_4_f_0(InstMapHead_27, HeadDetism_23, InstMapTail_31, TailDetism_32);
    *HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(SeenDuplicateInstantiationHead_24, SeenDuplicateInstantiationTail_28);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_InstMap_0_5,
  MR_Word * STATE_VARIABLE_InstMap_6,
  MR_Word STATE_VARIABLE_InstMapArray_0_7,
  MR_Word * STATE_VARIABLE_InstMapArray_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    *STATE_VARIABLE_InstMapArray_8 = STATE_VARIABLE_InstMapArray_0_7;
    *STATE_VARIABLE_InstMap_6 = STATE_VARIABLE_InstMap_0_5;
  }
  else
  {
    MR_Word Conj_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Conjs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word SeenDuplicateInstantiationHead_22;
    MR_Word ConsumedVarsHead_23;
    MR_Word BoundVarsHead_24;
    MR_Word SeenDuplicateInstantiationTail_25;
    MR_Word ConsumedVarsTail_26;
    MR_Word BoundVarsTail_27;
    MR_Word STATE_VARIABLE_InstMap_32_32;
    MR_Word STATE_VARIABLE_InstMapArray_33_33;

    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Conj_15, &SeenDuplicateInstantiationHead_22, &ConsumedVarsHead_23, &BoundVarsHead_24, STATE_VARIABLE_InstMap_0_5, &STATE_VARIABLE_InstMap_32_32, STATE_VARIABLE_InstMapArray_0_7, &STATE_VARIABLE_InstMapArray_33_33);
    mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(Conjs_16, &SeenDuplicateInstantiationTail_25, &ConsumedVarsTail_26, &BoundVarsTail_27, STATE_VARIABLE_InstMap_32_32, STATE_VARIABLE_InstMap_6, STATE_VARIABLE_InstMapArray_33_33, STATE_VARIABLE_InstMapArray_8);
    mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsumedVarsTail_26, ConsumedVarsHead_23, HeadVar__3_3);
    mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BoundVarsTail_27, BoundVarsHead_24, HeadVar__4_4);
    *HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(SeenDuplicateInstantiationHead_22, SeenDuplicateInstantiationTail_25);
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(
  MR_Word Goal_9,
  MR_Word * SeenDuplicateInstantiation_10,
  MR_Word * ConsumedVars_11,
  MR_Word * BoundVars_12,
  MR_Word STATE_VARIABLE_InstMap_0_39,
  MR_Word * STATE_VARIABLE_InstMap_40,
  MR_Word STATE_VARIABLE_InstMapArray_0_41,
  MR_Word * STATE_VARIABLE_InstMapArray_42)
{
  {
    MR_Word GoalExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 0))));
    MR_Word GoalId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 2))));
    MR_Word InstMapInfo_38;
    MR_Word STATE_VARIABLE_InstMapArray_54_54;

    switch (MR_tag((MR_Word) GoalExpr_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Conjs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr_15, (MR_Integer) 0))));

          mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(Conjs_19, SeenDuplicateInstantiation_10, ConsumedVars_11, BoundVars_12, STATE_VARIABLE_InstMap_0_39, STATE_VARIABLE_InstMap_40, STATE_VARIABLE_InstMapArray_0_41, &STATE_VARIABLE_InstMapArray_54_54);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Disjs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 0))));

          mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(Disjs_20, SeenDuplicateInstantiation_10, ConsumedVars_11, BoundVars_12, STATE_VARIABLE_InstMap_0_39, STATE_VARIABLE_InstMap_40, STATE_VARIABLE_InstMapArray_0_41, &STATE_VARIABLE_InstMapArray_54_54);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 0))));
          MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_15, (MR_Integer) 2))));
          MR_Word ConsumedVars0_24;

          mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(Cases_23, SeenDuplicateInstantiation_10, &ConsumedVars0_24, BoundVars_12, STATE_VARIABLE_InstMap_0_39, STATE_VARIABLE_InstMap_40, STATE_VARIABLE_InstMapArray_0_41, &STATE_VARIABLE_InstMapArray_54_54);
          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_21)), ConsumedVars0_24, ConsumedVars_11);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cond_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1))));
              MR_Word Then_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 2))));
              MR_Word Else_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3))));

              mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(Cond_25, Then_26, Else_27, SeenDuplicateInstantiation_10, ConsumedVars_11, BoundVars_12, STATE_VARIABLE_InstMap_0_39, STATE_VARIABLE_InstMap_40, STATE_VARIABLE_InstMapArray_0_41, &STATE_VARIABLE_InstMapArray_54_54);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Subgoal_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1))));
              MR_Word Var_30;
              MR_Word _InstMap_31;

              mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Subgoal_56, SeenDuplicateInstantiation_10, ConsumedVars_11, &Var_30, STATE_VARIABLE_InstMap_0_39, &_InstMap_31, STATE_VARIABLE_InstMapArray_0_41, &STATE_VARIABLE_InstMapArray_54_54);
              *BoundVars_12 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
              *STATE_VARIABLE_InstMap_40 = STATE_VARIABLE_InstMap_0_39;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Subgoal_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 1))));

              mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Subgoal_28, SeenDuplicateInstantiation_10, ConsumedVars_11, BoundVars_12, STATE_VARIABLE_InstMap_0_39, STATE_VARIABLE_InstMap_40, STATE_VARIABLE_InstMapArray_0_41, &STATE_VARIABLE_InstMapArray_54_54);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word BoundVarsList_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 3))));
              MR_Word AtomicGoal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_15, (MR_Integer) 4))));
              MR_Word Vars_36;

              program_representation_utils__atomic_goal_get_vars_2_p_0(AtomicGoal_35, &Vars_36);
              *BoundVars_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BoundVarsList_34);
              mercury__set__difference_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_36, *BoundVars_12, ConsumedVars_11);
              program_representation_utils__inst_map_ground_vars_5_p_0(BoundVarsList_34, *ConsumedVars_11, STATE_VARIABLE_InstMap_0_39, STATE_VARIABLE_InstMap_40, SeenDuplicateInstantiation_10);
              STATE_VARIABLE_InstMapArray_54_54 = STATE_VARIABLE_InstMapArray_0_41;
            }
            break;
        }
        break;
    }
    {
      InstMapInfo_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstMapInfo_38, 0) = ((MR_Box) (STATE_VARIABLE_InstMap_0_39));
      MR_hl_field(MR_mktag(0), InstMapInfo_38, 1) = ((MR_Box) (*STATE_VARIABLE_InstMap_40));
      MR_hl_field(MR_mktag(0), InstMapInfo_38, 2) = ((MR_Box) (*ConsumedVars_11));
      MR_hl_field(MR_mktag(0), InstMapInfo_38, 3) = ((MR_Box) (*BoundVars_12));
    }
    mdbcomp__goal_path__update_goal_attribute_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0), GoalId_17, ((MR_Box) (InstMapInfo_38)), STATE_VARIABLE_InstMapArray_54_54, STATE_VARIABLE_InstMapArray_42);
  }
}

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_type_tables(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_annotate__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_fb.automatic_parallelism.autopar_annotate.
