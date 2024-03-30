/*
** Automatically generated from `field_access.m'
** by the Mercury compiler,
** version rotd-2024-03-30
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


// :- module hlds.make_hlds.field_access.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__field_access__init
ENDINIT
*/

#include "hlds.make_hlds.field_access.mih"


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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(
  MR_Word Context_1,
  MR_Word MainContext_2,
  MR_Word SubContext0_3,
  MR_Word HeadVar__4_4,
  MR_Word FieldValueVar_5,
  MR_Word TermInputVar_6,
  MR_Word Purity_7,
  MR_Word * Functor_8,
  MR_Word * FieldSubContext_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_SVarState_0_11,
  MR_Word * STATE_VARIABLE_SVarState_12,
  MR_Word STATE_VARIABLE_SVarStore_0_13,
  MR_Word * STATE_VARIABLE_SVarStore_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word STATE_VARIABLE_QualInfo_0_19,
  MR_Word * STATE_VARIABLE_QualInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(
  MR_Word Context_1,
  MR_Word MainContext_2,
  MR_Word SubContext0_3,
  MR_Word HeadVar__4_4,
  MR_Word FieldValueVar_5,
  MR_Word TermInputVar_6,
  MR_Word TermOutputVar_7,
  MR_Word * Functor_8,
  MR_Word * FieldSubContext_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_SVarState_0_11,
  MR_Word * STATE_VARIABLE_SVarState_12,
  MR_Word STATE_VARIABLE_SVarStore_0_13,
  MR_Word * STATE_VARIABLE_SVarStore_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word STATE_VARIABLE_QualInfo_0_19,
  MR_Word * STATE_VARIABLE_QualInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0(
  MR_Word AccessType_13,
  MR_Word Context_14,
  MR_Word MainContext_15,
  MR_Word SubContext_16,
  MR_Word FieldName_17,
  MR_Word RetArg_18,
  MR_Word Args_19,
  MR_Word Purity_20,
  MR_Word * Functor_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_QualInfo_0_26,
  MR_Word * STATE_VARIABLE_QualInfo_27);

static MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_2[1][3];




static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__field_access_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__field_access_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected field name, found"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__field_access_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__field_access_scalar_common_1[2]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__field_access__hlds__make_hlds__field_access__type_ctor_info_field_list_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__field_access____Unify____field_list_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__field_access____Compare____field_list_0_0_10001)),
  (MR_String) "hlds.make_hlds.field_access",
  (MR_String) "field_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__field_access__parse_field_list_4_p_0(
  MR_Word Term_5,
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeFieldNames_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word FieldNameTerm_9;
  MR_Word OtherFieldNamesTerm_10;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = (strcmp(Var_19, (MR_String) "^") == 0);
      if (succeeded)
      {
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FieldNameTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OtherFieldNamesTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
            succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word FieldName_12;
    MR_Word Args_13;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldNameTerm_9, &FieldName_12, &Args_13);
    if (succeeded)
    {
      MR_Word MaybeFieldNamesTail_14;

      hlds__make_hlds__field_access__parse_field_list_4_p_0(OtherFieldNamesTerm_10, VarSet_6, ContextPieces_7, &MaybeFieldNamesTail_14);
      if (((MR_tag((MR_Word) MaybeFieldNamesTail_14)) == (MR_Integer) 0))
        *MaybeFieldNames_8 = MaybeFieldNamesTail_14;
      else
      {
        MR_Word FieldNamesTail_16 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNamesTail_14, (MR_Integer) 0))));
        MR_Word Var_23;
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (FieldName_12));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (Args_13));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (FieldNamesTail_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFieldNames_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
        }
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_String TermStr_41;
      MR_Word Pieces_42;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_50;

      Var_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldNameTerm_9);
      TermStr_41 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Term_5);
      {
        Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_50, 1) = ((MR_Box) (TermStr_41));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[7])));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__field_access_scalar_common_1[4])));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
      }
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_44);
      {
        Spec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_17, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.field_access.make_field_list_error\'/4"));
        MR_hl_field(1, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_17, 3) = ((MR_Box) (Var_25));
        MR_hl_field(1, Spec_17, 4) = ((MR_Box) (Pieces_42));
      }
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFieldNames_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
      }
    }
  }
  else
  {
    MR_Word FieldName_35;
    MR_Word Args_36;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_5, &FieldName_35, &Args_36);
    if (succeeded)
    {
      MR_Word Var_28;
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (FieldName_35));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (Args_36));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFieldNames_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
      }
    }
    else
    {
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Spec_34;
      MR_String TermStr_57;
      MR_Word Pieces_58;
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_66;

      Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_5);
      TermStr_57 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Term_5);
      {
        Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_66, 1) = ((MR_Box) (TermStr_57));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[7])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__field_access_scalar_common_1[4])));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
      }
      Pieces_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_60);
      {
        Spec_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_34, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.field_access.make_field_list_error\'/4"));
        MR_hl_field(1, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(1, Spec_34, 3) = ((MR_Box) (Var_31));
        MR_hl_field(1, Spec_34, 4) = ((MR_Box) (Pieces_58));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (Spec_34));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFieldNames_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext0_25,
  MR_Word FieldNames_26,
  MR_Word FieldValueVar_27,
  MR_Word TermInputVar_28,
  MR_Word Purity_29,
  MR_Word * Functor_30,
  MR_Word * FieldSubContext_31,
  MR_Word * Goal_32,
  MR_Word STATE_VARIABLE_SVarState_0_41,
  MR_Word * STATE_VARIABLE_SVarState_42,
  MR_Word STATE_VARIABLE_SVarStore_0_43,
  MR_Word * STATE_VARIABLE_SVarStore_44,
  MR_Word STATE_VARIABLE_VarSet_0_45,
  MR_Word * STATE_VARIABLE_VarSet_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  MR_Word Goals_39;
  MR_Word GoalInfo_40;

  hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(Context_23, MainContext_24, SubContext0_25, FieldNames_26, FieldValueVar_27, TermInputVar_28, Purity_29, Functor_30, FieldSubContext_31, &Goals_39, STATE_VARIABLE_SVarState_0_41, STATE_VARIABLE_SVarState_42, STATE_VARIABLE_SVarStore_0_43, STATE_VARIABLE_SVarStore_44, STATE_VARIABLE_VarSet_0_45, STATE_VARIABLE_VarSet_46, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_23, &GoalInfo_40);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_39, GoalInfo_40, Goal_32);
}

void MR_CALL 
hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext_25,
  MR_Word FieldNames_26,
  MR_Word FieldValueVar_27,
  MR_Word TermInputVar_28,
  MR_Word TermOutputVar_29,
  MR_Word * Functor_30,
  MR_Word * FieldSubContext_31,
  MR_Word * Goal_32,
  MR_Word STATE_VARIABLE_SVarState_0_43,
  MR_Word * STATE_VARIABLE_SVarState_44,
  MR_Word STATE_VARIABLE_SVarStore_0_45,
  MR_Word * STATE_VARIABLE_SVarStore_46,
  MR_Word STATE_VARIABLE_VarSet_0_47,
  MR_Word * STATE_VARIABLE_VarSet_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word STATE_VARIABLE_QualInfo_0_51,
  MR_Word * STATE_VARIABLE_QualInfo_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  MR_Word UnifyDCG_39;
  MR_Word Goals1_40;
  MR_Word Goals_41;
  MR_Word GoalInfo_42;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_QualInfo_56_56;

  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (TermInputVar_28));
  }
  hlds__make_hlds__qual_info__make_atomic_unification_8_p_0(TermOutputVar_29, Var_55, Context_23, MainContext_24, SubContext_25, &UnifyDCG_39, STATE_VARIABLE_QualInfo_0_51, &STATE_VARIABLE_QualInfo_56_56);
  hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(Context_23, MainContext_24, SubContext_25, FieldNames_26, FieldValueVar_27, TermOutputVar_29, (MR_Integer) 0, Functor_30, FieldSubContext_31, &Goals1_40, STATE_VARIABLE_SVarState_0_43, STATE_VARIABLE_SVarState_44, STATE_VARIABLE_SVarStore_0_45, STATE_VARIABLE_SVarStore_46, STATE_VARIABLE_VarSet_0_47, STATE_VARIABLE_VarSet_48, STATE_VARIABLE_ModuleInfo_0_49, STATE_VARIABLE_ModuleInfo_50, STATE_VARIABLE_QualInfo_56_56, STATE_VARIABLE_QualInfo_52, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
  {
    Goals_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Goals_41, 0) = ((MR_Box) (UnifyDCG_39));
    MR_hl_field(1, Goals_41, 1) = ((MR_Box) (Goals1_40));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_23, &GoalInfo_42);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_41, GoalInfo_42, Goal_32);
}

static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(
  MR_Word Context_1,
  MR_Word MainContext_2,
  MR_Word SubContext0_3,
  MR_Word HeadVar__4_4,
  MR_Word FieldValueVar_5,
  MR_Word TermInputVar_6,
  MR_Word Purity_7,
  MR_Word * Functor_8,
  MR_Word * FieldSubContext_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_SVarState_0_11,
  MR_Word * STATE_VARIABLE_SVarState_12,
  MR_Word STATE_VARIABLE_SVarStore_0_13,
  MR_Word * STATE_VARIABLE_SVarStore_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word STATE_VARIABLE_QualInfo_0_19,
  MR_Word * STATE_VARIABLE_QualInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.field_access.expand_get_field_function_call_2\'/22", (MR_String) "empty list of field names");
      return;
    }
  else
  {
    MR_Word FieldName_55;
    MR_Word FieldArgs_56;
    MR_Word FieldNames_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word FieldArgVars_70;
    MR_Word FieldArgVarsArgs_71;
    MR_Word GetArgVars_72;
    MR_Word Goals2_82;
    MR_Word ArgContext_83;
    MR_Word GoalInfo_84;
    MR_Word Conj0_85;
    MR_Word Conj_86;
    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_VarSet_100_100;
    MR_Word STATE_VARIABLE_SVarState_101_101;
    MR_Word STATE_VARIABLE_Specs_102_102;
    MR_Word Var_103;
    MR_Word STATE_VARIABLE_SVarState_110_110;
    MR_Word STATE_VARIABLE_SVarStore_111_111;
    MR_Word STATE_VARIABLE_VarSet_112_112;
    MR_Word STATE_VARIABLE_ModuleInfo_113_113;
    MR_Word STATE_VARIABLE_QualInfo_114_114;
    MR_Word STATE_VARIABLE_Specs_115_115;
    MR_Word STATE_VARIABLE_SVarStore_120_120;

    FieldName_55 = ((MR_Word) ((MR_hl_field(0, Var_99, (MR_Integer) 0))));
    FieldArgs_56 = ((MR_Word) ((MR_hl_field(0, Var_99, (MR_Integer) 1))));
    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(FieldArgs_56, &FieldArgVars_70, &FieldArgVarsArgs_71, STATE_VARIABLE_VarSet_0_15, &STATE_VARIABLE_VarSet_100_100, STATE_VARIABLE_SVarState_0_11, &STATE_VARIABLE_SVarState_101_101, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_102_102);
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (TermInputVar_6));
      MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    GetArgVars_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_70, Var_103);
    if ((FieldNames_57 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal_126;

      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, Context_1, MainContext_2, SubContext0_3, FieldName_55, FieldValueVar_5, GetArgVars_72, Purity_7, Functor_8, &Goal_126, STATE_VARIABLE_QualInfo_0_19, &STATE_VARIABLE_QualInfo_114_114);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *FieldSubContext_9 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, base, 1) = ((MR_Box) (SubContext0_3));
      }
      {
        Goals2_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals2_82, 0) = ((MR_Box) (Goal_126));
        MR_hl_field(1, Goals2_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SVarState_110_110 = STATE_VARIABLE_SVarState_101_101;
      STATE_VARIABLE_SVarStore_111_111 = STATE_VARIABLE_SVarStore_0_13;
      STATE_VARIABLE_VarSet_112_112 = STATE_VARIABLE_VarSet_100_100;
      STATE_VARIABLE_ModuleInfo_113_113 = STATE_VARIABLE_ModuleInfo_0_17;
      STATE_VARIABLE_Specs_115_115 = STATE_VARIABLE_Specs_102_102;
    }
    else
    {
      MR_Word SubTermInputVar_75;
      MR_Word Goal_76;
      MR_Integer TermInputArgNumber_77;
      MR_Word TermInputContext_78;
      MR_Word SubContext_79;
      MR_Word Goals1_81;
      MR_Word STATE_VARIABLE_VarSet_105_105;
      MR_Word STATE_VARIABLE_QualInfo_107_107;
      MR_Integer Var_109;
      MR_Word Var_80;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &SubTermInputVar_75, STATE_VARIABLE_VarSet_100_100, &STATE_VARIABLE_VarSet_105_105);
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, Context_1, MainContext_2, SubContext0_3, FieldName_55, SubTermInputVar_75, GetArgVars_72, Purity_7, Functor_8, &Goal_76, STATE_VARIABLE_QualInfo_0_19, &STATE_VARIABLE_QualInfo_107_107);
      Var_109 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_70);
      TermInputArgNumber_77 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_109);
      {
        TermInputContext_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TermInputContext_78, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, TermInputContext_78, 1) = ((MR_Box) (TermInputArgNumber_77));
      }
      {
        SubContext_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SubContext_79, 0) = ((MR_Box) (TermInputContext_78));
        MR_hl_field(1, SubContext_79, 1) = ((MR_Box) (SubContext0_3));
      }
      hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(Context_1, MainContext_2, SubContext_79, FieldNames_57, FieldValueVar_5, SubTermInputVar_75, Purity_7, &Var_80, FieldSubContext_9, &Goals1_81, STATE_VARIABLE_SVarState_101_101, &STATE_VARIABLE_SVarState_110_110, STATE_VARIABLE_SVarStore_0_13, &STATE_VARIABLE_SVarStore_111_111, STATE_VARIABLE_VarSet_105_105, &STATE_VARIABLE_VarSet_112_112, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_113_113, STATE_VARIABLE_QualInfo_107_107, &STATE_VARIABLE_QualInfo_114_114, STATE_VARIABLE_Specs_102_102, &STATE_VARIABLE_Specs_115_115);
      {
        Goals2_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals2_82, 0) = ((MR_Box) (Goal_76));
        MR_hl_field(1, Goals2_82, 1) = ((MR_Box) (Goals1_81));
      }
    }
    {
      ArgContext_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ArgContext_83, 0) = ((MR_Box) (*Functor_8));
      MR_hl_field(2, ArgContext_83, 1) = ((MR_Box) (MainContext_2));
      MR_hl_field(2, ArgContext_83, 2) = ((MR_Box) (SubContext0_3));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_1, &GoalInfo_84);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals2_82, GoalInfo_84, &Conj0_85);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(FieldArgVarsArgs_71, Context_1, ArgContext_83, Conj0_85, &Conj_86, STATE_VARIABLE_SVarState_110_110, STATE_VARIABLE_SVarState_12, STATE_VARIABLE_SVarStore_111_111, &STATE_VARIABLE_SVarStore_120_120, STATE_VARIABLE_VarSet_112_112, STATE_VARIABLE_VarSet_16, STATE_VARIABLE_ModuleInfo_113_113, STATE_VARIABLE_ModuleInfo_18, STATE_VARIABLE_QualInfo_114_114, STATE_VARIABLE_QualInfo_20, STATE_VARIABLE_Specs_115_115, STATE_VARIABLE_Specs_22);
    hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(Conj_86, Goals_10, STATE_VARIABLE_SVarStore_120_120, STATE_VARIABLE_SVarStore_14);
  }
}

void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(
  MR_Word Context_23,
  MR_Word MainContext_24,
  MR_Word SubContext0_25,
  MR_Word FieldNames_26,
  MR_Word FieldValueVar_27,
  MR_Word TermInputVar_28,
  MR_Word TermOutputVar_29,
  MR_Word * Functor_30,
  MR_Word * FieldSubContext_31,
  MR_Word * Goal_32,
  MR_Word STATE_VARIABLE_SVarState_0_41,
  MR_Word * STATE_VARIABLE_SVarState_42,
  MR_Word STATE_VARIABLE_SVarStore_0_43,
  MR_Word * STATE_VARIABLE_SVarStore_44,
  MR_Word STATE_VARIABLE_VarSet_0_45,
  MR_Word * STATE_VARIABLE_VarSet_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  MR_Word Goals_39;
  MR_Word GoalInfo_40;

  hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(Context_23, MainContext_24, SubContext0_25, FieldNames_26, FieldValueVar_27, TermInputVar_28, TermOutputVar_29, Functor_30, FieldSubContext_31, &Goals_39, STATE_VARIABLE_SVarState_0_41, STATE_VARIABLE_SVarState_42, STATE_VARIABLE_SVarStore_0_43, STATE_VARIABLE_SVarStore_44, STATE_VARIABLE_VarSet_0_45, STATE_VARIABLE_VarSet_46, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_23, &GoalInfo_40);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_39, GoalInfo_40, Goal_32);
}

static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(
  MR_Word Context_1,
  MR_Word MainContext_2,
  MR_Word SubContext0_3,
  MR_Word HeadVar__4_4,
  MR_Word FieldValueVar_5,
  MR_Word TermInputVar_6,
  MR_Word TermOutputVar_7,
  MR_Word * Functor_8,
  MR_Word * FieldSubContext_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_SVarState_0_11,
  MR_Word * STATE_VARIABLE_SVarState_12,
  MR_Word STATE_VARIABLE_SVarStore_0_13,
  MR_Word * STATE_VARIABLE_SVarStore_14,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word STATE_VARIABLE_QualInfo_0_19,
  MR_Word * STATE_VARIABLE_QualInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.field_access.expand_set_field_function_call_2\'/22", (MR_String) "empty list of field names");
      return;
    }
  else
  {
    MR_Word FieldName_55;
    MR_Word FieldArgs_56;
    MR_Word FieldNames_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word FieldArgVars_70;
    MR_Word FieldArgVarsArgs_71;
    MR_Word Goals1_85;
    MR_Word ArgContext_87;
    MR_Word GoalInfo_88;
    MR_Word Conj0_89;
    MR_Word Conj_90;
    MR_Word Var_103 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_VarSet_104_104;
    MR_Word STATE_VARIABLE_SVarState_105_105;
    MR_Word STATE_VARIABLE_Specs_106_106;
    MR_Word STATE_VARIABLE_SVarState_123_123;
    MR_Word STATE_VARIABLE_SVarStore_124_124;
    MR_Word STATE_VARIABLE_VarSet_125_125;
    MR_Word STATE_VARIABLE_ModuleInfo_126_126;
    MR_Word STATE_VARIABLE_QualInfo_127_127;
    MR_Word STATE_VARIABLE_Specs_128_128;
    MR_Word STATE_VARIABLE_SVarStore_140_140;

    FieldName_55 = ((MR_Word) ((MR_hl_field(0, Var_103, (MR_Integer) 0))));
    FieldArgs_56 = ((MR_Word) ((MR_hl_field(0, Var_103, (MR_Integer) 1))));
    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(FieldArgs_56, &FieldArgVars_70, &FieldArgVarsArgs_71, STATE_VARIABLE_VarSet_0_15, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_SVarState_0_11, &STATE_VARIABLE_SVarState_105_105, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_106_106);
    if ((FieldNames_57 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal_86;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word SetArgs_146;

      {
        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_133, 0) = ((MR_Box) (FieldValueVar_5));
        MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_132, 0) = ((MR_Box) (TermInputVar_6));
        MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_133));
      }
      SetArgs_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_70, Var_132);
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, Context_1, MainContext_2, SubContext0_3, FieldName_55, TermOutputVar_7, SetArgs_146, (MR_Integer) 0, Functor_8, &Goal_86, STATE_VARIABLE_QualInfo_0_19, &STATE_VARIABLE_QualInfo_127_127);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *FieldSubContext_9 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, base, 1) = ((MR_Box) (SubContext0_3));
      }
      {
        Goals1_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals1_85, 0) = ((MR_Box) (Goal_86));
        MR_hl_field(1, Goals1_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SVarState_123_123 = STATE_VARIABLE_SVarState_105_105;
      STATE_VARIABLE_SVarStore_124_124 = STATE_VARIABLE_SVarStore_0_13;
      STATE_VARIABLE_VarSet_125_125 = STATE_VARIABLE_VarSet_104_104;
      STATE_VARIABLE_ModuleInfo_126_126 = STATE_VARIABLE_ModuleInfo_0_17;
      STATE_VARIABLE_Specs_128_128 = STATE_VARIABLE_Specs_106_106;
    }
    else
    {
      MR_Word SubTermInputVar_74;
      MR_Word SubTermOutputVar_75;
      MR_Word SetArgs_76;
      MR_Word UpdateGoal_77;
      MR_Word GetSubFieldGoal_79;
      MR_Integer SubTermInputArgNumber_80;
      MR_Word TermInputContext_81;
      MR_Word SubContext_82;
      MR_Word Goals0_84;
      MR_Word STATE_VARIABLE_VarSet_107_107;
      MR_Word STATE_VARIABLE_VarSet_108_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word STATE_VARIABLE_QualInfo_114_114;
      MR_Word Var_116;
      MR_Word STATE_VARIABLE_QualInfo_118_118;
      MR_Word Var_119;
      MR_Integer Var_122;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_78;
      MR_Word Var_83;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &SubTermInputVar_74, STATE_VARIABLE_VarSet_104_104, &STATE_VARIABLE_VarSet_107_107);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &SubTermOutputVar_75, STATE_VARIABLE_VarSet_107_107, &STATE_VARIABLE_VarSet_108_108);
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (SubTermOutputVar_75));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_109, 0) = ((MR_Box) (TermInputVar_6));
        MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
      }
      SetArgs_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_70, Var_109);
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, Context_1, MainContext_2, SubContext0_3, FieldName_55, TermOutputVar_7, SetArgs_76, (MR_Integer) 0, Functor_8, &UpdateGoal_77, STATE_VARIABLE_QualInfo_0_19, &STATE_VARIABLE_QualInfo_114_114);
      {
        Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_119, 0) = ((MR_Box) (TermInputVar_6));
        MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_70, Var_119);
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, Context_1, MainContext_2, SubContext0_3, FieldName_55, SubTermInputVar_74, Var_116, (MR_Integer) 0, &Var_78, &GetSubFieldGoal_79, STATE_VARIABLE_QualInfo_114_114, &STATE_VARIABLE_QualInfo_118_118);
      Var_122 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[1]), FieldArgs_56);
      SubTermInputArgNumber_80 = (MR_Integer) ((MR_Unsigned) 2 + (MR_Unsigned) Var_122);
      {
        TermInputContext_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TermInputContext_81, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, TermInputContext_81, 1) = ((MR_Box) (SubTermInputArgNumber_80));
      }
      {
        SubContext_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SubContext_82, 0) = ((MR_Box) (TermInputContext_81));
        MR_hl_field(1, SubContext_82, 1) = ((MR_Box) (SubContext0_3));
      }
      hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(Context_1, MainContext_2, SubContext_82, FieldNames_57, FieldValueVar_5, SubTermInputVar_74, SubTermOutputVar_75, &Var_83, FieldSubContext_9, &Goals0_84, STATE_VARIABLE_SVarState_105_105, &STATE_VARIABLE_SVarState_123_123, STATE_VARIABLE_SVarStore_0_13, &STATE_VARIABLE_SVarStore_124_124, STATE_VARIABLE_VarSet_108_108, &STATE_VARIABLE_VarSet_125_125, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_126_126, STATE_VARIABLE_QualInfo_118_118, &STATE_VARIABLE_QualInfo_127_127, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_128_128);
      {
        Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_129, 0) = ((MR_Box) (GetSubFieldGoal_79));
        MR_hl_field(1, Var_129, 1) = ((MR_Box) (Goals0_84));
      }
      {
        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_130, 0) = ((MR_Box) (UpdateGoal_77));
        MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Goals1_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_129, Var_130);
    }
    {
      ArgContext_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ArgContext_87, 0) = ((MR_Box) (*Functor_8));
      MR_hl_field(2, ArgContext_87, 1) = ((MR_Box) (MainContext_2));
      MR_hl_field(2, ArgContext_87, 2) = ((MR_Box) (SubContext0_3));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_1, &GoalInfo_88);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals1_85, GoalInfo_88, &Conj0_89);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(FieldArgVarsArgs_71, Context_1, ArgContext_87, Conj0_89, &Conj_90, STATE_VARIABLE_SVarState_123_123, STATE_VARIABLE_SVarState_12, STATE_VARIABLE_SVarStore_124_124, &STATE_VARIABLE_SVarStore_140_140, STATE_VARIABLE_VarSet_125_125, STATE_VARIABLE_VarSet_16, STATE_VARIABLE_ModuleInfo_126_126, STATE_VARIABLE_ModuleInfo_18, STATE_VARIABLE_QualInfo_127_127, STATE_VARIABLE_QualInfo_20, STATE_VARIABLE_Specs_128_128, STATE_VARIABLE_Specs_22);
    hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(Conj_90, Goals_10, STATE_VARIABLE_SVarStore_140_140, STATE_VARIABLE_SVarStore_14);
  }
}

static void MR_CALL 
hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0(
  MR_Word AccessType_13,
  MR_Word Context_14,
  MR_Word MainContext_15,
  MR_Word SubContext_16,
  MR_Word FieldName_17,
  MR_Word RetArg_18,
  MR_Word Args_19,
  MR_Word Purity_20,
  MR_Word * Functor_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_QualInfo_0_26,
  MR_Word * STATE_VARIABLE_QualInfo_27)
{
  MR_Word FuncName_24;
  MR_Integer Arity_25;
  MR_Word Var_28;
  MR_Word Var_29;

  hlds__hlds_pred__field_access_function_name_3_p_0(AccessType_13, FieldName_17, &FuncName_24);
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), Args_19, &Arity_25);
  Var_28 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Functor_21 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = ((MR_Box) (FuncName_24));
    MR_hl_field(3, base, 2) = ((MR_Box) (Arity_25));
    MR_hl_field(3, base, 3) = ((MR_Box) (Var_28));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (*Functor_21));
    MR_hl_field(1, Var_29, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_29, 2) = ((MR_Box) (Args_19));
  }
  hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(RetArg_18, Var_29, Context_14, MainContext_15, SubContext_16, Purity_20, Goal_22, STATE_VARIABLE_QualInfo_0_26, STATE_VARIABLE_QualInfo_27);
}

static MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__field_access____Unify____field_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__field_access____Compare____field_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__field_access__init(void)
{
}

void mercury__hlds__make_hlds__field_access__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__field_access__hlds__make_hlds__field_access__type_ctor_info_field_list_0);
}

void mercury__hlds__make_hlds__field_access__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__field_access__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.field_access.
