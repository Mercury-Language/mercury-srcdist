/*
** Automatically generated from `mode_robdd.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module mode_robdd. */
/* :- implementation. */

/*
INIT mercury__mode_robdd__init
ENDINIT
*/

#include "mode_robdd.mih"


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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 127 "mode_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__mode_robdd__tfeirn__pti_tfeirn_1__pseudo_1;

#line 130 "mode_robdd.c"
static MR_bool MR_CALL 
mode_robdd____Unify____mode_robdd_1_0_10001(
#line 133 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_1,
#line 135 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_2,
#line 137 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_3);

#line 140 "mode_robdd.c"
static void MR_CALL 
mode_robdd____Compare____mode_robdd_1_0_10001(
#line 143 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_1,
#line 145 "mode_robdd.c"
  MR_Box * mode_robdd__wrapper_arg_2,
#line 147 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_3,
#line 149 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_4);







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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 173 "mode_robdd.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__mode_robdd__tfeirn__pti_tfeirn_1__pseudo_1 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 181 "mode_robdd.c"
const MR_TypeCtorInfo_Struct mode_robdd__mode_robdd__type_ctor_info_mode_robdd_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd____Unify____mode_robdd_1_0_10001)),
  ((MR_Box) (mode_robdd____Compare____mode_robdd_1_0_10001)),
  (MR_String) "mode_robdd",
  (MR_String) "mode_robdd",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mode_robdd__mode_robdd__tfeirn__pti_tfeirn_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 202 "mode_robdd.c"
static MR_bool MR_CALL 
mode_robdd____Unify____mode_robdd_1_0_10001(
#line 205 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_1,
#line 207 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_2,
#line 209 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_3)
#line 211 "mode_robdd.c"
{
#line 213 "mode_robdd.c"
  {
#line 215 "mode_robdd.c"
    MR_bool mode_robdd__succeeded;

#line 218 "mode_robdd.c"
    {
#line 220 "mode_robdd.c"
      mode_robdd__succeeded = mode_robdd____Unify____mode_robdd_1_0(((MR_Word) mode_robdd__wrapper_arg_1), ((MR_Word) mode_robdd__wrapper_arg_2), ((MR_Word) mode_robdd__wrapper_arg_3));
    }
#line 223 "mode_robdd.c"
    return mode_robdd__succeeded;
#line 225 "mode_robdd.c"
  }
#line 227 "mode_robdd.c"
}

#line 230 "mode_robdd.c"
static void MR_CALL 
mode_robdd____Compare____mode_robdd_1_0_10001(
#line 233 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_1,
#line 235 "mode_robdd.c"
  MR_Box * mode_robdd__wrapper_arg_2,
#line 237 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_3,
#line 239 "mode_robdd.c"
  MR_Box mode_robdd__wrapper_arg_4)
#line 241 "mode_robdd.c"
{
#line 243 "mode_robdd.c"
  {
#line 245 "mode_robdd.c"
    MR_Word mode_robdd__conv0_HeadVar__1_1;

#line 248 "mode_robdd.c"
    {
#line 250 "mode_robdd.c"
      mode_robdd____Compare____mode_robdd_1_0(((MR_Word) mode_robdd__wrapper_arg_1), &mode_robdd__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__wrapper_arg_3), ((MR_Word) mode_robdd__wrapper_arg_4));
    }
#line 253 "mode_robdd.c"
    *mode_robdd__wrapper_arg_2 = ((MR_Box) (mode_robdd__conv0_HeadVar__1_1));
#line 255 "mode_robdd.c"
  }
#line 257 "mode_robdd.c"
}

#line 35 "mode_robdd.m"
void MR_CALL 
mode_robdd____Compare____mode_robdd_1_0(
#line 35 "mode_robdd.m"
  MR_Word mode_robdd__TypeInfo_for_T_6,
#line 35 "mode_robdd.m"
  MR_Word * mode_robdd__HeadVar__1_1,
#line 35 "mode_robdd.m"
  MR_Word mode_robdd__HeadVar__2_2,
#line 35 "mode_robdd.m"
  MR_Word mode_robdd__HeadVar__3_3)
#line 35 "mode_robdd.m"
{
#line 35 "mode_robdd.m"
  {
#line 35 "mode_robdd.m"
    MR_bool mode_robdd__succeeded;
#line 35 "mode_robdd.m"
    MR_Word mode_robdd__Cast_HeadVar1_4 = mode_robdd__HeadVar__2_2;
#line 35 "mode_robdd.m"
    MR_Word mode_robdd__Cast_HeadVar2_5 = mode_robdd__HeadVar__3_3;

#line 35 "mode_robdd.m"
    {
#line 35 "mode_robdd.m"
      mode_robdd__tfeirn____Compare____tfeirn_1_0(mode_robdd__TypeInfo_for_T_6, mode_robdd__HeadVar__1_1, mode_robdd__Cast_HeadVar1_4, mode_robdd__Cast_HeadVar2_5);
#line 35 "mode_robdd.m"
      return;
    }
#line 35 "mode_robdd.m"
  }
#line 35 "mode_robdd.m"
}

#line 35 "mode_robdd.m"
MR_bool MR_CALL 
mode_robdd____Unify____mode_robdd_1_0(
#line 35 "mode_robdd.m"
  MR_Word mode_robdd__TypeInfo_for_T_5,
#line 35 "mode_robdd.m"
  MR_Word mode_robdd__HeadVar__1_1,
#line 35 "mode_robdd.m"
  MR_Word mode_robdd__HeadVar__2_2)
#line 35 "mode_robdd.m"
{
#line 35 "mode_robdd.m"
  {
#line 35 "mode_robdd.m"
    MR_bool mode_robdd__succeeded;
#line 35 "mode_robdd.m"
    MR_Word mode_robdd__Cast_HeadVar1_3 = mode_robdd__HeadVar__1_1;
#line 35 "mode_robdd.m"
    MR_Word mode_robdd__Cast_HeadVar2_4 = mode_robdd__HeadVar__2_2;

#line 35 "mode_robdd.m"
    {
#line 35 "mode_robdd.m"
      return mode_robdd__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(mode_robdd__TypeInfo_for_T_5, mode_robdd__Cast_HeadVar1_3, mode_robdd__Cast_HeadVar2_4);
    }
#line 35 "mode_robdd.m"
    return mode_robdd__succeeded;
#line 35 "mode_robdd.m"
  }
#line 35 "mode_robdd.m"
}

void mercury__mode_robdd__init(void)
{
}

void mercury__mode_robdd__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mode_robdd__mode_robdd__type_ctor_info_mode_robdd_1);
}

void mercury__mode_robdd__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mode_robdd. */
