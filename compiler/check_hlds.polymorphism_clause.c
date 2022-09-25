/*
** Automatically generated from `polymorphism_clause.m'
** by the Mercury compiler,
** version rotd-2022-09-25
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module check_hlds.polymorphism_clause.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism_clause__init
ENDINIT
*/

#include "check_hlds.polymorphism_clause.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.polymorphism_goal.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_class_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_clause__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_clause__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_10_p_0(
  MR_Word PredInfo0_11,
  MR_Word OldHeadVars_12,
  MR_Word NewHeadVars_13,
  MR_Word UnconstrainedTVars_14,
  MR_Word ExtraTypeInfoHeadVars_15,
  MR_Word ExistTypeClassInfoHeadVars_16,
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__polymorphism_clause__var_as_type_info_locn_2_p_0(
  MR_Word Var_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0(
  MR_Word PredInfo_15,
  MR_Word ClassContext_16,
  MR_Word InstanceTVars_17,
  MR_Word UnconstrainedInstanceTVars_18,
  MR_Word UnconstrainedInstanceTypeInfoVars_19,
  MR_Word HeadVars0_20,
  MR_Word * HeadVars_21,
  MR_Word * AllUnconstrainedTVars_22,
  MR_Word * AllExtraHeadTypeInfoVars_23,
  MR_Word * ExistHeadTypeClassInfoVars_24,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_68,
  MR_Word * STATE_VARIABLE_ExtraArgModes_69,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static void MR_CALL 
check_hlds__polymorphism_clause__make_head_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeVarSet_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);


static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_3[9][3];

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_5[1][6];

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_6[1][13];




static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism_clause__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_3[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_2[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_2[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_2[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism_clause__polymorphism_process_clause_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__polymorphism_clause__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism_clause__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_clause_scalar_common_6[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_clause__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_clause__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_clause__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_clause__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_clause__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_clause__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism_clause__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_clause__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism_clause__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism_clause__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism_clause__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_10_p_0(
  MR_Word PredInfo0_11,
  MR_Word OldHeadVars_12,
  MR_Word NewHeadVars_13,
  MR_Word UnconstrainedTVars_14,
  MR_Word ExtraTypeInfoHeadVars_15,
  MR_Word ExistTypeClassInfoHeadVars_16,
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word Goal0_19;
  MR_Word Goal1_20;
  MR_Word Goal2_21;
  MR_Word ExistQVars_22;
  MR_Word Goal_23;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word VarTable0_38;
  MR_Word ConstraintMap_39;
  MR_Word ArgTypes_40;
  MR_Word KindMap_41;
  MR_Word PredClassContext_42;
  MR_Word PredExistConstraints_43;
  MR_Word ActualExistConstraints_44;
  MR_Word GoalInfo_47;
  MR_Word Context_48;
  MR_Word ExistTypeClassVarsMCAs_49;
  MR_Word ExtraTypeClassGoals_50;
  MR_Word ExistTypeClassVars_51;
  MR_Word RttiVarMaps0_52;
  MR_Word RttiVarMaps_53;
  MR_Word ExtraTypeClassUnifyGoals_54;
  MR_Integer NumVarsInDb0_55;
  MR_Word PredToActualTypeSubst_56;
  MR_Word ActualTypes_60;
  MR_Word TypeInfoVarsMCAs_61;
  MR_Word ExtraTypeInfoGoals_62;
  MR_Word TypeInfoVars_63;
  MR_Word ExtraTypeInfoUnifyGoals_64;
  MR_Word GoalList_65;
  MR_Word STATE_VARIABLE_Info_48_66;
  MR_Word STATE_VARIABLE_Info_50_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Integer NumExistConstraints_84;
  MR_Word ActualExistConstraintsPrime_85;
  MR_Word Var_87;
  MR_Box conv1_RttiVarMaps_53;
  MR_Word RttiVarMaps0_89;
  MR_Integer NumReuses_90;
  MR_Word MustRequantify_91;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;

  Goal0_19 = hlds__hlds_clauses__clause_body_1_f_0(STATE_VARIABLE_Clause_0_24);
  check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_28_28);
  check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_30_30);
  check_hlds__polymorphism_goal__polymorphism_process_goal_4_p_0(Goal0_19, &Goal1_20, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_31_31, &VarTable0_38);
  check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_31_31, &ConstraintMap_39);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_11, &ArgTypes_40);
  hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo0_11, &KindMap_41);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_11, &PredClassContext_42);
  PredExistConstraints_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_42, (MR_Integer) 1))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), PredExistConstraints_43, &NumExistConstraints_84);
  Var_87 = mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0();
  succeeded = hlds__hlds_class__search_hlds_constraint_list_5_p_0(ConstraintMap_39, (MR_Integer) 0, Var_87, NumExistConstraints_84, &ActualExistConstraintsPrime_85);
  if (succeeded)
    ActualExistConstraints_44 = ActualExistConstraintsPrime_85;
  else
    ActualExistConstraints_44 = PredExistConstraints_43;
  GoalInfo_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_20, (MR_Integer) 1))));
  Context_48 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_47);
  check_hlds__polymorphism_type_class_info__make_typeclass_info_vars_7_p_0(ActualExistConstraints_44, (MR_Word) ((MR_Unsigned) 0U), Context_48, &ExistTypeClassVarsMCAs_49, &ExtraTypeClassGoals_50, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_48_66);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[2]), ExistTypeClassVarsMCAs_49, &ExistTypeClassVars_51);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_48_66, &RttiVarMaps0_52);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[8]), ExistTypeClassVars_51, ((MR_Box) (RttiVarMaps0_52)), &conv1_RttiVarMaps_53);
  RttiVarMaps_53 = ((MR_Word) (conv1_RttiVarMaps_53));
  check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_53, STATE_VARIABLE_Info_48_66, &STATE_VARIABLE_Info_50_68);
  hlds__make_goal__make_complicated_unify_assigns_3_p_0(ExistTypeClassInfoHeadVars_16, ExistTypeClassVars_51, &ExtraTypeClassUnifyGoals_54);
  parse_tree__var_table__var_table_count_2_p_0(VarTable0_38, &NumVarsInDb0_55);
  succeeded = (NumVarsInDb0_55 == (MR_Integer) 0);
  if (succeeded)
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &PredToActualTypeSubst_56);
  else
  {
    MR_Word ArgTypeSubst_59;
    MR_Word HeadVarList_57;
    MR_Word ActualArgTypes_58;

    HeadVarList_57 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), OldHeadVars_12);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_38, HeadVarList_57, &ActualArgTypes_58);
    succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ArgTypes_40, ActualArgTypes_58, &ArgTypeSubst_59);
    if (succeeded)
      PredToActualTypeSubst_56 = ArgTypeSubst_59;
    else
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &PredToActualTypeSubst_56);
  }
  parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0(KindMap_41, PredToActualTypeSubst_56, UnconstrainedTVars_14, &ActualTypes_60);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualTypes_60, Context_48, &TypeInfoVarsMCAs_61, &ExtraTypeInfoGoals_62, STATE_VARIABLE_Info_50_68, &STATE_VARIABLE_Info_32_32);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[2]), TypeInfoVarsMCAs_61, &TypeInfoVars_63);
  hlds__make_goal__make_complicated_unify_assigns_3_p_0(ExtraTypeInfoHeadVars_15, TypeInfoVars_63, &ExtraTypeInfoUnifyGoals_64);
  {
    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Goal1_20));
    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (ExtraTypeClassGoals_50));
  }
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ExtraTypeInfoUnifyGoals_64));
    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ExtraTypeInfoGoals_62));
    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ExtraTypeClassUnifyGoals_54));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
  }
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_69, &GoalList_65);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_65, GoalInfo_47, &Goal2_21);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_11, &ExistQVars_22);
  succeeded = (ExistQVars_22 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_32_32, &RttiVarMaps0_89);
    succeeded = hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(RttiVarMaps0_89);
    if (succeeded)
    {
      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_32_32, &NumReuses_90);
      succeeded = (NumReuses_90 == (MR_Integer) 0);
      if (succeeded)
      {
        check_hlds__polymorphism_info__poly_info_get_must_requantify_2_p_0(STATE_VARIABLE_Info_32_32, &MustRequantify_91);
        succeeded = (MustRequantify_91 == (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
  {
    Goal_23 = Goal2_21;
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_32_32;
  }
  else
  {
    MR_Word VarTable0_92;
    MR_Word OutsideVars_93;
    MR_Word VarTable_95;
    MR_Word RttiVarMaps_96;
    MR_Word Var_98;
    MR_Word RttiVarMaps0_99;
    MR_Word _Warnings_94;

    check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_32_32, &VarTable0_92);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_32_32, &RttiVarMaps0_99);
    OutsideVars_93 = hlds__hlds_args__proc_arg_vector_to_set_1_f_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), NewHeadVars_13);
    Var_98 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_93);
    hlds__quantification__implicitly_quantify_goal_general_9_p_0((MR_Integer) 0, Var_98, &_Warnings_94, Goal2_21, &Goal_23, VarTable0_92, &VarTable_95, RttiVarMaps0_99, &RttiVarMaps_96);
    check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(VarTable_95, RttiVarMaps_96, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27);
  }
  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 0))));
  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 2))));
  Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 3))));
  Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Clause_25 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_23));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_37));
  }
}

static void MR_CALL 
check_hlds__polymorphism_clause__var_as_type_info_locn_2_p_0(
  MR_Word Var_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Clause_25;
  MR_Word conv2_STATE_VARIABLE_Info_27;

  check_hlds__polymorphism_clause__polymorphism_process_clause_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Clause_25, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Info_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Clause_25));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Info_27));
}

static void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0(
  MR_Word PredInfo0_7,
  MR_Word * ExtraArgModes_8,
  MR_Word STATE_VARIABLE_ClausesInfo_0_30,
  MR_Word * STATE_VARIABLE_ClausesInfo_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;
  MR_Word VarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_30, (MR_Integer) 0))));
  MR_Word ExplicitVarTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_30, (MR_Integer) 1))));
  MR_Word TVarNameMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_30, (MR_Integer) 4))));
  MR_Word HeadVars0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_30, (MR_Integer) 5))));
  MR_Word ClausesRep0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_30, (MR_Integer) 6))));
  MR_Word ItemNumbers_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_30, (MR_Integer) 7))));
  MR_Word HeadVars_21;
  MR_Word UnconstrainedTVars_22;
  MR_Word ExtraTypeInfoHeadVars_23;
  MR_Word ExistTypeClassInfoHeadVars_24;
  MR_Word ClausesRep_25;
  MR_Word VarTable_28;
  MR_Word RttiVarMaps_29;
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Word Origin_42;
  MR_Word ExtraArgModes0_43;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_30, (MR_Integer) 8)));
  MR_Word InstanceMethodConstraints_46;
  MR_Word OriginUser_44;

  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_7, &Origin_42);
  ExtraArgModes0_43 = hlds__hlds_args__poly_arg_vector_init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0));
  succeeded = ((MR_tag((MR_Word) Origin_42)) == (MR_Integer) 0);
  if (succeeded)
  {
    OriginUser_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_42, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) OriginUser_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OriginUser_44, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
      InstanceMethodConstraints_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginUser_44, (MR_Integer) 2))));
  }
  if (succeeded)
  {
    MR_Word InstanceTypes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_46, (MR_Integer) 1))));
    MR_Word InstanceConstraints_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_46, (MR_Integer) 2))));
    MR_Word ClassContext_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_46, (MR_Integer) 3))));
    MR_Word InstanceTVars_56;
    MR_Word UnconstrainedInstanceTVars_57;
    MR_Word ArgTypeVarSet_58;
    MR_Word UnconstrainedInstanceTypeInfoVars_61;
    MR_Word InstanceHeadTypeClassInfoVars_62;
    MR_Word RttiVarMaps0_63;
    MR_Word RttiVarMaps_64;
    MR_Word InMode_65;
    MR_Word UnconstrainedInstanceTypeInfoModes_66;
    MR_Word InstanceHeadTypeClassInfoModes_67;
    MR_Word STATE_VARIABLE_Info_42_68;
    MR_Word STATE_VARIABLE_Info_44_70;
    MR_Word STATE_VARIABLE_HeadVars_45_71;
    MR_Word STATE_VARIABLE_HeadVars_46_72;
    MR_Word STATE_VARIABLE_Info_48_74;
    MR_Integer Var_75;
    MR_Integer Var_76;
    MR_Word STATE_VARIABLE_ExtraArgModes_51_77;
    MR_Word STATE_VARIABLE_ExtraArgModes_52_78;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Box conv1_RttiVarMaps_64;

    parse_tree__prog_type__type_vars_in_types_2_p_0(InstanceTypes_53, &InstanceTVars_56);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(InstanceTVars_56, InstanceConstraints_54, &UnconstrainedInstanceTVars_57);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_7, &ArgTypeVarSet_58, &Var_59, &Var_60);
    check_hlds__polymorphism_clause__make_head_vars_5_p_0(UnconstrainedInstanceTVars_57, ArgTypeVarSet_58, &UnconstrainedInstanceTypeInfoVars_61, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_42_68);
    check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0((MR_Integer) 0, InstanceConstraints_54, &InstanceHeadTypeClassInfoVars_62, STATE_VARIABLE_Info_42_68, &STATE_VARIABLE_Info_44_70);
    hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), UnconstrainedInstanceTypeInfoVars_61, HeadVars0_16, &STATE_VARIABLE_HeadVars_45_71);
    hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), InstanceHeadTypeClassInfoVars_62, STATE_VARIABLE_HeadVars_45_71, &STATE_VARIABLE_HeadVars_46_72);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_44_70, &RttiVarMaps0_63);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[7]), InstanceHeadTypeClassInfoVars_62, ((MR_Box) (RttiVarMaps0_63)), &conv1_RttiVarMaps_64);
    RttiVarMaps_64 = ((MR_Word) (conv1_RttiVarMaps_64));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_64, STATE_VARIABLE_Info_44_70, &STATE_VARIABLE_Info_48_74);
    parse_tree__prog_mode__in_mode_1_p_0(&InMode_65);
    Var_75 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), UnconstrainedInstanceTypeInfoVars_61);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_75, ((MR_Box) (InMode_65)), &UnconstrainedInstanceTypeInfoModes_66);
    Var_76 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), InstanceHeadTypeClassInfoVars_62);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_76, ((MR_Box) (InMode_65)), &InstanceHeadTypeClassInfoModes_67);
    hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnconstrainedInstanceTypeInfoModes_66, ExtraArgModes0_43, &STATE_VARIABLE_ExtraArgModes_51_77);
    hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InstanceHeadTypeClassInfoModes_67, STATE_VARIABLE_ExtraArgModes_51_77, &STATE_VARIABLE_ExtraArgModes_52_78);
    check_hlds__polymorphism_clause__setup_headvars_2_14_p_0(PredInfo0_7, ClassContext_55, InstanceTVars_56, UnconstrainedInstanceTVars_57, UnconstrainedInstanceTypeInfoVars_61, STATE_VARIABLE_HeadVars_46_72, &HeadVars_21, &UnconstrainedTVars_22, &ExtraTypeInfoHeadVars_23, &ExistTypeClassInfoHeadVars_24, STATE_VARIABLE_ExtraArgModes_52_78, ExtraArgModes_8, STATE_VARIABLE_Info_48_74, &STATE_VARIABLE_Info_34_34);
  }
  else
  {
    MR_Word ClassContext_47;

    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_7, &ClassContext_47);
    check_hlds__polymorphism_clause__setup_headvars_2_14_p_0(PredInfo0_7, ClassContext_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), HeadVars0_16, &HeadVars_21, &UnconstrainedTVars_22, &ExtraTypeInfoHeadVars_23, &ExistTypeClassInfoHeadVars_24, ExtraArgModes0_43, ExtraArgModes_8, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_34_34);
  }
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_7);
  if (succeeded)
  {
    ClausesRep_25 = ClausesRep0_17;
    *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_34_34;
  }
  else
  {
    MR_Word Clauses0_26;
    MR_Word Clauses_27;
    MR_Word Var_35;
    MR_Box conv4_STATE_VARIABLE_Info_33;

    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_17, &Clauses0_26);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__polymorphism_clause_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (PredInfo0_7));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (HeadVars0_16));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (HeadVars_21));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (UnconstrainedTVars_22));
      MR_hl_field(MR_mktag(0), Var_35, 7) = ((MR_Box) (ExtraTypeInfoHeadVars_23));
      MR_hl_field(MR_mktag(0), Var_35, 8) = ((MR_Box) (ExistTypeClassInfoHeadVars_24));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_35, Clauses0_26, &Clauses_27, ((MR_Box) (STATE_VARIABLE_Info_34_34)), &conv4_STATE_VARIABLE_Info_33);
    *STATE_VARIABLE_Info_33 = ((MR_Word) (conv4_STATE_VARIABLE_Info_33));
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_27, &ClausesRep_25);
  }
  check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(*STATE_VARIABLE_Info_33, &VarTable_28);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(*STATE_VARIABLE_Info_33, &RttiVarMaps_29);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ClausesInfo_31 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExplicitVarTypes_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTable_28));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_29));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TVarNameMap_15));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (HeadVars_21));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ClausesRep_25));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ItemNumbers_18));
    MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (packed_word_0);
  }
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__3_3;

  hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__4_4;

  hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  check_hlds__polymorphism_clause__var_as_type_info_locn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  check_hlds__polymorphism_clause__var_as_type_info_locn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  check_hlds__polymorphism_clause__var_as_type_info_locn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__polymorphism_clause__setup_headvars_2_14_p_0(
  MR_Word PredInfo_15,
  MR_Word ClassContext_16,
  MR_Word InstanceTVars_17,
  MR_Word UnconstrainedInstanceTVars_18,
  MR_Word UnconstrainedInstanceTypeInfoVars_19,
  MR_Word HeadVars0_20,
  MR_Word * HeadVars_21,
  MR_Word * AllUnconstrainedTVars_22,
  MR_Word * AllExtraHeadTypeInfoVars_23,
  MR_Word * ExistHeadTypeClassInfoVars_24,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_68,
  MR_Word * STATE_VARIABLE_ExtraArgModes_69,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  MR_bool succeeded;
  MR_Word ArgTypeVarSet_27;
  MR_Word ExistQVars_28;
  MR_Word ArgTypes_29;
  MR_Word UnivConstraints_30;
  MR_Word ExistConstraints_31;
  MR_Word UnivConstrainedTVars_32;
  MR_Word ExistConstrainedTVars_33;
  MR_Word ConstraintMap_34;
  MR_Word ActualExistConstraints_35;
  MR_Word RecordExistQLocns_37;
  MR_Word UnivHeadTypeClassInfoVars_38;
  MR_Word HeadTypeVars_39;
  MR_Word UnconstrainedTVars0_40;
  MR_Word UnconstrainedTVars1_41;
  MR_Word UnconstrainedTVars2_42;
  MR_Word UnconstrainedTVars_43;
  MR_Word UnconstrainedUnivTVars_44;
  MR_Word UnconstrainedExistTVars_45;
  MR_Word ExistHeadTypeInfoVars_46;
  MR_Word UnivHeadTypeInfoVars_49;
  MR_Word ExtraHeadTypeInfoVars_50;
  MR_Word HeadVars1_51;
  MR_Word HeadVars2_52;
  MR_Word HeadVars3_53;
  MR_Word In_54;
  MR_Word Out_55;
  MR_Integer NumUnconstrainedUnivTVars_56;
  MR_Integer NumUnconstrainedExistTVars_57;
  MR_Integer NumUnivClassInfoVars_58;
  MR_Integer NumExistClassInfoVars_59;
  MR_Word UnivTypeInfoModes_60;
  MR_Word ExistTypeInfoModes_61;
  MR_Word UnivTypeClassInfoModes_62;
  MR_Word ExistTypeClassInfoModes_63;
  MR_Word UnivTypeLocns_65;
  MR_Word ExistTypeLocns_66;
  MR_Word UnconstrainedInstanceTypeLocns_67;
  MR_Word STATE_VARIABLE_Info_73_73;
  MR_Word STATE_VARIABLE_Info_75_75;
  MR_Word STATE_VARIABLE_Info_76_76;
  MR_Word STATE_VARIABLE_Info_77_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_ExtraArgModes_82_82;
  MR_Word STATE_VARIABLE_ExtraArgModes_83_83;
  MR_Word STATE_VARIABLE_ExtraArgModes_84_84;
  MR_Word STATE_VARIABLE_RttiVarMaps_86_86;
  MR_Word STATE_VARIABLE_RttiVarMaps_89_89;
  MR_Word STATE_VARIABLE_RttiVarMaps_92_92;
  MR_Word STATE_VARIABLE_RttiVarMaps_95_95;
  MR_Word STATE_VARIABLE_RttiVarMaps_97_97;
  MR_Integer NumExistConstraints_109;
  MR_Word ActualExistConstraintsPrime_110;
  MR_Word Var_112;
  MR_Word PredMarkers_36;
  MR_Box conv2_STATE_VARIABLE_RttiVarMaps_89_89;
  MR_Box conv5_STATE_VARIABLE_RttiVarMaps_92_92;
  MR_Box conv8_STATE_VARIABLE_RttiVarMaps_95_95;
  MR_Box conv10_STATE_VARIABLE_RttiVarMaps_97_97;

  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_15, &ArgTypeVarSet_27, &ExistQVars_28, &ArgTypes_29);
  UnivConstraints_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_16, (MR_Integer) 0))));
  ExistConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_16, (MR_Integer) 1))));
  parse_tree__prog_type__constraint_list_get_tvars_2_p_0(UnivConstraints_30, &UnivConstrainedTVars_32);
  parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistConstraints_31, &ExistConstrainedTVars_33);
  check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_0_70, &ConstraintMap_34);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistConstraints_31, &NumExistConstraints_109);
  Var_112 = mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0();
  succeeded = hlds__hlds_class__search_hlds_constraint_list_5_p_0(ConstraintMap_34, (MR_Integer) 0, Var_112, NumExistConstraints_109, &ActualExistConstraintsPrime_110);
  if (succeeded)
    ActualExistConstraints_35 = ActualExistConstraintsPrime_110;
  else
    ActualExistConstraints_35 = ExistConstraints_31;
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &PredMarkers_36);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_36, (MR_Integer) 11);
  if (succeeded)
    RecordExistQLocns_37 = (MR_Integer) 0;
  else
    RecordExistQLocns_37 = (MR_Integer) 1;
  check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0(RecordExistQLocns_37, ActualExistConstraints_35, ExistHeadTypeClassInfoVars_24, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_73_73);
  check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0((MR_Integer) 0, UnivConstraints_30, &UnivHeadTypeClassInfoVars_38, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_75_75);
  parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_29, &HeadTypeVars_39);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), HeadTypeVars_39, UnivConstrainedTVars_32, &UnconstrainedTVars0_40);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), UnconstrainedTVars0_40, ExistConstrainedTVars_33, &UnconstrainedTVars1_41);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), UnconstrainedTVars1_41, InstanceTVars_17, &UnconstrainedTVars2_42);
  mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), UnconstrainedTVars2_42, &UnconstrainedTVars_43);
  if ((ExistQVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    UnconstrainedUnivTVars_44 = UnconstrainedTVars_43;
    UnconstrainedExistTVars_45 = (MR_Word) ((MR_Unsigned) 0U);
    ExistHeadTypeInfoVars_46 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_76_76 = STATE_VARIABLE_Info_75_75;
  }
  else
  {
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), UnconstrainedTVars_43, ExistQVars_28, &UnconstrainedUnivTVars_44);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), UnconstrainedTVars_43, UnconstrainedUnivTVars_44, &UnconstrainedExistTVars_45);
    check_hlds__polymorphism_clause__make_head_vars_5_p_0(UnconstrainedExistTVars_45, ArgTypeVarSet_27, &ExistHeadTypeInfoVars_46, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_76_76);
  }
  check_hlds__polymorphism_clause__make_head_vars_5_p_0(UnconstrainedUnivTVars_44, ArgTypeVarSet_27, &UnivHeadTypeInfoVars_49, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_77_77);
  ExtraHeadTypeInfoVars_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), UnivHeadTypeInfoVars_49, ExistHeadTypeInfoVars_46);
  *AllExtraHeadTypeInfoVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), UnconstrainedInstanceTypeInfoVars_19, ExtraHeadTypeInfoVars_50);
  {
    Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (UnconstrainedExistTVars_45));
    MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (UnconstrainedUnivTVars_44));
    MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (UnconstrainedInstanceTVars_18));
    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
  }
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), Var_78, AllUnconstrainedTVars_22);
  hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), UnivHeadTypeInfoVars_49, HeadVars0_20, &HeadVars1_51);
  hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), ExistHeadTypeInfoVars_46, HeadVars1_51, &HeadVars2_52);
  hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), UnivHeadTypeClassInfoVars_38, HeadVars2_52, &HeadVars3_53);
  hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), *ExistHeadTypeClassInfoVars_24, HeadVars3_53, HeadVars_21);
  parse_tree__prog_mode__in_mode_1_p_0(&In_54);
  parse_tree__prog_mode__out_mode_1_p_0(&Out_55);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), UnconstrainedUnivTVars_44, &NumUnconstrainedUnivTVars_56);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), UnconstrainedExistTVars_45, &NumUnconstrainedExistTVars_57);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), UnivHeadTypeClassInfoVars_38, &NumUnivClassInfoVars_58);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), *ExistHeadTypeClassInfoVars_24, &NumExistClassInfoVars_59);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnconstrainedUnivTVars_56, ((MR_Box) (In_54)), &UnivTypeInfoModes_60);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnconstrainedExistTVars_57, ((MR_Box) (Out_55)), &ExistTypeInfoModes_61);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnivClassInfoVars_58, ((MR_Box) (In_54)), &UnivTypeClassInfoModes_62);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExistClassInfoVars_59, ((MR_Box) (Out_55)), &ExistTypeClassInfoModes_63);
  hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnivTypeInfoModes_60, STATE_VARIABLE_ExtraArgModes_0_68, &STATE_VARIABLE_ExtraArgModes_82_82);
  hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExistTypeInfoModes_61, STATE_VARIABLE_ExtraArgModes_82_82, &STATE_VARIABLE_ExtraArgModes_83_83);
  hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnivTypeClassInfoModes_62, STATE_VARIABLE_ExtraArgModes_83_83, &STATE_VARIABLE_ExtraArgModes_84_84);
  hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExistTypeClassInfoModes_63, STATE_VARIABLE_ExtraArgModes_84_84, STATE_VARIABLE_ExtraArgModes_69);
  check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_RttiVarMaps_86_86);
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[0]), UnivHeadTypeInfoVars_49, &UnivTypeLocns_65);
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[1]), UnconstrainedUnivTVars_44, UnivTypeLocns_65, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_86_86)), &conv2_STATE_VARIABLE_RttiVarMaps_89_89);
  STATE_VARIABLE_RttiVarMaps_89_89 = ((MR_Word) (conv2_STATE_VARIABLE_RttiVarMaps_89_89));
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[2]), ExistHeadTypeInfoVars_46, &ExistTypeLocns_66);
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[3]), UnconstrainedExistTVars_45, ExistTypeLocns_66, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_89_89)), &conv5_STATE_VARIABLE_RttiVarMaps_92_92);
  STATE_VARIABLE_RttiVarMaps_92_92 = ((MR_Word) (conv5_STATE_VARIABLE_RttiVarMaps_92_92));
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[4]), UnconstrainedInstanceTypeInfoVars_19, &UnconstrainedInstanceTypeLocns_67);
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[1]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[5]), UnconstrainedInstanceTVars_18, UnconstrainedInstanceTypeLocns_67, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_92_92)), &conv8_STATE_VARIABLE_RttiVarMaps_95_95);
  STATE_VARIABLE_RttiVarMaps_95_95 = ((MR_Word) (conv8_STATE_VARIABLE_RttiVarMaps_95_95));
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_clause_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_clause_scalar_common_3[6]), UnivHeadTypeClassInfoVars_38, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_95_95)), &conv10_STATE_VARIABLE_RttiVarMaps_97_97);
  STATE_VARIABLE_RttiVarMaps_97_97 = ((MR_Word) (conv10_STATE_VARIABLE_RttiVarMaps_97_97));
  check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_97_97, STATE_VARIABLE_Info_77_77, STATE_VARIABLE_Info_71);
}

static void MR_CALL 
check_hlds__polymorphism_clause__make_head_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeVarSet_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word TypeVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TVarKindMap_15;
    MR_Word Kind_16;
    MR_Word Type_17;
    MR_Word Var_18;
    MR_Word TypeInfoVars1_23;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_String TypeVarName_19;

    check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_Info_0_4, &TVarKindMap_15);
    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_15, TypeVar_10, &Kind_16);
    {
      Type_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_17, 0) = ((MR_Box) (TypeVar_10));
      MR_hl_field(MR_mktag(0), Type_17, 1) = ((MR_Box) (Kind_16));
    }
    check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_17, (MR_Integer) 0, &Var_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_2, TypeVar_10, &TypeVarName_19);
    if (succeeded)
    {
      MR_String VarName_20;
      MR_Word VarTable0_21;
      MR_Word VarTable_22;

      VarName_20 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", TypeVarName_19);
      check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(STATE_VARIABLE_Info_27_27, &VarTable0_21);
      parse_tree__var_table__update_var_name_4_p_0(Var_18, VarName_20, VarTable0_21, &VarTable_22);
      check_hlds__polymorphism_info__poly_info_set_var_table_3_p_0(VarTable_22, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_29_29);
    }
    else
      STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_27_27;
    check_hlds__polymorphism_clause__make_head_vars_5_p_0(TypeVars_11, TypeVarSet_2, &TypeInfoVars1_23, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeInfoVars1_23));
    }
  }
}

void mercury__check_hlds__polymorphism_clause__init(void)
{
}

void mercury__check_hlds__polymorphism_clause__init_type_tables(void)
{
}

void mercury__check_hlds__polymorphism_clause__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism_clause__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism_clause.
