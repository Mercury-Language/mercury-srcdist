/*
** Automatically generated from `ctgc.util.m'
** by the Mercury compiler,
** version rotd-2018-08-02
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


// :- module transform_hlds.ctgc.util.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__util__init
ENDINIT
*/

#include "transform_hlds.ctgc.util.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s {
  MR_Word transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__ModuleInfo_3;
  MR_Word transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PPIds_4;
  MR_bool transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded;
  jmp_buf transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__commit_0;
  MR_Word transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredId_5;
  MR_Word transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_7;
  MR_Word transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredInfo_11;
  MR_Word transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredStatus_12;
  MR_Word transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_14;
  MR_Box transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__conv0_Var_7;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
transform_hlds__ctgc__util__reverse_renaming_5_p_0(
  MR_Word RevSubst_6,
  MR_Word K0_7,
  MR_Word V0_8,
  MR_Word STATE_VARIABLE_Acc_0_12,
  MR_Word * STATE_VARIABLE_Acc_13);

static void MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_4(
  void * env_ptr_arg);


static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_3[1][8];




static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_1[2][2] = {
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
};

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__util_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static void MR_CALL 
transform_hlds__ctgc__util__reverse_renaming_5_p_0(
  MR_Word RevSubst_6,
  MR_Word K0_7,
  MR_Word V0_8,
  MR_Word STATE_VARIABLE_Acc_0_12,
  MR_Word * STATE_VARIABLE_Acc_13)
{
  {
    MR_Word K_10;
    MR_Word V_11;

    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(RevSubst_6, K0_7, &K_10);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(RevSubst_6, V0_8, &V_11);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (K_10)), ((MR_Box) (V_11)), STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCat_5;

    TypeCat_5 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_3, Type_4);
    if ((TypeCat_5 == (MR_Word) ((MR_Unsigned) 4U)))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) TypeCat_5)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCat_5, (MR_Integer) 0))) == (MR_Integer) 1))))
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeCat_5, (MR_Integer) 1))));

      succeeded = (Var_17 == (MR_Integer) 4);
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__var_needs_sharing_analysis_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_7;
    MR_Word Type_8;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_5, &VarTypes_7);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_6, &Type_8);
    succeeded = transform_hlds__ctgc__util__type_needs_sharing_analysis_2_p_0(ModuleInfo_4, Type_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__type_needs_sharing_analysis_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCat_5;

    TypeCat_5 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_3, Type_4);
    switch (MR_tag((MR_Word) TypeCat_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(TypeCat_5)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCat_5, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeCat_5, (MR_Integer) 1))));

              switch (Var_17) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Acc_13;

    transform_hlds__ctgc__util__reverse_renaming_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Acc_13);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Acc_13));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PPId_8,
  MR_Word ActualTypes_9,
  MR_Word CallerTypeVarSet_10,
  MR_Word CallerExternalTypeParams_11)
{
  {
    MR_bool succeeded;
    MR_Word TypeSubst_12;
    MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_8, (MR_Integer) 0))));
    MR_Word CalleePredInfo_15;
    MR_Word CalleeTypeVarSet_16;
    MR_Word CalleeArgTypes0_17;
    MR_Word CalleeExistQVars_18;
    MR_Word CalleeTypeVarRenaming_20;
    MR_Word CalleeArgTypes_21;
    MR_Word TypeSubst1_23;
    MR_Word CalleeTypeVarRenamingKeys_27;
    MR_Word CalleeTypeVarRenamingValues_28;
    MR_Word RevCalleeTypeVarRenaming_29;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word _TypeVarSet_19;
    MR_Box conv1_TypeSubst_12;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_13, &CalleePredInfo_15);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CalleePredInfo_15, &CalleeTypeVarSet_16);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(CalleePredInfo_15, &CalleeArgTypes0_17);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(CalleePredInfo_15, &CalleeExistQVars_18);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(CallerTypeVarSet_10, CalleeTypeVarSet_16, &_TypeVarSet_19, &CalleeTypeVarRenaming_20);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(CalleeTypeVarRenaming_20, CalleeArgTypes0_17, &CalleeArgTypes_21);
    if ((CalleeExistQVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeSubst0_22;

      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(CalleeArgTypes_21, ActualTypes_9, &TypeSubst0_22);
      if (succeeded)
        TypeSubst1_23 = TypeSubst0_22;
      else
      {
        TypeSubst1_23 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      }
    }
    else
    {
      MR_Word TypeSubst0_35;
      MR_Word TypeSubstPrime_26;

      mercury__map__init_1_p_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubstPrime_26);
      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(CalleeArgTypes_21, ActualTypes_9, CallerExternalTypeParams_11, TypeSubstPrime_26, &TypeSubst0_35);
      if (succeeded)
        TypeSubst1_23 = TypeSubst0_35;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.util", (MR_String) "function \140transform_hlds.ctgc.util.get_type_substitution\'/5", (MR_String) "type unification failed");
      }
    }
    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), CalleeTypeVarRenaming_20, &CalleeTypeVarRenamingKeys_27);
    mercury__map__values_2_p_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), CalleeTypeVarRenaming_20, &CalleeTypeVarRenamingValues_28);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), CalleeTypeVarRenamingValues_28, CalleeTypeVarRenamingKeys_27, &RevCalleeTypeVarRenaming_29);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&transform_hlds__ctgc__util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (transform_hlds__ctgc__util__get_type_substitution_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (RevCalleeTypeVarRenaming_29));
    }
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__ctgc__util_scalar_common_2[0]), Var_33, TypeSubst1_23, ((MR_Box) (Var_34)), &conv1_TypeSubst_12);
    TypeSubst_12 = ((MR_Word) (conv1_TypeSubst_12));
    return TypeSubst_12;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__util__get_variable_renaming_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PPId_6,
  MR_Word ActualArgs_7)
{
  {
    MR_Word VariableRenaming_8;
    MR_Word ProcInfo_10;
    MR_Word FormalVars_11;
    MR_Word _PredInfo_9;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PPId_6, &_PredInfo_9, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &FormalVars_11);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__util_scalar_common_1[0]), FormalVars_11, ActualArgs_7, &VariableRenaming_8);
    return VariableRenaming_8;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PredId_4)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_7;
    MR_Word PredStatus_8;
    MR_Word Var_10;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_3, PredId_4, &PredInfo_7);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_7, &PredStatus_8);
    Var_10 = (MR_Word) (PredStatus_8);
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 2);
    if (succeeded)
    {
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__pred_requires_no_analysis_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PredId_4)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_5;
    MR_Word PredStatus_6;
    MR_Word Var_8;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_3, PredId_4, &PredInfo_5);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_5, &PredStatus_6);
    Var_8 = (MR_Word) (PredStatus_6);
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 2);
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_7 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__conv0_Var_7));
    transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Integer Var_6;
      MR_Word Var_13;

      (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_7, (MR_Integer) 0))));
      Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_7, (MR_Integer) 1))));
      hlds__hlds_module__module_info_pred_info_3_p_0((env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__ModuleInfo_3, (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredId_5, &(env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredInfo_11);
      hlds__hlds_pred__pred_info_get_status_2_p_0((env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredInfo_11, &(env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredStatus_12);
      (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_14 = (MR_Word) ((env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredStatus_12);
      (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_14)) == (MR_Integer) 2);
      if ((env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded)
      {
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_14, (MR_Integer) 0))));
        transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &(env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__conv0_Var_7, (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PPIds_4, transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_3, env_ptr);
        }
        (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPIds_4)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s env;

    (env).transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__ModuleInfo_3 = ModuleInfo_3;
    (env).transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PPIds_4 = PPIds_4;
    transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_4(&env);
    return (env).transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded;
  }
}

void mercury__transform_hlds__ctgc__util__init(void)
{
}

void mercury__transform_hlds__ctgc__util__init_type_tables(void)
{
}

void mercury__transform_hlds__ctgc__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.util.
