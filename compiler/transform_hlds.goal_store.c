/*
** Automatically generated from `goal_store.m'
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


/* :- module transform_hlds.goal_store. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__goal_store__init
ENDINIT
*/

#include "transform_hlds.goal_store.mih"


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
#include "solutions.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 115 "goal_store.m"
struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s {
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20;
#line 115 "goal_store.m"
  MR_Box transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8;
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTypes_9;
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_10;
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_11;
#line 115 "goal_store.m"
  MR_Box * transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12;
#line 115 "goal_store.m"
  MR_Cont transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont;
#line 115 "goal_store.m"
  void * transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr;
#line 119 "goal_store.m"
  MR_bool transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded;
#line 119 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13;
#line 119 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14;
#line 119 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15;
#line 119 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16;
#line 119 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18;
#line 119 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_19_19;
#line 119 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_21_21;
#line 81 "goal_store.m"
  MR_Box transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_V_18_18;
#line 115 "goal_store.m"
};

#line 45 "goal_store.m"
struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s {
#line 45 "goal_store.m"
  MR_Word * transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6;
#line 45 "goal_store.m"
  MR_Cont transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont;
#line 45 "goal_store.m"
  void * transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr;
#line 81 "goal_store.m"
  MR_Box transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6;
#line 45 "goal_store.m"
};


#line 193 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0;

#line 196 "transform_hlds.goal_store.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__goal_store__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 202 "transform_hlds.goal_store.c"
static const MR_PseudoTypeInfo transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0[2];

#line 205 "transform_hlds.goal_store.c"
static const MR_DuFunctorDesc transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0;

#line 208 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0[1];

#line 211 "transform_hlds.goal_store.c"
static const MR_DuPtagLayout transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0[1];

#line 214 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0[1];

#line 217 "transform_hlds.goal_store.c"
static const MR_Integer transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0[1];

#line 220 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0_10001(
#line 223 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 225 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 227 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3);

#line 230 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0_10001(
#line 233 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 235 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_2,
#line 237 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3,
#line 239 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_4);

#line 242 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0_10001(
#line 245 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 247 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2);

#line 250 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0_10001(
#line 253 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 255 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 257 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3);

#line 81 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_2(
#line 81 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg);

#line 119 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_1(
#line 119 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg);

#line 115 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0(
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_20,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_7,
#line 115 "goal_store.m"
  MR_Box transform_hlds__goal_store__StartId_8,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__VarTypes_9,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__ModuleInfo_10,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__FullyStrict_11,
#line 115 "goal_store.m"
  MR_Box * transform_hlds__goal_store__EarlierId_12,
#line 115 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 115 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr);

#line 112 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0_1(
#line 112 "goal_store.m"
  MR_Box transform_hlds__goal_store__closure_arg,
#line 112 "goal_store.m"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 112 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 112 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr);

#line 88 "goal_store.m"
static MR_Word MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0(
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_26,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__4_4,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__5_5,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__6_6);

#line 81 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0_1(
#line 81 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg);


static /* final */ const MR_Integer transform_hlds__goal_store_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__goal_store_scalar_common_2[1][10];




static /* final */ const MR_Integer transform_hlds__goal_store_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box transform_hlds__goal_store_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__goal_store_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__goal_store__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 371 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0
  }
};

#line 380 "transform_hlds.goal_store.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__goal_store__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 388 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__goal_store__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 397 "transform_hlds.goal_store.c"
const MR_TypeCtorInfo_Struct transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_goal_store_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (transform_hlds__goal_store____Unify____goal_store_1_0_10001)),
  ((MR_Box) (transform_hlds__goal_store____Compare____goal_store_1_0_10001)),
  (MR_String) "transform_hlds.goal_store",
  (MR_String) "goal_store",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 414 "transform_hlds.goal_store.c"
static const MR_PseudoTypeInfo transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 420 "transform_hlds.goal_store.c"
static const MR_DuFunctorDesc transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0 = {
  (MR_String) "stored_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0,
  NULL,
  NULL,
  NULL
};

#line 435 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0[1] = {
  &transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0
};

#line 440 "transform_hlds.goal_store.c"
static const MR_DuPtagLayout transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0
  }
};

#line 449 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0[1] = {
  &transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0
};

#line 454 "transform_hlds.goal_store.c"
static const MR_Integer transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0[1] = {
  (MR_Integer) 0
};

#line 459 "transform_hlds.goal_store.c"
const MR_TypeCtorInfo_Struct transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__goal_store____Unify____stored_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__goal_store____Compare____stored_goal_0_0_10001)),
  (MR_String) "transform_hlds.goal_store",
  (MR_String) "stored_goal",
  {     transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0 },
  {     transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0
};

#line 476 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0_10001(
#line 479 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 481 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 483 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3)
#line 485 "transform_hlds.goal_store.c"
{
#line 487 "transform_hlds.goal_store.c"
  {
#line 489 "transform_hlds.goal_store.c"
    MR_bool transform_hlds__goal_store__succeeded;

#line 492 "transform_hlds.goal_store.c"
    {
#line 494 "transform_hlds.goal_store.c"
      transform_hlds__goal_store__succeeded = transform_hlds__goal_store____Unify____goal_store_1_0(((MR_Word) transform_hlds__goal_store__wrapper_arg_1), ((MR_Word) transform_hlds__goal_store__wrapper_arg_2), ((MR_Word) transform_hlds__goal_store__wrapper_arg_3));
    }
#line 497 "transform_hlds.goal_store.c"
    return transform_hlds__goal_store__succeeded;
#line 499 "transform_hlds.goal_store.c"
  }
#line 501 "transform_hlds.goal_store.c"
}

#line 504 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0_10001(
#line 507 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 509 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_2,
#line 511 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3,
#line 513 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_4)
#line 515 "transform_hlds.goal_store.c"
{
#line 517 "transform_hlds.goal_store.c"
  {
#line 519 "transform_hlds.goal_store.c"
    MR_Word transform_hlds__goal_store__conv0_HeadVar__1_1;

#line 522 "transform_hlds.goal_store.c"
    {
#line 524 "transform_hlds.goal_store.c"
      transform_hlds__goal_store____Compare____goal_store_1_0(((MR_Word) transform_hlds__goal_store__wrapper_arg_1), &transform_hlds__goal_store__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__goal_store__wrapper_arg_3), ((MR_Word) transform_hlds__goal_store__wrapper_arg_4));
    }
#line 527 "transform_hlds.goal_store.c"
    *transform_hlds__goal_store__wrapper_arg_2 = ((MR_Box) (transform_hlds__goal_store__conv0_HeadVar__1_1));
#line 529 "transform_hlds.goal_store.c"
  }
#line 531 "transform_hlds.goal_store.c"
}

#line 534 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0_10001(
#line 537 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 539 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2)
#line 541 "transform_hlds.goal_store.c"
{
#line 543 "transform_hlds.goal_store.c"
  {
#line 545 "transform_hlds.goal_store.c"
    MR_bool transform_hlds__goal_store__succeeded;

#line 548 "transform_hlds.goal_store.c"
    {
#line 550 "transform_hlds.goal_store.c"
      transform_hlds__goal_store__succeeded = transform_hlds__goal_store____Unify____stored_goal_0_0(((MR_Word) transform_hlds__goal_store__wrapper_arg_1), ((MR_Word) transform_hlds__goal_store__wrapper_arg_2));
    }
#line 553 "transform_hlds.goal_store.c"
    return transform_hlds__goal_store__succeeded;
#line 555 "transform_hlds.goal_store.c"
  }
#line 557 "transform_hlds.goal_store.c"
}

#line 560 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0_10001(
#line 563 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 565 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 567 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3)
#line 569 "transform_hlds.goal_store.c"
{
#line 571 "transform_hlds.goal_store.c"
  {
#line 573 "transform_hlds.goal_store.c"
    MR_Word transform_hlds__goal_store__conv0_HeadVar__1_1;

#line 576 "transform_hlds.goal_store.c"
    {
#line 578 "transform_hlds.goal_store.c"
      transform_hlds__goal_store____Compare____stored_goal_0_0(&transform_hlds__goal_store__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__goal_store__wrapper_arg_2), ((MR_Word) transform_hlds__goal_store__wrapper_arg_3));
    }
#line 581 "transform_hlds.goal_store.c"
    *transform_hlds__goal_store__wrapper_arg_1 = ((MR_Box) (transform_hlds__goal_store__conv0_HeadVar__1_1));
#line 583 "transform_hlds.goal_store.c"
  }
#line 585 "transform_hlds.goal_store.c"
}

#line 32 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0(
#line 32 "goal_store.m"
  MR_Word * transform_hlds__goal_store__HeadVar__1_1,
#line 32 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 32 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3)
#line 32 "goal_store.m"
{
#line 32 "goal_store.m"
  {
#line 32 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 32 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastX_9 = (MR_Integer) transform_hlds__goal_store__HeadVar__2_2;
#line 32 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastY_10 = (MR_Integer) transform_hlds__goal_store__HeadVar__3_3;

#line 32 "goal_store.m"
    transform_hlds__goal_store__succeeded = (transform_hlds__goal_store__CastX_9 == transform_hlds__goal_store__CastY_10);
#line 32 "goal_store.m"
    if (transform_hlds__goal_store__succeeded)
#line 612 "transform_hlds.goal_store.c"
      *transform_hlds__goal_store__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "goal_store.m"
    else
#line 32 "goal_store.m"
      {
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_8_8;

#line 32 "goal_store.m"
        {
#line 32 "goal_store.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__goal_store__V_8_8, transform_hlds__goal_store__V_4_4, transform_hlds__goal_store__V_6_6);
        }
#line 634 "transform_hlds.goal_store.c"
        transform_hlds__goal_store__succeeded = (transform_hlds__goal_store__V_8_8 == (MR_Integer) 0);
#line 32 "goal_store.m"
        transform_hlds__goal_store__succeeded = !(transform_hlds__goal_store__succeeded);
#line 32 "goal_store.m"
        if (transform_hlds__goal_store__succeeded)
#line 32 "goal_store.m"
          *transform_hlds__goal_store__HeadVar__1_1 = transform_hlds__goal_store__V_8_8;
#line 32 "goal_store.m"
        else
#line 32 "goal_store.m"
          {
#line 32 "goal_store.m"
            hlds__instmap____Compare____instmap_0_0(transform_hlds__goal_store__HeadVar__1_1, transform_hlds__goal_store__V_5_5, transform_hlds__goal_store__V_7_7);
          }
#line 32 "goal_store.m"
      }
#line 32 "goal_store.m"
  }
#line 32 "goal_store.m"
}

#line 32 "goal_store.m"
MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0(
#line 32 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 32 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2)
#line 32 "goal_store.m"
{
#line 32 "goal_store.m"
  {
#line 32 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 32 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastX_7 = (MR_Integer) transform_hlds__goal_store__HeadVar__1_1;
#line 32 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastY_8 = (MR_Integer) transform_hlds__goal_store__HeadVar__2_2;

#line 32 "goal_store.m"
    transform_hlds__goal_store__succeeded = (transform_hlds__goal_store__CastX_7 == transform_hlds__goal_store__CastY_8);
#line 32 "goal_store.m"
    if (transform_hlds__goal_store__succeeded)
#line 32 "goal_store.m"
      transform_hlds__goal_store__succeeded = MR_TRUE;
#line 32 "goal_store.m"
    else
#line 32 "goal_store.m"
      {
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 1)));

#line 693 "transform_hlds.goal_store.c"
        {
#line 695 "transform_hlds.goal_store.c"
          transform_hlds__goal_store__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__goal_store__V_3_3, transform_hlds__goal_store__V_5_5);
        }
#line 32 "goal_store.m"
        if (transform_hlds__goal_store__succeeded)
#line 700 "transform_hlds.goal_store.c"
          {
#line 702 "transform_hlds.goal_store.c"
            transform_hlds__goal_store__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__goal_store__V_4_4, transform_hlds__goal_store__V_6_6);
          }
#line 32 "goal_store.m"
      }
#line 32 "goal_store.m"
    return transform_hlds__goal_store__succeeded;
#line 32 "goal_store.m"
  }
#line 32 "goal_store.m"
}

#line 64 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0(
#line 64 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_6,
#line 64 "goal_store.m"
  MR_Word * transform_hlds__goal_store__HeadVar__1_1,
#line 64 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 64 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3)
#line 64 "goal_store.m"
{
#line 64 "goal_store.m"
  {
#line 64 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 64 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar1_4 = transform_hlds__goal_store__HeadVar__2_2;
#line 64 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar2_5 = transform_hlds__goal_store__HeadVar__3_3;

#line 64 "goal_store.m"
    {
#line 64 "goal_store.m"
      mercury__tree234____Compare____tree234_2_0(transform_hlds__goal_store__TypeInfo_for_T_6, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__HeadVar__1_1, transform_hlds__goal_store__Cast_HeadVar1_4, transform_hlds__goal_store__Cast_HeadVar2_5);
    }
#line 64 "goal_store.m"
  }
#line 64 "goal_store.m"
}

#line 64 "goal_store.m"
MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0(
#line 64 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_5,
#line 64 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 64 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2)
#line 64 "goal_store.m"
{
#line 64 "goal_store.m"
  {
#line 64 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 64 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar1_3 = transform_hlds__goal_store__HeadVar__1_1;
#line 64 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar2_4 = transform_hlds__goal_store__HeadVar__2_2;

#line 64 "goal_store.m"
    {
#line 64 "goal_store.m"
      transform_hlds__goal_store__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__goal_store__TypeInfo_for_T_5, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__Cast_HeadVar1_3, transform_hlds__goal_store__Cast_HeadVar2_4);
    }
#line 64 "goal_store.m"
    return transform_hlds__goal_store__succeeded;
#line 64 "goal_store.m"
  }
#line 64 "goal_store.m"
}

#line 81 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_2(
#line 81 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg)
#line 81 "goal_store.m"
{
#line 81 "goal_store.m"
  {
#line 81 "goal_store.m"
    struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s * transform_hlds__goal_store__env_ptr = (struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s *) transform_hlds__goal_store__env_ptr_arg;

#line 81 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18 = ((MR_Word) (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_V_18_18);
#line 81 "goal_store.m"
    {
#line 81 "goal_store.m"
      transform_hlds__goal_store__direct_ancestor_6_p_0_1(transform_hlds__goal_store__env_ptr);
    }
#line 81 "goal_store.m"
  }
#line 81 "goal_store.m"
}

#line 119 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_1(
#line 119 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg)
#line 119 "goal_store.m"
{
#line 119 "goal_store.m"
  {
#line 119 "goal_store.m"
    struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s * transform_hlds__goal_store__env_ptr = (struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s *) transform_hlds__goal_store__env_ptr_arg;

#line 123 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18, (MR_Integer) 0)));
#line 123 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18, (MR_Integer) 1)));
#line 124 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_19_19 = (MR_Integer) 1;
#line 124 "goal_store.m"
    {
#line 124 "goal_store.m"
      mercury__builtin__compare_3_p_0((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, &(transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_21_21, *((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12), (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8);
    }
#line 124 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_19_19 == (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_21_21);
#line 119 "goal_store.m"
    if ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded)
#line 119 "goal_store.m"
      {
#line 125 "goal_store.m"
        {
#line 125 "goal_store.m"
          (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_10, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTypes_9, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_11, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13);
        }
#line 125 "goal_store.m"
        (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = !((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded);
#line 125 "goal_store.m"
        if ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded)
#line 125 "goal_store.m"
          {
#line 125 "goal_store.m"
            ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont)((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr);
          }
#line 119 "goal_store.m"
      }
#line 119 "goal_store.m"
  }
#line 119 "goal_store.m"
}

#line 115 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0(
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_20,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_7,
#line 115 "goal_store.m"
  MR_Box transform_hlds__goal_store__StartId_8,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__VarTypes_9,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__ModuleInfo_10,
#line 115 "goal_store.m"
  MR_Word transform_hlds__goal_store__FullyStrict_11,
#line 115 "goal_store.m"
  MR_Box * transform_hlds__goal_store__EarlierId_12,
#line 115 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 115 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr)
#line 115 "goal_store.m"
{
#line 115 "goal_store.m"
  {
#line 115 "goal_store.m"
    struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s transform_hlds__goal_store__env;

#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20 = transform_hlds__goal_store__TypeInfo_for_T_20;
#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8 = transform_hlds__goal_store__StartId_8;
#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTypes_9 = transform_hlds__goal_store__VarTypes_9;
#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_10 = transform_hlds__goal_store__ModuleInfo_10;
#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_11 = transform_hlds__goal_store__FullyStrict_11;
#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12 = transform_hlds__goal_store__EarlierId_12;
#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont = transform_hlds__goal_store__cont;
#line 115 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr = transform_hlds__goal_store__cont_env_ptr;
#line 119 "goal_store.m"
    {
#line 119 "goal_store.m"
      MR_Word transform_hlds__goal_store__V_17_17;
#line 78 "goal_store.m"
      MR_Box transform_hlds__goal_store__conv0_V_17_17;

#line 78 "goal_store.m"
      {
#line 78 "goal_store.m"
        mercury__map__lookup_3_p_0((transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GoalStore_7, (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8, &transform_hlds__goal_store__conv0_V_17_17);
      }
#line 78 "goal_store.m"
      transform_hlds__goal_store__V_17_17 = ((MR_Word) transform_hlds__goal_store__conv0_V_17_17);
#line 121 "goal_store.m"
      (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_17_17, (MR_Integer) 0)));
#line 121 "goal_store.m"
      (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_17_17, (MR_Integer) 1)));
#line 81 "goal_store.m"
      {
#line 81 "goal_store.m"
        mercury__map__member_3_p_0((transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GoalStore_7, (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12, &(transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_V_18_18, transform_hlds__goal_store__direct_ancestor_6_p_0_2, &transform_hlds__goal_store__env);
      }
#line 119 "goal_store.m"
    }
#line 115 "goal_store.m"
  }
#line 115 "goal_store.m"
}

#line 112 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0_1(
#line 112 "goal_store.m"
  MR_Box transform_hlds__goal_store__closure_arg,
#line 112 "goal_store.m"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 112 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 112 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr)
#line 112 "goal_store.m"
{
#line 112 "goal_store.m"
  {
#line 112 "goal_store.m"
    MR_Box transform_hlds__goal_store__closure = transform_hlds__goal_store__closure_arg;

#line 112 "goal_store.m"
    {
#line 112 "goal_store.m"
      transform_hlds__goal_store__direct_ancestor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 5)), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 8))), transform_hlds__goal_store__wrapper_arg_1, transform_hlds__goal_store__cont, transform_hlds__goal_store__cont_env_ptr);
    }
#line 112 "goal_store.m"
  }
#line 112 "goal_store.m"
}

#line 88 "goal_store.m"
static MR_Word MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0(
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_26,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__4_4,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__5_5,
#line 88 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__6_6)
#line 88 "goal_store.m"
{
#line 92 "goal_store.m"
  while (MR_TRUE)
#line 92 "goal_store.m"
    {
#line 92 "goal_store.m"
      /* tailcall optimized into a loop */
#line 92 "goal_store.m"
      {
#line 92 "goal_store.m"
        MR_bool transform_hlds__goal_store__succeeded;
#line 92 "goal_store.m"
        MR_Word transform_hlds__goal_store__HeadVar__7_7;

#line 92 "goal_store.m"
        if ((transform_hlds__goal_store__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 92 "goal_store.m"
          {
#line 92 "goal_store.m"
            transform_hlds__goal_store__HeadVar__7_7 = mercury__set__init_0_f_0(transform_hlds__goal_store__TypeInfo_for_T_26);
          }
#line 92 "goal_store.m"
        else
#line 94 "goal_store.m"
          {
#line 94 "goal_store.m"
            MR_Box transform_hlds__goal_store__Id_14 = (MR_hl_field(MR_mktag(1), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 0));
#line 94 "goal_store.m"
            MR_Word transform_hlds__goal_store__Ids_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 1)));

#line 95 "goal_store.m"
            {
#line 95 "goal_store.m"
              transform_hlds__goal_store__succeeded = mercury__set__member_2_p_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__Id_14, transform_hlds__goal_store__HeadVar__3_3);
            }
#line 95 "goal_store.m"
            if (transform_hlds__goal_store__succeeded)
#line 96 "goal_store.m"
              {
#line 96 "goal_store.m"
                /* direct tailcall eliminated */
#line 96 "goal_store.m"
                {
#line 96 "goal_store.m"
                  MR_Word transform_hlds__goal_store__HeadVar__2__tmp_copy_2 = transform_hlds__goal_store__Ids_15;

#line 96 "goal_store.m"
                  transform_hlds__goal_store__HeadVar__2_2 = transform_hlds__goal_store__HeadVar__2__tmp_copy_2;
#line 96 "goal_store.m"
                }
#line 96 "goal_store.m"
                continue;
#line 96 "goal_store.m"
              }
#line 95 "goal_store.m"
            else
#line 100 "goal_store.m"
              {
#line 100 "goal_store.m"
                MR_Word transform_hlds__goal_store__Ancestors_21;
#line 100 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_22_22;
#line 100 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_23_23;
#line 100 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_24_24;
#line 100 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_25_25;
#line 100 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_33_33;

#line 112 "goal_store.m"
                {
#line 112 "goal_store.m"
                  transform_hlds__goal_store__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 0) = ((MR_Box) (&transform_hlds__goal_store_scalar_common_2[0]));
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 1) = ((MR_Box) (transform_hlds__goal_store__ancestors_2_6_f_0_1));
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 3) = ((MR_Box) (transform_hlds__goal_store__TypeInfo_for_T_26));
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 4) = ((MR_Box) (transform_hlds__goal_store__HeadVar__1_1));
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 5) = transform_hlds__goal_store__Id_14;
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 6) = ((MR_Box) (transform_hlds__goal_store__HeadVar__4_4));
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 7) = ((MR_Box) (transform_hlds__goal_store__HeadVar__5_5));
#line 112 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 8) = ((MR_Box) (transform_hlds__goal_store__HeadVar__6_6));
#line 112 "goal_store.m"
                }
#line 111 "goal_store.m"
                {
#line 111 "goal_store.m"
                  mercury__solutions__solutions_2_p_1(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__V_33_33, &transform_hlds__goal_store__Ancestors_21);
                }
#line 101 "goal_store.m"
                {
#line 101 "goal_store.m"
                  transform_hlds__goal_store__V_22_22 = mercury__set__list_to_set_1_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__Ancestors_21);
                }
#line 102 "goal_store.m"
                {
#line 102 "goal_store.m"
                  transform_hlds__goal_store__V_24_24 = mercury__list__append_2_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__Ancestors_21, transform_hlds__goal_store__Ids_15);
                }
#line 103 "goal_store.m"
                {
#line 103 "goal_store.m"
                  transform_hlds__goal_store__V_25_25 = mercury__set__insert_2_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__HeadVar__3_3, transform_hlds__goal_store__Id_14);
                }
#line 102 "goal_store.m"
                {
#line 102 "goal_store.m"
                  transform_hlds__goal_store__V_23_23 = transform_hlds__goal_store__ancestors_2_6_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__HeadVar__1_1, transform_hlds__goal_store__V_24_24, transform_hlds__goal_store__V_25_25, transform_hlds__goal_store__HeadVar__4_4, transform_hlds__goal_store__HeadVar__5_5, transform_hlds__goal_store__HeadVar__6_6);
                }
#line 101 "goal_store.m"
                {
#line 101 "goal_store.m"
                  transform_hlds__goal_store__HeadVar__7_7 = mercury__set__union_2_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__V_22_22, transform_hlds__goal_store__V_23_23);
                }
#line 100 "goal_store.m"
              }
#line 94 "goal_store.m"
          }
#line 92 "goal_store.m"
        return transform_hlds__goal_store__HeadVar__7_7;
#line 92 "goal_store.m"
      }
#line 92 "goal_store.m"
      break;
#line 92 "goal_store.m"
    }
#line 88 "goal_store.m"
}

#line 48 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_all_ancestors_6_p_0(
#line 48 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_16,
#line 48 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_7,
#line 48 "goal_store.m"
  MR_Box transform_hlds__goal_store__StartId_8,
#line 48 "goal_store.m"
  MR_Word transform_hlds__goal_store__VarTypes_9,
#line 48 "goal_store.m"
  MR_Word transform_hlds__goal_store__ModuleInfo_10,
#line 48 "goal_store.m"
  MR_Word transform_hlds__goal_store__FullyStrict_11,
#line 48 "goal_store.m"
  MR_Word * transform_hlds__goal_store__AncestorIds_12)
#line 48 "goal_store.m"
{
#line 84 "goal_store.m"
  {
#line 84 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 84 "goal_store.m"
    MR_Word transform_hlds__goal_store__V_13_13;
#line 84 "goal_store.m"
    MR_Word transform_hlds__goal_store__V_15_15;

#line 85 "goal_store.m"
    {
#line 85 "goal_store.m"
      transform_hlds__goal_store__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 85 "goal_store.m"
      MR_hl_field(MR_mktag(1), transform_hlds__goal_store__V_13_13, 0) = transform_hlds__goal_store__StartId_8;
#line 85 "goal_store.m"
      MR_hl_field(MR_mktag(1), transform_hlds__goal_store__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 85 "goal_store.m"
    }
#line 85 "goal_store.m"
    {
#line 85 "goal_store.m"
      transform_hlds__goal_store__V_15_15 = mercury__set__init_0_f_0(transform_hlds__goal_store__TypeInfo_for_T_16);
    }
#line 85 "goal_store.m"
    {
#line 85 "goal_store.m"
      *transform_hlds__goal_store__AncestorIds_12 = transform_hlds__goal_store__ancestors_2_6_f_0(transform_hlds__goal_store__TypeInfo_for_T_16, transform_hlds__goal_store__GoalStore_7, transform_hlds__goal_store__V_13_13, transform_hlds__goal_store__V_15_15, transform_hlds__goal_store__VarTypes_9, transform_hlds__goal_store__ModuleInfo_10, transform_hlds__goal_store__FullyStrict_11);
    }
#line 84 "goal_store.m"
  }
#line 48 "goal_store.m"
}

#line 81 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0_1(
#line 81 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg)
#line 81 "goal_store.m"
{
#line 81 "goal_store.m"
  {
#line 81 "goal_store.m"
    struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s * transform_hlds__goal_store__env_ptr = (struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s *) transform_hlds__goal_store__env_ptr_arg;

#line 81 "goal_store.m"
    *((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6) = ((MR_Word) (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6);
#line 81 "goal_store.m"
    {
#line 81 "goal_store.m"
      ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont)((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr);
    }
#line 81 "goal_store.m"
  }
#line 81 "goal_store.m"
}

#line 45 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0(
#line 45 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_7,
#line 45 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_4,
#line 45 "goal_store.m"
  MR_Box * transform_hlds__goal_store__Key_5,
#line 45 "goal_store.m"
  MR_Word * transform_hlds__goal_store__Goal_6,
#line 45 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 45 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr)
#line 45 "goal_store.m"
{
#line 45 "goal_store.m"
  {
#line 45 "goal_store.m"
    struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s transform_hlds__goal_store__env;

#line 45 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6 = transform_hlds__goal_store__Goal_6;
#line 45 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont = transform_hlds__goal_store__cont;
#line 45 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr = transform_hlds__goal_store__cont_env_ptr;
#line 81 "goal_store.m"
    {
#line 81 "goal_store.m"
      MR_bool transform_hlds__goal_store__succeeded;

#line 81 "goal_store.m"
      {
#line 81 "goal_store.m"
        mercury__map__member_3_p_0(transform_hlds__goal_store__TypeInfo_for_T_7, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GoalStore_4, transform_hlds__goal_store__Key_5, &(transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6, transform_hlds__goal_store__goal_store_member_3_p_0_1, &transform_hlds__goal_store__env);
      }
#line 81 "goal_store.m"
    }
#line 45 "goal_store.m"
  }
#line 45 "goal_store.m"
}

#line 43 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_lookup_3_p_0(
#line 43 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_7,
#line 43 "goal_store.m"
  MR_Word transform_hlds__goal_store__GS_4,
#line 43 "goal_store.m"
  MR_Box transform_hlds__goal_store__Id_5,
#line 43 "goal_store.m"
  MR_Word * transform_hlds__goal_store__Goal_6)
#line 43 "goal_store.m"
{
#line 78 "goal_store.m"
  {
#line 78 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 78 "goal_store.m"
    MR_Box transform_hlds__goal_store__conv0_Goal_6;

#line 78 "goal_store.m"
    {
#line 78 "goal_store.m"
      mercury__map__lookup_3_p_0(transform_hlds__goal_store__TypeInfo_for_T_7, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GS_4, transform_hlds__goal_store__Id_5, &transform_hlds__goal_store__conv0_Goal_6);
    }
#line 78 "goal_store.m"
    *transform_hlds__goal_store__Goal_6 = ((MR_Word) transform_hlds__goal_store__conv0_Goal_6);
#line 78 "goal_store.m"
  }
#line 43 "goal_store.m"
}

#line 40 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_det_insert_4_p_0(
#line 40 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_11,
#line 40 "goal_store.m"
  MR_Box transform_hlds__goal_store__Id_5,
#line 40 "goal_store.m"
  MR_Word transform_hlds__goal_store__Goal_6,
#line 40 "goal_store.m"
  MR_Word transform_hlds__goal_store__STATE_VARIABLE_GS_0_8,
#line 40 "goal_store.m"
  MR_Word * transform_hlds__goal_store__STATE_VARIABLE_GS_9)
#line 40 "goal_store.m"
{
#line 75 "goal_store.m"
  {
#line 75 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;

#line 75 "goal_store.m"
    {
#line 75 "goal_store.m"
      mercury__map__det_insert_4_p_0(transform_hlds__goal_store__TypeInfo_for_T_11, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__Id_5, ((MR_Box) (transform_hlds__goal_store__Goal_6)), transform_hlds__goal_store__STATE_VARIABLE_GS_0_8, transform_hlds__goal_store__STATE_VARIABLE_GS_9);
    }
#line 75 "goal_store.m"
  }
#line 40 "goal_store.m"
}

#line 38 "goal_store.m"
MR_Word MR_CALL 
transform_hlds__goal_store__goal_store_init_0_f_0(
#line 38 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_3)
#line 38 "goal_store.m"
{
#line 69 "goal_store.m"
  {
#line 69 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 69 "goal_store.m"
    MR_Word transform_hlds__goal_store__GS_2;

#line 69 "goal_store.m"
    {
#line 69 "goal_store.m"
      mercury__map__init_1_p_0(transform_hlds__goal_store__TypeInfo_for_T_3, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, &transform_hlds__goal_store__GS_2);
    }
#line 69 "goal_store.m"
    return transform_hlds__goal_store__GS_2;
#line 69 "goal_store.m"
  }
#line 38 "goal_store.m"
}

#line 37 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_init_1_p_0(
#line 37 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_3,
#line 37 "goal_store.m"
  MR_Word * transform_hlds__goal_store__GS_2)
#line 37 "goal_store.m"
{
#line 69 "goal_store.m"
  {
#line 69 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;

#line 69 "goal_store.m"
    {
#line 69 "goal_store.m"
      mercury__map__init_1_p_0(transform_hlds__goal_store__TypeInfo_for_T_3, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GS_2);
    }
#line 69 "goal_store.m"
  }
#line 37 "goal_store.m"
}

void mercury__transform_hlds__goal_store__init(void)
{
}

void mercury__transform_hlds__goal_store__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_goal_store_1);
	MR_register_type_ctor_info(&transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0);
}

void mercury__transform_hlds__goal_store__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.goal_store. */
