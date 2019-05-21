/*
** Automatically generated from `add_special_pred.m'
** by the Mercury compiler,
** version rotd-2018-02-01
** configured for x86_64-pc-linux-gnu.
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


// :- module hlds.add_special_pred.
// :- implementation.

/*
INIT mercury__hlds__add_special_pred__init
ENDINIT
*/

#include "hlds.add_special_pred.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.add_pred.mih"
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
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
hlds__add_special_pred__add_clauses_for_special_pred_4_p_0(
  MR_Word SpecDefnInfo_5,
  MR_Word STATE_VARIABLE_PredInfo_0_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
hlds__add_special_pred__adjust_special_pred_status_3_p_0(
  MR_Word SpecialPredId_4,
  MR_Word TypeStatus_5,
  MR_Word * STATE_VARIABLE_PredStatus_9);


static /* final */ const MR_Box hlds__add_special_pred_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_2[1][1];




static /* final */ const MR_Box hlds__add_special_pred_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_special_pred_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__add_special_pred_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  {
    MR_bool succeeded;

    succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, TypeCtor_11, TypeBody_12);
    if (succeeded)
    {
      MR_Word ThisModule_16;
      MR_Word STATE_VARIABLE_ModuleInfo_23_23;

      hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 0, TVarSet_9, Type_10, TypeCtor_11, TypeBody_12, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_23_23);
      ThisModule_16 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_13);
      switch (ThisModule_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SpecialPredMaps_17;
            MR_Word Var_18;

            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_23_23, &SpecialPredMaps_17);
            succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecialPredMaps_17, (MR_Integer) 2, TypeCtor_11, &Var_18);
            if (succeeded)
              *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_23_23;
            else
            {
              hlds__add_special_pred__add_special_pred_decl_8_p_0((MR_Integer) 2, TVarSet_9, Type_10, TypeCtor_11, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_23_23, STATE_VARIABLE_ModuleInfo_21);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 2, TVarSet_9, Type_10, TypeCtor_11, TypeBody_12, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_23_23, STATE_VARIABLE_ModuleInfo_21);
          }
          break;
      }
    }
    else
    {
      MR_Word SpecialPredIds_19 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_special_pred_scalar_common_1[2]);
      MR_Word SpecialPredId_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_19, (MR_Integer) 0)));
      MR_Word SpecialPredIds_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_19, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ModuleInfo_27_52;
      MR_Word SpecialPredId_62;
      MR_Word SpecialPredIds_63;

      hlds__add_special_pred__add_special_pred_decl_8_p_0(SpecialPredId_42, TVarSet_9, Type_10, TypeCtor_11, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_27_52);
      SpecialPredId_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_43, (MR_Integer) 0)));
      SpecialPredIds_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_43, (MR_Integer) 1)));
      hlds__add_special_pred__add_special_pred_decl_8_p_0(SpecialPredId_62, TVarSet_9, Type_10, TypeCtor_11, TypeStatus_13, Context_14, STATE_VARIABLE_ModuleInfo_27_52, STATE_VARIABLE_ModuleInfo_21);
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34)
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
    MR_Word SpecDefnInfo_32;
    MR_Word STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word STATE_VARIABLE_PredStatus_12_67;
    MR_String Name_51;
    MR_Word TypeInfo_13_58;
    MR_Word TypeCtor_50;
    MR_Word Var_57;
    MR_Word Var_80;
    MR_Word Var_21;
    MR_Box conv0_PredInfo0_27;
    MR_Word Var_47;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_12, &TypeCtor_50, &Var_57);
    if (succeeded)
    {
      TypeInfo_13_58 = (MR_Word) &hlds__add_special_pred_scalar_common_1[3];
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (Var_57)));
      if (succeeded)
        succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(TypeCtor_50, &Name_51);
    }
    if (succeeded)
    {
      MR_Word Var_53;
      MR_Word Var_55;

      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Name_51));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__prog_type__construct_type_3_p_0(Var_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Type_18);
    }
    else
      Type_18 = Type0_12;
    Var_80 = (MR_Word) TypeStatus0_15;
    if ((Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      succeeded = MR_TRUE;
    else
    if ((Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      STATE_VARIABLE_PredStatus_12_67 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_special_pred_scalar_common_2[0])));
    }
    else
    {
      MR_Word Var_70 = (MR_Word) TypeStatus0_15;

      succeeded = (Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
      if (succeeded)
      {
        STATE_VARIABLE_PredStatus_12_67 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
      else
      {
        MR_Word OldStatus_63 = (MR_Word) TypeStatus0_15;

        STATE_VARIABLE_PredStatus_12_67 = (MR_Word) OldStatus_63;
      }
    }
    succeeded = (SpecialPredId_10 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_74 = (MR_Word) STATE_VARIABLE_PredStatus_12_67;
      MR_Word Var_64;

      succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_74, (MR_Integer) 0)));
        PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      }
      else
      {
        MR_Word Var_77 = (MR_Word) STATE_VARIABLE_PredStatus_12_67;

        succeeded = (Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        if (succeeded)
        {
          PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        }
        else
          PredStatus_19 = STATE_VARIABLE_PredStatus_12_67;
      }
    }
    else
      PredStatus_19 = STATE_VARIABLE_PredStatus_12_67;
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &SpecialPredMaps0_20);
    succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecialPredMaps0_20, SpecialPredId_10, TypeCtor_13, &Var_21);
    if (succeeded)
      STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_0_33;
    else
    {
      MR_Word PredOldStatus_22 = (MR_Word) PredStatus_19;
      MR_Word TypeStatus_23 = (MR_Word) PredOldStatus_22;

      hlds__add_special_pred__add_special_pred_decl_8_p_0(SpecialPredId_10, TVarSet_11, Type_18, TypeCtor_13, TypeStatus_23, Context_16, STATE_VARIABLE_ModuleInfo_0_33, &STATE_VARIABLE_ModuleInfo_35_35);
    }
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &SpecialPredMaps1_24);
    hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps1_24, SpecialPredId_10, TypeCtor_13, &PredId_25);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &PredMap0_26);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, PredMap0_26, ((MR_Box) (PredId_25)), &conv0_PredInfo0_27);
    PredInfo0_27 = ((MR_Word) conv0_PredInfo0_27);
    Var_47 = (MR_Word) PredStatus_19;
    if ((Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 2))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_19, PredInfo0_27, &PredInfo1_29);
    else
    {
      MR_Word OldPredStatus_31;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_30;

      succeeded = ((MR_tag((MR_Word) TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 0)));
        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 1)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 2)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 3)));
        succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_27, &OldPredStatus_31);
          Var_39 = (MR_Word) OldPredStatus_31;
          succeeded = (Var_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          if (succeeded)
          {
            Var_40 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_19);
            succeeded = (Var_40 == (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
        hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_19, PredInfo0_27, &PredInfo1_29);
      else
        PredInfo1_29 = PredInfo0_27;
    }
    {
      SpecDefnInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 0) = ((MR_Box) (SpecialPredId_10));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 1) = ((MR_Box) (PredId_25));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 2) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 3) = ((MR_Box) (Type_18));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 4) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 5) = ((MR_Box) (TypeBody_14));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 6) = ((MR_Box) (TypeStatus0_15));
      MR_hl_field(MR_mktag(0), SpecDefnInfo_32, 7) = ((MR_Box) (Context_16));
    }
    hlds__add_special_pred__add_clauses_for_special_pred_4_p_0(SpecDefnInfo_32, PredInfo1_29, STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_ModuleInfo_34);
  }
}

static void MR_CALL 
hlds__add_special_pred__add_clauses_for_special_pred_4_p_0(
  MR_Word SpecDefnInfo_5,
  MR_Word STATE_VARIABLE_PredInfo_0_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_Word ClausesInfo_8;
    MR_Word Markers0_9;
    MR_Word Markers_10;
    MR_Word SpecialPredId_11;
    MR_Word PredId_12;
    MR_Word TypeCtor_15;
    MR_Word Origin_19;
    MR_Word PredMap0_20;
    MR_Word PredMap_21;
    MR_Word STATE_VARIABLE_ModuleInfo_25_25;
    MR_Word STATE_VARIABLE_PredInfo_26_26;
    MR_Word STATE_VARIABLE_PredInfo_28_28;
    MR_Word STATE_VARIABLE_PredInfo_29_29;
    MR_Word _TVarSet_13;
    MR_Word _Type_14;
    MR_Word _TypeBody_16;
    MR_Word _TypeStatus0_17;
    MR_Word _Context_18;

    check_hlds__unify_proc__generate_clauses_for_special_pred_4_p_0(SpecDefnInfo_5, &ClausesInfo_8, STATE_VARIABLE_ModuleInfo_0_23, &STATE_VARIABLE_ModuleInfo_25_25);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_8, STATE_VARIABLE_PredInfo_0_22, &STATE_VARIABLE_PredInfo_26_26);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_26_26, &Markers0_9);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_9, &Markers_10);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_10, STATE_VARIABLE_PredInfo_26_26, &STATE_VARIABLE_PredInfo_28_28);
    SpecialPredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 0)));
    PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 1)));
    _TVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 2)));
    _Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 3)));
    TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 4)));
    _TypeBody_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 5)));
    _TypeStatus0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 6)));
    _Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 7)));
    {
      Origin_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Origin_19, 0) = ((MR_Box) (SpecialPredId_11));
      MR_hl_field(MR_mktag(0), Origin_19, 1) = ((MR_Box) (TypeCtor_15));
    }
    hlds__hlds_pred__pred_info_set_origin_3_p_0(Origin_19, STATE_VARIABLE_PredInfo_28_28, &STATE_VARIABLE_PredInfo_29_29);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_25_25, &PredMap0_20);
    mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ((MR_Box) (PredId_12)), ((MR_Box) (STATE_VARIABLE_PredInfo_29_29)), PredMap0_20, &PredMap_21);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_21, STATE_VARIABLE_ModuleInfo_25_25, STATE_VARIABLE_ModuleInfo_24);
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52)
{
  {
    MR_Word TypeCtorInfo_80_80;
    MR_Word ModuleName_16;
    MR_Word ArgTypes_17;
    MR_Word ArgModes_18;
    MR_Word Det_19;
    MR_String PredBaseName_20;
    MR_Word PredName_21;
    MR_Integer Arity_22;
    MR_Word ClausesInfo0_23;
    MR_Word Origin_24;
    MR_Word PredStatus_25;
    MR_Word Proofs_27;
    MR_Word ConstraintMap_28;
    MR_Word Markers_29;
    MR_Word VarNameRemap_32;
    MR_Word PredInfo0_33;
    MR_Word InstVarSet_35;
    MR_Word PredInfo_38;
    MR_Word PredicateTable0_40;
    MR_Word PredId_41;
    MR_Word PredicateTable_42;
    MR_Word SpecialPredMaps0_43;
    MR_Word SpecialPredMaps_46;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_ModuleInfo_63_63;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Integer _ProcId_39;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &ModuleName_16);
    hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_9, Type_11, &ArgTypes_17, &ArgModes_18, &Det_19);
    PredBaseName_20 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_9, TypeCtor_12);
    {
      PredName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredName_21, 0) = ((MR_Box) (PredBaseName_20));
    }
    Arity_22 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(SpecialPredId_9);
    Var_54 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, Arity_22, Var_54, &ClausesInfo0_23);
    {
      Origin_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Origin_24, 0) = ((MR_Box) (SpecialPredId_9));
      MR_hl_field(MR_mktag(0), Origin_24, 1) = ((MR_Box) (TypeCtor_12));
    }
    hlds__add_special_pred__adjust_special_pred_status_3_p_0(SpecialPredId_9, TypeStatus_13, &PredStatus_25);
    TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__init_1_p_0(TypeCtorInfo_80_80, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &Proofs_27);
    mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, TypeCtorInfo_80_80, &ConstraintMap_28);
    hlds__hlds_pred__init_markers_1_p_0(&Markers_29);
    mercury__map__init_1_p_0((MR_Word) &hlds__add_special_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &VarNameRemap_32);
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_16, PredName_21, Arity_22, (MR_Integer) 0, Context_14, Origin_24, PredStatus_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), Markers_29, ArgTypes_17, TVarSet_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__add_special_pred_scalar_common_1[4], Proofs_27, ConstraintMap_28, ClausesInfo0_23, VarNameRemap_32, &PredInfo0_33);
    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &InstVarSet_35);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ArgModes_18));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Det_19));
    }
    hlds__add_pred__add_new_proc_14_p_0(Context_14, (MR_Integer) -1, Arity_22, InstVarSet_35, ArgModes_18, Var_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, Var_61, (MR_Integer) 1, (MR_Integer) 1, PredInfo0_33, &PredInfo_38, &_ProcId_39);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &PredicateTable0_40);
    hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_38, &PredId_41, PredicateTable0_40, &PredicateTable_42);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_42, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_63_63);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_63_63, &SpecialPredMaps0_43);
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
    switch (SpecialPredId_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word CompareMap_50;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;

          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_41)), Var_92, &CompareMap_50);
          Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
          Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 1) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 2) = ((MR_Box) (CompareMap_50));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IndexMap_48;
          MR_Word Var_72;
          MR_Word Var_74;
          MR_Word Var_73;

          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_41)), Var_93, &IndexMap_48);
          Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 1) = ((MR_Box) (IndexMap_48));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 2) = ((MR_Box) (Var_74));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word UnifyMap_45;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_67;

          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_41)), Var_94, &UnifyMap_45);
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
          Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 0) = ((MR_Box) (UnifyMap_45));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 1) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 2) = ((MR_Box) (Var_69));
          }
        }
        break;
    }
    hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(SpecialPredMaps_46, STATE_VARIABLE_ModuleInfo_63_63, STATE_VARIABLE_ModuleInfo_52);
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
    MR_Word Var_25 = (MR_Word) TypeStatus_5;

    if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      succeeded = MR_TRUE;
    else
    if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_special_pred_scalar_common_2[0])));
    }
    else
    {
      MR_Word Var_15 = (MR_Word) TypeStatus_5;

      succeeded = (Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
      if (succeeded)
      {
        STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
      else
      {
        MR_Word OldStatus_7 = (MR_Word) TypeStatus_5;

        STATE_VARIABLE_PredStatus_12_12 = (MR_Word) OldStatus_7;
      }
    }
    succeeded = (SpecialPredId_4 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_19 = (MR_Word) STATE_VARIABLE_PredStatus_12_12;
      MR_Word Var_8;

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_19, (MR_Integer) 0)));
        *STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      }
      else
      {
        MR_Word Var_22 = (MR_Word) STATE_VARIABLE_PredStatus_12_12;

        succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        if (succeeded)
        {
          *STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        }
        else
          *STATE_VARIABLE_PredStatus_9 = STATE_VARIABLE_PredStatus_12_12;
      }
    }
    else
      *STATE_VARIABLE_PredStatus_9 = STATE_VARIABLE_PredStatus_12_12;
  }
}

void mercury__hlds__add_special_pred__init(void)
{
}

void mercury__hlds__add_special_pred__init_type_tables(void)
{
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
