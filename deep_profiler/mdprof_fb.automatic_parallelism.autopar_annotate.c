/*
** Automatically generated from `autopar_annotate.m'
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


/* :- module mdprof_fb.automatic_parallelism.autopar_annotate. */
/* :- implementation. */

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_annotate.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "coverage.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "exclude.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "random.mih"
#include "report.mih"
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"




#line 201 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cond_11,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Then_12,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Else_13,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_15,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_16,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__InstMap_18,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_35,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_36);

#line 169 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(
#line 169 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 169 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 169 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);

#line 132 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(
#line 132 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 132 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 132 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);

#line 113 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(
#line 113 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 113 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6,
#line 113 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);







#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 201 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cond_11,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Then_12,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Else_13,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_15,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_16,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__InstMap_18,
#line 201 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_35,
#line 201 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_36)
#line 201 "autopar_annotate.m"
{
#line 209 "autopar_annotate.m"
  {
#line 209 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationCond_20;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCond_21;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterCond_23;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationThen_24;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsThen_25;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsThen_26;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterThen_27;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationElse_28;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsElse_29;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsElse_30;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterElse_31;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCondThen_32;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ThenDetism_33;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ElseDetism_34;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37;
#line 209 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_38_38;
#line 210 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___BoundVarsCond_22;
#line 233 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_40_40;
#line 233 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_41_41;
#line 234 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_42_42;
#line 234 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_43_43;

#line 210 "autopar_annotate.m"
    {
#line 210 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cond_11, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationCond_20, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCond_21, &mdprof_fb__automatic_parallelism__autopar_annotate___BoundVarsCond_22, mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterCond_23, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_35, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37);
    }
#line 213 "autopar_annotate.m"
    {
#line 213 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationThen_24, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsThen_25, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsThen_26, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterCond_23, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterThen_27, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_38_38);
    }
#line 216 "autopar_annotate.m"
    {
#line 216 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationElse_28, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsElse_29, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsElse_30, mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterElse_31, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_38_38, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_36);
    }
#line 220 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__succeeded = (mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationCond_20 == (MR_Integer) 1);
#line 220 "autopar_annotate.m"
    if (mdprof_fb__automatic_parallelism__autopar_annotate__succeeded)
#line 220 "autopar_annotate.m"
      {
#line 221 "autopar_annotate.m"
        mdprof_fb__automatic_parallelism__autopar_annotate__succeeded = (mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationThen_24 == (MR_Integer) 1);
#line 220 "autopar_annotate.m"
        if (mdprof_fb__automatic_parallelism__autopar_annotate__succeeded)
#line 222 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__succeeded = (mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationElse_28 == (MR_Integer) 1);
#line 220 "autopar_annotate.m"
      }
#line 225 "autopar_annotate.m"
    if (mdprof_fb__automatic_parallelism__autopar_annotate__succeeded)
#line 224 "autopar_annotate.m"
      *mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14 = (MR_Integer) 1;
#line 225 "autopar_annotate.m"
    else
#line 226 "autopar_annotate.m"
      *mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14 = (MR_Integer) 0;
#line 308 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
    mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 228 "autopar_annotate.m"
    {
#line 228 "autopar_annotate.m"
      mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCond_21, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsThen_25, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCondThen_32);
    }
#line 229 "autopar_annotate.m"
    {
#line 229 "autopar_annotate.m"
      mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCondThen_32, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsElse_29, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_15);
    }
#line 232 "autopar_annotate.m"
    {
#line 232 "autopar_annotate.m"
      mercury__set__intersect_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsThen_26, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsElse_30, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_16);
    }
#line 233 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, (MR_Integer) 0)));
#line 233 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__ThenDetism_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, (MR_Integer) 1)));
#line 233 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, (MR_Integer) 2)));
#line 234 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, (MR_Integer) 0)));
#line 234 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__ElseDetism_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, (MR_Integer) 1)));
#line 234 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, (MR_Integer) 2)));
#line 235 "autopar_annotate.m"
    {
#line 235 "autopar_annotate.m"
      *mdprof_fb__automatic_parallelism__autopar_annotate__InstMap_18 = program_representation_utils__merge_inst_map_4_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterThen_27, mdprof_fb__automatic_parallelism__autopar_annotate__ThenDetism_33, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterElse_31, mdprof_fb__automatic_parallelism__autopar_annotate__ElseDetism_34);
    }
#line 209 "autopar_annotate.m"
  }
#line 201 "autopar_annotate.m"
}

#line 169 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(
#line 169 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 169 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 169 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 169 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8)
#line 169 "autopar_annotate.m"
{
#line 175 "autopar_annotate.m"
  {
#line 175 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;

#line 175 "autopar_annotate.m"
    if ((mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "autopar_annotate.m"
      {
#line 175 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44;

#line 175 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = (MR_Integer) 1;
#line 382 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 175 "autopar_annotate.m"
        {
#line 175 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44);
        }
#line 175 "autopar_annotate.m"
        {
#line 175 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44);
        }
#line 175 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7;
#line 175 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5;
#line 175 "autopar_annotate.m"
      }
#line 175 "autopar_annotate.m"
    else
#line 178 "autopar_annotate.m"
      {
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Case_15, (MR_Integer) 2)));
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, (MR_Integer) 1)));
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_27;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_28;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_30;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_31;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_32;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_33;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_34;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35;
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_40_40;
#line 179 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Case_15, (MR_Integer) 0)));
#line 179 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Case_15, (MR_Integer) 1)));
#line 180 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, (MR_Integer) 0)));
#line 180 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, (MR_Integer) 2)));

#line 181 "autopar_annotate.m"
        {
#line 181 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_27, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_28, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_30, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_40_40);
        }
#line 183 "autopar_annotate.m"
        {
#line 183 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cases_16, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_31, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_32, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_33, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_34, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_40_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);
        }
#line 453 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 185 "autopar_annotate.m"
        {
#line 185 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_32, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_28, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3);
        }
#line 192 "autopar_annotate.m"
        if ((mdprof_fb__automatic_parallelism__autopar_annotate__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "autopar_annotate.m"
          {
#line 190 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35 = (MR_Integer) 7;
#line 191 "autopar_annotate.m"
            *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29;
#line 189 "autopar_annotate.m"
          }
#line 192 "autopar_annotate.m"
        else
#line 193 "autopar_annotate.m"
          {
#line 194 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35 = (MR_Integer) 0;
#line 195 "autopar_annotate.m"
            {
#line 195 "autopar_annotate.m"
              mercury__set__intersect_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_33, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4);
            }
#line 193 "autopar_annotate.m"
          }
#line 197 "autopar_annotate.m"
        {
#line 197 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = program_representation_utils__merge_inst_map_4_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_30, mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_26, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_34, mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35);
        }
#line 198 "autopar_annotate.m"
        {
#line 198 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_27, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_31);
        }
#line 178 "autopar_annotate.m"
      }
#line 175 "autopar_annotate.m"
  }
#line 169 "autopar_annotate.m"
}

#line 132 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(
#line 132 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 132 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 132 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 132 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8)
#line 132 "autopar_annotate.m"
{
#line 138 "autopar_annotate.m"
  {
#line 138 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;

#line 138 "autopar_annotate.m"
    if ((mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "autopar_annotate.m"
      {
#line 138 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41;

#line 138 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = (MR_Integer) 1;
#line 535 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 138 "autopar_annotate.m"
        {
#line 138 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41);
        }
#line 138 "autopar_annotate.m"
        {
#line 138 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41);
        }
#line 138 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7;
#line 138 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5;
#line 138 "autopar_annotate.m"
      }
#line 138 "autopar_annotate.m"
    else
#line 141 "autopar_annotate.m"
      {
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, (MR_Integer) 1)));
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_24;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_25;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_27;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_28;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_29;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_30;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_31;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32;
#line 141 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37;
#line 142 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, (MR_Integer) 0)));
#line 142 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, (MR_Integer) 2)));

#line 143 "autopar_annotate.m"
        {
#line 143 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_24, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_25, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_27, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37);
        }
#line 145 "autopar_annotate.m"
        {
#line 145 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_16, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_28, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_29, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_30, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_31, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);
        }
#line 600 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 148 "autopar_annotate.m"
        {
#line 148 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_29, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_25, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3);
        }
#line 160 "autopar_annotate.m"
        if ((mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "autopar_annotate.m"
          {
#line 158 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32 = (MR_Integer) 7;
#line 159 "autopar_annotate.m"
            *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26;
#line 157 "autopar_annotate.m"
          }
#line 160 "autopar_annotate.m"
        else
#line 161 "autopar_annotate.m"
          {
#line 162 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32 = (MR_Integer) 0;
#line 163 "autopar_annotate.m"
            {
#line 163 "autopar_annotate.m"
              mercury__set__intersect_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_30, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4);
            }
#line 161 "autopar_annotate.m"
          }
#line 165 "autopar_annotate.m"
        {
#line 165 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = program_representation_utils__merge_inst_map_4_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_27, mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_23, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_31, mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32);
        }
#line 166 "autopar_annotate.m"
        {
#line 166 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_24, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_28);
        }
#line 141 "autopar_annotate.m"
      }
#line 138 "autopar_annotate.m"
  }
#line 132 "autopar_annotate.m"
}

#line 113 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(
#line 113 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 113 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6,
#line 113 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 113 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8)
#line 113 "autopar_annotate.m"
{
#line 119 "autopar_annotate.m"
  {
#line 119 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;

#line 119 "autopar_annotate.m"
    if ((mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "autopar_annotate.m"
      {
#line 119 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36;

#line 119 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = (MR_Integer) 1;
#line 682 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 119 "autopar_annotate.m"
        {
#line 119 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36);
        }
#line 119 "autopar_annotate.m"
        {
#line 119 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36);
        }
#line 119 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7;
#line 119 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5;
#line 119 "autopar_annotate.m"
      }
#line 119 "autopar_annotate.m"
    else
#line 122 "autopar_annotate.m"
      {
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Conj_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 1)));
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_22;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_23;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_24;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_25;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_26;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_27;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_32_32;
#line 122 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_33_33;

#line 123 "autopar_annotate.m"
        {
#line 123 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Conj_15, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_22, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_23, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_24, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_32_32, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_33_33);
        }
#line 125 "autopar_annotate.m"
        {
#line 125 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_16, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_25, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_26, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_27, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_32_32, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_33_33, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);
        }
#line 737 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 127 "autopar_annotate.m"
        {
#line 127 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_26, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_23, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3);
        }
#line 128 "autopar_annotate.m"
        {
#line 128 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_27, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_24, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4);
        }
#line 129 "autopar_annotate.m"
        {
#line 129 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_22, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_25);
        }
#line 122 "autopar_annotate.m"
      }
#line 119 "autopar_annotate.m"
  }
#line 113 "autopar_annotate.m"
}

#line 36 "autopar_annotate.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(
#line 36 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Goal_9,
#line 36 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10,
#line 36 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11,
#line 36 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12,
#line 36 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39,
#line 36 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40,
#line 36 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41,
#line 36 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_42)
#line 36 "autopar_annotate.m"
{
#line 58 "autopar_annotate.m"
  {
#line 58 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;
#line 58 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_9, (MR_Integer) 0)));
#line 58 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__GoalId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_9, (MR_Integer) 2)));
#line 58 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38;
#line 58 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54;
#line 59 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_9, (MR_Integer) 1)));

#line 65 "autopar_annotate.m"
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15)) == (MR_mktag((MR_Integer) 0))))
#line 62 "autopar_annotate.m"
      {
#line 62 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)));

#line 63 "autopar_annotate.m"
        {
#line 63 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_19, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
        }
#line 62 "autopar_annotate.m"
      }
#line 65 "autopar_annotate.m"
    else
#line 65 "autopar_annotate.m"
      if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15)) == (MR_mktag((MR_Integer) 1))))
#line 66 "autopar_annotate.m"
        {
#line 66 "autopar_annotate.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)));

#line 67 "autopar_annotate.m"
          {
#line 67 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_20, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
          }
#line 66 "autopar_annotate.m"
        }
#line 65 "autopar_annotate.m"
      else
#line 65 "autopar_annotate.m"
        if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15)) == (MR_mktag((MR_Integer) 2))))
#line 70 "autopar_annotate.m"
          {
#line 70 "autopar_annotate.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_annotate__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)));
#line 70 "autopar_annotate.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));
#line 70 "autopar_annotate.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars0_24;
#line 70 "autopar_annotate.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));

#line 71 "autopar_annotate.m"
            {
#line 71 "autopar_annotate.m"
              mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cases_23, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars0_24, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
            }
#line 73 "autopar_annotate.m"
            {
#line 73 "autopar_annotate.m"
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_annotate__Var_21)), mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars0_24, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11);
            }
#line 70 "autopar_annotate.m"
          }
#line 65 "autopar_annotate.m"
        else
#line 65 "autopar_annotate.m"
          if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 93 "autopar_annotate.m"
            {
#line 93 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59;
#line 93 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsList_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 3)));
#line 93 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__AtomicGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 4)));
#line 93 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Vars_36;
#line 93 "autopar_annotate.m"
              MR_String mdprof_fb__automatic_parallelism__autopar_annotate___File_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 93 "autopar_annotate.m"
              MR_Integer mdprof_fb__automatic_parallelism__autopar_annotate___Line_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));

#line 102 "autopar_annotate.m"
              {
#line 102 "autopar_annotate.m"
                program_representation_utils__atomic_goal_get_vars_2_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__AtomicGoal_35, &mdprof_fb__automatic_parallelism__autopar_annotate__Vars_36);
              }
#line 878 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
              mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 103 "autopar_annotate.m"
              {
#line 103 "autopar_annotate.m"
                *mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12 = mercury__set__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsList_34);
              }
#line 104 "autopar_annotate.m"
              {
#line 104 "autopar_annotate.m"
                mercury__set__difference_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59, mdprof_fb__automatic_parallelism__autopar_annotate__Vars_36, *mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11);
              }
#line 105 "autopar_annotate.m"
              {
#line 105 "autopar_annotate.m"
                program_representation_utils__inst_map_ground_vars_5_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsList_34, *mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10);
              }
#line 105 "autopar_annotate.m"
              mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41;
#line 93 "autopar_annotate.m"
            }
#line 65 "autopar_annotate.m"
          else
#line 65 "autopar_annotate.m"
            if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 75 "autopar_annotate.m"
              {
#line 75 "autopar_annotate.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 75 "autopar_annotate.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));
#line 75 "autopar_annotate.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 3)));

#line 76 "autopar_annotate.m"
                {
#line 76 "autopar_annotate.m"
                  mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cond_25, mdprof_fb__automatic_parallelism__autopar_annotate__Then_26, mdprof_fb__automatic_parallelism__autopar_annotate__Else_27, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
                }
#line 75 "autopar_annotate.m"
              }
#line 65 "autopar_annotate.m"
            else
#line 65 "autopar_annotate.m"
              if (((((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 87 "autopar_annotate.m"
                {
#line 87 "autopar_annotate.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 89 "autopar_annotate.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_30_30;
#line 89 "autopar_annotate.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___InstMap_31;

#line 89 "autopar_annotate.m"
                  {
#line 89 "autopar_annotate.m"
                    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_56, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, &mdprof_fb__automatic_parallelism__autopar_annotate__V_30_30, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, &mdprof_fb__automatic_parallelism__autopar_annotate___InstMap_31, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
                  }
#line 91 "autopar_annotate.m"
                  {
#line 91 "autopar_annotate.m"
                    *mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
                  }
#line 91 "autopar_annotate.m"
                  *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39;
#line 87 "autopar_annotate.m"
                }
#line 65 "autopar_annotate.m"
              else
#line 83 "autopar_annotate.m"
                {
#line 83 "autopar_annotate.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 83 "autopar_annotate.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___MaybeCut_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));

#line 84 "autopar_annotate.m"
                  {
#line 84 "autopar_annotate.m"
                    mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_28, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
                  }
#line 83 "autopar_annotate.m"
                }
#line 109 "autopar_annotate.m"
    {
#line 109 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 109 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39));
#line 109 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 1) = ((MR_Box) (*mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40));
#line 109 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 2) = ((MR_Box) (*mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11));
#line 109 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 3) = ((MR_Box) (*mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12));
#line 109 "autopar_annotate.m"
    }
#line 111 "autopar_annotate.m"
    {
#line 111 "autopar_annotate.m"
      mdbcomp__goal_path__update_goal_attribute_4_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0, mdprof_fb__automatic_parallelism__autopar_annotate__GoalId_17, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38)), mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_42);
#line 111 "autopar_annotate.m"
      return;
    }
#line 58 "autopar_annotate.m"
  }
#line 36 "autopar_annotate.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_fb.automatic_parallelism.autopar_annotate. */
