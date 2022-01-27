/*
** Automatically generated from `add_heap_ops.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module ml_backend.add_heap_ops. */
/* :- implementation. */

/*
INIT mercury__ml_backend__add_heap_ops__init
ENDINIT
*/

#include "ml_backend.add_heap_ops.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[3];

static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1];

static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1];

static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1];

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2);

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_1,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3);

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
  MR_Word * ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2,
  MR_Word ml_backend__add_heap_ops__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2);

static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
  MR_String ml_backend__add_heap_ops__PredName_9,
  MR_Word ml_backend__add_heap_ops__Detism_10,
  MR_Word ml_backend__add_heap_ops__Purity_11,
  MR_Word ml_backend__add_heap_ops__Args_12,
  MR_Word ml_backend__add_heap_ops__InstMapDelta_13,
  MR_Word ml_backend__add_heap_ops__ModuleInfo_14,
  MR_Word ml_backend__add_heap_ops__Context_15,
  MR_Word * ml_backend__add_heap_ops__CallGoal_16);

static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
  MR_Word * ml_backend__add_heap_ops__Var_4,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_5_p_0(
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
  MR_Word ml_backend__add_heap_ops__Context_7,
  MR_Word * ml_backend__add_heap_ops__RestoreHeapPointerGoal_8,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_5_p_0(
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
  MR_Word ml_backend__add_heap_ops__Context_7,
  MR_Word * ml_backend__add_heap_ops__MarkHeapPointerGoal_8,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_4);

static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
  MR_Word ml_backend__add_heap_ops__IsFirstBranch_3,
  MR_Word ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4,
  MR_Word ml_backend__add_heap_ops__DisjGoalInfo_5,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
  MR_Box ml_backend__add_heap_ops__closure_arg,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_2,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3,
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_4);

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
  MR_Word ml_backend__add_heap_ops__Goals0_5,
  MR_Word * ml_backend__add_heap_ops__Goals_6,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_9);

static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
  MR_Word ml_backend__add_heap_ops__GoalExpr0_6,
  MR_Word ml_backend__add_heap_ops__GoalInfo0_7,
  MR_Word * ml_backend__add_heap_ops__Goal_8,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);

static void MR_CALL 
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
  MR_Word ml_backend__add_heap_ops__Goal0_5,
  MR_Word * ml_backend__add_heap_ops__Goal_6,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);


static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[2][3];

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_3[1][7];




static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__add_heap_ops_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__add_heap_ops_scalar_common_3[0])),
    ((MR_Box) (ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_3[1][7] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[3] = {
  (MR_String) "heap_varset",
  (MR_String) "heap_var_types",
  (MR_String) "heap_module_info"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1] = {
  &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0
};

static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1] = {
  &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0
};

static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001)),
  ((MR_Box) (ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001)),
  (MR_String) "ml_backend.add_heap_ops",
  (MR_String) "heap_ops_info",
  {     ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0 },
  {     ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0
};

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;

    {
      ml_backend__add_heap_ops__succeeded = ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(((MR_Word) ml_backend__add_heap_ops__wrapper_arg_1), ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_2));
    }
    return ml_backend__add_heap_ops__succeeded;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_1,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_2,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3)
{
  {
    MR_Word ml_backend__add_heap_ops__conv0_HeadVar__1_1;

    {
      ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(&ml_backend__add_heap_ops__conv0_HeadVar__1_1, ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_2), ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_3));
    }
    *ml_backend__add_heap_ops__wrapper_arg_1 = ((MR_Box) (ml_backend__add_heap_ops__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
  MR_Word * ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2,
  MR_Word ml_backend__add_heap_ops__HeadVar__3_3)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Integer ml_backend__add_heap_ops__CastX_12 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__2_2;
    MR_Integer ml_backend__add_heap_ops__CastY_13 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__3_3;

    ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__CastX_12 == ml_backend__add_heap_ops__CastY_13);
    if (ml_backend__add_heap_ops__succeeded)
      *ml_backend__add_heap_ops__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__add_heap_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__add_heap_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__add_heap_ops__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_heap_ops_scalar_common_1[0], &ml_backend__add_heap_ops__V_10_10, ((MR_Box) (ml_backend__add_heap_ops__V_4_4)), ((MR_Box) (ml_backend__add_heap_ops__V_7_7)));
        }
        ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__V_10_10 == (MR_Integer) 0);
        ml_backend__add_heap_ops__succeeded = !(ml_backend__add_heap_ops__succeeded);
        if (ml_backend__add_heap_ops__succeeded)
          *ml_backend__add_heap_ops__HeadVar__1_1 = ml_backend__add_heap_ops__V_10_10;
        else
          {
            MR_Word ml_backend__add_heap_ops__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_heap_ops_scalar_common_2[0], &ml_backend__add_heap_ops__V_11_11, ((MR_Box) (ml_backend__add_heap_ops__V_5_5)), ((MR_Box) (ml_backend__add_heap_ops__V_8_8)));
            }
            ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__V_11_11 == (MR_Integer) 0);
            ml_backend__add_heap_ops__succeeded = !(ml_backend__add_heap_ops__succeeded);
            if (ml_backend__add_heap_ops__succeeded)
              *ml_backend__add_heap_ops__HeadVar__1_1 = ml_backend__add_heap_ops__V_11_11;
            else
              {
                hlds__hlds_module____Compare____module_info_0_0(ml_backend__add_heap_ops__HeadVar__1_1, ml_backend__add_heap_ops__V_6_6, ml_backend__add_heap_ops__V_9_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word ml_backend__add_heap_ops__HeadVar__2_2)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Integer ml_backend__add_heap_ops__CastX_9 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__1_1;
    MR_Integer ml_backend__add_heap_ops__CastY_10 = (MR_Integer) ml_backend__add_heap_ops__HeadVar__2_2;

    ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__CastX_9 == ml_backend__add_heap_ops__CastY_10);
    if (ml_backend__add_heap_ops__succeeded)
      ml_backend__add_heap_ops__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__add_heap_ops__TypeInfo_12_12;
        MR_Word ml_backend__add_heap_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__add_heap_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__HeadVar__2_2, (MR_Integer) 2)));

        {
          ml_backend__add_heap_ops__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__add_heap_ops_scalar_common_1[0], ((MR_Box) (ml_backend__add_heap_ops__V_3_3)), ((MR_Box) (ml_backend__add_heap_ops__V_6_6)));
        }
        if (ml_backend__add_heap_ops__succeeded)
          {
            ml_backend__add_heap_ops__TypeInfo_12_12 = (MR_Word) &ml_backend__add_heap_ops_scalar_common_2[0];
            {
              ml_backend__add_heap_ops__succeeded = mercury__builtin__unify_2_p_0(ml_backend__add_heap_ops__TypeInfo_12_12, ((MR_Box) (ml_backend__add_heap_ops__V_4_4)), ((MR_Box) (ml_backend__add_heap_ops__V_7_7)));
            }
            if (ml_backend__add_heap_ops__succeeded)
              {
                ml_backend__add_heap_ops__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__add_heap_ops__V_5_5, ml_backend__add_heap_ops__V_8_8);
              }
          }
      }
    return ml_backend__add_heap_ops__succeeded;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
  MR_String ml_backend__add_heap_ops__PredName_9,
  MR_Word ml_backend__add_heap_ops__Detism_10,
  MR_Word ml_backend__add_heap_ops__Purity_11,
  MR_Word ml_backend__add_heap_ops__Args_12,
  MR_Word ml_backend__add_heap_ops__InstMapDelta_13,
  MR_Word ml_backend__add_heap_ops__ModuleInfo_14,
  MR_Word ml_backend__add_heap_ops__Context_15,
  MR_Word * ml_backend__add_heap_ops__CallGoal_16)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Word ml_backend__add_heap_ops__V_17_17;

    {
      ml_backend__add_heap_ops__V_17_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_heap_ops__V_17_17, ml_backend__add_heap_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__Detism_10, ml_backend__add_heap_ops__Purity_11, ml_backend__add_heap_ops__Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__InstMapDelta_13, ml_backend__add_heap_ops__ModuleInfo_14, ml_backend__add_heap_ops__Context_15, ml_backend__add_heap_ops__CallGoal_16);
    }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
  MR_Word * ml_backend__add_heap_ops__Var_4,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Word ml_backend__add_heap_ops__V_9_9;
    MR_Word ml_backend__add_heap_ops__VarSet0_17;
    MR_Word ml_backend__add_heap_ops__VarTypes0_18;
    MR_Word ml_backend__add_heap_ops__VarSet_19;
    MR_Word ml_backend__add_heap_ops__VarTypes_20;
    MR_Word ml_backend__add_heap_ops__V_29_29;
    MR_Word ml_backend__add_heap_ops__V_24_24;
    MR_Word ml_backend__add_heap_ops__V_27_27;
    MR_Word ml_backend__add_heap_ops__V_28_28;

    {
      ml_backend__add_heap_ops__V_9_9 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
    }
    ml_backend__add_heap_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    ml_backend__add_heap_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    ml_backend__add_heap_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "HeapPointer", ml_backend__add_heap_ops__Var_4, ml_backend__add_heap_ops__VarSet0_17, &ml_backend__add_heap_ops__VarSet_19);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ml_backend__add_heap_ops__Var_4, ml_backend__add_heap_ops__V_9_9, ml_backend__add_heap_ops__VarTypes0_18, &ml_backend__add_heap_ops__VarTypes_20);
    }
    ml_backend__add_heap_ops__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    ml_backend__add_heap_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    ml_backend__add_heap_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__add_heap_ops__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__VarSet_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__VarTypes_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_29_29));
    }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_5_p_0(
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
  MR_Word ml_backend__add_heap_ops__Context_7,
  MR_Word * ml_backend__add_heap_ops__RestoreHeapPointerGoal_8,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Word ml_backend__add_heap_ops__V_15_15;
    MR_Word ml_backend__add_heap_ops__V_16_16;
    MR_Word ml_backend__add_heap_ops__V_17_17;
    MR_Word ml_backend__add_heap_ops__V_29_29;
    MR_Word ml_backend__add_heap_ops__V_19_19;
    MR_Word ml_backend__add_heap_ops__V_20_20;

    {
      ml_backend__add_heap_ops__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_6));
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__add_heap_ops__V_16_16 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    ml_backend__add_heap_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    ml_backend__add_heap_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    ml_backend__add_heap_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    {
      ml_backend__add_heap_ops__V_29_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_heap_ops__V_29_29, (MR_String) "restore_hp", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_heap_ops__V_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__V_16_16, ml_backend__add_heap_ops__V_17_17, ml_backend__add_heap_ops__Context_7, ml_backend__add_heap_ops__RestoreHeapPointerGoal_8);
    }
    *ml_backend__add_heap_ops__STATE_VARIABLE_Info_11 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_5_p_0(
  MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_6,
  MR_Word ml_backend__add_heap_ops__Context_7,
  MR_Word * ml_backend__add_heap_ops__MarkHeapPointerGoal_8,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Word ml_backend__add_heap_ops__V_15_15;
    MR_Word ml_backend__add_heap_ops__V_16_16;
    MR_Word ml_backend__add_heap_ops__V_17_17;
    MR_Word ml_backend__add_heap_ops__V_29_29;
    MR_Word ml_backend__add_heap_ops__V_19_19;
    MR_Word ml_backend__add_heap_ops__V_20_20;

    {
      ml_backend__add_heap_ops__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_6));
      MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__add_heap_ops__V_16_16 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_heap_ops__SavedHeapPointerVar_6);
    }
    ml_backend__add_heap_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    ml_backend__add_heap_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    ml_backend__add_heap_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    {
      ml_backend__add_heap_ops__V_29_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_heap_ops__V_29_29, (MR_String) "mark_hp", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_heap_ops__V_15_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__V_16_16, ml_backend__add_heap_ops__V_17_17, ml_backend__add_heap_ops__Context_7, ml_backend__add_heap_ops__MarkHeapPointerGoal_8);
    }
    *ml_backend__add_heap_ops__STATE_VARIABLE_Info_11 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_4)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;

    if ((ml_backend__add_heap_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__add_heap_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__add_heap_ops__STATE_VARIABLE_Info_4 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word ml_backend__add_heap_ops__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__Case_10;
        MR_Word ml_backend__add_heap_ops__Cases_11;
        MR_Word ml_backend__add_heap_ops__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case0_8, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case0_8, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case0_8, (MR_Integer) 2)));
        MR_Word ml_backend__add_heap_ops__Goal_16;
        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_19_19;
        MR_Word ml_backend__add_heap_ops__GoalExpr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_15, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_15, (MR_Integer) 1)));

        {
          ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_26, ml_backend__add_heap_ops__GoalInfo_27, &ml_backend__add_heap_ops__Goal_16, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_3, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_19_19);
        }
        {
          ml_backend__add_heap_ops__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case_10, 0) = ((MR_Box) (ml_backend__add_heap_ops__MainConsId_13));
          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case_10, 1) = ((MR_Box) (ml_backend__add_heap_ops__OtherConsIds_14));
          MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Case_10, 2) = ((MR_Box) (ml_backend__add_heap_ops__Goal_16));
        }
        {
          ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(ml_backend__add_heap_ops__Cases0_9, &ml_backend__add_heap_ops__Cases_11, ml_backend__add_heap_ops__STATE_VARIABLE_Info_19_19, ml_backend__add_heap_ops__STATE_VARIABLE_Info_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__add_heap_ops__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__Case_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__Cases_11));
        }
      }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
  MR_Word ml_backend__add_heap_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_heap_ops__HeadVar__2_2,
  MR_Word ml_backend__add_heap_ops__IsFirstBranch_3,
  MR_Word ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4,
  MR_Word ml_backend__add_heap_ops__DisjGoalInfo_5,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;

    if ((ml_backend__add_heap_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__add_heap_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__add_heap_ops__STATE_VARIABLE_Info_7 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6;
      }
    else
      {
        MR_Word ml_backend__add_heap_ops__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__Goal1_21;
        MR_Word ml_backend__add_heap_ops__GoalInfo_23;
        MR_Word ml_backend__add_heap_ops__Context_24;
        MR_Word ml_backend__add_heap_ops__Goal_27;
        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43;
        MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44;
        MR_Word ml_backend__add_heap_ops__GoalExpr0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_14, (MR_Integer) 0)));
        MR_Word ml_backend__add_heap_ops__GoalInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_14, (MR_Integer) 1)));
        MR_Word ml_backend__add_heap_ops__V_22_22;
        MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar0_25;
        MR_Word ml_backend__add_heap_ops__V_28_28;
        MR_Word ml_backend__add_heap_ops__V_29_29;

        {
          ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_67, ml_backend__add_heap_ops__GoalInfo_68, &ml_backend__add_heap_ops__Goal1_21, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_6, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43);
        }
        ml_backend__add_heap_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal1_21, (MR_Integer) 0)));
        ml_backend__add_heap_ops__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal1_21, (MR_Integer) 1)));
        {
          ml_backend__add_heap_ops__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo_23);
        }
        ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__IsFirstBranch_3 == (MR_Integer) 1);
        if (ml_backend__add_heap_ops__succeeded)
          {
            ml_backend__add_heap_ops__succeeded = ((MR_tag((MR_Word) ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__add_heap_ops__succeeded)
              ml_backend__add_heap_ops__SavedHeapPointerVar0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4, (MR_Integer) 0)));
          }
        if (ml_backend__add_heap_ops__succeeded)
          {
            MR_Word ml_backend__add_heap_ops__RestoreHeapPointerGoal_26;
            MR_Word ml_backend__add_heap_ops__V_45_45;
            MR_Word ml_backend__add_heap_ops__V_46_46;

            {
              ml_backend__add_heap_ops__gen_restore_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar0_25, ml_backend__add_heap_ops__Context_24, &ml_backend__add_heap_ops__RestoreHeapPointerGoal_26, ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44);
            }
            {
              ml_backend__add_heap_ops__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_46_46, 0) = ((MR_Box) (ml_backend__add_heap_ops__Goal1_21));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ml_backend__add_heap_ops__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_45_45, 0) = ((MR_Box) (ml_backend__add_heap_ops__RestoreHeapPointerGoal_26));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_45_45, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_46_46));
            }
            {
              hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__add_heap_ops__V_45_45, ml_backend__add_heap_ops__GoalInfo_23, &ml_backend__add_heap_ops__Goal_27);
            }
          }
        else
          {
            ml_backend__add_heap_ops__Goal_27 = ml_backend__add_heap_ops__Goal1_21;
            ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_43_43;
          }
        ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__add_heap_ops__succeeded)
          {
            {
              ml_backend__add_heap_ops__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ml_backend__add_heap_ops__Goal_27);
            }
            if (ml_backend__add_heap_ops__succeeded)
              {
                ml_backend__add_heap_ops__succeeded = ((MR_tag((MR_Word) ml_backend__add_heap_ops__Goals0_15)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__add_heap_ops__succeeded)
                  {
                    ml_backend__add_heap_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Goals0_15, (MR_Integer) 0)));
                    ml_backend__add_heap_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Goals0_15, (MR_Integer) 1)));
                  }
              }
          }
        if (ml_backend__add_heap_ops__succeeded)
          {
            MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_30;
            MR_Word ml_backend__add_heap_ops__MarkHeapPointerGoal_31;
            MR_Word ml_backend__add_heap_ops__Goals1_32;
            MR_Word ml_backend__add_heap_ops__InnerDisjGoalExpr_33;
            MR_Word ml_backend__add_heap_ops__InnerDisjGoal_34;
            MR_Word ml_backend__add_heap_ops__ConjGoalExpr_35;
            MR_Word ml_backend__add_heap_ops__ConjGoal_36;
            MR_Word ml_backend__add_heap_ops__Purity_37;
            MR_Word ml_backend__add_heap_ops__ScopeGoalExpr_38;
            MR_Word ml_backend__add_heap_ops__ScopeGoal_39;
            MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_48_48;
            MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_49_49;
            MR_Word ml_backend__add_heap_ops__V_51_51;
            MR_Word ml_backend__add_heap_ops__V_53_53;
            MR_Word ml_backend__add_heap_ops__V_55_55;
            MR_Word ml_backend__add_heap_ops__V_56_56;
            MR_Word ml_backend__add_heap_ops__V_58_58;

            {
              ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&ml_backend__add_heap_ops__SavedHeapPointerVar_30, ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_48_48);
            }
            {
              ml_backend__add_heap_ops__gen_mark_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_30, ml_backend__add_heap_ops__Context_24, &ml_backend__add_heap_ops__MarkHeapPointerGoal_31, ml_backend__add_heap_ops__STATE_VARIABLE_Info_48_48, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_49_49);
            }
            {
              ml_backend__add_heap_ops__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_51_51, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_30));
            }
            {
              ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Goals0_15, &ml_backend__add_heap_ops__Goals1_32, (MR_Integer) 1, ml_backend__add_heap_ops__V_51_51, ml_backend__add_heap_ops__DisjGoalInfo_5, ml_backend__add_heap_ops__STATE_VARIABLE_Info_49_49, ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);
            }
            {
              ml_backend__add_heap_ops__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_53_53, 0) = ((MR_Box) (ml_backend__add_heap_ops__Goal_27));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_53_53, 1) = ((MR_Box) (ml_backend__add_heap_ops__Goals1_32));
            }
            {
              ml_backend__add_heap_ops__InnerDisjGoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__InnerDisjGoalExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__InnerDisjGoalExpr_33, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_53_53));
            }
            {
              ml_backend__add_heap_ops__InnerDisjGoal_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerDisjGoal_34, 0) = ((MR_Box) (ml_backend__add_heap_ops__InnerDisjGoalExpr_33));
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerDisjGoal_34, 1) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalInfo_5));
            }
            {
              ml_backend__add_heap_ops__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_56_56, 0) = ((MR_Box) (ml_backend__add_heap_ops__InnerDisjGoal_34));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ml_backend__add_heap_ops__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_55_55, 0) = ((MR_Box) (ml_backend__add_heap_ops__MarkHeapPointerGoal_31));
              MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_55_55, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_56_56));
            }
            {
              ml_backend__add_heap_ops__ConjGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_35, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_35, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_55_55));
            }
            {
              ml_backend__add_heap_ops__ConjGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_36, 0) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoalExpr_35));
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_36, 1) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalInfo_5));
            }
            {
              ml_backend__add_heap_ops__Purity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ml_backend__add_heap_ops__DisjGoalInfo_5);
            }
            {
              ml_backend__add_heap_ops__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__V_58_58, 1) = ((MR_Box) (ml_backend__add_heap_ops__Purity_37));
            }
            {
              ml_backend__add_heap_ops__ScopeGoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ScopeGoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ScopeGoalExpr_38, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_58_58));
              MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ScopeGoalExpr_38, 2) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoal_36));
            }
            {
              ml_backend__add_heap_ops__ScopeGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ScopeGoal_39, 0) = ((MR_Box) (ml_backend__add_heap_ops__ScopeGoalExpr_38));
              MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ScopeGoal_39, 1) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalInfo_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__add_heap_ops__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__ScopeGoal_39));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word ml_backend__add_heap_ops__Goals_40;

            {
              ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Goals0_15, &ml_backend__add_heap_ops__Goals_40, (MR_Integer) 1, ml_backend__add_heap_ops__MaybeSavedHeapPointerVar_4, ml_backend__add_heap_ops__DisjGoalInfo_5, ml_backend__add_heap_ops__STATE_VARIABLE_Info_44_44, ml_backend__add_heap_ops__STATE_VARIABLE_Info_7);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__add_heap_ops__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__Goal_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__Goals_40));
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
  MR_Box ml_backend__add_heap_ops__closure_arg,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_1,
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_2,
  MR_Box ml_backend__add_heap_ops__wrapper_arg_3,
  MR_Box * ml_backend__add_heap_ops__wrapper_arg_4)
{
  {
    MR_Box ml_backend__add_heap_ops__closure = ml_backend__add_heap_ops__closure_arg;
    MR_Word ml_backend__add_heap_ops__conv1_Goal_6;
    MR_Word ml_backend__add_heap_ops__conv0_STATE_VARIABLE_Info_11;

    {
      ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(((MR_Word) ml_backend__add_heap_ops__wrapper_arg_1), &ml_backend__add_heap_ops__conv1_Goal_6, ((MR_Word) ml_backend__add_heap_ops__wrapper_arg_3), &ml_backend__add_heap_ops__conv0_STATE_VARIABLE_Info_11);
    }
    *ml_backend__add_heap_ops__wrapper_arg_2 = ((MR_Box) (ml_backend__add_heap_ops__conv1_Goal_6));
    *ml_backend__add_heap_ops__wrapper_arg_4 = ((MR_Box) (ml_backend__add_heap_ops__conv0_STATE_VARIABLE_Info_11));
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
  MR_Word ml_backend__add_heap_ops__Goals0_5,
  MR_Word * ml_backend__add_heap_ops__Goals_6,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Word ml_backend__add_heap_ops__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Box ml_backend__add_heap_ops__conv2_STATE_VARIABLE_Info_9;

    {
      mercury__list__map_foldl_5_p_0(ml_backend__add_heap_ops__TypeCtorInfo_16_16, ml_backend__add_heap_ops__TypeCtorInfo_16_16, (MR_Word) &ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0, (MR_Word) &ml_backend__add_heap_ops_scalar_common_2[1], ml_backend__add_heap_ops__Goals0_5, ml_backend__add_heap_ops__Goals_6, ((MR_Box) (ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_8)), &ml_backend__add_heap_ops__conv2_STATE_VARIABLE_Info_9);
    }
    *ml_backend__add_heap_ops__STATE_VARIABLE_Info_9 = ((MR_Word) ml_backend__add_heap_ops__conv2_STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
  MR_Word ml_backend__add_heap_ops__GoalExpr0_6,
  MR_Word ml_backend__add_heap_ops__GoalInfo0_7,
  MR_Word * ml_backend__add_heap_ops__Goal_8,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_85)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__add_heap_ops__succeeded;

        switch (MR_tag((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__add_heap_ops__InnerGoal_31 = (MR_Word) MR_body(((MR_Word) ml_backend__add_heap_ops__GoalExpr0_6), (MR_Integer) 0);
              MR_Word ml_backend__add_heap_ops__InnerGoalInfo_34;
              MR_Word ml_backend__add_heap_ops__Determinism_35;
              MR_Word ml_backend__add_heap_ops__NumSolns_37;
              MR_Word ml_backend__add_heap_ops__True_38;
              MR_Word ml_backend__add_heap_ops__Fail_39;
              MR_Word ml_backend__add_heap_ops__ModuleInfo_40;
              MR_Word ml_backend__add_heap_ops__ThenGoal_41;
              MR_Word ml_backend__add_heap_ops__NewOuterGoal_42;
              MR_Word ml_backend__add_heap_ops__Context_131;
              MR_Word ml_backend__add_heap_ops__V_33_33;
              MR_Word ml_backend__add_heap_ops___CanFail_36;
              MR_Word ml_backend__add_heap_ops__V_153_153;
              MR_Word ml_backend__add_heap_ops__V_154_154;

              {
                ml_backend__add_heap_ops__Context_131 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
              }
              ml_backend__add_heap_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerGoal_31, (MR_Integer) 0)));
              ml_backend__add_heap_ops__InnerGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__InnerGoal_31, (MR_Integer) 1)));
              {
                ml_backend__add_heap_ops__Determinism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__add_heap_ops__InnerGoalInfo_34);
              }
              {
                parse_tree__prog_data__determinism_components_3_p_0(ml_backend__add_heap_ops__Determinism_35, &ml_backend__add_heap_ops___CanFail_36, &ml_backend__add_heap_ops__NumSolns_37);
              }
              {
                ml_backend__add_heap_ops__True_38 = hlds__make_goal__true_goal_with_context_1_f_0(ml_backend__add_heap_ops__Context_131);
              }
              {
                ml_backend__add_heap_ops__Fail_39 = hlds__make_goal__fail_goal_with_context_1_f_0(ml_backend__add_heap_ops__Context_131);
              }
              ml_backend__add_heap_ops__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, (MR_Integer) 0)));
              ml_backend__add_heap_ops__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, (MR_Integer) 1)));
              ml_backend__add_heap_ops__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, (MR_Integer) 2)));
              switch (ml_backend__add_heap_ops__NumSolns_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  ml_backend__add_heap_ops__ThenGoal_41 = ml_backend__add_heap_ops__Fail_39;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__add_heap_ops__V_110_110;

                    {
                      ml_backend__add_heap_ops__V_110_110 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                    }
                    {
                      ml_backend__add_heap_ops__heap_generate_call_8_p_0((MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__V_110_110, ml_backend__add_heap_ops__ModuleInfo_40, ml_backend__add_heap_ops__Context_131, &ml_backend__add_heap_ops__ThenGoal_41);
                    }
                  }
                  break;
              }
              {
                ml_backend__add_heap_ops__NewOuterGoal_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 2) = ((MR_Box) (ml_backend__add_heap_ops__InnerGoal_31));
                MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 3) = ((MR_Box) (ml_backend__add_heap_ops__ThenGoal_41));
                MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__NewOuterGoal_42, 4) = ((MR_Box) (ml_backend__add_heap_ops__True_38));
              }
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__add_heap_ops__GoalExpr0__tmp_copy_6 = ml_backend__add_heap_ops__NewOuterGoal_42;

                ml_backend__add_heap_ops__GoalExpr0_6 = ml_backend__add_heap_ops__GoalExpr0__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ml_backend__add_heap_ops__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr0_6));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
              }
              *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_heap_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr0_6));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                  }
                  *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_heap_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr0_6));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                  }
                  *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__add_heap_ops__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_heap_ops__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_heap_ops__Goals_12;
                  MR_Word ml_backend__add_heap_ops__GoalExpr_13;

                  {
                    ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(ml_backend__add_heap_ops__Goals0_11, &ml_backend__add_heap_ops__Goals_12, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                  }
                  {
                    ml_backend__add_heap_ops__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_13, 1) = ((MR_Box) (ml_backend__add_heap_ops__ConjType_10));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_13, 2) = ((MR_Box) (ml_backend__add_heap_ops__Goals_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_heap_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_13));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__add_heap_ops__Disjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_heap_ops__GoalExpr_129;

                  if ((ml_backend__add_heap_ops__Disjuncts0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      ml_backend__add_heap_ops__GoalExpr_129 = ml_backend__add_heap_ops__GoalExpr0_6;
                      *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
                    }
                  else
                    {
                      MR_Word ml_backend__add_heap_ops__FirstDisjunct0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Disjuncts0_14, (MR_Integer) 0)));
                      MR_Word ml_backend__add_heap_ops__Context_17;
                      MR_Word ml_backend__add_heap_ops__CodeModel_18;
                      MR_Word ml_backend__add_heap_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__Disjuncts0_14, (MR_Integer) 1)));

                      {
                        ml_backend__add_heap_ops__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                      }
                      {
                        ml_backend__add_heap_ops__CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                      }
                      ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__CodeModel_18 == (MR_Integer) 2);
                      if (!(ml_backend__add_heap_ops__succeeded))
                        {
                          ml_backend__add_heap_ops__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ml_backend__add_heap_ops__FirstDisjunct0_15);
                        }
                      if (ml_backend__add_heap_ops__succeeded)
                        {
                          MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_19;
                          MR_Word ml_backend__add_heap_ops__MarkHeapPointerGoal_20;
                          MR_Word ml_backend__add_heap_ops__Disjuncts_21;
                          MR_Word ml_backend__add_heap_ops__DisjGoalExpr_22;
                          MR_Word ml_backend__add_heap_ops__DisjGoal_23;
                          MR_Word ml_backend__add_heap_ops__ConjGoalExpr_24;
                          MR_Word ml_backend__add_heap_ops__ConjGoal_25;
                          MR_Word ml_backend__add_heap_ops__Purity0_26;
                          MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_114_114;
                          MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_115_115;
                          MR_Word ml_backend__add_heap_ops__V_117_117;
                          MR_Word ml_backend__add_heap_ops__V_120_120;
                          MR_Word ml_backend__add_heap_ops__V_121_121;
                          MR_Word ml_backend__add_heap_ops__V_123_123;

                          {
                            ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&ml_backend__add_heap_ops__SavedHeapPointerVar_19, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_114_114);
                          }
                          {
                            ml_backend__add_heap_ops__gen_mark_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_19, ml_backend__add_heap_ops__Context_17, &ml_backend__add_heap_ops__MarkHeapPointerGoal_20, ml_backend__add_heap_ops__STATE_VARIABLE_Info_114_114, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_115_115);
                          }
                          {
                            ml_backend__add_heap_ops__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_117_117, 0) = ((MR_Box) (ml_backend__add_heap_ops__SavedHeapPointerVar_19));
                          }
                          {
                            ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Disjuncts0_14, &ml_backend__add_heap_ops__Disjuncts_21, (MR_Integer) 0, ml_backend__add_heap_ops__V_117_117, ml_backend__add_heap_ops__GoalInfo0_7, ml_backend__add_heap_ops__STATE_VARIABLE_Info_115_115, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                          }
                          {
                            ml_backend__add_heap_ops__DisjGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__DisjGoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__DisjGoalExpr_22, 1) = ((MR_Box) (ml_backend__add_heap_ops__Disjuncts_21));
                          }
                          {
                            ml_backend__add_heap_ops__DisjGoal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__DisjGoal_23, 0) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoalExpr_22));
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__DisjGoal_23, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                          }
                          {
                            ml_backend__add_heap_ops__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_121_121, 0) = ((MR_Box) (ml_backend__add_heap_ops__DisjGoal_23));
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            ml_backend__add_heap_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_120_120, 0) = ((MR_Box) (ml_backend__add_heap_ops__MarkHeapPointerGoal_20));
                            MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_120_120, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_121_121));
                          }
                          {
                            ml_backend__add_heap_ops__ConjGoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_24, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_24, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_120_120));
                          }
                          {
                            ml_backend__add_heap_ops__ConjGoal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_25, 0) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoalExpr_24));
                            MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_25, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                          }
                          {
                            ml_backend__add_heap_ops__Purity0_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                          }
                          {
                            ml_backend__add_heap_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__V_123_123, 1) = ((MR_Box) (ml_backend__add_heap_ops__Purity0_26));
                          }
                          {
                            ml_backend__add_heap_ops__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_123_123));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 2) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoal_25));
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__add_heap_ops__Disjuncts_128;

                          {
                            ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(ml_backend__add_heap_ops__Disjuncts0_14, &ml_backend__add_heap_ops__Disjuncts_128, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_heap_ops__GoalInfo0_7, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                          }
                          {
                            ml_backend__add_heap_ops__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                            MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_129, 1) = ((MR_Box) (ml_backend__add_heap_ops__Disjuncts_128));
                          }
                        }
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_heap_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_129));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__add_heap_ops__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_heap_ops__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_heap_ops__Cases0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 3)));
                  MR_Word ml_backend__add_heap_ops__Cases_30;
                  MR_Word ml_backend__add_heap_ops__GoalExpr_130;

                  {
                    ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(ml_backend__add_heap_ops__Cases0_29, &ml_backend__add_heap_ops__Cases_30, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                  }
                  {
                    ml_backend__add_heap_ops__GoalExpr_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 1) = ((MR_Box) (ml_backend__add_heap_ops__Var_27));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 2) = ((MR_Box) (ml_backend__add_heap_ops__CanFail_28));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_130, 3) = ((MR_Box) (ml_backend__add_heap_ops__Cases_30));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_heap_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_130));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__add_heap_ops__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_heap_ops__SubGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_heap_ops__SubGoal_46;
                  MR_Word ml_backend__add_heap_ops__GoalExpr_132;
                  MR_Word ml_backend__add_heap_ops__V_104_104;
                  MR_Word ml_backend__add_heap_ops__V_45_45;

                  ml_backend__add_heap_ops__succeeded = ((((MR_tag((MR_Word) ml_backend__add_heap_ops__Reason_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__Reason_43, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (ml_backend__add_heap_ops__succeeded)
                    {
                      ml_backend__add_heap_ops__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__Reason_43, (MR_Integer) 1)));
                      ml_backend__add_heap_ops__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__Reason_43, (MR_Integer) 2)));
                      ml_backend__add_heap_ops__succeeded = (ml_backend__add_heap_ops__V_104_104 == (MR_Integer) 1);
                    }
                  if (ml_backend__add_heap_ops__succeeded)
                    {
                      ml_backend__add_heap_ops__SubGoal_46 = ml_backend__add_heap_ops__SubGoal0_44;
                      *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84;
                    }
                  else
                    {
                      ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__SubGoal0_44, &ml_backend__add_heap_ops__SubGoal_46, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                    }
                  {
                    ml_backend__add_heap_ops__GoalExpr_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_132, 1) = ((MR_Box) (ml_backend__add_heap_ops__Reason_43));
                    MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_132, 2) = ((MR_Box) (ml_backend__add_heap_ops__SubGoal_46));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_heap_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_132));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__add_heap_ops__Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_heap_ops__CondGoal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_heap_ops__ThenGoal0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 3)));
                  MR_Word ml_backend__add_heap_ops__ElseGoal0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr0_6, (MR_Integer) 4)));
                  MR_Word ml_backend__add_heap_ops__CondGoal_51;
                  MR_Word ml_backend__add_heap_ops__ElseGoal1_52;
                  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_89_89;
                  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_90_90;
                  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91;
                  MR_Word ml_backend__add_heap_ops__GoalExpr_145;
                  MR_Word ml_backend__add_heap_ops__ThenGoal_152;

                  {
                    ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__CondGoal0_48, &ml_backend__add_heap_ops__CondGoal_51, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_84, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_89_89);
                  }
                  {
                    ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__ThenGoal0_49, &ml_backend__add_heap_ops__ThenGoal_152, ml_backend__add_heap_ops__STATE_VARIABLE_Info_89_89, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_90_90);
                  }
                  {
                    ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ml_backend__add_heap_ops__ElseGoal0_50, &ml_backend__add_heap_ops__ElseGoal1_52, ml_backend__add_heap_ops__STATE_VARIABLE_Info_90_90, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91);
                  }
                  {
                    ml_backend__add_heap_ops__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ml_backend__add_heap_ops__CondGoal0_48);
                  }
                  if (ml_backend__add_heap_ops__succeeded)
                    {
                      MR_Word ml_backend__add_heap_ops__RestoreHeapPointerGoal_53;
                      MR_Word ml_backend__add_heap_ops__ElseGoal1Info_55;
                      MR_Word ml_backend__add_heap_ops__ElseGoalExpr_56;
                      MR_Word ml_backend__add_heap_ops__ElseGoal_57;
                      MR_Word ml_backend__add_heap_ops__ITEGoalExpr_58;
                      MR_Word ml_backend__add_heap_ops__ITEGoal_59;
                      MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_92_92;
                      MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_93_93;
                      MR_Word ml_backend__add_heap_ops__V_96_96;
                      MR_Word ml_backend__add_heap_ops__V_97_97;
                      MR_Word ml_backend__add_heap_ops__V_100_100;
                      MR_Word ml_backend__add_heap_ops__V_101_101;
                      MR_Word ml_backend__add_heap_ops__V_103_103;
                      MR_Word ml_backend__add_heap_ops__Context_133;
                      MR_Word ml_backend__add_heap_ops__SavedHeapPointerVar_134;
                      MR_Word ml_backend__add_heap_ops__MarkHeapPointerGoal_135;
                      MR_Word ml_backend__add_heap_ops__ConjGoalExpr_136;
                      MR_Word ml_backend__add_heap_ops__ConjGoal_137;
                      MR_Word ml_backend__add_heap_ops__Purity0_138;
                      MR_Word ml_backend__add_heap_ops__V_54_54;

                      {
                        ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&ml_backend__add_heap_ops__SavedHeapPointerVar_134, ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_92_92);
                      }
                      {
                        ml_backend__add_heap_ops__Context_133 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                      }
                      {
                        ml_backend__add_heap_ops__gen_mark_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_134, ml_backend__add_heap_ops__Context_133, &ml_backend__add_heap_ops__MarkHeapPointerGoal_135, ml_backend__add_heap_ops__STATE_VARIABLE_Info_92_92, &ml_backend__add_heap_ops__STATE_VARIABLE_Info_93_93);
                      }
                      {
                        ml_backend__add_heap_ops__gen_restore_hp_5_p_0(ml_backend__add_heap_ops__SavedHeapPointerVar_134, ml_backend__add_heap_ops__Context_133, &ml_backend__add_heap_ops__RestoreHeapPointerGoal_53, ml_backend__add_heap_ops__STATE_VARIABLE_Info_93_93, ml_backend__add_heap_ops__STATE_VARIABLE_Info_85);
                      }
                      ml_backend__add_heap_ops__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal1_52, (MR_Integer) 0)));
                      ml_backend__add_heap_ops__ElseGoal1Info_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal1_52, (MR_Integer) 1)));
                      {
                        ml_backend__add_heap_ops__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_97_97, 0) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal1_52));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__add_heap_ops__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_96_96, 0) = ((MR_Box) (ml_backend__add_heap_ops__RestoreHeapPointerGoal_53));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_96_96, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_97_97));
                      }
                      {
                        ml_backend__add_heap_ops__ElseGoalExpr_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ElseGoalExpr_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ElseGoalExpr_56, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ElseGoalExpr_56, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_96_96));
                      }
                      {
                        ml_backend__add_heap_ops__ElseGoal_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal_57, 0) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoalExpr_56));
                        MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ElseGoal_57, 1) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal1Info_55));
                      }
                      {
                        ml_backend__add_heap_ops__ITEGoalExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 1) = ((MR_Box) (ml_backend__add_heap_ops__Vars_47));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 2) = ((MR_Box) (ml_backend__add_heap_ops__CondGoal_51));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 3) = ((MR_Box) (ml_backend__add_heap_ops__ThenGoal_152));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ITEGoalExpr_58, 4) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal_57));
                      }
                      {
                        ml_backend__add_heap_ops__ITEGoal_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ITEGoal_59, 0) = ((MR_Box) (ml_backend__add_heap_ops__ITEGoalExpr_58));
                        MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ITEGoal_59, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                      }
                      {
                        ml_backend__add_heap_ops__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_101_101, 0) = ((MR_Box) (ml_backend__add_heap_ops__ITEGoal_59));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__add_heap_ops__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_100_100, 0) = ((MR_Box) (ml_backend__add_heap_ops__MarkHeapPointerGoal_135));
                        MR_hl_field(MR_mktag(1), ml_backend__add_heap_ops__V_100_100, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_101_101));
                      }
                      {
                        ml_backend__add_heap_ops__ConjGoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_136, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__ConjGoalExpr_136, 2) = ((MR_Box) (ml_backend__add_heap_ops__V_100_100));
                      }
                      {
                        ml_backend__add_heap_ops__ConjGoal_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_137, 0) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoalExpr_136));
                        MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__ConjGoal_137, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                      }
                      {
                        ml_backend__add_heap_ops__Purity0_138 = hlds__hlds_goal__goal_info_get_purity_1_f_0(ml_backend__add_heap_ops__GoalInfo0_7);
                      }
                      {
                        ml_backend__add_heap_ops__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__V_103_103, 1) = ((MR_Box) (ml_backend__add_heap_ops__Purity0_138));
                      }
                      {
                        ml_backend__add_heap_ops__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 1) = ((MR_Box) (ml_backend__add_heap_ops__V_103_103));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 2) = ((MR_Box) (ml_backend__add_heap_ops__ConjGoal_137));
                      }
                    }
                  else
                    {
                      {
                        ml_backend__add_heap_ops__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 1) = ((MR_Box) (ml_backend__add_heap_ops__Vars_47));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 2) = ((MR_Box) (ml_backend__add_heap_ops__CondGoal_51));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 3) = ((MR_Box) (ml_backend__add_heap_ops__ThenGoal_152));
                        MR_hl_field(MR_mktag(3), ml_backend__add_heap_ops__GoalExpr_145, 4) = ((MR_Box) (ml_backend__add_heap_ops__ElseGoal1_52));
                      }
                      *ml_backend__add_heap_ops__STATE_VARIABLE_Info_85 = ml_backend__add_heap_ops__STATE_VARIABLE_Info_91_91;
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_heap_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_heap_ops__GoalExpr_145));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_heap_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.add_heap_ops", (MR_String) "predicate \140ml_backend.add_heap_ops.goal_expr_add_heap_ops\'/5", (MR_String) "shorthand");
                    return;
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
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
  MR_Word ml_backend__add_heap_ops__Goal0_5,
  MR_Word * ml_backend__add_heap_ops__Goal_6,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Info_11)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Word ml_backend__add_heap_ops__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_5, (MR_Integer) 0)));
    MR_Word ml_backend__add_heap_ops__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_5, (MR_Integer) 1)));

    {
      ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_8, ml_backend__add_heap_ops__GoalInfo_9, ml_backend__add_heap_ops__Goal_6, ml_backend__add_heap_ops__STATE_VARIABLE_Info_0_10, ml_backend__add_heap_ops__STATE_VARIABLE_Info_11);
    }
  }
}

void MR_CALL 
ml_backend__add_heap_ops__add_heap_ops_3_p_0(
  MR_Word ml_backend__add_heap_ops__ModuleInfo0_4,
  MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15,
  MR_Word * ml_backend__add_heap_ops__STATE_VARIABLE_Proc_16)
{
  {
    MR_bool ml_backend__add_heap_ops__succeeded;
    MR_Word ml_backend__add_heap_ops__Goal0_6;
    MR_Word ml_backend__add_heap_ops__VarSet0_7;
    MR_Word ml_backend__add_heap_ops__VarTypes0_8;
    MR_Word ml_backend__add_heap_ops__TrailOpsInfo0_9;
    MR_Word ml_backend__add_heap_ops__Goal_10;
    MR_Word ml_backend__add_heap_ops__TrailOpsInfo_11;
    MR_Word ml_backend__add_heap_ops__VarSet_12;
    MR_Word ml_backend__add_heap_ops__VarTypes_13;
    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_17_17;
    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_18_18;
    MR_Word ml_backend__add_heap_ops__STATE_VARIABLE_Proc_19_19;
    MR_Word ml_backend__add_heap_ops__GoalExpr0_27;
    MR_Word ml_backend__add_heap_ops__GoalInfo_28;
    MR_Word ml_backend__add_heap_ops__V_14_14;

    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__Goal0_6);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__VarSet0_7);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__VarTypes0_8);
    }
    {
      ml_backend__add_heap_ops__TrailOpsInfo0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo0_9, 0) = ((MR_Box) (ml_backend__add_heap_ops__VarSet0_7));
      MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo0_9, 1) = ((MR_Box) (ml_backend__add_heap_ops__VarTypes0_8));
      MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo0_9, 2) = ((MR_Box) (ml_backend__add_heap_ops__ModuleInfo0_4));
    }
    ml_backend__add_heap_ops__GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_6, (MR_Integer) 0)));
    ml_backend__add_heap_ops__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__Goal0_6, (MR_Integer) 1)));
    {
      ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(ml_backend__add_heap_ops__GoalExpr0_27, ml_backend__add_heap_ops__GoalInfo_28, &ml_backend__add_heap_ops__Goal_10, ml_backend__add_heap_ops__TrailOpsInfo0_9, &ml_backend__add_heap_ops__TrailOpsInfo_11);
    }
    ml_backend__add_heap_ops__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo_11, (MR_Integer) 0)));
    ml_backend__add_heap_ops__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo_11, (MR_Integer) 1)));
    ml_backend__add_heap_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_heap_ops__TrailOpsInfo_11, (MR_Integer) 2)));
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ml_backend__add_heap_ops__Goal_10, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_0_15, &ml_backend__add_heap_ops__STATE_VARIABLE_Proc_17_17);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ml_backend__add_heap_ops__VarSet_12, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_17_17, &ml_backend__add_heap_ops__STATE_VARIABLE_Proc_18_18);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ml_backend__add_heap_ops__VarTypes_13, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_18_18, &ml_backend__add_heap_ops__STATE_VARIABLE_Proc_19_19);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_19_19, ml_backend__add_heap_ops__STATE_VARIABLE_Proc_16);
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__add_heap_ops__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.add_heap_ops. */
