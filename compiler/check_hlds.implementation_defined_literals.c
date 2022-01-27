/*
** Automatically generated from `implementation_defined_literals.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module check_hlds.implementation_defined_literals. */
/* :- implementation. */

/*
INIT mercury__check_hlds__implementation_defined_literals__init
ENDINIT
*/

#include "check_hlds.implementation_defined_literals.mih"


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
#include "tree234.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "check_hlds.implementation_defined_literals.c"
static const MR_PseudoTypeInfo check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0[3];

#line 142 "check_hlds.implementation_defined_literals.c"
static const MR_DuFunctorDesc check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0;

#line 145 "check_hlds.implementation_defined_literals.c"
static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0[1];

#line 148 "check_hlds.implementation_defined_literals.c"
static const MR_DuPtagLayout check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0[1];

#line 151 "check_hlds.implementation_defined_literals.c"
static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0[1];

#line 154 "check_hlds.implementation_defined_literals.c"
static const MR_Integer check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0[1];

#line 157 "check_hlds.implementation_defined_literals.c"
static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001(
#line 160 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 162 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2);

#line 165 "check_hlds.implementation_defined_literals.c"
static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001(
#line 168 "check_hlds.implementation_defined_literals.c"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 170 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
#line 172 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_3);

#line 50 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(
#line 50 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__HeadVar__1_1,
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2,
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__3_3);

#line 50 "implementation_defined_literals.m"
static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__1_1,
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2);

#line 207 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(
#line 207 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Var_6,
#line 207 "implementation_defined_literals.m"
  MR_String check_hlds__implementation_defined_literals__Name_7,
#line 207 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Context_8,
#line 207 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_9,
#line 207 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Goal_10);

#line 199 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(
#line 199 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_4,
#line 199 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Case0_5,
#line 199 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Case_6);

#line 160 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4(
#line 160 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 160 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 160 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

#line 181 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3(
#line 181 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 181 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 181 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

#line 155 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2(
#line 155 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 155 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 155 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

#line 150 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1(
#line 150 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 150 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 150 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

#line 86 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(
#line 86 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_4,
#line 86 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Goal0_5,
#line 86 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Goal_6);

#line 78 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(
#line 78 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_4,
#line 78 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Clause0_5,
#line 78 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Clause_6);

#line 72 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1(
#line 72 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 72 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 72 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2);

#line 64 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(
#line 64 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__ModuleInfo_5,
#line 64 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__PredId_6,
#line 64 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__PredInfo0_7,
#line 64 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__PredInfo_8);

#line 61 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1(
#line 61 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 61 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 61 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
#line 61 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_1[1][7];

static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_2[3][6];




static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_1[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_2[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 373 "check_hlds.implementation_defined_literals.c"
static const MR_PseudoTypeInfo check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 380 "check_hlds.implementation_defined_literals.c"
static const MR_DuFunctorDesc check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0 = {
  (MR_String) "subst_literals_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 395 "check_hlds.implementation_defined_literals.c"
static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0[1] = {
  &check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0
};

#line 400 "check_hlds.implementation_defined_literals.c"
static const MR_DuPtagLayout check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0
  }
};

#line 409 "check_hlds.implementation_defined_literals.c"
static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0[1] = {
  &check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0
};

#line 414 "check_hlds.implementation_defined_literals.c"
static const MR_Integer check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0[1] = {
  (MR_Integer) 0
};

#line 419 "check_hlds.implementation_defined_literals.c"
const MR_TypeCtorInfo_Struct check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001)),
  ((MR_Box) (check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001)),
  (MR_String) "check_hlds.implementation_defined_literals",
  (MR_String) "subst_literals_info",
  {     check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0 },
  {     check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0
};

#line 436 "check_hlds.implementation_defined_literals.c"
static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001(
#line 439 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 441 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2)
#line 443 "check_hlds.implementation_defined_literals.c"
{
#line 445 "check_hlds.implementation_defined_literals.c"
  {
#line 447 "check_hlds.implementation_defined_literals.c"
    MR_bool check_hlds__implementation_defined_literals__succeeded;

#line 450 "check_hlds.implementation_defined_literals.c"
    {
#line 452 "check_hlds.implementation_defined_literals.c"
      check_hlds__implementation_defined_literals__succeeded = check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_2));
    }
#line 455 "check_hlds.implementation_defined_literals.c"
    return check_hlds__implementation_defined_literals__succeeded;
#line 457 "check_hlds.implementation_defined_literals.c"
  }
#line 459 "check_hlds.implementation_defined_literals.c"
}

#line 462 "check_hlds.implementation_defined_literals.c"
static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001(
#line 465 "check_hlds.implementation_defined_literals.c"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 467 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
#line 469 "check_hlds.implementation_defined_literals.c"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_3)
#line 471 "check_hlds.implementation_defined_literals.c"
{
#line 473 "check_hlds.implementation_defined_literals.c"
  {
#line 475 "check_hlds.implementation_defined_literals.c"
    MR_Word check_hlds__implementation_defined_literals__conv0_HeadVar__1_1;

#line 478 "check_hlds.implementation_defined_literals.c"
    {
#line 480 "check_hlds.implementation_defined_literals.c"
      check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(&check_hlds__implementation_defined_literals__conv0_HeadVar__1_1, ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_2), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_3));
    }
#line 483 "check_hlds.implementation_defined_literals.c"
    *check_hlds__implementation_defined_literals__wrapper_arg_1 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_HeadVar__1_1));
#line 485 "check_hlds.implementation_defined_literals.c"
  }
#line 487 "check_hlds.implementation_defined_literals.c"
}

#line 50 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(
#line 50 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__HeadVar__1_1,
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2,
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__3_3)
#line 50 "implementation_defined_literals.m"
{
#line 50 "implementation_defined_literals.m"
  {
#line 50 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded;
#line 50 "implementation_defined_literals.m"
    MR_Integer check_hlds__implementation_defined_literals__CastX_12 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__2_2;
#line 50 "implementation_defined_literals.m"
    MR_Integer check_hlds__implementation_defined_literals__CastY_13 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__3_3;

#line 50 "implementation_defined_literals.m"
    check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__CastX_12 == check_hlds__implementation_defined_literals__CastY_13);
#line 50 "implementation_defined_literals.m"
    if (check_hlds__implementation_defined_literals__succeeded)
#line 514 "check_hlds.implementation_defined_literals.c"
      *check_hlds__implementation_defined_literals__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "implementation_defined_literals.m"
    else
#line 50 "implementation_defined_literals.m"
      {
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_10_10;

#line 50 "implementation_defined_literals.m"
        {
#line 50 "implementation_defined_literals.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__implementation_defined_literals__V_10_10, check_hlds__implementation_defined_literals__V_4_4, check_hlds__implementation_defined_literals__V_7_7);
        }
#line 540 "check_hlds.implementation_defined_literals.c"
        check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__V_10_10 == (MR_Integer) 0);
#line 50 "implementation_defined_literals.m"
        check_hlds__implementation_defined_literals__succeeded = !(check_hlds__implementation_defined_literals__succeeded);
#line 50 "implementation_defined_literals.m"
        if (check_hlds__implementation_defined_literals__succeeded)
#line 50 "implementation_defined_literals.m"
          *check_hlds__implementation_defined_literals__HeadVar__1_1 = check_hlds__implementation_defined_literals__V_10_10;
#line 50 "implementation_defined_literals.m"
        else
#line 50 "implementation_defined_literals.m"
          {
#line 50 "implementation_defined_literals.m"
            MR_Word check_hlds__implementation_defined_literals__V_11_11;

#line 50 "implementation_defined_literals.m"
            {
#line 50 "implementation_defined_literals.m"
              hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__implementation_defined_literals__V_11_11, check_hlds__implementation_defined_literals__V_5_5, check_hlds__implementation_defined_literals__V_8_8);
            }
#line 560 "check_hlds.implementation_defined_literals.c"
            check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__V_11_11 == (MR_Integer) 0);
#line 50 "implementation_defined_literals.m"
            check_hlds__implementation_defined_literals__succeeded = !(check_hlds__implementation_defined_literals__succeeded);
#line 50 "implementation_defined_literals.m"
            if (check_hlds__implementation_defined_literals__succeeded)
#line 50 "implementation_defined_literals.m"
              *check_hlds__implementation_defined_literals__HeadVar__1_1 = check_hlds__implementation_defined_literals__V_11_11;
#line 50 "implementation_defined_literals.m"
            else
#line 50 "implementation_defined_literals.m"
              {
#line 50 "implementation_defined_literals.m"
                hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__implementation_defined_literals__HeadVar__1_1, check_hlds__implementation_defined_literals__V_6_6, check_hlds__implementation_defined_literals__V_9_9);
#line 50 "implementation_defined_literals.m"
                return;
              }
#line 50 "implementation_defined_literals.m"
          }
#line 50 "implementation_defined_literals.m"
      }
#line 50 "implementation_defined_literals.m"
  }
#line 50 "implementation_defined_literals.m"
}

#line 50 "implementation_defined_literals.m"
static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__1_1,
#line 50 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__HeadVar__2_2)
#line 50 "implementation_defined_literals.m"
{
#line 50 "implementation_defined_literals.m"
  {
#line 50 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded;
#line 50 "implementation_defined_literals.m"
    MR_Integer check_hlds__implementation_defined_literals__CastX_9 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__1_1;
#line 50 "implementation_defined_literals.m"
    MR_Integer check_hlds__implementation_defined_literals__CastY_10 = (MR_Integer) check_hlds__implementation_defined_literals__HeadVar__2_2;

#line 50 "implementation_defined_literals.m"
    check_hlds__implementation_defined_literals__succeeded = (check_hlds__implementation_defined_literals__CastX_9 == check_hlds__implementation_defined_literals__CastY_10);
#line 50 "implementation_defined_literals.m"
    if (check_hlds__implementation_defined_literals__succeeded)
#line 50 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__succeeded = MR_TRUE;
#line 50 "implementation_defined_literals.m"
    else
#line 50 "implementation_defined_literals.m"
      {
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "implementation_defined_literals.m"
        MR_Word check_hlds__implementation_defined_literals__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__HeadVar__2_2, (MR_Integer) 2)));

#line 627 "check_hlds.implementation_defined_literals.c"
        {
#line 629 "check_hlds.implementation_defined_literals.c"
          check_hlds__implementation_defined_literals__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__implementation_defined_literals__V_3_3, check_hlds__implementation_defined_literals__V_6_6);
        }
#line 50 "implementation_defined_literals.m"
        if (check_hlds__implementation_defined_literals__succeeded)
#line 50 "implementation_defined_literals.m"
          {
#line 636 "check_hlds.implementation_defined_literals.c"
            {
#line 638 "check_hlds.implementation_defined_literals.c"
              check_hlds__implementation_defined_literals__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__implementation_defined_literals__V_4_4, check_hlds__implementation_defined_literals__V_7_7);
            }
#line 50 "implementation_defined_literals.m"
            if (check_hlds__implementation_defined_literals__succeeded)
#line 643 "check_hlds.implementation_defined_literals.c"
              {
#line 645 "check_hlds.implementation_defined_literals.c"
                return check_hlds__implementation_defined_literals__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__implementation_defined_literals__V_5_5, check_hlds__implementation_defined_literals__V_8_8);
              }
#line 50 "implementation_defined_literals.m"
          }
#line 50 "implementation_defined_literals.m"
      }
#line 50 "implementation_defined_literals.m"
    return check_hlds__implementation_defined_literals__succeeded;
#line 50 "implementation_defined_literals.m"
  }
#line 50 "implementation_defined_literals.m"
}

#line 207 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(
#line 207 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Var_6,
#line 207 "implementation_defined_literals.m"
  MR_String check_hlds__implementation_defined_literals__Name_7,
#line 207 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Context_8,
#line 207 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_9,
#line 207 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Goal_10)
#line 207 "implementation_defined_literals.m"
{
#line 210 "implementation_defined_literals.m"
  {
#line 210 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "file") == 0);
#line 210 "implementation_defined_literals.m"
    MR_String check_hlds__implementation_defined_literals__File_11 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Context_8, (MR_Integer) 0)));
#line 210 "implementation_defined_literals.m"
    MR_Integer check_hlds__implementation_defined_literals__Line_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Context_8, (MR_Integer) 1)));
#line 210 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_9, (MR_Integer) 0)));
#line 210 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__PredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_9, (MR_Integer) 1)));
#line 210 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_9, (MR_Integer) 2)));

#line 215 "implementation_defined_literals.m"
    if (check_hlds__implementation_defined_literals__succeeded)
#line 214 "implementation_defined_literals.m"
      {
#line 214 "implementation_defined_literals.m"
        hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__File_11, check_hlds__implementation_defined_literals__Goal_10);
#line 214 "implementation_defined_literals.m"
        return;
      }
#line 215 "implementation_defined_literals.m"
    else
#line 217 "implementation_defined_literals.m"
      {
#line 215 "implementation_defined_literals.m"
        check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "line") == 0);
#line 217 "implementation_defined_literals.m"
        if (check_hlds__implementation_defined_literals__succeeded)
#line 216 "implementation_defined_literals.m"
          {
#line 216 "implementation_defined_literals.m"
            hlds__make_goal__make_int_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Line_12, check_hlds__implementation_defined_literals__Goal_10);
#line 216 "implementation_defined_literals.m"
            return;
          }
#line 217 "implementation_defined_literals.m"
        else
#line 221 "implementation_defined_literals.m"
          {
#line 217 "implementation_defined_literals.m"
            check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "module") == 0);
#line 221 "implementation_defined_literals.m"
            if (check_hlds__implementation_defined_literals__succeeded)
#line 218 "implementation_defined_literals.m"
              {
#line 218 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__ModuleName_16;
#line 218 "implementation_defined_literals.m"
                MR_String check_hlds__implementation_defined_literals__Str_17;

#line 218 "implementation_defined_literals.m"
                {
#line 218 "implementation_defined_literals.m"
                  check_hlds__implementation_defined_literals__ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__implementation_defined_literals__PredInfo_14);
                }
#line 219 "implementation_defined_literals.m"
                {
#line 219 "implementation_defined_literals.m"
                  check_hlds__implementation_defined_literals__Str_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__implementation_defined_literals__ModuleName_16);
                }
#line 220 "implementation_defined_literals.m"
                {
#line 220 "implementation_defined_literals.m"
                  hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Str_17, check_hlds__implementation_defined_literals__Goal_10);
#line 220 "implementation_defined_literals.m"
                  return;
                }
#line 218 "implementation_defined_literals.m"
              }
#line 221 "implementation_defined_literals.m"
            else
#line 224 "implementation_defined_literals.m"
              {
#line 221 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "pred") == 0);
#line 224 "implementation_defined_literals.m"
                if (check_hlds__implementation_defined_literals__succeeded)
#line 222 "implementation_defined_literals.m"
                  {
#line 222 "implementation_defined_literals.m"
                    MR_String check_hlds__implementation_defined_literals__Str_23;

#line 222 "implementation_defined_literals.m"
                    {
#line 222 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__Str_23 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(check_hlds__implementation_defined_literals__ModuleInfo_13, check_hlds__implementation_defined_literals__PredId_15);
                    }
#line 223 "implementation_defined_literals.m"
                    {
#line 223 "implementation_defined_literals.m"
                      hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Str_23, check_hlds__implementation_defined_literals__Goal_10);
#line 223 "implementation_defined_literals.m"
                      return;
                    }
#line 222 "implementation_defined_literals.m"
                  }
#line 224 "implementation_defined_literals.m"
                else
#line 228 "implementation_defined_literals.m"
                  {
#line 224 "implementation_defined_literals.m"
                    check_hlds__implementation_defined_literals__succeeded = (strcmp(check_hlds__implementation_defined_literals__Name_7, (MR_String) "grade") == 0);
#line 228 "implementation_defined_literals.m"
                    if (check_hlds__implementation_defined_literals__succeeded)
#line 225 "implementation_defined_literals.m"
                      {
#line 225 "implementation_defined_literals.m"
                        MR_Word check_hlds__implementation_defined_literals__Globals_18;
#line 225 "implementation_defined_literals.m"
                        MR_String check_hlds__implementation_defined_literals__Grade_19;

#line 225 "implementation_defined_literals.m"
                        {
#line 225 "implementation_defined_literals.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__implementation_defined_literals__ModuleInfo_13, &check_hlds__implementation_defined_literals__Globals_18);
                        }
#line 226 "implementation_defined_literals.m"
                        {
#line 226 "implementation_defined_literals.m"
                          libs__handle_options__grade_directory_component_2_p_0(check_hlds__implementation_defined_literals__Globals_18, &check_hlds__implementation_defined_literals__Grade_19);
                        }
#line 227 "implementation_defined_literals.m"
                        {
#line 227 "implementation_defined_literals.m"
                          hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__implementation_defined_literals__Var_6, check_hlds__implementation_defined_literals__Grade_19, check_hlds__implementation_defined_literals__Goal_10);
#line 227 "implementation_defined_literals.m"
                          return;
                        }
#line 225 "implementation_defined_literals.m"
                      }
#line 228 "implementation_defined_literals.m"
                    else
#line 230 "implementation_defined_literals.m"
                      {
#line 230 "implementation_defined_literals.m"
                        {
#line 230 "implementation_defined_literals.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.implementation_defined_literals", (MR_String) "predicate \140check_hlds.implementation_defined_literals.make_impl_defined_literal\'/5", (MR_String) "unknown literal");
#line 230 "implementation_defined_literals.m"
                          return;
                        }
#line 230 "implementation_defined_literals.m"
                      }
#line 228 "implementation_defined_literals.m"
                  }
#line 224 "implementation_defined_literals.m"
              }
#line 221 "implementation_defined_literals.m"
          }
#line 217 "implementation_defined_literals.m"
      }
#line 210 "implementation_defined_literals.m"
  }
#line 207 "implementation_defined_literals.m"
}

#line 199 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(
#line 199 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_4,
#line 199 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Case0_5,
#line 199 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Case_6)
#line 199 "implementation_defined_literals.m"
{
#line 202 "implementation_defined_literals.m"
  {
#line 202 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded;
#line 202 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Case0_5, (MR_Integer) 0)));
#line 202 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Case0_5, (MR_Integer) 1)));
#line 202 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Case0_5, (MR_Integer) 2)));
#line 202 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Goal_10;

#line 204 "implementation_defined_literals.m"
    {
#line 204 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Goal0_9, &check_hlds__implementation_defined_literals__Goal_10);
    }
#line 205 "implementation_defined_literals.m"
    {
#line 205 "implementation_defined_literals.m"
      MR_Word base;
#line 205 "implementation_defined_literals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 205 "implementation_defined_literals.m"
      *check_hlds__implementation_defined_literals__Case_6 = base;
#line 205 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__MainConsId_7));
#line 205 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__OtherConsIds_8));
#line 205 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Goal_10));
#line 205 "implementation_defined_literals.m"
    }
#line 202 "implementation_defined_literals.m"
  }
#line 199 "implementation_defined_literals.m"
}

#line 160 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4(
#line 160 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 160 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 160 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
#line 160 "implementation_defined_literals.m"
{
#line 160 "implementation_defined_literals.m"
  {
#line 160 "implementation_defined_literals.m"
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
#line 160 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__conv3_Case_6;

#line 160 "implementation_defined_literals.m"
    {
#line 160 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv3_Case_6);
    }
#line 160 "implementation_defined_literals.m"
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv3_Case_6));
#line 160 "implementation_defined_literals.m"
  }
#line 160 "implementation_defined_literals.m"
}

#line 181 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3(
#line 181 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 181 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 181 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
#line 181 "implementation_defined_literals.m"
{
#line 181 "implementation_defined_literals.m"
  {
#line 181 "implementation_defined_literals.m"
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
#line 181 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__conv2_Goal_6;

#line 181 "implementation_defined_literals.m"
    {
#line 181 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv2_Goal_6);
    }
#line 181 "implementation_defined_literals.m"
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv2_Goal_6));
#line 181 "implementation_defined_literals.m"
  }
#line 181 "implementation_defined_literals.m"
}

#line 155 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2(
#line 155 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 155 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 155 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
#line 155 "implementation_defined_literals.m"
{
#line 155 "implementation_defined_literals.m"
  {
#line 155 "implementation_defined_literals.m"
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
#line 155 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__conv1_Goal_6;

#line 155 "implementation_defined_literals.m"
    {
#line 155 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv1_Goal_6);
    }
#line 155 "implementation_defined_literals.m"
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv1_Goal_6));
#line 155 "implementation_defined_literals.m"
  }
#line 155 "implementation_defined_literals.m"
}

#line 150 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1(
#line 150 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 150 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 150 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
#line 150 "implementation_defined_literals.m"
{
#line 150 "implementation_defined_literals.m"
  {
#line 150 "implementation_defined_literals.m"
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
#line 150 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__conv0_Goal_6;

#line 150 "implementation_defined_literals.m"
    {
#line 150 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv0_Goal_6);
    }
#line 150 "implementation_defined_literals.m"
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_Goal_6));
#line 150 "implementation_defined_literals.m"
  }
#line 150 "implementation_defined_literals.m"
}

#line 86 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(
#line 86 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_4,
#line 86 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Goal0_5,
#line 86 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Goal_6)
#line 86 "implementation_defined_literals.m"
{
#line 89 "implementation_defined_literals.m"
  {
#line 89 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded;
#line 89 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal0_5, (MR_Integer) 0)));
#line 89 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal0_5, (MR_Integer) 1)));

#line 136 "implementation_defined_literals.m"
#line 136 "implementation_defined_literals.m"
    switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__GoalExpr0_7)) {
#line 136 "implementation_defined_literals.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "implementation_defined_literals.m"
      case (MR_Integer) 0:
#line 137 "implementation_defined_literals.m"
        {
#line 137 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__SubGoal0_59 = (MR_Word) MR_body(((MR_Word) check_hlds__implementation_defined_literals__GoalExpr0_7), (MR_Integer) 0);
#line 137 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__SubGoal_60;
#line 137 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__GoalExpr_117;

#line 138 "implementation_defined_literals.m"
          {
#line 138 "implementation_defined_literals.m"
            check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__SubGoal0_59, &check_hlds__implementation_defined_literals__SubGoal_60);
          }
#line 139 "implementation_defined_literals.m"
          check_hlds__implementation_defined_literals__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__implementation_defined_literals__SubGoal_60);
#line 140 "implementation_defined_literals.m"
          {
#line 140 "implementation_defined_literals.m"
            MR_Word base;
#line 140 "implementation_defined_literals.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 140 "implementation_defined_literals.m"
            *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 140 "implementation_defined_literals.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_117));
#line 140 "implementation_defined_literals.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 140 "implementation_defined_literals.m"
          }
#line 137 "implementation_defined_literals.m"
        }
#line 136 "implementation_defined_literals.m"
        break;
#line 136 "implementation_defined_literals.m"
      case (MR_Integer) 1:
#line 92 "implementation_defined_literals.m"
        {
#line 92 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 0)));
#line 92 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__RHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
#line 92 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
#line 92 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__Kind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 3)));
#line 92 "implementation_defined_literals.m"
          MR_Word check_hlds__implementation_defined_literals__UnifyContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 4)));

#line 122 "implementation_defined_literals.m"
#line 122 "implementation_defined_literals.m"
          switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__RHS0_10)) {
#line 122 "implementation_defined_literals.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 122 "implementation_defined_literals.m"
            case (MR_Integer) 0:
#line 134 "implementation_defined_literals.m"
              *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
#line 122 "implementation_defined_literals.m"
              break;
#line 122 "implementation_defined_literals.m"
            case (MR_Integer) 1:
#line 94 "implementation_defined_literals.m"
              {
#line 94 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)));
#line 94 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 1)));
#line 94 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 2)));

#line 101 "implementation_defined_literals.m"
#line 101 "implementation_defined_literals.m"
                switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__ConsId_14)) {
#line 101 "implementation_defined_literals.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 101 "implementation_defined_literals.m"
                  case (MR_Integer) 0:
#line 120 "implementation_defined_literals.m"
                    *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
#line 101 "implementation_defined_literals.m"
                    break;
#line 101 "implementation_defined_literals.m"
                  case (MR_Integer) 1:
#line 120 "implementation_defined_literals.m"
                    *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
#line 101 "implementation_defined_literals.m"
                    break;
#line 101 "implementation_defined_literals.m"
                  case (MR_Integer) 2:
#line 120 "implementation_defined_literals.m"
                    *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
#line 101 "implementation_defined_literals.m"
                    break;
#line 101 "implementation_defined_literals.m"
                  case (MR_Integer) 3:
#line 101 "implementation_defined_literals.m"
#line 101 "implementation_defined_literals.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__ConsId_14, (MR_Integer) 0)))) {
#line 101 "implementation_defined_literals.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 0:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 1:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 2:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 3:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 4:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 5:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 6:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 7:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 8:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 10:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 11:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 12:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 13:
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 14:
#line 120 "implementation_defined_literals.m"
                        *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
#line 101 "implementation_defined_literals.m"
                        break;
#line 101 "implementation_defined_literals.m"
                      case (MR_Integer) 9:
#line 96 "implementation_defined_literals.m"
                        {
#line 96 "implementation_defined_literals.m"
                          MR_String check_hlds__implementation_defined_literals__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__ConsId_14, (MR_Integer) 1)));
#line 96 "implementation_defined_literals.m"
                          MR_Word check_hlds__implementation_defined_literals__Context_18;
#line 96 "implementation_defined_literals.m"
                          MR_Word check_hlds__implementation_defined_literals__Goal1_19;
#line 96 "implementation_defined_literals.m"
                          MR_Word check_hlds__implementation_defined_literals__GoalExpr_20;
#line 99 "implementation_defined_literals.m"
                          MR_Word check_hlds__implementation_defined_literals__V_21_21;

#line 97 "implementation_defined_literals.m"
                          {
#line 97 "implementation_defined_literals.m"
                            check_hlds__implementation_defined_literals__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__implementation_defined_literals__GoalInfo0_8);
                          }
#line 98 "implementation_defined_literals.m"
                          {
#line 98 "implementation_defined_literals.m"
                            check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(check_hlds__implementation_defined_literals__Var_9, check_hlds__implementation_defined_literals__Name_17, check_hlds__implementation_defined_literals__Context_18, check_hlds__implementation_defined_literals__Info_4, &check_hlds__implementation_defined_literals__Goal1_19);
                          }
#line 99 "implementation_defined_literals.m"
                          check_hlds__implementation_defined_literals__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal1_19, (MR_Integer) 0)));
#line 99 "implementation_defined_literals.m"
                          check_hlds__implementation_defined_literals__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Goal1_19, (MR_Integer) 1)));
#line 100 "implementation_defined_literals.m"
                          {
#line 100 "implementation_defined_literals.m"
                            MR_Word base;
#line 100 "implementation_defined_literals.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "implementation_defined_literals.m"
                            *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 100 "implementation_defined_literals.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_20));
#line 100 "implementation_defined_literals.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 100 "implementation_defined_literals.m"
                          }
#line 96 "implementation_defined_literals.m"
                        }
#line 101 "implementation_defined_literals.m"
                        break;
#line 101 "implementation_defined_literals.m"
                    }
#line 101 "implementation_defined_literals.m"
                    break;
#line 101 "implementation_defined_literals.m"
                }
#line 94 "implementation_defined_literals.m"
              }
#line 122 "implementation_defined_literals.m"
              break;
#line 122 "implementation_defined_literals.m"
            case (MR_Integer) 2:
#line 125 "implementation_defined_literals.m"
              {
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__LambdaPurity_47 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__Groundness_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__PredOrFunc_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__LambdaNonLocals_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 2)));
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__LambdaQuantVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 3)));
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__LambdaModes_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 4)));
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__LambdaDetism_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 5)));
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__LambdaGoal0_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS0_10, (MR_Integer) 6)));
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__LambdaGoal_56;
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__RHS_57;
#line 125 "implementation_defined_literals.m"
                MR_Word check_hlds__implementation_defined_literals__GoalExpr_116;

#line 126 "implementation_defined_literals.m"
                {
#line 126 "implementation_defined_literals.m"
                  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__LambdaGoal0_55, &check_hlds__implementation_defined_literals__LambdaGoal_56);
                }
#line 127 "implementation_defined_literals.m"
                {
#line 127 "implementation_defined_literals.m"
                  check_hlds__implementation_defined_literals__RHS_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 127 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_57, 0) = ((MR_Box) ((check_hlds__implementation_defined_literals__LambdaPurity_47 | ((((check_hlds__implementation_defined_literals__Groundness_48 << (MR_Integer) 2)) | ((check_hlds__implementation_defined_literals__PredOrFunc_49 << (MR_Integer) 3)))))));
#line 127 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_57, 1) = (MR_Integer) 0;
#line 127 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_57, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaNonLocals_51));
#line 127 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_57, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaQuantVars_52));
#line 127 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_57, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaModes_53));
#line 127 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_57, 5) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaDetism_54));
#line 127 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__RHS_57, 6) = ((MR_Box) (check_hlds__implementation_defined_literals__LambdaGoal_56));
#line 127 "implementation_defined_literals.m"
                }
#line 130 "implementation_defined_literals.m"
                {
#line 130 "implementation_defined_literals.m"
                  check_hlds__implementation_defined_literals__GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 130 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_116, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_9));
#line 130 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_116, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__RHS_57));
#line 130 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_116, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Mode_11));
#line 130 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_116, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Kind_12));
#line 130 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__GoalExpr_116, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__UnifyContext_13));
#line 130 "implementation_defined_literals.m"
                }
#line 131 "implementation_defined_literals.m"
                {
#line 131 "implementation_defined_literals.m"
                  MR_Word base;
#line 131 "implementation_defined_literals.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "implementation_defined_literals.m"
                  *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 131 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_116));
#line 131 "implementation_defined_literals.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 131 "implementation_defined_literals.m"
                }
#line 125 "implementation_defined_literals.m"
              }
#line 122 "implementation_defined_literals.m"
              break;
#line 122 "implementation_defined_literals.m"
          }
#line 92 "implementation_defined_literals.m"
        }
#line 136 "implementation_defined_literals.m"
        break;
#line 136 "implementation_defined_literals.m"
      case (MR_Integer) 2:
#line 196 "implementation_defined_literals.m"
        *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
#line 136 "implementation_defined_literals.m"
        break;
#line 136 "implementation_defined_literals.m"
      case (MR_Integer) 3:
#line 136 "implementation_defined_literals.m"
#line 136 "implementation_defined_literals.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 0)))) {
#line 136 "implementation_defined_literals.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 0:
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 1:
#line 196 "implementation_defined_literals.m"
            *check_hlds__implementation_defined_literals__Goal_6 = check_hlds__implementation_defined_literals__Goal0_5;
#line 136 "implementation_defined_literals.m"
            break;
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 2:
#line 149 "implementation_defined_literals.m"
            {
#line 149 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_131_131;
#line 149 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__ConjType_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
#line 149 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Goals0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
#line 149 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Goals_64;
#line 149 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__V_115_115;
#line 149 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_121;

#line 150 "implementation_defined_literals.m"
              {
#line 150 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 150 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_115_115, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
#line 150 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_115_115, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1));
#line 150 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 150 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_115_115, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
#line 150 "implementation_defined_literals.m"
              }
#line 1365 "check_hlds.implementation_defined_literals.c"
              check_hlds__implementation_defined_literals__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 150 "implementation_defined_literals.m"
              {
#line 150 "implementation_defined_literals.m"
                mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_131_131, check_hlds__implementation_defined_literals__TypeCtorInfo_131_131, check_hlds__implementation_defined_literals__V_115_115, check_hlds__implementation_defined_literals__Goals0_63, &check_hlds__implementation_defined_literals__Goals_64);
              }
#line 151 "implementation_defined_literals.m"
              {
#line 151 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 151 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 151 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_121, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__ConjType_62));
#line 151 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_121, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Goals_64));
#line 151 "implementation_defined_literals.m"
              }
#line 152 "implementation_defined_literals.m"
              {
#line 152 "implementation_defined_literals.m"
                MR_Word base;
#line 152 "implementation_defined_literals.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "implementation_defined_literals.m"
                *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 152 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_121));
#line 152 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 152 "implementation_defined_literals.m"
              }
#line 149 "implementation_defined_literals.m"
            }
#line 136 "implementation_defined_literals.m"
            break;
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 3:
#line 154 "implementation_defined_literals.m"
            {
#line 154 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_134_134;
#line 154 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__V_114_114;
#line 154 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_122;
#line 154 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Goals0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
#line 154 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Goals_124;

#line 155 "implementation_defined_literals.m"
              {
#line 155 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 155 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_114_114, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
#line 155 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_114_114, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2));
#line 155 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_114_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 155 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_114_114, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
#line 155 "implementation_defined_literals.m"
              }
#line 1431 "check_hlds.implementation_defined_literals.c"
              check_hlds__implementation_defined_literals__TypeCtorInfo_134_134 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 155 "implementation_defined_literals.m"
              {
#line 155 "implementation_defined_literals.m"
                mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_134_134, check_hlds__implementation_defined_literals__TypeCtorInfo_134_134, check_hlds__implementation_defined_literals__V_114_114, check_hlds__implementation_defined_literals__Goals0_123, &check_hlds__implementation_defined_literals__Goals_124);
              }
#line 156 "implementation_defined_literals.m"
              {
#line 156 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 156 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_122, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Goals_124));
#line 156 "implementation_defined_literals.m"
              }
#line 157 "implementation_defined_literals.m"
              {
#line 157 "implementation_defined_literals.m"
                MR_Word base;
#line 157 "implementation_defined_literals.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 157 "implementation_defined_literals.m"
                *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 157 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_122));
#line 157 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 157 "implementation_defined_literals.m"
              }
#line 154 "implementation_defined_literals.m"
            }
#line 136 "implementation_defined_literals.m"
            break;
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 4:
#line 159 "implementation_defined_literals.m"
            {
#line 159 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_137_137;
#line 159 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__CanFail_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
#line 159 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Cases0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 3)));
#line 159 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Cases_67;
#line 159 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__V_113_113;
#line 159 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
#line 159 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_126;

#line 160 "implementation_defined_literals.m"
              {
#line 160 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 160 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_113_113, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[2]));
#line 160 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_113_113, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4));
#line 160 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_113_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 160 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_113_113, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
#line 160 "implementation_defined_literals.m"
              }
#line 1499 "check_hlds.implementation_defined_literals.c"
              check_hlds__implementation_defined_literals__TypeCtorInfo_137_137 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 160 "implementation_defined_literals.m"
              {
#line 160 "implementation_defined_literals.m"
                mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_137_137, check_hlds__implementation_defined_literals__TypeCtorInfo_137_137, check_hlds__implementation_defined_literals__V_113_113, check_hlds__implementation_defined_literals__Cases0_66, &check_hlds__implementation_defined_literals__Cases_67);
              }
#line 161 "implementation_defined_literals.m"
              {
#line 161 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__GoalExpr_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 161 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 161 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_126, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Var_125));
#line 161 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_126, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__CanFail_65));
#line 161 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_126, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Cases_67));
#line 161 "implementation_defined_literals.m"
              }
#line 162 "implementation_defined_literals.m"
              {
#line 162 "implementation_defined_literals.m"
                MR_Word base;
#line 162 "implementation_defined_literals.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "implementation_defined_literals.m"
                *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 162 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_126));
#line 162 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 162 "implementation_defined_literals.m"
              }
#line 159 "implementation_defined_literals.m"
            }
#line 136 "implementation_defined_literals.m"
            break;
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 5:
#line 142 "implementation_defined_literals.m"
            {
#line 142 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Reason_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
#line 142 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_118;
#line 142 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__SubGoal0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
#line 142 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__SubGoal_120;

#line 145 "implementation_defined_literals.m"
              {
#line 145 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__SubGoal0_119, &check_hlds__implementation_defined_literals__SubGoal_120);
              }
#line 146 "implementation_defined_literals.m"
              {
#line 146 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 146 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 146 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_118, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Reason_61));
#line 146 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_118, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__SubGoal_120));
#line 146 "implementation_defined_literals.m"
              }
#line 147 "implementation_defined_literals.m"
              {
#line 147 "implementation_defined_literals.m"
                MR_Word base;
#line 147 "implementation_defined_literals.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "implementation_defined_literals.m"
                *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 147 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_118));
#line 147 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 147 "implementation_defined_literals.m"
              }
#line 142 "implementation_defined_literals.m"
            }
#line 136 "implementation_defined_literals.m"
            break;
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 6:
#line 164 "implementation_defined_literals.m"
            {
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Vars_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Cond0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 2)));
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Then0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 3)));
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Else0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 4)));
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Cond_72;
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Then_73;
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Else_74;
#line 164 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_127;

#line 165 "implementation_defined_literals.m"
              {
#line 165 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Cond0_69, &check_hlds__implementation_defined_literals__Cond_72);
              }
#line 166 "implementation_defined_literals.m"
              {
#line 166 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Then0_70, &check_hlds__implementation_defined_literals__Then_73);
              }
#line 167 "implementation_defined_literals.m"
              {
#line 167 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Else0_71, &check_hlds__implementation_defined_literals__Else_74);
              }
#line 168 "implementation_defined_literals.m"
              {
#line 168 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 168 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 168 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Vars_68));
#line 168 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__Cond_72));
#line 168 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Then_73));
#line 168 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_127, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__Else_74));
#line 168 "implementation_defined_literals.m"
              }
#line 169 "implementation_defined_literals.m"
              {
#line 169 "implementation_defined_literals.m"
                MR_Word base;
#line 169 "implementation_defined_literals.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "implementation_defined_literals.m"
                *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 169 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_127));
#line 169 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 169 "implementation_defined_literals.m"
              }
#line 164 "implementation_defined_literals.m"
            }
#line 136 "implementation_defined_literals.m"
            break;
#line 136 "implementation_defined_literals.m"
          case (MR_Integer) 7:
#line 171 "implementation_defined_literals.m"
            {
#line 171 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Shorthand0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr0_7, (MR_Integer) 1)));
#line 171 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__Shorthand_80;
#line 171 "implementation_defined_literals.m"
              MR_Word check_hlds__implementation_defined_literals__GoalExpr_128;

#line 177 "implementation_defined_literals.m"
#line 177 "implementation_defined_literals.m"
              switch (MR_tag((MR_Word) check_hlds__implementation_defined_literals__Shorthand0_75)) {
#line 177 "implementation_defined_literals.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "implementation_defined_literals.m"
                case (MR_Integer) 0:
#line 173 "implementation_defined_literals.m"
                  {
#line 173 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__A0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 0)));
#line 173 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__B0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 1)));
#line 173 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__A_78;
#line 173 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__B_79;

#line 174 "implementation_defined_literals.m"
                    {
#line 174 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__A0_76, &check_hlds__implementation_defined_literals__A_78);
                    }
#line 175 "implementation_defined_literals.m"
                    {
#line 175 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__B0_77, &check_hlds__implementation_defined_literals__B_79);
                    }
#line 176 "implementation_defined_literals.m"
                    {
#line 176 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__Shorthand_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 176 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand_80, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__A_78));
#line 176 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Shorthand_80, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__B_79));
#line 176 "implementation_defined_literals.m"
                    }
#line 173 "implementation_defined_literals.m"
                  }
#line 177 "implementation_defined_literals.m"
                  break;
#line 177 "implementation_defined_literals.m"
                case (MR_Integer) 1:
#line 179 "implementation_defined_literals.m"
                  {
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_140_140;
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__GoalType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 0)));
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__OuterVars_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 1)));
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__InnerVars_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 2)));
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__OutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 3)));
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__MainGoal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 4)));
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__OrElseGoals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 5)));
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 6)));
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__MainGoal_88;
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__OrElseGoals_89;
#line 179 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__V_112_112;

#line 180 "implementation_defined_literals.m"
                    {
#line 180 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__MainGoal0_85, &check_hlds__implementation_defined_literals__MainGoal_88);
                    }
#line 181 "implementation_defined_literals.m"
                    {
#line 181 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 181 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_112_112, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
#line 181 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_112_112, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3));
#line 181 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 181 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_112_112, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_4));
#line 181 "implementation_defined_literals.m"
                    }
#line 1755 "check_hlds.implementation_defined_literals.c"
                    check_hlds__implementation_defined_literals__TypeCtorInfo_140_140 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 181 "implementation_defined_literals.m"
                    {
#line 181 "implementation_defined_literals.m"
                      mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_140_140, check_hlds__implementation_defined_literals__TypeCtorInfo_140_140, check_hlds__implementation_defined_literals__V_112_112, check_hlds__implementation_defined_literals__OrElseGoals0_86, &check_hlds__implementation_defined_literals__OrElseGoals_89);
                    }
#line 182 "implementation_defined_literals.m"
                    {
#line 182 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__Shorthand_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 182 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_80, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalType_81));
#line 182 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_80, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__OuterVars_82));
#line 182 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_80, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__InnerVars_83));
#line 182 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_80, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__OutputVars_84));
#line 182 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_80, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__MainGoal_88));
#line 182 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_80, 5) = ((MR_Box) (check_hlds__implementation_defined_literals__OrElseGoals_89));
#line 182 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(1), check_hlds__implementation_defined_literals__Shorthand_80, 6) = ((MR_Box) (check_hlds__implementation_defined_literals__OrElseInners_87));
#line 182 "implementation_defined_literals.m"
                    }
#line 179 "implementation_defined_literals.m"
                  }
#line 177 "implementation_defined_literals.m"
                  break;
#line 177 "implementation_defined_literals.m"
                case (MR_Integer) 2:
#line 185 "implementation_defined_literals.m"
                  {
#line 185 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__MaybeIOVars_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 0)));
#line 185 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__ResultVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 1)));
#line 185 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__TryGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand0_75, (MR_Integer) 2)));
#line 185 "implementation_defined_literals.m"
                    MR_Word check_hlds__implementation_defined_literals__TryGoal_93;

#line 186 "implementation_defined_literals.m"
                    {
#line 186 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__TryGoal0_92, &check_hlds__implementation_defined_literals__TryGoal_93);
                    }
#line 187 "implementation_defined_literals.m"
                    {
#line 187 "implementation_defined_literals.m"
                      check_hlds__implementation_defined_literals__Shorthand_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand_80, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__MaybeIOVars_90));
#line 187 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand_80, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__ResultVar_91));
#line 187 "implementation_defined_literals.m"
                      MR_hl_field(MR_mktag(2), check_hlds__implementation_defined_literals__Shorthand_80, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__TryGoal_93));
#line 187 "implementation_defined_literals.m"
                    }
#line 185 "implementation_defined_literals.m"
                  }
#line 177 "implementation_defined_literals.m"
                  break;
#line 177 "implementation_defined_literals.m"
              }
#line 189 "implementation_defined_literals.m"
              {
#line 189 "implementation_defined_literals.m"
                check_hlds__implementation_defined_literals__GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 189 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(3), check_hlds__implementation_defined_literals__GoalExpr_128, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Shorthand_80));
#line 189 "implementation_defined_literals.m"
              }
#line 190 "implementation_defined_literals.m"
              {
#line 190 "implementation_defined_literals.m"
                MR_Word base;
#line 190 "implementation_defined_literals.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "implementation_defined_literals.m"
                *check_hlds__implementation_defined_literals__Goal_6 = base;
#line 190 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalExpr_128));
#line 190 "implementation_defined_literals.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__GoalInfo0_8));
#line 190 "implementation_defined_literals.m"
              }
#line 171 "implementation_defined_literals.m"
            }
#line 136 "implementation_defined_literals.m"
            break;
#line 136 "implementation_defined_literals.m"
        }
#line 136 "implementation_defined_literals.m"
        break;
#line 136 "implementation_defined_literals.m"
    }
#line 89 "implementation_defined_literals.m"
  }
#line 86 "implementation_defined_literals.m"
}

#line 78 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(
#line 78 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Info_4,
#line 78 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__Clause0_5,
#line 78 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__Clause_6)
#line 78 "implementation_defined_literals.m"
{
#line 81 "implementation_defined_literals.m"
  {
#line 81 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded;
#line 81 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Body0_7;
#line 81 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Body_8;
#line 84 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__V_9_9;
#line 84 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__V_11_11;
#line 84 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__V_12_12;
#line 84 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__V_13_13;
#line 84 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__V_10_10;

#line 82 "implementation_defined_literals.m"
    {
#line 82 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__Body0_7 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__implementation_defined_literals__Clause0_5);
    }
#line 83 "implementation_defined_literals.m"
    {
#line 83 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(check_hlds__implementation_defined_literals__Info_4, check_hlds__implementation_defined_literals__Body0_7, &check_hlds__implementation_defined_literals__Body_8);
    }
#line 84 "implementation_defined_literals.m"
    check_hlds__implementation_defined_literals__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 0)));
#line 84 "implementation_defined_literals.m"
    check_hlds__implementation_defined_literals__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 1)));
#line 84 "implementation_defined_literals.m"
    check_hlds__implementation_defined_literals__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 2)));
#line 84 "implementation_defined_literals.m"
    check_hlds__implementation_defined_literals__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 3)));
#line 84 "implementation_defined_literals.m"
    check_hlds__implementation_defined_literals__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Clause0_5, (MR_Integer) 4)));
#line 84 "implementation_defined_literals.m"
    {
#line 84 "implementation_defined_literals.m"
      MR_Word base;
#line 84 "implementation_defined_literals.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 84 "implementation_defined_literals.m"
      *check_hlds__implementation_defined_literals__Clause_6 = base;
#line 84 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__V_9_9));
#line 84 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__Body_8));
#line 84 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__V_11_11));
#line 84 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__V_12_12));
#line 84 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__implementation_defined_literals__V_13_13));
#line 84 "implementation_defined_literals.m"
    }
#line 81 "implementation_defined_literals.m"
  }
#line 78 "implementation_defined_literals.m"
}

#line 72 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1(
#line 72 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 72 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 72 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_2)
#line 72 "implementation_defined_literals.m"
{
#line 72 "implementation_defined_literals.m"
  {
#line 72 "implementation_defined_literals.m"
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
#line 72 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__conv0_Clause_6;

#line 72 "implementation_defined_literals.m"
    {
#line 72 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), &check_hlds__implementation_defined_literals__conv0_Clause_6);
    }
#line 72 "implementation_defined_literals.m"
    *check_hlds__implementation_defined_literals__wrapper_arg_2 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_Clause_6));
#line 72 "implementation_defined_literals.m"
  }
#line 72 "implementation_defined_literals.m"
}

#line 64 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(
#line 64 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__ModuleInfo_5,
#line 64 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__PredId_6,
#line 64 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__PredInfo0_7,
#line 64 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__PredInfo_8)
#line 64 "implementation_defined_literals.m"
{
#line 67 "implementation_defined_literals.m"
  {
#line 67 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_20_20;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__ClausesInfo0_9;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__ClausesRep0_10;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__ItemNumbers_11;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Clauses0_12;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Info_13;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Clauses_14;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__ClausesRep_15;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__ClausesInfo_16;
#line 67 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__V_17_17;

#line 68 "implementation_defined_literals.m"
    {
#line 68 "implementation_defined_literals.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__implementation_defined_literals__PredInfo0_7, &check_hlds__implementation_defined_literals__ClausesInfo0_9);
    }
#line 69 "implementation_defined_literals.m"
    {
#line 69 "implementation_defined_literals.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__implementation_defined_literals__ClausesInfo0_9, &check_hlds__implementation_defined_literals__ClausesRep0_10, &check_hlds__implementation_defined_literals__ItemNumbers_11);
    }
#line 70 "implementation_defined_literals.m"
    {
#line 70 "implementation_defined_literals.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__implementation_defined_literals__ClausesRep0_10, &check_hlds__implementation_defined_literals__Clauses0_12);
    }
#line 71 "implementation_defined_literals.m"
    {
#line 71 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__Info_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 71 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_13, 0) = ((MR_Box) (check_hlds__implementation_defined_literals__ModuleInfo_5));
#line 71 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_13, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__PredInfo0_7));
#line 71 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__Info_13, 2) = ((MR_Box) (check_hlds__implementation_defined_literals__PredId_6));
#line 71 "implementation_defined_literals.m"
    }
#line 72 "implementation_defined_literals.m"
    {
#line 72 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 72 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_17_17, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[0]));
#line 72 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_17_17, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1));
#line 72 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 72 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_17_17, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__Info_13));
#line 72 "implementation_defined_literals.m"
    }
#line 2045 "check_hlds.implementation_defined_literals.c"
    check_hlds__implementation_defined_literals__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 72 "implementation_defined_literals.m"
    {
#line 72 "implementation_defined_literals.m"
      mercury__list__map_3_p_0(check_hlds__implementation_defined_literals__TypeCtorInfo_20_20, check_hlds__implementation_defined_literals__TypeCtorInfo_20_20, check_hlds__implementation_defined_literals__V_17_17, check_hlds__implementation_defined_literals__Clauses0_12, &check_hlds__implementation_defined_literals__Clauses_14);
    }
#line 73 "implementation_defined_literals.m"
    {
#line 73 "implementation_defined_literals.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__implementation_defined_literals__Clauses_14, &check_hlds__implementation_defined_literals__ClausesRep_15);
    }
#line 74 "implementation_defined_literals.m"
    {
#line 74 "implementation_defined_literals.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__implementation_defined_literals__ClausesRep_15, check_hlds__implementation_defined_literals__ItemNumbers_11, check_hlds__implementation_defined_literals__ClausesInfo0_9, &check_hlds__implementation_defined_literals__ClausesInfo_16);
    }
#line 76 "implementation_defined_literals.m"
    {
#line 76 "implementation_defined_literals.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__implementation_defined_literals__ClausesInfo_16, check_hlds__implementation_defined_literals__PredInfo0_7, check_hlds__implementation_defined_literals__PredInfo_8);
#line 76 "implementation_defined_literals.m"
      return;
    }
#line 67 "implementation_defined_literals.m"
  }
#line 64 "implementation_defined_literals.m"
}

#line 61 "implementation_defined_literals.m"
static void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1(
#line 61 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__closure_arg,
#line 61 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_1,
#line 61 "implementation_defined_literals.m"
  MR_Box check_hlds__implementation_defined_literals__wrapper_arg_2,
#line 61 "implementation_defined_literals.m"
  MR_Box * check_hlds__implementation_defined_literals__wrapper_arg_3)
#line 61 "implementation_defined_literals.m"
{
#line 61 "implementation_defined_literals.m"
  {
#line 61 "implementation_defined_literals.m"
    MR_Box check_hlds__implementation_defined_literals__closure = check_hlds__implementation_defined_literals__closure_arg;
#line 61 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__conv0_PredInfo_8;

#line 61 "implementation_defined_literals.m"
    {
#line 61 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_1), ((MR_Word) check_hlds__implementation_defined_literals__wrapper_arg_2), &check_hlds__implementation_defined_literals__conv0_PredInfo_8);
    }
#line 61 "implementation_defined_literals.m"
    *check_hlds__implementation_defined_literals__wrapper_arg_3 = ((MR_Box) (check_hlds__implementation_defined_literals__conv0_PredInfo_8));
#line 61 "implementation_defined_literals.m"
  }
#line 61 "implementation_defined_literals.m"
}

#line 24 "implementation_defined_literals.m"
void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(
#line 24 "implementation_defined_literals.m"
  MR_Word check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6,
#line 24 "implementation_defined_literals.m"
  MR_Word * check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_7)
#line 24 "implementation_defined_literals.m"
{
#line 59 "implementation_defined_literals.m"
  {
#line 59 "implementation_defined_literals.m"
    MR_bool check_hlds__implementation_defined_literals__succeeded;
#line 59 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__TypeCtorInfo_14_14;
#line 59 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Preds0_4;
#line 59 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__Preds_5;
#line 59 "implementation_defined_literals.m"
    MR_Word check_hlds__implementation_defined_literals__V_8_8;

#line 60 "implementation_defined_literals.m"
    {
#line 60 "implementation_defined_literals.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6, &check_hlds__implementation_defined_literals__Preds0_4);
    }
#line 61 "implementation_defined_literals.m"
    {
#line 61 "implementation_defined_literals.m"
      check_hlds__implementation_defined_literals__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 61 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_8_8, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_1[0]));
#line 61 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_8_8, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1));
#line 61 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 61 "implementation_defined_literals.m"
      MR_hl_field(MR_mktag(0), check_hlds__implementation_defined_literals__V_8_8, 3) = ((MR_Box) (check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6));
#line 61 "implementation_defined_literals.m"
    }
#line 2147 "check_hlds.implementation_defined_literals.c"
    check_hlds__implementation_defined_literals__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 61 "implementation_defined_literals.m"
    {
#line 61 "implementation_defined_literals.m"
      mercury__map__map_values_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__implementation_defined_literals__TypeCtorInfo_14_14, check_hlds__implementation_defined_literals__TypeCtorInfo_14_14, check_hlds__implementation_defined_literals__V_8_8, check_hlds__implementation_defined_literals__Preds0_4, &check_hlds__implementation_defined_literals__Preds_5);
    }
#line 62 "implementation_defined_literals.m"
    {
#line 62 "implementation_defined_literals.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__implementation_defined_literals__Preds_5, check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_0_6, check_hlds__implementation_defined_literals__STATE_VARIABLE_ModuleInfo_7);
#line 62 "implementation_defined_literals.m"
      return;
    }
#line 59 "implementation_defined_literals.m"
  }
#line 24 "implementation_defined_literals.m"
}

void mercury__check_hlds__implementation_defined_literals__init(void)
{
}

void mercury__check_hlds__implementation_defined_literals__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0);
}

void mercury__check_hlds__implementation_defined_literals__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.implementation_defined_literals. */
