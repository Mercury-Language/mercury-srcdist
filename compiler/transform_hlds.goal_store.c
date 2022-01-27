/*
** Automatically generated from `goal_store.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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
#include "solutions.mih"
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



#line 114 "goal_store.m"
struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s {
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20;
#line 114 "goal_store.m"
  MR_Box transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8;
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTypes_9;
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_10;
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_11;
#line 114 "goal_store.m"
  MR_Box * transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12;
#line 114 "goal_store.m"
  MR_Cont transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont;
#line 114 "goal_store.m"
  void * transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr;
#line 118 "goal_store.m"
  MR_bool transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded;
#line 118 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13;
#line 118 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14;
#line 118 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15;
#line 118 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16;
#line 118 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18;
#line 118 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_19_19;
#line 118 "goal_store.m"
  MR_Word transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_21_21;
#line 80 "goal_store.m"
  MR_Box transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_V_18_18;
#line 114 "goal_store.m"
};

#line 44 "goal_store.m"
struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s {
#line 44 "goal_store.m"
  MR_Word * transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6;
#line 44 "goal_store.m"
  MR_Cont transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont;
#line 44 "goal_store.m"
  void * transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr;
#line 80 "goal_store.m"
  MR_Box transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6;
#line 44 "goal_store.m"
};


#line 183 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0;

#line 186 "transform_hlds.goal_store.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__goal_store__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 192 "transform_hlds.goal_store.c"
static const MR_PseudoTypeInfo transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0[2];

#line 195 "transform_hlds.goal_store.c"
static const MR_DuFunctorDesc transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0;

#line 198 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0[1];

#line 201 "transform_hlds.goal_store.c"
static const MR_DuPtagLayout transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0[1];

#line 204 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0[1];

#line 207 "transform_hlds.goal_store.c"
static const MR_Integer transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0[1];

#line 210 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0_10001(
#line 213 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 215 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 217 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3);

#line 220 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0_10001(
#line 223 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 225 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_2,
#line 227 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3,
#line 229 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_4);

#line 232 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0_10001(
#line 235 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 237 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2);

#line 240 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0_10001(
#line 243 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 245 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 247 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3);

#line 80 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_2(
#line 80 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg);

#line 118 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_1(
#line 118 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg);

#line 114 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0(
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_20,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_7,
#line 114 "goal_store.m"
  MR_Box transform_hlds__goal_store__StartId_8,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__VarTypes_9,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__ModuleInfo_10,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__FullyStrict_11,
#line 114 "goal_store.m"
  MR_Box * transform_hlds__goal_store__EarlierId_12,
#line 114 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 114 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr);

#line 110 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0_1(
#line 110 "goal_store.m"
  MR_Box transform_hlds__goal_store__closure_arg,
#line 110 "goal_store.m"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 110 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 110 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr);

#line 87 "goal_store.m"
static MR_Word MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0(
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_26,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__4_4,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__5_5,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__6_6);

#line 80 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0_1(
#line 80 "goal_store.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 369 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0
  }
};

#line 378 "transform_hlds.goal_store.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__goal_store__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 386 "transform_hlds.goal_store.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__goal_store__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__goal_store__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 395 "transform_hlds.goal_store.c"
const MR_TypeCtorInfo_Struct transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_goal_store_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (transform_hlds__goal_store____Unify____goal_store_1_0_10001)),
  ((MR_Box) (transform_hlds__goal_store____Compare____goal_store_1_0_10001)),
  (MR_String) "transform_hlds.goal_store",
  (MR_String) "goal_store",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__goal_store__tree234__pti_tree234_2__pseudo_1__plain_transform_hlds__goal_store__type_ctor_info_stored_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 416 "transform_hlds.goal_store.c"
static const MR_PseudoTypeInfo transform_hlds__goal_store__transform_hlds__goal_store__field_types_stored_goal_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 422 "transform_hlds.goal_store.c"
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

#line 437 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0[1] = {
  &transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0
};

#line 442 "transform_hlds.goal_store.c"
static const MR_DuPtagLayout transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__goal_store__transform_hlds__goal_store__du_stag_ordered_stored_goal_0_0
  }
};

#line 451 "transform_hlds.goal_store.c"
static const MR_DuFunctorDescPtr transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0[1] = {
  &transform_hlds__goal_store__transform_hlds__goal_store__du_functor_desc_stored_goal_0_0
};

#line 456 "transform_hlds.goal_store.c"
static const MR_Integer transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0[1] = {
  (MR_Integer) 0
};

#line 461 "transform_hlds.goal_store.c"
const MR_TypeCtorInfo_Struct transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__goal_store____Unify____stored_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__goal_store____Compare____stored_goal_0_0_10001)),
  (MR_String) "transform_hlds.goal_store",
  (MR_String) "stored_goal",
  {
    transform_hlds__goal_store__transform_hlds__goal_store__du_name_ordered_stored_goal_0
  },
  {
    transform_hlds__goal_store__transform_hlds__goal_store__du_ptag_ordered_stored_goal_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__goal_store__transform_hlds__goal_store__functor_number_map_stored_goal_0
};

#line 482 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0_10001(
#line 485 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 487 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 489 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3)
#line 491 "transform_hlds.goal_store.c"
{
#line 493 "transform_hlds.goal_store.c"
  {
#line 495 "transform_hlds.goal_store.c"
    MR_bool transform_hlds__goal_store__succeeded;

#line 498 "transform_hlds.goal_store.c"
    {
#line 500 "transform_hlds.goal_store.c"
      transform_hlds__goal_store__succeeded = transform_hlds__goal_store____Unify____goal_store_1_0(((MR_Word) transform_hlds__goal_store__wrapper_arg_1), ((MR_Word) transform_hlds__goal_store__wrapper_arg_2), ((MR_Word) transform_hlds__goal_store__wrapper_arg_3));
    }
#line 503 "transform_hlds.goal_store.c"
    return transform_hlds__goal_store__succeeded;
#line 505 "transform_hlds.goal_store.c"
  }
#line 507 "transform_hlds.goal_store.c"
}

#line 510 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0_10001(
#line 513 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 515 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_2,
#line 517 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3,
#line 519 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_4)
#line 521 "transform_hlds.goal_store.c"
{
#line 523 "transform_hlds.goal_store.c"
  {
#line 525 "transform_hlds.goal_store.c"
    MR_Word transform_hlds__goal_store__conv0_HeadVar__1_1;

#line 528 "transform_hlds.goal_store.c"
    {
#line 530 "transform_hlds.goal_store.c"
      transform_hlds__goal_store____Compare____goal_store_1_0(((MR_Word) transform_hlds__goal_store__wrapper_arg_1), &transform_hlds__goal_store__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__goal_store__wrapper_arg_3), ((MR_Word) transform_hlds__goal_store__wrapper_arg_4));
    }
#line 533 "transform_hlds.goal_store.c"
    *transform_hlds__goal_store__wrapper_arg_2 = ((MR_Box) (transform_hlds__goal_store__conv0_HeadVar__1_1));
#line 535 "transform_hlds.goal_store.c"
  }
#line 537 "transform_hlds.goal_store.c"
}

#line 540 "transform_hlds.goal_store.c"
static MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0_10001(
#line 543 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_1,
#line 545 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2)
#line 547 "transform_hlds.goal_store.c"
{
#line 549 "transform_hlds.goal_store.c"
  {
#line 551 "transform_hlds.goal_store.c"
    MR_bool transform_hlds__goal_store__succeeded;

#line 554 "transform_hlds.goal_store.c"
    {
#line 556 "transform_hlds.goal_store.c"
      transform_hlds__goal_store__succeeded = transform_hlds__goal_store____Unify____stored_goal_0_0(((MR_Word) transform_hlds__goal_store__wrapper_arg_1), ((MR_Word) transform_hlds__goal_store__wrapper_arg_2));
    }
#line 559 "transform_hlds.goal_store.c"
    return transform_hlds__goal_store__succeeded;
#line 561 "transform_hlds.goal_store.c"
  }
#line 563 "transform_hlds.goal_store.c"
}

#line 566 "transform_hlds.goal_store.c"
static void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0_10001(
#line 569 "transform_hlds.goal_store.c"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 571 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_2,
#line 573 "transform_hlds.goal_store.c"
  MR_Box transform_hlds__goal_store__wrapper_arg_3)
#line 575 "transform_hlds.goal_store.c"
{
#line 577 "transform_hlds.goal_store.c"
  {
#line 579 "transform_hlds.goal_store.c"
    MR_Word transform_hlds__goal_store__conv0_HeadVar__1_1;

#line 582 "transform_hlds.goal_store.c"
    {
#line 584 "transform_hlds.goal_store.c"
      transform_hlds__goal_store____Compare____stored_goal_0_0(&transform_hlds__goal_store__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__goal_store__wrapper_arg_2), ((MR_Word) transform_hlds__goal_store__wrapper_arg_3));
    }
#line 587 "transform_hlds.goal_store.c"
    *transform_hlds__goal_store__wrapper_arg_1 = ((MR_Box) (transform_hlds__goal_store__conv0_HeadVar__1_1));
#line 589 "transform_hlds.goal_store.c"
  }
#line 591 "transform_hlds.goal_store.c"
}

#line 31 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store____Compare____stored_goal_0_0(
#line 31 "goal_store.m"
  MR_Word * transform_hlds__goal_store__HeadVar__1_1,
#line 31 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 31 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3)
#line 31 "goal_store.m"
{
#line 31 "goal_store.m"
  {
#line 31 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 31 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastX_9 = (MR_Integer) transform_hlds__goal_store__HeadVar__2_2;
#line 31 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastY_10 = (MR_Integer) transform_hlds__goal_store__HeadVar__3_3;

#line 31 "goal_store.m"
    transform_hlds__goal_store__succeeded = (transform_hlds__goal_store__CastX_9 == transform_hlds__goal_store__CastY_10);
#line 31 "goal_store.m"
    if (transform_hlds__goal_store__succeeded)
#line 618 "transform_hlds.goal_store.c"
      *transform_hlds__goal_store__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "goal_store.m"
    else
#line 31 "goal_store.m"
      {
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__3_3, (MR_Integer) 0)));
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__3_3, (MR_Integer) 1)));
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_8_8;

#line 31 "goal_store.m"
        {
#line 31 "goal_store.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__goal_store__V_8_8, transform_hlds__goal_store__V_4_4, transform_hlds__goal_store__V_6_6);
        }
#line 640 "transform_hlds.goal_store.c"
        transform_hlds__goal_store__succeeded = (transform_hlds__goal_store__V_8_8 == (MR_Integer) 0);
#line 31 "goal_store.m"
        transform_hlds__goal_store__succeeded = !(transform_hlds__goal_store__succeeded);
#line 31 "goal_store.m"
        if (transform_hlds__goal_store__succeeded)
#line 31 "goal_store.m"
          *transform_hlds__goal_store__HeadVar__1_1 = transform_hlds__goal_store__V_8_8;
#line 31 "goal_store.m"
        else
#line 31 "goal_store.m"
          {
#line 31 "goal_store.m"
            hlds__instmap____Compare____instmap_0_0(transform_hlds__goal_store__HeadVar__1_1, transform_hlds__goal_store__V_5_5, transform_hlds__goal_store__V_7_7);
#line 31 "goal_store.m"
            return;
          }
#line 31 "goal_store.m"
      }
#line 31 "goal_store.m"
  }
#line 31 "goal_store.m"
}

#line 31 "goal_store.m"
MR_bool MR_CALL 
transform_hlds__goal_store____Unify____stored_goal_0_0(
#line 31 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 31 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2)
#line 31 "goal_store.m"
{
#line 31 "goal_store.m"
  {
#line 31 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 31 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastX_7 = (MR_Integer) transform_hlds__goal_store__HeadVar__1_1;
#line 31 "goal_store.m"
    MR_Integer transform_hlds__goal_store__CastY_8 = (MR_Integer) transform_hlds__goal_store__HeadVar__2_2;

#line 31 "goal_store.m"
    transform_hlds__goal_store__succeeded = (transform_hlds__goal_store__CastX_7 == transform_hlds__goal_store__CastY_8);
#line 31 "goal_store.m"
    if (transform_hlds__goal_store__succeeded)
#line 31 "goal_store.m"
      transform_hlds__goal_store__succeeded = MR_TRUE;
#line 31 "goal_store.m"
    else
#line 31 "goal_store.m"
      {
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__1_1, (MR_Integer) 1)));
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "goal_store.m"
        MR_Word transform_hlds__goal_store__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 1)));

#line 701 "transform_hlds.goal_store.c"
        {
#line 703 "transform_hlds.goal_store.c"
          transform_hlds__goal_store__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__goal_store__V_3_3, transform_hlds__goal_store__V_5_5);
        }
#line 31 "goal_store.m"
        if (transform_hlds__goal_store__succeeded)
#line 708 "transform_hlds.goal_store.c"
          {
#line 710 "transform_hlds.goal_store.c"
            return transform_hlds__goal_store__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__goal_store__V_4_4, transform_hlds__goal_store__V_6_6);
          }
#line 31 "goal_store.m"
      }
#line 31 "goal_store.m"
    return transform_hlds__goal_store__succeeded;
#line 31 "goal_store.m"
  }
#line 31 "goal_store.m"
}

#line 63 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store____Compare____goal_store_1_0(
#line 63 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_6,
#line 63 "goal_store.m"
  MR_Word * transform_hlds__goal_store__HeadVar__1_1,
#line 63 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 63 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3)
#line 63 "goal_store.m"
{
#line 63 "goal_store.m"
  {
#line 63 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 63 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar1_4 = transform_hlds__goal_store__HeadVar__2_2;
#line 63 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar2_5 = transform_hlds__goal_store__HeadVar__3_3;

#line 63 "goal_store.m"
    {
#line 63 "goal_store.m"
      mercury__tree234____Compare____tree234_2_0(transform_hlds__goal_store__TypeInfo_for_T_6, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__HeadVar__1_1, transform_hlds__goal_store__Cast_HeadVar1_4, transform_hlds__goal_store__Cast_HeadVar2_5);
#line 63 "goal_store.m"
      return;
    }
#line 63 "goal_store.m"
  }
#line 63 "goal_store.m"
}

#line 63 "goal_store.m"
MR_bool MR_CALL 
transform_hlds__goal_store____Unify____goal_store_1_0(
#line 63 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_5,
#line 63 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 63 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2)
#line 63 "goal_store.m"
{
#line 63 "goal_store.m"
  {
#line 63 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 63 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar1_3 = transform_hlds__goal_store__HeadVar__1_1;
#line 63 "goal_store.m"
    MR_Word transform_hlds__goal_store__Cast_HeadVar2_4 = transform_hlds__goal_store__HeadVar__2_2;

#line 63 "goal_store.m"
    {
#line 63 "goal_store.m"
      return transform_hlds__goal_store__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__goal_store__TypeInfo_for_T_5, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__Cast_HeadVar1_3, transform_hlds__goal_store__Cast_HeadVar2_4);
    }
#line 63 "goal_store.m"
    return transform_hlds__goal_store__succeeded;
#line 63 "goal_store.m"
  }
#line 63 "goal_store.m"
}

#line 80 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_2(
#line 80 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg)
#line 80 "goal_store.m"
{
#line 80 "goal_store.m"
  {
#line 80 "goal_store.m"
    struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s * transform_hlds__goal_store__env_ptr = (struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s *) transform_hlds__goal_store__env_ptr_arg;

#line 80 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18 = ((MR_Word) (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_V_18_18);
#line 80 "goal_store.m"
    {
#line 80 "goal_store.m"
      transform_hlds__goal_store__direct_ancestor_6_p_0_1(transform_hlds__goal_store__env_ptr);
#line 80 "goal_store.m"
      return;
    }
#line 80 "goal_store.m"
  }
#line 80 "goal_store.m"
}

#line 118 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0_1(
#line 118 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg)
#line 118 "goal_store.m"
{
#line 118 "goal_store.m"
  {
#line 118 "goal_store.m"
    struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s * transform_hlds__goal_store__env_ptr = (struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s *) transform_hlds__goal_store__env_ptr_arg;

#line 121 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18, (MR_Integer) 0)));
#line 121 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_18_18, (MR_Integer) 1)));
#line 123 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_19_19 = (MR_Integer) 1;
#line 123 "goal_store.m"
    {
#line 123 "goal_store.m"
      mercury__builtin__compare_3_p_0((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, &(transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_21_21, *((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12), (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8);
    }
#line 123 "goal_store.m"
    (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_19_19 == (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__V_21_21);
#line 118 "goal_store.m"
    if ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded)
#line 118 "goal_store.m"
      {
#line 124 "goal_store.m"
        {
#line 124 "goal_store.m"
          (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = hlds__goal_util__can_reorder_goals_old_7_p_0((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_10, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTypes_9, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_11, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierInstMap_16, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierGoal_15, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14, (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13);
        }
#line 124 "goal_store.m"
        (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded = !((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded);
#line 124 "goal_store.m"
        if ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__succeeded)
#line 124 "goal_store.m"
          {
#line 124 "goal_store.m"
            ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont)((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr);
#line 124 "goal_store.m"
            return;
          }
#line 118 "goal_store.m"
      }
#line 118 "goal_store.m"
  }
#line 118 "goal_store.m"
}

#line 114 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__direct_ancestor_6_p_0(
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_20,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_7,
#line 114 "goal_store.m"
  MR_Box transform_hlds__goal_store__StartId_8,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__VarTypes_9,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__ModuleInfo_10,
#line 114 "goal_store.m"
  MR_Word transform_hlds__goal_store__FullyStrict_11,
#line 114 "goal_store.m"
  MR_Box * transform_hlds__goal_store__EarlierId_12,
#line 114 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 114 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr)
#line 114 "goal_store.m"
{
#line 114 "goal_store.m"
  {
#line 114 "goal_store.m"
    struct transform_hlds__goal_store__direct_ancestor_6_p_0_env_0_s transform_hlds__goal_store__env;

#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20 = transform_hlds__goal_store__TypeInfo_for_T_20;
#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8 = transform_hlds__goal_store__StartId_8;
#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__VarTypes_9 = transform_hlds__goal_store__VarTypes_9;
#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__ModuleInfo_10 = transform_hlds__goal_store__ModuleInfo_10;
#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__FullyStrict_11 = transform_hlds__goal_store__FullyStrict_11;
#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12 = transform_hlds__goal_store__EarlierId_12;
#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont = transform_hlds__goal_store__cont;
#line 114 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__cont_env_ptr = transform_hlds__goal_store__cont_env_ptr;
#line 118 "goal_store.m"
    {
#line 118 "goal_store.m"
      MR_Word transform_hlds__goal_store__V_17_17;
#line 77 "goal_store.m"
      MR_Box transform_hlds__goal_store__conv0_V_17_17;

#line 77 "goal_store.m"
      {
#line 77 "goal_store.m"
        mercury__map__lookup_3_p_0((transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GoalStore_7, (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__StartId_8, &transform_hlds__goal_store__conv0_V_17_17);
      }
#line 77 "goal_store.m"
      transform_hlds__goal_store__V_17_17 = ((MR_Word) transform_hlds__goal_store__conv0_V_17_17);
#line 119 "goal_store.m"
      (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_17_17, (MR_Integer) 0)));
#line 119 "goal_store.m"
      (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__LaterInstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_17_17, (MR_Integer) 1)));
#line 80 "goal_store.m"
      {
#line 80 "goal_store.m"
        mercury__map__member_3_p_0((transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__TypeInfo_for_T_20, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GoalStore_7, (transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__EarlierId_12, &(transform_hlds__goal_store__env).transform_hlds__goal_store__direct_ancestor_6_p_0_env_0__conv1_V_18_18, transform_hlds__goal_store__direct_ancestor_6_p_0_2, &transform_hlds__goal_store__env);
      }
#line 118 "goal_store.m"
    }
#line 114 "goal_store.m"
  }
#line 114 "goal_store.m"
}

#line 110 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0_1(
#line 110 "goal_store.m"
  MR_Box transform_hlds__goal_store__closure_arg,
#line 110 "goal_store.m"
  MR_Box * transform_hlds__goal_store__wrapper_arg_1,
#line 110 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 110 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr)
#line 110 "goal_store.m"
{
#line 110 "goal_store.m"
  {
#line 110 "goal_store.m"
    MR_Box transform_hlds__goal_store__closure = transform_hlds__goal_store__closure_arg;

#line 110 "goal_store.m"
    {
#line 110 "goal_store.m"
      transform_hlds__goal_store__direct_ancestor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 5)), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__goal_store__closure, (MR_Integer) 8))), transform_hlds__goal_store__wrapper_arg_1, transform_hlds__goal_store__cont, transform_hlds__goal_store__cont_env_ptr);
#line 110 "goal_store.m"
      return;
    }
#line 110 "goal_store.m"
  }
#line 110 "goal_store.m"
}

#line 87 "goal_store.m"
static MR_Word MR_CALL 
transform_hlds__goal_store__ancestors_2_6_f_0(
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_26,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__1_1,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__2_2,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__3_3,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__4_4,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__5_5,
#line 87 "goal_store.m"
  MR_Word transform_hlds__goal_store__HeadVar__6_6)
#line 87 "goal_store.m"
{
#line 91 "goal_store.m"
  while (MR_TRUE)
#line 91 "goal_store.m"
    {
#line 91 "goal_store.m"
      /* tailcall optimized into a loop */
#line 91 "goal_store.m"
      {
#line 91 "goal_store.m"
        MR_bool transform_hlds__goal_store__succeeded;
#line 91 "goal_store.m"
        MR_Word transform_hlds__goal_store__HeadVar__7_7;

#line 91 "goal_store.m"
        if ((transform_hlds__goal_store__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 91 "goal_store.m"
          {
#line 91 "goal_store.m"
            return transform_hlds__goal_store__HeadVar__7_7 = mercury__set__init_0_f_0(transform_hlds__goal_store__TypeInfo_for_T_26);
          }
#line 91 "goal_store.m"
        else
#line 93 "goal_store.m"
          {
#line 93 "goal_store.m"
            MR_Box transform_hlds__goal_store__Id_14 = (MR_hl_field(MR_mktag(1), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 0));
#line 93 "goal_store.m"
            MR_Word transform_hlds__goal_store__Ids_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__goal_store__HeadVar__2_2, (MR_Integer) 1)));

#line 94 "goal_store.m"
            {
#line 94 "goal_store.m"
              transform_hlds__goal_store__succeeded = mercury__set__member_2_p_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__Id_14, transform_hlds__goal_store__HeadVar__3_3);
            }
#line 97 "goal_store.m"
            if (transform_hlds__goal_store__succeeded)
#line 95 "goal_store.m"
              {
#line 95 "goal_store.m"
                /* direct tailcall eliminated */
#line 95 "goal_store.m"
                {
#line 95 "goal_store.m"
                  MR_Word transform_hlds__goal_store__HeadVar__2__tmp_copy_2 = transform_hlds__goal_store__Ids_15;

#line 95 "goal_store.m"
                  transform_hlds__goal_store__HeadVar__2_2 = transform_hlds__goal_store__HeadVar__2__tmp_copy_2;
#line 95 "goal_store.m"
                }
#line 95 "goal_store.m"
                continue;
#line 95 "goal_store.m"
              }
#line 97 "goal_store.m"
            else
#line 99 "goal_store.m"
              {
#line 99 "goal_store.m"
                MR_Word transform_hlds__goal_store__Ancestors_21;
#line 99 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_22_22;
#line 99 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_23_23;
#line 99 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_24_24;
#line 99 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_25_25;
#line 99 "goal_store.m"
                MR_Word transform_hlds__goal_store__V_33_33;

#line 110 "goal_store.m"
                {
#line 110 "goal_store.m"
                  transform_hlds__goal_store__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 0) = ((MR_Box) (&transform_hlds__goal_store_scalar_common_2[0]));
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 1) = ((MR_Box) (transform_hlds__goal_store__ancestors_2_6_f_0_1));
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 3) = ((MR_Box) (transform_hlds__goal_store__TypeInfo_for_T_26));
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 4) = ((MR_Box) (transform_hlds__goal_store__HeadVar__1_1));
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 5) = transform_hlds__goal_store__Id_14;
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 6) = ((MR_Box) (transform_hlds__goal_store__HeadVar__4_4));
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 7) = ((MR_Box) (transform_hlds__goal_store__HeadVar__5_5));
#line 110 "goal_store.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__goal_store__V_33_33, 8) = ((MR_Box) (transform_hlds__goal_store__HeadVar__6_6));
#line 110 "goal_store.m"
                }
#line 110 "goal_store.m"
                {
#line 110 "goal_store.m"
                  mercury__solutions__solutions_2_p_1(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__V_33_33, &transform_hlds__goal_store__Ancestors_21);
                }
#line 100 "goal_store.m"
                {
#line 100 "goal_store.m"
                  transform_hlds__goal_store__V_22_22 = mercury__set__list_to_set_1_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__Ancestors_21);
                }
#line 101 "goal_store.m"
                {
#line 101 "goal_store.m"
                  transform_hlds__goal_store__V_24_24 = mercury__list__append_2_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__Ancestors_21, transform_hlds__goal_store__Ids_15);
                }
#line 101 "goal_store.m"
                {
#line 101 "goal_store.m"
                  transform_hlds__goal_store__V_25_25 = mercury__set__insert_2_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__HeadVar__3_3, transform_hlds__goal_store__Id_14);
                }
#line 100 "goal_store.m"
                {
#line 100 "goal_store.m"
                  transform_hlds__goal_store__V_23_23 = transform_hlds__goal_store__ancestors_2_6_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__HeadVar__1_1, transform_hlds__goal_store__V_24_24, transform_hlds__goal_store__V_25_25, transform_hlds__goal_store__HeadVar__4_4, transform_hlds__goal_store__HeadVar__5_5, transform_hlds__goal_store__HeadVar__6_6);
                }
#line 100 "goal_store.m"
                {
#line 100 "goal_store.m"
                  return transform_hlds__goal_store__HeadVar__7_7 = mercury__set__union_2_f_0(transform_hlds__goal_store__TypeInfo_for_T_26, transform_hlds__goal_store__V_22_22, transform_hlds__goal_store__V_23_23);
                }
#line 99 "goal_store.m"
              }
#line 93 "goal_store.m"
          }
#line 91 "goal_store.m"
        return transform_hlds__goal_store__HeadVar__7_7;
#line 91 "goal_store.m"
      }
#line 91 "goal_store.m"
      break;
#line 91 "goal_store.m"
    }
#line 87 "goal_store.m"
}

#line 47 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_all_ancestors_6_p_0(
#line 47 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_16,
#line 47 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_7,
#line 47 "goal_store.m"
  MR_Box transform_hlds__goal_store__StartId_8,
#line 47 "goal_store.m"
  MR_Word transform_hlds__goal_store__VarTypes_9,
#line 47 "goal_store.m"
  MR_Word transform_hlds__goal_store__ModuleInfo_10,
#line 47 "goal_store.m"
  MR_Word transform_hlds__goal_store__FullyStrict_11,
#line 47 "goal_store.m"
  MR_Word * transform_hlds__goal_store__AncestorIds_12)
#line 47 "goal_store.m"
{
#line 83 "goal_store.m"
  {
#line 83 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 83 "goal_store.m"
    MR_Word transform_hlds__goal_store__V_13_13;
#line 83 "goal_store.m"
    MR_Word transform_hlds__goal_store__V_15_15;

#line 84 "goal_store.m"
    {
#line 84 "goal_store.m"
      transform_hlds__goal_store__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 84 "goal_store.m"
      MR_hl_field(MR_mktag(1), transform_hlds__goal_store__V_13_13, 0) = transform_hlds__goal_store__StartId_8;
#line 84 "goal_store.m"
      MR_hl_field(MR_mktag(1), transform_hlds__goal_store__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 84 "goal_store.m"
    }
#line 84 "goal_store.m"
    {
#line 84 "goal_store.m"
      transform_hlds__goal_store__V_15_15 = mercury__set__init_0_f_0(transform_hlds__goal_store__TypeInfo_for_T_16);
    }
#line 84 "goal_store.m"
    {
#line 84 "goal_store.m"
      *transform_hlds__goal_store__AncestorIds_12 = transform_hlds__goal_store__ancestors_2_6_f_0(transform_hlds__goal_store__TypeInfo_for_T_16, transform_hlds__goal_store__GoalStore_7, transform_hlds__goal_store__V_13_13, transform_hlds__goal_store__V_15_15, transform_hlds__goal_store__VarTypes_9, transform_hlds__goal_store__ModuleInfo_10, transform_hlds__goal_store__FullyStrict_11);
    }
#line 83 "goal_store.m"
  }
#line 47 "goal_store.m"
}

#line 80 "goal_store.m"
static void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0_1(
#line 80 "goal_store.m"
  void * transform_hlds__goal_store__env_ptr_arg)
#line 80 "goal_store.m"
{
#line 80 "goal_store.m"
  {
#line 80 "goal_store.m"
    struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s * transform_hlds__goal_store__env_ptr = (struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s *) transform_hlds__goal_store__env_ptr_arg;

#line 80 "goal_store.m"
    *((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6) = ((MR_Word) (transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6);
#line 80 "goal_store.m"
    {
#line 80 "goal_store.m"
      ((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont)((transform_hlds__goal_store__env_ptr)->transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr);
#line 80 "goal_store.m"
      return;
    }
#line 80 "goal_store.m"
  }
#line 80 "goal_store.m"
}

#line 44 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_member_3_p_0(
#line 44 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_7,
#line 44 "goal_store.m"
  MR_Word transform_hlds__goal_store__GoalStore_4,
#line 44 "goal_store.m"
  MR_Box * transform_hlds__goal_store__Key_5,
#line 44 "goal_store.m"
  MR_Word * transform_hlds__goal_store__Goal_6,
#line 44 "goal_store.m"
  MR_Cont transform_hlds__goal_store__cont,
#line 44 "goal_store.m"
  void * transform_hlds__goal_store__cont_env_ptr)
#line 44 "goal_store.m"
{
#line 44 "goal_store.m"
  {
#line 44 "goal_store.m"
    struct transform_hlds__goal_store__goal_store_member_3_p_0_env_0_s transform_hlds__goal_store__env;

#line 44 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__Goal_6 = transform_hlds__goal_store__Goal_6;
#line 44 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont = transform_hlds__goal_store__cont;
#line 44 "goal_store.m"
    (transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__cont_env_ptr = transform_hlds__goal_store__cont_env_ptr;
#line 80 "goal_store.m"
    {
#line 80 "goal_store.m"
      MR_bool transform_hlds__goal_store__succeeded;

#line 80 "goal_store.m"
      {
#line 80 "goal_store.m"
        mercury__map__member_3_p_0(transform_hlds__goal_store__TypeInfo_for_T_7, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GoalStore_4, transform_hlds__goal_store__Key_5, &(transform_hlds__goal_store__env).transform_hlds__goal_store__goal_store_member_3_p_0_env_0__conv0_Goal_6, transform_hlds__goal_store__goal_store_member_3_p_0_1, &transform_hlds__goal_store__env);
      }
#line 80 "goal_store.m"
    }
#line 44 "goal_store.m"
  }
#line 44 "goal_store.m"
}

#line 42 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_lookup_3_p_0(
#line 42 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_7,
#line 42 "goal_store.m"
  MR_Word transform_hlds__goal_store__GS_4,
#line 42 "goal_store.m"
  MR_Box transform_hlds__goal_store__Id_5,
#line 42 "goal_store.m"
  MR_Word * transform_hlds__goal_store__Goal_6)
#line 42 "goal_store.m"
{
#line 77 "goal_store.m"
  {
#line 77 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 77 "goal_store.m"
    MR_Box transform_hlds__goal_store__conv0_Goal_6;

#line 77 "goal_store.m"
    {
#line 77 "goal_store.m"
      mercury__map__lookup_3_p_0(transform_hlds__goal_store__TypeInfo_for_T_7, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GS_4, transform_hlds__goal_store__Id_5, &transform_hlds__goal_store__conv0_Goal_6);
    }
#line 77 "goal_store.m"
    *transform_hlds__goal_store__Goal_6 = ((MR_Word) transform_hlds__goal_store__conv0_Goal_6);
#line 77 "goal_store.m"
  }
#line 42 "goal_store.m"
}

#line 39 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_det_insert_4_p_0(
#line 39 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_11,
#line 39 "goal_store.m"
  MR_Box transform_hlds__goal_store__Id_5,
#line 39 "goal_store.m"
  MR_Word transform_hlds__goal_store__Goal_6,
#line 39 "goal_store.m"
  MR_Word transform_hlds__goal_store__STATE_VARIABLE_GS_0_8,
#line 39 "goal_store.m"
  MR_Word * transform_hlds__goal_store__STATE_VARIABLE_GS_9)
#line 39 "goal_store.m"
{
#line 74 "goal_store.m"
  {
#line 74 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;

#line 74 "goal_store.m"
    {
#line 74 "goal_store.m"
      mercury__map__det_insert_4_p_0(transform_hlds__goal_store__TypeInfo_for_T_11, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__Id_5, ((MR_Box) (transform_hlds__goal_store__Goal_6)), transform_hlds__goal_store__STATE_VARIABLE_GS_0_8, transform_hlds__goal_store__STATE_VARIABLE_GS_9);
#line 74 "goal_store.m"
      return;
    }
#line 74 "goal_store.m"
  }
#line 39 "goal_store.m"
}

#line 37 "goal_store.m"
MR_Word MR_CALL 
transform_hlds__goal_store__goal_store_init_0_f_0(
#line 37 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_3)
#line 37 "goal_store.m"
{
#line 68 "goal_store.m"
  {
#line 68 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;
#line 68 "goal_store.m"
    MR_Word transform_hlds__goal_store__GS_2;

#line 68 "goal_store.m"
    {
#line 68 "goal_store.m"
      mercury__map__init_1_p_0(transform_hlds__goal_store__TypeInfo_for_T_3, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, &transform_hlds__goal_store__GS_2);
    }
#line 68 "goal_store.m"
    return transform_hlds__goal_store__GS_2;
#line 68 "goal_store.m"
  }
#line 37 "goal_store.m"
}

#line 36 "goal_store.m"
void MR_CALL 
transform_hlds__goal_store__goal_store_init_1_p_0(
#line 36 "goal_store.m"
  MR_Word transform_hlds__goal_store__TypeInfo_for_T_3,
#line 36 "goal_store.m"
  MR_Word * transform_hlds__goal_store__GS_2)
#line 36 "goal_store.m"
{
#line 68 "goal_store.m"
  {
#line 68 "goal_store.m"
    MR_bool transform_hlds__goal_store__succeeded;

#line 68 "goal_store.m"
    {
#line 68 "goal_store.m"
      mercury__map__init_1_p_0(transform_hlds__goal_store__TypeInfo_for_T_3, (MR_Word) &transform_hlds__goal_store__transform_hlds__goal_store__type_ctor_info_stored_goal_0, transform_hlds__goal_store__GS_2);
#line 68 "goal_store.m"
      return;
    }
#line 68 "goal_store.m"
  }
#line 36 "goal_store.m"
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
