/*
** Automatically generated from `simplify_goal_conj.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module check_hlds.simplify.simplify_goal_conj. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_conj__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_conj.mih"


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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 110 "simplify_goal_conj.m"
struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s {
#line 110 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Goals_2;
#line 112 "simplify_goal_conj.m"
  MR_bool check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded;
#line 112 "simplify_goal_conj.m"
  jmp_buf check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__commit_0;
#line 112 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__GoalInfo_4;
#line 112 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Detism_5;
#line 112 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_7_7;
#line 112 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_8_8;
#line 112 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_10_10;
#line 113 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__conv0_V_7_7;
#line 110 "simplify_goal_conj.m"
};


#line 166 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "check_hlds.simplify.simplify_goal_conj.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
#line 181 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 183 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);

#line 186 "check_hlds.simplify.simplify_goal_conj.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
#line 189 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 191 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
#line 193 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3);

#line 119 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 119 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
#line 119 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
#line 119 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10);

#line 219 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
#line 219 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3);

#line 219 "simplify_goal_conj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2);

#line 407 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 407 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
#line 407 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);

#line 271 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Trace_1,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_2,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_3,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6,
#line 271 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8,
#line 271 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9);

#line 221 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
#line 221 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
#line 221 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
#line 221 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6);

#line 112 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_1(
#line 112 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_3(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

#line 112 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_2(
#line 112 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

#line 112 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_4(
#line 112 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

#line 110 "simplify_goal_conj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
#line 110 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals_2);

#line 236 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
#line 236 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
#line 236 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 236 "simplify_goal_conj.m"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 384 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 392 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 401 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 409 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 418 "check_hlds.simplify.simplify_goal_conj.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_conj",
  (MR_String) "var_renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 435 "check_hlds.simplify.simplify_goal_conj.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
#line 438 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 440 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
#line 442 "check_hlds.simplify.simplify_goal_conj.c"
{
#line 444 "check_hlds.simplify.simplify_goal_conj.c"
  {
#line 446 "check_hlds.simplify.simplify_goal_conj.c"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 449 "check_hlds.simplify.simplify_goal_conj.c"
    {
#line 451 "check_hlds.simplify.simplify_goal_conj.c"
      check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2));
    }
#line 454 "check_hlds.simplify.simplify_goal_conj.c"
    return check_hlds__simplify__simplify_goal_conj__succeeded;
#line 456 "check_hlds.simplify.simplify_goal_conj.c"
  }
#line 458 "check_hlds.simplify.simplify_goal_conj.c"
}

#line 461 "check_hlds.simplify.simplify_goal_conj.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
#line 464 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 466 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
#line 468 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3)
#line 470 "check_hlds.simplify.simplify_goal_conj.c"
{
#line 472 "check_hlds.simplify.simplify_goal_conj.c"
  {
#line 474 "check_hlds.simplify.simplify_goal_conj.c"
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1;

#line 477 "check_hlds.simplify.simplify_goal_conj.c"
    {
#line 479 "check_hlds.simplify.simplify_goal_conj.c"
      check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(&check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_3));
    }
#line 482 "check_hlds.simplify.simplify_goal_conj.c"
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1));
#line 484 "check_hlds.simplify.simplify_goal_conj.c"
  }
#line 486 "check_hlds.simplify.simplify_goal_conj.c"
}

#line 119 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 119 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
#line 119 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
#line 119 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
#line 119 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10)
#line 119 "simplify_goal_conj.m"
{
#line 126 "simplify_goal_conj.m"
  while (MR_TRUE)
#line 126 "simplify_goal_conj.m"
    {
#line 126 "simplify_goal_conj.m"
      /* tailcall optimized into a loop */
#line 126 "simplify_goal_conj.m"
      {
#line 126 "simplify_goal_conj.m"
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 126 "simplify_goal_conj.m"
        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "simplify_goal_conj.m"
          {
#line 127 "simplify_goal_conj.m"
            {
#line 127 "simplify_goal_conj.m"
              *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1);
            }
#line 126 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9;
#line 126 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7;
#line 126 "simplify_goal_conj.m"
          }
#line 126 "simplify_goal_conj.m"
        else
#line 129 "simplify_goal_conj.m"
          {
#line 129 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 135 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SubGoals_32;
#line 131 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 0)));
#line 131 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_55_55;
#line 131 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 1)));

#line 131 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 131 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 131 "simplify_goal_conj.m"
              {
#line 131 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_54_54, (MR_Integer) 1)));
#line 131 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__SubGoals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_54_54, (MR_Integer) 2)));
#line 131 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_55_55 == (MR_Integer) 0);
#line 131 "simplify_goal_conj.m"
              }
#line 135 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 132 "simplify_goal_conj.m"
              {
#line 132 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_34;

#line 132 "simplify_goal_conj.m"
                {
#line 132 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__Goals1_34 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__SubGoals_32, check_hlds__simplify__simplify_goal_conj__Goals0_25);
                }
#line 133 "simplify_goal_conj.m"
                /* direct tailcall eliminated */
#line 133 "simplify_goal_conj.m"
                {
#line 133 "simplify_goal_conj.m"
                  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals1_34;

#line 133 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
#line 133 "simplify_goal_conj.m"
                }
#line 133 "simplify_goal_conj.m"
                continue;
#line 132 "simplify_goal_conj.m"
              }
#line 135 "simplify_goal_conj.m"
            else
#line 136 "simplify_goal_conj.m"
              {
#line 136 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal1_36;
#line 136 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58;
#line 136 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;
#line 167 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__SubGoals1_37;
#line 140 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__V_60_60;
#line 140 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__V_61_61;
#line 140 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__V_38_38;

#line 137 "simplify_goal_conj.m"
                {
#line 137 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_24, &check_hlds__simplify__simplify_goal_conj__Goal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59);
                }
#line 140 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
#line 140 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));
#line 140 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_60_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_60_60, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 140 "simplify_goal_conj.m"
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 140 "simplify_goal_conj.m"
                  {
#line 140 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_60_60, (MR_Integer) 1)));
#line 140 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__SubGoals1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_60_60, (MR_Integer) 2)));
#line 140 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_61_61 == (MR_Integer) 0);
#line 140 "simplify_goal_conj.m"
                  }
#line 167 "simplify_goal_conj.m"
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 163 "simplify_goal_conj.m"
                  {
#line 163 "simplify_goal_conj.m"
                    MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_74;

#line 163 "simplify_goal_conj.m"
                    {
#line 163 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__Goals1_74 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__SubGoals1_37, check_hlds__simplify__simplify_goal_conj__Goals0_25);
                    }
#line 165 "simplify_goal_conj.m"
                    /* direct tailcall eliminated */
#line 165 "simplify_goal_conj.m"
                    {
#line 165 "simplify_goal_conj.m"
                      MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals1_74;
#line 165 "simplify_goal_conj.m"
                      MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;

#line 165 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9;
#line 165 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
#line 165 "simplify_goal_conj.m"
                    }
#line 165 "simplify_goal_conj.m"
                    continue;
#line 163 "simplify_goal_conj.m"
                  }
#line 167 "simplify_goal_conj.m"
                else
#line 168 "simplify_goal_conj.m"
                  {
#line 168 "simplify_goal_conj.m"
                    MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_39;

#line 168 "simplify_goal_conj.m"
                    {
#line 168 "simplify_goal_conj.m"
                      hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, &check_hlds__simplify__simplify_goal_conj__InstMap1_39);
                    }
#line 178 "simplify_goal_conj.m"
                    {
#line 178 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__simplify__simplify_goal_conj__InstMap1_39);
                    }
#line 179 "simplify_goal_conj.m"
                    if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
#line 180 "simplify_goal_conj.m"
                      {
#line 180 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));
#line 180 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__Detism1_42;
#line 180 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_89_89;
#line 180 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
#line 182 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_43_43;

#line 181 "simplify_goal_conj.m"
                        {
#line 181 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__Detism1_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo1_41);
                        }
#line 182 "simplify_goal_conj.m"
                        {
#line 182 "simplify_goal_conj.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism1_42, &check_hlds__simplify__simplify_goal_conj__V_43_43, &check_hlds__simplify__simplify_goal_conj__V_89_89);
                        }
#line 182 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal_conj__V_89_89);
#line 180 "simplify_goal_conj.m"
                      }
#line 209 "simplify_goal_conj.m"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 185 "simplify_goal_conj.m"
                      {
#line 185 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 185 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66;
#line 185 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76;

#line 185 "simplify_goal_conj.m"
                        {
#line 185 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal1_36)));
                        }
#line 187 "simplify_goal_conj.m"
                        {
#line 187 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
#line 187 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_68_68;
#line 187 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));

#line 187 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_67_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_67_67, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 187 "simplify_goal_conj.m"
                          if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 187 "simplify_goal_conj.m"
                            {
#line 187 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_67_67, (MR_Integer) 1)));
#line 187 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "simplify_goal_conj.m"
                            }
#line 187 "simplify_goal_conj.m"
                        }
#line 188 "simplify_goal_conj.m"
                        if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
#line 188 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Goals0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "simplify_goal_conj.m"
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 193 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66;
#line 193 "simplify_goal_conj.m"
                        else
#line 203 "simplify_goal_conj.m"
                          {
#line 203 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 1)));
#line 203 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__Context_47;
#line 203 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__FailGoal_48;
#line 203 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 0)));

#line 204 "simplify_goal_conj.m"
                            {
#line 204 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__Context_47 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_46);
                            }
#line 205 "simplify_goal_conj.m"
                            {
#line 205 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__FailGoal_48 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_47);
                            }
#line 206 "simplify_goal_conj.m"
                            {
#line 206 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__FailGoal_48)));
                            }
#line 203 "simplify_goal_conj.m"
                          }
#line 208 "simplify_goal_conj.m"
                        {
#line 208 "simplify_goal_conj.m"
                          *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76);
                        }
#line 185 "simplify_goal_conj.m"
                        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;
#line 185 "simplify_goal_conj.m"
                        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58;
#line 185 "simplify_goal_conj.m"
                      }
#line 209 "simplify_goal_conj.m"
                    else
#line 210 "simplify_goal_conj.m"
                      {
#line 210 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_77;

#line 210 "simplify_goal_conj.m"
                        {
#line 210 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_77 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal1_36)));
                        }
#line 211 "simplify_goal_conj.m"
                        /* direct tailcall eliminated */
#line 211 "simplify_goal_conj.m"
                        {
#line 211 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0__tmp_copy_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_77;
#line 211 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals0_25;
#line 211 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6__tmp_copy_6 = check_hlds__simplify__simplify_goal_conj__InstMap1_39;
#line 211 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0__tmp_copy_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58;
#line 211 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;

#line 211 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9;
#line 211 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0__tmp_copy_7;
#line 211 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__HeadVar__6_6 = check_hlds__simplify__simplify_goal_conj__HeadVar__6__tmp_copy_6;
#line 211 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
#line 211 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0__tmp_copy_1;
#line 211 "simplify_goal_conj.m"
                        }
#line 211 "simplify_goal_conj.m"
                        continue;
#line 210 "simplify_goal_conj.m"
                      }
#line 168 "simplify_goal_conj.m"
                  }
#line 136 "simplify_goal_conj.m"
              }
#line 129 "simplify_goal_conj.m"
          }
#line 126 "simplify_goal_conj.m"
      }
#line 126 "simplify_goal_conj.m"
      break;
#line 126 "simplify_goal_conj.m"
    }
#line 119 "simplify_goal_conj.m"
}

#line 219 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
#line 219 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3)
#line 219 "simplify_goal_conj.m"
{
#line 219 "simplify_goal_conj.m"
  {
#line 219 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 219 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;
#line 219 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5 = check_hlds__simplify__simplify_goal_conj__HeadVar__3_3;

#line 219 "simplify_goal_conj.m"
    {
#line 219 "simplify_goal_conj.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5)));
#line 219 "simplify_goal_conj.m"
      return;
    }
#line 219 "simplify_goal_conj.m"
  }
#line 219 "simplify_goal_conj.m"
}

#line 219 "simplify_goal_conj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 219 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2)
#line 219 "simplify_goal_conj.m"
{
#line 219 "simplify_goal_conj.m"
  {
#line 219 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 219 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3 = check_hlds__simplify__simplify_goal_conj__HeadVar__1_1;
#line 219 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;

#line 219 "simplify_goal_conj.m"
    {
#line 219 "simplify_goal_conj.m"
      return check_hlds__simplify__simplify_goal_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4)));
    }
#line 219 "simplify_goal_conj.m"
    return check_hlds__simplify__simplify_goal_conj__succeeded;
#line 219 "simplify_goal_conj.m"
  }
#line 219 "simplify_goal_conj.m"
}

#line 407 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 407 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 407 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
#line 407 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7)
#line 407 "simplify_goal_conj.m"
{
#line 411 "simplify_goal_conj.m"
  {
#line 411 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 411 "simplify_goal_conj.m"
    if ((check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "simplify_goal_conj.m"
      {
#line 411 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6;
#line 411 "simplify_goal_conj.m"
      }
#line 411 "simplify_goal_conj.m"
    else
#line 413 "simplify_goal_conj.m"
      {
#line 413 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal_16;
#line 413 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals_17;
#line 413 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_23;
#line 413 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26;
#line 414 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj___Common1_22;

#line 414 "simplify_goal_conj.m"
        {
#line 414 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_14, &check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, &check_hlds__simplify__simplify_goal_conj___Common1_22, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26);
        }
#line 416 "simplify_goal_conj.m"
        {
#line 416 "simplify_goal_conj.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, &check_hlds__simplify__simplify_goal_conj__InstMap1_23);
        }
#line 417 "simplify_goal_conj.m"
        {
#line 417 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_15, &check_hlds__simplify__simplify_goal_conj__Goals_17, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__InstMap1_23, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);
        }
#line 412 "simplify_goal_conj.m"
        {
#line 412 "simplify_goal_conj.m"
          MR_Word base;
#line 412 "simplify_goal_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "simplify_goal_conj.m"
          *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = base;
#line 412 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_16));
#line 412 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_17));
#line 412 "simplify_goal_conj.m"
        }
#line 413 "simplify_goal_conj.m"
      }
#line 411 "simplify_goal_conj.m"
  }
#line 407 "simplify_goal_conj.m"
}

#line 271 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Trace_1,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_2,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_3,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6,
#line 271 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7,
#line 271 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8,
#line 271 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9)
#line 271 "simplify_goal_conj.m"
{
#line 276 "simplify_goal_conj.m"
  while (MR_TRUE)
#line 276 "simplify_goal_conj.m"
    {
#line 276 "simplify_goal_conj.m"
      /* tailcall optimized into a loop */
#line 276 "simplify_goal_conj.m"
      {
#line 276 "simplify_goal_conj.m"
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 276 "simplify_goal_conj.m"
        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "simplify_goal_conj.m"
          {
#line 276 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8;
#line 276 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6;
#line 276 "simplify_goal_conj.m"
          }
#line 276 "simplify_goal_conj.m"
        else
#line 278 "simplify_goal_conj.m"
          {
#line 278 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, (MR_Integer) 0)));
#line 278 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, (MR_Integer) 1)));
#line 278 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33;
#line 278 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34;
#line 284 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Unif_48;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar0_51;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar0_52;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__CanElimRight_56;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__ElimVar_57;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__ReplacementVar_58;
#line 295 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 0)));
#line 296 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 1)));
#line 296 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45;
#line 296 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_46_46;
#line 296 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_47_47;
#line 296 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_49_49;
#line 304 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63;
#line 303 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62;
#line 338 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78;
#line 338 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_61_61;
#line 338 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Name_74;
#line 349 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_75;
#line 349 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__V_77_77;
#line 350 "simplify_goal_conj.m"
            MR_Integer check_hlds__simplify__simplify_goal_conj__V_76_76;
#line 346 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85;
#line 346 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Name_81;
#line 349 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_82;
#line 349 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__V_84_84;
#line 350 "simplify_goal_conj.m"
            MR_Integer check_hlds__simplify__simplify_goal_conj__V_83_83;

#line 296 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 296 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 296 "simplify_goal_conj.m"
              {
#line 296 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 0)));
#line 296 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 1)));
#line 296 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 2)));
#line 296 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__Unif_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 3)));
#line 296 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 4)));
#line 297 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Unif_48)) == (MR_mktag((MR_Integer) 2)));
#line 297 "simplify_goal_conj.m"
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 297 "simplify_goal_conj.m"
                  {
#line 297 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__LeftVar0_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_48, (MR_Integer) 0)));
#line 297 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__RightVar0_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_48, (MR_Integer) 1)));
#line 300 "simplify_goal_conj.m"
                    {
#line 300 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, check_hlds__simplify__simplify_goal_conj__LeftVar0_51, &check_hlds__simplify__simplify_goal_conj__LeftVar_53);
                    }
#line 301 "simplify_goal_conj.m"
                    {
#line 301 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, check_hlds__simplify__simplify_goal_conj__RightVar0_52, &check_hlds__simplify__simplify_goal_conj__RightVar_54);
                    }
#line 1163 "check_hlds.simplify.simplify_goal_conj.c"
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 304 "simplify_goal_conj.m"
                    {
#line 304 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4, check_hlds__simplify__simplify_goal_conj__RightVar_54);
                    }
#line 304 "simplify_goal_conj.m"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 304 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_56 = (MR_Integer) 0;
#line 304 "simplify_goal_conj.m"
                    else
#line 304 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_56 = (MR_Integer) 1;
#line 1178 "check_hlds.simplify.simplify_goal_conj.c"
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 303 "simplify_goal_conj.m"
                    {
#line 303 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4, check_hlds__simplify__simplify_goal_conj__LeftVar_53);
                    }
#line 1185 "check_hlds.simplify.simplify_goal_conj.c"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 1187 "check_hlds.simplify.simplify_goal_conj.c"
                      {
#line 1189 "check_hlds.simplify.simplify_goal_conj.c"
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__CanElimRight_56 == (MR_Integer) 1);
#line 1191 "check_hlds.simplify.simplify_goal_conj.c"
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 1193 "check_hlds.simplify.simplify_goal_conj.c"
                          {
#line 325 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 326 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 326 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
#line 1201 "check_hlds.simplify.simplify_goal_conj.c"
                          }
#line 1203 "check_hlds.simplify.simplify_goal_conj.c"
                      }
#line 1205 "check_hlds.simplify.simplify_goal_conj.c"
                    else
#line 317 "simplify_goal_conj.m"
                      {
#line 317 "simplify_goal_conj.m"
#line 317 "simplify_goal_conj.m"
                        switch (check_hlds__simplify__simplify_goal_conj__CanElimRight_56) {
#line 317 "simplify_goal_conj.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 317 "simplify_goal_conj.m"
                          case (MR_Integer) 0:
#line 318 "simplify_goal_conj.m"
                            {
#line 320 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 321 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 318 "simplify_goal_conj.m"
                            }
#line 317 "simplify_goal_conj.m"
                            break;
#line 317 "simplify_goal_conj.m"
                          case (MR_Integer) 1:
#line 313 "simplify_goal_conj.m"
                            {
#line 346 "simplify_goal_conj.m"
                              MR_String check_hlds__simplify__simplify_goal_conj__Name_67;
#line 349 "simplify_goal_conj.m"
                              MR_String check_hlds__simplify__simplify_goal_conj__Suffix_68;
#line 349 "simplify_goal_conj.m"
                              MR_String check_hlds__simplify__simplify_goal_conj__V_70_70;
#line 350 "simplify_goal_conj.m"
                              MR_Integer check_hlds__simplify__simplify_goal_conj__V_69_69;

#line 347 "simplify_goal_conj.m"
                              {
#line 347 "simplify_goal_conj.m"
                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__LeftVar_53, &check_hlds__simplify__simplify_goal_conj__Name_67);
                              }
#line 346 "simplify_goal_conj.m"
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 346 "simplify_goal_conj.m"
                                {
#line 349 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__V_70_70 = (MR_String) "HeadVar__";
#line 349 "simplify_goal_conj.m"
                                  {
#line 349 "simplify_goal_conj.m"
                                    check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_70_70, &check_hlds__simplify__simplify_goal_conj__Suffix_68, check_hlds__simplify__simplify_goal_conj__Name_67);
                                  }
#line 349 "simplify_goal_conj.m"
                                  if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 350 "simplify_goal_conj.m"
                                    {
#line 350 "simplify_goal_conj.m"
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_68, &check_hlds__simplify__simplify_goal_conj__V_69_69);
                                    }
#line 348 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 346 "simplify_goal_conj.m"
                                }
#line 313 "simplify_goal_conj.m"
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 311 "simplify_goal_conj.m"
                                {
#line 311 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 312 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 311 "simplify_goal_conj.m"
                                }
#line 313 "simplify_goal_conj.m"
                              else
#line 314 "simplify_goal_conj.m"
                                {
#line 314 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 315 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 314 "simplify_goal_conj.m"
                                }
#line 313 "simplify_goal_conj.m"
                            }
#line 317 "simplify_goal_conj.m"
                            break;
#line 317 "simplify_goal_conj.m"
                        }
#line 317 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
#line 317 "simplify_goal_conj.m"
                      }
#line 295 "simplify_goal_conj.m"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 295 "simplify_goal_conj.m"
                      {
#line 1300 "check_hlds.simplify.simplify_goal_conj.c"
                        check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 332 "simplify_goal_conj.m"
                        {
#line 332 "simplify_goal_conj.m"
                          mercury__map__det_insert_4_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64, check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ElimVar_57)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ReplacementVar_58)), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32);
                        }
#line 338 "simplify_goal_conj.m"
                        {
#line 338 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__V_61_61 = libs__trace_params__trace_level_needs_meaningful_var_names_1_f_0(check_hlds__simplify__simplify_goal_conj__Trace_1);
                        }
#line 338 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_61_61 == (MR_Integer) 1);
#line 338 "simplify_goal_conj.m"
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 338 "simplify_goal_conj.m"
                          {
#line 339 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__TraceOptimized_2 == (MR_Integer) 0);
#line 338 "simplify_goal_conj.m"
                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 338 "simplify_goal_conj.m"
                              {
#line 1324 "check_hlds.simplify.simplify_goal_conj.c"
                                check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 347 "simplify_goal_conj.m"
                                {
#line 347 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__ElimVar_57, &check_hlds__simplify__simplify_goal_conj__Name_74);
                                }
#line 338 "simplify_goal_conj.m"
                                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 338 "simplify_goal_conj.m"
                                  {
#line 349 "simplify_goal_conj.m"
                                    check_hlds__simplify__simplify_goal_conj__V_77_77 = (MR_String) "HeadVar__";
#line 349 "simplify_goal_conj.m"
                                    {
#line 349 "simplify_goal_conj.m"
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_77_77, &check_hlds__simplify__simplify_goal_conj__Suffix_75, check_hlds__simplify__simplify_goal_conj__Name_74);
                                    }
#line 349 "simplify_goal_conj.m"
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 350 "simplify_goal_conj.m"
                                      {
#line 350 "simplify_goal_conj.m"
                                        check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_75, &check_hlds__simplify__simplify_goal_conj__V_76_76);
                                      }
#line 348 "simplify_goal_conj.m"
                                    check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 338 "simplify_goal_conj.m"
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 338 "simplify_goal_conj.m"
                                      {
#line 1355 "check_hlds.simplify.simplify_goal_conj.c"
                                        check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 347 "simplify_goal_conj.m"
                                        {
#line 347 "simplify_goal_conj.m"
                                          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__ReplacementVar_58, &check_hlds__simplify__simplify_goal_conj__Name_81);
                                        }
#line 346 "simplify_goal_conj.m"
                                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 346 "simplify_goal_conj.m"
                                          {
#line 349 "simplify_goal_conj.m"
                                            check_hlds__simplify__simplify_goal_conj__V_84_84 = (MR_String) "HeadVar__";
#line 349 "simplify_goal_conj.m"
                                            {
#line 349 "simplify_goal_conj.m"
                                              check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_84_84, &check_hlds__simplify__simplify_goal_conj__Suffix_82, check_hlds__simplify__simplify_goal_conj__Name_81);
                                            }
#line 349 "simplify_goal_conj.m"
                                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 350 "simplify_goal_conj.m"
                                              {
#line 350 "simplify_goal_conj.m"
                                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_82, &check_hlds__simplify__simplify_goal_conj__V_83_83);
                                              }
#line 348 "simplify_goal_conj.m"
                                            check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 346 "simplify_goal_conj.m"
                                          }
#line 341 "simplify_goal_conj.m"
                                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 338 "simplify_goal_conj.m"
                                      }
#line 338 "simplify_goal_conj.m"
                                  }
#line 338 "simplify_goal_conj.m"
                              }
#line 338 "simplify_goal_conj.m"
                          }
#line 337 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 295 "simplify_goal_conj.m"
                      }
#line 297 "simplify_goal_conj.m"
                  }
#line 296 "simplify_goal_conj.m"
              }
#line 284 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 283 "simplify_goal_conj.m"
              {
#line 283 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32;
#line 283 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6;
#line 283 "simplify_goal_conj.m"
              }
#line 284 "simplify_goal_conj.m"
            else
#line 285 "simplify_goal_conj.m"
              {
#line 285 "simplify_goal_conj.m"
                {
#line 285 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_24));
#line 285 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6));
#line 285 "simplify_goal_conj.m"
                }
#line 285 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8;
#line 285 "simplify_goal_conj.m"
              }
#line 287 "simplify_goal_conj.m"
            /* direct tailcall eliminated */
#line 287 "simplify_goal_conj.m"
            {
#line 287 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5__tmp_copy_5 = check_hlds__simplify__simplify_goal_conj__Goals_25;
#line 287 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0__tmp_copy_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33;
#line 287 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0__tmp_copy_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34;

#line 287 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0__tmp_copy_8;
#line 287 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0__tmp_copy_6;
#line 287 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__HeadVar__5_5 = check_hlds__simplify__simplify_goal_conj__HeadVar__5__tmp_copy_5;
#line 287 "simplify_goal_conj.m"
            }
#line 287 "simplify_goal_conj.m"
            continue;
#line 278 "simplify_goal_conj.m"
          }
#line 276 "simplify_goal_conj.m"
      }
#line 276 "simplify_goal_conj.m"
      break;
#line 276 "simplify_goal_conj.m"
    }
#line 271 "simplify_goal_conj.m"
}

#line 221 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
#line 221 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
#line 221 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
#line 221 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6)
#line 221 "simplify_goal_conj.m"
{
#line 226 "simplify_goal_conj.m"
  while (MR_TRUE)
#line 226 "simplify_goal_conj.m"
    {
#line 226 "simplify_goal_conj.m"
      /* tailcall optimized into a loop */
#line 226 "simplify_goal_conj.m"
      {
#line 226 "simplify_goal_conj.m"
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 226 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Var1_7;
#line 224 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 224 "simplify_goal_conj.m"
        MR_Box check_hlds__simplify__simplify_goal_conj__conv0_Var1_7;

#line 224 "simplify_goal_conj.m"
        {
#line 224 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__Subn_4, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Var0_5)), &check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
        }
#line 224 "simplify_goal_conj.m"
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 224 "simplify_goal_conj.m"
          {
#line 224 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__Var1_7 = ((MR_Word) check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
#line 224 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
#line 224 "simplify_goal_conj.m"
          }
#line 226 "simplify_goal_conj.m"
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 225 "simplify_goal_conj.m"
          {
#line 225 "simplify_goal_conj.m"
            /* direct tailcall eliminated */
#line 225 "simplify_goal_conj.m"
            {
#line 225 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__Var0__tmp_copy_5 = check_hlds__simplify__simplify_goal_conj__Var1_7;

#line 225 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__Var0_5 = check_hlds__simplify__simplify_goal_conj__Var0__tmp_copy_5;
#line 225 "simplify_goal_conj.m"
            }
#line 225 "simplify_goal_conj.m"
            continue;
#line 225 "simplify_goal_conj.m"
          }
#line 226 "simplify_goal_conj.m"
        else
#line 227 "simplify_goal_conj.m"
          *check_hlds__simplify__simplify_goal_conj__Var_6 = check_hlds__simplify__simplify_goal_conj__Var0_5;
#line 226 "simplify_goal_conj.m"
      }
#line 226 "simplify_goal_conj.m"
      break;
#line 226 "simplify_goal_conj.m"
    }
#line 221 "simplify_goal_conj.m"
}

#line 112 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_1(
#line 112 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 112 "simplify_goal_conj.m"
{
#line 112 "simplify_goal_conj.m"
  {
#line 112 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 112 "simplify_goal_conj.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__commit_0, 1);
#line 112 "simplify_goal_conj.m"
  }
#line 112 "simplify_goal_conj.m"
}

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_3(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 113 "simplify_goal_conj.m"
{
#line 113 "simplify_goal_conj.m"
  {
#line 113 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 113 "simplify_goal_conj.m"
    (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_7_7 = ((MR_Word) (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__conv0_V_7_7);
#line 113 "simplify_goal_conj.m"
    {
#line 113 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_2(check_hlds__simplify__simplify_goal_conj__env_ptr);
#line 113 "simplify_goal_conj.m"
      return;
    }
#line 113 "simplify_goal_conj.m"
  }
#line 113 "simplify_goal_conj.m"
}

#line 112 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_2(
#line 112 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 112 "simplify_goal_conj.m"
{
#line 112 "simplify_goal_conj.m"
  {
#line 112 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 112 "simplify_goal_conj.m"
    {
#line 113 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj___GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_7_7, (MR_Integer) 0)));
#line 115 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj__V_6_6;

#line 113 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_7_7, (MR_Integer) 1)));
#line 114 "simplify_goal_conj.m"
      {
#line 114 "simplify_goal_conj.m"
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Detism_5 = hlds__hlds_goal__goal_info_get_determinism_1_f_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__GoalInfo_4);
      }
#line 115 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_8_8 = (MR_Integer) 3;
#line 115 "simplify_goal_conj.m"
      {
#line 115 "simplify_goal_conj.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Detism_5, &check_hlds__simplify__simplify_goal_conj__V_6_6, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_10_10);
      }
#line 115 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded = ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_8_8 == (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__V_10_10);
#line 115 "simplify_goal_conj.m"
      if ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded)
#line 115 "simplify_goal_conj.m"
        {
#line 115 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_1(check_hlds__simplify__simplify_goal_conj__env_ptr);
#line 115 "simplify_goal_conj.m"
          return;
        }
#line 112 "simplify_goal_conj.m"
    }
#line 112 "simplify_goal_conj.m"
  }
#line 112 "simplify_goal_conj.m"
}

#line 112 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_4(
#line 112 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 112 "simplify_goal_conj.m"
{
#line 112 "simplify_goal_conj.m"
  {
#line 112 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 112 "simplify_goal_conj.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__commit_0) == 0)
#line 112 "simplify_goal_conj.m"
      {
#line 112 "simplify_goal_conj.m"
        {
#line 113 "simplify_goal_conj.m"
          {
#line 113 "simplify_goal_conj.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__conv0_V_7_7, (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Goals_2, check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_3, check_hlds__simplify__simplify_goal_conj__env_ptr);
          }
#line 112 "simplify_goal_conj.m"
        }
#line 112 "simplify_goal_conj.m"
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded = MR_FALSE;
#line 112 "simplify_goal_conj.m"
      }
#line 112 "simplify_goal_conj.m"
    else
#line 112 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded = MR_TRUE;
#line 112 "simplify_goal_conj.m"
  }
#line 112 "simplify_goal_conj.m"
}

#line 110 "simplify_goal_conj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(
#line 110 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals_2)
#line 110 "simplify_goal_conj.m"
{
#line 110 "simplify_goal_conj.m"
  {
#line 110 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0_s check_hlds__simplify__simplify_goal_conj__env;

#line 110 "simplify_goal_conj.m"
    (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__Goals_2 = check_hlds__simplify__simplify_goal_conj__Goals_2;
#line 112 "simplify_goal_conj.m"
    {
#line 112 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_4(&check_hlds__simplify__simplify_goal_conj__env);
    }
#line 112 "simplify_goal_conj.m"
    return (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0_env_0__succeeded;
#line 110 "simplify_goal_conj.m"
  }
#line 110 "simplify_goal_conj.m"
}

#line 36 "simplify_goal_conj.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(
#line 36 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_11,
#line 36 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalExpr_12,
#line 36 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_13,
#line 36 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalInfo_14,
#line 36 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__NestedContext0_15,
#line 36 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__InstMap0_16,
#line 36 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27,
#line 36 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28,
#line 36 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29,
#line 36 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30)
#line 36 "simplify_goal_conj.m"
{
#line 359 "simplify_goal_conj.m"
  {
#line 359 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 359 "simplify_goal_conj.m"
    if ((check_hlds__simplify__simplify_goal_conj__Goals0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 359 "simplify_goal_conj.m"
      {
#line 359 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Context_19;
#line 359 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_43_43;

#line 360 "simplify_goal_conj.m"
        {
#line 360 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
#line 361 "simplify_goal_conj.m"
        {
#line 361 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__V_43_43 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_19);
        }
#line 361 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_43_43, (MR_Integer) 0)));
#line 361 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_43_43, (MR_Integer) 1)));
#line 359 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
#line 359 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29;
#line 359 "simplify_goal_conj.m"
      }
#line 359 "simplify_goal_conj.m"
    else
#line 359 "simplify_goal_conj.m"
      {
#line 359 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
#line 359 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));

#line 359 "simplify_goal_conj.m"
        if ((check_hlds__simplify__simplify_goal_conj__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "simplify_goal_conj.m"
          {
#line 363 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoal_21;
#line 363 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22;
#line 363 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_39_39;
#line 363 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41;

#line 364 "simplify_goal_conj.m"
            {
#line 364 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__V_45_45, &check_hlds__simplify__simplify_goal_conj__V_39_39, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41);
            }
#line 364 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__SingleGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_39_39, (MR_Integer) 0)));
#line 364 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_39_39, (MR_Integer) 1)));
#line 366 "simplify_goal_conj.m"
            {
#line 366 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22, check_hlds__simplify__simplify_goal_conj__SingleGoal_21, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
#line 366 "simplify_goal_conj.m"
              return;
            }
#line 363 "simplify_goal_conj.m"
          }
#line 359 "simplify_goal_conj.m"
        else
#line 373 "simplify_goal_conj.m"
          {
#line 370 "simplify_goal_conj.m"
            {
#line 370 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29);
            }
#line 373 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 371 "simplify_goal_conj.m"
              {
#line 371 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_11, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
#line 371 "simplify_goal_conj.m"
                return;
              }
#line 373 "simplify_goal_conj.m"
            else
#line 374 "simplify_goal_conj.m"
              {
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_26;
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34;
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_52;
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_53;
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal_54;
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_55;
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_61;
#line 374 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64;
#line 414 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj___Common1_60;

#line 374 "simplify_goal_conj.m"
                *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
#line 412 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__Goal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));
#line 412 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__Goals0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
#line 414 "simplify_goal_conj.m"
                {
#line 414 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_52, &check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__simplify_goal_conj___Common1_60, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64);
                }
#line 416 "simplify_goal_conj.m"
                {
#line 416 "simplify_goal_conj.m"
                  hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__InstMap0_16, &check_hlds__simplify__simplify_goal_conj__InstMap1_61);
                }
#line 417 "simplify_goal_conj.m"
                {
#line 417 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_53, &check_hlds__simplify__simplify_goal_conj__Goals_55, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap1_61, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34);
                }
#line 412 "simplify_goal_conj.m"
                {
#line 412 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__Goals_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_54));
#line 412 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_55));
#line 412 "simplify_goal_conj.m"
                }
#line 377 "simplify_goal_conj.m"
                {
#line 377 "simplify_goal_conj.m"
                  MR_Word base;
#line 377 "simplify_goal_conj.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 377 "simplify_goal_conj.m"
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
#line 377 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 377 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 377 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_26));
#line 377 "simplify_goal_conj.m"
                }
#line 378 "simplify_goal_conj.m"
                {
#line 378 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
                }
#line 374 "simplify_goal_conj.m"
                *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
#line 374 "simplify_goal_conj.m"
              }
#line 373 "simplify_goal_conj.m"
          }
#line 359 "simplify_goal_conj.m"
      }
#line 359 "simplify_goal_conj.m"
  }
#line 36 "simplify_goal_conj.m"
}

#line 236 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
#line 236 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
#line 236 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 236 "simplify_goal_conj.m"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
#line 236 "simplify_goal_conj.m"
{
#line 236 "simplify_goal_conj.m"
  {
#line 236 "simplify_goal_conj.m"
    MR_Box check_hlds__simplify__simplify_goal_conj__closure = check_hlds__simplify__simplify_goal_conj__closure_arg;
#line 236 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_Var_6;

#line 236 "simplify_goal_conj.m"
    {
#line 236 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_conj__conv0_Var_6);
    }
#line 236 "simplify_goal_conj.m"
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_Var_6));
#line 236 "simplify_goal_conj.m"
  }
#line 236 "simplify_goal_conj.m"
}

#line 28 "simplify_goal_conj.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(
#line 28 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_11,
#line 28 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalExpr_12,
#line 28 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_13,
#line 28 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalInfo_14,
#line 28 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__NestedContext0_15,
#line 28 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__InstMap0_16,
#line 28 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_33,
#line 28 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_34,
#line 28 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35,
#line 28 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36)
#line 28 "simplify_goal_conj.m"
{
#line 68 "simplify_goal_conj.m"
  {
#line 68 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 68 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_19;
#line 68 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Goals_20;
#line 68 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37;
#line 68 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__V_38_38;
#line 68 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;

#line 69 "simplify_goal_conj.m"
    {
#line 69 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35);
    }
#line 71 "simplify_goal_conj.m"
    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 245 "simplify_goal_conj.m"
      {
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_62;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Subn0_63;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__ModuleInfo_64;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Globals_65;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__TraceLevel_66;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_67;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__VarSet0_68;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__RevGoals_69;
#line 245 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Subn1_70;

#line 246 "simplify_goal_conj.m"
        {
#line 246 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__ConjNonLocals_62 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
#line 2007 "check_hlds.simplify.simplify_goal_conj.c"
        check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 247 "simplify_goal_conj.m"
        {
#line 247 "simplify_goal_conj.m"
          mercury__map__init_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84, check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84, &check_hlds__simplify__simplify_goal_conj__Subn0_63);
        }
#line 248 "simplify_goal_conj.m"
        {
#line 248 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_conj__ModuleInfo_64);
        }
#line 249 "simplify_goal_conj.m"
        {
#line 249 "simplify_goal_conj.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_conj__ModuleInfo_64, &check_hlds__simplify__simplify_goal_conj__Globals_65);
        }
#line 250 "simplify_goal_conj.m"
        {
#line 250 "simplify_goal_conj.m"
          libs__globals__get_trace_level_2_p_0(check_hlds__simplify__simplify_goal_conj__Globals_65, &check_hlds__simplify__simplify_goal_conj__TraceLevel_66);
        }
#line 251 "simplify_goal_conj.m"
        {
#line 251 "simplify_goal_conj.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_conj__Globals_65, (MR_Integer) 121, &check_hlds__simplify__simplify_goal_conj__TraceOptimized_67);
        }
#line 252 "simplify_goal_conj.m"
        {
#line 252 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_conj__VarSet0_68);
        }
#line 253 "simplify_goal_conj.m"
        {
#line 253 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(check_hlds__simplify__simplify_goal_conj__TraceLevel_66, check_hlds__simplify__simplify_goal_conj__TraceOptimized_67, check_hlds__simplify__simplify_goal_conj__VarSet0_68, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_62, check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_conj__RevGoals_69, check_hlds__simplify__simplify_goal_conj__Subn0_63, &check_hlds__simplify__simplify_goal_conj__Subn1_70);
        }
#line 255 "simplify_goal_conj.m"
        {
#line 255 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__is_empty_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84, check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84, check_hlds__simplify__simplify_goal_conj__Subn1_70);
        }
#line 257 "simplify_goal_conj.m"
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 256 "simplify_goal_conj.m"
          {
#line 256 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__Goals1_19 = check_hlds__simplify__simplify_goal_conj__Goals0_11;
#line 256 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35;
#line 256 "simplify_goal_conj.m"
          }
#line 257 "simplify_goal_conj.m"
        else
#line 258 "simplify_goal_conj.m"
          {
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_37_87;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_94;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_71;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Subn_72;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__RemovedVars_73;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_74;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_75;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps_76;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30_80;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_81_81;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_82_82;
#line 258 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_91_91;

#line 258 "simplify_goal_conj.m"
            {
#line 258 "simplify_goal_conj.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__RevGoals_69, &check_hlds__simplify__simplify_goal_conj__Goals1_71);
            }
#line 236 "simplify_goal_conj.m"
            {
#line 236 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 236 "simplify_goal_conj.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_91_91, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[0]));
#line 236 "simplify_goal_conj.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_91_91, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1));
#line 236 "simplify_goal_conj.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 236 "simplify_goal_conj.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_91_91, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Subn1_70));
#line 236 "simplify_goal_conj.m"
            }
#line 2107 "check_hlds.simplify.simplify_goal_conj.c"
            check_hlds__simplify__simplify_goal_conj__TypeInfo_8_94 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 236 "simplify_goal_conj.m"
            {
#line 236 "simplify_goal_conj.m"
              mercury__map__map_values_only_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_94, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_94, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_94, check_hlds__simplify__simplify_goal_conj__V_91_91, check_hlds__simplify__simplify_goal_conj__Subn1_70, &check_hlds__simplify__simplify_goal_conj__Subn_72);
            }
#line 261 "simplify_goal_conj.m"
            {
#line 261 "simplify_goal_conj.m"
              hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_conj__Subn_72, check_hlds__simplify__simplify_goal_conj__Goals1_71, &check_hlds__simplify__simplify_goal_conj__Goals1_19);
            }
#line 262 "simplify_goal_conj.m"
            {
#line 262 "simplify_goal_conj.m"
              mercury__map__keys_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84, check_hlds__simplify__simplify_goal_conj__TypeInfo_34_84, check_hlds__simplify__simplify_goal_conj__Subn0_63, &check_hlds__simplify__simplify_goal_conj__RemovedVars_73);
            }
#line 263 "simplify_goal_conj.m"
            {
#line 263 "simplify_goal_conj.m"
              mercury__varset__delete_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__RemovedVars_73, check_hlds__simplify__simplify_goal_conj__VarSet0_68, &check_hlds__simplify__simplify_goal_conj__VarSet_74);
            }
#line 264 "simplify_goal_conj.m"
            {
#line 264 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_conj__VarSet_74, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30_80);
            }
#line 265 "simplify_goal_conj.m"
            {
#line 265 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30_80, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_75);
            }
#line 2139 "check_hlds.simplify.simplify_goal_conj.c"
            check_hlds__simplify__simplify_goal_conj__TypeInfo_37_87 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[1];
#line 266 "simplify_goal_conj.m"
            {
#line 266 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__V_81_81 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_87, check_hlds__simplify__simplify_goal_conj__TypeInfo_37_87);
            }
#line 266 "simplify_goal_conj.m"
            {
#line 266 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__V_82_82 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_87, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            }
#line 266 "simplify_goal_conj.m"
            {
#line 266 "simplify_goal_conj.m"
              hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_goal_conj__V_81_81, check_hlds__simplify__simplify_goal_conj__V_82_82, check_hlds__simplify__simplify_goal_conj__Subn_72, check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_75, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps_76);
            }
#line 268 "simplify_goal_conj.m"
            {
#line 268 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_conj__RttiVarMaps_76, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30_80, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37);
            }
#line 258 "simplify_goal_conj.m"
          }
#line 245 "simplify_goal_conj.m"
      }
#line 71 "simplify_goal_conj.m"
    else
#line 72 "simplify_goal_conj.m"
      {
#line 72 "simplify_goal_conj.m"
        check_hlds__simplify__simplify_goal_conj__Goals1_19 = check_hlds__simplify__simplify_goal_conj__Goals0_11;
#line 72 "simplify_goal_conj.m"
        check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35;
#line 72 "simplify_goal_conj.m"
      }
#line 74 "simplify_goal_conj.m"
    {
#line 74 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__V_38_38 = mercury__cord__empty_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
    }
#line 74 "simplify_goal_conj.m"
    {
#line 74 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_conj__V_38_38, check_hlds__simplify__simplify_goal_conj__Goals1_19, &check_hlds__simplify__simplify_goal_conj__Goals_20, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_33, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
    }
#line 80 "simplify_goal_conj.m"
    if ((check_hlds__simplify__simplify_goal_conj__Goals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "simplify_goal_conj.m"
      {
#line 77 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Context_21;
#line 77 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_51_51;

#line 78 "simplify_goal_conj.m"
        {
#line 78 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
#line 79 "simplify_goal_conj.m"
        {
#line 79 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__V_51_51 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_21);
        }
#line 79 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_51_51, (MR_Integer) 0)));
#line 79 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_51_51, (MR_Integer) 1)));
#line 77 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
#line 77 "simplify_goal_conj.m"
      }
#line 80 "simplify_goal_conj.m"
    else
#line 80 "simplify_goal_conj.m"
      {
#line 80 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_20, (MR_Integer) 1)));
#line 80 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_20, (MR_Integer) 0)));

#line 80 "simplify_goal_conj.m"
        if ((check_hlds__simplify__simplify_goal_conj__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 81 "simplify_goal_conj.m"
          {
#line 81 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_55_55, (MR_Integer) 0)));
#line 81 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_55_55, (MR_Integer) 1)));

#line 84 "simplify_goal_conj.m"
            {
#line 84 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24, check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36);
#line 84 "simplify_goal_conj.m"
              return;
            }
#line 81 "simplify_goal_conj.m"
          }
#line 80 "simplify_goal_conj.m"
        else
#line 87 "simplify_goal_conj.m"
          {
#line 87 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Detism_28;
#line 104 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__CanFail_29;
#line 96 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_42_42;
#line 96 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_53_53;

#line 94 "simplify_goal_conj.m"
            {
#line 94 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__Detism_28 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
            }
#line 96 "simplify_goal_conj.m"
            {
#line 96 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
            }
#line 96 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 96 "simplify_goal_conj.m"
              {
#line 97 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_42_42 = (MR_Integer) 0;
#line 97 "simplify_goal_conj.m"
                {
#line 97 "simplify_goal_conj.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism_28, &check_hlds__simplify__simplify_goal_conj__CanFail_29, &check_hlds__simplify__simplify_goal_conj__V_53_53);
                }
#line 97 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_42_42 == check_hlds__simplify__simplify_goal_conj__V_53_53);
#line 96 "simplify_goal_conj.m"
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 98 "simplify_goal_conj.m"
                  {
#line 98 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj__contains_multisoln_goal_1_p_0(check_hlds__simplify__simplify_goal_conj__Goals_20);
                  }
#line 96 "simplify_goal_conj.m"
              }
#line 104 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 100 "simplify_goal_conj.m"
              {
#line 100 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__InnerDetism_30;
#line 100 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__InnerInfo_31;
#line 100 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__InnerGoal_32;
#line 100 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44;

#line 100 "simplify_goal_conj.m"
                {
#line 100 "simplify_goal_conj.m"
                  parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__CanFail_29, (MR_Integer) 3);
                }
#line 101 "simplify_goal_conj.m"
                {
#line 101 "simplify_goal_conj.m"
                  hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, &check_hlds__simplify__simplify_goal_conj__InnerInfo_31);
                }
#line 102 "simplify_goal_conj.m"
                {
#line 102 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 102 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 102 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 102 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_20));
#line 102 "simplify_goal_conj.m"
                }
#line 102 "simplify_goal_conj.m"
                {
#line 102 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__InnerGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 102 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__V_44_44));
#line 102 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerInfo_31));
#line 102 "simplify_goal_conj.m"
                }
#line 103 "simplify_goal_conj.m"
                {
#line 103 "simplify_goal_conj.m"
                  MR_Word base;
#line 103 "simplify_goal_conj.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 103 "simplify_goal_conj.m"
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
#line 103 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 103 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_conj_scalar_common_1[2])));
#line 103 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerGoal_32));
#line 103 "simplify_goal_conj.m"
                }
#line 100 "simplify_goal_conj.m"
              }
#line 104 "simplify_goal_conj.m"
            else
#line 105 "simplify_goal_conj.m"
              {
#line 105 "simplify_goal_conj.m"
                {
#line 105 "simplify_goal_conj.m"
                  MR_Word base;
#line 105 "simplify_goal_conj.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 105 "simplify_goal_conj.m"
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
#line 105 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 105 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 105 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_20));
#line 105 "simplify_goal_conj.m"
                }
#line 105 "simplify_goal_conj.m"
              }
#line 107 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
#line 87 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
#line 87 "simplify_goal_conj.m"
          }
#line 80 "simplify_goal_conj.m"
      }
#line 68 "simplify_goal_conj.m"
  }
#line 28 "simplify_goal_conj.m"
}

void mercury__check_hlds__simplify__simplify_goal_conj__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0);
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_conj. */
