/*
** Automatically generated from `ctgc.util.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module transform_hlds.ctgc.util. */
/* :- implementation. */

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
  MR_Word transform_hlds__ctgc__util__RevSubst_6,
  MR_Word transform_hlds__ctgc__util__K0_7,
  MR_Word transform_hlds__ctgc__util__V0_8,
  MR_Word transform_hlds__ctgc__util__STATE_VARIABLE_Acc_0_12,
  MR_Word * transform_hlds__ctgc__util__STATE_VARIABLE_Acc_13);

static void MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0_1(
  MR_Box transform_hlds__ctgc__util__closure_arg,
  MR_Box transform_hlds__ctgc__util__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__util__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__util__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__util__wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_1(
  void * transform_hlds__ctgc__util__env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_3(
  void * transform_hlds__ctgc__util__env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_2(
  void * transform_hlds__ctgc__util__env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_4(
  void * transform_hlds__ctgc__util__env_ptr_arg);


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
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static void MR_CALL 
transform_hlds__ctgc__util__reverse_renaming_5_p_0(
  MR_Word transform_hlds__ctgc__util__RevSubst_6,
  MR_Word transform_hlds__ctgc__util__K0_7,
  MR_Word transform_hlds__ctgc__util__V0_8,
  MR_Word transform_hlds__ctgc__util__STATE_VARIABLE_Acc_0_12,
  MR_Word * transform_hlds__ctgc__util__STATE_VARIABLE_Acc_13)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__K_10;
    MR_Word transform_hlds__ctgc__util__V_11;

    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(transform_hlds__ctgc__util__RevSubst_6, transform_hlds__ctgc__util__K0_7, &transform_hlds__ctgc__util__K_10);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(transform_hlds__ctgc__util__RevSubst_6, transform_hlds__ctgc__util__V0_8, &transform_hlds__ctgc__util__V_11);
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (transform_hlds__ctgc__util__K_10)), ((MR_Box) (transform_hlds__ctgc__util__V_11)), transform_hlds__ctgc__util__STATE_VARIABLE_Acc_0_12, transform_hlds__ctgc__util__STATE_VARIABLE_Acc_13);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
  MR_Word transform_hlds__ctgc__util__Type_4)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__TypeCat_5;

    {
      transform_hlds__ctgc__util__TypeCat_5 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__Type_4);
    }
    if ((transform_hlds__ctgc__util__TypeCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      transform_hlds__ctgc__util__succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__util__TypeCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word transform_hlds__ctgc__util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 1)));

        transform_hlds__ctgc__util__succeeded = (transform_hlds__ctgc__util__Var_15 == (MR_Integer) 2);
      }
    else
      transform_hlds__ctgc__util__succeeded = MR_FALSE;
    return transform_hlds__ctgc__util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__var_needs_sharing_analysis_3_p_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_4,
  MR_Word transform_hlds__ctgc__util__ProcInfo_5,
  MR_Word transform_hlds__ctgc__util__Var_6)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__VarTypes_7;
    MR_Word transform_hlds__ctgc__util__Type_8;

    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__util__ProcInfo_5, &transform_hlds__ctgc__util__VarTypes_7);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__util__VarTypes_7, transform_hlds__ctgc__util__Var_6, &transform_hlds__ctgc__util__Type_8);
    }
    {
      transform_hlds__ctgc__util__succeeded = transform_hlds__ctgc__util__type_needs_sharing_analysis_2_p_0(transform_hlds__ctgc__util__ModuleInfo_4, transform_hlds__ctgc__util__Type_8);
    }
    return transform_hlds__ctgc__util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__type_needs_sharing_analysis_2_p_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
  MR_Word transform_hlds__ctgc__util__Type_4)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__TypeCat_5;

    {
      transform_hlds__ctgc__util__TypeCat_5 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__Type_4);
    }
    switch (MR_tag((MR_Word) transform_hlds__ctgc__util__TypeCat_5)) {
      default:
        transform_hlds__ctgc__util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__ctgc__util__TypeCat_5)) {
          default:
            transform_hlds__ctgc__util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            transform_hlds__ctgc__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            transform_hlds__ctgc__util__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 0)))) {
          default:
            transform_hlds__ctgc__util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__ctgc__util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 1)));

              switch (transform_hlds__ctgc__util__Var_15) {
                default:
                  transform_hlds__ctgc__util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  transform_hlds__ctgc__util__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  transform_hlds__ctgc__util__succeeded = MR_TRUE;
                  break;
              }
            }
            break;
        }
        break;
    }
    return transform_hlds__ctgc__util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0_1(
  MR_Box transform_hlds__ctgc__util__closure_arg,
  MR_Box transform_hlds__ctgc__util__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__util__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__util__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__util__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__ctgc__util__closure = transform_hlds__ctgc__util__closure_arg;
    MR_Word transform_hlds__ctgc__util__conv0_STATE_VARIABLE_Acc_13;

    {
      transform_hlds__ctgc__util__reverse_renaming_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__util__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__util__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__util__wrapper_arg_3), &transform_hlds__ctgc__util__conv0_STATE_VARIABLE_Acc_13);
    }
    *transform_hlds__ctgc__util__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__util__conv0_STATE_VARIABLE_Acc_13));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_7,
  MR_Word transform_hlds__ctgc__util__PPId_8,
  MR_Word transform_hlds__ctgc__util__ActualTypes_9,
  MR_Word transform_hlds__ctgc__util__CallerTypeVarSet_10,
  MR_Word transform_hlds__ctgc__util__CallerExternalTypeParams_11)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__TypeSubst_12;
    MR_Word transform_hlds__ctgc__util__TypeInfo_41_41;
    MR_Word transform_hlds__ctgc__util__TypeCtorInfo_46_46;
    MR_Word transform_hlds__ctgc__util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__PPId_8, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__util__CalleePredInfo_15;
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarSet_16;
    MR_Word transform_hlds__ctgc__util__CalleeArgTypes0_17;
    MR_Word transform_hlds__ctgc__util__CalleeExistQVars_18;
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarRenaming_20;
    MR_Word transform_hlds__ctgc__util__CalleeArgTypes_21;
    MR_Word transform_hlds__ctgc__util__TypeSubst1_23;
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarRenamingKeys_27;
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarRenamingValues_28;
    MR_Word transform_hlds__ctgc__util__RevCalleeTypeVarRenaming_29;
    MR_Word transform_hlds__ctgc__util__Var_33;
    MR_Word transform_hlds__ctgc__util__Var_34;
    MR_Integer transform_hlds__ctgc__util__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__PPId_8, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__util___TypeVarSet_19;
    MR_Box transform_hlds__ctgc__util__conv1_TypeSubst_12;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__util__ModuleInfo_7, transform_hlds__ctgc__util__PredId_13, &transform_hlds__ctgc__util__CalleePredInfo_15);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__ctgc__util__CalleePredInfo_15, &transform_hlds__ctgc__util__CalleeTypeVarSet_16);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__ctgc__util__CalleePredInfo_15, &transform_hlds__ctgc__util__CalleeArgTypes0_17);
    }
    {
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__ctgc__util__CalleePredInfo_15, &transform_hlds__ctgc__util__CalleeExistQVars_18);
    }
    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__ctgc__util__CallerTypeVarSet_10, transform_hlds__ctgc__util__CalleeTypeVarSet_16, &transform_hlds__ctgc__util___TypeVarSet_19, &transform_hlds__ctgc__util__CalleeTypeVarRenaming_20);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(transform_hlds__ctgc__util__CalleeTypeVarRenaming_20, transform_hlds__ctgc__util__CalleeArgTypes0_17, &transform_hlds__ctgc__util__CalleeArgTypes_21);
    }
    if ((transform_hlds__ctgc__util__CalleeExistQVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__ctgc__util__TypeSubst0_22;

        {
          transform_hlds__ctgc__util__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__ctgc__util__CalleeArgTypes_21, transform_hlds__ctgc__util__ActualTypes_9, &transform_hlds__ctgc__util__TypeSubst0_22);
        }
        if (transform_hlds__ctgc__util__succeeded)
          transform_hlds__ctgc__util__TypeSubst1_23 = transform_hlds__ctgc__util__TypeSubst0_22;
        else
          {
            {
              transform_hlds__ctgc__util__TypeSubst1_23 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            }
          }
      }
    else
      {
        MR_Word transform_hlds__ctgc__util__TypeSubst0_35;
        MR_Word transform_hlds__ctgc__util__TypeSubstPrime_26;

        {
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__ctgc__util__TypeSubstPrime_26);
        }
        {
          transform_hlds__ctgc__util__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(transform_hlds__ctgc__util__CalleeArgTypes_21, transform_hlds__ctgc__util__ActualTypes_9, transform_hlds__ctgc__util__CallerExternalTypeParams_11, transform_hlds__ctgc__util__TypeSubstPrime_26, &transform_hlds__ctgc__util__TypeSubst0_35);
        }
        if (transform_hlds__ctgc__util__succeeded)
          transform_hlds__ctgc__util__TypeSubst1_23 = transform_hlds__ctgc__util__TypeSubst0_35;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.util", (MR_String) "function \140transform_hlds.ctgc.util.get_type_substitution\'/5", (MR_String) "type unification failed");
            }
          }
      }
    transform_hlds__ctgc__util__TypeInfo_41_41 = (MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1];
    {
      mercury__map__keys_2_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__CalleeTypeVarRenaming_20, &transform_hlds__ctgc__util__CalleeTypeVarRenamingKeys_27);
    }
    {
      mercury__map__values_2_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__CalleeTypeVarRenaming_20, &transform_hlds__ctgc__util__CalleeTypeVarRenamingValues_28);
    }
    {
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__CalleeTypeVarRenamingValues_28, transform_hlds__ctgc__util__CalleeTypeVarRenamingKeys_27, &transform_hlds__ctgc__util__RevCalleeTypeVarRenaming_29);
    }
    {
      transform_hlds__ctgc__util__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__Var_33, 0) = ((MR_Box) (&transform_hlds__ctgc__util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__Var_33, 1) = ((MR_Box) (transform_hlds__ctgc__util__get_type_substitution_5_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__Var_33, 3) = ((MR_Box) (transform_hlds__ctgc__util__RevCalleeTypeVarRenaming_29));
    }
    transform_hlds__ctgc__util__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      transform_hlds__ctgc__util__Var_34 = mercury__map__init_0_f_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeCtorInfo_46_46);
    }
    {
      mercury__map__foldl_4_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeCtorInfo_46_46, (MR_Word) &transform_hlds__ctgc__util_scalar_common_2[0], transform_hlds__ctgc__util__Var_33, transform_hlds__ctgc__util__TypeSubst1_23, ((MR_Box) (transform_hlds__ctgc__util__Var_34)), &transform_hlds__ctgc__util__conv1_TypeSubst_12);
    }
    transform_hlds__ctgc__util__TypeSubst_12 = ((MR_Word) transform_hlds__ctgc__util__conv1_TypeSubst_12);
    return transform_hlds__ctgc__util__TypeSubst_12;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__util__get_variable_renaming_3_f_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_5,
  MR_Word transform_hlds__ctgc__util__PPId_6,
  MR_Word transform_hlds__ctgc__util__ActualArgs_7)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__VariableRenaming_8;
    MR_Word transform_hlds__ctgc__util__TypeInfo_12_12;
    MR_Word transform_hlds__ctgc__util__ProcInfo_10;
    MR_Word transform_hlds__ctgc__util__FormalVars_11;
    MR_Word transform_hlds__ctgc__util___PredInfo_9;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__util__ModuleInfo_5, transform_hlds__ctgc__util__PPId_6, &transform_hlds__ctgc__util___PredInfo_9, &transform_hlds__ctgc__util__ProcInfo_10);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__util__ProcInfo_10, &transform_hlds__ctgc__util__FormalVars_11);
    }
    transform_hlds__ctgc__util__TypeInfo_12_12 = (MR_Word) &transform_hlds__ctgc__util_scalar_common_1[0];
    {
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__ctgc__util__TypeInfo_12_12, transform_hlds__ctgc__util__TypeInfo_12_12, transform_hlds__ctgc__util__FormalVars_11, transform_hlds__ctgc__util__ActualArgs_7, &transform_hlds__ctgc__util__VariableRenaming_8);
    }
    return transform_hlds__ctgc__util__VariableRenaming_8;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
  MR_Word transform_hlds__ctgc__util__PredId_4)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__PredInfo_7;
    MR_Word transform_hlds__ctgc__util__PredStatus_8;
    MR_Word transform_hlds__ctgc__util__Var_10;
    MR_Word transform_hlds__ctgc__util__Var_9;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__PredId_4, &transform_hlds__ctgc__util__PredInfo_7);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__util__PredInfo_7, &transform_hlds__ctgc__util__PredStatus_8);
    }
    transform_hlds__ctgc__util__Var_10 = (MR_Word) transform_hlds__ctgc__util__PredStatus_8;
    transform_hlds__ctgc__util__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__util__Var_10)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__ctgc__util__succeeded)
      transform_hlds__ctgc__util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__util__Var_10, (MR_Integer) 0)));
    transform_hlds__ctgc__util__succeeded = !(transform_hlds__ctgc__util__succeeded);
    return transform_hlds__ctgc__util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__pred_requires_no_analysis_2_p_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
  MR_Word transform_hlds__ctgc__util__PredId_4)
{
  {
    MR_bool transform_hlds__ctgc__util__succeeded;
    MR_Word transform_hlds__ctgc__util__PredInfo_5;
    MR_Word transform_hlds__ctgc__util__PredStatus_6;
    MR_Word transform_hlds__ctgc__util__Var_8;
    MR_Word transform_hlds__ctgc__util__Var_7;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__PredId_4, &transform_hlds__ctgc__util__PredInfo_5);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__util__PredInfo_5, &transform_hlds__ctgc__util__PredStatus_6);
    }
    transform_hlds__ctgc__util__Var_8 = (MR_Word) transform_hlds__ctgc__util__PredStatus_6;
    transform_hlds__ctgc__util__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__util__Var_8)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__ctgc__util__succeeded)
      transform_hlds__ctgc__util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__util__Var_8, (MR_Integer) 0)));
    return transform_hlds__ctgc__util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_1(
  void * transform_hlds__ctgc__util__env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_3(
  void * transform_hlds__ctgc__util__env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

    (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_7 = ((MR_Word) (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__conv0_Var_7);
    {
      transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_2(transform_hlds__ctgc__util__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_2(
  void * transform_hlds__ctgc__util__env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

    {
      MR_Integer transform_hlds__ctgc__util__Var_6;
      MR_Word transform_hlds__ctgc__util__Var_13;

      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_7, (MR_Integer) 0)));
      transform_hlds__ctgc__util__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_7, (MR_Integer) 1)));
      {
        hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__ModuleInfo_3, (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredId_5, &(transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredInfo_11);
      }
      {
        hlds__hlds_pred__pred_info_get_status_2_p_0((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredInfo_11, &(transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredStatus_12);
      }
      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_14 = (MR_Word) (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PredStatus_12;
      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_14)) == (MR_mktag((MR_Integer) 2)));
      if ((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded)
        {
          transform_hlds__ctgc__util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__Var_14, (MR_Integer) 0)));
          {
            transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_1(transform_hlds__ctgc__util__env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_4(
  void * transform_hlds__ctgc__util__env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__set__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &(transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__conv0_Var_7, (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PPIds_4, transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_3, transform_hlds__ctgc__util__env_ptr);
          }
        }
        (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0(
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
  MR_Word transform_hlds__ctgc__util__PPIds_4)
{
  {
    struct transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0_s transform_hlds__ctgc__util__env;

    (transform_hlds__ctgc__util__env).transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__ModuleInfo_3 = transform_hlds__ctgc__util__ModuleInfo_3;
    (transform_hlds__ctgc__util__env).transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__PPIds_4 = transform_hlds__ctgc__util__PPIds_4;
    {
      transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_4(&transform_hlds__ctgc__util__env);
    }
    return (transform_hlds__ctgc__util__env).transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0_env_0__succeeded;
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

/* :- end_module transform_hlds.ctgc.util. */
