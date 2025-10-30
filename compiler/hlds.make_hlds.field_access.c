/*
** Automatically generated from `field_access.m'
** by the Mercury compiler,
** version rotd-2025-10-30
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.prog_parse_tree.mih"
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
#include "hlds.make_hlds.superhomogeneous_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
hlds__make_hlds__field_access__make_field_list_error_4_f_0(
  MR_Word VarSet_6,
  MR_Word Context_7,
  MR_Word Term_8,
  MR_Word ContextPieces_9);

static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_14_p_0(
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
  MR_Word STATE_VARIABLE_UrInfo_0_13,
  MR_Word * STATE_VARIABLE_UrInfo_14);

static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_14_p_0(
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
  MR_Word STATE_VARIABLE_UrInfo_0_13,
  MR_Word * STATE_VARIABLE_UrInfo_14);

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


static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_1[14][2];

static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_2[1][3];




static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_1[14][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__field_access_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "field name,"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__field_access_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__field_access_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__field_access_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, 0))));
      succeeded = (strcmp(Var_19, (MR_String) "^") == 0);
      if (succeeded)
      {
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FieldNameTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, 1))));
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OtherFieldNamesTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
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
        MR_Word FieldNamesTail_16 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNamesTail_14, 0))));
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
      MR_Word Var_47;
      MR_Word Var_52;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;

      Var_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FieldNameTerm_9);
      TermStr_41 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Term_5);
      Var_47 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[8])));
      {
        Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_60, 1) = ((MR_Box) (TermStr_41));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[12])));
      }
      Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_59);
      Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[13])));
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[10])), Var_57);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_52);
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[6])), Var_46);
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_44);
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.field_access.make_field_list_error\'/4"));
        MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Var_25));
        MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_42));
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

      Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_5);
      Spec_34 = hlds__make_hlds__field_access__make_field_list_error_4_f_0(VarSet_6, Var_31, Term_5, ContextPieces_7);
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

static MR_Word MR_CALL 
hlds__make_hlds__field_access__make_field_list_error_4_f_0(
  MR_Word VarSet_6,
  MR_Word Context_7,
  MR_Word Term_8,
  MR_Word ContextPieces_9)
{
  MR_Word Spec_10;
  MR_String TermStr_11;
  MR_Word Pieces_12;
  MR_Word Var_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  TermStr_11 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Term_8);
  Var_22 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[8])));
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (TermStr_11));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[12])));
  }
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_34);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[13])));
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[10])), Var_32);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_27);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__field_access_scalar_common_1[6])), Var_21);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9, Var_14);
  {
    Spec_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.field_access.make_field_list_error\'/4"));
    MR_hl_field(0, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_10, 4) = ((MR_Box) (Pieces_12));
  }
  return Spec_10;
}

void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_14_p_0(
  MR_Word Context_15,
  MR_Word MainContext_16,
  MR_Word SubContext0_17,
  MR_Word FieldNames_18,
  MR_Word FieldValueVar_19,
  MR_Word TermInputVar_20,
  MR_Word Purity_21,
  MR_Word * Functor_22,
  MR_Word * FieldSubContext_23,
  MR_Word * Goal_24,
  MR_Word STATE_VARIABLE_SVarState_0_29,
  MR_Word * STATE_VARIABLE_SVarState_30,
  MR_Word STATE_VARIABLE_UrInfo_0_31,
  MR_Word * STATE_VARIABLE_UrInfo_32)
{
  MR_Word Goals_27;
  MR_Word GoalInfo_28;

  hlds__make_hlds__field_access__expand_get_field_function_call_2_14_p_0(Context_15, MainContext_16, SubContext0_17, FieldNames_18, FieldValueVar_19, TermInputVar_20, Purity_21, Functor_22, FieldSubContext_23, &Goals_27, STATE_VARIABLE_SVarState_0_29, STATE_VARIABLE_SVarState_30, STATE_VARIABLE_UrInfo_0_31, STATE_VARIABLE_UrInfo_32);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_28);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_27, GoalInfo_28, Goal_24);
}

void MR_CALL 
hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_14_p_0(
  MR_Word Context_15,
  MR_Word MainContext_16,
  MR_Word SubContext_17,
  MR_Word FieldNames_18,
  MR_Word FieldValueVar_19,
  MR_Word TermInputVar_20,
  MR_Word TermOutputVar_21,
  MR_Word * Functor_22,
  MR_Word * FieldSubContext_23,
  MR_Word * Goal_24,
  MR_Word STATE_VARIABLE_SVarState_0_33,
  MR_Word * STATE_VARIABLE_SVarState_34,
  MR_Word STATE_VARIABLE_UrInfo_0_35,
  MR_Word * STATE_VARIABLE_UrInfo_36)
{
  MR_Word QualInfo0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_35, 2))));
  MR_Word UnifyDCG_28;
  MR_Word QualInfo_29;
  MR_Word Goals1_30;
  MR_Word Goals_31;
  MR_Word GoalInfo_32;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_UrInfo_1_38;
  MR_Word Var_45;
  MR_Integer Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (TermInputVar_20));
  }
  hlds__make_hlds__qual_info__make_atomic_unification_8_p_0(TermOutputVar_21, Var_37, Context_15, MainContext_16, SubContext_17, &UnifyDCG_28, QualInfo0_27, &QualInfo_29);
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_35, 0))));
  Var_46 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_35, 1))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_35, 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_35, 4))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_35, 5))));
  {
    STATE_VARIABLE_UrInfo_1_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_38, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_38, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_38, 2) = ((MR_Box) (QualInfo_29));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_38, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_38, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_38, 5) = ((MR_Box) (Var_50));
  }
  hlds__make_hlds__field_access__expand_get_field_function_call_2_14_p_0(Context_15, MainContext_16, SubContext_17, FieldNames_18, FieldValueVar_19, TermOutputVar_21, (MR_Integer) 0, Functor_22, FieldSubContext_23, &Goals1_30, STATE_VARIABLE_SVarState_0_33, STATE_VARIABLE_SVarState_34, STATE_VARIABLE_UrInfo_1_38, STATE_VARIABLE_UrInfo_36);
  {
    Goals_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Goals_31, 0) = ((MR_Box) (UnifyDCG_28));
    MR_hl_field(1, Goals_31, 1) = ((MR_Box) (Goals1_30));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_32);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_31, GoalInfo_32, Goal_24);
}

static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_14_p_0(
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
  MR_Word STATE_VARIABLE_UrInfo_0_13,
  MR_Word * STATE_VARIABLE_UrInfo_14)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.field_access.expand_get_field_function_call_2\'/14", (MR_String) "empty list of field names");
      return;
    }
  else
  {
    MR_Word FieldName_35;
    MR_Word FieldArgs_36;
    MR_Word FieldNames_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word FieldArgVars_46;
    MR_Word FieldArgVarsArgs_47;
    MR_Word GetArgVars_48;
    MR_Word Goals2_60;
    MR_Word ArgContext_61;
    MR_Word GoalInfo_62;
    MR_Word Conj0_63;
    MR_Word Conj_64;
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word STATE_VARIABLE_SVarState_1_70;
    MR_Word STATE_VARIABLE_UrInfo_1_71;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_SVarState_2_79;
    MR_Word STATE_VARIABLE_UrInfo_4_80;
    MR_Word STATE_VARIABLE_UrInfo_6_85;

    FieldName_35 = ((MR_Word) ((MR_hl_field(0, Var_69, 0))));
    FieldArgs_36 = ((MR_Word) ((MR_hl_field(0, Var_69, 1))));
    hlds__make_hlds__superhomogeneous_util__make_fresh_arg_vars_subst_svars_7_p_0(FieldArgs_36, &FieldArgVars_46, &FieldArgVarsArgs_47, STATE_VARIABLE_SVarState_0_11, &STATE_VARIABLE_SVarState_1_70, STATE_VARIABLE_UrInfo_0_13, &STATE_VARIABLE_UrInfo_1_71);
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (TermInputVar_6));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    GetArgVars_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_46, Var_72);
    if ((FieldNames_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word QualInfo0_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_71, 2))));
      MR_Word Goal_88;
      MR_Word QualInfo_89;
      MR_Word Var_106;
      MR_Integer Var_107;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;

      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, Context_1, MainContext_2, SubContext0_3, FieldName_35, FieldValueVar_5, GetArgVars_48, Purity_7, Functor_8, &Goal_88, QualInfo0_87, &QualInfo_89);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *FieldSubContext_9 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, base, 1) = ((MR_Box) (SubContext0_3));
      }
      Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_71, 0))));
      Var_107 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_71, 1))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_71, 3))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_71, 4))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_71, 5))));
      {
        STATE_VARIABLE_UrInfo_4_80 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_80, 0) = ((MR_Box) (Var_106));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_80, 1) = ((MR_Box) (Var_107));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_80, 2) = ((MR_Box) (QualInfo_89));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_80, 3) = ((MR_Box) (Var_109));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_80, 4) = ((MR_Box) (Var_110));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_80, 5) = ((MR_Box) (Var_111));
      }
      {
        Goals2_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals2_60, 0) = ((MR_Box) (Goal_88));
        MR_hl_field(1, Goals2_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SVarState_2_79 = STATE_VARIABLE_SVarState_1_70;
    }
    else
    {
      MR_Word SubTermInputVar_51;
      MR_Word QualInfo0_52;
      MR_Word Goal_53;
      MR_Word QualInfo_54;
      MR_Integer TermInputArgNumber_55;
      MR_Word TermInputContext_56;
      MR_Word SubContext_57;
      MR_Word Goals1_59;
      MR_Word STATE_VARIABLE_UrInfo_2_74;
      MR_Word STATE_VARIABLE_UrInfo_3_76;
      MR_Integer Var_78;
      MR_Word Var_95;
      MR_Integer Var_96;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_58;

      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&SubTermInputVar_51, STATE_VARIABLE_UrInfo_1_71, &STATE_VARIABLE_UrInfo_2_74);
      QualInfo0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_74, 2))));
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, Context_1, MainContext_2, SubContext0_3, FieldName_35, SubTermInputVar_51, GetArgVars_48, Purity_7, Functor_8, &Goal_53, QualInfo0_52, &QualInfo_54);
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_74, 0))));
      Var_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_74, 1))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_74, 3))));
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_74, 4))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_2_74, 5))));
      {
        STATE_VARIABLE_UrInfo_3_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_UrInfo_3_76, 0) = ((MR_Box) (Var_95));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_3_76, 1) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_3_76, 2) = ((MR_Box) (QualInfo_54));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_3_76, 3) = ((MR_Box) (Var_98));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_3_76, 4) = ((MR_Box) (Var_99));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_3_76, 5) = ((MR_Box) (Var_100));
      }
      Var_78 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_46);
      TermInputArgNumber_55 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_78);
      {
        TermInputContext_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TermInputContext_56, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, TermInputContext_56, 1) = ((MR_Box) (TermInputArgNumber_55));
      }
      {
        SubContext_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SubContext_57, 0) = ((MR_Box) (TermInputContext_56));
        MR_hl_field(1, SubContext_57, 1) = ((MR_Box) (SubContext0_3));
      }
      hlds__make_hlds__field_access__expand_get_field_function_call_2_14_p_0(Context_1, MainContext_2, SubContext_57, FieldNames_37, FieldValueVar_5, SubTermInputVar_51, Purity_7, &Var_58, FieldSubContext_9, &Goals1_59, STATE_VARIABLE_SVarState_1_70, &STATE_VARIABLE_SVarState_2_79, STATE_VARIABLE_UrInfo_3_76, &STATE_VARIABLE_UrInfo_4_80);
      {
        Goals2_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals2_60, 0) = ((MR_Box) (Goal_53));
        MR_hl_field(1, Goals2_60, 1) = ((MR_Box) (Goals1_59));
      }
    }
    {
      ArgContext_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ArgContext_61, 0) = ((MR_Box) (*Functor_8));
      MR_hl_field(2, ArgContext_61, 1) = ((MR_Box) (MainContext_2));
      MR_hl_field(2, ArgContext_61, 2) = ((MR_Box) (SubContext0_3));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_1, &GoalInfo_62);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals2_60, GoalInfo_62, &Conj0_63);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(FieldArgVarsArgs_47, Context_1, ArgContext_61, Conj0_63, &Conj_64, STATE_VARIABLE_SVarState_2_79, STATE_VARIABLE_SVarState_12, STATE_VARIABLE_UrInfo_4_80, &STATE_VARIABLE_UrInfo_6_85);
    hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(Conj_64, Goals_10, STATE_VARIABLE_UrInfo_6_85, STATE_VARIABLE_UrInfo_14);
  }
}

void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_14_p_0(
  MR_Word Context_15,
  MR_Word MainContext_16,
  MR_Word SubContext0_17,
  MR_Word FieldNames_18,
  MR_Word FieldValueVar_19,
  MR_Word TermInputVar_20,
  MR_Word TermOutputVar_21,
  MR_Word * Functor_22,
  MR_Word * FieldSubContext_23,
  MR_Word * Goal_24,
  MR_Word STATE_VARIABLE_SVarState_0_29,
  MR_Word * STATE_VARIABLE_SVarState_30,
  MR_Word STATE_VARIABLE_UrInfo_0_31,
  MR_Word * STATE_VARIABLE_UrInfo_32)
{
  MR_Word Goals_27;
  MR_Word GoalInfo_28;

  hlds__make_hlds__field_access__expand_set_field_function_call_2_14_p_0(Context_15, MainContext_16, SubContext0_17, FieldNames_18, FieldValueVar_19, TermInputVar_20, TermOutputVar_21, Functor_22, FieldSubContext_23, &Goals_27, STATE_VARIABLE_SVarState_0_29, STATE_VARIABLE_SVarState_30, STATE_VARIABLE_UrInfo_0_31, STATE_VARIABLE_UrInfo_32);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_28);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_27, GoalInfo_28, Goal_24);
}

static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_14_p_0(
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
  MR_Word STATE_VARIABLE_UrInfo_0_13,
  MR_Word * STATE_VARIABLE_UrInfo_14)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.field_access.expand_set_field_function_call_2\'/14", (MR_String) "empty list of field names");
      return;
    }
  else
  {
    MR_Word FieldName_35;
    MR_Word FieldArgs_36;
    MR_Word FieldNames_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word FieldArgVars_46;
    MR_Word FieldArgVarsArgs_47;
    MR_Word Goals1_65;
    MR_Word ArgContext_67;
    MR_Word GoalInfo_68;
    MR_Word Conj0_69;
    MR_Word Conj_70;
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word STATE_VARIABLE_SVarState_1_76;
    MR_Word STATE_VARIABLE_UrInfo_1_77;
    MR_Word STATE_VARIABLE_SVarState_2_92;
    MR_Word STATE_VARIABLE_UrInfo_5_93;
    MR_Word STATE_VARIABLE_UrInfo_7_105;

    FieldName_35 = ((MR_Word) ((MR_hl_field(0, Var_75, 0))));
    FieldArgs_36 = ((MR_Word) ((MR_hl_field(0, Var_75, 1))));
    hlds__make_hlds__superhomogeneous_util__make_fresh_arg_vars_subst_svars_7_p_0(FieldArgs_36, &FieldArgVars_46, &FieldArgVarsArgs_47, STATE_VARIABLE_SVarState_0_11, &STATE_VARIABLE_SVarState_1_76, STATE_VARIABLE_UrInfo_0_13, &STATE_VARIABLE_UrInfo_1_77);
    if ((FieldNames_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal_66;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word SetArgs_107;
      MR_Word QualInfo0_108;
      MR_Word QualInfo_109;
      MR_Word Var_126;
      MR_Integer Var_127;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;

      {
        Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_98, 0) = ((MR_Box) (FieldValueVar_5));
        MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (TermInputVar_6));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
      }
      SetArgs_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_46, Var_97);
      QualInfo0_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_77, 2))));
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, Context_1, MainContext_2, SubContext0_3, FieldName_35, TermOutputVar_7, SetArgs_107, (MR_Integer) 0, Functor_8, &Goal_66, QualInfo0_108, &QualInfo_109);
      Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_77, 0))));
      Var_127 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_77, 1))));
      Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_77, 3))));
      Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_77, 4))));
      Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_77, 5))));
      {
        STATE_VARIABLE_UrInfo_5_93 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_UrInfo_5_93, 0) = ((MR_Box) (Var_126));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_5_93, 1) = ((MR_Box) (Var_127));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_5_93, 2) = ((MR_Box) (QualInfo_109));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_5_93, 3) = ((MR_Box) (Var_129));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_5_93, 4) = ((MR_Box) (Var_130));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_5_93, 5) = ((MR_Box) (Var_131));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *FieldSubContext_9 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, base, 1) = ((MR_Box) (SubContext0_3));
      }
      {
        Goals1_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goals1_65, 0) = ((MR_Box) (Goal_66));
        MR_hl_field(1, Goals1_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SVarState_2_92 = STATE_VARIABLE_SVarState_1_76;
    }
    else
    {
      MR_Word SubTermInputVar_50;
      MR_Word SubTermOutputVar_51;
      MR_Word SetArgs_52;
      MR_Word GetArgs_53;
      MR_Word QualInfo0_54;
      MR_Word UpdateGoal_55;
      MR_Word QualInfo1_56;
      MR_Word GetSubFieldGoal_58;
      MR_Word QualInfo_59;
      MR_Integer SubTermInputArgNumber_60;
      MR_Word TermInputContext_61;
      MR_Word SubContext_62;
      MR_Word Goals0_64;
      MR_Word STATE_VARIABLE_UrInfo_2_78;
      MR_Word STATE_VARIABLE_UrInfo_3_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_83;
      MR_Word STATE_VARIABLE_UrInfo_4_89;
      MR_Integer Var_91;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_57;
      MR_Word Var_115;
      MR_Integer Var_116;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_63;

      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&SubTermInputVar_50, STATE_VARIABLE_UrInfo_1_77, &STATE_VARIABLE_UrInfo_2_78);
      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&SubTermOutputVar_51, STATE_VARIABLE_UrInfo_2_78, &STATE_VARIABLE_UrInfo_3_79);
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (SubTermOutputVar_51));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (TermInputVar_6));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
      }
      SetArgs_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_46, Var_80);
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (TermInputVar_6));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      GetArgs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), FieldArgVars_46, Var_83);
      QualInfo0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_3_79, 2))));
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, Context_1, MainContext_2, SubContext0_3, FieldName_35, TermOutputVar_7, SetArgs_52, (MR_Integer) 0, Functor_8, &UpdateGoal_55, QualInfo0_54, &QualInfo1_56);
      hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, Context_1, MainContext_2, SubContext0_3, FieldName_35, SubTermInputVar_50, GetArgs_53, (MR_Integer) 0, &Var_57, &GetSubFieldGoal_58, QualInfo1_56, &QualInfo_59);
      Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_3_79, 0))));
      Var_116 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_3_79, 1))));
      Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_3_79, 3))));
      Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_3_79, 4))));
      Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_3_79, 5))));
      {
        STATE_VARIABLE_UrInfo_4_89 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_89, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_89, 1) = ((MR_Box) (Var_116));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_89, 2) = ((MR_Box) (QualInfo_59));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_89, 3) = ((MR_Box) (Var_118));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_89, 4) = ((MR_Box) (Var_119));
        MR_hl_field(0, STATE_VARIABLE_UrInfo_4_89, 5) = ((MR_Box) (Var_120));
      }
      Var_91 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[1]), FieldArgs_36);
      SubTermInputArgNumber_60 = (MR_Integer) ((MR_Unsigned) 2 + (MR_Unsigned) Var_91);
      {
        TermInputContext_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TermInputContext_61, 0) = ((MR_Box) (*Functor_8));
        MR_hl_field(0, TermInputContext_61, 1) = ((MR_Box) (SubTermInputArgNumber_60));
      }
      {
        SubContext_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SubContext_62, 0) = ((MR_Box) (TermInputContext_61));
        MR_hl_field(1, SubContext_62, 1) = ((MR_Box) (SubContext0_3));
      }
      hlds__make_hlds__field_access__expand_set_field_function_call_2_14_p_0(Context_1, MainContext_2, SubContext_62, FieldNames_37, FieldValueVar_5, SubTermInputVar_50, SubTermOutputVar_51, &Var_63, FieldSubContext_9, &Goals0_64, STATE_VARIABLE_SVarState_1_76, &STATE_VARIABLE_SVarState_2_92, STATE_VARIABLE_UrInfo_4_89, &STATE_VARIABLE_UrInfo_5_93);
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (GetSubFieldGoal_58));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) (Goals0_64));
      }
      {
        Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_95, 0) = ((MR_Box) (UpdateGoal_55));
        MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Goals1_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_94, Var_95);
    }
    {
      ArgContext_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ArgContext_67, 0) = ((MR_Box) (*Functor_8));
      MR_hl_field(2, ArgContext_67, 1) = ((MR_Box) (MainContext_2));
      MR_hl_field(2, ArgContext_67, 2) = ((MR_Box) (SubContext0_3));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_1, &GoalInfo_68);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals1_65, GoalInfo_68, &Conj0_69);
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(FieldArgVarsArgs_47, Context_1, ArgContext_67, Conj0_69, &Conj_70, STATE_VARIABLE_SVarState_2_92, STATE_VARIABLE_SVarState_12, STATE_VARIABLE_UrInfo_5_93, &STATE_VARIABLE_UrInfo_7_105);
    hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(Conj_70, Goals_10, STATE_VARIABLE_UrInfo_7_105, STATE_VARIABLE_UrInfo_14);
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
  MR_Word Var_30;

  hlds__hlds_pred__construct_field_access_function_name_3_p_0(AccessType_13, FieldName_17, &FuncName_24);
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__field_access_scalar_common_1[0]), Args_19, &Arity_25);
  Var_29 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (FuncName_24));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (Arity_25));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) (Var_29));
  }
  *Functor_21 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_28)));
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (*Functor_21));
    MR_hl_field(1, Var_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_30, 2) = ((MR_Box) (Args_19));
  }
  hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(RetArg_18, Var_30, Context_14, MainContext_15, SubContext_16, Purity_20, Goal_22, STATE_VARIABLE_QualInfo_0_26, STATE_VARIABLE_QualInfo_27);
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
