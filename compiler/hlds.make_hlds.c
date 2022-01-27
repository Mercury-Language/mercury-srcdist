/*
** Automatically generated from `make_hlds.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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


/* :- module hlds.make_hlds. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__init
ENDINIT
*/

#include "hlds.make_hlds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 138 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 140 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 143 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 146 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 148 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 150 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 174 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "make_hlds_qual_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 195 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 198 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 200 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 202 "hlds.make_hlds.c"
{
#line 204 "hlds.make_hlds.c"
  {
#line 206 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 209 "hlds.make_hlds.c"
    {
#line 211 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____make_hlds_qual_info_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 214 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 216 "hlds.make_hlds.c"
  }
#line 218 "hlds.make_hlds.c"
}

#line 221 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 224 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 226 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 228 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 230 "hlds.make_hlds.c"
{
#line 232 "hlds.make_hlds.c"
  {
#line 234 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 237 "hlds.make_hlds.c"
    {
#line 239 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____make_hlds_qual_info_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 242 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 244 "hlds.make_hlds.c"
  }
#line 246 "hlds.make_hlds.c"
}

#line 141 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0(
#line 141 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 141 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 141 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 141 "make_hlds.m"
{
#line 141 "make_hlds.m"
  {
#line 141 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 141 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 141 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 141 "make_hlds.m"
    {
#line 141 "make_hlds.m"
      hlds__make_hlds__qual_info____Compare____qual_info_0_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
#line 141 "make_hlds.m"
      return;
    }
#line 141 "make_hlds.m"
  }
#line 141 "make_hlds.m"
}

#line 141 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0(
#line 141 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 141 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 141 "make_hlds.m"
{
#line 141 "make_hlds.m"
  {
#line 141 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 141 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 141 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 141 "make_hlds.m"
    {
#line 141 "make_hlds.m"
      return hlds__make_hlds__succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(hlds__make_hlds__Cast_HeadVar1_3, hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 141 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 141 "make_hlds.m"
  }
#line 141 "make_hlds.m"
}

#line 108 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__set_module_recomp_info_3_p_0(
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__QualInfo_4,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6,
#line 108 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7)
#line 108 "make_hlds.m"
{
#line 175 "make_hlds.m"
  {
#line 175 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 175 "make_hlds.m"
    {
#line 175 "make_hlds.m"
      hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(hlds__make_hlds__QualInfo_4, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7);
#line 175 "make_hlds.m"
      return;
    }
#line 175 "make_hlds.m"
  }
#line 108 "make_hlds.m"
}

#line 98 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__produce_instance_method_clauses_16_p_0(
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__InstanceProcDefn_17,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__PredOrFunc_18,
#line 98 "make_hlds.m"
  MR_Integer hlds__make_hlds__PredArity_19,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgTypes_20,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__Markers_21,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_22,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__Status_23,
#line 98 "make_hlds.m"
  MR_Word * hlds__make_hlds__ClausesInfo_24,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29,
#line 98 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_TVarSet_30,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31,
#line 98 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33,
#line 98 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_QualInfo_34,
#line 98 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_Specs_0_35,
#line 98 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_Specs_36)
#line 98 "make_hlds.m"
{
#line 170 "make_hlds.m"
  {
#line 170 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 170 "make_hlds.m"
    {
#line 170 "make_hlds.m"
      hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(hlds__make_hlds__InstanceProcDefn_17, hlds__make_hlds__PredOrFunc_18, hlds__make_hlds__PredArity_19, hlds__make_hlds__ArgTypes_20, hlds__make_hlds__Markers_21, hlds__make_hlds__Context_22, hlds__make_hlds__Status_23, hlds__make_hlds__ClausesInfo_24, hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29, hlds__make_hlds__STATE_VARIABLE_TVarSet_30, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33, hlds__make_hlds__STATE_VARIABLE_QualInfo_34, hlds__make_hlds__STATE_VARIABLE_Specs_0_35, hlds__make_hlds__STATE_VARIABLE_Specs_36);
#line 170 "make_hlds.m"
      return;
    }
#line 170 "make_hlds.m"
  }
#line 98 "make_hlds.m"
}

#line 90 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(
#line 90 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_9,
#line 90 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_10,
#line 90 "make_hlds.m"
  MR_Word hlds__make_hlds__Type_11,
#line 90 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_12,
#line 90 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_13,
#line 90 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_14,
#line 90 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16,
#line 90 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17)
#line 90 "make_hlds.m"
{
#line 164 "make_hlds.m"
  {
#line 164 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 164 "make_hlds.m"
    {
#line 164 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__SpecialPredId_9, hlds__make_hlds__TVarSet_10, hlds__make_hlds__Type_11, hlds__make_hlds__TypeCtor_12, hlds__make_hlds__Context_13, hlds__make_hlds__Status0_14, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17);
#line 164 "make_hlds.m"
      return;
    }
#line 164 "make_hlds.m"
  }
#line 90 "make_hlds.m"
}

#line 78 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_for_real_9_p_0(
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_10,
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_11,
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__Type0_12,
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_13,
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeBody_14,
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_15,
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_16,
#line 78 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18,
#line 78 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19)
#line 78 "make_hlds.m"
{
#line 159 "make_hlds.m"
  {
#line 159 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 159 "make_hlds.m"
    {
#line 159 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__SpecialPredId_10, hlds__make_hlds__TVarSet_11, hlds__make_hlds__Type0_12, hlds__make_hlds__TypeCtor_13, hlds__make_hlds__TypeBody_14, hlds__make_hlds__Context_15, hlds__make_hlds__Status0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19);
#line 159 "make_hlds.m"
      return;
    }
#line 159 "make_hlds.m"
  }
#line 78 "make_hlds.m"
}

#line 64 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_new_proc_12_p_0(
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__InstVarSet_13,
#line 64 "make_hlds.m"
  MR_Integer hlds__make_hlds__Arity_14,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgModes_15,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDeclaredArgModes_16,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeArgLives_17,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__DetismDecl_18,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDet_19,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_20,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__IsAddressTaken_21,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__PredInfo0_22,
#line 64 "make_hlds.m"
  MR_Word * hlds__make_hlds__PredInfo_23,
#line 64 "make_hlds.m"
  MR_Integer * hlds__make_hlds__ModeId_24)
#line 64 "make_hlds.m"
{
#line 153 "make_hlds.m"
  {
#line 153 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 153 "make_hlds.m"
    {
#line 153 "make_hlds.m"
      hlds__make_hlds__add_pred__do_add_new_proc_12_p_0(hlds__make_hlds__InstVarSet_13, hlds__make_hlds__Arity_14, hlds__make_hlds__ArgModes_15, hlds__make_hlds__MaybeDeclaredArgModes_16, hlds__make_hlds__MaybeArgLives_17, hlds__make_hlds__DetismDecl_18, hlds__make_hlds__MaybeDet_19, hlds__make_hlds__Context_20, hlds__make_hlds__IsAddressTaken_21, hlds__make_hlds__PredInfo0_22, hlds__make_hlds__PredInfo_23, hlds__make_hlds__ModeId_24);
#line 153 "make_hlds.m"
      return;
    }
#line 153 "make_hlds.m"
  }
#line 64 "make_hlds.m"
}

#line 60 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__parse_tree_to_hlds_11_p_0(
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__Globals_12,
#line 60 "make_hlds.m"
  MR_String hlds__make_hlds__DumpBaseFileName_13,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__ParseTree_14,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__MQInfo0_15,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__EqvMap_16,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__UsedModules_17,
#line 60 "make_hlds.m"
  MR_Word * hlds__make_hlds__QualInfo_18,
#line 60 "make_hlds.m"
  MR_Word * hlds__make_hlds__InvalidTypes_19,
#line 60 "make_hlds.m"
  MR_Word * hlds__make_hlds__InvalidModes_20,
#line 60 "make_hlds.m"
  MR_Word * hlds__make_hlds__ModuleInfo_21,
#line 60 "make_hlds.m"
  MR_Word * hlds__make_hlds__Specs_22)
#line 60 "make_hlds.m"
{
#line 146 "make_hlds.m"
  {
#line 146 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 146 "make_hlds.m"
    {
#line 146 "make_hlds.m"
      hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(hlds__make_hlds__Globals_12, hlds__make_hlds__DumpBaseFileName_13, hlds__make_hlds__ParseTree_14, hlds__make_hlds__MQInfo0_15, hlds__make_hlds__EqvMap_16, hlds__make_hlds__UsedModules_17, hlds__make_hlds__QualInfo_18, hlds__make_hlds__InvalidTypes_19, hlds__make_hlds__InvalidModes_20, hlds__make_hlds__ModuleInfo_21, hlds__make_hlds__Specs_22);
#line 146 "make_hlds.m"
      return;
    }
#line 146 "make_hlds.m"
  }
#line 60 "make_hlds.m"
}

void mercury__hlds__make_hlds__init(void)
{
}

void mercury__hlds__make_hlds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0);
}

void mercury__hlds__make_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds. */
