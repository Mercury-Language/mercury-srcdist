/*
** Automatically generated from `add_heap_ops.m'
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


/* :- module ml_backend.add_heap_ops. */
/* :- implementation. */

/*
INIT mercury__ml_backend__add_heap_ops__init
ENDINIT
*/

#include "ml_backend.add_heap_ops.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "ml_backend.mih"
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
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.quantification.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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




#line 136 "ml_backend.add_heap_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 139 "ml_backend.add_heap_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "ml_backend.add_heap_ops.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 145 "ml_backend.add_heap_ops.c"
static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[3];

#line 148 "ml_backend.add_heap_ops.c"
static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[3];

#line 151 "ml_backend.add_heap_ops.c"
static const MR_DuFunctorDesc ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0;

#line 154 "ml_backend.add_heap_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1];

#line 157 "ml_backend.add_heap_ops.c"
static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1];

#line 160 "ml_backend.add_heap_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1];

#line 163 "ml_backend.add_heap_ops.c"
static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1];

#line 166 "ml_backend.add_heap_ops.c"
static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
#line 169 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
#line 171 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2);

#line 174 "ml_backend.add_heap_ops.c"
static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
#line 177 "ml_backend.add_heap_ops.c"
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_1,
#line 179 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2,
#line 181 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3);

#line 73 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
#line 73 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__HeadVar__1_1,
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2,
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__3_3);

#line 73 "add_heap_ops.m"
static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2);

#line 362 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
#line 362 "add_heap_ops.m"
  MR_String ml_backend__add_heap_ops__PredName_9,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Detism_10,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Purity_11,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Args_12,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__InstMapDelta_13,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__ModuleInfo_14,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Context_15,
#line 362 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__CallGoal_16);

#line 343 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
#line 343 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Var_4,
#line 343 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
#line 343 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);

#line 329 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_5_p_0(
#line 329 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
#line 329 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Context_7,
#line 329 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__RestoreHeapPointerGoal_8,
#line 329 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
#line 329 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);

#line 321 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_5_p_0(
#line 321 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
#line 321 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Context_7,
#line 321 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__MarkHeapPointerGoal_8,
#line 321 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
#line 321 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);

#line 309 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
#line 309 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
#line 309 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
#line 309 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3,
#line 309 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_4);

#line 250 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
#line 250 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__IsFirstBranch_3,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__DisjGoalInfo_5,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
#line 250 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);

#line 248 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
#line 248 "add_heap_ops.m"
  MR_Box ml_backend__add_heap_ops__closure_arg,
#line 248 "add_heap_ops.m"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
#line 248 "add_heap_ops.m"
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_2,
#line 248 "add_heap_ops.m"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3,
#line 248 "add_heap_ops.m"
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_4);

#line 244 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
#line 244 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Goals0_5,
#line 244 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Goals_6,
#line 244 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_8,
#line 244 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_9);

#line 103 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
#line 103 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__GoalExpr0_6,
#line 103 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__GoalInfo0_7,
#line 103 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Goal_8,
#line 103 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84,
#line 103 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);

#line 96 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
#line 96 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Goal0_5,
#line 96 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Goal_6,
#line 96 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
#line 96 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);


static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[1][7];

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_3[1][3];




static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0)),
    ((MR_Box) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0))
  },
};

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__add_heap_ops_scalar_common_2[0])),
    ((MR_Box) (ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



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



#line 399 "ml_backend.add_heap_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 407 "ml_backend.add_heap_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 415 "ml_backend.add_heap_ops.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 424 "ml_backend.add_heap_ops.c"
static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 431 "ml_backend.add_heap_ops.c"
static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[3] = {
  (MR_String) "heap_varset",
  (MR_String) "heap_var_types",
  (MR_String) "heap_module_info"
};

#line 438 "ml_backend.add_heap_ops.c"
static const MR_DuFunctorDesc ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0 = {
  (MR_String) "heap_ops_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0,
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0,
  NULL,
  NULL
};

#line 453 "ml_backend.add_heap_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1] = {
  &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0
};

#line 458 "ml_backend.add_heap_ops.c"
static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0
  }
};

#line 467 "ml_backend.add_heap_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1] = {
  &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0
};

#line 472 "ml_backend.add_heap_ops.c"
static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1] = {
  (MR_Integer) 0
};

#line 477 "ml_backend.add_heap_ops.c"
const MR_TypeCtorInfo_Struct ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001)),
  ((MR_Box) (ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001)),
  (MR_String) "ml_backend.add_heap_ops",
  (MR_String) "heap_ops_info",
  {
    ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0
  },
  {
    ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0
};

#line 498 "ml_backend.add_heap_ops.c"
static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
#line 501 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
#line 503 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2)
#line 505 "ml_backend.add_heap_ops.c"
{
#line 507 "ml_backend.add_heap_ops.c"
  {
#line 509 "ml_backend.add_heap_ops.c"
    MR_bool ml_backend__add_heap_ops__succeeded;

#line 512 "ml_backend.add_heap_ops.c"
    {
#line 514 "ml_backend.add_heap_ops.c"
      ml_backend__add_heap_ops__succeeded = ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(((MR_Word) ml_backend__add_heap_ops__wrapper_arg_1), ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_2));
    }
#line 517 "ml_backend.add_heap_ops.c"
    return ml_backend__add_heap_ops__succeeded;
#line 519 "ml_backend.add_heap_ops.c"
  }
#line 521 "ml_backend.add_heap_ops.c"
}

#line 524 "ml_backend.add_heap_ops.c"
static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
#line 527 "ml_backend.add_heap_ops.c"
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_1,
#line 529 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2,
#line 531 "ml_backend.add_heap_ops.c"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3)
#line 533 "ml_backend.add_heap_ops.c"
{
#line 535 "ml_backend.add_heap_ops.c"
  {
#line 537 "ml_backend.add_heap_ops.c"
    MR_Word ml_backend__add_heap_ops__conv0_HeadVar__1_1;

#line 540 "ml_backend.add_heap_ops.c"
    {
#line 542 "ml_backend.add_heap_ops.c"
      ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(&ml_backend__add_heap_ops__conv0_HeadVar__1_1, ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_2), ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_3));
    }
#line 545 "ml_backend.add_heap_ops.c"
    *ml_backend__add_heap_ops__wrapper_arg_1 = ((MR_Box) (ml_backend__add_heap_ops__conv0_HeadVar__1_1));
#line 547 "ml_backend.add_heap_ops.c"
  }
#line 549 "ml_backend.add_heap_ops.c"
}

#line 73 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
#line 73 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__HeadVar__1_1,
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2,
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__3_3)
#line 73 "add_heap_ops.m"
{
#line 73 "add_heap_ops.m"
  {
#line 73 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 73 "add_heap_ops.m"
    MR_Integer ml_backend__add_heap_ops__CastX_12 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__2_2;
#line 73 "add_heap_ops.m"
    MR_Integer ml_backend__add_heap_ops__CastY_13 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__3_3;

#line 73 "add_heap_ops.m"
    ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__CastX_12 == ml_backend__add_heap_ops__CastY_13);
#line 73 "add_heap_ops.m"
    if (ml_backend__add_heap_ops__succeeded)
#line 576 "ml_backend.add_heap_ops.c"
      *ml_backend__add_heap_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "add_heap_ops.m"
    else
#line 73 "add_heap_ops.m"
      {
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_10_10;

#line 73 "add_heap_ops.m"
        {
#line 73 "add_heap_ops.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_heap_ops_scalar_common_1[0], &ml_backend__add_heap_ops__V_10_10, ((MR_Box) (ml_backend__add_heap_ops__V_4_4)), ((MR_Box) (ml_backend__add_heap_ops__V_7_7)));
        }
#line 602 "ml_backend.add_heap_ops.c"
        ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__V_10_10 == (MR_Integer) 0);
#line 73 "add_heap_ops.m"
        ml_backend__add_heap_ops__succeeded = !(ml_backend__add_heap_ops__succeeded);
#line 73 "add_heap_ops.m"
        if (ml_backend__add_heap_ops__succeeded)
#line 73 "add_heap_ops.m"
          *ml_backend__add_heap_ops__HeadVar__1_1 = ml_backend__add_heap_ops__V_10_10;
#line 73 "add_heap_ops.m"
        else
#line 73 "add_heap_ops.m"
          {
#line 73 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_11_11;

#line 73 "add_heap_ops.m"
            {
#line 73 "add_heap_ops.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &ml_backend__add_heap_ops__V_11_11, ((MR_Box) (ml_backend__add_heap_ops__V_5_5)), ((MR_Box) (ml_backend__add_heap_ops__V_8_8)));
            }
#line 622 "ml_backend.add_heap_ops.c"
            ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__V_11_11 == (MR_Integer) 0);
#line 73 "add_heap_ops.m"
            ml_backend__add_heap_ops__succeeded = !(ml_backend__add_heap_ops__succeeded);
#line 73 "add_heap_ops.m"
            if (ml_backend__add_heap_ops__succeeded)
#line 73 "add_heap_ops.m"
              *ml_backend__add_heap_ops__HeadVar__1_1 = ml_backend__add_heap_ops__V_11_11;
#line 73 "add_heap_ops.m"
            else
#line 73 "add_heap_ops.m"
              {
#line 73 "add_heap_ops.m"
                hlds__hlds_module____Compare____module_info_0_0(ml_backend__add_heap_ops__HeadVar__1_1, ml_backend__add_heap_ops__V_6_6, ml_backend__add_heap_ops__V_9_9);
#line 73 "add_heap_ops.m"
                return;
              }
#line 73 "add_heap_ops.m"
          }
#line 73 "add_heap_ops.m"
      }
#line 73 "add_heap_ops.m"
  }
#line 73 "add_heap_ops.m"
}

#line 73 "add_heap_ops.m"
static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
#line 73 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2)
#line 73 "add_heap_ops.m"
{
#line 73 "add_heap_ops.m"
  {
#line 73 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 73 "add_heap_ops.m"
    MR_Integer ml_backend__add_heap_ops__CastX_9 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__1_1;
#line 73 "add_heap_ops.m"
    MR_Integer ml_backend__add_heap_ops__CastY_10 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__2_2;

#line 73 "add_heap_ops.m"
    ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__CastX_9 == ml_backend__add_heap_ops__CastY_10);
#line 73 "add_heap_ops.m"
    if (ml_backend__add_heap_ops__succeeded)
#line 73 "add_heap_ops.m"
      ml_backend__add_heap_ops__succeeded = MR_TRUE;
#line 73 "add_heap_ops.m"
    else
#line 73 "add_heap_ops.m"
      {
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__TypeCtorInfo_12_12;
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 2)));

#line 691 "ml_backend.add_heap_ops.c"
        {
#line 693 "ml_backend.add_heap_ops.c"
          ml_backend__add_heap_ops__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__add_heap_ops_scalar_common_1[0], ((MR_Box) (ml_backend__add_heap_ops__V_3_3)), ((MR_Box) (ml_backend__add_heap_ops__V_6_6)));
        }
#line 73 "add_heap_ops.m"
        if (ml_backend__add_heap_ops__succeeded)
#line 73 "add_heap_ops.m"
          {
#line 700 "ml_backend.add_heap_ops.c"
            ml_backend__add_heap_ops__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 702 "ml_backend.add_heap_ops.c"
            {
#line 704 "ml_backend.add_heap_ops.c"
              ml_backend__add_heap_ops__succeeded = mercury__builtin__unify_2_p_0(ml_backend__add_heap_ops__TypeCtorInfo_12_12, ((MR_Box) (ml_backend__add_heap_ops__V_4_4)), ((MR_Box) (ml_backend__add_heap_ops__V_7_7)));
            }
#line 73 "add_heap_ops.m"
            if (ml_backend__add_heap_ops__succeeded)
#line 709 "ml_backend.add_heap_ops.c"
              {
#line 711 "ml_backend.add_heap_ops.c"
                return ml_backend__add_heap_ops__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__add_heap_ops__V_5_5, ml_backend__add_heap_ops__V_8_8);
              }
#line 73 "add_heap_ops.m"
          }
#line 73 "add_heap_ops.m"
      }
#line 73 "add_heap_ops.m"
    return ml_backend__add_heap_ops__succeeded;
#line 73 "add_heap_ops.m"
  }
#line 73 "add_heap_ops.m"
}

#line 362 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
#line 362 "add_heap_ops.m"
  MR_String ml_backend__add_heap_ops__PredName_9,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Detism_10,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Purity_11,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Args_12,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__InstMapDelta_13,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__ModuleInfo_14,
#line 362 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Context_15,
#line 362 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__CallGoal_16)
#line 362 "add_heap_ops.m"
{
#line 367 "add_heap_ops.m"
  {
#line 367 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 367 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_17_17;

#line 368 "add_heap_ops.m"
    {
#line 368 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_17_17 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 368 "add_heap_ops.m"
    {
#line 368 "add_heap_ops.m"
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_heap_ops__V_17_17, ml_backend__add_heap_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__Detism_10, ml_backend__add_heap_ops__Purity_11, ml_backend__add_heap_ops__Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__InstMapDelta_13, ml_backend__add_heap_ops__ModuleInfo_14, ml_backend__add_heap_ops__Context_15, ml_backend__add_heap_ops__CallGoal_16);
#line 368 "add_heap_ops.m"
      return;
    }
#line 367 "add_heap_ops.m"
  }
#line 362 "add_heap_ops.m"
}

#line 343 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
#line 343 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Var_4,
#line 343 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
#line 343 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7)
#line 343 "add_heap_ops.m"
{
#line 346 "add_heap_ops.m"
  {
#line 346 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 346 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_9_9;
#line 346 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarSet0_17;
#line 346 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarTypes0_18;
#line 346 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarSet_19;
#line 346 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarTypes_20;
#line 346 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_29_29;
#line 353 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_24_24;
#line 357 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_27_27;
#line 357 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_28_28;

#line 347 "add_heap_ops.m"
    {
#line 347 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_9_9 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
    }
#line 353 "add_heap_ops.m"
    ml_backend__add_heap_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 353 "add_heap_ops.m"
    ml_backend__add_heap_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 353 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 355 "add_heap_ops.m"
    {
#line 355 "add_heap_ops.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "HeapPointer", ml_backend__add_heap_ops__Var_4, ml_backend__add_heap_ops__VarSet0_17, &ml_backend__add_heap_ops__VarSet_19);
    }
#line 356 "add_heap_ops.m"
    {
#line 356 "add_heap_ops.m"
      parse_tree__prog_data__add_var_type_4_p_0(*ml_backend__add_heap_ops__Var_4, ml_backend__add_heap_ops__V_9_9, ml_backend__add_heap_ops__VarTypes0_18, &ml_backend__add_heap_ops__VarTypes_20);
    }
#line 357 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 357 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 357 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 358 "add_heap_ops.m"
    {
#line 358 "add_heap_ops.m"
      MR_Word base;
#line 358 "add_heap_ops.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 358 "add_heap_ops.m"
      *ml_backend__add_heap_ops__STATE_VARIABLE_Info_7 = base;
#line 358 "add_heap_ops.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__VarSet_19));
#line 358 "add_heap_ops.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__VarTypes_20));
#line 358 "add_heap_ops.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_29_29));
#line 358 "add_heap_ops.m"
    }
#line 346 "add_heap_ops.m"
  }
#line 343 "add_heap_ops.m"
}

#line 329 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_5_p_0(
#line 329 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
#line 329 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Context_7,
#line 329 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__RestoreHeapPointerGoal_8,
#line 329 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
#line 329 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11)
#line 329 "add_heap_ops.m"
{
#line 332 "add_heap_ops.m"
  {
#line 332 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 332 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_15_15;
#line 332 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_16_16;
#line 332 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_17_17;
#line 332 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_29_29;
#line 333 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_19_19;
#line 333 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_20_20;

#line 333 "add_heap_ops.m"
    {
#line 333 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "add_heap_ops.m"
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_6));
#line 333 "add_heap_ops.m"
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "add_heap_ops.m"
    }
#line 333 "add_heap_ops.m"
    {
#line 333 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_16_16 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 333 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 333 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 333 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 368 "add_heap_ops.m"
    {
#line 368 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_29_29 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 368 "add_heap_ops.m"
    {
#line 368 "add_heap_ops.m"
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_heap_ops__V_29_29, (MR_String) "restore_hp", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_heap_ops__V_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__V_16_16, ml_backend__add_heap_ops__V_17_17, ml_backend__add_heap_ops__Context_7, ml_backend__add_heap_ops__RestoreHeapPointerGoal_8);
    }
#line 333 "add_heap_ops.m"
    *ml_backend__add_heap_ops__STATE_VARIABLE_Info_11 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10;
#line 332 "add_heap_ops.m"
  }
#line 329 "add_heap_ops.m"
}

#line 321 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_5_p_0(
#line 321 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
#line 321 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Context_7,
#line 321 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__MarkHeapPointerGoal_8,
#line 321 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
#line 321 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11)
#line 321 "add_heap_ops.m"
{
#line 324 "add_heap_ops.m"
  {
#line 324 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 324 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_15_15;
#line 324 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_16_16;
#line 324 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_17_17;
#line 324 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_29_29;
#line 325 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_19_19;
#line 325 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_20_20;

#line 325 "add_heap_ops.m"
    {
#line 325 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "add_heap_ops.m"
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_6));
#line 325 "add_heap_ops.m"
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "add_heap_ops.m"
    }
#line 325 "add_heap_ops.m"
    {
#line 325 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_16_16 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_heap_ops__SavedHeapPointerVar_6);
    }
#line 325 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 325 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 325 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 368 "add_heap_ops.m"
    {
#line 368 "add_heap_ops.m"
      ml_backend__add_heap_ops__V_29_29 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 368 "add_heap_ops.m"
    {
#line 368 "add_heap_ops.m"
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_heap_ops__V_29_29, (MR_String) "mark_hp", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_heap_ops__V_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__V_16_16, ml_backend__add_heap_ops__V_17_17, ml_backend__add_heap_ops__Context_7, ml_backend__add_heap_ops__MarkHeapPointerGoal_8);
    }
#line 325 "add_heap_ops.m"
    *ml_backend__add_heap_ops__STATE_VARIABLE_Info_11 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10;
#line 324 "add_heap_ops.m"
  }
#line 321 "add_heap_ops.m"
}

#line 309 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
#line 309 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
#line 309 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
#line 309 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3,
#line 309 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_4)
#line 309 "add_heap_ops.m"
{
#line 312 "add_heap_ops.m"
  {
#line 312 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;

#line 312 "add_heap_ops.m"
    if ((ml_backend__add_heap_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "add_heap_ops.m"
      {
#line 312 "add_heap_ops.m"
        *ml_backend__add_heap_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "add_heap_ops.m"
        *ml_backend__add_heap_ops__STATE_VARIABLE_Info_4 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3;
#line 312 "add_heap_ops.m"
      }
#line 312 "add_heap_ops.m"
    else
#line 313 "add_heap_ops.m"
      {
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Case_10;
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Cases_11;
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case0_8, (MR_Integer) 0)));
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case0_8, (MR_Integer) 1)));
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case0_8, (MR_Integer) 2)));
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Goal_16;
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_19_19;
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__GoalExpr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_15, (MR_Integer) 0)));
#line 313 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_15, (MR_Integer) 1)));

#line 101 "add_heap_ops.m"
        {
#line 101 "add_heap_ops.m"
          ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_26, ml_backend__add_heap_ops__GoalInfo_27, &ml_backend__add_heap_ops__Goal_16, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_19_19);
        }
#line 316 "add_heap_ops.m"
        {
#line 316 "add_heap_ops.m"
          ml_backend__add_heap_ops__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 316 "add_heap_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case_10, 0) = ((MR_Box) (ml_backend__add_heap_ops__MainConsId_13));
#line 316 "add_heap_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case_10, 1) = ((MR_Box) (ml_backend__add_heap_ops__OtherConsIds_14));
#line 316 "add_heap_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case_10, 2) = ((MR_Box) (ml_backend__add_heap_ops__Goal_16));
#line 316 "add_heap_ops.m"
        }
#line 317 "add_heap_ops.m"
        {
#line 317 "add_heap_ops.m"
          ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(ml_backend__add_heap_ops__Cases0_9, &ml_backend__add_heap_ops__Cases_11, ml_backend__add_heap_ops__STATE_VARIABLE_Info_19_19, ml_backend__add_heap_ops__STATE_VARIABLE_Info_4);
        }
#line 313 "add_heap_ops.m"
        {
#line 313 "add_heap_ops.m"
          MR_Word base;
#line 313 "add_heap_ops.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_heap_ops.m"
          *ml_backend__add_heap_ops__HeadVar__2_2 = base;
#line 313 "add_heap_ops.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__Case_10));
#line 313 "add_heap_ops.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__Cases_11));
#line 313 "add_heap_ops.m"
        }
#line 313 "add_heap_ops.m"
      }
#line 312 "add_heap_ops.m"
  }
#line 309 "add_heap_ops.m"
}

#line 250 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
#line 250 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__IsFirstBranch_3,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__DisjGoalInfo_5,
#line 250 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
#line 250 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7)
#line 250 "add_heap_ops.m"
{
#line 254 "add_heap_ops.m"
  {
#line 254 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;

#line 254 "add_heap_ops.m"
    if ((ml_backend__add_heap_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "add_heap_ops.m"
      {
#line 254 "add_heap_ops.m"
        *ml_backend__add_heap_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "add_heap_ops.m"
        *ml_backend__add_heap_ops__STATE_VARIABLE_Info_7 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6;
#line 254 "add_heap_ops.m"
      }
#line 254 "add_heap_ops.m"
    else
#line 256 "add_heap_ops.m"
      {
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Goal1_21;
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__GoalInfo_23;
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Context_24;
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__Goal_27;
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43;
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44;
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__GoalExpr0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_14, (MR_Integer) 0)));
#line 256 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__GoalInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_14, (MR_Integer) 1)));
#line 258 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_22_22;
#line 270 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar0_25;
#line 282 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_28_28;
#line 282 "add_heap_ops.m"
        MR_Word ml_backend__add_heap_ops__V_29_29;

#line 101 "add_heap_ops.m"
        {
#line 101 "add_heap_ops.m"
          ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_67, ml_backend__add_heap_ops__GoalInfo_68, &ml_backend__add_heap_ops__Goal1_21, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43);
        }
#line 258 "add_heap_ops.m"
        ml_backend__add_heap_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal1_21, (MR_Integer) 0)));
#line 258 "add_heap_ops.m"
        ml_backend__add_heap_ops__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal1_21, (MR_Integer) 1)));
#line 259 "add_heap_ops.m"
        {
#line 259 "add_heap_ops.m"
          ml_backend__add_heap_ops__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo_23);
        }
#line 264 "add_heap_ops.m"
        ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__IsFirstBranch_3 == (MR_Integer) 1);
#line 264 "add_heap_ops.m"
        if (ml_backend__add_heap_ops__succeeded)
#line 264 "add_heap_ops.m"
          {
#line 265 "add_heap_ops.m"
            ml_backend__add_heap_ops__succeeded = ((MR_tag((MR_Word) ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4)) == (MR_mktag((MR_Integer) 1)));
#line 265 "add_heap_ops.m"
            if (ml_backend__add_heap_ops__succeeded)
#line 265 "add_heap_ops.m"
              ml_backend__add_heap_ops__SavedHeapPointerVar0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4, (MR_Integer) 0)));
#line 264 "add_heap_ops.m"
          }
#line 270 "add_heap_ops.m"
        if (ml_backend__add_heap_ops__succeeded)
#line 268 "add_heap_ops.m"
          {
#line 268 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__RestoreHeapPointerGoal_26;
#line 268 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_45_45;
#line 268 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_46_46;

#line 267 "add_heap_ops.m"
            {
#line 267 "add_heap_ops.m"
              ml_backend__add_heap_ops__gen_restore_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar0_25, ml_backend__add_heap_ops__Context_24, &ml_backend__add_heap_ops__RestoreHeapPointerGoal_26, ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44);
            }
#line 269 "add_heap_ops.m"
            {
#line 269 "add_heap_ops.m"
              ml_backend__add_heap_ops__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_46_46, 0) = ((MR_Box) (ml_backend__add_heap_ops__Goal1_21));
#line 269 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "add_heap_ops.m"
            }
#line 269 "add_heap_ops.m"
            {
#line 269 "add_heap_ops.m"
              ml_backend__add_heap_ops__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_45_45, 0) = ((MR_Box) (ml_backend__add_heap_ops__RestoreHeapPointerGoal_26));
#line 269 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_45_45, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_46_46));
#line 269 "add_heap_ops.m"
            }
#line 269 "add_heap_ops.m"
            {
#line 269 "add_heap_ops.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__add_heap_ops__V_45_45, ml_backend__add_heap_ops__GoalInfo_23, &ml_backend__add_heap_ops__Goal_27);
            }
#line 268 "add_heap_ops.m"
          }
#line 270 "add_heap_ops.m"
        else
#line 271 "add_heap_ops.m"
          {
#line 271 "add_heap_ops.m"
            ml_backend__add_heap_ops__Goal_27 = ml_backend__add_heap_ops__Goal1_21;
#line 271 "add_heap_ops.m"
            ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43;
#line 271 "add_heap_ops.m"
          }
#line 280 "add_heap_ops.m"
        ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "add_heap_ops.m"
        if (ml_backend__add_heap_ops__succeeded)
#line 280 "add_heap_ops.m"
          {
#line 281 "add_heap_ops.m"
            {
#line 281 "add_heap_ops.m"
              ml_backend__add_heap_ops__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ml_backend__add_heap_ops__Goal_27);
            }
#line 280 "add_heap_ops.m"
            if (ml_backend__add_heap_ops__succeeded)
#line 280 "add_heap_ops.m"
              {
#line 282 "add_heap_ops.m"
                ml_backend__add_heap_ops__succeeded = ((MR_tag((MR_Word) ml_backend__add_heap_ops__Goals0_15)) == (MR_mktag((MR_Integer) 1)));
#line 282 "add_heap_ops.m"
                if (ml_backend__add_heap_ops__succeeded)
#line 282 "add_heap_ops.m"
                  {
#line 282 "add_heap_ops.m"
                    ml_backend__add_heap_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Goals0_15, (MR_Integer) 0)));
#line 282 "add_heap_ops.m"
                    ml_backend__add_heap_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Goals0_15, (MR_Integer) 1)));
#line 282 "add_heap_ops.m"
                  }
#line 280 "add_heap_ops.m"
              }
#line 280 "add_heap_ops.m"
          }
#line 302 "add_heap_ops.m"
        if (ml_backend__add_heap_ops__succeeded)
#line 285 "add_heap_ops.m"
          {
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_30;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__MarkHeapPointerGoal_31;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__Goals1_32;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__InnerDisjGoalExpr_33;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__InnerDisjGoal_34;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__ConjGoalExpr_35;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__ConjGoal_36;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__Purity_37;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__ScopeGoalExpr_38;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__ScopeGoal_39;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_48_48;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_49_49;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_51_51;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_53_53;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_55_55;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_56_56;
#line 285 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_58_58;

#line 285 "add_heap_ops.m"
            {
#line 285 "add_heap_ops.m"
              ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&ml_backend__add_heap_ops__SavedHeapPointerVar_30, ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_48_48);
            }
#line 286 "add_heap_ops.m"
            {
#line 286 "add_heap_ops.m"
              ml_backend__add_heap_ops__gen_mark_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_30, ml_backend__add_heap_ops__Context_24, &ml_backend__add_heap_ops__MarkHeapPointerGoal_31, ml_backend__add_heap_ops__STATE_VARIABLE_Info_48_48, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_49_49);
            }
#line 289 "add_heap_ops.m"
            {
#line 289 "add_heap_ops.m"
              ml_backend__add_heap_ops__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 289 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_51_51, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_30));
#line 289 "add_heap_ops.m"
            }
#line 289 "add_heap_ops.m"
            {
#line 289 "add_heap_ops.m"
              ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Goals0_15, &ml_backend__add_heap_ops__Goals1_32, (MR_Integer) 1, ml_backend__add_heap_ops__V_51_51, ml_backend__add_heap_ops__DisjGoalInfo_5, ml_backend__add_heap_ops__STATE_VARIABLE_Info_49_49, ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);
            }
#line 294 "add_heap_ops.m"
            {
#line 294 "add_heap_ops.m"
              ml_backend__add_heap_ops__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_53_53, 0) = ((MR_Box) (ml_backend__add_heap_ops__Goal_27));
#line 294 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_53_53, 1) = ((MR_Box) (ml_backend__add_heap_ops__Goals1_32));
#line 294 "add_heap_ops.m"
            }
#line 294 "add_heap_ops.m"
            {
#line 294 "add_heap_ops.m"
              ml_backend__add_heap_ops__InnerDisjGoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__InnerDisjGoalExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 294 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__InnerDisjGoalExpr_33, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_53_53));
#line 294 "add_heap_ops.m"
            }
#line 295 "add_heap_ops.m"
            {
#line 295 "add_heap_ops.m"
              ml_backend__add_heap_ops__InnerDisjGoal_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "add_heap_ops.m"
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerDisjGoal_34, 0) = ((MR_Box) (ml_backend__add_heap_ops__InnerDisjGoalExpr_33));
#line 295 "add_heap_ops.m"
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerDisjGoal_34, 1) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalInfo_5));
#line 295 "add_heap_ops.m"
            }
#line 296 "add_heap_ops.m"
            {
#line 296 "add_heap_ops.m"
              ml_backend__add_heap_ops__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_56_56, 0) = ((MR_Box) (ml_backend__add_heap_ops__InnerDisjGoal_34));
#line 296 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "add_heap_ops.m"
            }
#line 296 "add_heap_ops.m"
            {
#line 296 "add_heap_ops.m"
              ml_backend__add_heap_ops__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_55_55, 0) = ((MR_Box) (ml_backend__add_heap_ops__MarkHeapPointerGoal_31));
#line 296 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_55_55, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_56_56));
#line 296 "add_heap_ops.m"
            }
#line 296 "add_heap_ops.m"
            {
#line 296 "add_heap_ops.m"
              ml_backend__add_heap_ops__ConjGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 296 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 296 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_35, 1) = ((MR_Box) ((MR_Integer) 0));
#line 296 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_35, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_55_55));
#line 296 "add_heap_ops.m"
            }
#line 297 "add_heap_ops.m"
            {
#line 297 "add_heap_ops.m"
              ml_backend__add_heap_ops__ConjGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "add_heap_ops.m"
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_36, 0) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoalExpr_35));
#line 297 "add_heap_ops.m"
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_36, 1) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalInfo_5));
#line 297 "add_heap_ops.m"
            }
#line 298 "add_heap_ops.m"
            {
#line 298 "add_heap_ops.m"
              ml_backend__add_heap_ops__Purity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ml_backend__add_heap_ops__DisjGoalInfo_5);
            }
#line 299 "add_heap_ops.m"
            {
#line 299 "add_heap_ops.m"
              ml_backend__add_heap_ops__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 299 "add_heap_ops.m"
              MR_hl_field(MR_mktag(2), ml_backend__add_heap_ops__V_58_58, 0) = ((MR_Box) (ml_backend__add_heap_ops__Purity_37));
#line 299 "add_heap_ops.m"
            }
#line 299 "add_heap_ops.m"
            {
#line 299 "add_heap_ops.m"
              ml_backend__add_heap_ops__ScopeGoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 299 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ScopeGoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 299 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ScopeGoalExpr_38, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_58_58));
#line 299 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ScopeGoalExpr_38, 2) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoal_36));
#line 299 "add_heap_ops.m"
            }
#line 300 "add_heap_ops.m"
            {
#line 300 "add_heap_ops.m"
              ml_backend__add_heap_ops__ScopeGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "add_heap_ops.m"
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ScopeGoal_39, 0) = ((MR_Box) (ml_backend__add_heap_ops__ScopeGoalExpr_38));
#line 300 "add_heap_ops.m"
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ScopeGoal_39, 1) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalInfo_5));
#line 300 "add_heap_ops.m"
            }
#line 301 "add_heap_ops.m"
            {
#line 301 "add_heap_ops.m"
              MR_Word base;
#line 301 "add_heap_ops.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "add_heap_ops.m"
              *ml_backend__add_heap_ops__HeadVar__2_2 = base;
#line 301 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__ScopeGoal_39));
#line 301 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "add_heap_ops.m"
            }
#line 285 "add_heap_ops.m"
          }
#line 302 "add_heap_ops.m"
        else
#line 305 "add_heap_ops.m"
          {
#line 305 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__Goals_40;

#line 304 "add_heap_ops.m"
            {
#line 304 "add_heap_ops.m"
              ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Goals0_15, &ml_backend__add_heap_ops__Goals_40, (MR_Integer) 1, ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4, ml_backend__add_heap_ops__DisjGoalInfo_5, ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44, ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);
            }
#line 306 "add_heap_ops.m"
            {
#line 306 "add_heap_ops.m"
              MR_Word base;
#line 306 "add_heap_ops.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "add_heap_ops.m"
              *ml_backend__add_heap_ops__HeadVar__2_2 = base;
#line 306 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__Goal_27));
#line 306 "add_heap_ops.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__Goals_40));
#line 306 "add_heap_ops.m"
            }
#line 305 "add_heap_ops.m"
          }
#line 256 "add_heap_ops.m"
      }
#line 254 "add_heap_ops.m"
  }
#line 250 "add_heap_ops.m"
}

#line 248 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
#line 248 "add_heap_ops.m"
  MR_Box ml_backend__add_heap_ops__closure_arg,
#line 248 "add_heap_ops.m"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
#line 248 "add_heap_ops.m"
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_2,
#line 248 "add_heap_ops.m"
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3,
#line 248 "add_heap_ops.m"
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_4)
#line 248 "add_heap_ops.m"
{
#line 248 "add_heap_ops.m"
  {
#line 248 "add_heap_ops.m"
    MR_Box ml_backend__add_heap_ops__closure = ml_backend__add_heap_ops__closure_arg;
#line 248 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__conv1_Goal_6;
#line 248 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__conv0_STATE_VARIABLE_Info_11;

#line 248 "add_heap_ops.m"
    {
#line 248 "add_heap_ops.m"
      ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(((MR_Word) ml_backend__add_heap_ops__wrapper_arg_1), &ml_backend__add_heap_ops__conv1_Goal_6, ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_3), &ml_backend__add_heap_ops__conv0_STATE_VARIABLE_Info_11);
    }
#line 248 "add_heap_ops.m"
    *ml_backend__add_heap_ops__wrapper_arg_2 = ((MR_Box) (ml_backend__add_heap_ops__conv1_Goal_6));
#line 248 "add_heap_ops.m"
    *ml_backend__add_heap_ops__wrapper_arg_4 = ((MR_Box) (ml_backend__add_heap_ops__conv0_STATE_VARIABLE_Info_11));
#line 248 "add_heap_ops.m"
  }
#line 248 "add_heap_ops.m"
}

#line 244 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
#line 244 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Goals0_5,
#line 244 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Goals_6,
#line 244 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_8,
#line 244 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_9)
#line 244 "add_heap_ops.m"
{
#line 247 "add_heap_ops.m"
  {
#line 247 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 247 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 248 "add_heap_ops.m"
    MR_Box ml_backend__add_heap_ops__conv2_STATE_VARIABLE_Info_9;

#line 248 "add_heap_ops.m"
    {
#line 248 "add_heap_ops.m"
      mercury__list__map_foldl_5_p_0(ml_backend__add_heap_ops__TypeCtorInfo_16_16, ml_backend__add_heap_ops__TypeCtorInfo_16_16, (MR_Word) &ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0, (MR_Word) &ml_backend__add_heap_ops_scalar_common_3[0], ml_backend__add_heap_ops__Goals0_5, ml_backend__add_heap_ops__Goals_6, ((MR_Box) (ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_8)), &ml_backend__add_heap_ops__conv2_STATE_VARIABLE_Info_9);
    }
#line 248 "add_heap_ops.m"
    *ml_backend__add_heap_ops__STATE_VARIABLE_Info_9 = ((MR_Word) ml_backend__add_heap_ops__conv2_STATE_VARIABLE_Info_9);
#line 247 "add_heap_ops.m"
  }
#line 244 "add_heap_ops.m"
}

#line 103 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
#line 103 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__GoalExpr0_6,
#line 103 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__GoalInfo0_7,
#line 103 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Goal_8,
#line 103 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84,
#line 103 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_85)
#line 103 "add_heap_ops.m"
{
#line 108 "add_heap_ops.m"
  while (MR_TRUE)
#line 108 "add_heap_ops.m"
    {
#line 108 "add_heap_ops.m"
      /* tailcall optimized into a loop */
#line 108 "add_heap_ops.m"
      {
#line 108 "add_heap_ops.m"
        MR_bool ml_backend__add_heap_ops__succeeded;

#line 108 "add_heap_ops.m"
        if (((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 0))))
#line 158 "add_heap_ops.m"
          {
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__InnerGoal_31 = (MR_Word) MR_body(((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6), (MR_Integer) 0);
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__InnerGoalInfo_34;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__Determinism_35;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__NumSolns_37;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__True_38;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__Fail_39;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__ModuleInfo_40;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__ThenGoal_41;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__NewOuterGoal_42;
#line 158 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__Context_131;
#line 164 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_33_33;
#line 166 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops___CanFail_36;
#line 169 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_153_153;
#line 169 "add_heap_ops.m"
            MR_Word ml_backend__add_heap_ops__V_154_154;

#line 163 "add_heap_ops.m"
            {
#line 163 "add_heap_ops.m"
              ml_backend__add_heap_ops__Context_131 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
            }
#line 164 "add_heap_ops.m"
            ml_backend__add_heap_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerGoal_31, (MR_Integer) 0)));
#line 164 "add_heap_ops.m"
            ml_backend__add_heap_ops__InnerGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerGoal_31, (MR_Integer) 1)));
#line 165 "add_heap_ops.m"
            {
#line 165 "add_heap_ops.m"
              ml_backend__add_heap_ops__Determinism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__add_heap_ops__InnerGoalInfo_34);
            }
#line 166 "add_heap_ops.m"
            {
#line 166 "add_heap_ops.m"
              parse_tree__prog_data__determinism_components_3_p_0(ml_backend__add_heap_ops__Determinism_35, &ml_backend__add_heap_ops___CanFail_36, &ml_backend__add_heap_ops__NumSolns_37);
            }
#line 167 "add_heap_ops.m"
            {
#line 167 "add_heap_ops.m"
              ml_backend__add_heap_ops__True_38 = hlds__hlds_goal__true_goal_with_context_1_f_0(ml_backend__add_heap_ops__Context_131);
            }
#line 168 "add_heap_ops.m"
            {
#line 168 "add_heap_ops.m"
              ml_backend__add_heap_ops__Fail_39 = hlds__hlds_goal__fail_goal_with_context_1_f_0(ml_backend__add_heap_ops__Context_131);
            }
#line 169 "add_heap_ops.m"
            ml_backend__add_heap_ops__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, (MR_Integer) 0)));
#line 169 "add_heap_ops.m"
            ml_backend__add_heap_ops__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, (MR_Integer) 1)));
#line 169 "add_heap_ops.m"
            ml_backend__add_heap_ops__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, (MR_Integer) 2)));
#line 179 "add_heap_ops.m"
            if ((ml_backend__add_heap_ops__NumSolns_37 == (MR_Integer) 0))
#line 171 "add_heap_ops.m"
              {
#line 171 "add_heap_ops.m"
                MR_Word ml_backend__add_heap_ops__V_110_110;

#line 177 "add_heap_ops.m"
                {
#line 177 "add_heap_ops.m"
                  ml_backend__add_heap_ops__V_110_110 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                }
#line 177 "add_heap_ops.m"
                {
#line 177 "add_heap_ops.m"
                  ml_backend__add_heap_ops__heap_generate_call_8_p_0((MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__V_110_110, ml_backend__add_heap_ops__ModuleInfo_40, ml_backend__add_heap_ops__Context_131, &ml_backend__add_heap_ops__ThenGoal_41);
                }
#line 171 "add_heap_ops.m"
              }
#line 179 "add_heap_ops.m"
            else
#line 184 "add_heap_ops.m"
              ml_backend__add_heap_ops__ThenGoal_41 = ml_backend__add_heap_ops__Fail_39;
#line 186 "add_heap_ops.m"
            {
#line 186 "add_heap_ops.m"
              ml_backend__add_heap_ops__NewOuterGoal_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 186 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 2) = ((MR_Box) (ml_backend__add_heap_ops__InnerGoal_31));
#line 186 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 3) = ((MR_Box) (ml_backend__add_heap_ops__ThenGoal_41));
#line 186 "add_heap_ops.m"
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 4) = ((MR_Box) (ml_backend__add_heap_ops__True_38));
#line 186 "add_heap_ops.m"
            }
#line 187 "add_heap_ops.m"
            /* direct tailcall eliminated */
#line 187 "add_heap_ops.m"
            {
#line 187 "add_heap_ops.m"
              MR_Word ml_backend__add_heap_ops__GoalExpr0__tmp_copy_6 = ml_backend__add_heap_ops__NewOuterGoal_42;

#line 187 "add_heap_ops.m"
              ml_backend__add_heap_ops__GoalExpr0_6 = ml_backend__add_heap_ops__GoalExpr0__tmp_copy_6;
#line 187 "add_heap_ops.m"
            }
#line 187 "add_heap_ops.m"
            continue;
#line 158 "add_heap_ops.m"
          }
#line 108 "add_heap_ops.m"
        else
#line 108 "add_heap_ops.m"
          if (((((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 236 "add_heap_ops.m"
            {
#line 237 "add_heap_ops.m"
              {
#line 237 "add_heap_ops.m"
                MR_Word base;
#line 237 "add_heap_ops.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 237 "add_heap_ops.m"
                *ml_backend__add_heap_ops__Goal_8 = base;
#line 237 "add_heap_ops.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr0_6));
#line 237 "add_heap_ops.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 237 "add_heap_ops.m"
              }
#line 237 "add_heap_ops.m"
              *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
#line 236 "add_heap_ops.m"
            }
#line 108 "add_heap_ops.m"
          else
#line 108 "add_heap_ops.m"
            if (((((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 108 "add_heap_ops.m"
              {
#line 108 "add_heap_ops.m"
                MR_Word ml_backend__add_heap_ops__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 108 "add_heap_ops.m"
                MR_Word ml_backend__add_heap_ops__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 108 "add_heap_ops.m"
                MR_Word ml_backend__add_heap_ops__Goals_12;
#line 108 "add_heap_ops.m"
                MR_Word ml_backend__add_heap_ops__GoalExpr_13;

#line 109 "add_heap_ops.m"
                {
#line 109 "add_heap_ops.m"
                  ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(ml_backend__add_heap_ops__Goals0_11, &ml_backend__add_heap_ops__Goals_12, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                }
#line 110 "add_heap_ops.m"
                {
#line 110 "add_heap_ops.m"
                  ml_backend__add_heap_ops__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 110 "add_heap_ops.m"
                  MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 110 "add_heap_ops.m"
                  MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_13, 1) = ((MR_Box) (ml_backend__add_heap_ops__ConjType_10));
#line 110 "add_heap_ops.m"
                  MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_13, 2) = ((MR_Box) (ml_backend__add_heap_ops__Goals_12));
#line 110 "add_heap_ops.m"
                }
#line 111 "add_heap_ops.m"
                {
#line 111 "add_heap_ops.m"
                  MR_Word base;
#line 111 "add_heap_ops.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "add_heap_ops.m"
                  *ml_backend__add_heap_ops__Goal_8 = base;
#line 111 "add_heap_ops.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_13));
#line 111 "add_heap_ops.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 111 "add_heap_ops.m"
                }
#line 108 "add_heap_ops.m"
              }
#line 108 "add_heap_ops.m"
            else
#line 108 "add_heap_ops.m"
              if (((((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 113 "add_heap_ops.m"
                {
#line 113 "add_heap_ops.m"
                  MR_Word ml_backend__add_heap_ops__Disjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 113 "add_heap_ops.m"
                  MR_Word ml_backend__add_heap_ops__GoalExpr_129;

#line 117 "add_heap_ops.m"
                  if ((ml_backend__add_heap_ops__Disjuncts0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "add_heap_ops.m"
                    {
#line 116 "add_heap_ops.m"
                      ml_backend__add_heap_ops__GoalExpr_129 = ml_backend__add_heap_ops__GoalExpr0_6;
#line 116 "add_heap_ops.m"
                      *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
#line 115 "add_heap_ops.m"
                    }
#line 117 "add_heap_ops.m"
                  else
#line 118 "add_heap_ops.m"
                    {
#line 118 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__FirstDisjunct0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Disjuncts0_14, (MR_Integer) 0)));
#line 118 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__Context_17;
#line 118 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__CodeModel_18;
#line 118 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Disjuncts0_14, (MR_Integer) 1)));

#line 119 "add_heap_ops.m"
                      {
#line 119 "add_heap_ops.m"
                        ml_backend__add_heap_ops__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                      }
#line 120 "add_heap_ops.m"
                      {
#line 120 "add_heap_ops.m"
                        ml_backend__add_heap_ops__CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                      }
#line 129 "add_heap_ops.m"
                      ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__CodeModel_18 == (MR_Integer) 2);
#line 130 "add_heap_ops.m"
                      if (!(ml_backend__add_heap_ops__succeeded))
#line 130 "add_heap_ops.m"
                        {
#line 130 "add_heap_ops.m"
                          ml_backend__add_heap_ops__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ml_backend__add_heap_ops__FirstDisjunct0_15);
                        }
#line 145 "add_heap_ops.m"
                      if (ml_backend__add_heap_ops__succeeded)
#line 133 "add_heap_ops.m"
                        {
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_19;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__MarkHeapPointerGoal_20;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__Disjuncts_21;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__DisjGoalExpr_22;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__DisjGoal_23;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__ConjGoalExpr_24;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__ConjGoal_25;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__Purity0_26;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_114_114;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_115_115;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__V_117_117;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__V_120_120;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__V_121_121;
#line 133 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__V_123_123;

#line 133 "add_heap_ops.m"
                          {
#line 133 "add_heap_ops.m"
                            ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&ml_backend__add_heap_ops__SavedHeapPointerVar_19, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_114_114);
                          }
#line 134 "add_heap_ops.m"
                          {
#line 134 "add_heap_ops.m"
                            ml_backend__add_heap_ops__gen_mark_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_19, ml_backend__add_heap_ops__Context_17, &ml_backend__add_heap_ops__MarkHeapPointerGoal_20, ml_backend__add_heap_ops__STATE_VARIABLE_Info_114_114, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_115_115);
                          }
#line 136 "add_heap_ops.m"
                          {
#line 136 "add_heap_ops.m"
                            ml_backend__add_heap_ops__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 136 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_117_117, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_19));
#line 136 "add_heap_ops.m"
                          }
#line 136 "add_heap_ops.m"
                          {
#line 136 "add_heap_ops.m"
                            ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Disjuncts0_14, &ml_backend__add_heap_ops__Disjuncts_21, (MR_Integer) 0, ml_backend__add_heap_ops__V_117_117, ml_backend__add_heap_ops__GoalInfo0_7, ml_backend__add_heap_ops__STATE_VARIABLE_Info_115_115, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                          }
#line 138 "add_heap_ops.m"
                          {
#line 138 "add_heap_ops.m"
                            ml_backend__add_heap_ops__DisjGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__DisjGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 138 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__DisjGoalExpr_22, 1) = ((MR_Box) (ml_backend__add_heap_ops__Disjuncts_21));
#line 138 "add_heap_ops.m"
                          }
#line 139 "add_heap_ops.m"
                          {
#line 139 "add_heap_ops.m"
                            ml_backend__add_heap_ops__DisjGoal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 139 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__DisjGoal_23, 0) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalExpr_22));
#line 139 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__DisjGoal_23, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 139 "add_heap_ops.m"
                          }
#line 141 "add_heap_ops.m"
                          {
#line 141 "add_heap_ops.m"
                            ml_backend__add_heap_ops__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_121_121, 0) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoal_23));
#line 141 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "add_heap_ops.m"
                          }
#line 140 "add_heap_ops.m"
                          {
#line 140 "add_heap_ops.m"
                            ml_backend__add_heap_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_120_120, 0) = ((MR_Box) (ml_backend__add_heap_ops__MarkHeapPointerGoal_20));
#line 140 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_120_120, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_121_121));
#line 140 "add_heap_ops.m"
                          }
#line 140 "add_heap_ops.m"
                          {
#line 140 "add_heap_ops.m"
                            ml_backend__add_heap_ops__ConjGoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 140 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 140 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_24, 1) = ((MR_Box) ((MR_Integer) 0));
#line 140 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_24, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_120_120));
#line 140 "add_heap_ops.m"
                          }
#line 142 "add_heap_ops.m"
                          {
#line 142 "add_heap_ops.m"
                            ml_backend__add_heap_ops__ConjGoal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_25, 0) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoalExpr_24));
#line 142 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_25, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 142 "add_heap_ops.m"
                          }
#line 143 "add_heap_ops.m"
                          {
#line 143 "add_heap_ops.m"
                            ml_backend__add_heap_ops__Purity0_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                          }
#line 144 "add_heap_ops.m"
                          {
#line 144 "add_heap_ops.m"
                            ml_backend__add_heap_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 144 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(2), ml_backend__add_heap_ops__V_123_123, 0) = ((MR_Box) (ml_backend__add_heap_ops__Purity0_26));
#line 144 "add_heap_ops.m"
                          }
#line 144 "add_heap_ops.m"
                          {
#line 144 "add_heap_ops.m"
                            ml_backend__add_heap_ops__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 144 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 144 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_123_123));
#line 144 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 2) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoal_25));
#line 144 "add_heap_ops.m"
                          }
#line 133 "add_heap_ops.m"
                        }
#line 145 "add_heap_ops.m"
                      else
#line 147 "add_heap_ops.m"
                        {
#line 147 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__Disjuncts_128;

#line 146 "add_heap_ops.m"
                          {
#line 146 "add_heap_ops.m"
                            ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Disjuncts0_14, &ml_backend__add_heap_ops__Disjuncts_128, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__GoalInfo0_7, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                          }
#line 148 "add_heap_ops.m"
                          {
#line 148 "add_heap_ops.m"
                            ml_backend__add_heap_ops__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 148 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 1) = ((MR_Box) (ml_backend__add_heap_ops__Disjuncts_128));
#line 148 "add_heap_ops.m"
                          }
#line 147 "add_heap_ops.m"
                        }
#line 118 "add_heap_ops.m"
                    }
#line 151 "add_heap_ops.m"
                  {
#line 151 "add_heap_ops.m"
                    MR_Word base;
#line 151 "add_heap_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 151 "add_heap_ops.m"
                    *ml_backend__add_heap_ops__Goal_8 = base;
#line 151 "add_heap_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_129));
#line 151 "add_heap_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 151 "add_heap_ops.m"
                  }
#line 113 "add_heap_ops.m"
                }
#line 108 "add_heap_ops.m"
              else
#line 108 "add_heap_ops.m"
                if (((((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 198 "add_heap_ops.m"
                  {
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__CondGoal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__ThenGoal0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 3)));
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__ElseGoal0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 4)));
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__CondGoal_51;
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__ElseGoal1_52;
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_89_89;
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_90_90;
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91;
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__GoalExpr_145;
#line 198 "add_heap_ops.m"
                    MR_Word ml_backend__add_heap_ops__ThenGoal_152;

#line 199 "add_heap_ops.m"
                    {
#line 199 "add_heap_ops.m"
                      ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__CondGoal0_48, &ml_backend__add_heap_ops__CondGoal_51, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_89_89);
                    }
#line 200 "add_heap_ops.m"
                    {
#line 200 "add_heap_ops.m"
                      ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__ThenGoal0_49, &ml_backend__add_heap_ops__ThenGoal_152, ml_backend__add_heap_ops__STATE_VARIABLE_Info_89_89, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_90_90);
                    }
#line 201 "add_heap_ops.m"
                    {
#line 201 "add_heap_ops.m"
                      ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__ElseGoal0_50, &ml_backend__add_heap_ops__ElseGoal1_52, ml_backend__add_heap_ops__STATE_VARIABLE_Info_90_90, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91);
                    }
#line 205 "add_heap_ops.m"
                    {
#line 205 "add_heap_ops.m"
                      ml_backend__add_heap_ops__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ml_backend__add_heap_ops__CondGoal0_48);
                    }
#line 225 "add_heap_ops.m"
                    if (ml_backend__add_heap_ops__succeeded)
#line 206 "add_heap_ops.m"
                      {
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__RestoreHeapPointerGoal_53;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__ElseGoal1Info_55;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__ElseGoalExpr_56;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__ElseGoal_57;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__ITEGoalExpr_58;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__ITEGoal_59;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_92_92;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_93_93;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__V_96_96;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__V_97_97;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__V_100_100;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__V_101_101;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__V_103_103;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__Context_133;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_134;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__MarkHeapPointerGoal_135;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__ConjGoalExpr_136;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__ConjGoal_137;
#line 206 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__Purity0_138;
#line 215 "add_heap_ops.m"
                        MR_Word ml_backend__add_heap_ops__V_54_54;

#line 206 "add_heap_ops.m"
                        {
#line 206 "add_heap_ops.m"
                          ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&ml_backend__add_heap_ops__SavedHeapPointerVar_134, ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_92_92);
                        }
#line 207 "add_heap_ops.m"
                        {
#line 207 "add_heap_ops.m"
                          ml_backend__add_heap_ops__Context_133 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                        }
#line 208 "add_heap_ops.m"
                        {
#line 208 "add_heap_ops.m"
                          ml_backend__add_heap_ops__gen_mark_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_134, ml_backend__add_heap_ops__Context_133, &ml_backend__add_heap_ops__MarkHeapPointerGoal_135, ml_backend__add_heap_ops__STATE_VARIABLE_Info_92_92, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_93_93);
                        }
#line 213 "add_heap_ops.m"
                        {
#line 213 "add_heap_ops.m"
                          ml_backend__add_heap_ops__gen_restore_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_134, ml_backend__add_heap_ops__Context_133, &ml_backend__add_heap_ops__RestoreHeapPointerGoal_53, ml_backend__add_heap_ops__STATE_VARIABLE_Info_93_93, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                        }
#line 215 "add_heap_ops.m"
                        ml_backend__add_heap_ops__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal1_52, (MR_Integer) 0)));
#line 215 "add_heap_ops.m"
                        ml_backend__add_heap_ops__ElseGoal1Info_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal1_52, (MR_Integer) 1)));
#line 217 "add_heap_ops.m"
                        {
#line 217 "add_heap_ops.m"
                          ml_backend__add_heap_ops__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_97_97, 0) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal1_52));
#line 217 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "add_heap_ops.m"
                        }
#line 216 "add_heap_ops.m"
                        {
#line 216 "add_heap_ops.m"
                          ml_backend__add_heap_ops__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_96_96, 0) = ((MR_Box) (ml_backend__add_heap_ops__RestoreHeapPointerGoal_53));
#line 216 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_96_96, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_97_97));
#line 216 "add_heap_ops.m"
                        }
#line 216 "add_heap_ops.m"
                        {
#line 216 "add_heap_ops.m"
                          ml_backend__add_heap_ops__ElseGoalExpr_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 216 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ElseGoalExpr_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 216 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ElseGoalExpr_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 216 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ElseGoalExpr_56, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_96_96));
#line 216 "add_heap_ops.m"
                        }
#line 218 "add_heap_ops.m"
                        {
#line 218 "add_heap_ops.m"
                          ml_backend__add_heap_ops__ElseGoal_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal_57, 0) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoalExpr_56));
#line 218 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal_57, 1) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal1Info_55));
#line 218 "add_heap_ops.m"
                        }
#line 219 "add_heap_ops.m"
                        {
#line 219 "add_heap_ops.m"
                          ml_backend__add_heap_ops__ITEGoalExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 219 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 219 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 1) = ((MR_Box) (ml_backend__add_heap_ops__Vars_47));
#line 219 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 2) = ((MR_Box) (ml_backend__add_heap_ops__CondGoal_51));
#line 219 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 3) = ((MR_Box) (ml_backend__add_heap_ops__ThenGoal_152));
#line 219 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 4) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal_57));
#line 219 "add_heap_ops.m"
                        }
#line 220 "add_heap_ops.m"
                        {
#line 220 "add_heap_ops.m"
                          ml_backend__add_heap_ops__ITEGoal_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ITEGoal_59, 0) = ((MR_Box) (ml_backend__add_heap_ops__ITEGoalExpr_58));
#line 220 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ITEGoal_59, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 220 "add_heap_ops.m"
                        }
#line 221 "add_heap_ops.m"
                        {
#line 221 "add_heap_ops.m"
                          ml_backend__add_heap_ops__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_101_101, 0) = ((MR_Box) (ml_backend__add_heap_ops__ITEGoal_59));
#line 221 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "add_heap_ops.m"
                        }
#line 221 "add_heap_ops.m"
                        {
#line 221 "add_heap_ops.m"
                          ml_backend__add_heap_ops__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_100_100, 0) = ((MR_Box) (ml_backend__add_heap_ops__MarkHeapPointerGoal_135));
#line 221 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_100_100, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_101_101));
#line 221 "add_heap_ops.m"
                        }
#line 221 "add_heap_ops.m"
                        {
#line 221 "add_heap_ops.m"
                          ml_backend__add_heap_ops__ConjGoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 221 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 221 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_136, 1) = ((MR_Box) ((MR_Integer) 0));
#line 221 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_136, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_100_100));
#line 221 "add_heap_ops.m"
                        }
#line 222 "add_heap_ops.m"
                        {
#line 222 "add_heap_ops.m"
                          ml_backend__add_heap_ops__ConjGoal_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_137, 0) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoalExpr_136));
#line 222 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_137, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 222 "add_heap_ops.m"
                        }
#line 223 "add_heap_ops.m"
                        {
#line 223 "add_heap_ops.m"
                          ml_backend__add_heap_ops__Purity0_138 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                        }
#line 224 "add_heap_ops.m"
                        {
#line 224 "add_heap_ops.m"
                          ml_backend__add_heap_ops__V_103_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(2), ml_backend__add_heap_ops__V_103_103, 0) = ((MR_Box) (ml_backend__add_heap_ops__Purity0_138));
#line 224 "add_heap_ops.m"
                        }
#line 224 "add_heap_ops.m"
                        {
#line 224 "add_heap_ops.m"
                          ml_backend__add_heap_ops__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 224 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 224 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_103_103));
#line 224 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 2) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoal_137));
#line 224 "add_heap_ops.m"
                        }
#line 206 "add_heap_ops.m"
                      }
#line 225 "add_heap_ops.m"
                    else
#line 226 "add_heap_ops.m"
                      {
#line 226 "add_heap_ops.m"
                        {
#line 226 "add_heap_ops.m"
                          ml_backend__add_heap_ops__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 226 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 1) = ((MR_Box) (ml_backend__add_heap_ops__Vars_47));
#line 226 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 2) = ((MR_Box) (ml_backend__add_heap_ops__CondGoal_51));
#line 226 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 3) = ((MR_Box) (ml_backend__add_heap_ops__ThenGoal_152));
#line 226 "add_heap_ops.m"
                          MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 4) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal1_52));
#line 226 "add_heap_ops.m"
                        }
#line 226 "add_heap_ops.m"
                        *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91;
#line 226 "add_heap_ops.m"
                      }
#line 228 "add_heap_ops.m"
                    {
#line 228 "add_heap_ops.m"
                      MR_Word base;
#line 228 "add_heap_ops.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "add_heap_ops.m"
                      *ml_backend__add_heap_ops__Goal_8 = base;
#line 228 "add_heap_ops.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_145));
#line 228 "add_heap_ops.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 228 "add_heap_ops.m"
                    }
#line 198 "add_heap_ops.m"
                  }
#line 108 "add_heap_ops.m"
                else
#line 108 "add_heap_ops.m"
                  if (((((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 189 "add_heap_ops.m"
                    {
#line 189 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 189 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 189 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__SubGoal_46;
#line 189 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__GoalExpr_132;
#line 190 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__V_104_104;
#line 190 "add_heap_ops.m"
                      MR_Word ml_backend__add_heap_ops__V_45_45;

#line 190 "add_heap_ops.m"
                      ml_backend__add_heap_ops__succeeded = ((((MR_tag((MR_Word) ml_backend__add_heap_ops__Reason_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__Reason_43, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 190 "add_heap_ops.m"
                      if (ml_backend__add_heap_ops__succeeded)
#line 190 "add_heap_ops.m"
                        {
#line 190 "add_heap_ops.m"
                          ml_backend__add_heap_ops__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__Reason_43, (MR_Integer) 1)));
#line 190 "add_heap_ops.m"
                          ml_backend__add_heap_ops__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__Reason_43, (MR_Integer) 2)));
#line 190 "add_heap_ops.m"
                          ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__V_104_104 == (MR_Integer) 1);
#line 190 "add_heap_ops.m"
                        }
#line 192 "add_heap_ops.m"
                      if (ml_backend__add_heap_ops__succeeded)
#line 191 "add_heap_ops.m"
                        {
#line 191 "add_heap_ops.m"
                          ml_backend__add_heap_ops__SubGoal_46 = ml_backend__add_heap_ops__SubGoal0_44;
#line 191 "add_heap_ops.m"
                          *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
#line 191 "add_heap_ops.m"
                        }
#line 192 "add_heap_ops.m"
                      else
#line 193 "add_heap_ops.m"
                        {
#line 193 "add_heap_ops.m"
                          ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__SubGoal0_44, &ml_backend__add_heap_ops__SubGoal_46, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                        }
#line 195 "add_heap_ops.m"
                      {
#line 195 "add_heap_ops.m"
                        ml_backend__add_heap_ops__GoalExpr_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 195 "add_heap_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 195 "add_heap_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_132, 1) = ((MR_Box) (ml_backend__add_heap_ops__Reason_43));
#line 195 "add_heap_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_132, 2) = ((MR_Box) (ml_backend__add_heap_ops__SubGoal_46));
#line 195 "add_heap_ops.m"
                      }
#line 196 "add_heap_ops.m"
                      {
#line 196 "add_heap_ops.m"
                        MR_Word base;
#line 196 "add_heap_ops.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "add_heap_ops.m"
                        *ml_backend__add_heap_ops__Goal_8 = base;
#line 196 "add_heap_ops.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_132));
#line 196 "add_heap_ops.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 196 "add_heap_ops.m"
                      }
#line 189 "add_heap_ops.m"
                    }
#line 108 "add_heap_ops.m"
                  else
#line 108 "add_heap_ops.m"
                    if (((((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 239 "add_heap_ops.m"
                      {
#line 241 "add_heap_ops.m"
                        {
#line 241 "add_heap_ops.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.add_heap_ops", (MR_String) "predicate \140ml_backend.add_heap_ops.goal_expr_add_heap_ops\'/5", (MR_String) "shorthand");
#line 241 "add_heap_ops.m"
                          return;
                        }
#line 239 "add_heap_ops.m"
                      }
#line 108 "add_heap_ops.m"
                    else
#line 108 "add_heap_ops.m"
                      if (((((MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 153 "add_heap_ops.m"
                        {
#line 153 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 153 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 153 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__Cases0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 3)));
#line 153 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__Cases_30;
#line 153 "add_heap_ops.m"
                          MR_Word ml_backend__add_heap_ops__GoalExpr_130;

#line 154 "add_heap_ops.m"
                          {
#line 154 "add_heap_ops.m"
                            ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(ml_backend__add_heap_ops__Cases0_29, &ml_backend__add_heap_ops__Cases_30, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                          }
#line 155 "add_heap_ops.m"
                          {
#line 155 "add_heap_ops.m"
                            ml_backend__add_heap_ops__GoalExpr_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 155 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 155 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 1) = ((MR_Box) (ml_backend__add_heap_ops__Var_27));
#line 155 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 2) = ((MR_Box) (ml_backend__add_heap_ops__CanFail_28));
#line 155 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 3) = ((MR_Box) (ml_backend__add_heap_ops__Cases_30));
#line 155 "add_heap_ops.m"
                          }
#line 156 "add_heap_ops.m"
                          {
#line 156 "add_heap_ops.m"
                            MR_Word base;
#line 156 "add_heap_ops.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 156 "add_heap_ops.m"
                            *ml_backend__add_heap_ops__Goal_8 = base;
#line 156 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_130));
#line 156 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 156 "add_heap_ops.m"
                          }
#line 153 "add_heap_ops.m"
                        }
#line 108 "add_heap_ops.m"
                      else
#line 233 "add_heap_ops.m"
                        {
#line 234 "add_heap_ops.m"
                          {
#line 234 "add_heap_ops.m"
                            MR_Word base;
#line 234 "add_heap_ops.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "add_heap_ops.m"
                            *ml_backend__add_heap_ops__Goal_8 = base;
#line 234 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr0_6));
#line 234 "add_heap_ops.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
#line 234 "add_heap_ops.m"
                          }
#line 234 "add_heap_ops.m"
                          *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
#line 233 "add_heap_ops.m"
                        }
#line 108 "add_heap_ops.m"
      }
#line 108 "add_heap_ops.m"
      break;
#line 108 "add_heap_ops.m"
    }
#line 103 "add_heap_ops.m"
}

#line 96 "add_heap_ops.m"
static void MR_CALL 
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
#line 96 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__Goal0_5,
#line 96 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__Goal_6,
#line 96 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
#line 96 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11)
#line 96 "add_heap_ops.m"
{
#line 99 "add_heap_ops.m"
  {
#line 99 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 99 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_5, (MR_Integer) 0)));
#line 99 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_5, (MR_Integer) 1)));

#line 101 "add_heap_ops.m"
    {
#line 101 "add_heap_ops.m"
      ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_8, ml_backend__add_heap_ops__GoalInfo_9, ml_backend__add_heap_ops__Goal_6, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);
#line 101 "add_heap_ops.m"
      return;
    }
#line 99 "add_heap_ops.m"
  }
#line 96 "add_heap_ops.m"
}

#line 37 "add_heap_ops.m"
void MR_CALL 
ml_backend__add_heap_ops__add_heap_ops_3_p_0(
#line 37 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__ModuleInfo0_4,
#line 37 "add_heap_ops.m"
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15,
#line 37 "add_heap_ops.m"
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Proc_16)
#line 37 "add_heap_ops.m"
{
#line 80 "add_heap_ops.m"
  {
#line 80 "add_heap_ops.m"
    MR_bool ml_backend__add_heap_ops__succeeded;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__Goal0_6;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarSet0_7;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarTypes0_8;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__TrailOpsInfo0_9;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__Goal_10;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__TrailOpsInfo_11;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarSet_12;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__VarTypes_13;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_17_17;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_18_18;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_19_19;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__GoalExpr0_27;
#line 80 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__GoalInfo_28;
#line 86 "add_heap_ops.m"
    MR_Word ml_backend__add_heap_ops__V_14_14;

#line 81 "add_heap_ops.m"
    {
#line 81 "add_heap_ops.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__Goal0_6);
    }
#line 82 "add_heap_ops.m"
    {
#line 82 "add_heap_ops.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__VarSet0_7);
    }
#line 83 "add_heap_ops.m"
    {
#line 83 "add_heap_ops.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__VarTypes0_8);
    }
#line 84 "add_heap_ops.m"
    {
#line 84 "add_heap_ops.m"
      ml_backend__add_heap_ops__TrailOpsInfo0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 84 "add_heap_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo0_9, 0) = ((MR_Box) (ml_backend__add_heap_ops__VarSet0_7));
#line 84 "add_heap_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo0_9, 1) = ((MR_Box) (ml_backend__add_heap_ops__VarTypes0_8));
#line 84 "add_heap_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo0_9, 2) = ((MR_Box) (ml_backend__add_heap_ops__ModuleInfo0_4));
#line 84 "add_heap_ops.m"
    }
#line 100 "add_heap_ops.m"
    ml_backend__add_heap_ops__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_6, (MR_Integer) 0)));
#line 100 "add_heap_ops.m"
    ml_backend__add_heap_ops__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_6, (MR_Integer) 1)));
#line 101 "add_heap_ops.m"
    {
#line 101 "add_heap_ops.m"
      ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_27, ml_backend__add_heap_ops__GoalInfo_28, &ml_backend__add_heap_ops__Goal_10, ml_backend__add_heap_ops__TrailOpsInfo0_9, &ml_backend__add_heap_ops__TrailOpsInfo_11);
    }
#line 86 "add_heap_ops.m"
    ml_backend__add_heap_ops__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo_11, (MR_Integer) 0)));
#line 86 "add_heap_ops.m"
    ml_backend__add_heap_ops__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo_11, (MR_Integer) 1)));
#line 86 "add_heap_ops.m"
    ml_backend__add_heap_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo_11, (MR_Integer) 2)));
#line 87 "add_heap_ops.m"
    {
#line 87 "add_heap_ops.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ml_backend__add_heap_ops__Goal_10, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__STATE_VARIABLE_Proc_17_17);
    }
#line 88 "add_heap_ops.m"
    {
#line 88 "add_heap_ops.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ml_backend__add_heap_ops__VarSet_12, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_17_17, &ml_backend__add_heap_ops__STATE_VARIABLE_Proc_18_18);
    }
#line 89 "add_heap_ops.m"
    {
#line 89 "add_heap_ops.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ml_backend__add_heap_ops__VarTypes_13, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_18_18, &ml_backend__add_heap_ops__STATE_VARIABLE_Proc_19_19);
    }
#line 94 "add_heap_ops.m"
    {
#line 94 "add_heap_ops.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_19_19, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_16);
#line 94 "add_heap_ops.m"
      return;
    }
#line 80 "add_heap_ops.m"
  }
#line 37 "add_heap_ops.m"
}

void mercury__ml_backend__add_heap_ops__init(void)
{
}

void mercury__ml_backend__add_heap_ops__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0);
}

void mercury__ml_backend__add_heap_ops__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.add_heap_ops. */
