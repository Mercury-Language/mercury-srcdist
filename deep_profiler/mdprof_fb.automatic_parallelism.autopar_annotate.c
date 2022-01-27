/*
** Automatically generated from `autopar_annotate.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module mdprof_fb.automatic_parallelism.autopar_annotate. */
/* :- implementation. */

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_annotate.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
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
#include "mdbcomp.trace_counts.mih"
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
#include "integer.mih"
#include "io.mih"
#include "lazy.mih"
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




#line 199 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cond_11,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Then_12,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Else_13,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_15,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_16,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__InstMap_18,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_35,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_36);

#line 167 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(
#line 167 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 167 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 167 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);

#line 130 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(
#line 130 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 130 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 130 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);

#line 111 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(
#line 111 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 111 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6,
#line 111 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 199 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cond_11,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Then_12,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Else_13,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_15,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_16,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__InstMap_18,
#line 199 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_35,
#line 199 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_36)
#line 199 "autopar_annotate.m"
{
#line 207 "autopar_annotate.m"
  {
#line 207 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationCond_20;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCond_21;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterCond_23;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationThen_24;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsThen_25;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsThen_26;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterThen_27;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationElse_28;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsElse_29;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsElse_30;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterElse_31;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCondThen_32;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ThenDetism_33;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ElseDetism_34;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37;
#line 207 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_38_38;
#line 208 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___BoundVarsCond_22;
#line 231 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_40_40;
#line 231 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_41_41;
#line 232 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_42_42;
#line 232 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_43_43;

#line 208 "autopar_annotate.m"
    {
#line 208 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cond_11, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationCond_20, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCond_21, &mdprof_fb__automatic_parallelism__autopar_annotate___BoundVarsCond_22, mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterCond_23, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_35, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37);
    }
#line 211 "autopar_annotate.m"
    {
#line 211 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationThen_24, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsThen_25, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsThen_26, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterCond_23, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterThen_27, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_38_38);
    }
#line 214 "autopar_annotate.m"
    {
#line 214 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationElse_28, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsElse_29, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsElse_30, mdprof_fb__automatic_parallelism__autopar_annotate__InstMap0_17, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterElse_31, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_38_38, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_36);
    }
#line 218 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__succeeded = (mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationCond_20 == (MR_Integer) 1);
#line 218 "autopar_annotate.m"
    if (mdprof_fb__automatic_parallelism__autopar_annotate__succeeded)
#line 218 "autopar_annotate.m"
      {
#line 219 "autopar_annotate.m"
        mdprof_fb__automatic_parallelism__autopar_annotate__succeeded = (mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationThen_24 == (MR_Integer) 1);
#line 218 "autopar_annotate.m"
        if (mdprof_fb__automatic_parallelism__autopar_annotate__succeeded)
#line 220 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__succeeded = (mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationElse_28 == (MR_Integer) 1);
#line 218 "autopar_annotate.m"
      }
#line 223 "autopar_annotate.m"
    if (mdprof_fb__automatic_parallelism__autopar_annotate__succeeded)
#line 222 "autopar_annotate.m"
      *mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14 = (MR_Integer) 1;
#line 223 "autopar_annotate.m"
    else
#line 224 "autopar_annotate.m"
      *mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_14 = (MR_Integer) 0;
#line 302 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
    mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 226 "autopar_annotate.m"
    {
#line 226 "autopar_annotate.m"
      mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCond_21, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsThen_25, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCondThen_32);
    }
#line 227 "autopar_annotate.m"
    {
#line 227 "autopar_annotate.m"
      mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsCondThen_32, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsElse_29, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_15);
    }
#line 230 "autopar_annotate.m"
    {
#line 230 "autopar_annotate.m"
      mercury__set__intersect_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsThen_26, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsElse_30, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_16);
    }
#line 231 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, (MR_Integer) 0)));
#line 231 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__ThenDetism_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, (MR_Integer) 1)));
#line 231 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Then_12, (MR_Integer) 2)));
#line 232 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, (MR_Integer) 0)));
#line 232 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__ElseDetism_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, (MR_Integer) 1)));
#line 232 "autopar_annotate.m"
    mdprof_fb__automatic_parallelism__autopar_annotate__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Else_13, (MR_Integer) 2)));
#line 233 "autopar_annotate.m"
    {
#line 233 "autopar_annotate.m"
      *mdprof_fb__automatic_parallelism__autopar_annotate__InstMap_18 = program_representation_utils__merge_inst_map_4_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterThen_27, mdprof_fb__automatic_parallelism__autopar_annotate__ThenDetism_33, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapAfterElse_31, mdprof_fb__automatic_parallelism__autopar_annotate__ElseDetism_34);
    }
#line 207 "autopar_annotate.m"
  }
#line 199 "autopar_annotate.m"
}

#line 167 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(
#line 167 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 167 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 167 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 167 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8)
#line 167 "autopar_annotate.m"
{
#line 173 "autopar_annotate.m"
  {
#line 173 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;

#line 173 "autopar_annotate.m"
    if ((mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "autopar_annotate.m"
      {
#line 173 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44;

#line 173 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = (MR_Integer) 1;
#line 376 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 174 "autopar_annotate.m"
        {
#line 174 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44);
        }
#line 174 "autopar_annotate.m"
        {
#line 174 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_44_44);
        }
#line 174 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7;
#line 174 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5;
#line 173 "autopar_annotate.m"
      }
#line 173 "autopar_annotate.m"
    else
#line 176 "autopar_annotate.m"
      {
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Case_15, (MR_Integer) 2)));
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, (MR_Integer) 1)));
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_27;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_28;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_30;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_31;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_32;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_33;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_34;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35;
#line 176 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_40_40;
#line 177 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Case_15, (MR_Integer) 0)));
#line 177 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Case_15, (MR_Integer) 1)));
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, (MR_Integer) 0)));
#line 178 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, (MR_Integer) 2)));

#line 179 "autopar_annotate.m"
        {
#line 179 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Goal_25, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_27, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_28, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_30, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_40_40);
        }
#line 181 "autopar_annotate.m"
        {
#line 181 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cases_16, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_31, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_32, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_33, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_34, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_40_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);
        }
#line 447 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 183 "autopar_annotate.m"
        {
#line 183 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_32, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_28, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3);
        }
#line 190 "autopar_annotate.m"
        if ((mdprof_fb__automatic_parallelism__autopar_annotate__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "autopar_annotate.m"
          {
#line 188 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35 = (MR_Integer) 7;
#line 189 "autopar_annotate.m"
            *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29;
#line 187 "autopar_annotate.m"
          }
#line 190 "autopar_annotate.m"
        else
#line 191 "autopar_annotate.m"
          {
#line 192 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35 = (MR_Integer) 0;
#line 193 "autopar_annotate.m"
            {
#line 193 "autopar_annotate.m"
              mercury__set__intersect_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_45_45, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_33, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_29, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4);
            }
#line 191 "autopar_annotate.m"
          }
#line 195 "autopar_annotate.m"
        {
#line 195 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = program_representation_utils__merge_inst_map_4_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_30, mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_26, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_34, mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_35);
        }
#line 196 "autopar_annotate.m"
        {
#line 196 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_27, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_31);
        }
#line 176 "autopar_annotate.m"
      }
#line 173 "autopar_annotate.m"
  }
#line 167 "autopar_annotate.m"
}

#line 130 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(
#line 130 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 130 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6,
#line 130 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 130 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8)
#line 130 "autopar_annotate.m"
{
#line 136 "autopar_annotate.m"
  {
#line 136 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;

#line 136 "autopar_annotate.m"
    if ((mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "autopar_annotate.m"
      {
#line 136 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41;

#line 136 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = (MR_Integer) 1;
#line 529 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 137 "autopar_annotate.m"
        {
#line 137 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41);
        }
#line 137 "autopar_annotate.m"
        {
#line 137 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_41_41);
        }
#line 137 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7;
#line 137 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5;
#line 136 "autopar_annotate.m"
      }
#line 136 "autopar_annotate.m"
    else
#line 139 "autopar_annotate.m"
      {
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, (MR_Integer) 1)));
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_24;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_25;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_27;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_28;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_29;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_30;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_31;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32;
#line 139 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37;
#line 140 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, (MR_Integer) 0)));
#line 140 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, (MR_Integer) 2)));

#line 141 "autopar_annotate.m"
        {
#line 141 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Disj_15, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_24, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_25, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_27, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37);
        }
#line 143 "autopar_annotate.m"
        {
#line 143 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_16, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_28, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_29, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_30, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__5_5, &mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_31, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_37_37, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);
        }
#line 594 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 146 "autopar_annotate.m"
        {
#line 146 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_29, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_25, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3);
        }
#line 158 "autopar_annotate.m"
        if ((mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "autopar_annotate.m"
          {
#line 156 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32 = (MR_Integer) 7;
#line 157 "autopar_annotate.m"
            *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26;
#line 155 "autopar_annotate.m"
          }
#line 158 "autopar_annotate.m"
        else
#line 159 "autopar_annotate.m"
          {
#line 160 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32 = (MR_Integer) 0;
#line 161 "autopar_annotate.m"
            {
#line 161 "autopar_annotate.m"
              mercury__set__intersect_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_42_42, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_30, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_26, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4);
            }
#line 159 "autopar_annotate.m"
          }
#line 163 "autopar_annotate.m"
        {
#line 163 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__6_6 = program_representation_utils__merge_inst_map_4_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__InstMapHead_27, mdprof_fb__automatic_parallelism__autopar_annotate__HeadDetism_23, mdprof_fb__automatic_parallelism__autopar_annotate__InstMapTail_31, mdprof_fb__automatic_parallelism__autopar_annotate__TailDetism_32);
        }
#line 164 "autopar_annotate.m"
        {
#line 164 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_24, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_28);
        }
#line 139 "autopar_annotate.m"
      }
#line 136 "autopar_annotate.m"
  }
#line 130 "autopar_annotate.m"
}

#line 111 "autopar_annotate.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(
#line 111 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4,
#line 111 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6,
#line 111 "autopar_annotate.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7,
#line 111 "autopar_annotate.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8)
#line 111 "autopar_annotate.m"
{
#line 117 "autopar_annotate.m"
  {
#line 117 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;

#line 117 "autopar_annotate.m"
    if ((mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "autopar_annotate.m"
      {
#line 117 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36;

#line 117 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = (MR_Integer) 1;
#line 676 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 118 "autopar_annotate.m"
        {
#line 118 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36);
        }
#line 118 "autopar_annotate.m"
        {
#line 118 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4 = mercury__set__init_0_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_36_36);
        }
#line 118 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7;
#line 118 "autopar_annotate.m"
        *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5;
#line 117 "autopar_annotate.m"
      }
#line 117 "autopar_annotate.m"
    else
#line 120 "autopar_annotate.m"
      {
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Conj_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_22;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_23;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_24;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_25;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_26;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_27;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_32_32;
#line 120 "autopar_annotate.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_33_33;

#line 121 "autopar_annotate.m"
        {
#line 121 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Conj_15, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_22, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_23, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_24, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_5, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_32_32, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_7, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_33_33);
        }
#line 123 "autopar_annotate.m"
        {
#line 123 "autopar_annotate.m"
          mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_16, &mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_25, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_26, &mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_27, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_32_32, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_6, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_33_33, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_8);
        }
#line 731 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
        mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 125 "autopar_annotate.m"
        {
#line 125 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsTail_26, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVarsHead_23, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__3_3);
        }
#line 126 "autopar_annotate.m"
        {
#line 126 "autopar_annotate.m"
          mercury__set__union_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_37_37, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsTail_27, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsHead_24, mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__4_4);
        }
#line 127 "autopar_annotate.m"
        {
#line 127 "autopar_annotate.m"
          *mdprof_fb__automatic_parallelism__autopar_annotate__HeadVar__2_2 = program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationHead_22, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiationTail_25);
        }
#line 120 "autopar_annotate.m"
      }
#line 117 "autopar_annotate.m"
  }
#line 111 "autopar_annotate.m"
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
#line 56 "autopar_annotate.m"
  {
#line 56 "autopar_annotate.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_annotate__succeeded;
#line 56 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_9, (MR_Integer) 0)));
#line 56 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__GoalId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_9, (MR_Integer) 2)));
#line 56 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38;
#line 56 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54;
#line 57 "autopar_annotate.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__Goal_9, (MR_Integer) 1)));

#line 63 "autopar_annotate.m"
#line 63 "autopar_annotate.m"
    switch (MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15)) {
#line 63 "autopar_annotate.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 63 "autopar_annotate.m"
      case (MR_Integer) 0:
#line 60 "autopar_annotate.m"
        {
#line 60 "autopar_annotate.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)));

#line 61 "autopar_annotate.m"
          {
#line 61 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Conjs_19, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
          }
#line 60 "autopar_annotate.m"
        }
#line 63 "autopar_annotate.m"
        break;
#line 63 "autopar_annotate.m"
      case (MR_Integer) 1:
#line 64 "autopar_annotate.m"
        {
#line 64 "autopar_annotate.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)));

#line 65 "autopar_annotate.m"
          {
#line 65 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Disjs_20, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
          }
#line 64 "autopar_annotate.m"
        }
#line 63 "autopar_annotate.m"
        break;
#line 63 "autopar_annotate.m"
      case (MR_Integer) 2:
#line 68 "autopar_annotate.m"
        {
#line 68 "autopar_annotate.m"
          MR_Integer mdprof_fb__automatic_parallelism__autopar_annotate__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)));
#line 68 "autopar_annotate.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));
#line 68 "autopar_annotate.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars0_24;
#line 68 "autopar_annotate.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));

#line 69 "autopar_annotate.m"
          {
#line 69 "autopar_annotate.m"
            mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cases_23, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, &mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars0_24, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
          }
#line 71 "autopar_annotate.m"
          {
#line 71 "autopar_annotate.m"
            mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_annotate__Var_21)), mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars0_24, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11);
          }
#line 68 "autopar_annotate.m"
        }
#line 63 "autopar_annotate.m"
        break;
#line 63 "autopar_annotate.m"
      case (MR_Integer) 3:
#line 63 "autopar_annotate.m"
#line 63 "autopar_annotate.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 0)))) {
#line 63 "autopar_annotate.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 63 "autopar_annotate.m"
          case (MR_Integer) 0:
#line 73 "autopar_annotate.m"
            {
#line 73 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 73 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));
#line 73 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 3)));

#line 74 "autopar_annotate.m"
              {
#line 74 "autopar_annotate.m"
                mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Cond_25, mdprof_fb__automatic_parallelism__autopar_annotate__Then_26, mdprof_fb__automatic_parallelism__autopar_annotate__Else_27, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
              }
#line 73 "autopar_annotate.m"
            }
#line 63 "autopar_annotate.m"
            break;
#line 63 "autopar_annotate.m"
          case (MR_Integer) 1:
#line 85 "autopar_annotate.m"
            {
#line 85 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 87 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__V_30_30;
#line 87 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___InstMap_31;

#line 87 "autopar_annotate.m"
              {
#line 87 "autopar_annotate.m"
                mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_56, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, &mdprof_fb__automatic_parallelism__autopar_annotate__V_30_30, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, &mdprof_fb__automatic_parallelism__autopar_annotate___InstMap_31, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
              }
#line 89 "autopar_annotate.m"
              {
#line 89 "autopar_annotate.m"
                *mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
              }
#line 85 "autopar_annotate.m"
              *mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39;
#line 85 "autopar_annotate.m"
            }
#line 63 "autopar_annotate.m"
            break;
#line 63 "autopar_annotate.m"
          case (MR_Integer) 2:
#line 81 "autopar_annotate.m"
            {
#line 81 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 81 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate___MaybeCut_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));

#line 82 "autopar_annotate.m"
              {
#line 82 "autopar_annotate.m"
                mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__Subgoal_28, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41, &mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54);
              }
#line 81 "autopar_annotate.m"
            }
#line 63 "autopar_annotate.m"
            break;
#line 63 "autopar_annotate.m"
          case (MR_Integer) 3:
#line 91 "autopar_annotate.m"
            {
#line 91 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59;
#line 91 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsList_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 3)));
#line 91 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__AtomicGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 4)));
#line 91 "autopar_annotate.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_annotate__Vars_36;
#line 91 "autopar_annotate.m"
              MR_String mdprof_fb__automatic_parallelism__autopar_annotate___File_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 1)));
#line 91 "autopar_annotate.m"
              MR_Integer mdprof_fb__automatic_parallelism__autopar_annotate___Line_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_annotate__GoalExpr_15, (MR_Integer) 2)));

#line 100 "autopar_annotate.m"
              {
#line 100 "autopar_annotate.m"
                program_representation_utils__atomic_goal_get_vars_2_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__AtomicGoal_35, &mdprof_fb__automatic_parallelism__autopar_annotate__Vars_36);
              }
#line 949 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
              mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 101 "autopar_annotate.m"
              {
#line 101 "autopar_annotate.m"
                *mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12 = mercury__set__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59, mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsList_34);
              }
#line 102 "autopar_annotate.m"
              {
#line 102 "autopar_annotate.m"
                mercury__set__difference_3_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__TypeCtorInfo_59_59, mdprof_fb__automatic_parallelism__autopar_annotate__Vars_36, *mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12, mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11);
              }
#line 103 "autopar_annotate.m"
              {
#line 103 "autopar_annotate.m"
                program_representation_utils__inst_map_ground_vars_5_p_0(mdprof_fb__automatic_parallelism__autopar_annotate__BoundVarsList_34, *mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40, mdprof_fb__automatic_parallelism__autopar_annotate__SeenDuplicateInstantiation_10);
              }
#line 91 "autopar_annotate.m"
              mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54 = mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_0_41;
#line 91 "autopar_annotate.m"
            }
#line 63 "autopar_annotate.m"
            break;
#line 63 "autopar_annotate.m"
        }
#line 63 "autopar_annotate.m"
        break;
#line 63 "autopar_annotate.m"
    }
#line 107 "autopar_annotate.m"
    {
#line 107 "autopar_annotate.m"
      mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 107 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_0_39));
#line 107 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 1) = ((MR_Box) (*mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMap_40));
#line 107 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 2) = ((MR_Box) (*mdprof_fb__automatic_parallelism__autopar_annotate__ConsumedVars_11));
#line 107 "autopar_annotate.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38, 3) = ((MR_Box) (*mdprof_fb__automatic_parallelism__autopar_annotate__BoundVars_12));
#line 107 "autopar_annotate.m"
    }
#line 109 "autopar_annotate.m"
    {
#line 109 "autopar_annotate.m"
      mdbcomp__goal_path__update_goal_attribute_4_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0, mdprof_fb__automatic_parallelism__autopar_annotate__GoalId_17, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_annotate__InstMapInfo_38)), mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_54_54, mdprof_fb__automatic_parallelism__autopar_annotate__STATE_VARIABLE_InstMapArray_42);
#line 109 "autopar_annotate.m"
      return;
    }
#line 56 "autopar_annotate.m"
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
