/*
** Automatically generated from `simplify_goal_conj.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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



#line 28 "simplify_goal_conj.m"
struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s {
#line 69 "simplify_goal_conj.m"
  MR_bool check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded;
#line 69 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20;
#line 113 "simplify_goal_conj.m"
  jmp_buf check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__commit_0;
#line 113 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__GoalInfo_58;
#line 113 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Detism_59;
#line 113 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61;
#line 113 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_62_62;
#line 113 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_64_64;
#line 114 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__conv0_V_61_61;
#line 28 "simplify_goal_conj.m"
};


#line 169 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "check_hlds.simplify.simplify_goal_conj.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
#line 184 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 186 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);

#line 189 "check_hlds.simplify.simplify_goal_conj.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
#line 192 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 194 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
#line 196 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3);

#line 120 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 120 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
#line 120 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
#line 120 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10);

#line 220 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
#line 220 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3);

#line 220 "simplify_goal_conj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2);

#line 439 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 439 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
#line 439 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);

#line 301 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Trace_1,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_2,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_3,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6,
#line 301 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8,
#line 301 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9);

#line 237 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0_1(
#line 237 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
#line 237 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 237 "simplify_goal_conj.m"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);

#line 242 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0(
#line 242 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjInfo_6,
#line 242 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_7,
#line 242 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_8,
#line 242 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27,
#line 242 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28);

#line 222 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
#line 222 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
#line 222 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
#line 222 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6);

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

#line 114 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_3(
#line 114 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_2(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_4(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);


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



#line 395 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 403 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 412 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 420 "check_hlds.simplify.simplify_goal_conj.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 429 "check_hlds.simplify.simplify_goal_conj.c"
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

#line 446 "check_hlds.simplify.simplify_goal_conj.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
#line 449 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 451 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
#line 453 "check_hlds.simplify.simplify_goal_conj.c"
{
#line 455 "check_hlds.simplify.simplify_goal_conj.c"
  {
#line 457 "check_hlds.simplify.simplify_goal_conj.c"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 460 "check_hlds.simplify.simplify_goal_conj.c"
    {
#line 462 "check_hlds.simplify.simplify_goal_conj.c"
      check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2));
    }
#line 465 "check_hlds.simplify.simplify_goal_conj.c"
    return check_hlds__simplify__simplify_goal_conj__succeeded;
#line 467 "check_hlds.simplify.simplify_goal_conj.c"
  }
#line 469 "check_hlds.simplify.simplify_goal_conj.c"
}

#line 472 "check_hlds.simplify.simplify_goal_conj.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
#line 475 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 477 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
#line 479 "check_hlds.simplify.simplify_goal_conj.c"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3)
#line 481 "check_hlds.simplify.simplify_goal_conj.c"
{
#line 483 "check_hlds.simplify.simplify_goal_conj.c"
  {
#line 485 "check_hlds.simplify.simplify_goal_conj.c"
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1;

#line 488 "check_hlds.simplify.simplify_goal_conj.c"
    {
#line 490 "check_hlds.simplify.simplify_goal_conj.c"
      check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(&check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_3));
    }
#line 493 "check_hlds.simplify.simplify_goal_conj.c"
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1));
#line 495 "check_hlds.simplify.simplify_goal_conj.c"
  }
#line 497 "check_hlds.simplify.simplify_goal_conj.c"
}

#line 120 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 120 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
#line 120 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
#line 120 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
#line 120 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10)
#line 120 "simplify_goal_conj.m"
{
#line 127 "simplify_goal_conj.m"
  while (MR_TRUE)
#line 127 "simplify_goal_conj.m"
    {
#line 127 "simplify_goal_conj.m"
      /* tailcall optimized into a loop */
#line 127 "simplify_goal_conj.m"
      {
#line 127 "simplify_goal_conj.m"
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 127 "simplify_goal_conj.m"
        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 127 "simplify_goal_conj.m"
          {
#line 128 "simplify_goal_conj.m"
            {
#line 128 "simplify_goal_conj.m"
              *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1);
            }
#line 127 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9;
#line 127 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7;
#line 127 "simplify_goal_conj.m"
          }
#line 127 "simplify_goal_conj.m"
        else
#line 130 "simplify_goal_conj.m"
          {
#line 130 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SubGoals_32;
#line 132 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 0)));
#line 132 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_55_55;
#line 132 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 1)));

#line 132 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 132 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 132 "simplify_goal_conj.m"
              {
#line 132 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_54_54, (MR_Integer) 1)));
#line 132 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__SubGoals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_54_54, (MR_Integer) 2)));
#line 132 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_55_55 == (MR_Integer) 0);
#line 132 "simplify_goal_conj.m"
              }
#line 132 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 133 "simplify_goal_conj.m"
              {
#line 133 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_34;

#line 133 "simplify_goal_conj.m"
                {
#line 133 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__Goals1_34 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__SubGoals_32, check_hlds__simplify__simplify_goal_conj__Goals0_25);
                }
#line 134 "simplify_goal_conj.m"
                /* direct tailcall eliminated */
#line 134 "simplify_goal_conj.m"
                {
#line 134 "simplify_goal_conj.m"
                  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals1_34;

#line 134 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
#line 134 "simplify_goal_conj.m"
                }
#line 134 "simplify_goal_conj.m"
                continue;
#line 133 "simplify_goal_conj.m"
              }
#line 132 "simplify_goal_conj.m"
            else
#line 137 "simplify_goal_conj.m"
              {
#line 137 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal1_36;
#line 137 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58;
#line 137 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;
#line 139 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__SubGoals1_37;
#line 141 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__V_60_60;
#line 141 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__V_61_61;
#line 141 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__V_38_38;

#line 138 "simplify_goal_conj.m"
                {
#line 138 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_24, &check_hlds__simplify__simplify_goal_conj__Goal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59);
                }
#line 141 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
#line 141 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));
#line 141 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_60_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_60_60, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 141 "simplify_goal_conj.m"
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 141 "simplify_goal_conj.m"
                  {
#line 141 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_60_60, (MR_Integer) 1)));
#line 141 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__SubGoals1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_60_60, (MR_Integer) 2)));
#line 141 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_61_61 == (MR_Integer) 0);
#line 141 "simplify_goal_conj.m"
                  }
#line 139 "simplify_goal_conj.m"
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 164 "simplify_goal_conj.m"
                  {
#line 164 "simplify_goal_conj.m"
                    MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_74;

#line 164 "simplify_goal_conj.m"
                    {
#line 164 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__Goals1_74 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__SubGoals1_37, check_hlds__simplify__simplify_goal_conj__Goals0_25);
                    }
#line 166 "simplify_goal_conj.m"
                    /* direct tailcall eliminated */
#line 166 "simplify_goal_conj.m"
                    {
#line 166 "simplify_goal_conj.m"
                      MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals1_74;
#line 166 "simplify_goal_conj.m"
                      MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;

#line 166 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9;
#line 166 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
#line 166 "simplify_goal_conj.m"
                    }
#line 166 "simplify_goal_conj.m"
                    continue;
#line 164 "simplify_goal_conj.m"
                  }
#line 139 "simplify_goal_conj.m"
                else
#line 169 "simplify_goal_conj.m"
                  {
#line 169 "simplify_goal_conj.m"
                    MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_39;

#line 169 "simplify_goal_conj.m"
                    {
#line 169 "simplify_goal_conj.m"
                      hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, &check_hlds__simplify__simplify_goal_conj__InstMap1_39);
                    }
#line 179 "simplify_goal_conj.m"
                    {
#line 179 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__simplify__simplify_goal_conj__InstMap1_39);
                    }
#line 180 "simplify_goal_conj.m"
                    if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
#line 181 "simplify_goal_conj.m"
                      {
#line 181 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));
#line 181 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__Detism1_42;
#line 181 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_89_89;
#line 181 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
#line 183 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_43_43;

#line 182 "simplify_goal_conj.m"
                        {
#line 182 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__Detism1_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo1_41);
                        }
#line 183 "simplify_goal_conj.m"
                        {
#line 183 "simplify_goal_conj.m"
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism1_42, &check_hlds__simplify__simplify_goal_conj__V_43_43, &check_hlds__simplify__simplify_goal_conj__V_89_89);
                        }
#line 183 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal_conj__V_89_89);
#line 181 "simplify_goal_conj.m"
                      }
#line 170 "simplify_goal_conj.m"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 186 "simplify_goal_conj.m"
                      {
#line 186 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 186 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66;
#line 186 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76;

#line 186 "simplify_goal_conj.m"
                        {
#line 186 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal1_36)));
                        }
#line 188 "simplify_goal_conj.m"
                        {
#line 188 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
#line 188 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_68_68;
#line 188 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));

#line 188 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_67_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_67_67, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 188 "simplify_goal_conj.m"
                          if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 188 "simplify_goal_conj.m"
                            {
#line 188 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_67_67, (MR_Integer) 1)));
#line 188 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "simplify_goal_conj.m"
                            }
#line 188 "simplify_goal_conj.m"
                        }
#line 189 "simplify_goal_conj.m"
                        if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
#line 189 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Goals0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "simplify_goal_conj.m"
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 187 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66;
#line 187 "simplify_goal_conj.m"
                        else
#line 204 "simplify_goal_conj.m"
                          {
#line 204 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 1)));
#line 204 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__Context_47;
#line 204 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__FailGoal_48;
#line 204 "simplify_goal_conj.m"
                            MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 0)));

#line 205 "simplify_goal_conj.m"
                            {
#line 205 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__Context_47 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_46);
                            }
#line 206 "simplify_goal_conj.m"
                            {
#line 206 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__FailGoal_48 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_47);
                            }
#line 207 "simplify_goal_conj.m"
                            {
#line 207 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_66_66, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__FailGoal_48)));
                            }
#line 204 "simplify_goal_conj.m"
                          }
#line 209 "simplify_goal_conj.m"
                        {
#line 209 "simplify_goal_conj.m"
                          *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_76);
                        }
#line 186 "simplify_goal_conj.m"
                        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;
#line 186 "simplify_goal_conj.m"
                        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58;
#line 186 "simplify_goal_conj.m"
                      }
#line 170 "simplify_goal_conj.m"
                    else
#line 211 "simplify_goal_conj.m"
                      {
#line 211 "simplify_goal_conj.m"
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_77;

#line 211 "simplify_goal_conj.m"
                        {
#line 211 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_77 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal1_36)));
                        }
#line 212 "simplify_goal_conj.m"
                        /* direct tailcall eliminated */
#line 212 "simplify_goal_conj.m"
                        {
#line 212 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0__tmp_copy_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_69_77;
#line 212 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals0_25;
#line 212 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6__tmp_copy_6 = check_hlds__simplify__simplify_goal_conj__InstMap1_39;
#line 212 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0__tmp_copy_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_58_58;
#line 212 "simplify_goal_conj.m"
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_59_59;

#line 212 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9;
#line 212 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0__tmp_copy_7;
#line 212 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__HeadVar__6_6 = check_hlds__simplify__simplify_goal_conj__HeadVar__6__tmp_copy_6;
#line 212 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
#line 212 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0__tmp_copy_1;
#line 212 "simplify_goal_conj.m"
                        }
#line 212 "simplify_goal_conj.m"
                        continue;
#line 211 "simplify_goal_conj.m"
                      }
#line 169 "simplify_goal_conj.m"
                  }
#line 137 "simplify_goal_conj.m"
              }
#line 130 "simplify_goal_conj.m"
          }
#line 127 "simplify_goal_conj.m"
      }
#line 127 "simplify_goal_conj.m"
      break;
#line 127 "simplify_goal_conj.m"
    }
#line 120 "simplify_goal_conj.m"
}

#line 220 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
#line 220 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3)
#line 220 "simplify_goal_conj.m"
{
#line 220 "simplify_goal_conj.m"
  {
#line 220 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 220 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;
#line 220 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5 = check_hlds__simplify__simplify_goal_conj__HeadVar__3_3;

#line 220 "simplify_goal_conj.m"
    {
#line 220 "simplify_goal_conj.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5)));
    }
#line 220 "simplify_goal_conj.m"
  }
#line 220 "simplify_goal_conj.m"
}

#line 220 "simplify_goal_conj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 220 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2)
#line 220 "simplify_goal_conj.m"
{
#line 220 "simplify_goal_conj.m"
  {
#line 220 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 220 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3 = check_hlds__simplify__simplify_goal_conj__HeadVar__1_1;
#line 220 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;

#line 220 "simplify_goal_conj.m"
    {
#line 220 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4)));
    }
#line 220 "simplify_goal_conj.m"
    return check_hlds__simplify__simplify_goal_conj__succeeded;
#line 220 "simplify_goal_conj.m"
  }
#line 220 "simplify_goal_conj.m"
}

#line 439 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
#line 439 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 439 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
#line 439 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7)
#line 439 "simplify_goal_conj.m"
{
#line 443 "simplify_goal_conj.m"
  {
#line 443 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 443 "simplify_goal_conj.m"
    if ((check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "simplify_goal_conj.m"
      {
#line 443 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 443 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6;
#line 443 "simplify_goal_conj.m"
      }
#line 443 "simplify_goal_conj.m"
    else
#line 445 "simplify_goal_conj.m"
      {
#line 445 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 445 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 445 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal_16;
#line 445 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals_17;
#line 445 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_23;
#line 445 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26;
#line 446 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj___Common1_22;

#line 446 "simplify_goal_conj.m"
        {
#line 446 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_14, &check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, &check_hlds__simplify__simplify_goal_conj___Common1_22, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26);
        }
#line 448 "simplify_goal_conj.m"
        {
#line 448 "simplify_goal_conj.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, &check_hlds__simplify__simplify_goal_conj__InstMap1_23);
        }
#line 449 "simplify_goal_conj.m"
        {
#line 449 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_15, &check_hlds__simplify__simplify_goal_conj__Goals_17, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__InstMap1_23, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);
        }
#line 444 "simplify_goal_conj.m"
        {
#line 444 "simplify_goal_conj.m"
          MR_Word base;
#line 444 "simplify_goal_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "simplify_goal_conj.m"
          *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = base;
#line 444 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_16));
#line 444 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_17));
#line 444 "simplify_goal_conj.m"
        }
#line 445 "simplify_goal_conj.m"
      }
#line 443 "simplify_goal_conj.m"
  }
#line 439 "simplify_goal_conj.m"
}

#line 301 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Trace_1,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_2,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_3,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6,
#line 301 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7,
#line 301 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8,
#line 301 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9)
#line 301 "simplify_goal_conj.m"
{
#line 306 "simplify_goal_conj.m"
  while (MR_TRUE)
#line 306 "simplify_goal_conj.m"
    {
#line 306 "simplify_goal_conj.m"
      /* tailcall optimized into a loop */
#line 306 "simplify_goal_conj.m"
      {
#line 306 "simplify_goal_conj.m"
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 306 "simplify_goal_conj.m"
        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "simplify_goal_conj.m"
          {
#line 306 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8;
#line 306 "simplify_goal_conj.m"
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6;
#line 306 "simplify_goal_conj.m"
          }
#line 306 "simplify_goal_conj.m"
        else
#line 308 "simplify_goal_conj.m"
          {
#line 308 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, (MR_Integer) 0)));
#line 308 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, (MR_Integer) 1)));
#line 308 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33;
#line 308 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34;
#line 309 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__Unif_48;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar0_51;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar0_52;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__CanElimRight_56;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__ElimVar_57;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__ReplacementVar_58;
#line 325 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 0)));
#line 326 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 1)));
#line 326 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45;
#line 326 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_46_46;
#line 326 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_47_47;
#line 326 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_49_49;
#line 336 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63;
#line 334 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62;
#line 370 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78;
#line 370 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_61_61;
#line 370 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Name_74;
#line 381 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_75;
#line 381 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__V_77_77;
#line 382 "simplify_goal_conj.m"
            MR_Integer check_hlds__simplify__simplify_goal_conj__V_76_76;
#line 378 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85;
#line 378 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Name_81;
#line 381 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_82;
#line 381 "simplify_goal_conj.m"
            MR_String check_hlds__simplify__simplify_goal_conj__V_84_84;
#line 382 "simplify_goal_conj.m"
            MR_Integer check_hlds__simplify__simplify_goal_conj__V_83_83;

#line 326 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 326 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 326 "simplify_goal_conj.m"
              {
#line 326 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 0)));
#line 326 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 1)));
#line 326 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 2)));
#line 326 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__Unif_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 3)));
#line 326 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 4)));
#line 327 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Unif_48)) == (MR_mktag((MR_Integer) 2)));
#line 327 "simplify_goal_conj.m"
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 327 "simplify_goal_conj.m"
                  {
#line 327 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__LeftVar0_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_48, (MR_Integer) 0)));
#line 327 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__RightVar0_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_48, (MR_Integer) 1)));
#line 330 "simplify_goal_conj.m"
                    {
#line 330 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, check_hlds__simplify__simplify_goal_conj__LeftVar0_51, &check_hlds__simplify__simplify_goal_conj__LeftVar_53);
                    }
#line 331 "simplify_goal_conj.m"
                    {
#line 331 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, check_hlds__simplify__simplify_goal_conj__RightVar0_52, &check_hlds__simplify__simplify_goal_conj__RightVar_54);
                    }
#line 1172 "check_hlds.simplify.simplify_goal_conj.c"
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 336 "simplify_goal_conj.m"
                    {
#line 336 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4, check_hlds__simplify__simplify_goal_conj__RightVar_54);
                    }
#line 335 "simplify_goal_conj.m"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 336 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_56 = (MR_Integer) 0;
#line 335 "simplify_goal_conj.m"
                    else
#line 336 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_56 = (MR_Integer) 1;
#line 1187 "check_hlds.simplify.simplify_goal_conj.c"
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 334 "simplify_goal_conj.m"
                    {
#line 334 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4, check_hlds__simplify__simplify_goal_conj__LeftVar_53);
                    }
#line 1194 "check_hlds.simplify.simplify_goal_conj.c"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 1196 "check_hlds.simplify.simplify_goal_conj.c"
                      {
#line 1198 "check_hlds.simplify.simplify_goal_conj.c"
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__CanElimRight_56 == (MR_Integer) 1);
#line 1200 "check_hlds.simplify.simplify_goal_conj.c"
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 1202 "check_hlds.simplify.simplify_goal_conj.c"
                          {
#line 357 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 358 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 358 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
#line 1210 "check_hlds.simplify.simplify_goal_conj.c"
                          }
#line 1212 "check_hlds.simplify.simplify_goal_conj.c"
                      }
#line 1214 "check_hlds.simplify.simplify_goal_conj.c"
                    else
#line 349 "simplify_goal_conj.m"
                      {
#line 349 "simplify_goal_conj.m"
#line 349 "simplify_goal_conj.m"
                        switch (check_hlds__simplify__simplify_goal_conj__CanElimRight_56) {
#line 349 "simplify_goal_conj.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 349 "simplify_goal_conj.m"
                          case (MR_Integer) 0:
#line 350 "simplify_goal_conj.m"
                            {
#line 352 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 353 "simplify_goal_conj.m"
                              check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 350 "simplify_goal_conj.m"
                            }
#line 349 "simplify_goal_conj.m"
                            break;
#line 349 "simplify_goal_conj.m"
                          case (MR_Integer) 1:
#line 342 "simplify_goal_conj.m"
                            {
#line 378 "simplify_goal_conj.m"
                              MR_String check_hlds__simplify__simplify_goal_conj__Name_67;
#line 381 "simplify_goal_conj.m"
                              MR_String check_hlds__simplify__simplify_goal_conj__Suffix_68;
#line 381 "simplify_goal_conj.m"
                              MR_String check_hlds__simplify__simplify_goal_conj__V_70_70;
#line 382 "simplify_goal_conj.m"
                              MR_Integer check_hlds__simplify__simplify_goal_conj__V_69_69;

#line 379 "simplify_goal_conj.m"
                              {
#line 379 "simplify_goal_conj.m"
                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__LeftVar_53, &check_hlds__simplify__simplify_goal_conj__Name_67);
                              }
#line 378 "simplify_goal_conj.m"
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 378 "simplify_goal_conj.m"
                                {
#line 381 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__V_70_70 = (MR_String) "HeadVar__";
#line 381 "simplify_goal_conj.m"
                                  {
#line 381 "simplify_goal_conj.m"
                                    check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_70_70, &check_hlds__simplify__simplify_goal_conj__Suffix_68, check_hlds__simplify__simplify_goal_conj__Name_67);
                                  }
#line 381 "simplify_goal_conj.m"
                                  if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 382 "simplify_goal_conj.m"
                                    {
#line 382 "simplify_goal_conj.m"
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_68, &check_hlds__simplify__simplify_goal_conj__V_69_69);
                                    }
#line 380 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 378 "simplify_goal_conj.m"
                                }
#line 342 "simplify_goal_conj.m"
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 343 "simplify_goal_conj.m"
                                {
#line 343 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 344 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 343 "simplify_goal_conj.m"
                                }
#line 342 "simplify_goal_conj.m"
                              else
#line 346 "simplify_goal_conj.m"
                                {
#line 346 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
#line 347 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
#line 346 "simplify_goal_conj.m"
                                }
#line 342 "simplify_goal_conj.m"
                            }
#line 349 "simplify_goal_conj.m"
                            break;
#line 349 "simplify_goal_conj.m"
                        }
#line 349 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
#line 349 "simplify_goal_conj.m"
                      }
#line 325 "simplify_goal_conj.m"
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 325 "simplify_goal_conj.m"
                      {
#line 1309 "check_hlds.simplify.simplify_goal_conj.c"
                        check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 364 "simplify_goal_conj.m"
                        {
#line 364 "simplify_goal_conj.m"
                          mercury__map__det_insert_4_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64, check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ElimVar_57)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ReplacementVar_58)), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32);
                        }
#line 370 "simplify_goal_conj.m"
                        {
#line 370 "simplify_goal_conj.m"
                          check_hlds__simplify__simplify_goal_conj__V_61_61 = libs__trace_params__trace_level_needs_meaningful_var_names_1_f_0(check_hlds__simplify__simplify_goal_conj__Trace_1);
                        }
#line 370 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_61_61 == (MR_Integer) 1);
#line 370 "simplify_goal_conj.m"
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 370 "simplify_goal_conj.m"
                          {
#line 371 "simplify_goal_conj.m"
                            check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__TraceOptimized_2 == (MR_Integer) 0);
#line 370 "simplify_goal_conj.m"
                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 370 "simplify_goal_conj.m"
                              {
#line 1333 "check_hlds.simplify.simplify_goal_conj.c"
                                check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 379 "simplify_goal_conj.m"
                                {
#line 379 "simplify_goal_conj.m"
                                  check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__ElimVar_57, &check_hlds__simplify__simplify_goal_conj__Name_74);
                                }
#line 370 "simplify_goal_conj.m"
                                if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 370 "simplify_goal_conj.m"
                                  {
#line 381 "simplify_goal_conj.m"
                                    check_hlds__simplify__simplify_goal_conj__V_77_77 = (MR_String) "HeadVar__";
#line 381 "simplify_goal_conj.m"
                                    {
#line 381 "simplify_goal_conj.m"
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_77_77, &check_hlds__simplify__simplify_goal_conj__Suffix_75, check_hlds__simplify__simplify_goal_conj__Name_74);
                                    }
#line 381 "simplify_goal_conj.m"
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 382 "simplify_goal_conj.m"
                                      {
#line 382 "simplify_goal_conj.m"
                                        check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_75, &check_hlds__simplify__simplify_goal_conj__V_76_76);
                                      }
#line 380 "simplify_goal_conj.m"
                                    check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 370 "simplify_goal_conj.m"
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 370 "simplify_goal_conj.m"
                                      {
#line 1364 "check_hlds.simplify.simplify_goal_conj.c"
                                        check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 379 "simplify_goal_conj.m"
                                        {
#line 379 "simplify_goal_conj.m"
                                          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__ReplacementVar_58, &check_hlds__simplify__simplify_goal_conj__Name_81);
                                        }
#line 378 "simplify_goal_conj.m"
                                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 378 "simplify_goal_conj.m"
                                          {
#line 381 "simplify_goal_conj.m"
                                            check_hlds__simplify__simplify_goal_conj__V_84_84 = (MR_String) "HeadVar__";
#line 381 "simplify_goal_conj.m"
                                            {
#line 381 "simplify_goal_conj.m"
                                              check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_84_84, &check_hlds__simplify__simplify_goal_conj__Suffix_82, check_hlds__simplify__simplify_goal_conj__Name_81);
                                            }
#line 381 "simplify_goal_conj.m"
                                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 382 "simplify_goal_conj.m"
                                              {
#line 382 "simplify_goal_conj.m"
                                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_82, &check_hlds__simplify__simplify_goal_conj__V_83_83);
                                              }
#line 380 "simplify_goal_conj.m"
                                            check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 378 "simplify_goal_conj.m"
                                          }
#line 373 "simplify_goal_conj.m"
                                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 370 "simplify_goal_conj.m"
                                      }
#line 370 "simplify_goal_conj.m"
                                  }
#line 370 "simplify_goal_conj.m"
                              }
#line 370 "simplify_goal_conj.m"
                          }
#line 369 "simplify_goal_conj.m"
                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
#line 325 "simplify_goal_conj.m"
                      }
#line 327 "simplify_goal_conj.m"
                  }
#line 326 "simplify_goal_conj.m"
              }
#line 309 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 313 "simplify_goal_conj.m"
              {
#line 313 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32;
#line 313 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6;
#line 313 "simplify_goal_conj.m"
              }
#line 309 "simplify_goal_conj.m"
            else
#line 315 "simplify_goal_conj.m"
              {
#line 315 "simplify_goal_conj.m"
                {
#line 315 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_24));
#line 315 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6));
#line 315 "simplify_goal_conj.m"
                }
#line 315 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8;
#line 315 "simplify_goal_conj.m"
              }
#line 317 "simplify_goal_conj.m"
            /* direct tailcall eliminated */
#line 317 "simplify_goal_conj.m"
            {
#line 317 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5__tmp_copy_5 = check_hlds__simplify__simplify_goal_conj__Goals_25;
#line 317 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0__tmp_copy_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33;
#line 317 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0__tmp_copy_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34;

#line 317 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0__tmp_copy_8;
#line 317 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0__tmp_copy_6;
#line 317 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__HeadVar__5_5 = check_hlds__simplify__simplify_goal_conj__HeadVar__5__tmp_copy_5;
#line 317 "simplify_goal_conj.m"
            }
#line 317 "simplify_goal_conj.m"
            continue;
#line 308 "simplify_goal_conj.m"
          }
#line 306 "simplify_goal_conj.m"
      }
#line 306 "simplify_goal_conj.m"
      break;
#line 306 "simplify_goal_conj.m"
    }
#line 301 "simplify_goal_conj.m"
}

#line 237 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0_1(
#line 237 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
#line 237 "simplify_goal_conj.m"
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
#line 237 "simplify_goal_conj.m"
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
#line 237 "simplify_goal_conj.m"
{
#line 237 "simplify_goal_conj.m"
  {
#line 237 "simplify_goal_conj.m"
    MR_Box check_hlds__simplify__simplify_goal_conj__closure = check_hlds__simplify__simplify_goal_conj__closure_arg;
#line 237 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_Var_6;

#line 237 "simplify_goal_conj.m"
    {
#line 237 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_conj__conv0_Var_6);
    }
#line 237 "simplify_goal_conj.m"
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_Var_6));
#line 237 "simplify_goal_conj.m"
  }
#line 237 "simplify_goal_conj.m"
}

#line 242 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0(
#line 242 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjInfo_6,
#line 242 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_7,
#line 242 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_8,
#line 242 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27,
#line 242 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28)
#line 242 "simplify_goal_conj.m"
{
#line 246 "simplify_goal_conj.m"
  {
#line 246 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_10;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Subn0_11;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__ModuleInfo_12;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Globals_13;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__TraceLevel_14;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_15;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__VarSet0_16;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__RevGoals_17;
#line 246 "simplify_goal_conj.m"
    MR_Word check_hlds__simplify__simplify_goal_conj__Subn1_18;

#line 247 "simplify_goal_conj.m"
    {
#line 247 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__ConjNonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_conj__ConjInfo_6);
    }
#line 1546 "check_hlds.simplify.simplify_goal_conj.c"
    check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 248 "simplify_goal_conj.m"
    {
#line 248 "simplify_goal_conj.m"
      mercury__map__init_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, &check_hlds__simplify__simplify_goal_conj__Subn0_11);
    }
#line 249 "simplify_goal_conj.m"
    {
#line 249 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27, &check_hlds__simplify__simplify_goal_conj__ModuleInfo_12);
    }
#line 250 "simplify_goal_conj.m"
    {
#line 250 "simplify_goal_conj.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_conj__ModuleInfo_12, &check_hlds__simplify__simplify_goal_conj__Globals_13);
    }
#line 251 "simplify_goal_conj.m"
    {
#line 251 "simplify_goal_conj.m"
      libs__globals__get_trace_level_2_p_0(check_hlds__simplify__simplify_goal_conj__Globals_13, &check_hlds__simplify__simplify_goal_conj__TraceLevel_14);
    }
#line 252 "simplify_goal_conj.m"
    {
#line 252 "simplify_goal_conj.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_conj__Globals_13, (MR_Integer) 121, &check_hlds__simplify__simplify_goal_conj__TraceOptimized_15);
    }
#line 253 "simplify_goal_conj.m"
    {
#line 253 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27, &check_hlds__simplify__simplify_goal_conj__VarSet0_16);
    }
#line 254 "simplify_goal_conj.m"
    {
#line 254 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(check_hlds__simplify__simplify_goal_conj__TraceLevel_14, check_hlds__simplify__simplify_goal_conj__TraceOptimized_15, check_hlds__simplify__simplify_goal_conj__VarSet0_16, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_10, check_hlds__simplify__simplify_goal_conj__Goals0_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_conj__RevGoals_17, check_hlds__simplify__simplify_goal_conj__Subn0_11, &check_hlds__simplify__simplify_goal_conj__Subn1_18);
    }
#line 256 "simplify_goal_conj.m"
    {
#line 256 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__is_empty_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__Subn1_18);
    }
#line 256 "simplify_goal_conj.m"
    if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 257 "simplify_goal_conj.m"
      {
#line 257 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__Goals_8 = check_hlds__simplify__simplify_goal_conj__Goals0_7;
#line 257 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27;
#line 257 "simplify_goal_conj.m"
      }
#line 256 "simplify_goal_conj.m"
    else
#line 259 "simplify_goal_conj.m"
      {
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_19;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Subn_20;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__RemovedVars_21;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_22;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__VarTypes0_23;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__VarTypes_24;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_25;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps_26;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_34_34;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_35_35;
#line 259 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44;

#line 259 "simplify_goal_conj.m"
        {
#line 259 "simplify_goal_conj.m"
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__RevGoals_17, &check_hlds__simplify__simplify_goal_conj__Goals1_19);
        }
#line 237 "simplify_goal_conj.m"
        {
#line 237 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 237 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[0]));
#line 237 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0_1));
#line 237 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "simplify_goal_conj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Subn1_18));
#line 237 "simplify_goal_conj.m"
        }
#line 1652 "check_hlds.simplify.simplify_goal_conj.c"
        check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 237 "simplify_goal_conj.m"
        {
#line 237 "simplify_goal_conj.m"
          mercury__map__map_values_only_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47, check_hlds__simplify__simplify_goal_conj__V_44_44, check_hlds__simplify__simplify_goal_conj__Subn1_18, &check_hlds__simplify__simplify_goal_conj__Subn_20);
        }
#line 285 "simplify_goal_conj.m"
        {
#line 285 "simplify_goal_conj.m"
          hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_conj__Subn_20, check_hlds__simplify__simplify_goal_conj__Goals1_19, check_hlds__simplify__simplify_goal_conj__Goals_8);
        }
#line 286 "simplify_goal_conj.m"
        {
#line 286 "simplify_goal_conj.m"
          mercury__map__keys_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__Subn0_11, &check_hlds__simplify__simplify_goal_conj__RemovedVars_21);
        }
#line 288 "simplify_goal_conj.m"
        {
#line 288 "simplify_goal_conj.m"
          mercury__varset__delete_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__RemovedVars_21, check_hlds__simplify__simplify_goal_conj__VarSet0_16, &check_hlds__simplify__simplify_goal_conj__VarSet_22);
        }
#line 289 "simplify_goal_conj.m"
        {
#line 289 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_conj__VarSet_22, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32);
        }
#line 291 "simplify_goal_conj.m"
        {
#line 291 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32, &check_hlds__simplify__simplify_goal_conj__VarTypes0_23);
        }
#line 292 "simplify_goal_conj.m"
        {
#line 292 "simplify_goal_conj.m"
          hlds__vartypes__delete_var_types_3_p_0(check_hlds__simplify__simplify_goal_conj__RemovedVars_21, check_hlds__simplify__simplify_goal_conj__VarTypes0_23, &check_hlds__simplify__simplify_goal_conj__VarTypes_24);
        }
#line 293 "simplify_goal_conj.m"
        {
#line 293 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_conj__VarTypes_24, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33);
        }
#line 295 "simplify_goal_conj.m"
        {
#line 295 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_25);
        }
#line 1699 "check_hlds.simplify.simplify_goal_conj.c"
        check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[1];
#line 296 "simplify_goal_conj.m"
        {
#line 296 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__V_34_34 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40, check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40);
        }
#line 296 "simplify_goal_conj.m"
        {
#line 296 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__V_35_35 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 296 "simplify_goal_conj.m"
        {
#line 296 "simplify_goal_conj.m"
          hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_goal_conj__V_34_34, check_hlds__simplify__simplify_goal_conj__V_35_35, check_hlds__simplify__simplify_goal_conj__Subn_20, check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_25, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps_26);
        }
#line 298 "simplify_goal_conj.m"
        {
#line 298 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_conj__RttiVarMaps_26, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28);
        }
#line 259 "simplify_goal_conj.m"
      }
#line 246 "simplify_goal_conj.m"
  }
#line 242 "simplify_goal_conj.m"
}

#line 222 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
#line 222 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
#line 222 "simplify_goal_conj.m"
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
#line 222 "simplify_goal_conj.m"
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6)
#line 222 "simplify_goal_conj.m"
{
#line 225 "simplify_goal_conj.m"
  while (MR_TRUE)
#line 225 "simplify_goal_conj.m"
    {
#line 225 "simplify_goal_conj.m"
      /* tailcall optimized into a loop */
#line 225 "simplify_goal_conj.m"
      {
#line 225 "simplify_goal_conj.m"
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
#line 225 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Var1_7;
#line 225 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
#line 225 "simplify_goal_conj.m"
        MR_Box check_hlds__simplify__simplify_goal_conj__conv0_Var1_7;

#line 225 "simplify_goal_conj.m"
        {
#line 225 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__Subn_4, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Var0_5)), &check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
        }
#line 225 "simplify_goal_conj.m"
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 225 "simplify_goal_conj.m"
          {
#line 225 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__Var1_7 = ((MR_Word) check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
#line 225 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
#line 225 "simplify_goal_conj.m"
          }
#line 225 "simplify_goal_conj.m"
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 226 "simplify_goal_conj.m"
          {
#line 226 "simplify_goal_conj.m"
            /* direct tailcall eliminated */
#line 226 "simplify_goal_conj.m"
            {
#line 226 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__Var0__tmp_copy_5 = check_hlds__simplify__simplify_goal_conj__Var1_7;

#line 226 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__Var0_5 = check_hlds__simplify__simplify_goal_conj__Var0__tmp_copy_5;
#line 226 "simplify_goal_conj.m"
            }
#line 226 "simplify_goal_conj.m"
            continue;
#line 226 "simplify_goal_conj.m"
          }
#line 225 "simplify_goal_conj.m"
        else
#line 228 "simplify_goal_conj.m"
          *check_hlds__simplify__simplify_goal_conj__Var_6 = check_hlds__simplify__simplify_goal_conj__Var0_5;
#line 225 "simplify_goal_conj.m"
      }
#line 225 "simplify_goal_conj.m"
      break;
#line 225 "simplify_goal_conj.m"
    }
#line 222 "simplify_goal_conj.m"
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
#line 391 "simplify_goal_conj.m"
  {
#line 391 "simplify_goal_conj.m"
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

#line 391 "simplify_goal_conj.m"
    if ((check_hlds__simplify__simplify_goal_conj__Goals0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "simplify_goal_conj.m"
      {
#line 391 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__Context_19;
#line 391 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_43_43;

#line 392 "simplify_goal_conj.m"
        {
#line 392 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
#line 393 "simplify_goal_conj.m"
        {
#line 393 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__V_43_43 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_19);
        }
#line 393 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_43_43, (MR_Integer) 0)));
#line 393 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_43_43, (MR_Integer) 1)));
#line 391 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
#line 391 "simplify_goal_conj.m"
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29;
#line 391 "simplify_goal_conj.m"
      }
#line 391 "simplify_goal_conj.m"
    else
#line 391 "simplify_goal_conj.m"
      {
#line 391 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
#line 391 "simplify_goal_conj.m"
        MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));

#line 391 "simplify_goal_conj.m"
        if ((check_hlds__simplify__simplify_goal_conj__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "simplify_goal_conj.m"
          {
#line 395 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoal_21;
#line 395 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22;
#line 395 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__V_39_39;
#line 395 "simplify_goal_conj.m"
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41;

#line 396 "simplify_goal_conj.m"
            {
#line 396 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__V_45_45, &check_hlds__simplify__simplify_goal_conj__V_39_39, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41);
            }
#line 396 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__SingleGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_39_39, (MR_Integer) 0)));
#line 396 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_39_39, (MR_Integer) 1)));
#line 398 "simplify_goal_conj.m"
            {
#line 398 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22, check_hlds__simplify__simplify_goal_conj__SingleGoal_21, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
            }
#line 395 "simplify_goal_conj.m"
          }
#line 391 "simplify_goal_conj.m"
        else
#line 402 "simplify_goal_conj.m"
          {
#line 402 "simplify_goal_conj.m"
            {
#line 402 "simplify_goal_conj.m"
              check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29);
            }
#line 402 "simplify_goal_conj.m"
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
#line 403 "simplify_goal_conj.m"
              {
#line 403 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_11, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
              }
#line 402 "simplify_goal_conj.m"
            else
#line 406 "simplify_goal_conj.m"
              {
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_26;
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34;
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_52;
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_53;
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal_54;
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_55;
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_61;
#line 406 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64;
#line 446 "simplify_goal_conj.m"
                MR_Word check_hlds__simplify__simplify_goal_conj___Common1_60;

#line 406 "simplify_goal_conj.m"
                *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
#line 444 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__Goal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));
#line 444 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__Goals0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
#line 446 "simplify_goal_conj.m"
                {
#line 446 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_52, &check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__simplify_goal_conj___Common1_60, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64);
                }
#line 448 "simplify_goal_conj.m"
                {
#line 448 "simplify_goal_conj.m"
                  hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__InstMap0_16, &check_hlds__simplify__simplify_goal_conj__InstMap1_61);
                }
#line 449 "simplify_goal_conj.m"
                {
#line 449 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_53, &check_hlds__simplify__simplify_goal_conj__Goals_55, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap1_61, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34);
                }
#line 444 "simplify_goal_conj.m"
                {
#line 444 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__Goals_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_54));
#line 444 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_55));
#line 444 "simplify_goal_conj.m"
                }
#line 409 "simplify_goal_conj.m"
                {
#line 409 "simplify_goal_conj.m"
                  MR_Word base;
#line 409 "simplify_goal_conj.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 409 "simplify_goal_conj.m"
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
#line 409 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 409 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 409 "simplify_goal_conj.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_26));
#line 409 "simplify_goal_conj.m"
                }
#line 410 "simplify_goal_conj.m"
                {
#line 410 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
                }
#line 406 "simplify_goal_conj.m"
                *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
#line 406 "simplify_goal_conj.m"
              }
#line 402 "simplify_goal_conj.m"
          }
#line 391 "simplify_goal_conj.m"
      }
#line 391 "simplify_goal_conj.m"
  }
#line 36 "simplify_goal_conj.m"
}

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 113 "simplify_goal_conj.m"
{
#line 113 "simplify_goal_conj.m"
  {
#line 113 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 113 "simplify_goal_conj.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__commit_0, 1);
#line 113 "simplify_goal_conj.m"
  }
#line 113 "simplify_goal_conj.m"
}

#line 114 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_3(
#line 114 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 114 "simplify_goal_conj.m"
{
#line 114 "simplify_goal_conj.m"
  {
#line 114 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 114 "simplify_goal_conj.m"
    (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61 = ((MR_Word) (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__conv0_V_61_61);
#line 114 "simplify_goal_conj.m"
    {
#line 114 "simplify_goal_conj.m"
      check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_2(check_hlds__simplify__simplify_goal_conj__env_ptr);
    }
#line 114 "simplify_goal_conj.m"
  }
#line 114 "simplify_goal_conj.m"
}

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_2(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 113 "simplify_goal_conj.m"
{
#line 113 "simplify_goal_conj.m"
  {
#line 113 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 113 "simplify_goal_conj.m"
    {
#line 114 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj___GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61, (MR_Integer) 0)));
#line 116 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj__V_60_60;

#line 114 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__GoalInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61, (MR_Integer) 1)));
#line 115 "simplify_goal_conj.m"
      {
#line 115 "simplify_goal_conj.m"
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Detism_59 = hlds__hlds_goal__goal_info_get_determinism_1_f_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__GoalInfo_58);
      }
#line 116 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_62_62 = (MR_Integer) 3;
#line 116 "simplify_goal_conj.m"
      {
#line 116 "simplify_goal_conj.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Detism_59, &check_hlds__simplify__simplify_goal_conj__V_60_60, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_64_64);
      }
#line 116 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_62_62 == (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_64_64);
#line 116 "simplify_goal_conj.m"
      if ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
#line 116 "simplify_goal_conj.m"
        {
#line 116 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(check_hlds__simplify__simplify_goal_conj__env_ptr);
        }
#line 113 "simplify_goal_conj.m"
    }
#line 113 "simplify_goal_conj.m"
  }
#line 113 "simplify_goal_conj.m"
}

#line 113 "simplify_goal_conj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_4(
#line 113 "simplify_goal_conj.m"
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
#line 113 "simplify_goal_conj.m"
{
#line 113 "simplify_goal_conj.m"
  {
#line 113 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

#line 113 "simplify_goal_conj.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__commit_0) == 0)
#line 113 "simplify_goal_conj.m"
      {
#line 113 "simplify_goal_conj.m"
        {
#line 114 "simplify_goal_conj.m"
          {
#line 114 "simplify_goal_conj.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__conv0_V_61_61, (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_3, check_hlds__simplify__simplify_goal_conj__env_ptr);
          }
#line 113 "simplify_goal_conj.m"
        }
#line 113 "simplify_goal_conj.m"
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = MR_FALSE;
#line 113 "simplify_goal_conj.m"
      }
#line 113 "simplify_goal_conj.m"
    else
#line 113 "simplify_goal_conj.m"
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = MR_TRUE;
#line 113 "simplify_goal_conj.m"
  }
#line 113 "simplify_goal_conj.m"
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
#line 28 "simplify_goal_conj.m"
  {
#line 28 "simplify_goal_conj.m"
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s check_hlds__simplify__simplify_goal_conj__env;

#line 69 "simplify_goal_conj.m"
    {
#line 69 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_19;
#line 69 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37;
#line 69 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj__V_38_38;
#line 69 "simplify_goal_conj.m"
      MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;

#line 70 "simplify_goal_conj.m"
      {
#line 70 "simplify_goal_conj.m"
        (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35);
      }
#line 70 "simplify_goal_conj.m"
      if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
#line 71 "simplify_goal_conj.m"
        {
#line 71 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__Goals0_11, &check_hlds__simplify__simplify_goal_conj__Goals1_19, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37);
        }
#line 70 "simplify_goal_conj.m"
      else
#line 73 "simplify_goal_conj.m"
        {
#line 73 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__Goals1_19 = check_hlds__simplify__simplify_goal_conj__Goals0_11;
#line 73 "simplify_goal_conj.m"
          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35;
#line 73 "simplify_goal_conj.m"
        }
#line 75 "simplify_goal_conj.m"
      {
#line 75 "simplify_goal_conj.m"
        check_hlds__simplify__simplify_goal_conj__V_38_38 = mercury__cord__empty_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
      }
#line 75 "simplify_goal_conj.m"
      {
#line 75 "simplify_goal_conj.m"
        check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_conj__V_38_38, check_hlds__simplify__simplify_goal_conj__Goals1_19, &(check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_33, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
      }
#line 81 "simplify_goal_conj.m"
      if (((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 78 "simplify_goal_conj.m"
        {
#line 78 "simplify_goal_conj.m"
          MR_Word check_hlds__simplify__simplify_goal_conj__Context_21;
#line 78 "simplify_goal_conj.m"
          MR_Word check_hlds__simplify__simplify_goal_conj__V_51_51;

#line 79 "simplify_goal_conj.m"
          {
#line 79 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
          }
#line 80 "simplify_goal_conj.m"
          {
#line 80 "simplify_goal_conj.m"
            check_hlds__simplify__simplify_goal_conj__V_51_51 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_21);
          }
#line 80 "simplify_goal_conj.m"
          *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_51_51, (MR_Integer) 0)));
#line 80 "simplify_goal_conj.m"
          *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_51_51, (MR_Integer) 1)));
#line 78 "simplify_goal_conj.m"
          *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
#line 78 "simplify_goal_conj.m"
        }
#line 81 "simplify_goal_conj.m"
      else
#line 81 "simplify_goal_conj.m"
        {
#line 81 "simplify_goal_conj.m"
          MR_Word check_hlds__simplify__simplify_goal_conj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, (MR_Integer) 1)));
#line 81 "simplify_goal_conj.m"
          MR_Word check_hlds__simplify__simplify_goal_conj__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, (MR_Integer) 0)));

#line 81 "simplify_goal_conj.m"
          if ((check_hlds__simplify__simplify_goal_conj__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 82 "simplify_goal_conj.m"
            {
#line 82 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_55_55, (MR_Integer) 0)));
#line 82 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_55_55, (MR_Integer) 1)));

#line 85 "simplify_goal_conj.m"
              {
#line 85 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24, check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36);
              }
#line 82 "simplify_goal_conj.m"
            }
#line 81 "simplify_goal_conj.m"
          else
#line 88 "simplify_goal_conj.m"
            {
#line 88 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__Detism_28;
#line 96 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__CanFail_29;
#line 97 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__V_42_42;
#line 97 "simplify_goal_conj.m"
              MR_Word check_hlds__simplify__simplify_goal_conj__V_53_53;

#line 95 "simplify_goal_conj.m"
              {
#line 95 "simplify_goal_conj.m"
                check_hlds__simplify__simplify_goal_conj__Detism_28 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
              }
#line 97 "simplify_goal_conj.m"
              {
#line 97 "simplify_goal_conj.m"
                (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
              }
#line 97 "simplify_goal_conj.m"
              if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
#line 97 "simplify_goal_conj.m"
                {
#line 98 "simplify_goal_conj.m"
                  check_hlds__simplify__simplify_goal_conj__V_42_42 = (MR_Integer) 0;
#line 98 "simplify_goal_conj.m"
                  {
#line 98 "simplify_goal_conj.m"
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism_28, &check_hlds__simplify__simplify_goal_conj__CanFail_29, &check_hlds__simplify__simplify_goal_conj__V_53_53);
                  }
#line 98 "simplify_goal_conj.m"
                  (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_conj__V_42_42 == check_hlds__simplify__simplify_goal_conj__V_53_53);
#line 97 "simplify_goal_conj.m"
                  if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
#line 113 "simplify_goal_conj.m"
                    {
#line 113 "simplify_goal_conj.m"
                      check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_4(&check_hlds__simplify__simplify_goal_conj__env);
                    }
#line 97 "simplify_goal_conj.m"
                }
#line 96 "simplify_goal_conj.m"
              if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
#line 101 "simplify_goal_conj.m"
                {
#line 101 "simplify_goal_conj.m"
                  MR_Word check_hlds__simplify__simplify_goal_conj__InnerDetism_30;
#line 101 "simplify_goal_conj.m"
                  MR_Word check_hlds__simplify__simplify_goal_conj__InnerInfo_31;
#line 101 "simplify_goal_conj.m"
                  MR_Word check_hlds__simplify__simplify_goal_conj__InnerGoal_32;
#line 101 "simplify_goal_conj.m"
                  MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44;

#line 101 "simplify_goal_conj.m"
                  {
#line 101 "simplify_goal_conj.m"
                    parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__CanFail_29, (MR_Integer) 3);
                  }
#line 102 "simplify_goal_conj.m"
                  {
#line 102 "simplify_goal_conj.m"
                    hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, &check_hlds__simplify__simplify_goal_conj__InnerInfo_31);
                  }
#line 103 "simplify_goal_conj.m"
                  {
#line 103 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 103 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 103 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 103 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 2) = ((MR_Box) ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20));
#line 103 "simplify_goal_conj.m"
                  }
#line 103 "simplify_goal_conj.m"
                  {
#line 103 "simplify_goal_conj.m"
                    check_hlds__simplify__simplify_goal_conj__InnerGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 103 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__V_44_44));
#line 103 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerInfo_31));
#line 103 "simplify_goal_conj.m"
                  }
#line 104 "simplify_goal_conj.m"
                  {
#line 104 "simplify_goal_conj.m"
                    MR_Word base;
#line 104 "simplify_goal_conj.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 104 "simplify_goal_conj.m"
                    *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
#line 104 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 104 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_conj_scalar_common_1[2])));
#line 104 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerGoal_32));
#line 104 "simplify_goal_conj.m"
                  }
#line 101 "simplify_goal_conj.m"
                }
#line 96 "simplify_goal_conj.m"
              else
#line 106 "simplify_goal_conj.m"
                {
#line 106 "simplify_goal_conj.m"
                  {
#line 106 "simplify_goal_conj.m"
                    MR_Word base;
#line 106 "simplify_goal_conj.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 106 "simplify_goal_conj.m"
                    *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
#line 106 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 106 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 106 "simplify_goal_conj.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20));
#line 106 "simplify_goal_conj.m"
                  }
#line 106 "simplify_goal_conj.m"
                }
#line 108 "simplify_goal_conj.m"
              *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
#line 88 "simplify_goal_conj.m"
              *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
#line 88 "simplify_goal_conj.m"
            }
#line 81 "simplify_goal_conj.m"
        }
#line 69 "simplify_goal_conj.m"
    }
#line 28 "simplify_goal_conj.m"
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
