/*
** Automatically generated from `simplify_goal_ite.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 148 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_ite__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 154 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0;

#line 157 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1[1];

#line 160 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1;

#line 163 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2;

#line 166 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0[2];

#line 169 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1[1];

#line 172 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_ptag_ordered_cond_can_switch_0[2];

#line 175 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0[3];

#line 178 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_Integer check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0[3];

#line 181 "check_hlds.simplify.simplify_goal_ite.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001(
#line 184 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
#line 186 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2);

#line 189 "check_hlds.simplify.simplify_goal_ite.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001(
#line 192 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
#line 194 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
#line 196 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_3);

#line 316 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(
#line 316 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2,
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__3_3);

#line 316 "simplify_goal_ite.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2);

#line 409 "simplify_goal_ite.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_ite__can_switch_on_type_1_f_0(
#line 409 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__TypeBody_3);

#line 370 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1(
#line 370 "simplify_goal_ite.m"
  MR_Box check_hlds__simplify__simplify_goal_ite__closure_arg,
#line 370 "simplify_goal_ite.m"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
#line 370 "simplify_goal_ite.m"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
#line 370 "simplify_goal_ite.m"
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_3);

#line 321 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__ModuleInfo_6,
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__VarTypes_7,
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond_8,
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86,
#line 321 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87);

#line 202 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Vars_14,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond0_15,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Then0_16,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Else0_17,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_18,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_19,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_20,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_21,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_22,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_23,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_24,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_69,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);

#line 172 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__maybe_warm_about_condition_5_p_0(
#line 172 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_6,
#line 172 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_7,
#line 172 "simplify_goal_ite.m"
  MR_String check_hlds__simplify__simplify_goal_ite__Problem_8,
#line 172 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16,
#line 172 "simplify_goal_ite.m"
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
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
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
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 38)),
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



#line 472 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 480 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_ite__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 489 "check_hlds.simplify.simplify_goal_ite.c"
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
  NULL
};

#line 504 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 509 "check_hlds.simplify.simplify_goal_ite.c"
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
  NULL
};

#line 524 "check_hlds.simplify.simplify_goal_ite.c"
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
  NULL
};

#line 539 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0[2] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2
};

#line 545 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1[1] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1
};

#line 550 "check_hlds.simplify.simplify_goal_ite.c"
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

#line 564 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0[3] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2
};

#line 571 "check_hlds.simplify.simplify_goal_ite.c"
static const MR_Integer check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 578 "check_hlds.simplify.simplify_goal_ite.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 595 "check_hlds.simplify.simplify_goal_ite.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001(
#line 598 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
#line 600 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2)
#line 602 "check_hlds.simplify.simplify_goal_ite.c"
{
#line 604 "check_hlds.simplify.simplify_goal_ite.c"
  {
#line 606 "check_hlds.simplify.simplify_goal_ite.c"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;

#line 609 "check_hlds.simplify.simplify_goal_ite.c"
    {
#line 611 "check_hlds.simplify.simplify_goal_ite.c"
      check_hlds__simplify__simplify_goal_ite__succeeded = check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_2));
    }
#line 614 "check_hlds.simplify.simplify_goal_ite.c"
    return check_hlds__simplify__simplify_goal_ite__succeeded;
#line 616 "check_hlds.simplify.simplify_goal_ite.c"
  }
#line 618 "check_hlds.simplify.simplify_goal_ite.c"
}

#line 621 "check_hlds.simplify.simplify_goal_ite.c"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001(
#line 624 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
#line 626 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
#line 628 "check_hlds.simplify.simplify_goal_ite.c"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_3)
#line 630 "check_hlds.simplify.simplify_goal_ite.c"
{
#line 632 "check_hlds.simplify.simplify_goal_ite.c"
  {
#line 634 "check_hlds.simplify.simplify_goal_ite.c"
    MR_Word check_hlds__simplify__simplify_goal_ite__conv0_HeadVar__1_1;

#line 637 "check_hlds.simplify.simplify_goal_ite.c"
    {
#line 639 "check_hlds.simplify.simplify_goal_ite.c"
      check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(&check_hlds__simplify__simplify_goal_ite__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_3));
    }
#line 642 "check_hlds.simplify.simplify_goal_ite.c"
    *check_hlds__simplify__simplify_goal_ite__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__conv0_HeadVar__1_1));
#line 644 "check_hlds.simplify.simplify_goal_ite.c"
  }
#line 646 "check_hlds.simplify.simplify_goal_ite.c"
}

#line 316 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(
#line 316 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2,
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)
#line 316 "simplify_goal_ite.m"
{
#line 316 "simplify_goal_ite.m"
  {
#line 316 "simplify_goal_ite.m"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 316 "simplify_goal_ite.m"
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_10 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;
#line 316 "simplify_goal_ite.m"
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_11 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3;

#line 316 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastX_10 == check_hlds__simplify__simplify_goal_ite__CastY_11);
#line 316 "simplify_goal_ite.m"
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 673 "check_hlds.simplify.simplify_goal_ite.c"
      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 0;
#line 316 "simplify_goal_ite.m"
    else
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)) {
#line 316 "simplify_goal_ite.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
        case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
          switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)) {
#line 316 "simplify_goal_ite.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
            case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
#line 316 "simplify_goal_ite.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
                case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
                  switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
#line 316 "simplify_goal_ite.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
                    case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 0;
#line 316 "simplify_goal_ite.m"
                      break;
#line 316 "simplify_goal_ite.m"
                    case (MR_Integer) 1:
#line 316 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 1;
#line 316 "simplify_goal_ite.m"
                      break;
#line 316 "simplify_goal_ite.m"
                  }
#line 316 "simplify_goal_ite.m"
                  break;
#line 316 "simplify_goal_ite.m"
                case (MR_Integer) 1:
#line 721 "check_hlds.simplify.simplify_goal_ite.c"
                  *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 1;
#line 316 "simplify_goal_ite.m"
                  break;
#line 316 "simplify_goal_ite.m"
              }
#line 316 "simplify_goal_ite.m"
              break;
#line 316 "simplify_goal_ite.m"
            case (MR_Integer) 1:
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
#line 316 "simplify_goal_ite.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
                case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
                  switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
#line 316 "simplify_goal_ite.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
                    case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 2;
#line 316 "simplify_goal_ite.m"
                      break;
#line 316 "simplify_goal_ite.m"
                    case (MR_Integer) 1:
#line 316 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 0;
#line 316 "simplify_goal_ite.m"
                      break;
#line 316 "simplify_goal_ite.m"
                  }
#line 316 "simplify_goal_ite.m"
                  break;
#line 316 "simplify_goal_ite.m"
                case (MR_Integer) 1:
#line 761 "check_hlds.simplify.simplify_goal_ite.c"
                  *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 2;
#line 316 "simplify_goal_ite.m"
                  break;
#line 316 "simplify_goal_ite.m"
              }
#line 316 "simplify_goal_ite.m"
              break;
#line 316 "simplify_goal_ite.m"
          }
#line 316 "simplify_goal_ite.m"
          break;
#line 316 "simplify_goal_ite.m"
        case (MR_Integer) 1:
#line 316 "simplify_goal_ite.m"
          {
#line 316 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__2_2, (MR_Integer) 0)));

#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
            switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
#line 316 "simplify_goal_ite.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
              case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
                switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__3_3)) {
#line 316 "simplify_goal_ite.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
                  case (MR_Integer) 0:
#line 794 "check_hlds.simplify.simplify_goal_ite.c"
                    *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 2;
#line 316 "simplify_goal_ite.m"
                    break;
#line 316 "simplify_goal_ite.m"
                  case (MR_Integer) 1:
#line 800 "check_hlds.simplify.simplify_goal_ite.c"
                    *check_hlds__simplify__simplify_goal_ite__HeadVar__1_1 = (MR_Integer) 1;
#line 316 "simplify_goal_ite.m"
                    break;
#line 316 "simplify_goal_ite.m"
                }
#line 316 "simplify_goal_ite.m"
                break;
#line 316 "simplify_goal_ite.m"
              case (MR_Integer) 1:
#line 316 "simplify_goal_ite.m"
                {
#line 316 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__3_3, (MR_Integer) 0)));

#line 316 "simplify_goal_ite.m"
                  {
#line 316 "simplify_goal_ite.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_ite_scalar_common_1[0], check_hlds__simplify__simplify_goal_ite__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_13_13)), ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_7_7)));
#line 316 "simplify_goal_ite.m"
                    return;
                  }
#line 316 "simplify_goal_ite.m"
                }
#line 316 "simplify_goal_ite.m"
                break;
#line 316 "simplify_goal_ite.m"
            }
#line 316 "simplify_goal_ite.m"
          }
#line 316 "simplify_goal_ite.m"
          break;
#line 316 "simplify_goal_ite.m"
      }
#line 316 "simplify_goal_ite.m"
  }
#line 316 "simplify_goal_ite.m"
}

#line 316 "simplify_goal_ite.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__1_1,
#line 316 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)
#line 316 "simplify_goal_ite.m"
{
#line 316 "simplify_goal_ite.m"
  {
#line 316 "simplify_goal_ite.m"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 316 "simplify_goal_ite.m"
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_9 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1;
#line 316 "simplify_goal_ite.m"
    MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_10 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;

#line 316 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastX_9 == check_hlds__simplify__simplify_goal_ite__CastY_10);
#line 316 "simplify_goal_ite.m"
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 316 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__succeeded = MR_TRUE;
#line 316 "simplify_goal_ite.m"
    else
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
      switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1)) {
#line 316 "simplify_goal_ite.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
        case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
#line 316 "simplify_goal_ite.m"
          switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__HeadVar__1_1)) {
#line 316 "simplify_goal_ite.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 316 "simplify_goal_ite.m"
            case (MR_Integer) 0:
#line 316 "simplify_goal_ite.m"
              {
#line 316 "simplify_goal_ite.m"
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_3 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1;
#line 316 "simplify_goal_ite.m"
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_4 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;

#line 316 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastY_4 == check_hlds__simplify__simplify_goal_ite__CastX_3);
#line 316 "simplify_goal_ite.m"
              }
#line 316 "simplify_goal_ite.m"
              break;
#line 316 "simplify_goal_ite.m"
            case (MR_Integer) 1:
#line 316 "simplify_goal_ite.m"
              {
#line 316 "simplify_goal_ite.m"
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastX_7 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__1_1;
#line 316 "simplify_goal_ite.m"
                MR_Integer check_hlds__simplify__simplify_goal_ite__CastY_8 = (MR_Integer) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2;

#line 316 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CastY_8 == check_hlds__simplify__simplify_goal_ite__CastX_7);
#line 316 "simplify_goal_ite.m"
              }
#line 316 "simplify_goal_ite.m"
              break;
#line 316 "simplify_goal_ite.m"
          }
#line 316 "simplify_goal_ite.m"
          break;
#line 316 "simplify_goal_ite.m"
        case (MR_Integer) 1:
#line 316 "simplify_goal_ite.m"
          {
#line 316 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__TypeInfo_11_11;
#line 316 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__1_1, (MR_Integer) 0)));
#line 316 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_6_6;

#line 316 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 316 "simplify_goal_ite.m"
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 316 "simplify_goal_ite.m"
              {
#line 316 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__HeadVar__2_2, (MR_Integer) 0)));
#line 930 "check_hlds.simplify.simplify_goal_ite.c"
                check_hlds__simplify__simplify_goal_ite__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_goal_ite_scalar_common_1[0];
#line 932 "check_hlds.simplify.simplify_goal_ite.c"
                {
#line 934 "check_hlds.simplify.simplify_goal_ite.c"
                  return check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_ite__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_6_6)));
                }
#line 316 "simplify_goal_ite.m"
              }
#line 316 "simplify_goal_ite.m"
          }
#line 316 "simplify_goal_ite.m"
          break;
#line 316 "simplify_goal_ite.m"
      }
#line 316 "simplify_goal_ite.m"
    return check_hlds__simplify__simplify_goal_ite__succeeded;
#line 316 "simplify_goal_ite.m"
  }
#line 316 "simplify_goal_ite.m"
}

#line 409 "simplify_goal_ite.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_ite__can_switch_on_type_1_f_0(
#line 409 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__TypeBody_3)
#line 409 "simplify_goal_ite.m"
{
#line 415 "simplify_goal_ite.m"
  {
#line 415 "simplify_goal_ite.m"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 415 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4;

#line 415 "simplify_goal_ite.m"
#line 415 "simplify_goal_ite.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__TypeBody_3)) {
#line 415 "simplify_goal_ite.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 415 "simplify_goal_ite.m"
      case (MR_Integer) 0:
#line 448 "simplify_goal_ite.m"
        {
#line 450 "simplify_goal_ite.m"
          {
#line 450 "simplify_goal_ite.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "foreign type");
          }
#line 448 "simplify_goal_ite.m"
        }
#line 415 "simplify_goal_ite.m"
        break;
#line 415 "simplify_goal_ite.m"
      case (MR_Integer) 1:
#line 415 "simplify_goal_ite.m"
        {
#line 415 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__DuTypeKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 3)));
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___Ctors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 0)));
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___TagValues_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 1)));
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___CheaperTagTest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 2)));
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___UserEq_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 4)));
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___DirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 5)));
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___ReservedTag_11 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___ReservedAddr_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 413 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite___MaybeForeignType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 7)));

#line 432 "simplify_goal_ite.m"
#line 432 "simplify_goal_ite.m"
          switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__DuTypeKind_8)) {
#line 432 "simplify_goal_ite.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 432 "simplify_goal_ite.m"
            case (MR_Integer) 0:
#line 432 "simplify_goal_ite.m"
#line 432 "simplify_goal_ite.m"
              switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__DuTypeKind_8)) {
#line 432 "simplify_goal_ite.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 432 "simplify_goal_ite.m"
                case (MR_Integer) 0:
#line 432 "simplify_goal_ite.m"
                case (MR_Integer) 2:
#line 431 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 1;
#line 432 "simplify_goal_ite.m"
                  break;
#line 432 "simplify_goal_ite.m"
                case (MR_Integer) 1:
#line 440 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 0;
#line 432 "simplify_goal_ite.m"
                  break;
#line 432 "simplify_goal_ite.m"
              }
#line 432 "simplify_goal_ite.m"
              break;
#line 432 "simplify_goal_ite.m"
            case (MR_Integer) 1:
#line 431 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 1;
#line 432 "simplify_goal_ite.m"
              break;
#line 432 "simplify_goal_ite.m"
            case (MR_Integer) 2:
#line 440 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4 = (MR_Integer) 0;
#line 432 "simplify_goal_ite.m"
              break;
#line 432 "simplify_goal_ite.m"
          }
#line 415 "simplify_goal_ite.m"
        }
#line 415 "simplify_goal_ite.m"
        break;
#line 415 "simplify_goal_ite.m"
      case (MR_Integer) 2:
#line 443 "simplify_goal_ite.m"
        {
#line 446 "simplify_goal_ite.m"
          {
#line 446 "simplify_goal_ite.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "eqv type");
          }
#line 443 "simplify_goal_ite.m"
        }
#line 415 "simplify_goal_ite.m"
        break;
#line 415 "simplify_goal_ite.m"
      case (MR_Integer) 3:
#line 415 "simplify_goal_ite.m"
#line 415 "simplify_goal_ite.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__TypeBody_3, (MR_Integer) 0)))) {
#line 415 "simplify_goal_ite.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 415 "simplify_goal_ite.m"
          case (MR_Integer) 0:
#line 456 "simplify_goal_ite.m"
            {
#line 460 "simplify_goal_ite.m"
              {
#line 460 "simplify_goal_ite.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "solver type");
              }
#line 456 "simplify_goal_ite.m"
            }
#line 415 "simplify_goal_ite.m"
            break;
#line 415 "simplify_goal_ite.m"
          case (MR_Integer) 1:
#line 452 "simplify_goal_ite.m"
            {
#line 454 "simplify_goal_ite.m"
              {
#line 454 "simplify_goal_ite.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "abstract type");
              }
#line 452 "simplify_goal_ite.m"
            }
#line 415 "simplify_goal_ite.m"
            break;
#line 415 "simplify_goal_ite.m"
        }
#line 415 "simplify_goal_ite.m"
        break;
#line 415 "simplify_goal_ite.m"
    }
#line 415 "simplify_goal_ite.m"
    return check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_4;
#line 415 "simplify_goal_ite.m"
  }
#line 409 "simplify_goal_ite.m"
}

#line 370 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1(
#line 370 "simplify_goal_ite.m"
  MR_Box check_hlds__simplify__simplify_goal_ite__closure_arg,
#line 370 "simplify_goal_ite.m"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_1,
#line 370 "simplify_goal_ite.m"
  MR_Box check_hlds__simplify__simplify_goal_ite__wrapper_arg_2,
#line 370 "simplify_goal_ite.m"
  MR_Box * check_hlds__simplify__simplify_goal_ite__wrapper_arg_3)
#line 370 "simplify_goal_ite.m"
{
#line 370 "simplify_goal_ite.m"
  {
#line 370 "simplify_goal_ite.m"
    MR_Box check_hlds__simplify__simplify_goal_ite__closure = check_hlds__simplify__simplify_goal_ite__closure_arg;
#line 370 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__conv0_STATE_VARIABLE_CondCanSwitch_87;

#line 370 "simplify_goal_ite.m"
    {
#line 370 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_ite__wrapper_arg_2), &check_hlds__simplify__simplify_goal_ite__conv0_STATE_VARIABLE_CondCanSwitch_87);
    }
#line 370 "simplify_goal_ite.m"
    *check_hlds__simplify__simplify_goal_ite__wrapper_arg_3 = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__conv0_STATE_VARIABLE_CondCanSwitch_87));
#line 370 "simplify_goal_ite.m"
  }
#line 370 "simplify_goal_ite.m"
}

#line 321 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__ModuleInfo_6,
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__VarTypes_7,
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond_8,
#line 321 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86,
#line 321 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87)
#line 321 "simplify_goal_ite.m"
{
#line 324 "simplify_goal_ite.m"
  while (MR_TRUE)
#line 324 "simplify_goal_ite.m"
    {
#line 324 "simplify_goal_ite.m"
      /* tailcall optimized into a loop */
#line 324 "simplify_goal_ite.m"
      {
#line 324 "simplify_goal_ite.m"
        MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 324 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite__CondExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_8, (MR_Integer) 0)));
#line 325 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite___CondInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_8, (MR_Integer) 1)));

#line 368 "simplify_goal_ite.m"
#line 368 "simplify_goal_ite.m"
        switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__CondExpr_10)) {
#line 368 "simplify_goal_ite.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 368 "simplify_goal_ite.m"
          case (MR_Integer) 0:
#line 373 "simplify_goal_ite.m"
            {
#line 373 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__SubGoal_42 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__CondExpr_10), (MR_Integer) 0);

#line 378 "simplify_goal_ite.m"
#line 378 "simplify_goal_ite.m"
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
#line 378 "simplify_goal_ite.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 378 "simplify_goal_ite.m"
                case (MR_Integer) 0:
#line 378 "simplify_goal_ite.m"
#line 378 "simplify_goal_ite.m"
                  switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
#line 378 "simplify_goal_ite.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 378 "simplify_goal_ite.m"
                    case (MR_Integer) 0:
#line 376 "simplify_goal_ite.m"
                      {
#line 376 "simplify_goal_ite.m"
                        /* direct tailcall eliminated */
#line 376 "simplify_goal_ite.m"
                        {
#line 376 "simplify_goal_ite.m"
                          MR_Word check_hlds__simplify__simplify_goal_ite__Cond__tmp_copy_8 = check_hlds__simplify__simplify_goal_ite__SubGoal_42;

#line 376 "simplify_goal_ite.m"
                          check_hlds__simplify__simplify_goal_ite__Cond_8 = check_hlds__simplify__simplify_goal_ite__Cond__tmp_copy_8;
#line 376 "simplify_goal_ite.m"
                        }
#line 376 "simplify_goal_ite.m"
                        continue;
#line 376 "simplify_goal_ite.m"
                      }
#line 378 "simplify_goal_ite.m"
                      break;
#line 378 "simplify_goal_ite.m"
                    case (MR_Integer) 1:
#line 383 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86;
#line 378 "simplify_goal_ite.m"
                      break;
#line 378 "simplify_goal_ite.m"
                  }
#line 378 "simplify_goal_ite.m"
                  break;
#line 378 "simplify_goal_ite.m"
                case (MR_Integer) 1:
#line 381 "simplify_goal_ite.m"
                  *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 378 "simplify_goal_ite.m"
                  break;
#line 378 "simplify_goal_ite.m"
              }
#line 373 "simplify_goal_ite.m"
            }
#line 368 "simplify_goal_ite.m"
            break;
#line 368 "simplify_goal_ite.m"
          case (MR_Integer) 1:
#line 327 "simplify_goal_ite.m"
            {
#line 327 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 3)));
#line 327 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite___LHSVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 0)));
#line 327 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite___RHS_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 1)));
#line 327 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite___Mode_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 2)));
#line 327 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite___UContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 4)));

#line 334 "simplify_goal_ite.m"
#line 334 "simplify_goal_ite.m"
              switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__Unification_15)) {
#line 334 "simplify_goal_ite.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 334 "simplify_goal_ite.m"
                case (MR_Integer) 0:
#line 334 "simplify_goal_ite.m"
                case (MR_Integer) 2:
#line 333 "simplify_goal_ite.m"
                  *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 334 "simplify_goal_ite.m"
                  break;
#line 334 "simplify_goal_ite.m"
                case (MR_Integer) 1:
#line 336 "simplify_goal_ite.m"
                  {
#line 336 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite__LHSVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 0)));
#line 336 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite__LHSVarType_34;
#line 335 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite___ConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 1)));
#line 335 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite___Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 2)));
#line 335 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite___ArgModes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 3)));
#line 335 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite___CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 4)));
#line 335 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite___CanCGC_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 5)));
#line 359 "simplify_goal_ite.m"
                    MR_Word check_hlds__simplify__simplify_goal_ite__TypeBody_35;

#line 337 "simplify_goal_ite.m"
                    {
#line 337 "simplify_goal_ite.m"
                      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_ite__VarTypes_7, check_hlds__simplify__simplify_goal_ite__LHSVar_28, &check_hlds__simplify__simplify_goal_ite__LHSVarType_34);
                    }
#line 338 "simplify_goal_ite.m"
                    {
#line 338 "simplify_goal_ite.m"
                      check_hlds__simplify__simplify_goal_ite__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(check_hlds__simplify__simplify_goal_ite__ModuleInfo_6, check_hlds__simplify__simplify_goal_ite__LHSVarType_34, &check_hlds__simplify__simplify_goal_ite__TypeBody_35);
                    }
#line 359 "simplify_goal_ite.m"
                    if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 339 "simplify_goal_ite.m"
                      {
#line 339 "simplify_goal_ite.m"
                        MR_Word check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_36;

#line 339 "simplify_goal_ite.m"
                        {
#line 339 "simplify_goal_ite.m"
                          check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_36 = check_hlds__simplify__simplify_goal_ite__can_switch_on_type_1_f_0(check_hlds__simplify__simplify_goal_ite__TypeBody_35);
                        }
#line 343 "simplify_goal_ite.m"
#line 343 "simplify_goal_ite.m"
                        switch (check_hlds__simplify__simplify_goal_ite__CanSwitchOnType_36) {
#line 343 "simplify_goal_ite.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 343 "simplify_goal_ite.m"
                          case (MR_Integer) 0:
#line 342 "simplify_goal_ite.m"
                            *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 343 "simplify_goal_ite.m"
                            break;
#line 343 "simplify_goal_ite.m"
                          case (MR_Integer) 1:
#line 348 "simplify_goal_ite.m"
#line 348 "simplify_goal_ite.m"
                            switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
#line 348 "simplify_goal_ite.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 348 "simplify_goal_ite.m"
                              case (MR_Integer) 0:
#line 348 "simplify_goal_ite.m"
#line 348 "simplify_goal_ite.m"
                                switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)) {
#line 348 "simplify_goal_ite.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 348 "simplify_goal_ite.m"
                                  case (MR_Integer) 0:
#line 347 "simplify_goal_ite.m"
                                    {
#line 347 "simplify_goal_ite.m"
                                      MR_Word base;
#line 347 "simplify_goal_ite.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "simplify_goal_ite.m"
                                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = base;
#line 347 "simplify_goal_ite.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__LHSVar_28));
#line 347 "simplify_goal_ite.m"
                                    }
#line 348 "simplify_goal_ite.m"
                                    break;
#line 348 "simplify_goal_ite.m"
                                  case (MR_Integer) 1:
#line 356 "simplify_goal_ite.m"
                                    *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86;
#line 348 "simplify_goal_ite.m"
                                    break;
#line 348 "simplify_goal_ite.m"
                                }
#line 348 "simplify_goal_ite.m"
                                break;
#line 348 "simplify_goal_ite.m"
                              case (MR_Integer) 1:
#line 349 "simplify_goal_ite.m"
                                {
#line 349 "simplify_goal_ite.m"
                                  MR_Word check_hlds__simplify__simplify_goal_ite__SwitchVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86, (MR_Integer) 0)));

#line 350 "simplify_goal_ite.m"
                                  {
#line 350 "simplify_goal_ite.m"
                                    check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_ite_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__simplify_goal_ite__SwitchVar_37)), ((MR_Box) (check_hlds__simplify__simplify_goal_ite__LHSVar_28)));
                                  }
#line 352 "simplify_goal_ite.m"
                                  if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 352 "simplify_goal_ite.m"
                                    *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86;
#line 352 "simplify_goal_ite.m"
                                  else
#line 353 "simplify_goal_ite.m"
                                    *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 349 "simplify_goal_ite.m"
                                }
#line 348 "simplify_goal_ite.m"
                                break;
#line 348 "simplify_goal_ite.m"
                            }
#line 343 "simplify_goal_ite.m"
                            break;
#line 343 "simplify_goal_ite.m"
                        }
#line 339 "simplify_goal_ite.m"
                      }
#line 359 "simplify_goal_ite.m"
                    else
#line 362 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 336 "simplify_goal_ite.m"
                  }
#line 334 "simplify_goal_ite.m"
                  break;
#line 334 "simplify_goal_ite.m"
                case (MR_Integer) 3:
#line 334 "simplify_goal_ite.m"
#line 334 "simplify_goal_ite.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__Unification_15, (MR_Integer) 0)))) {
#line 334 "simplify_goal_ite.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 334 "simplify_goal_ite.m"
                    case (MR_Integer) 0:
#line 333 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 334 "simplify_goal_ite.m"
                      break;
#line 334 "simplify_goal_ite.m"
                    case (MR_Integer) 1:
#line 365 "simplify_goal_ite.m"
                      {
#line 366 "simplify_goal_ite.m"
                        {
#line 366 "simplify_goal_ite.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.warn_switch_for_ite_cond\'/5", (MR_String) "complicated unify");
#line 366 "simplify_goal_ite.m"
                          return;
                        }
#line 365 "simplify_goal_ite.m"
                      }
#line 334 "simplify_goal_ite.m"
                      break;
#line 334 "simplify_goal_ite.m"
                  }
#line 334 "simplify_goal_ite.m"
                  break;
#line 334 "simplify_goal_ite.m"
              }
#line 327 "simplify_goal_ite.m"
            }
#line 368 "simplify_goal_ite.m"
            break;
#line 368 "simplify_goal_ite.m"
          case (MR_Integer) 2:
#line 394 "simplify_goal_ite.m"
            *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 368 "simplify_goal_ite.m"
            break;
#line 368 "simplify_goal_ite.m"
          case (MR_Integer) 3:
#line 368 "simplify_goal_ite.m"
#line 368 "simplify_goal_ite.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 0)))) {
#line 368 "simplify_goal_ite.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 0:
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 1:
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 2:
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 4:
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 5:
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 6:
#line 394 "simplify_goal_ite.m"
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 368 "simplify_goal_ite.m"
                break;
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 3:
#line 369 "simplify_goal_ite.m"
                {
#line 369 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__Disjuncts_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 1)));
#line 369 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_96_96;
#line 370 "simplify_goal_ite.m"
                  MR_Box check_hlds__simplify__simplify_goal_ite__conv1_STATE_VARIABLE_CondCanSwitch_87;

#line 370 "simplify_goal_ite.m"
                  {
#line 370 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 370 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_ite_scalar_common_4[0]));
#line 370 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1));
#line 370 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 370 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__ModuleInfo_6));
#line 370 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_96_96, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__VarTypes_7));
#line 370 "simplify_goal_ite.m"
                  }
#line 370 "simplify_goal_ite.m"
                  {
#line 370 "simplify_goal_ite.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0, check_hlds__simplify__simplify_goal_ite__V_96_96, check_hlds__simplify__simplify_goal_ite__Disjuncts_41, ((MR_Box) (check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_0_86)), &check_hlds__simplify__simplify_goal_ite__conv1_STATE_VARIABLE_CondCanSwitch_87);
                  }
#line 370 "simplify_goal_ite.m"
                  *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = ((MR_Word) check_hlds__simplify__simplify_goal_ite__conv1_STATE_VARIABLE_CondCanSwitch_87);
#line 369 "simplify_goal_ite.m"
                }
#line 368 "simplify_goal_ite.m"
                break;
#line 368 "simplify_goal_ite.m"
              case (MR_Integer) 7:
#line 396 "simplify_goal_ite.m"
                {
#line 396 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__CondExpr_10, (MR_Integer) 1)));

#line 400 "simplify_goal_ite.m"
#line 400 "simplify_goal_ite.m"
                  switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__ShortHand_73)) {
#line 400 "simplify_goal_ite.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 400 "simplify_goal_ite.m"
                    case (MR_Integer) 0:
#line 404 "simplify_goal_ite.m"
                      {
#line 405 "simplify_goal_ite.m"
                        {
#line 405 "simplify_goal_ite.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.warn_switch_for_ite_cond\'/5", (MR_String) "shorthand");
#line 405 "simplify_goal_ite.m"
                          return;
                        }
#line 404 "simplify_goal_ite.m"
                      }
#line 400 "simplify_goal_ite.m"
                      break;
#line 400 "simplify_goal_ite.m"
                    case (MR_Integer) 1:
#line 399 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 400 "simplify_goal_ite.m"
                      break;
#line 400 "simplify_goal_ite.m"
                    case (MR_Integer) 2:
#line 402 "simplify_goal_ite.m"
                      *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 400 "simplify_goal_ite.m"
                      break;
#line 400 "simplify_goal_ite.m"
                  }
#line 396 "simplify_goal_ite.m"
                }
#line 368 "simplify_goal_ite.m"
                break;
#line 368 "simplify_goal_ite.m"
            }
#line 368 "simplify_goal_ite.m"
            break;
#line 368 "simplify_goal_ite.m"
        }
#line 324 "simplify_goal_ite.m"
      }
#line 324 "simplify_goal_ite.m"
      break;
#line 324 "simplify_goal_ite.m"
    }
#line 321 "simplify_goal_ite.m"
}

#line 202 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Vars_14,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Cond0_15,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Then0_16,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Else0_17,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_18,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_19,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_20,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_21,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_22,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_23,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_24,
#line 202 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_69,
#line 202 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70)
#line 202 "simplify_goal_ite.m"
{
#line 211 "simplify_goal_ite.m"
  {
#line 211 "simplify_goal_ite.m"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Cond_26;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__AfterCondCommon_27;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__AfterCondInstMap0_28;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Then_29;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Else_31;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondInfo_34;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondDelta_35;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__ThenInfo_37;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__ThenDelta_38;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondThenDelta_39;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__ElseInfo_41;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__ElseDelta_42;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__NonLocals_43;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__VarTypes_45;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__NewDelta_46;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo1_47;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseDetism0_49;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseCanFail_50;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__IfThenElseNumSolns_51;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondDetism_52;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondCanFail_53;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondSolns_54;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_72_72;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_75_75;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_76_76;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_77_77;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_78_78;
#line 211 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80;
#line 218 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite___AfterThenCommon_30;
#line 221 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite___AfterElseCommon_32;
#line 224 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_33_33;
#line 226 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_36_36;
#line 230 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_40_40;

#line 215 "simplify_goal_ite.m"
    {
#line 215 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__Cond0_15, &check_hlds__simplify__simplify_goal_ite__Cond_26, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__Common0_23, &check_hlds__simplify__simplify_goal_ite__AfterCondCommon_27, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_69, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71);
    }
#line 217 "simplify_goal_ite.m"
    {
#line 217 "simplify_goal_ite.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_ite__Cond_26, check_hlds__simplify__simplify_goal_ite__InstMap0_22, &check_hlds__simplify__simplify_goal_ite__AfterCondInstMap0_28);
    }
#line 218 "simplify_goal_ite.m"
    {
#line 218 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__Then0_16, &check_hlds__simplify__simplify_goal_ite__Then_29, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__AfterCondInstMap0_28, check_hlds__simplify__simplify_goal_ite__AfterCondCommon_27, &check_hlds__simplify__simplify_goal_ite___AfterThenCommon_30, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_72_72);
    }
#line 221 "simplify_goal_ite.m"
    {
#line 221 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__Else0_17, &check_hlds__simplify__simplify_goal_ite__Else_31, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__Common0_23, &check_hlds__simplify__simplify_goal_ite___AfterElseCommon_32, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_72_72, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73);
    }
#line 224 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_26, (MR_Integer) 0)));
#line 224 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__CondInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_26, (MR_Integer) 1)));
#line 225 "simplify_goal_ite.m"
    {
#line 225 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__CondDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo_34);
    }
#line 226 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Then_29, (MR_Integer) 0)));
#line 226 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__ThenInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Then_29, (MR_Integer) 1)));
#line 227 "simplify_goal_ite.m"
    {
#line 227 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__ThenDelta_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_ite__ThenInfo_37);
    }
#line 228 "simplify_goal_ite.m"
    {
#line 228 "simplify_goal_ite.m"
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(check_hlds__simplify__simplify_goal_ite__CondDelta_35, check_hlds__simplify__simplify_goal_ite__ThenDelta_38, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_ite__CondThenDelta_39);
    }
#line 230 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 0)));
#line 230 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__ElseInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 1)));
#line 231 "simplify_goal_ite.m"
    {
#line 231 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__ElseDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_ite__ElseInfo_41);
    }
#line 232 "simplify_goal_ite.m"
    {
#line 232 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_19);
    }
#line 234 "simplify_goal_ite.m"
    {
#line 234 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_75_75);
    }
#line 235 "simplify_goal_ite.m"
    {
#line 235 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73, &check_hlds__simplify__simplify_goal_ite__VarTypes_45);
    }
#line 237 "simplify_goal_ite.m"
    {
#line 237 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__ElseDelta_42));
#line 237 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "simplify_goal_ite.m"
    }
#line 237 "simplify_goal_ite.m"
    {
#line 237 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__CondThenDelta_39));
#line 237 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_78_78));
#line 237 "simplify_goal_ite.m"
    }
#line 236 "simplify_goal_ite.m"
    {
#line 236 "simplify_goal_ite.m"
      hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__NonLocals_43, check_hlds__simplify__simplify_goal_ite__VarTypes_45, check_hlds__simplify__simplify_goal_ite__V_76_76, &check_hlds__simplify__simplify_goal_ite__NewDelta_46, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_75_75, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_77_77);
    }
#line 238 "simplify_goal_ite.m"
    {
#line 238 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_ModuleInfo_77_77, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_73_73, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80);
    }
#line 240 "simplify_goal_ite.m"
    {
#line 240 "simplify_goal_ite.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_ite__NewDelta_46, check_hlds__simplify__simplify_goal_ite__GoalInfo0_19, &check_hlds__simplify__simplify_goal_ite__GoalInfo1_47);
    }
#line 241 "simplify_goal_ite.m"
    {
#line 241 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 241 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 241 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Vars_14));
#line 241 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Cond_26));
#line 241 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Then_29));
#line 241 "simplify_goal_ite.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Else_31));
#line 241 "simplify_goal_ite.m"
    }
#line 243 "simplify_goal_ite.m"
    {
#line 243 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__IfThenElseDetism0_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_19);
    }
#line 244 "simplify_goal_ite.m"
    {
#line 244 "simplify_goal_ite.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__IfThenElseDetism0_49, &check_hlds__simplify__simplify_goal_ite__IfThenElseCanFail_50, &check_hlds__simplify__simplify_goal_ite__IfThenElseNumSolns_51);
    }
#line 247 "simplify_goal_ite.m"
    {
#line 247 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__CondDetism_52 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo_34);
    }
#line 248 "simplify_goal_ite.m"
    {
#line 248 "simplify_goal_ite.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__CondDetism_52, &check_hlds__simplify__simplify_goal_ite__CondCanFail_53, &check_hlds__simplify__simplify_goal_ite__CondSolns_54);
    }
#line 254 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CondCanFail_53 == (MR_Integer) 1);
#line 255 "simplify_goal_ite.m"
    if (!(check_hlds__simplify__simplify_goal_ite__succeeded))
#line 255 "simplify_goal_ite.m"
      {
#line 255 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CondSolns_54 == (MR_Integer) 0);
#line 255 "simplify_goal_ite.m"
        if (!(check_hlds__simplify__simplify_goal_ite__succeeded))
#line 256 "simplify_goal_ite.m"
          {
#line 256 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 0)));
#line 256 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_82_82;
#line 256 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else_31, (MR_Integer) 1)));

#line 256 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_81_81)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_81_81, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 256 "simplify_goal_ite.m"
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 256 "simplify_goal_ite.m"
              {
#line 256 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_81_81, (MR_Integer) 1)));
#line 256 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "simplify_goal_ite.m"
              }
#line 256 "simplify_goal_ite.m"
          }
#line 255 "simplify_goal_ite.m"
      }
#line 261 "simplify_goal_ite.m"
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 259 "simplify_goal_ite.m"
      {
#line 259 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48, check_hlds__simplify__simplify_goal_ite__GoalExpr_18, check_hlds__simplify__simplify_goal_ite__GoalInfo1_47, check_hlds__simplify__simplify_goal_ite__GoalInfo_20, check_hlds__simplify__simplify_goal_ite__NestedContext0_21, check_hlds__simplify__simplify_goal_ite__InstMap0_22, check_hlds__simplify__simplify_goal_ite__Common0_23, check_hlds__simplify__simplify_goal_ite__Common_24, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);
#line 259 "simplify_goal_ite.m"
        return;
      }
#line 261 "simplify_goal_ite.m"
    else
#line 264 "simplify_goal_ite.m"
      {
#line 264 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite__ModuleInfo_44;
#line 264 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite__CanSwitch_56;

#line 264 "simplify_goal_ite.m"
        *check_hlds__simplify__simplify_goal_ite__Common_24 = check_hlds__simplify__simplify_goal_ite__Common0_23;
#line 266 "simplify_goal_ite.m"
        {
#line 266 "simplify_goal_ite.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, &check_hlds__simplify__simplify_goal_ite__ModuleInfo_44);
        }
#line 267 "simplify_goal_ite.m"
        {
#line 267 "simplify_goal_ite.m"
          check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(check_hlds__simplify__simplify_goal_ite__ModuleInfo_44, check_hlds__simplify__simplify_goal_ite__VarTypes_45, check_hlds__simplify__simplify_goal_ite__Cond_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_ite__CanSwitch_56);
        }
#line 289 "simplify_goal_ite.m"
#line 289 "simplify_goal_ite.m"
        switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__CanSwitch_56)) {
#line 289 "simplify_goal_ite.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 289 "simplify_goal_ite.m"
          case (MR_Integer) 0:
#line 289 "simplify_goal_ite.m"
#line 289 "simplify_goal_ite.m"
            switch (MR_unmkbody(check_hlds__simplify__simplify_goal_ite__CanSwitch_56)) {
#line 289 "simplify_goal_ite.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 289 "simplify_goal_ite.m"
              case (MR_Integer) 0:
#line 290 "simplify_goal_ite.m"
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80;
#line 289 "simplify_goal_ite.m"
                break;
#line 289 "simplify_goal_ite.m"
              case (MR_Integer) 1:
#line 292 "simplify_goal_ite.m"
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80;
#line 289 "simplify_goal_ite.m"
                break;
#line 289 "simplify_goal_ite.m"
            }
#line 289 "simplify_goal_ite.m"
            break;
#line 289 "simplify_goal_ite.m"
          case (MR_Integer) 1:
#line 270 "simplify_goal_ite.m"
            {
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__SwitchVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__CanSwitch_56, (MR_Integer) 0)));
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Context_58;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__VarSet_59;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__OnPieces_62;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Pieces_63;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Msg_64;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Spec_66;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_96_96;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_103_103;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_104_104;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_107_107;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_108_108;
#line 270 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_117_117;
#line 277 "simplify_goal_ite.m"
              MR_String check_hlds__simplify__simplify_goal_ite__SwitchVarName_61;

#line 271 "simplify_goal_ite.m"
              {
#line 271 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__Context_58 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo_34);
              }
#line 272 "simplify_goal_ite.m"
              {
#line 272 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, &check_hlds__simplify__simplify_goal_ite__VarSet_59);
              }
#line 275 "simplify_goal_ite.m"
              {
#line 275 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_ite__VarSet_59, check_hlds__simplify__simplify_goal_ite__SwitchVar_57, &check_hlds__simplify__simplify_goal_ite__SwitchVarName_61);
              }
#line 277 "simplify_goal_ite.m"
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 276 "simplify_goal_ite.m"
                {
#line 276 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_93_93;
#line 276 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_94_94;

#line 276 "simplify_goal_ite.m"
                  {
#line 276 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 276 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__SwitchVarName_61));
#line 276 "simplify_goal_ite.m"
                  }
#line 276 "simplify_goal_ite.m"
                  {
#line 276 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_93_93, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_94_94));
#line 276 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "simplify_goal_ite.m"
                  }
#line 276 "simplify_goal_ite.m"
                  {
#line 276 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__OnPieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__OnPieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[19])));
#line 276 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__OnPieces_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_93_93));
#line 276 "simplify_goal_ite.m"
                  }
#line 276 "simplify_goal_ite.m"
                }
#line 277 "simplify_goal_ite.m"
              else
#line 278 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__OnPieces_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2004 "check_hlds.simplify.simplify_goal_ite.c"
              check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 280 "simplify_goal_ite.m"
              {
#line 280 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_96_96 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125, check_hlds__simplify__simplify_goal_ite__OnPieces_62, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[3]));
              }
#line 280 "simplify_goal_ite.m"
              {
#line 280 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__Pieces_63 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_ite__TypeCtorInfo_125_125, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[7]), check_hlds__simplify__simplify_goal_ite__V_96_96);
              }
#line 283 "simplify_goal_ite.m"
              {
#line 283 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 283 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_108_108, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Pieces_63));
#line 283 "simplify_goal_ite.m"
              }
#line 283 "simplify_goal_ite.m"
              {
#line 283 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_107_107, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_108_108));
#line 283 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "simplify_goal_ite.m"
              }
#line 282 "simplify_goal_ite.m"
              {
#line 282 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_104_104, 0) = ((MR_Box) (((MR_Integer) 38 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 282 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_107_107));
#line 282 "simplify_goal_ite.m"
              }
#line 283 "simplify_goal_ite.m"
              {
#line 283 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_103_103, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_104_104));
#line 283 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "simplify_goal_ite.m"
              }
#line 281 "simplify_goal_ite.m"
              {
#line 281 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__Msg_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_58));
#line 281 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_103_103));
#line 281 "simplify_goal_ite.m"
              }
#line 287 "simplify_goal_ite.m"
              {
#line 287 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_117_117, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_64));
#line 287 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "simplify_goal_ite.m"
              }
#line 286 "simplify_goal_ite.m"
              {
#line 286 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__Spec_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 286 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[1])));
#line 286 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[3])));
#line 286 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_66, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_117_117));
#line 286 "simplify_goal_ite.m"
              }
#line 288 "simplify_goal_ite.m"
              {
#line 288 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_66, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_80_80, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);
              }
#line 270 "simplify_goal_ite.m"
            }
#line 289 "simplify_goal_ite.m"
            break;
#line 289 "simplify_goal_ite.m"
        }
#line 301 "simplify_goal_ite.m"
        {
#line 301 "simplify_goal_ite.m"
          check_hlds__simplify__simplify_goal_ite__succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(*check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_70);
        }
#line 301 "simplify_goal_ite.m"
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 301 "simplify_goal_ite.m"
          {
#line 302 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CondSolns_54 == (MR_Integer) 3);
#line 301 "simplify_goal_ite.m"
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 301 "simplify_goal_ite.m"
              {
#line 303 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__IfThenElseNumSolns_51 == (MR_Integer) 3);
#line 303 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__succeeded = !(check_hlds__simplify__simplify_goal_ite__succeeded);
#line 301 "simplify_goal_ite.m"
              }
#line 301 "simplify_goal_ite.m"
          }
#line 310 "simplify_goal_ite.m"
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 306 "simplify_goal_ite.m"
          {
#line 306 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__InnerDetism_67;
#line 306 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__InnerInfo_68;
#line 306 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_123_123;

#line 305 "simplify_goal_ite.m"
            {
#line 305 "simplify_goal_ite.m"
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_ite__InnerDetism_67, check_hlds__simplify__simplify_goal_ite__IfThenElseCanFail_50, (MR_Integer) 3);
            }
#line 307 "simplify_goal_ite.m"
            {
#line 307 "simplify_goal_ite.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_ite__InnerDetism_67, check_hlds__simplify__simplify_goal_ite__GoalInfo1_47, &check_hlds__simplify__simplify_goal_ite__InnerInfo_68);
            }
#line 309 "simplify_goal_ite.m"
            {
#line 309 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "simplify_goal_ite.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_123_123, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48));
#line 309 "simplify_goal_ite.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_123_123, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__InnerInfo_68));
#line 309 "simplify_goal_ite.m"
            }
#line 308 "simplify_goal_ite.m"
            {
#line 308 "simplify_goal_ite.m"
              MR_Word base;
#line 308 "simplify_goal_ite.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 308 "simplify_goal_ite.m"
              *check_hlds__simplify__simplify_goal_ite__GoalExpr_18 = base;
#line 308 "simplify_goal_ite.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 308 "simplify_goal_ite.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[20])));
#line 308 "simplify_goal_ite.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_123_123));
#line 308 "simplify_goal_ite.m"
            }
#line 306 "simplify_goal_ite.m"
          }
#line 310 "simplify_goal_ite.m"
        else
#line 311 "simplify_goal_ite.m"
          *check_hlds__simplify__simplify_goal_ite__GoalExpr_18 = check_hlds__simplify__simplify_goal_ite__IfThenElseExpr_48;
#line 313 "simplify_goal_ite.m"
        *check_hlds__simplify__simplify_goal_ite__GoalInfo_20 = check_hlds__simplify__simplify_goal_ite__GoalInfo1_47;
#line 264 "simplify_goal_ite.m"
      }
#line 211 "simplify_goal_ite.m"
  }
#line 202 "simplify_goal_ite.m"
}

#line 172 "simplify_goal_ite.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__maybe_warm_about_condition_5_p_0(
#line 172 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_6,
#line 172 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_7,
#line 172 "simplify_goal_ite.m"
  MR_String check_hlds__simplify__simplify_goal_ite__Problem_8,
#line 172 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16,
#line 172 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_17)
#line 172 "simplify_goal_ite.m"
{
#line 176 "simplify_goal_ite.m"
  {
#line 176 "simplify_goal_ite.m"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 176 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_7, (MR_Integer) 0)));
#line 176 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44;
#line 176 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_45_45;
#line 177 "simplify_goal_ite.m"
    MR_Integer check_hlds__simplify__simplify_goal_ite__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_7, (MR_Integer) 1)));
#line 177 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_7, (MR_Integer) 2)));

#line 184 "simplify_goal_ite.m"
#line 184 "simplify_goal_ite.m"
    switch (check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_10) {
#line 184 "simplify_goal_ite.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 184 "simplify_goal_ite.m"
      case (MR_Integer) 0:
#line 185 "simplify_goal_ite.m"
        {
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__Context_11;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__Pieces_12;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__Msg_13;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__Spec_15;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_20_20;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_21_21;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_28_28;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_29_29;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_32_32;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_33_33;
#line 185 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_42_42;

#line 186 "simplify_goal_ite.m"
          {
#line 186 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__Context_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_6);
          }
#line 188 "simplify_goal_ite.m"
          {
#line 188 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 188 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_21_21, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Problem_8));
#line 188 "simplify_goal_ite.m"
          }
#line 188 "simplify_goal_ite.m"
          {
#line 188 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_20_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_21_21));
#line 188 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[3])));
#line 188 "simplify_goal_ite.m"
          }
#line 187 "simplify_goal_ite.m"
          {
#line 187 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[18])));
#line 187 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__Pieces_12, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_20_20));
#line 187 "simplify_goal_ite.m"
          }
#line 190 "simplify_goal_ite.m"
          {
#line 190 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 190 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_33_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Pieces_12));
#line 190 "simplify_goal_ite.m"
          }
#line 190 "simplify_goal_ite.m"
          {
#line 190 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_32_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_33_33));
#line 190 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "simplify_goal_ite.m"
          }
#line 190 "simplify_goal_ite.m"
          {
#line 190 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_29_29, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 190 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_29_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_32_32));
#line 190 "simplify_goal_ite.m"
          }
#line 190 "simplify_goal_ite.m"
          {
#line 190 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_28_28, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_29_29));
#line 190 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "simplify_goal_ite.m"
          }
#line 189 "simplify_goal_ite.m"
          {
#line 189 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_13, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_11));
#line 189 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_13, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_28_28));
#line 189 "simplify_goal_ite.m"
          }
#line 194 "simplify_goal_ite.m"
          {
#line 194 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_13));
#line 194 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "simplify_goal_ite.m"
          }
#line 193 "simplify_goal_ite.m"
          {
#line 193 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 193 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
#line 193 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[1])));
#line 193 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_15, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_42_42));
#line 193 "simplify_goal_ite.m"
          }
#line 195 "simplify_goal_ite.m"
          {
#line 195 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_15, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44);
          }
#line 185 "simplify_goal_ite.m"
        }
#line 184 "simplify_goal_ite.m"
        break;
#line 184 "simplify_goal_ite.m"
      case (MR_Integer) 1:
#line 179 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_16;
#line 184 "simplify_goal_ite.m"
        break;
#line 184 "simplify_goal_ite.m"
    }
#line 197 "simplify_goal_ite.m"
    {
#line 197 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_44_44, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_45_45);
    }
#line 198 "simplify_goal_ite.m"
    {
#line 198 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_45_45, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_17);
#line 198 "simplify_goal_ite.m"
      return;
    }
#line 176 "simplify_goal_ite.m"
  }
#line 172 "simplify_goal_ite.m"
}

#line 37 "simplify_goal_ite.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(
#line 37 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalExpr0_11,
#line 37 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_12,
#line 37 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_13,
#line 37 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_14,
#line 37 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_15,
#line 37 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_16,
#line 37 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_17,
#line 37 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_18,
#line 37 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_39,
#line 37 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40)
#line 37 "simplify_goal_ite.m"
{
#line 466 "simplify_goal_ite.m"
  {
#line 466 "simplify_goal_ite.m"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 466 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__SubGoal0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__GoalExpr0_11), (MR_Integer) 0);
#line 466 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__SubGoal1_21;
#line 466 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_23;
#line 466 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Context_24;
#line 466 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41;
#line 466 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
#line 470 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite___Common1_22;
#line 472 "simplify_goal_ite.m"
    MR_Integer check_hlds__simplify__simplify_goal_ite__V_100_100;
#line 472 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_101_101;
#line 509 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_82_82;
#line 509 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_83_83;
#line 509 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_84_84;
#line 509 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_34_34;

#line 470 "simplify_goal_ite.m"
    {
#line 470 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__SubGoal0_20, &check_hlds__simplify__simplify_goal_ite__SubGoal1_21, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, &check_hlds__simplify__simplify_goal_ite___Common1_22, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_39, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41);
    }
#line 472 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_Integer) 0)));
#line 472 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_Integer) 1)));
#line 472 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_Integer) 2)));
#line 473 "simplify_goal_ite.m"
    {
#line 473 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13);
    }
#line 500 "simplify_goal_ite.m"
#line 500 "simplify_goal_ite.m"
    switch (check_hlds__simplify__simplify_goal_ite__InsideDuplForSwitch_23) {
#line 500 "simplify_goal_ite.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 500 "simplify_goal_ite.m"
      case (MR_Integer) 0:
#line 475 "simplify_goal_ite.m"
        {
#line 475 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__SubGoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));
#line 475 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__Detism_27;
#line 475 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__CanFail_28;
#line 475 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__MaxSoln_29;
#line 476 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));

#line 477 "simplify_goal_ite.m"
          {
#line 477 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__Detism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__SubGoalInfo1_26);
          }
#line 478 "simplify_goal_ite.m"
          {
#line 478 "simplify_goal_ite.m"
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__Detism_27, &check_hlds__simplify__simplify_goal_ite__CanFail_28, &check_hlds__simplify__simplify_goal_ite__MaxSoln_29);
          }
#line 479 "simplify_goal_ite.m"
          check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__CanFail_28 == (MR_Integer) 1);
#line 488 "simplify_goal_ite.m"
          if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 480 "simplify_goal_ite.m"
            {
#line 480 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Msg_31;
#line 480 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Spec_33;
#line 480 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_59_59;

#line 481 "simplify_goal_ite.m"
              {
#line 481 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__Msg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_24));
#line 481 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[12])));
#line 481 "simplify_goal_ite.m"
              }
#line 486 "simplify_goal_ite.m"
              {
#line 486 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_31));
#line 486 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "simplify_goal_ite.m"
              }
#line 485 "simplify_goal_ite.m"
              {
#line 485 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 485 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
#line 485 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[1])));
#line 485 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_59_59));
#line 485 "simplify_goal_ite.m"
              }
#line 487 "simplify_goal_ite.m"
              {
#line 487 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_33, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61);
              }
#line 480 "simplify_goal_ite.m"
            }
#line 488 "simplify_goal_ite.m"
          else
#line 497 "simplify_goal_ite.m"
            {
#line 488 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__MaxSoln_29 == (MR_Integer) 0);
#line 497 "simplify_goal_ite.m"
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 489 "simplify_goal_ite.m"
                {
#line 489 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_79_79;
#line 489 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__Msg_93;
#line 489 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__Spec_95;

#line 490 "simplify_goal_ite.m"
                  {
#line 490 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__Msg_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_93, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Context_24));
#line 490 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Msg_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_1[17])));
#line 490 "simplify_goal_ite.m"
                  }
#line 495 "simplify_goal_ite.m"
                  {
#line 495 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Msg_93));
#line 495 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "simplify_goal_ite.m"
                  }
#line 494 "simplify_goal_ite.m"
                  {
#line 494 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 494 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
#line 494 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_ite_scalar_common_3[1])));
#line 494 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Spec_95, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_79_79));
#line 494 "simplify_goal_ite.m"
                  }
#line 496 "simplify_goal_ite.m"
                  {
#line 496 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_ite__Spec_95, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61);
                  }
#line 489 "simplify_goal_ite.m"
                }
#line 497 "simplify_goal_ite.m"
              else
#line 497 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41;
#line 497 "simplify_goal_ite.m"
            }
#line 475 "simplify_goal_ite.m"
        }
#line 500 "simplify_goal_ite.m"
        break;
#line 500 "simplify_goal_ite.m"
      case (MR_Integer) 1:
#line 501 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_41_41;
#line 500 "simplify_goal_ite.m"
        break;
#line 500 "simplify_goal_ite.m"
    }
#line 509 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));
#line 509 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));
#line 509 "simplify_goal_ite.m"
    check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_82_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_82_82, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 509 "simplify_goal_ite.m"
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 509 "simplify_goal_ite.m"
      {
#line 509 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal_ite__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_82_82, (MR_Integer) 1)));
#line 509 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal_ite__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_82_82, (MR_Integer) 2)));
#line 509 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_83_83 == (MR_Integer) 0);
#line 509 "simplify_goal_ite.m"
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 509 "simplify_goal_ite.m"
          check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "simplify_goal_ite.m"
      }
#line 512 "simplify_goal_ite.m"
    if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 511 "simplify_goal_ite.m"
      {
#line 511 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite__V_85_85;

#line 511 "simplify_goal_ite.m"
        {
#line 511 "simplify_goal_ite.m"
          check_hlds__simplify__simplify_goal_ite__V_85_85 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_ite__Context_24);
        }
#line 511 "simplify_goal_ite.m"
        *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_85_85, (MR_Integer) 0)));
#line 511 "simplify_goal_ite.m"
        *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_85_85, (MR_Integer) 1)));
#line 511 "simplify_goal_ite.m"
        *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
#line 511 "simplify_goal_ite.m"
      }
#line 512 "simplify_goal_ite.m"
    else
#line 517 "simplify_goal_ite.m"
      {
#line 514 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));
#line 514 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite__V_87_87;
#line 514 "simplify_goal_ite.m"
        MR_Word check_hlds__simplify__simplify_goal_ite__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));

#line 514 "simplify_goal_ite.m"
        check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_86_86)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_86_86, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 514 "simplify_goal_ite.m"
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 514 "simplify_goal_ite.m"
          {
#line 514 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_86_86, (MR_Integer) 1)));
#line 514 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "simplify_goal_ite.m"
          }
#line 517 "simplify_goal_ite.m"
        if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 516 "simplify_goal_ite.m"
          {
#line 516 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_88_88;

#line 516 "simplify_goal_ite.m"
            {
#line 516 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__V_88_88 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_ite__Context_24);
            }
#line 516 "simplify_goal_ite.m"
            *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_88_88, (MR_Integer) 0)));
#line 516 "simplify_goal_ite.m"
            *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_88_88, (MR_Integer) 1)));
#line 516 "simplify_goal_ite.m"
            *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
#line 516 "simplify_goal_ite.m"
          }
#line 517 "simplify_goal_ite.m"
        else
#line 529 "simplify_goal_ite.m"
          {
#line 529 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__SubSubGoal_36;
#line 529 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__SubSubGoalInfo_37;
#line 520 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 0)));
#line 520 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_90_90;
#line 520 "simplify_goal_ite.m"
            MR_Word check_hlds__simplify__simplify_goal_ite__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__SubGoal1_21, (MR_Integer) 1)));

#line 520 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_89_89)) == (MR_mktag((MR_Integer) 0)));
#line 520 "simplify_goal_ite.m"
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 520 "simplify_goal_ite.m"
              {
#line 520 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_90_90 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__V_89_89), (MR_Integer) 0);
#line 520 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__SubSubGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_90_90, (MR_Integer) 0)));
#line 520 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__SubSubGoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_90_90, (MR_Integer) 1)));
#line 525 "simplify_goal_ite.m"
                {
#line 525 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__semidet_fail_0_p_0();
                }
#line 520 "simplify_goal_ite.m"
              }
#line 529 "simplify_goal_ite.m"
            if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 527 "simplify_goal_ite.m"
              {
#line 527 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__SubSubGoalInfo_37, check_hlds__simplify__simplify_goal_ite__SubSubGoal_36, check_hlds__simplify__simplify_goal_ite__GoalExpr_12, check_hlds__simplify__simplify_goal_ite__GoalInfo_14, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40);
              }
#line 529 "simplify_goal_ite.m"
            else
#line 530 "simplify_goal_ite.m"
              {
#line 530 "simplify_goal_ite.m"
                *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_ite__SubGoal1_21);
#line 531 "simplify_goal_ite.m"
                *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = check_hlds__simplify__simplify_goal_ite__GoalInfo0_13;
#line 530 "simplify_goal_ite.m"
                *check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_40 = check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_61_61;
#line 530 "simplify_goal_ite.m"
              }
#line 529 "simplify_goal_ite.m"
          }
#line 517 "simplify_goal_ite.m"
      }
#line 536 "simplify_goal_ite.m"
    *check_hlds__simplify__simplify_goal_ite__Common_18 = check_hlds__simplify__simplify_goal_ite__Common0_17;
#line 466 "simplify_goal_ite.m"
  }
#line 37 "simplify_goal_ite.m"
}

#line 28 "simplify_goal_ite.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(
#line 28 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalExpr0_11,
#line 28 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalExpr_12,
#line 28 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__GoalInfo0_13,
#line 28 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__GoalInfo_14,
#line 28 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__NestedContext0_15,
#line 28 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__InstMap0_16,
#line 28 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__Common0_17,
#line 28 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__Common_18,
#line 28 "simplify_goal_ite.m"
  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_45,
#line 28 "simplify_goal_ite.m"
  MR_Word * check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_46)
#line 28 "simplify_goal_ite.m"
{
#line 67 "simplify_goal_ite.m"
  {
#line 67 "simplify_goal_ite.m"
    MR_bool check_hlds__simplify__simplify_goal_ite__succeeded;
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 1)));
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 2)));
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 3)));
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__GoalExpr0_11, (MR_Integer) 4)));
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 1)));
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondDetism0_26;
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondCanFail0_27;
#line 67 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__CondSolns0_28;
#line 92 "simplify_goal_ite.m"
    MR_Word check_hlds__simplify__simplify_goal_ite__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 0)));

#line 93 "simplify_goal_ite.m"
    {
#line 93 "simplify_goal_ite.m"
      check_hlds__simplify__simplify_goal_ite__CondDetism0_26 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_ite__CondInfo0_25);
    }
#line 94 "simplify_goal_ite.m"
    {
#line 94 "simplify_goal_ite.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_ite__CondDetism0_26, &check_hlds__simplify__simplify_goal_ite__CondCanFail0_27, &check_hlds__simplify__simplify_goal_ite__CondSolns0_28);
    }
#line 105 "simplify_goal_ite.m"
#line 105 "simplify_goal_ite.m"
    switch (check_hlds__simplify__simplify_goal_ite__CondCanFail0_27) {
#line 105 "simplify_goal_ite.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 105 "simplify_goal_ite.m"
      case (MR_Integer) 0:
#line 149 "simplify_goal_ite.m"
#line 149 "simplify_goal_ite.m"
        switch (check_hlds__simplify__simplify_goal_ite__CondSolns0_28) {
#line 149 "simplify_goal_ite.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 149 "simplify_goal_ite.m"
          case (MR_Integer) 3:
#line 149 "simplify_goal_ite.m"
          case (MR_Integer) 2:
#line 149 "simplify_goal_ite.m"
          case (MR_Integer) 1:
#line 164 "simplify_goal_ite.m"
            {
#line 154 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else0_23, (MR_Integer) 0)));
#line 154 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_48_48;
#line 154 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Else0_23, (MR_Integer) 1)));

#line 154 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_47_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_47_47, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 154 "simplify_goal_ite.m"
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 154 "simplify_goal_ite.m"
                {
#line 154 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_47_47, (MR_Integer) 1)));
#line 154 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__succeeded = (check_hlds__simplify__simplify_goal_ite__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "simplify_goal_ite.m"
                }
#line 164 "simplify_goal_ite.m"
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 156 "simplify_goal_ite.m"
                {
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_49_49;
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_50_50;
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_51_51;
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_52_52;
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_54_54;
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__CondGoals_76;
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__ThenGoals_77;
#line 156 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__Goals_78;

#line 156 "simplify_goal_ite.m"
                  {
#line 156 "simplify_goal_ite.m"
                    hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Cond0_21, &check_hlds__simplify__simplify_goal_ite__CondGoals_76);
                  }
#line 157 "simplify_goal_ite.m"
                  {
#line 157 "simplify_goal_ite.m"
                    hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Then0_22, &check_hlds__simplify__simplify_goal_ite__ThenGoals_77);
                  }
#line 158 "simplify_goal_ite.m"
                  {
#line 158 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__Goals_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_ite__CondGoals_76, check_hlds__simplify__simplify_goal_ite__ThenGoals_77);
                  }
#line 159 "simplify_goal_ite.m"
                  {
#line 159 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 159 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 159 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 159 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_52_52, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Goals_78));
#line 159 "simplify_goal_ite.m"
                  }
#line 159 "simplify_goal_ite.m"
                  {
#line 159 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 159 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_52_52));
#line 159 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_49_49, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__GoalInfo0_13));
#line 159 "simplify_goal_ite.m"
                  }
#line 159 "simplify_goal_ite.m"
                  {
#line 159 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__V_49_49, &check_hlds__simplify__simplify_goal_ite__V_50_50, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_45, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_51_51);
                  }
#line 160 "simplify_goal_ite.m"
                  *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_50_50, (MR_Integer) 0)));
#line 160 "simplify_goal_ite.m"
                  *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_50_50, (MR_Integer) 1)));
#line 162 "simplify_goal_ite.m"
                  {
#line 162 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_51_51, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_54_54);
                  }
#line 163 "simplify_goal_ite.m"
                  {
#line 163 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_54_54, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_46);
#line 163 "simplify_goal_ite.m"
                    return;
                  }
#line 156 "simplify_goal_ite.m"
                }
#line 164 "simplify_goal_ite.m"
              else
#line 165 "simplify_goal_ite.m"
                {
#line 165 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(check_hlds__simplify__simplify_goal_ite__Vars_20, check_hlds__simplify__simplify_goal_ite__Cond0_21, check_hlds__simplify__simplify_goal_ite__Then0_22, check_hlds__simplify__simplify_goal_ite__Else0_23, check_hlds__simplify__simplify_goal_ite__GoalExpr_12, check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__GoalInfo_14, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_45, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_46);
#line 165 "simplify_goal_ite.m"
                  return;
                }
#line 164 "simplify_goal_ite.m"
            }
#line 149 "simplify_goal_ite.m"
            break;
#line 149 "simplify_goal_ite.m"
          case (MR_Integer) 0:
#line 108 "simplify_goal_ite.m"
            {
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_32;
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__Cond_35;
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__ElseList_42;
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__List_43;
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_62_62;
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_63_63;
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_64_64;
#line 108 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_65_65;
#line 120 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__NegCond_33;
#line 112 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_57_57;
#line 112 "simplify_goal_ite.m"
              MR_Word check_hlds__simplify__simplify_goal_ite__V_34_34;

#line 110 "simplify_goal_ite.m"
              {
#line 110 "simplify_goal_ite.m"
                parse_tree__prog_detism__det_negation_det_2_p_0(check_hlds__simplify__simplify_goal_ite__CondDetism0_26, &check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_32);
              }
#line 112 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 0)));
#line 112 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond0_21, (MR_Integer) 1)));
#line 112 "simplify_goal_ite.m"
              check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__V_57_57)) == (MR_mktag((MR_Integer) 0)));
#line 112 "simplify_goal_ite.m"
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 112 "simplify_goal_ite.m"
                {
#line 112 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__NegCond_33 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__simplify_goal_ite__V_57_57), (MR_Integer) 0);
#line 117 "simplify_goal_ite.m"
                  {
#line 117 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__succeeded = mercury__builtin__semidet_fail_0_p_0();
                  }
#line 112 "simplify_goal_ite.m"
                }
#line 120 "simplify_goal_ite.m"
              if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 119 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__Cond_35 = check_hlds__simplify__simplify_goal_ite__NegCond_33;
#line 120 "simplify_goal_ite.m"
              else
#line 136 "simplify_goal_ite.m"
                {
#line 136 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegDetism_38;
#line 136 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegInstMapDelta_39;
#line 136 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegCondInfo0_40;
#line 136 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegCondInfo_41;
#line 136 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__V_61_61;
#line 133 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegDetism1_36;
#line 133 "simplify_goal_ite.m"
                  MR_Word check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_37;

#line 122 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_32)) == (MR_mktag((MR_Integer) 1)));
#line 122 "simplify_goal_ite.m"
                  if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 122 "simplify_goal_ite.m"
                    {
#line 122 "simplify_goal_ite.m"
                      check_hlds__simplify__simplify_goal_ite__NegDetism1_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__MaybeNegDetism_32, (MR_Integer) 0)));
#line 126 "simplify_goal_ite.m"
#line 126 "simplify_goal_ite.m"
                      switch (check_hlds__simplify__simplify_goal_ite__NegDetism1_36) {
#line 126 "simplify_goal_ite.m"
                        default:
#line 126 "simplify_goal_ite.m"
                          check_hlds__simplify__simplify_goal_ite__succeeded = MR_FALSE;
#line 126 "simplify_goal_ite.m"
                          break;
#line 126 "simplify_goal_ite.m"
                        case (MR_Integer) 0:
#line 128 "simplify_goal_ite.m"
                          {
#line 128 "simplify_goal_ite.m"
                            {
#line 128 "simplify_goal_ite.m"
                              hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_37);
                            }
#line 128 "simplify_goal_ite.m"
                            check_hlds__simplify__simplify_goal_ite__succeeded = MR_TRUE;
#line 128 "simplify_goal_ite.m"
                          }
#line 126 "simplify_goal_ite.m"
                          break;
#line 126 "simplify_goal_ite.m"
                        case (MR_Integer) 6:
#line 125 "simplify_goal_ite.m"
                          {
#line 125 "simplify_goal_ite.m"
                            {
#line 125 "simplify_goal_ite.m"
                              hlds__instmap__instmap_delta_init_unreachable_1_p_0(&check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_37);
                            }
#line 125 "simplify_goal_ite.m"
                            check_hlds__simplify__simplify_goal_ite__succeeded = MR_TRUE;
#line 125 "simplify_goal_ite.m"
                          }
#line 126 "simplify_goal_ite.m"
                          break;
#line 126 "simplify_goal_ite.m"
                      }
#line 122 "simplify_goal_ite.m"
                    }
#line 133 "simplify_goal_ite.m"
                  if (check_hlds__simplify__simplify_goal_ite__succeeded)
#line 131 "simplify_goal_ite.m"
                    {
#line 131 "simplify_goal_ite.m"
                      check_hlds__simplify__simplify_goal_ite__NegDetism_38 = check_hlds__simplify__simplify_goal_ite__NegDetism1_36;
#line 132 "simplify_goal_ite.m"
                      check_hlds__simplify__simplify_goal_ite__NegInstMapDelta_39 = check_hlds__simplify__simplify_goal_ite__NegInstMapDelta1_37;
#line 131 "simplify_goal_ite.m"
                    }
#line 133 "simplify_goal_ite.m"
                  else
#line 134 "simplify_goal_ite.m"
                    {
#line 134 "simplify_goal_ite.m"
                      {
#line 134 "simplify_goal_ite.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_ite", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.simplify_goal_ite\'/10", (MR_String) "cannot get negated determinism");
#line 134 "simplify_goal_ite.m"
                        return;
                      }
#line 134 "simplify_goal_ite.m"
                    }
#line 137 "simplify_goal_ite.m"
                  {
#line 137 "simplify_goal_ite.m"
                    hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_ite__NegDetism_38, check_hlds__simplify__simplify_goal_ite__CondInfo0_25, &check_hlds__simplify__simplify_goal_ite__NegCondInfo0_40);
                  }
#line 138 "simplify_goal_ite.m"
                  {
#line 138 "simplify_goal_ite.m"
                    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_ite__NegInstMapDelta_39, check_hlds__simplify__simplify_goal_ite__NegCondInfo0_40, &check_hlds__simplify__simplify_goal_ite__NegCondInfo_41);
                  }
#line 140 "simplify_goal_ite.m"
                  check_hlds__simplify__simplify_goal_ite__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_ite__Cond0_21);
#line 140 "simplify_goal_ite.m"
                  {
#line 140 "simplify_goal_ite.m"
                    check_hlds__simplify__simplify_goal_ite__Cond_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 140 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_61_61));
#line 140 "simplify_goal_ite.m"
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__Cond_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__NegCondInfo_41));
#line 140 "simplify_goal_ite.m"
                  }
#line 136 "simplify_goal_ite.m"
                }
#line 142 "simplify_goal_ite.m"
              {
#line 142 "simplify_goal_ite.m"
                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Else0_23, &check_hlds__simplify__simplify_goal_ite__ElseList_42);
              }
#line 143 "simplify_goal_ite.m"
              {
#line 143 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__List_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__List_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Cond_35));
#line 143 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_ite__List_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__ElseList_42));
#line 143 "simplify_goal_ite.m"
              }
#line 144 "simplify_goal_ite.m"
              {
#line 144 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 144 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 144 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_65_65, 1) = ((MR_Box) ((MR_Integer) 0));
#line 144 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_65_65, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__List_43));
#line 144 "simplify_goal_ite.m"
              }
#line 144 "simplify_goal_ite.m"
              {
#line 144 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_62_62, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_65_65));
#line 144 "simplify_goal_ite.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__GoalInfo0_13));
#line 144 "simplify_goal_ite.m"
              }
#line 144 "simplify_goal_ite.m"
              {
#line 144 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__V_62_62, &check_hlds__simplify__simplify_goal_ite__V_63_63, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_45, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_64_64);
              }
#line 145 "simplify_goal_ite.m"
              *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_63_63, (MR_Integer) 0)));
#line 145 "simplify_goal_ite.m"
              *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_63_63, (MR_Integer) 1)));
#line 147 "simplify_goal_ite.m"
              {
#line 147 "simplify_goal_ite.m"
                check_hlds__simplify__simplify_goal_ite__maybe_warm_about_condition_5_p_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_String) "cannot succeed", check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_64_64, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_46);
#line 147 "simplify_goal_ite.m"
                return;
              }
#line 108 "simplify_goal_ite.m"
            }
#line 149 "simplify_goal_ite.m"
            break;
#line 149 "simplify_goal_ite.m"
        }
#line 105 "simplify_goal_ite.m"
        break;
#line 105 "simplify_goal_ite.m"
      case (MR_Integer) 1:
#line 96 "simplify_goal_ite.m"
        {
#line 96 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__CondGoals_29;
#line 96 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__ThenGoals_30;
#line 96 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__Goals_31;
#line 96 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_69_69;
#line 96 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_70_70;
#line 96 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71;
#line 96 "simplify_goal_ite.m"
          MR_Word check_hlds__simplify__simplify_goal_ite__V_72_72;

#line 97 "simplify_goal_ite.m"
          {
#line 97 "simplify_goal_ite.m"
            hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Cond0_21, &check_hlds__simplify__simplify_goal_ite__CondGoals_29);
          }
#line 98 "simplify_goal_ite.m"
          {
#line 98 "simplify_goal_ite.m"
            hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_ite__Then0_22, &check_hlds__simplify__simplify_goal_ite__ThenGoals_30);
          }
#line 99 "simplify_goal_ite.m"
          {
#line 99 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__Goals_31 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_ite__CondGoals_29, check_hlds__simplify__simplify_goal_ite__ThenGoals_30);
          }
#line 100 "simplify_goal_ite.m"
          {
#line 100 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 100 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 100 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_72_72, 1) = ((MR_Box) ((MR_Integer) 0));
#line 100 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_ite__V_72_72, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__Goals_31));
#line 100 "simplify_goal_ite.m"
          }
#line 100 "simplify_goal_ite.m"
          {
#line 100 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_69_69, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__V_72_72));
#line 100 "simplify_goal_ite.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_69_69, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__GoalInfo0_13));
#line 100 "simplify_goal_ite.m"
          }
#line 100 "simplify_goal_ite.m"
          {
#line 100 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_ite__V_69_69, &check_hlds__simplify__simplify_goal_ite__V_70_70, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, check_hlds__simplify__simplify_goal_ite__InstMap0_16, check_hlds__simplify__simplify_goal_ite__Common0_17, check_hlds__simplify__simplify_goal_ite__Common_18, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_0_45, &check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71);
          }
#line 101 "simplify_goal_ite.m"
          *check_hlds__simplify__simplify_goal_ite__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_70_70, (MR_Integer) 0)));
#line 101 "simplify_goal_ite.m"
          *check_hlds__simplify__simplify_goal_ite__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_ite__V_70_70, (MR_Integer) 1)));
#line 103 "simplify_goal_ite.m"
          {
#line 103 "simplify_goal_ite.m"
            check_hlds__simplify__simplify_goal_ite__maybe_warm_about_condition_5_p_0(check_hlds__simplify__simplify_goal_ite__GoalInfo0_13, check_hlds__simplify__simplify_goal_ite__NestedContext0_15, (MR_String) "cannot fail", check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_71_71, check_hlds__simplify__simplify_goal_ite__STATE_VARIABLE_Info_46);
#line 103 "simplify_goal_ite.m"
            return;
          }
#line 96 "simplify_goal_ite.m"
        }
#line 105 "simplify_goal_ite.m"
        break;
#line 105 "simplify_goal_ite.m"
    }
#line 67 "simplify_goal_ite.m"
  }
#line 28 "simplify_goal_ite.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_ite. */
