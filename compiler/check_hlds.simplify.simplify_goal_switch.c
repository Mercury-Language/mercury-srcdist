/*
** Automatically generated from `simplify_goal_switch.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module check_hlds.simplify.simplify_goal_switch. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_switch__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_switch.mih"


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
#include "require.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0;

#line 150 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1;

#line 153 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_value_ordered_seen_non_ground_term_0[2];

#line 156 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0[2];

#line 159 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_Integer check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0[2];

#line 162 "check_hlds.simplify.simplify_goal_switch.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
#line 165 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 167 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2);

#line 170 "check_hlds.simplify.simplify_goal_switch.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
#line 173 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 175 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2,
#line 177 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_3);

#line 278 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__278__1_2_p_0(
#line 278 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__1_44,
#line 278 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__HeadVar__2_45);

#line 189 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
#line 189 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__HeadVar__1_1,
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__3_3);

#line 189 "simplify_goal_switch.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_1,
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2);

#line 278 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1(
#line 278 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__closure_arg,
#line 278 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 278 "simplify_goal_switch.m"
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_2);

#line 256 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_8,
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__ConsId_9,
#line 256 "simplify_goal_switch.m"
  MR_Integer check_hlds__simplify__simplify_goal_switch__ConsArity_10,
#line 256 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__ExtraGoal_11,
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__InstMap0_12,
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37,
#line 256 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_38);

#line 193 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_1,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_4,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_6,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_8,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_10,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__11_11,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__12_12,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__13_13,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_15);

#line 67 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0_1(
#line 67 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__closure_arg,
#line 67 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 67 "simplify_goal_switch.m"
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_2);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[1][6];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_4[1][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_2[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_4[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



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



#line 347 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0 = {
  (MR_String) "not_seen_non_ground_term",
  (MR_Integer) 0
};

#line 353 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1 = {
  (MR_String) "seen_non_ground_term",
  (MR_Integer) 1
};

#line 359 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_value_ordered_seen_non_ground_term_0[2] = {
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0,
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1
};

#line 365 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0[2] = {
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0,
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1
};

#line 371 "check_hlds.simplify.simplify_goal_switch.c"
static const MR_Integer check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 377 "check_hlds.simplify.simplify_goal_switch.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__type_ctor_info_seen_non_ground_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_switch",
  (MR_String) "seen_non_ground_term",
  {     check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0 },
  {     check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_value_ordered_seen_non_ground_term_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0
};

#line 394 "check_hlds.simplify.simplify_goal_switch.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
#line 397 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 399 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2)
#line 401 "check_hlds.simplify.simplify_goal_switch.c"
{
#line 403 "check_hlds.simplify.simplify_goal_switch.c"
  {
#line 405 "check_hlds.simplify.simplify_goal_switch.c"
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;

#line 408 "check_hlds.simplify.simplify_goal_switch.c"
    {
#line 410 "check_hlds.simplify.simplify_goal_switch.c"
      check_hlds__simplify__simplify_goal_switch__succeeded = check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_2));
    }
#line 413 "check_hlds.simplify.simplify_goal_switch.c"
    return check_hlds__simplify__simplify_goal_switch__succeeded;
#line 415 "check_hlds.simplify.simplify_goal_switch.c"
  }
#line 417 "check_hlds.simplify.simplify_goal_switch.c"
}

#line 420 "check_hlds.simplify.simplify_goal_switch.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
#line 423 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 425 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2,
#line 427 "check_hlds.simplify.simplify_goal_switch.c"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_3)
#line 429 "check_hlds.simplify.simplify_goal_switch.c"
{
#line 431 "check_hlds.simplify.simplify_goal_switch.c"
  {
#line 433 "check_hlds.simplify.simplify_goal_switch.c"
    MR_Word check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__1_1;

#line 436 "check_hlds.simplify.simplify_goal_switch.c"
    {
#line 438 "check_hlds.simplify.simplify_goal_switch.c"
      check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(&check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_3));
    }
#line 441 "check_hlds.simplify.simplify_goal_switch.c"
    *check_hlds__simplify__simplify_goal_switch__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__1_1));
#line 443 "check_hlds.simplify.simplify_goal_switch.c"
  }
#line 445 "check_hlds.simplify.simplify_goal_switch.c"
}

#line 278 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__278__1_2_p_0(
#line 278 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__1_44,
#line 278 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__HeadVar__2_45)
#line 278 "simplify_goal_switch.m"
{
#line 278 "simplify_goal_switch.m"
  {
#line 278 "simplify_goal_switch.m"
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
#line 278 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__V_46_46;
#line 278 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__V_48_48;

#line 280 "simplify_goal_switch.m"
    {
#line 280 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_46_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__HeadVar__1_44));
#line 280 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "simplify_goal_switch.m"
    }
#line 280 "simplify_goal_switch.m"
    {
#line 280 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_48_48, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__HeadVar__1_44));
#line 280 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_48_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__HeadVar__1_44));
#line 280 "simplify_goal_switch.m"
    }
#line 280 "simplify_goal_switch.m"
    {
#line 280 "simplify_goal_switch.m"
      MR_Word base;
#line 280 "simplify_goal_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "simplify_goal_switch.m"
      *check_hlds__simplify__simplify_goal_switch__HeadVar__2_45 = base;
#line 280 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__V_46_46));
#line 280 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__V_48_48));
#line 280 "simplify_goal_switch.m"
    }
#line 278 "simplify_goal_switch.m"
  }
#line 278 "simplify_goal_switch.m"
}

#line 189 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
#line 189 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__HeadVar__1_1,
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__3_3)
#line 189 "simplify_goal_switch.m"
{
#line 189 "simplify_goal_switch.m"
  {
#line 189 "simplify_goal_switch.m"
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
#line 189 "simplify_goal_switch.m"
    MR_Integer check_hlds__simplify__simplify_goal_switch__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__simplify_goal_switch__HeadVar__2_2;
#line 189 "simplify_goal_switch.m"
    MR_Integer check_hlds__simplify__simplify_goal_switch__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__simplify_goal_switch__HeadVar__3_3;

#line 189 "simplify_goal_switch.m"
    {
#line 189 "simplify_goal_switch.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_goal_switch__HeadVar__1_1, check_hlds__simplify__simplify_goal_switch__Cast_HeadVar1_4, check_hlds__simplify__simplify_goal_switch__Cast_HeadVar2_5);
#line 189 "simplify_goal_switch.m"
      return;
    }
#line 189 "simplify_goal_switch.m"
  }
#line 189 "simplify_goal_switch.m"
}

#line 189 "simplify_goal_switch.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_1,
#line 189 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2)
#line 189 "simplify_goal_switch.m"
{
#line 546 "check_hlds.simplify.simplify_goal_switch.c"
  {
#line 548 "check_hlds.simplify.simplify_goal_switch.c"
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__HeadVar__2_1 == check_hlds__simplify__simplify_goal_switch__HeadVar__2_2);

#line 551 "check_hlds.simplify.simplify_goal_switch.c"
    return check_hlds__simplify__simplify_goal_switch__succeeded;
#line 553 "check_hlds.simplify.simplify_goal_switch.c"
  }
#line 189 "simplify_goal_switch.m"
}

#line 278 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1(
#line 278 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__closure_arg,
#line 278 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 278 "simplify_goal_switch.m"
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_2)
#line 278 "simplify_goal_switch.m"
{
#line 278 "simplify_goal_switch.m"
  {
#line 278 "simplify_goal_switch.m"
    MR_Box check_hlds__simplify__simplify_goal_switch__closure = check_hlds__simplify__simplify_goal_switch__closure_arg;
#line 278 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__2_45;

#line 278 "simplify_goal_switch.m"
    {
#line 278 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__278__1_2_p_0(((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_1), &check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__2_45);
    }
#line 278 "simplify_goal_switch.m"
    *check_hlds__simplify__simplify_goal_switch__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__2_45));
#line 278 "simplify_goal_switch.m"
  }
#line 278 "simplify_goal_switch.m"
}

#line 256 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_8,
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__ConsId_9,
#line 256 "simplify_goal_switch.m"
  MR_Integer check_hlds__simplify__simplify_goal_switch__ConsArity_10,
#line 256 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__ExtraGoal_11,
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__InstMap0_12,
#line 256 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37,
#line 256 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_38)
#line 256 "simplify_goal_switch.m"
{
#line 259 "simplify_goal_switch.m"
  {
#line 259 "simplify_goal_switch.m"
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__VarSet0_14;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes0_15;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgVars_16;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__VarSet_17;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__VarType_18;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo_19;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgTypes_20;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes_21;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__Inst0_22;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgInsts_25;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__UniModes_29;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__UniMode_30;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__Unification_32;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_34;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta_35;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ExtraGoalInfo_36;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_39_39;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__V_50_50;
#line 259 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__V_58_58;
#line 275 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgInsts1_24;
#line 271 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__Inst1_23;

#line 260 "simplify_goal_switch.m"
    {
#line 260 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__VarSet0_14);
    }
#line 261 "simplify_goal_switch.m"
    {
#line 261 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__VarTypes0_15);
    }
#line 668 "check_hlds.simplify.simplify_goal_switch.c"
    check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 262 "simplify_goal_switch.m"
    {
#line 262 "simplify_goal_switch.m"
      mercury__varset__new_vars_4_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_switch__ConsArity_10, &check_hlds__simplify__simplify_goal_switch__ArgVars_16, check_hlds__simplify__simplify_goal_switch__VarSet0_14, &check_hlds__simplify__simplify_goal_switch__VarSet_17);
    }
#line 263 "simplify_goal_switch.m"
    {
#line 263 "simplify_goal_switch.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes0_15, check_hlds__simplify__simplify_goal_switch__Var_8, &check_hlds__simplify__simplify_goal_switch__VarType_18);
    }
#line 264 "simplify_goal_switch.m"
    {
#line 264 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__ModuleInfo_19);
    }
#line 265 "simplify_goal_switch.m"
    {
#line 265 "simplify_goal_switch.m"
      check_hlds__type_util__get_cons_id_arg_types_4_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_19, check_hlds__simplify__simplify_goal_switch__VarType_18, check_hlds__simplify__simplify_goal_switch__ConsId_9, &check_hlds__simplify__simplify_goal_switch__ArgTypes_20);
    }
#line 266 "simplify_goal_switch.m"
    {
#line 266 "simplify_goal_switch.m"
      parse_tree__prog_data__vartypes_add_corresponding_lists_4_p_0(check_hlds__simplify__simplify_goal_switch__ArgVars_16, check_hlds__simplify__simplify_goal_switch__ArgTypes_20, check_hlds__simplify__simplify_goal_switch__VarTypes0_15, &check_hlds__simplify__simplify_goal_switch__VarTypes_21);
    }
#line 267 "simplify_goal_switch.m"
    {
#line 267 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_switch__VarSet_17, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_39_39);
    }
#line 268 "simplify_goal_switch.m"
    {
#line 268 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_21, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_39_39, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_38);
    }
#line 269 "simplify_goal_switch.m"
    {
#line 269 "simplify_goal_switch.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_12, check_hlds__simplify__simplify_goal_switch__Var_8, &check_hlds__simplify__simplify_goal_switch__Inst0_22);
    }
#line 271 "simplify_goal_switch.m"
    {
#line 271 "simplify_goal_switch.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_19, check_hlds__simplify__simplify_goal_switch__Inst0_22, &check_hlds__simplify__simplify_goal_switch__Inst1_23);
    }
#line 272 "simplify_goal_switch.m"
    {
#line 272 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(check_hlds__simplify__simplify_goal_switch__Inst1_23, check_hlds__simplify__simplify_goal_switch__ConsId_9, check_hlds__simplify__simplify_goal_switch__ConsArity_10, &check_hlds__simplify__simplify_goal_switch__ArgInsts1_24);
    }
#line 275 "simplify_goal_switch.m"
    if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 274 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__ArgInsts_25 = check_hlds__simplify__simplify_goal_switch__ArgInsts1_24;
#line 275 "simplify_goal_switch.m"
    else
#line 276 "simplify_goal_switch.m"
      {
#line 276 "simplify_goal_switch.m"
        {
#line 276 "simplify_goal_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_switch", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_switch.create_test_unification\'/7", (MR_String) "get_arg_insts failed");
#line 276 "simplify_goal_switch.m"
          return;
        }
#line 276 "simplify_goal_switch.m"
      }
#line 282 "simplify_goal_switch.m"
    {
#line 282 "simplify_goal_switch.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &check_hlds__simplify__simplify_goal_switch_scalar_common_3[0], check_hlds__simplify__simplify_goal_switch__ArgInsts_25, &check_hlds__simplify__simplify_goal_switch__UniModes_29);
    }
#line 283 "simplify_goal_switch.m"
    {
#line 283 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Inst0_22));
#line 283 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Inst0_22));
#line 283 "simplify_goal_switch.m"
    }
#line 283 "simplify_goal_switch.m"
    {
#line 283 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__UniMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__UniMode_30, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__V_50_50));
#line 283 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__UniMode_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__V_50_50));
#line 283 "simplify_goal_switch.m"
    }
#line 285 "simplify_goal_switch.m"
    {
#line 285 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__Unification_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 285 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_8));
#line 285 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ConsId_9));
#line 285 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ArgVars_16));
#line 285 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__UniModes_29));
#line 285 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 4) = ((MR_Box) ((MR_Integer) 0));
#line 285 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 5) = ((MR_Box) ((MR_Integer) 1));
#line 285 "simplify_goal_switch.m"
    }
#line 288 "simplify_goal_switch.m"
    {
#line 288 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 288 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ConsId_9));
#line 288 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 288 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__V_58_58, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ArgVars_16));
#line 288 "simplify_goal_switch.m"
    }
#line 287 "simplify_goal_switch.m"
    {
#line 287 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 287 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_8));
#line 287 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__V_58_58));
#line 287 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__UniMode_30));
#line 287 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Unification_32));
#line 287 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_4[0]));
#line 287 "simplify_goal_switch.m"
    }
#line 290 "simplify_goal_switch.m"
    {
#line 290 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__NonLocals_34 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_switch__Var_8);
    }
#line 293 "simplify_goal_switch.m"
    {
#line 293 "simplify_goal_switch.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__simplify__simplify_goal_switch__InstMapDelta_35);
    }
#line 294 "simplify_goal_switch.m"
    {
#line 294 "simplify_goal_switch.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_switch__NonLocals_34, check_hlds__simplify__simplify_goal_switch__InstMapDelta_35, (MR_Integer) 1, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_switch__ExtraGoalInfo_36);
    }
#line 296 "simplify_goal_switch.m"
    {
#line 296 "simplify_goal_switch.m"
      MR_Word base;
#line 296 "simplify_goal_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "simplify_goal_switch.m"
      *check_hlds__simplify__simplify_goal_switch__ExtraGoal_11 = base;
#line 296 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33));
#line 296 "simplify_goal_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ExtraGoalInfo_36));
#line 296 "simplify_goal_switch.m"
    }
#line 259 "simplify_goal_switch.m"
  }
#line 256 "simplify_goal_switch.m"
}

#line 193 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_1,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_4,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_6,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_8,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_10,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__11_11,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__12_12,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__13_13,
#line 193 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14,
#line 193 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_15)
#line 193 "simplify_goal_switch.m"
{
#line 199 "simplify_goal_switch.m"
  while (MR_TRUE)
#line 199 "simplify_goal_switch.m"
    {
#line 199 "simplify_goal_switch.m"
      /* tailcall optimized into a loop */
#line 199 "simplify_goal_switch.m"
      {
#line 199 "simplify_goal_switch.m"
        MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;

#line 199 "simplify_goal_switch.m"
        if ((check_hlds__simplify__simplify_goal_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "simplify_goal_switch.m"
          {
#line 201 "simplify_goal_switch.m"
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_15 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14;
#line 200 "simplify_goal_switch.m"
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_10 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9;
#line 200 "simplify_goal_switch.m"
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_8 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7;
#line 199 "simplify_goal_switch.m"
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_6 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5;
#line 199 "simplify_goal_switch.m"
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_4 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3;
#line 199 "simplify_goal_switch.m"
          }
#line 199 "simplify_goal_switch.m"
        else
#line 204 "simplify_goal_switch.m"
          {
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__Case0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__MainConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case0_36, (MR_Integer) 0)));
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__OtherConsIds_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case0_36, (MR_Integer) 1)));
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__Goal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case0_36, (MR_Integer) 2)));
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo0_49;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes_50;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__Type_51;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__CaseInstMap0_52;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo1_53;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__Goal_54;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85;
#line 204 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86;
#line 212 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch___Common1_55;
#line 216 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__V_79_79;
#line 216 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__V_80_80;
#line 216 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__V_56_56;

#line 206 "simplify_goal_switch.m"
            {
#line 206 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14, &check_hlds__simplify__simplify_goal_switch__ModuleInfo0_49);
            }
#line 207 "simplify_goal_switch.m"
            {
#line 207 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14, &check_hlds__simplify__simplify_goal_switch__VarTypes_50);
            }
#line 208 "simplify_goal_switch.m"
            {
#line 208 "simplify_goal_switch.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_50, check_hlds__simplify__simplify_goal_switch__Var_1, &check_hlds__simplify__simplify_goal_switch__Type_51);
            }
#line 209 "simplify_goal_switch.m"
            {
#line 209 "simplify_goal_switch.m"
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__simplify__simplify_goal_switch__Var_1, check_hlds__simplify__simplify_goal_switch__Type_51, check_hlds__simplify__simplify_goal_switch__MainConsId_46, check_hlds__simplify__simplify_goal_switch__OtherConsIds_47, check_hlds__simplify__simplify_goal_switch__HeadVar__12_12, &check_hlds__simplify__simplify_goal_switch__CaseInstMap0_52, check_hlds__simplify__simplify_goal_switch__ModuleInfo0_49, &check_hlds__simplify__simplify_goal_switch__ModuleInfo1_53);
            }
#line 211 "simplify_goal_switch.m"
            {
#line 211 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo1_53, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77);
            }
#line 212 "simplify_goal_switch.m"
            {
#line 212 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_switch__Goal0_48, &check_hlds__simplify__simplify_goal_switch__Goal_54, check_hlds__simplify__simplify_goal_switch__HeadVar__11_11, check_hlds__simplify__simplify_goal_switch__CaseInstMap0_52, check_hlds__simplify__simplify_goal_switch__HeadVar__13_13, &check_hlds__simplify__simplify_goal_switch___Common1_55, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78);
            }
#line 216 "simplify_goal_switch.m"
            check_hlds__simplify__simplify_goal_switch__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 0)));
#line 216 "simplify_goal_switch.m"
            check_hlds__simplify__simplify_goal_switch__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 1)));
#line 216 "simplify_goal_switch.m"
            check_hlds__simplify__simplify_goal_switch__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__V_79_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__V_79_79, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 216 "simplify_goal_switch.m"
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 216 "simplify_goal_switch.m"
              {
#line 216 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__V_79_79, (MR_Integer) 1)));
#line 216 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "simplify_goal_switch.m"
              }
#line 219 "simplify_goal_switch.m"
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 218 "simplify_goal_switch.m"
              {
#line 218 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81 = (MR_Integer) 0;
#line 218 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78;
#line 218 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7;
#line 218 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5;
#line 218 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3;
#line 218 "simplify_goal_switch.m"
              }
#line 219 "simplify_goal_switch.m"
            else
#line 220 "simplify_goal_switch.m"
              {
#line 220 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__Case_57;
#line 220 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__GoalExpr_58;
#line 220 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__GoalInfo_59;
#line 220 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta0_63;
#line 220 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo2_64;
#line 220 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta_65;
#line 220 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo_66;
#line 223 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__Reason_60;
#line 223 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__V_82_82;
#line 223 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__V_61_61;
#line 224 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__V_62_62;

#line 220 "simplify_goal_switch.m"
                {
#line 220 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__Case_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 220 "simplify_goal_switch.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case_57, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__MainConsId_46));
#line 220 "simplify_goal_switch.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case_57, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__OtherConsIds_47));
#line 220 "simplify_goal_switch.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case_57, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Goal_54));
#line 220 "simplify_goal_switch.m"
                }
#line 221 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__GoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 0)));
#line 221 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__GoalInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 1)));
#line 223 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__GoalExpr_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 223 "simplify_goal_switch.m"
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 223 "simplify_goal_switch.m"
                  {
#line 223 "simplify_goal_switch.m"
                    check_hlds__simplify__simplify_goal_switch__Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr_58, (MR_Integer) 1)));
#line 223 "simplify_goal_switch.m"
                    check_hlds__simplify__simplify_goal_switch__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr_58, (MR_Integer) 2)));
#line 224 "simplify_goal_switch.m"
                    check_hlds__simplify__simplify_goal_switch__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__Reason_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Reason_60, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 224 "simplify_goal_switch.m"
                    if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 224 "simplify_goal_switch.m"
                      {
#line 224 "simplify_goal_switch.m"
                        check_hlds__simplify__simplify_goal_switch__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Reason_60, (MR_Integer) 1)));
#line 224 "simplify_goal_switch.m"
                        check_hlds__simplify__simplify_goal_switch__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Reason_60, (MR_Integer) 2)));
#line 224 "simplify_goal_switch.m"
                        check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__V_82_82 == (MR_Integer) 1);
#line 224 "simplify_goal_switch.m"
                      }
#line 223 "simplify_goal_switch.m"
                  }
#line 228 "simplify_goal_switch.m"
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 228 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7;
#line 228 "simplify_goal_switch.m"
                else
#line 229 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83 = (MR_Integer) 1;
#line 238 "simplify_goal_switch.m"
                {
#line 238 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__InstMapDelta0_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo_59);
                }
#line 239 "simplify_goal_switch.m"
                {
#line 239 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78, &check_hlds__simplify__simplify_goal_switch__ModuleInfo2_64);
                }
#line 240 "simplify_goal_switch.m"
                {
#line 240 "simplify_goal_switch.m"
                  hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(check_hlds__simplify__simplify_goal_switch__Var_1, check_hlds__simplify__simplify_goal_switch__Type_51, check_hlds__simplify__simplify_goal_switch__MainConsId_46, check_hlds__simplify__simplify_goal_switch__OtherConsIds_47, check_hlds__simplify__simplify_goal_switch__HeadVar__12_12, check_hlds__simplify__simplify_goal_switch__InstMapDelta0_63, &check_hlds__simplify__simplify_goal_switch__InstMapDelta_65, check_hlds__simplify__simplify_goal_switch__ModuleInfo2_64, &check_hlds__simplify__simplify_goal_switch__ModuleInfo_66);
                }
#line 242 "simplify_goal_switch.m"
                {
#line 242 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_66, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84);
                }
#line 244 "simplify_goal_switch.m"
                {
#line 244 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "simplify_goal_switch.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__InstMapDelta_65));
#line 244 "simplify_goal_switch.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5));
#line 244 "simplify_goal_switch.m"
                }
#line 245 "simplify_goal_switch.m"
                {
#line 245 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "simplify_goal_switch.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Case_57));
#line 245 "simplify_goal_switch.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3));
#line 245 "simplify_goal_switch.m"
                }
#line 220 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9;
#line 220 "simplify_goal_switch.m"
              }
#line 248 "simplify_goal_switch.m"
            /* direct tailcall eliminated */
#line 248 "simplify_goal_switch.m"
            {
#line 248 "simplify_goal_switch.m"
              MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_switch__Cases0_37;
#line 248 "simplify_goal_switch.m"
              MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0__tmp_copy_3 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86;
#line 248 "simplify_goal_switch.m"
              MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0__tmp_copy_5 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85;
#line 248 "simplify_goal_switch.m"
              MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0__tmp_copy_7 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83;
#line 248 "simplify_goal_switch.m"
              MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81;
#line 248 "simplify_goal_switch.m"
              MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0__tmp_copy_14 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84;

#line 248 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0__tmp_copy_14;
#line 248 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0__tmp_copy_9;
#line 248 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0__tmp_copy_7;
#line 248 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0__tmp_copy_5;
#line 248 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0__tmp_copy_3;
#line 248 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__HeadVar__2_2 = check_hlds__simplify__simplify_goal_switch__HeadVar__2__tmp_copy_2;
#line 248 "simplify_goal_switch.m"
            }
#line 248 "simplify_goal_switch.m"
            continue;
#line 204 "simplify_goal_switch.m"
          }
#line 199 "simplify_goal_switch.m"
      }
#line 199 "simplify_goal_switch.m"
      break;
#line 199 "simplify_goal_switch.m"
    }
#line 193 "simplify_goal_switch.m"
}

#line 67 "simplify_goal_switch.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0_1(
#line 67 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__closure_arg,
#line 67 "simplify_goal_switch.m"
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
#line 67 "simplify_goal_switch.m"
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_2)
#line 67 "simplify_goal_switch.m"
{
#line 67 "simplify_goal_switch.m"
  {
#line 67 "simplify_goal_switch.m"
    MR_Box check_hlds__simplify__simplify_goal_switch__closure = check_hlds__simplify__simplify_goal_switch__closure_arg;
#line 67 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__3_3;

#line 67 "simplify_goal_switch.m"
    {
#line 67 "simplify_goal_switch.m"
      parse_tree__prog_mode__bound_inst_to_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_1), &check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__3_3);
    }
#line 67 "simplify_goal_switch.m"
    *check_hlds__simplify__simplify_goal_switch__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__3_3));
#line 67 "simplify_goal_switch.m"
  }
#line 67 "simplify_goal_switch.m"
}

#line 26 "simplify_goal_switch.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(
#line 26 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__GoalExpr0_11,
#line 26 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__GoalExpr_12,
#line 26 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__GoalInfo0_13,
#line 26 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__GoalInfo_14,
#line 26 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__NestedContext0_15,
#line 26 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__InstMap0_16,
#line 26 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__Common0_17,
#line 26 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__Common_18,
#line 26 "simplify_goal_switch.m"
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_61,
#line 26 "simplify_goal_switch.m"
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_62)
#line 26 "simplify_goal_switch.m"
{
#line 59 "simplify_goal_switch.m"
  {
#line 59 "simplify_goal_switch.m"
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_104_104;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr0_11, (MR_Integer) 1)));
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__SwitchCanFail0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr0_11, (MR_Integer) 2)));
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr0_11, (MR_Integer) 3)));
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo0_23;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__VarInst_24;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes_25;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__Cases1_31;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_32;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__RevCases_33;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_34;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__SeenNonGroundTerm_35;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__SwitchCanFail_36;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__Cases_37;
#line 59 "simplify_goal_switch.m"
    MR_Integer check_hlds__simplify__simplify_goal_switch__Cases0Length_59;
#line 59 "simplify_goal_switch.m"
    MR_Integer check_hlds__simplify__simplify_goal_switch__CasesLength_60;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67;
#line 59 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_69_69;
#line 71 "simplify_goal_switch.m"
    MR_Word check_hlds__simplify__simplify_goal_switch__BoundInsts_26;

#line 61 "simplify_goal_switch.m"
    {
#line 61 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_61, &check_hlds__simplify__simplify_goal_switch__ModuleInfo0_23);
    }
#line 62 "simplify_goal_switch.m"
    {
#line 62 "simplify_goal_switch.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__Var_20, &check_hlds__simplify__simplify_goal_switch__VarInst_24);
    }
#line 63 "simplify_goal_switch.m"
    {
#line 63 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_61, &check_hlds__simplify__simplify_goal_switch__VarTypes_25);
    }
#line 64 "simplify_goal_switch.m"
    {
#line 64 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo0_23, check_hlds__simplify__simplify_goal_switch__VarInst_24, &check_hlds__simplify__simplify_goal_switch__BoundInsts_26);
    }
#line 71 "simplify_goal_switch.m"
    if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 65 "simplify_goal_switch.m"
      {
#line 65 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_103_103;
#line 65 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__VarType_27;
#line 65 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__VarTypeCtor_28;
#line 65 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__ConsIds0_29;
#line 65 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__ConsIds_30;
#line 65 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__V_63_63;

#line 65 "simplify_goal_switch.m"
        {
#line 65 "simplify_goal_switch.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__Var_20, &check_hlds__simplify__simplify_goal_switch__VarType_27);
        }
#line 66 "simplify_goal_switch.m"
        {
#line 66 "simplify_goal_switch.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__simplify_goal_switch__VarType_27, &check_hlds__simplify__simplify_goal_switch__VarTypeCtor_28);
        }
#line 67 "simplify_goal_switch.m"
        {
#line 67 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_goal_switch__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 67 "simplify_goal_switch.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_63_63, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_1[0]));
#line 67 "simplify_goal_switch.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0_1));
#line 67 "simplify_goal_switch.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 67 "simplify_goal_switch.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_63_63, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__VarTypeCtor_28));
#line 67 "simplify_goal_switch.m"
        }
#line 1339 "check_hlds.simplify.simplify_goal_switch.c"
        check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_103_103 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 67 "simplify_goal_switch.m"
        {
#line 67 "simplify_goal_switch.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_103_103, check_hlds__simplify__simplify_goal_switch__V_63_63, check_hlds__simplify__simplify_goal_switch__BoundInsts_26, &check_hlds__simplify__simplify_goal_switch__ConsIds0_29);
        }
#line 68 "simplify_goal_switch.m"
        {
#line 68 "simplify_goal_switch.m"
          mercury__list__sort_2_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_103_103, check_hlds__simplify__simplify_goal_switch__ConsIds0_29, &check_hlds__simplify__simplify_goal_switch__ConsIds_30);
        }
#line 69 "simplify_goal_switch.m"
        {
#line 69 "simplify_goal_switch.m"
          check_hlds__det_util__delete_unreachable_cases_3_p_0(check_hlds__simplify__simplify_goal_switch__Cases0_22, check_hlds__simplify__simplify_goal_switch__ConsIds_30, &check_hlds__simplify__simplify_goal_switch__Cases1_31);
        }
#line 70 "simplify_goal_switch.m"
        {
#line 70 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 70 "simplify_goal_switch.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ConsIds_30));
#line 70 "simplify_goal_switch.m"
        }
#line 65 "simplify_goal_switch.m"
      }
#line 71 "simplify_goal_switch.m"
    else
#line 72 "simplify_goal_switch.m"
      {
#line 72 "simplify_goal_switch.m"
        check_hlds__simplify__simplify_goal_switch__Cases1_31 = check_hlds__simplify__simplify_goal_switch__Cases0_22;
#line 73 "simplify_goal_switch.m"
        check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 72 "simplify_goal_switch.m"
      }
#line 75 "simplify_goal_switch.m"
    {
#line 75 "simplify_goal_switch.m"
      check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__Cases1_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_switch__RevCases_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_34, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_switch__SeenNonGroundTerm_35, check_hlds__simplify__simplify_goal_switch__SwitchCanFail0_21, &check_hlds__simplify__simplify_goal_switch__SwitchCanFail_36, check_hlds__simplify__simplify_goal_switch__NestedContext0_15, check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__Common0_17, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_61, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67);
    }
#line 1381 "check_hlds.simplify.simplify_goal_switch.c"
    check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 79 "simplify_goal_switch.m"
    {
#line 79 "simplify_goal_switch.m"
      mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_104_104, check_hlds__simplify__simplify_goal_switch__RevCases_33, &check_hlds__simplify__simplify_goal_switch__Cases_37);
    }
#line 81 "simplify_goal_switch.m"
    check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__Cases_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 87 "simplify_goal_switch.m"
    if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 84 "simplify_goal_switch.m"
      {
#line 84 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__Context_38;
#line 84 "simplify_goal_switch.m"
        MR_Integer check_hlds__simplify__simplify_goal_switch__V_68_68;
#line 84 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__V_70_70;

#line 84 "simplify_goal_switch.m"
        {
#line 84 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_goal_switch__V_68_68 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
        }
#line 84 "simplify_goal_switch.m"
        {
#line 84 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__V_68_68, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_69_69);
        }
#line 85 "simplify_goal_switch.m"
        {
#line 85 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_goal_switch__Context_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
        }
#line 86 "simplify_goal_switch.m"
        {
#line 86 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_goal_switch__V_70_70 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_switch__Context_38);
        }
#line 86 "simplify_goal_switch.m"
        *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_70_70, (MR_Integer) 0)));
#line 86 "simplify_goal_switch.m"
        *check_hlds__simplify__simplify_goal_switch__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_70_70, (MR_Integer) 1)));
#line 84 "simplify_goal_switch.m"
      }
#line 87 "simplify_goal_switch.m"
    else
#line 145 "simplify_goal_switch.m"
      {
#line 145 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__MainConsId_39;
#line 145 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__SingleGoal_41;
#line 88 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__OtherConsIds_40;
#line 88 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__V_71_71;
#line 88 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__V_72_72;

#line 88 "simplify_goal_switch.m"
        check_hlds__simplify__simplify_goal_switch__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__Cases_37)) == (MR_mktag((MR_Integer) 1)));
#line 88 "simplify_goal_switch.m"
        if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 88 "simplify_goal_switch.m"
          {
#line 88 "simplify_goal_switch.m"
            check_hlds__simplify__simplify_goal_switch__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Cases_37, (MR_Integer) 0)));
#line 88 "simplify_goal_switch.m"
            check_hlds__simplify__simplify_goal_switch__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Cases_37, (MR_Integer) 1)));
#line 88 "simplify_goal_switch.m"
            check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 88 "simplify_goal_switch.m"
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 88 "simplify_goal_switch.m"
              {
#line 88 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__MainConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_71_71, (MR_Integer) 0)));
#line 88 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__OtherConsIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_71_71, (MR_Integer) 1)));
#line 88 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__SingleGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__V_71_71, (MR_Integer) 2)));
#line 89 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__OtherConsIds_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 88 "simplify_goal_switch.m"
              }
#line 88 "simplify_goal_switch.m"
          }
#line 145 "simplify_goal_switch.m"
        if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 93 "simplify_goal_switch.m"
          {
#line 93 "simplify_goal_switch.m"
            MR_Integer check_hlds__simplify__simplify_goal_switch__MainConsIdArity_42;
#line 93 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_75_75;
#line 93 "simplify_goal_switch.m"
            MR_Integer check_hlds__simplify__simplify_goal_switch__V_81_81;
#line 96 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__V_73_73;
#line 96 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__V_74_74;
#line 96 "simplify_goal_switch.m"
            MR_Word check_hlds__simplify__simplify_goal_switch__V_106_106;

#line 93 "simplify_goal_switch.m"
            {
#line 93 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__MainConsIdArity_42 = parse_tree__prog_util__cons_id_arity_1_f_0(check_hlds__simplify__simplify_goal_switch__MainConsId_39);
            }
#line 95 "simplify_goal_switch.m"
            check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__SwitchCanFail_36 == (MR_Integer) 0);
#line 95 "simplify_goal_switch.m"
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 95 "simplify_goal_switch.m"
              {
#line 96 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_32)) == (MR_mktag((MR_Integer) 1)));
#line 96 "simplify_goal_switch.m"
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 96 "simplify_goal_switch.m"
                  {
#line 96 "simplify_goal_switch.m"
                    check_hlds__simplify__simplify_goal_switch__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_32, (MR_Integer) 0)));
#line 96 "simplify_goal_switch.m"
                    check_hlds__simplify__simplify_goal_switch__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 96 "simplify_goal_switch.m"
                    if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 96 "simplify_goal_switch.m"
                      {
#line 96 "simplify_goal_switch.m"
                        check_hlds__simplify__simplify_goal_switch__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__V_73_73, (MR_Integer) 0)));
#line 96 "simplify_goal_switch.m"
                        check_hlds__simplify__simplify_goal_switch__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__V_73_73, (MR_Integer) 1)));
#line 96 "simplify_goal_switch.m"
                        {
#line 96 "simplify_goal_switch.m"
                          check_hlds__simplify__simplify_goal_switch__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__simplify__simplify_goal_switch__MainConsId_39, check_hlds__simplify__simplify_goal_switch__V_106_106);
                        }
#line 96 "simplify_goal_switch.m"
                        if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 96 "simplify_goal_switch.m"
                          check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 96 "simplify_goal_switch.m"
                      }
#line 96 "simplify_goal_switch.m"
                  }
#line 96 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__succeeded = !(check_hlds__simplify__simplify_goal_switch__succeeded);
#line 95 "simplify_goal_switch.m"
              }
#line 139 "simplify_goal_switch.m"
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 103 "simplify_goal_switch.m"
              {
#line 103 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__Type_43;
#line 103 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo1_44;

#line 103 "simplify_goal_switch.m"
                {
#line 103 "simplify_goal_switch.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__Var_20, &check_hlds__simplify__simplify_goal_switch__Type_43);
                }
#line 104 "simplify_goal_switch.m"
                {
#line 104 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67, &check_hlds__simplify__simplify_goal_switch__ModuleInfo1_44);
                }
#line 105 "simplify_goal_switch.m"
                {
#line 105 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo1_44, check_hlds__simplify__simplify_goal_switch__Type_43, check_hlds__simplify__simplify_goal_switch__MainConsId_39);
                }
#line 112 "simplify_goal_switch.m"
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 106 "simplify_goal_switch.m"
                  {
#line 106 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_45;
#line 106 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__NewDelta_46;
#line 106 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo2_47;

#line 106 "simplify_goal_switch.m"
                    {
#line 106 "simplify_goal_switch.m"
                      MR_Word base;
#line 106 "simplify_goal_switch.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 106 "simplify_goal_switch.m"
                      *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = base;
#line 106 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 106 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_20));
#line 106 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SwitchCanFail_36));
#line 106 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Cases_37));
#line 106 "simplify_goal_switch.m"
                    }
#line 107 "simplify_goal_switch.m"
                    {
#line 107 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_goal_switch__NonLocals_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                    }
#line 108 "simplify_goal_switch.m"
                    {
#line 108 "simplify_goal_switch.m"
                      hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__NonLocals_45, check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_34, &check_hlds__simplify__simplify_goal_switch__NewDelta_46, check_hlds__simplify__simplify_goal_switch__ModuleInfo1_44, &check_hlds__simplify__simplify_goal_switch__ModuleInfo2_47);
                    }
#line 110 "simplify_goal_switch.m"
                    {
#line 110 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo2_47, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_75_75);
                    }
#line 111 "simplify_goal_switch.m"
                    {
#line 111 "simplify_goal_switch.m"
                      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__NewDelta_46, check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, check_hlds__simplify__simplify_goal_switch__GoalInfo_14);
                    }
#line 106 "simplify_goal_switch.m"
                  }
#line 112 "simplify_goal_switch.m"
                else
#line 114 "simplify_goal_switch.m"
                  {
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__UnifyGoal_48;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__SingleGoalConj_49;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__GoalList_50;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals0_51;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta0_52;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta_53;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo_54;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__CaseDetism_55;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__Detism_56;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__Purity_57;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_76_76;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77;
#line 114 "simplify_goal_switch.m"
                    MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_87;

#line 113 "simplify_goal_switch.m"
                    {
#line 113 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__MainConsId_39, check_hlds__simplify__simplify_goal_switch__MainConsIdArity_42, &check_hlds__simplify__simplify_goal_switch__UnifyGoal_48, check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_76_76);
                    }
#line 117 "simplify_goal_switch.m"
                    {
#line 117 "simplify_goal_switch.m"
                      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_switch__SingleGoal_41, &check_hlds__simplify__simplify_goal_switch__SingleGoalConj_49);
                    }
#line 118 "simplify_goal_switch.m"
                    {
#line 118 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_goal_switch__GoalList_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__GoalList_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__UnifyGoal_48));
#line 118 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__GoalList_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SingleGoalConj_49));
#line 118 "simplify_goal_switch.m"
                    }
#line 122 "simplify_goal_switch.m"
                    {
#line 122 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_goal_switch__NonLocals0_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                    }
#line 123 "simplify_goal_switch.m"
                    {
#line 123 "simplify_goal_switch.m"
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__NonLocals0_51, &check_hlds__simplify__simplify_goal_switch__NonLocals_87);
                    }
#line 124 "simplify_goal_switch.m"
                    {
#line 124 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_goal_switch__InstMapDelta0_52 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                    }
#line 125 "simplify_goal_switch.m"
                    {
#line 125 "simplify_goal_switch.m"
                      hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__Type_43, check_hlds__simplify__simplify_goal_switch__MainConsId_39, check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__InstMapDelta0_52, &check_hlds__simplify__simplify_goal_switch__InstMapDelta_53, check_hlds__simplify__simplify_goal_switch__ModuleInfo1_44, &check_hlds__simplify__simplify_goal_switch__ModuleInfo_54);
                    }
#line 128 "simplify_goal_switch.m"
                    {
#line 128 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_54, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_76_76, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77);
                    }
#line 129 "simplify_goal_switch.m"
                    {
#line 129 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_goal_switch__CaseDetism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                    }
#line 130 "simplify_goal_switch.m"
                    {
#line 130 "simplify_goal_switch.m"
                      parse_tree__prog_data__det_conjunction_detism_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_switch__CaseDetism_55, &check_hlds__simplify__simplify_goal_switch__Detism_56);
                    }
#line 131 "simplify_goal_switch.m"
                    {
#line 131 "simplify_goal_switch.m"
                      hlds__hlds_goal__goal_list_purity_2_p_0(check_hlds__simplify__simplify_goal_switch__GoalList_50, &check_hlds__simplify__simplify_goal_switch__Purity_57);
                    }
#line 132 "simplify_goal_switch.m"
                    {
#line 132 "simplify_goal_switch.m"
                      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_switch__NonLocals_87, check_hlds__simplify__simplify_goal_switch__InstMapDelta_53, check_hlds__simplify__simplify_goal_switch__Detism_56, check_hlds__simplify__simplify_goal_switch__Purity_57, check_hlds__simplify__simplify_goal_switch__GoalInfo_14);
                    }
#line 135 "simplify_goal_switch.m"
                    {
#line 135 "simplify_goal_switch.m"
                      check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_75_75);
                    }
#line 136 "simplify_goal_switch.m"
                    {
#line 136 "simplify_goal_switch.m"
                      MR_Word base;
#line 136 "simplify_goal_switch.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 136 "simplify_goal_switch.m"
                      *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = base;
#line 136 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 136 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 136 "simplify_goal_switch.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__GoalList_50));
#line 136 "simplify_goal_switch.m"
                    }
#line 114 "simplify_goal_switch.m"
                  }
#line 103 "simplify_goal_switch.m"
              }
#line 139 "simplify_goal_switch.m"
            else
#line 142 "simplify_goal_switch.m"
              {
#line 142 "simplify_goal_switch.m"
                *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__SingleGoal_41, (MR_Integer) 0)));
#line 142 "simplify_goal_switch.m"
                *check_hlds__simplify__simplify_goal_switch__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__SingleGoal_41, (MR_Integer) 1)));
#line 142 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_75_75 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67;
#line 142 "simplify_goal_switch.m"
              }
#line 144 "simplify_goal_switch.m"
            {
#line 144 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__V_81_81 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
            }
#line 144 "simplify_goal_switch.m"
            {
#line 144 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__V_81_81, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_75_75, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_69_69);
            }
#line 93 "simplify_goal_switch.m"
          }
#line 145 "simplify_goal_switch.m"
        else
#line 146 "simplify_goal_switch.m"
          {
#line 146 "simplify_goal_switch.m"
            {
#line 146 "simplify_goal_switch.m"
              MR_Word base;
#line 146 "simplify_goal_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 146 "simplify_goal_switch.m"
              *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = base;
#line 146 "simplify_goal_switch.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 146 "simplify_goal_switch.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_20));
#line 146 "simplify_goal_switch.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SwitchCanFail_36));
#line 146 "simplify_goal_switch.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Cases_37));
#line 146 "simplify_goal_switch.m"
            }
#line 148 "simplify_goal_switch.m"
            {
#line 148 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, (MR_Integer) 14);
            }
#line 149 "simplify_goal_switch.m"
            if (!(check_hlds__simplify__simplify_goal_switch__succeeded))
#line 149 "simplify_goal_switch.m"
              check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__SeenNonGroundTerm_35 == (MR_Integer) 0);
#line 155 "simplify_goal_switch.m"
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 154 "simplify_goal_switch.m"
              {
#line 154 "simplify_goal_switch.m"
                *check_hlds__simplify__simplify_goal_switch__GoalInfo_14 = check_hlds__simplify__simplify_goal_switch__GoalInfo0_13;
#line 154 "simplify_goal_switch.m"
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_69_69 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67;
#line 154 "simplify_goal_switch.m"
              }
#line 155 "simplify_goal_switch.m"
            else
#line 156 "simplify_goal_switch.m"
              {
#line 156 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo1_88;
#line 156 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_89;
#line 156 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__NewDelta_90;
#line 156 "simplify_goal_switch.m"
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo2_91;

#line 156 "simplify_goal_switch.m"
                {
#line 156 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67, &check_hlds__simplify__simplify_goal_switch__ModuleInfo1_88);
                }
#line 157 "simplify_goal_switch.m"
                {
#line 157 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_goal_switch__NonLocals_89 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                }
#line 158 "simplify_goal_switch.m"
                {
#line 158 "simplify_goal_switch.m"
                  hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__NonLocals_89, check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_34, &check_hlds__simplify__simplify_goal_switch__NewDelta_90, check_hlds__simplify__simplify_goal_switch__ModuleInfo1_88, &check_hlds__simplify__simplify_goal_switch__ModuleInfo2_91);
                }
#line 160 "simplify_goal_switch.m"
                {
#line 160 "simplify_goal_switch.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo2_91, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_67_67, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_69_69);
                }
#line 161 "simplify_goal_switch.m"
                {
#line 161 "simplify_goal_switch.m"
                  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__NewDelta_90, check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, check_hlds__simplify__simplify_goal_switch__GoalInfo_14);
                }
#line 156 "simplify_goal_switch.m"
              }
#line 146 "simplify_goal_switch.m"
          }
#line 145 "simplify_goal_switch.m"
      }
#line 170 "simplify_goal_switch.m"
    *check_hlds__simplify__simplify_goal_switch__Common_18 = check_hlds__simplify__simplify_goal_switch__Common0_17;
#line 171 "simplify_goal_switch.m"
    {
#line 171 "simplify_goal_switch.m"
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_104_104, check_hlds__simplify__simplify_goal_switch__Cases0_22, &check_hlds__simplify__simplify_goal_switch__Cases0Length_59);
    }
#line 172 "simplify_goal_switch.m"
    {
#line 172 "simplify_goal_switch.m"
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_104_104, check_hlds__simplify__simplify_goal_switch__Cases_37, &check_hlds__simplify__simplify_goal_switch__CasesLength_60);
    }
#line 173 "simplify_goal_switch.m"
    check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__CasesLength_60 == check_hlds__simplify__simplify_goal_switch__Cases0Length_59);
#line 175 "simplify_goal_switch.m"
    if (check_hlds__simplify__simplify_goal_switch__succeeded)
#line 175 "simplify_goal_switch.m"
      *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_62 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_69_69;
#line 175 "simplify_goal_switch.m"
    else
#line 183 "simplify_goal_switch.m"
      {
#line 183 "simplify_goal_switch.m"
        MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_85_85;

#line 183 "simplify_goal_switch.m"
        {
#line 183 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_69_69, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_85_85);
        }
#line 184 "simplify_goal_switch.m"
        {
#line 184 "simplify_goal_switch.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_85_85, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_62);
#line 184 "simplify_goal_switch.m"
          return;
        }
#line 183 "simplify_goal_switch.m"
      }
#line 59 "simplify_goal_switch.m"
  }
#line 26 "simplify_goal_switch.m"
}

void mercury__check_hlds__simplify__simplify_goal_switch__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__type_ctor_info_seen_non_ground_term_0);
}

void mercury__check_hlds__simplify__simplify_goal_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_switch. */
