/*
** Automatically generated from `simplify_goal_ite.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module check_hlds.simplify.simplify_goal_ite. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_ite__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_ite.mih"


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
#include "check_hlds.type_util.mih"
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
#include "libs.compiler_util.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
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




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_ite__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1;

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_ptag_ordered_cond_can_switch_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0[3];

static const MR_Integer check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0[3];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_ite__can_switch_on_type_1_f_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__TypeBody_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_ite__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__ModuleInfo_6,
  MR_Word check_hlds__simplify__simplify_goal_ite__VarTypes_7,
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond_8,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__Vars_14,
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond0_15,
  MR_Word check_hlds__simplify__simplify_goal_ite__Then0_16,
  MR_Word check_hlds__simplify__simplify_goal_ite__Else0_17,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_18,
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_19,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_20,
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_21,
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_22,
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_23,
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_24,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_69,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_6,
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_7,
  MR_String check_hlds__simplify__simplify_goal_ite__Problem_8,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_17);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_1[21][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_2[2][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_4[1][8];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "could be replaced by a switch"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: this if-then-else"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the negated goal cannot fail."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_ite_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Integer) 24 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the negated goal cannot succeed."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_ite_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (((MR_Integer) 24 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the condition of this if-then-else"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 45)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[9])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[14])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_ite__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_ite__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0 = {
  (MR_String) "cond_can_switch_uncommitted",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1 = {
  (MR_String) "cond_can_switch_on",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2 = {
  (MR_String) "cond_cannot_switch",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0[2] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1[1] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_ptag_ordered_cond_can_switch_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0[3] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2
};

static const MR_Integer check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_ite",
  (MR_String) "cond_can_switch",
  {     check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0 },
  {     check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_ptag_ordered_cond_can_switch_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;

    {
      check_hlds__simplify__simplify_goal_ite__succeeded = check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_goal_ite__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_goal_ite__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(&check_hlds__simplify__simplify_goal_ite__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_goal_ite__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_10 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_11 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3;

    check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastX_10 == check_hlds__simplify__simplify_goal_ite__CastY_11);
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__simplify__simplify_goal_ite__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_ite_scalar_common_1[0], check_hlds__simplify__simplify_goal_ite__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_13_13)), ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_7_7)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_9 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1;
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_10 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;

    check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastX_9 == check_hlds__simplify__simplify_goal_ite__CastY_10);
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
      check_hlds__simplify__simplify_goal_ite__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_3 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1;
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_4 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;

                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastY_4 == check_hlds__simplify__simplify_goal_ite__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_7 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1;
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_8 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;

                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastY_8 == check_hlds__simplify__simplify_goal_ite__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__simplify__simplify_goal_ite__TypeInfo_11_11;
            MR_Word check_hlds__simplify__simplify_goal_ite__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_ite__V_6_6;

            check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
              {
                check_hlds__simplify__simplify_goal_ite__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_ite__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_goal_ite_scalar_common_1[0];
                {
                  check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_ite__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_6_6)));
                }
              }
          }
          break;
      }
    return check_hlds__simplify__simplify_goal_ite__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_ite__can_switch_on_type_1_f_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__TypeBody_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4;

    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__TypeBody_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "foreign type");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_goal_ite__DuTypeKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__simplify_goal_ite___Ctors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__simplify_goal_ite___TagValues_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal_ite___CheaperTagTest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__simplify_goal_ite___UserEq_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 4)));
          MR_Word check_hlds__simplify__simplify_goal_ite___DirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 5)));
          MR_Word check_hlds__simplify__simplify_goal_ite___ReservedTag_11 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_goal_ite___ReservedAddr_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_goal_ite___MaybeForeignType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 7)));

          switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__DuTypeKind_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__DuTypeKind_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 0;
                  break;
              }
              break;
            case (MR_Integer) 1:
              check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "eqv type");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "solver type");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "abstract type");
              }
            }
            break;
        }
        break;
    }
    return check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_ite__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_3)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_ite__closure = check_hlds__simplify__simplify_goal_ite__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_ite__conv0_STATE_VARIABLE_CondCanSwitch_87;

    {
      check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_2), &check_hlds__simplify__simplify_goal_ite__conv0_STATE_VARIABLE_CondCanSwitch_87);
    }
    *check_hlds__simplify__simplify_goal_ite__wrapper_arg_3 = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__conv0_STATE_VARIABLE_CondCanSwitch_87));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__ModuleInfo_6,
  MR_Word check_hlds__simplify__simplify_goal_ite__VarTypes_7,
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond_8,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
        MR_Word check_hlds__simplify__simplify_goal_ite__CondExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_8, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_ite___CondInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_8, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__CondExpr_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__simplify__simplify_goal_ite__SubGoal_42 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__CondExpr_10), (MR_Integer) 0);

              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__simplify__simplify_goal_ite__Cond__tmp_copy_8 = check_hlds__simplify__simplify_goal_ite__SubGoal_42;

                          check_hlds__simplify__simplify_goal_ite__Cond_8 = check_hlds__simplify__simplify_goal_ite__Cond__tmp_copy_8;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__simplify_goal_ite__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 3)));
              MR_Word check_hlds__simplify__simplify_goal_ite___LHSVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 0)));
              MR_Word check_hlds__simplify__simplify_goal_ite___RHS_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__simplify_goal_ite___Mode_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__simplify_goal_ite___UContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__Unification_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__simplify__simplify_goal_ite__LHSVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 0)));
                    MR_Word check_hlds__simplify__simplify_goal_ite__LHSVarType_34;
                    MR_Word check_hlds__simplify__simplify_goal_ite___ConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__simplify_goal_ite___Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 2)));
                    MR_Word check_hlds__simplify__simplify_goal_ite___ArgModes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 3)));
                    MR_Word check_hlds__simplify__simplify_goal_ite___CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 4)));
                    MR_Word check_hlds__simplify__simplify_goal_ite___CanCGC_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 5)));
                    MR_Word check_hlds__simplify__simplify_goal_ite__TypeBody_35;

                    {
                      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_ite__VarTypes_7, check_hlds__simplify__simplify_goal_ite__LHSVar_28, &check_hlds__simplify__simplify_goal_ite__LHSVarType_34);
                    }
                    {
                      check_hlds__simplify__simplify_goal_ite__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(check_hlds__simplify__simplify_goal_ite__ModuleInfo_6, check_hlds__simplify__simplify_goal_ite__LHSVarType_34, &check_hlds__simplify__simplify_goal_ite__TypeBody_35);
                    }
                    if (check_hlds__simplify__simplify_goal_ite__succeeded)
                      {
                        MR_Word check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_36;

                        {
                          check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_36 = check_hlds__simplify__simplify_goal_ite__can_switch_on_type_1_f_0(check_hlds__simplify__simplify_goal_ite__TypeBody_35);
                        }
                        switch (check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_36) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                            break;
                          case (MR_Integer) 1:
                            switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__LHSVar_28));
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86;
                                    break;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word check_hlds__simplify__simplify_goal_ite__SwitchVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86, (MR_Integer) 0)));

                                  {
                                    check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_ite_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__simplify_goal_ite__SwitchVar_37)), ((MR_Box) (check_hlds__simplify__simplify_goal_ite__LHSVar_28)));
                                  }
                                  if (check_hlds__simplify__simplify_goal_ite__succeeded)
                                    *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86;
                                  else
                                    *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                }
                                break;
                            }
                            break;
                        }
                      }
                    else
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.warn_switch_for_ite_cond\'/5", (MR_String) "complicated unify");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__simplify__simplify_goal_ite__Disjuncts_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_96_96;
                  MR_Box check_hlds__simplify__simplify_goal_ite__conv1_STATE_VARIABLE_CondCanSwitch_87;

                  {
                    check_hlds__simplify__simplify_goal_ite__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_ite_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__ModuleInfo_6));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__VarTypes_7));
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0, check_hlds__simplify__simplify_goal_ite__V_96_96, check_hlds__simplify__simplify_goal_ite__Disjuncts_41, ((MR_Box) (check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)), &check_hlds__simplify__simplify_goal_ite__conv1_STATE_VARIABLE_CondCanSwitch_87);
                  }
                  *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = ((MR_Word) check_hlds__simplify__simplify_goal_ite__conv1_STATE_VARIABLE_CondCanSwitch_87);
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__simplify__simplify_goal_ite__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__ShortHand_73)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.warn_switch_for_ite_cond\'/5", (MR_String) "shorthand");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__Vars_14,
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond0_15,
  MR_Word check_hlds__simplify__simplify_goal_ite__Then0_16,
  MR_Word check_hlds__simplify__simplify_goal_ite__Else0_17,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_18,
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_19,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_20,
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_21,
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_22,
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_23,
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_24,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_69,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_ite__Cond_26;
    MR_Word check_hlds__simplify__simplify_goal_ite__AfterCondCommon_27;
    MR_Word check_hlds__simplify__simplify_goal_ite__AfterCondInstMap0_28;
    MR_Word check_hlds__simplify__simplify_goal_ite__Then_29;
    MR_Word check_hlds__simplify__simplify_goal_ite__Else_31;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondInfo_34;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondDelta_35;
    MR_Word check_hlds__simplify__simplify_goal_ite__ThenInfo_37;
    MR_Word check_hlds__simplify__simplify_goal_ite__ThenDelta_38;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondThenDelta_39;
    MR_Word check_hlds__simplify__simplify_goal_ite__ElseInfo_41;
    MR_Word check_hlds__simplify__simplify_goal_ite__ElseDelta_42;
    MR_Word check_hlds__simplify__simplify_goal_ite__NonLocals_43;
    MR_Word check_hlds__simplify__simplify_goal_ite__VarTypes_45;
    MR_Word check_hlds__simplify__simplify_goal_ite__NewDelta_46;
    MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo1_47;
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48;
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseDetism0_49;
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseCanFail_50;
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseNumSolns_51;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondDetism_52;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondCanFail_53;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondSolns_54;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_72_72;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_75_75;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_76_76;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_77_77;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_78_78;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80;
    MR_Word check_hlds__simplify__simplify_goal_ite___AfterThenCommon_30;
    MR_Word check_hlds__simplify__simplify_goal_ite___AfterElseCommon_32;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_33_33;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_36_36;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_40_40;

    {
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__Cond0_15, &check_hlds__simplify__simplify_goal_ite__Cond_26, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__Common0_23, &check_hlds__simplify__simplify_goal_ite__AfterCondCommon_27, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_69, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71);
    }
    {
      hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_ite__Cond_26, check_hlds__simplify__simplify_goal_ite__InstMap0_22, &check_hlds__simplify__simplify_goal_ite__AfterCondInstMap0_28);
    }
    {
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__Then0_16, &check_hlds__simplify__simplify_goal_ite__Then_29, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__AfterCondInstMap0_28, check_hlds__simplify__simplify_goal_ite__AfterCondCommon_27, &check_hlds__simplify__simplify_goal_ite___AfterThenCommon_30, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_72_72);
    }
    {
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__Else0_17, &check_hlds__simplify__simplify_goal_ite__Else_31, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__Common0_23, &check_hlds__simplify__simplify_goal_ite___AfterElseCommon_32, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_72_72, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73);
    }
    check_hlds__simplify__simplify_goal_ite__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_26, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_ite__CondInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_26, (MR_Integer) 1)));
    {
      check_hlds__simplify__simplify_goal_ite__CondDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo_34);
    }
    check_hlds__simplify__simplify_goal_ite__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Then_29, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_ite__ThenInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Then_29, (MR_Integer) 1)));
    {
      check_hlds__simplify__simplify_goal_ite__ThenDelta_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_ite__ThenInfo_37);
    }
    {
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__simplify__simplify_goal_ite__CondDelta_35, check_hlds__simplify__simplify_goal_ite__ThenDelta_38, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_ite__CondThenDelta_39);
    }
    check_hlds__simplify__simplify_goal_ite__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_ite__ElseInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 1)));
    {
      check_hlds__simplify__simplify_goal_ite__ElseDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_ite__ElseInfo_41);
    }
    {
      check_hlds__simplify__simplify_goal_ite__NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_19);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_75_75);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73, &check_hlds__simplify__simplify_goal_ite__VarTypes_45);
    }
    {
      check_hlds__simplify__simplify_goal_ite__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__ElseDelta_42));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_ite__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__CondThenDelta_39));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_78_78));
    }
    {
      hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__NonLocals_43, check_hlds__simplify__simplify_goal_ite__VarTypes_45, check_hlds__simplify__simplify_goal_ite__V_76_76, &check_hlds__simplify__simplify_goal_ite__NewDelta_46, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_75_75, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_77_77);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_77_77, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80);
    }
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_ite__NewDelta_46, check_hlds__simplify__simplify_goal_ite__GoalInfo0_19, &check_hlds__simplify__simplify_goal_ite__GoalInfo1_47);
    }
    {
      check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Vars_14));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Cond_26));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Then_29));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Else_31));
    }
    {
      check_hlds__simplify__simplify_goal_ite__IfThenElseDetism0_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_19);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__IfThenElseDetism0_49, &check_hlds__simplify__simplify_goal_ite__IfThenElseCanFail_50, &check_hlds__simplify__simplify_goal_ite__IfThenElseNumSolns_51);
    }
    {
      check_hlds__simplify__simplify_goal_ite__CondDetism_52 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo_34);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__CondDetism_52, &check_hlds__simplify__simplify_goal_ite__CondCanFail_53, &check_hlds__simplify__simplify_goal_ite__CondSolns_54);
    }
    check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CondCanFail_53 == (MR_Integer) 1);
    if (!(check_hlds__simplify__simplify_goal_ite__succeeded))
      {
        check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CondSolns_54 == (MR_Integer) 0);
        if (!(check_hlds__simplify__simplify_goal_ite__succeeded))
          {
            MR_Word check_hlds__simplify__simplify_goal_ite__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_ite__V_82_82;
            MR_Word check_hlds__simplify__simplify_goal_ite__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 1)));

            check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_81_81)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_81_81, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
              {
                check_hlds__simplify__simplify_goal_ite__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_81_81, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
      {
        check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, check_hlds__simplify__simplify_goal_ite__GoalExpr_18, check_hlds__simplify__simplify_goal_ite__GoalInfo1_47, check_hlds__simplify__simplify_goal_ite__GoalInfo_20, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__Common0_23, check_hlds__simplify__simplify_goal_ite__Common_24, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_ite__ModuleInfo_44;
        MR_Word check_hlds__simplify__simplify_goal_ite__CanSwitch_56;

        *check_hlds__simplify__simplify_goal_ite__Common_24 = check_hlds__simplify__simplify_goal_ite__Common0_23;
        {
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, &check_hlds__simplify__simplify_goal_ite__ModuleInfo_44);
        }
        {
          check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(check_hlds__simplify__simplify_goal_ite__ModuleInfo_44, check_hlds__simplify__simplify_goal_ite__VarTypes_45, check_hlds__simplify__simplify_goal_ite__Cond_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_ite__CanSwitch_56);
        }
        switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__CanSwitch_56)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__CanSwitch_56)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80;
                break;
              case (MR_Integer) 1:
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125;
              MR_Word check_hlds__simplify__simplify_goal_ite__SwitchVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CanSwitch_56, (MR_Integer) 0)));
              MR_Word check_hlds__simplify__simplify_goal_ite__Context_58;
              MR_Word check_hlds__simplify__simplify_goal_ite__VarSet_59;
              MR_Word check_hlds__simplify__simplify_goal_ite__OnPieces_62;
              MR_Word check_hlds__simplify__simplify_goal_ite__Pieces_63;
              MR_Word check_hlds__simplify__simplify_goal_ite__Msg_64;
              MR_Word check_hlds__simplify__simplify_goal_ite__Spec_66;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_96_96;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_103_103;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_104_104;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_107_107;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_108_108;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_117_117;
              MR_String check_hlds__simplify__simplify_goal_ite__SwitchVarName_61;

              {
                check_hlds__simplify__simplify_goal_ite__Context_58 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo_34);
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, &check_hlds__simplify__simplify_goal_ite__VarSet_59);
              }
              {
                check_hlds__simplify__simplify_goal_ite__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_ite__VarSet_59, check_hlds__simplify__simplify_goal_ite__SwitchVar_57, &check_hlds__simplify__simplify_goal_ite__SwitchVarName_61);
              }
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
                {
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_93_93;
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_94_94;

                  {
                    check_hlds__simplify__simplify_goal_ite__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__SwitchVarName_61));
                  }
                  {
                    check_hlds__simplify__simplify_goal_ite__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_93_93, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_94_94));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__simplify__simplify_goal_ite__OnPieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__OnPieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[19])));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__OnPieces_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_93_93));
                  }
                }
              else
                check_hlds__simplify__simplify_goal_ite__OnPieces_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                check_hlds__simplify__simplify_goal_ite__V_96_96 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125, check_hlds__simplify__simplify_goal_ite__OnPieces_62, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[3]));
              }
              {
                check_hlds__simplify__simplify_goal_ite__Pieces_63 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[7]), check_hlds__simplify__simplify_goal_ite__V_96_96);
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_108_108, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Pieces_63));
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_107_107, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_108_108));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_104_104, 0) = ((MR_Box) (((MR_Integer) 45 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_107_107));
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_103_103, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_104_104));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_goal_ite__Msg_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_58));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_103_103));
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_117_117, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_64));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_goal_ite__Spec_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[1])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[3])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_66, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_117_117));
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_66, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);
              }
            }
            break;
        }
        {
          check_hlds__simplify__simplify_goal_ite__succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(*check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);
        }
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
          {
            check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CondSolns_54 == (MR_Integer) 3);
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
              {
                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__IfThenElseNumSolns_51 == (MR_Integer) 3);
                check_hlds__simplify__simplify_goal_ite__succeeded = !(check_hlds__simplify__simplify_goal_ite__succeeded);
              }
          }
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal_ite__InnerDetism_67;
            MR_Word check_hlds__simplify__simplify_goal_ite__InnerInfo_68;
            MR_Word check_hlds__simplify__simplify_goal_ite__V_123_123;

            {
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_ite__InnerDetism_67, check_hlds__simplify__simplify_goal_ite__IfThenElseCanFail_50, (MR_Integer) 3);
            }
            {
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_ite__InnerDetism_67, check_hlds__simplify__simplify_goal_ite__GoalInfo1_47, &check_hlds__simplify__simplify_goal_ite__InnerInfo_68);
            }
            {
              check_hlds__simplify__simplify_goal_ite__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_123_123, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_123_123, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__InnerInfo_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__simplify__simplify_goal_ite__GoalExpr_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[20])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_123_123));
            }
          }
        else
          *check_hlds__simplify__simplify_goal_ite__GoalExpr_18 = check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48;
        *check_hlds__simplify__simplify_goal_ite__GoalInfo_20 = check_hlds__simplify__simplify_goal_ite__GoalInfo1_47;
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_6,
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_7,
  MR_String check_hlds__simplify__simplify_goal_ite__Problem_8,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_7, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_45_45;
    MR_Integer check_hlds__simplify__simplify_goal_ite__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_7, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_ite__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_7, (MR_Integer) 2)));

    switch (check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_goal_ite__Context_11;
          MR_Word check_hlds__simplify__simplify_goal_ite__Pieces_12;
          MR_Word check_hlds__simplify__simplify_goal_ite__Msg_13;
          MR_Word check_hlds__simplify__simplify_goal_ite__Spec_15;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_20_20;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_21_21;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_28_28;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_29_29;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_32_32;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_33_33;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_42_42;

          {
            check_hlds__simplify__simplify_goal_ite__Context_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_6);
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_21_21, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Problem_8));
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_20_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_21_21));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[3])));
          }
          {
            check_hlds__simplify__simplify_goal_ite__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[18])));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Pieces_12, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_20_20));
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_33_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Pieces_12));
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_32_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_33_33));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_29_29, 0) = ((MR_Box) (((MR_Integer) 24 | (((MR_Integer) 1 << (MR_Integer) 10)))));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_29_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_32_32));
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_28_28, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_29_29));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_ite__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_13, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_11));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_13, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_28_28));
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_13));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_ite__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[1])));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_15, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_42_42));
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_15, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44);
          }
        }
        break;
      case (MR_Integer) 1:
        check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16;
        break;
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_45_45);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_45_45, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_17);
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_17,
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_18,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_39,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_ite__SubGoal0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__GoalExpr0_11), (MR_Integer) 0);
    MR_Word check_hlds__simplify__simplify_goal_ite__SubGoal1_21;
    MR_Word check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_23;
    MR_Word check_hlds__simplify__simplify_goal_ite__Context_24;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41;
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
    MR_Word check_hlds__simplify__simplify_goal_ite___Common1_22;
    MR_Integer check_hlds__simplify__simplify_goal_ite__V_100_100;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_101_101;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_82_82;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_83_83;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_84_84;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_34_34;

    {
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__SubGoal0_20, &check_hlds__simplify__simplify_goal_ite__SubGoal1_21, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, &check_hlds__simplify__simplify_goal_ite___Common1_22, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_39, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41);
    }
    check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_ite__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_Integer) 1)));
    check_hlds__simplify__simplify_goal_ite__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_Integer) 2)));
    {
      check_hlds__simplify__simplify_goal_ite__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13);
    }
    switch (check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_goal_ite__SubGoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal_ite__Detism_27;
          MR_Word check_hlds__simplify__simplify_goal_ite__CanFail_28;
          MR_Word check_hlds__simplify__simplify_goal_ite__MaxSoln_29;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));

          {
            check_hlds__simplify__simplify_goal_ite__Detism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__SubGoalInfo1_26);
          }
          {
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__Detism_27, &check_hlds__simplify__simplify_goal_ite__CanFail_28, &check_hlds__simplify__simplify_goal_ite__MaxSoln_29);
          }
          check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CanFail_28 == (MR_Integer) 1);
          if (check_hlds__simplify__simplify_goal_ite__succeeded)
            {
              MR_Word check_hlds__simplify__simplify_goal_ite__Msg_31;
              MR_Word check_hlds__simplify__simplify_goal_ite__Spec_33;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_59_59;

              {
                check_hlds__simplify__simplify_goal_ite__Msg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_24));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[12])));
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_31));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__simplify_goal_ite__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[1])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_59_59));
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_33, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61);
              }
            }
          else
            {
              check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__MaxSoln_29 == (MR_Integer) 0);
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
                {
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_79_79;
                  MR_Word check_hlds__simplify__simplify_goal_ite__Msg_93;
                  MR_Word check_hlds__simplify__simplify_goal_ite__Spec_95;

                  {
                    check_hlds__simplify__simplify_goal_ite__Msg_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_93, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_24));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[17])));
                  }
                  {
                    check_hlds__simplify__simplify_goal_ite__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_93));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__simplify__simplify_goal_ite__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[1])));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_95, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_79_79));
                  }
                  {
                    check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_95, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61);
                  }
                }
              else
                check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41;
            }
        }
        break;
      case (MR_Integer) 1:
        check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41;
        break;
    }
    check_hlds__simplify__simplify_goal_ite__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_ite__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));
    check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_82_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_82_82, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
      {
        check_hlds__simplify__simplify_goal_ite__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_82_82, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_ite__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_82_82, (MR_Integer) 2)));
        check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_83_83 == (MR_Integer) 0);
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
          check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal_ite__V_85_85;

        {
          check_hlds__simplify__simplify_goal_ite__V_85_85 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_ite__Context_24);
        }
        *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_85_85, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_85_85, (MR_Integer) 1)));
        *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_ite__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_ite__V_87_87;
        MR_Word check_hlds__simplify__simplify_goal_ite__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));

        check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_86_86)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_86_86, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
          {
            check_hlds__simplify__simplify_goal_ite__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_86_86, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal_ite__V_88_88;

            {
              check_hlds__simplify__simplify_goal_ite__V_88_88 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_ite__Context_24);
            }
            *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_88_88, (MR_Integer) 0)));
            *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_88_88, (MR_Integer) 1)));
            *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_ite__SubSubGoal_36;
            MR_Word check_hlds__simplify__simplify_goal_ite__SubSubGoalInfo_37;
            MR_Word check_hlds__simplify__simplify_goal_ite__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_ite__V_90_90;
            MR_Word check_hlds__simplify__simplify_goal_ite__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));

            check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_89_89)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
              {
                check_hlds__simplify__simplify_goal_ite__V_90_90 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__V_89_89), (MR_Integer) 0);
                check_hlds__simplify__simplify_goal_ite__SubSubGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_90_90, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_ite__SubSubGoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_90_90, (MR_Integer) 1)));
                {
                  check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__semidet_fail_0_p_0();
                }
              }
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
              {
                check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__SubSubGoalInfo_37, check_hlds__simplify__simplify_goal_ite__SubSubGoal_36, check_hlds__simplify__simplify_goal_ite__GoalExpr_12, check_hlds__simplify__simplify_goal_ite__GoalInfo_14, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40);
              }
            else
              {
                *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_ite__SubGoal1_21);
                *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = check_hlds__simplify__simplify_goal_ite__GoalInfo0_13;
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
              }
          }
      }
    *check_hlds__simplify__simplify_goal_ite__Common_18 = check_hlds__simplify__simplify_goal_ite__Common0_17;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_17,
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_18,
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_49)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_ite__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_ite__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_ite__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_goal_ite__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_goal_ite__CondInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_ite__CondDetism0_26;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondCanFail0_27;
    MR_Word check_hlds__simplify__simplify_goal_ite__CondSolns0_28;
    MR_Word check_hlds__simplify__simplify_goal_ite__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 0)));

    {
      check_hlds__simplify__simplify_goal_ite__CondDetism0_26 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo0_25);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__CondDetism0_26, &check_hlds__simplify__simplify_goal_ite__CondCanFail0_27, &check_hlds__simplify__simplify_goal_ite__CondSolns0_28);
    }
    switch (check_hlds__simplify__simplify_goal_ite__CondCanFail0_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (check_hlds__simplify__simplify_goal_ite__CondSolns0_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__simplify_goal_ite__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else0_23, (MR_Integer) 0)));
              MR_Word check_hlds__simplify__simplify_goal_ite__V_51_51;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else0_23, (MR_Integer) 1)));

              check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
                {
                  check_hlds__simplify__simplify_goal_ite__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_50_50, (MR_Integer) 1)));
                  check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
                {
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_52_52;
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_53_53;
                  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_54_54;
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_55_55;
                  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_57_57;
                  MR_Word check_hlds__simplify__simplify_goal_ite__CondGoals_84;
                  MR_Word check_hlds__simplify__simplify_goal_ite__ThenGoals_85;
                  MR_Word check_hlds__simplify__simplify_goal_ite__Goals_86;

                  {
                    hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Cond0_21, &check_hlds__simplify__simplify_goal_ite__CondGoals_84);
                  }
                  {
                    hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Then0_22, &check_hlds__simplify__simplify_goal_ite__ThenGoals_85);
                  }
                  {
                    check_hlds__simplify__simplify_goal_ite__Goals_86 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_ite__CondGoals_84, check_hlds__simplify__simplify_goal_ite__ThenGoals_85);
                  }
                  {
                    check_hlds__simplify__simplify_goal_ite__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_55_55, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_55_55, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Goals_86));
                  }
                  {
                    check_hlds__simplify__simplify_goal_ite__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_55_55));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_52_52, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__GoalInfo0_13));
                  }
                  {
                    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__V_52_52, &check_hlds__simplify__simplify_goal_ite__V_53_53, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_54_54);
                  }
                  *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_53_53, (MR_Integer) 0)));
                  *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_53_53, (MR_Integer) 1)));
                  {
                    check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_54_54, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_57_57);
                  }
                  {
                    check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_57_57, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_49);
                  }
                }
              else
                {
                  check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(check_hlds__simplify__simplify_goal_ite__Vars_20, check_hlds__simplify__simplify_goal_ite__Cond0_21, check_hlds__simplify__simplify_goal_ite__Then0_22, check_hlds__simplify__simplify_goal_ite__Else0_23, check_hlds__simplify__simplify_goal_ite__GoalExpr_12, check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__GoalInfo_14, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_48, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_49);
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_35;
              MR_Word check_hlds__simplify__simplify_goal_ite__Cond_38;
              MR_Word check_hlds__simplify__simplify_goal_ite__ElseList_45;
              MR_Word check_hlds__simplify__simplify_goal_ite__List_46;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_65_65;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_66_66;
              MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_67_67;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_68_68;
              MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71;
              MR_Word check_hlds__simplify__simplify_goal_ite__DeletedCallCallees0_81;
              MR_Word check_hlds__simplify__simplify_goal_ite__SubGoalCalledProcs_82;
              MR_Word check_hlds__simplify__simplify_goal_ite__DeletedCallCallees_83;
              MR_Word check_hlds__simplify__simplify_goal_ite__NegCond_36;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_60_60;
              MR_Word check_hlds__simplify__simplify_goal_ite__V_37_37;

              {
                parse_tree__prog_detism__det_negation_det_2_p_0(check_hlds__simplify__simplify_goal_ite__CondDetism0_26, &check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_35);
              }
              check_hlds__simplify__simplify_goal_ite__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 0)));
              check_hlds__simplify__simplify_goal_ite__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 1)));
              check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_60_60)) == (MR_mktag((MR_Integer) 0)));
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
                {
                  check_hlds__simplify__simplify_goal_ite__NegCond_36 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__V_60_60), (MR_Integer) 0);
                  {
                    check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__semidet_fail_0_p_0();
                  }
                }
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
                check_hlds__simplify__simplify_goal_ite__Cond_38 = check_hlds__simplify__simplify_goal_ite__NegCond_36;
              else
                {
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegDetism_41;
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegInstMapDelta_42;
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegCondInfo0_43;
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegCondInfo_44;
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_64_64;
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegDetism1_39;
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_40;

                  check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_35)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__simplify__simplify_goal_ite__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_ite__NegDetism1_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_35, (MR_Integer) 0)));
                      switch (check_hlds__simplify__simplify_goal_ite__NegDetism1_39) {
                        default:
                          check_hlds__simplify__simplify_goal_ite__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          {
                            {
                              hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_40);
                            }
                            check_hlds__simplify__simplify_goal_ite__succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 6:
                          {
                            {
                              hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_40);
                            }
                            check_hlds__simplify__simplify_goal_ite__succeeded = MR_TRUE;
                          }
                          break;
                      }
                    }
                  if (check_hlds__simplify__simplify_goal_ite__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_ite__NegDetism_41 = check_hlds__simplify__simplify_goal_ite__NegDetism1_39;
                      check_hlds__simplify__simplify_goal_ite__NegInstMapDelta_42 = check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_40;
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.simplify_goal_ite\'/10", (MR_String) "cannot get negated determinism");
                        return;
                      }
                    }
                  {
                    hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_ite__NegDetism_41, check_hlds__simplify__simplify_goal_ite__CondInfo0_25, &check_hlds__simplify__simplify_goal_ite__NegCondInfo0_43);
                  }
                  {
                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_ite__NegInstMapDelta_42, check_hlds__simplify__simplify_goal_ite__NegCondInfo0_43, &check_hlds__simplify__simplify_goal_ite__NegCondInfo_44);
                  }
                  check_hlds__simplify__simplify_goal_ite__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_ite__Cond0_21);
                  {
                    check_hlds__simplify__simplify_goal_ite__Cond_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_64_64));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_38, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__NegCondInfo_44));
                  }
                }
              {
                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Else0_23, &check_hlds__simplify__simplify_goal_ite__ElseList_45);
              }
              {
                check_hlds__simplify__simplify_goal_ite__List_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__List_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Cond_38));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__List_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__ElseList_45));
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_68_68, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_68_68, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__List_46));
              }
              {
                check_hlds__simplify__simplify_goal_ite__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_65_65, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_68_68));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_65_65, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__GoalInfo0_13));
              }
              {
                check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__V_65_65, &check_hlds__simplify__simplify_goal_ite__V_66_66, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_67_67);
              }
              *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_66_66, (MR_Integer) 0)));
              *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_66_66, (MR_Integer) 1)));
              {
                check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_String) "cannot succeed", check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_67_67, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71);
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71, &check_hlds__simplify__simplify_goal_ite__DeletedCallCallees0_81);
              }
              {
                check_hlds__simplify__simplify_goal_ite__SubGoalCalledProcs_82 = hlds__goal_util__goal_proc_refs_1_f_0(check_hlds__simplify__simplify_goal_ite__Then0_22);
              }
              {
                mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_goal_ite__SubGoalCalledProcs_82, check_hlds__simplify__simplify_goal_ite__DeletedCallCallees0_81, &check_hlds__simplify__simplify_goal_ite__DeletedCallCallees_83);
              }
              {
                check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_goal_ite__DeletedCallCallees_83, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_49);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_goal_ite__CondGoals_29;
          MR_Word check_hlds__simplify__simplify_goal_ite__ThenGoals_30;
          MR_Word check_hlds__simplify__simplify_goal_ite__Goals_31;
          MR_Word check_hlds__simplify__simplify_goal_ite__DeletedCallCallees0_32;
          MR_Word check_hlds__simplify__simplify_goal_ite__SubGoalCalledProcs_33;
          MR_Word check_hlds__simplify__simplify_goal_ite__DeletedCallCallees_34;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_73_73;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_74_74;
          MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_75_75;
          MR_Word check_hlds__simplify__simplify_goal_ite__V_76_76;
          MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_79_79;

          {
            hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Cond0_21, &check_hlds__simplify__simplify_goal_ite__CondGoals_29);
          }
          {
            hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Then0_22, &check_hlds__simplify__simplify_goal_ite__ThenGoals_30);
          }
          {
            check_hlds__simplify__simplify_goal_ite__Goals_31 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_ite__CondGoals_29, check_hlds__simplify__simplify_goal_ite__ThenGoals_30);
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_76_76, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Goals_31));
          }
          {
            check_hlds__simplify__simplify_goal_ite__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_76_76));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_73_73, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__GoalInfo0_13));
          }
          {
            check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__V_73_73, &check_hlds__simplify__simplify_goal_ite__V_74_74, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_48, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_75_75);
          }
          *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_74_74, (MR_Integer) 0)));
          *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_74_74, (MR_Integer) 1)));
          {
            check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_String) "cannot fail", check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_75_75, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_79_79);
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_79_79, &check_hlds__simplify__simplify_goal_ite__DeletedCallCallees0_32);
          }
          {
            check_hlds__simplify__simplify_goal_ite__SubGoalCalledProcs_33 = hlds__goal_util__goal_proc_refs_1_f_0(check_hlds__simplify__simplify_goal_ite__Else0_23);
          }
          {
            mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_goal_ite__SubGoalCalledProcs_33, check_hlds__simplify__simplify_goal_ite__DeletedCallCallees0_32, &check_hlds__simplify__simplify_goal_ite__DeletedCallCallees_34);
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_goal_ite__DeletedCallCallees_34, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_79_79, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_49);
          }
        }
        break;
    }
  }
}

void mercury__check_hlds__simplify__simplify_goal_ite__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_ite__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0);
}

void mercury__check_hlds__simplify__simplify_goal_ite__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_ite__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.simplify.simplify_goal_ite. */
