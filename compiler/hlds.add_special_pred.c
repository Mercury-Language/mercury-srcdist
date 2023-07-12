/*
** Automatically generated from `add_special_pred.m'
** by the Mercury compiler,
** version 22.01.7-beta-2023-07-12
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


// :- module hlds.add_special_pred.
// :- implementation.

/*
INIT mercury__hlds__add_special_pred__init
ENDINIT
*/

#include "hlds.add_special_pred.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_special_pred__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_0;

static const MR_EnumFunctorDesc hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_1;

static const MR_EnumFunctorDescPtr hlds__add_special_pred__hlds__add_special_pred__enum_ordinal_ordered_decl_maybe_defn_0[2];

static const MR_EnumFunctorDescPtr hlds__add_special_pred__hlds__add_special_pred__enum_name_ordered_decl_maybe_defn_0[2];

static const MR_Integer hlds__add_special_pred__hlds__add_special_pred__functor_number_map_decl_maybe_defn_0[2];

static MR_bool MR_CALL 
hlds__add_special_pred__IntroducedFrom__pred__add_lazily_generated_special_pred__445__1_2_p_0(
  MR_Word ErrorProcs_25,
  MR_Word HeadVar__2_35);

static void MR_CALL 
hlds__add_special_pred____Compare____decl_maybe_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__add_special_pred____Unify____decl_maybe_defn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_unify_pred_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_special_pred__make_tuple_args_and_repns_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_special_pred_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_special_pred__add_lazily_generated_special_pred_11_p_0(
  MR_Word SpecialId_12,
  MR_Word Item_13,
  MR_Word TVarSet_14,
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word TypeBody_17,
  MR_Word Context_18,
  MR_Word TypeStatus_19,
  MR_Word * PredId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29);

static void MR_CALL 
hlds__add_special_pred__add_clauses_for_special_pred_4_p_0(
  MR_Word SpecDefnInfo_5,
  MR_Word STATE_VARIABLE_PredInfo_0_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
hlds__add_special_pred__adjust_special_pred_status_3_p_0(
  MR_Word SpecialPredId_4,
  MR_Word TypeStatus_5,
  MR_Word * STATE_VARIABLE_PredStatus_9);

static MR_bool MR_CALL 
hlds__add_special_pred____Unify____decl_maybe_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_special_pred____Compare____decl_maybe_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__add_special_pred_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_2[3][1];

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_4[1][7];




static /* final */ const MR_Box hlds__add_special_pred_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_2[3][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_special_pred__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__add_special_pred__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_body_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_special_pred__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_EnumFunctorDesc hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_0 = {
  (MR_String) "declaration_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_1 = {
  (MR_String) "decl_and_clauses",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__add_special_pred__hlds__add_special_pred__enum_ordinal_ordered_decl_maybe_defn_0[2] = {
  &hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_0,
  &hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_1
};

static const MR_EnumFunctorDescPtr hlds__add_special_pred__hlds__add_special_pred__enum_name_ordered_decl_maybe_defn_0[2] = {
  &hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_1,
  &hlds__add_special_pred__hlds__add_special_pred__enum_functor_desc_decl_maybe_defn_0_0
};

static const MR_Integer hlds__add_special_pred__hlds__add_special_pred__functor_number_map_decl_maybe_defn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__add_special_pred__hlds__add_special_pred__type_ctor_info_decl_maybe_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__add_special_pred____Unify____decl_maybe_defn_0_0_10001)),
  ((MR_Box) (hlds__add_special_pred____Compare____decl_maybe_defn_0_0_10001)),
  (MR_String) "hlds.add_special_pred",
  (MR_String) "decl_maybe_defn",
  {     hlds__add_special_pred__hlds__add_special_pred__enum_name_ordered_decl_maybe_defn_0 },
  {     hlds__add_special_pred__hlds__add_special_pred__enum_ordinal_ordered_decl_maybe_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__add_special_pred__hlds__add_special_pred__functor_number_map_decl_maybe_defn_0,

};

static MR_bool MR_CALL 
hlds__add_special_pred__IntroducedFrom__pred__add_lazily_generated_special_pred__445__1_2_p_0(
  MR_Word ErrorProcs_25,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_special_pred_scalar_common_1[1]), ((MR_Box) (ErrorProcs_25)), ((MR_Box) (HeadVar__2_35)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_special_pred____Compare____decl_maybe_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
hlds__add_special_pred____Unify____decl_maybe_defn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_special_pred__IntroducedFrom__pred__add_lazily_generated_special_pred__445__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word * PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word Type_8;
    MR_Word TVarSet_9;
    MR_Word TypeBody_10;
    MR_Word Context_11;
    MR_Word TypeTable_26;
    MR_Word TypeDefn_27;
    MR_Word TypeParams_28;
    MR_Word KindMap_29;
    MR_Word TypeStatus_30;
    MR_Word TypeArgs_31;
    MR_Word Var_32;
    MR_Word SpecialPredMaps_47;
    MR_Word PredInfo0_48;
    MR_Word PredInfo1_49;
    MR_Word ErrorProcs_50;
    MR_Word PredInfo_52;
    MR_Word STATE_VARIABLE_ModuleInfo_31_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_ModuleInfo_36_59;
    MR_Word _InstForTypeSpecs_51;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &TypeTable_26);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_26, TypeCtor_5, &TypeDefn_27);
    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_27, &TVarSet_9);
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_27, &TypeParams_28);
    hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_27, &KindMap_29);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_27, &TypeBody_10);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_27, &TypeStatus_30);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_27, &Context_11);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__add_special_pred_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (TypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (TypeBody_10));
      MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (TypeStatus_30));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140hlds.add_special_pred.collect_type_defn\'/6", (MR_String) "not generated lazily");
    parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_29, TypeParams_28, &TypeArgs_31);
    parse_tree__prog_type__construct_type_3_p_0(TypeCtor_5, TypeArgs_31, &Type_8);
    hlds__add_special_pred__add_special_pred_decl_8_p_0((MR_Integer) 2, TVarSet_9, Type_8, TypeCtor_5, (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_special_pred_scalar_common_2[0])))), Context_11, STATE_VARIABLE_ModuleInfo_0_13, &STATE_VARIABLE_ModuleInfo_31_54);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_31_54, &SpecialPredMaps_47);
    hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_47, (MR_Integer) 2, TypeCtor_5, PredId_6);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_31_54, *PredId_6, &PredInfo0_48);
    check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(PredInfo0_48, &PredInfo1_49);
    check_hlds__post_typecheck__propagate_checked_types_into_pred_modes_5_p_0(STATE_VARIABLE_ModuleInfo_31_54, &ErrorProcs_50, &_InstForTypeSpecs_51, PredInfo1_49, &PredInfo_52);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&hlds__add_special_pred_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (ErrorProcs_50));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140hlds.add_special_pred.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    hlds__hlds_module__module_info_set_pred_info_4_p_0(*PredId_6, PredInfo_52, STATE_VARIABLE_ModuleInfo_31_54, &STATE_VARIABLE_ModuleInfo_36_59);
    check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*PredId_6, STATE_VARIABLE_ModuleInfo_36_59, STATE_VARIABLE_ModuleInfo_14);
  }
}

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_unify_pred_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_special_pred__add_lazily_generated_unify_pred_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word * PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool succeeded;
    MR_Word Type_8;
    MR_Word TVarSet_9;
    MR_Word TypeBody_10;
    MR_Word Context_11;
    MR_Word TypeStatus_12;
    MR_Word DeclMaybeDefn_13;

    succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_5);
    if (succeeded)
    {
      MR_Integer TupleArity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
      MR_Word TVarSet0_28;
      MR_Word TupleArgTVars_29;
      MR_Word TupleArgTypes_30;
      MR_Word CtorArgs_32;
      MR_Word CtorArgRepns_33;
      MR_Word Ctor_36;
      MR_Word CtorRepn_37;
      MR_Word ConsCtorMap_38;
      MR_Word Repn_40;
      MR_Word TypeBodyDu_44;
      MR_Word Var_45;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_59;
      MR_Word Var_61;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_28);
      mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TupleArity_27, &TupleArgTVars_29, TVarSet0_28, &TVarSet_9);
      Var_45 = mercury__map__init_0_f_0((MR_Word) (&hlds__add_special_pred_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_45, TupleArgTVars_29, &TupleArgTypes_30);
      parse_tree__prog_type__construct_type_3_p_0(TypeCtor_5, TupleArgTypes_30, &Type_8);
      mercury__term__context_init_1_p_0(&Context_11);
      hlds__add_special_pred__make_tuple_args_and_repns_loop_5_p_0(Context_11, TupleArgTypes_30, (MR_Integer) 0, &CtorArgs_32, &CtorArgRepns_33);
      {
        Ctor_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Ctor_36, 0) = ((MR_Box) (MR_Word) (UINT32_C(0)));
        MR_hl_field(MR_mktag(0), Ctor_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Ctor_36, 2) = ((MR_Box) (&hlds__add_special_pred_scalar_common_2[2]));
        MR_hl_field(MR_mktag(0), Ctor_36, 3) = ((MR_Box) (CtorArgs_32));
        MR_hl_field(MR_mktag(0), Ctor_36, 4) = ((MR_Box) (TupleArity_27));
        MR_hl_field(MR_mktag(0), Ctor_36, 5) = ((MR_Box) (Context_11));
      }
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Ctor_36));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        CtorRepn_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorRepn_37, 0) = ((MR_Box) (MR_Word) (UINT32_C(0)));
        MR_hl_field(MR_mktag(0), CtorRepn_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CtorRepn_37, 2) = ((MR_Box) (&hlds__add_special_pred_scalar_common_2[2]));
        MR_hl_field(MR_mktag(0), CtorRepn_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_special_pred_scalar_common_1[6])));
        MR_hl_field(MR_mktag(0), CtorRepn_37, 4) = ((MR_Box) (CtorArgRepns_33));
        MR_hl_field(MR_mktag(0), CtorRepn_37, 5) = ((MR_Box) (TupleArity_27));
        MR_hl_field(MR_mktag(0), CtorRepn_37, 6) = ((MR_Box) (Context_11));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (CtorRepn_37));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) ((MR_String) "{}"));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__from_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_special_pred_scalar_common_1[3]), Var_49, &ConsCtorMap_38);
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CtorRepn_37));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Repn_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Repn_40, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), Repn_40, 1) = ((MR_Box) (ConsCtorMap_38));
        MR_hl_field(MR_mktag(0), Repn_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Repn_40, 3) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(0), Repn_40, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Repn_40));
      }
      {
        TypeBodyDu_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeBodyDu_44, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), TypeBodyDu_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), TypeBodyDu_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), TypeBodyDu_44, 3) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), TypeBodyDu_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      TypeBody_10 = (MR_Word) ((MR_Word) (TypeBodyDu_44));
    }
    else
    {
      MR_Word TypeTable_78;
      MR_Word TypeDefn_79;
      MR_Word TypeParams_80;
      MR_Word KindMap_81;
      MR_Word TypeStatus_82;
      MR_Word TypeArgs_83;
      MR_Word Var_84;

      hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &TypeTable_78);
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_78, TypeCtor_5, &TypeDefn_79);
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_79, &TVarSet_9);
      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_79, &TypeParams_80);
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_79, &KindMap_81);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_79, &TypeBody_10);
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_79, &TypeStatus_82);
      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_79, &Context_11);
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&hlds__add_special_pred_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (hlds__add_special_pred__add_lazily_generated_unify_pred_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14));
        MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (TypeCtor_5));
        MR_hl_field(MR_mktag(0), Var_84, 5) = ((MR_Box) (TypeBody_10));
        MR_hl_field(MR_mktag(0), Var_84, 6) = ((MR_Box) (TypeStatus_82));
      }
      mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140hlds.add_special_pred.collect_type_defn\'/6", (MR_String) "not generated lazily");
      parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_81, TypeParams_80, &TypeArgs_83);
      parse_tree__prog_type__construct_type_3_p_0(TypeCtor_5, TypeArgs_83, &Type_8);
    }
    succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(STATE_VARIABLE_ModuleInfo_0_14, TypeCtor_5, TypeBody_10);
    if (succeeded)
    {
      TypeStatus_12 = (MR_Word) (((MR_Box) ((MR_Unsigned) 8U)));
      DeclMaybeDefn_13 = (MR_Integer) 1;
    }
    else
    {
      TypeStatus_12 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_special_pred_scalar_common_2[0]))));
      DeclMaybeDefn_13 = (MR_Integer) 0;
    }
    hlds__add_special_pred__add_lazily_generated_special_pred_11_p_0((MR_Integer) 0, DeclMaybeDefn_13, TVarSet_9, Type_8, TypeCtor_5, TypeBody_10, Context_11, TypeStatus_12, PredId_6, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
  }
}

static void MR_CALL 
hlds__add_special_pred__make_tuple_args_and_repns_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ArgType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word CtorArg_12;
    MR_Word CtorArgs_13;
    MR_Word CtorArgRepn_14;
    MR_Word CtorArgRepns_15;
    MR_Word ArgPosWidth_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Integer Var_21;

    {
      CtorArg_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CtorArg_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), CtorArg_12, 1) = ((MR_Box) (ArgType_9));
      MR_hl_field(MR_mktag(0), CtorArg_12, 2) = ((MR_Box) (HeadVar__1_1));
    }
    Var_18 = (MR_Word) (HeadVar__3_3);
    Var_19 = (MR_Word) (HeadVar__3_3);
    {
      ArgPosWidth_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgPosWidth_16, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), ArgPosWidth_16, 1) = ((MR_Box) (Var_19));
    }
    {
      CtorArgRepn_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CtorArgRepn_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), CtorArgRepn_14, 1) = ((MR_Box) (ArgType_9));
      MR_hl_field(MR_mktag(0), CtorArgRepn_14, 2) = ((MR_Box) (ArgPosWidth_16));
      MR_hl_field(MR_mktag(0), CtorArgRepn_14, 3) = ((MR_Box) (HeadVar__1_1));
    }
    Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
    hlds__add_special_pred__make_tuple_args_and_repns_loop_5_p_0(HeadVar__1_1, ArgTypes_10, Var_21, &CtorArgs_13, &CtorArgRepns_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorArg_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorArgs_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorArgRepn_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorArgRepns_15));
    }
  }
}

static MR_bool MR_CALL 
hlds__add_special_pred__add_lazily_generated_special_pred_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_special_pred__IntroducedFrom__pred__add_lazily_generated_special_pred__445__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_special_pred__add_lazily_generated_special_pred_11_p_0(
  MR_Word SpecialId_12,
  MR_Word Item_13,
  MR_Word TVarSet_14,
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word TypeBody_17,
  MR_Word Context_18,
  MR_Word TypeStatus_19,
  MR_Word * PredId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29)
{
  {
    MR_bool succeeded;
    MR_Word SpecialPredMaps_22;
    MR_Word PredInfo0_23;
    MR_Word PredInfo1_24;
    MR_Word ErrorProcs_25;
    MR_Word PredInfo_27;
    MR_Word STATE_VARIABLE_ModuleInfo_31_31;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word _InstForTypeSpecs_26;

    switch (Item_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__add_special_pred__add_special_pred_decl_defn_9_p_0(SpecialId_12, TVarSet_14, Type_15, TypeCtor_16, TypeBody_17, TypeStatus_19, Context_18, STATE_VARIABLE_ModuleInfo_0_28, &STATE_VARIABLE_ModuleInfo_31_31);
        break;
      case (MR_Integer) 0:
        hlds__add_special_pred__add_special_pred_decl_8_p_0(SpecialId_12, TVarSet_14, Type_15, TypeCtor_16, TypeStatus_19, Context_18, STATE_VARIABLE_ModuleInfo_0_28, &STATE_VARIABLE_ModuleInfo_31_31);
        break;
    }
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_31_31, &SpecialPredMaps_22);
    hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_22, SpecialId_12, TypeCtor_16, PredId_20);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_31_31, *PredId_20, &PredInfo0_23);
    switch (Item_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PredInfo1_24 = PredInfo0_23;
        break;
      case (MR_Integer) 0:
        check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(PredInfo0_23, &PredInfo1_24);
        break;
    }
    check_hlds__post_typecheck__propagate_checked_types_into_pred_modes_5_p_0(STATE_VARIABLE_ModuleInfo_31_31, &ErrorProcs_25, &_InstForTypeSpecs_26, PredInfo1_24, &PredInfo_27);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__add_special_pred_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__add_special_pred__add_lazily_generated_special_pred_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ErrorProcs_25));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140hlds.add_special_pred.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    hlds__hlds_module__module_info_set_pred_info_4_p_0(*PredId_20, PredInfo_27, STATE_VARIABLE_ModuleInfo_31_31, &STATE_VARIABLE_ModuleInfo_36_36);
    check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*PredId_20, STATE_VARIABLE_ModuleInfo_36_36, STATE_VARIABLE_ModuleInfo_29);
  }
}

void MR_CALL 
hlds__add_special_pred__add_special_pred_decl_defns_for_type_maybe_lazily_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_bool succeeded;
    MR_Word TypeBody_8;
    MR_Word TypeStatus_9;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_6, &TypeBody_8);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_6, &TypeStatus_9);
    succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, TypeCtor_5, TypeBody_8, TypeStatus_9);
    if (succeeded)
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
    else
    {
      MR_Word TVarSet_10;
      MR_Word KindMap_11;
      MR_Word TypeParams_12;
      MR_Word ArgTypes_13;
      MR_Word Type_14;
      MR_Word Context_15;

      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_6, &TVarSet_10);
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_6, &KindMap_11);
      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_6, &TypeParams_12);
      parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_11, TypeParams_12, &ArgTypes_13);
      parse_tree__prog_type__construct_type_3_p_0(TypeCtor_5, ArgTypes_13, &Type_14);
      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_6, &Context_15);
      hlds__add_special_pred__add_special_pred_decl_defns_for_type_eagerly_8_p_0(TVarSet_10, Type_14, TypeCtor_5, TypeBody_8, TypeStatus_9, Context_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
    }
  }
}

void MR_CALL 
hlds__add_special_pred__add_special_pred_decl_defns_for_type_eagerly_8_p_0(
  MR_Word TVarSet_9,
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word TypeBody_12,
  MR_Word TypeStatus_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_bool succeeded;

    succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(STATE_VARIABLE_ModuleInfo_0_19, TypeCtor_11, TypeBody_12);
    if (succeeded)
    {
      MR_Word ThisModule_16;
      MR_Word STATE_VARIABLE_ModuleInfo_22_22;

      hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 0, TVarSet_9, Type_10, TypeCtor_11, TypeBody_12, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_22_22);
      ThisModule_16 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_13);
      switch (ThisModule_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SpecialPredMaps_17;
            MR_Word Var_18;

            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_22_22, &SpecialPredMaps_17);
            succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecialPredMaps_17, (MR_Integer) 2, TypeCtor_11, &Var_18);
            if (succeeded)
              *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_22_22;
            else
              hlds__add_special_pred__add_special_pred_decl_8_p_0((MR_Integer) 2, TVarSet_9, Type_10, TypeCtor_11, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_20);
          }
          break;
        case (MR_Integer) 1:
          hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 2, TVarSet_9, Type_10, TypeCtor_11, TypeBody_12, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_20);
          break;
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_ModuleInfo_29_29;

      hlds__add_special_pred__add_special_pred_decl_8_p_0((MR_Integer) 0, TVarSet_9, Type_10, TypeCtor_11, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_29_29);
      hlds__add_special_pred__add_special_pred_decl_8_p_0((MR_Integer) 2, TVarSet_9, Type_10, TypeCtor_11, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_20);
    }
  }
}

void MR_CALL 
hlds__add_special_pred__add_special_pred_decl_defn_9_p_0(
  MR_Word SpecialPredId_10,
  MR_Word TVarSet_11,
  MR_Word Type0_12,
  MR_Word TypeCtor_13,
  MR_Word TypeBody_14,
  MR_Word TypeStatus0_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word Type_18;
    MR_Word PredStatus_19;
    MR_Word SpecialPredMaps0_20;
    MR_Word SpecialPredMaps1_24;
    MR_Word PredId_25;
    MR_Word PredMap0_26;
    MR_Word PredInfo0_27;
    MR_Word PredInfo1_29;
    MR_Word SpecDefnInfo_33;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word STATE_VARIABLE_PredStatus_12_69;
    MR_String Name_53;
    MR_Word TypeInfo_13_60;
    MR_Word TypeCtor_52;
    MR_Word Var_59;
    MR_Word Var_82;
    MR_Word Var_21;
    MR_Box conv0_PredInfo0_27;
    MR_Word Var_49;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_12, &TypeCtor_52, &Var_59);
    if (succeeded)
    {
      TypeInfo_13_60 = (MR_Word) (&hlds__add_special_pred_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_60, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_59)));
      if (succeeded)
        succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(TypeCtor_52, &Name_53);
    }
    if (succeeded)
    {
      MR_Word Var_55;
      MR_Word Var_57;

      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Name_53));
      }
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__prog_type__construct_type_3_p_0(Var_55, (MR_Word) ((MR_Unsigned) 0U), &Type_18);
    }
    else
      Type_18 = Type0_12;
    Var_82 = (MR_Word) (TypeStatus0_15);
    if ((Var_82 == (MR_Word) ((MR_Unsigned) 4U)))
      succeeded = MR_TRUE;
    else
    if ((Var_82 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      STATE_VARIABLE_PredStatus_12_69 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_special_pred_scalar_common_2[1]))));
    else
    {
      MR_Word Var_72 = (MR_Word) (TypeStatus0_15);

      succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 20U));
      if (succeeded)
        STATE_VARIABLE_PredStatus_12_69 = (MR_Word) (((MR_Box) ((MR_Unsigned) 12U)));
      else
      {
        MR_Word OldStatus_65 = (MR_Word) (TypeStatus0_15);

        STATE_VARIABLE_PredStatus_12_69 = (MR_Word) (OldStatus_65);
      }
    }
    succeeded = (SpecialPredId_10 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_76 = (MR_Word) (STATE_VARIABLE_PredStatus_12_69);

      succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 2);
      if (succeeded)
        PredStatus_19 = (MR_Word) (((MR_Box) ((MR_Unsigned) 8U)));
      else
      {
        MR_Word Var_79 = (MR_Word) (STATE_VARIABLE_PredStatus_12_69);

        succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 12U));
        if (succeeded)
          PredStatus_19 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
        else
          PredStatus_19 = STATE_VARIABLE_PredStatus_12_69;
      }
    }
    else
      PredStatus_19 = STATE_VARIABLE_PredStatus_12_69;
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &SpecialPredMaps0_20);
    succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecialPredMaps0_20, SpecialPredId_10, TypeCtor_13, &Var_21);
    if (succeeded)
      STATE_VARIABLE_ModuleInfo_36_36 = STATE_VARIABLE_ModuleInfo_0_34;
    else
    {
      MR_Word PredOldStatus_22 = (MR_Word) (PredStatus_19);
      MR_Word TypeStatus_23 = (MR_Word) (PredOldStatus_22);

      hlds__add_special_pred__add_special_pred_decl_8_p_0(SpecialPredId_10, TVarSet_11, Type_18, TypeCtor_13, TypeStatus_23, Context_16, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_36_36);
    }
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_36_36, &SpecialPredMaps1_24);
    hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps1_24, SpecialPredId_10, TypeCtor_13, &PredId_25);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_36_36, &PredMap0_26);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredMap0_26, ((MR_Box) (PredId_25)), &conv0_PredInfo0_27);
    PredInfo0_27 = ((MR_Word) (conv0_PredInfo0_27));
    Var_49 = (MR_Word) (PredStatus_19);
    if ((Var_49 == (MR_Word) ((MR_Unsigned) 8U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) Var_49)) == (MR_Integer) 2))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_19, PredInfo0_27, &PredInfo1_29);
    else
    {
      MR_Word TypeBodyDu_30;
      MR_Word OldPredStatus_32;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;

      succeeded = ((MR_tag((MR_Word) TypeBody_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        TypeBodyDu_30 = (MR_Word) ((MR_Word) (TypeBody_14));
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_30, (MR_Integer) 2))));
        succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_27, &OldPredStatus_32);
          Var_40 = (MR_Word) (OldPredStatus_32);
          succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 8U));
          if (succeeded)
          {
            Var_41 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_19);
            succeeded = (Var_41 == (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
        hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_19, PredInfo0_27, &PredInfo1_29);
      else
        PredInfo1_29 = PredInfo0_27;
    }
    {
      SpecDefnInfo_33 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 0) = (MR_Box) ((MR_Unsigned) (SpecialPredId_10));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 1) = ((MR_Box) (PredId_25));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 2) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 3) = ((MR_Box) (Type_18));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 4) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 5) = ((MR_Box) (TypeBody_14));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 6) = ((MR_Box) (TypeStatus0_15));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_33, 7) = ((MR_Box) (Context_16));
    }
    hlds__add_special_pred__add_clauses_for_special_pred_4_p_0(SpecDefnInfo_33, PredInfo1_29, STATE_VARIABLE_ModuleInfo_36_36, STATE_VARIABLE_ModuleInfo_35);
  }
}

static void MR_CALL 
hlds__add_special_pred__add_clauses_for_special_pred_4_p_0(
  MR_Word SpecDefnInfo_5,
  MR_Word STATE_VARIABLE_PredInfo_0_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_Word ClausesInfo_8;
    MR_Word Markers0_9;
    MR_Word Markers_10;
    MR_Word PredId_11;
    MR_Word PredMap0_12;
    MR_Word PredMap_13;
    MR_Word STATE_VARIABLE_ModuleInfo_17_17;
    MR_Word STATE_VARIABLE_PredInfo_18_18;
    MR_Word STATE_VARIABLE_PredInfo_20_20;

    check_hlds__unify_proc__generate_clauses_for_special_pred_4_p_0(SpecDefnInfo_5, &ClausesInfo_8, STATE_VARIABLE_ModuleInfo_0_15, &STATE_VARIABLE_ModuleInfo_17_17);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_8, STATE_VARIABLE_PredInfo_0_14, &STATE_VARIABLE_PredInfo_18_18);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_18_18, &Markers0_9);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_9, &Markers_10);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_10, STATE_VARIABLE_PredInfo_18_18, &STATE_VARIABLE_PredInfo_20_20);
    PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 1))));
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_17_17, &PredMap0_12);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (STATE_VARIABLE_PredInfo_20_20)), PredMap0_12, &PredMap_13);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_13, STATE_VARIABLE_ModuleInfo_17_17, STATE_VARIABLE_ModuleInfo_16);
  }
}

void MR_CALL 
hlds__add_special_pred__add_special_pred_decl_8_p_0(
  MR_Word SpecialPredId_9,
  MR_Word TVarSet_10,
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word TypeStatus_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53)
{
  {
    MR_Word ModuleName_16;
    MR_Word ArgTypes_17;
    MR_Word ArgModes_18;
    MR_Word Det_19;
    MR_String PredBaseName_20;
    MR_Word PredName_21;
    MR_Integer PredArity_22;
    MR_Word ClausesInfo0_23;
    MR_Word Origin_24;
    MR_Word PredStatus_25;
    MR_Word Proofs_28;
    MR_Word ConstraintMap_29;
    MR_Word Markers_30;
    MR_Word VarNameRemap_33;
    MR_Word PredInfo0_34;
    MR_Word InstVarSet_36;
    MR_Word PredInfo_39;
    MR_Word PredicateTable0_41;
    MR_Word PredId_42;
    MR_Word PredicateTable_43;
    MR_Word SpecialPredMaps0_44;
    MR_Word SpecialPredMaps_47;
    MR_Word Var_55;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_ModuleInfo_64_64;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Integer _ProcId_40;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &ModuleName_16);
    hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_9, Type_11, &ArgTypes_17, &ArgModes_18, &Det_19);
    PredBaseName_20 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_9, TypeCtor_12);
    {
      PredName_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredName_21, 0) = ((MR_Box) (PredBaseName_20));
    }
    PredArity_22 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(SpecialPredId_9);
    Var_55 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, PredArity_22, Var_55, &ClausesInfo0_23);
    {
      Origin_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Origin_24, 0) = (MR_Box) ((MR_Unsigned) (SpecialPredId_9));
      MR_hl_field(MR_mktag(1), Origin_24, 1) = ((MR_Box) (TypeCtor_12));
    }
    hlds__add_special_pred__adjust_special_pred_status_3_p_0(SpecialPredId_9, TypeStatus_13, &PredStatus_25);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_28);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_29);
    hlds__hlds_pred__init_markers_1_p_0(&Markers_30);
    mercury__map__init_1_p_0((MR_Word) (&hlds__add_special_pred_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_33);
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_16, PredName_21, PredArity_22, (MR_Integer) 0, Context_14, Origin_24, PredStatus_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_special_pred_scalar_common_2[0]), Markers_30, ArgTypes_17, TVarSet_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_special_pred_scalar_common_1[4]), Proofs_28, ConstraintMap_29, ClausesInfo0_23, VarNameRemap_33, &PredInfo0_34);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_36);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ArgModes_18));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Det_19));
    }
    hlds__add_pred__add_new_proc_14_p_0(Context_14, (MR_Word) ((MR_Unsigned) 0U), PredArity_22, InstVarSet_36, ArgModes_18, Var_60, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, Var_62, (MR_Integer) 1, (MR_Integer) 1, PredInfo0_34, &PredInfo_39, &_ProcId_40);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &PredicateTable0_41);
    hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_39, &PredId_42, PredicateTable0_41, &PredicateTable_43);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_43, STATE_VARIABLE_ModuleInfo_0_52, &STATE_VARIABLE_ModuleInfo_64_64);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_64_64, &SpecialPredMaps0_44);
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 0))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 1))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 2))));
    switch (SpecialPredId_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word CompareMap_51;
          MR_Word Var_78;
          MR_Word Var_79;

          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_42)), Var_93, &CompareMap_51);
          Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 0))));
          Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 1))));
          {
            SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 0) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 1) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 2) = ((MR_Box) (CompareMap_51));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IndexMap_49;
          MR_Word Var_73;
          MR_Word Var_75;

          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_42)), Var_94, &IndexMap_49);
          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 0))));
          Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 2))));
          {
            SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 1) = ((MR_Box) (IndexMap_49));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 2) = ((MR_Box) (Var_75));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word UnifyMap_46;
          MR_Word Var_69;
          MR_Word Var_70;

          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_42)), Var_95, &UnifyMap_46);
          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 1))));
          Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecialPredMaps0_44, (MR_Integer) 2))));
          {
            SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 0) = ((MR_Box) (UnifyMap_46));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 1) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_47, 2) = ((MR_Box) (Var_70));
          }
        }
        break;
    }
    hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(SpecialPredMaps_47, STATE_VARIABLE_ModuleInfo_64_64, STATE_VARIABLE_ModuleInfo_53);
  }
}

static void MR_CALL 
hlds__add_special_pred__adjust_special_pred_status_3_p_0(
  MR_Word SpecialPredId_4,
  MR_Word TypeStatus_5,
  MR_Word * STATE_VARIABLE_PredStatus_9)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_PredStatus_12_12;
    MR_Word Var_25 = (MR_Word) (TypeStatus_5);

    if ((Var_25 == (MR_Word) ((MR_Unsigned) 4U)))
      succeeded = MR_TRUE;
    else
    if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      STATE_VARIABLE_PredStatus_12_12 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_special_pred_scalar_common_2[1]))));
    else
    {
      MR_Word Var_15 = (MR_Word) (TypeStatus_5);

      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 20U));
      if (succeeded)
        STATE_VARIABLE_PredStatus_12_12 = (MR_Word) (((MR_Box) ((MR_Unsigned) 12U)));
      else
      {
        MR_Word OldStatus_7 = (MR_Word) (TypeStatus_5);

        STATE_VARIABLE_PredStatus_12_12 = (MR_Word) (OldStatus_7);
      }
    }
    succeeded = (SpecialPredId_4 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_19 = (MR_Word) (STATE_VARIABLE_PredStatus_12_12);

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 2);
      if (succeeded)
        *STATE_VARIABLE_PredStatus_9 = (MR_Word) (((MR_Box) ((MR_Unsigned) 8U)));
      else
      {
        MR_Word Var_22 = (MR_Word) (STATE_VARIABLE_PredStatus_12_12);

        succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 12U));
        if (succeeded)
          *STATE_VARIABLE_PredStatus_9 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
        else
          *STATE_VARIABLE_PredStatus_9 = STATE_VARIABLE_PredStatus_12_12;
      }
    }
    else
      *STATE_VARIABLE_PredStatus_9 = STATE_VARIABLE_PredStatus_12_12;
  }
}

static MR_bool MR_CALL 
hlds__add_special_pred____Unify____decl_maybe_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__add_special_pred____Unify____decl_maybe_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_special_pred____Compare____decl_maybe_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__add_special_pred____Compare____decl_maybe_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__add_special_pred__init(void)
{
}

void mercury__hlds__add_special_pred__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__add_special_pred__hlds__add_special_pred__type_ctor_info_decl_maybe_defn_0);
}

void mercury__hlds__add_special_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__add_special_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.add_special_pred.
