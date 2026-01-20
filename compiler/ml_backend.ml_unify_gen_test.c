/*
** Automatically generated from `ml_unify_gen_test.m'
** by the Mercury compiler,
** version rotd-2026-01-20
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


// :- module ml_backend.ml_unify_gen_test.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unify_gen_test__init
ENDINIT
*/

#include "ml_backend.ml_unify_gen_test.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_tagged_cons_id_6_p_0(
  MR_Word Info_7,
  MR_Word Rval_8,
  MR_Word Type_9,
  MR_Word CheaperTagTest_10,
  MR_Word TaggedConsId_11,
  MR_Word * TestRval_12);

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_logical_or_rvals_3_p_0(
  MR_Word FirstRval_4,
  MR_Word LaterRvals_5,
  MR_Word * Rval_6);

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_direct_5_p_0(
  MR_Word Info_6,
  MR_Word VarRval_7,
  MR_Word Type_8,
  MR_Word ConsTag_9,
  MR_Word * TestRval_10);

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_is_int_tag_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Rval_7,
  MR_Word Type_8,
  MR_Word IntTag_9,
  MR_Word * TestRval_10);


static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_1[6][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_2[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 3))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 1U << 3))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_2[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_cheaper_tag_test_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TestRval_12;

  ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_tagged_cons_id_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_TestRval_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_TestRval_12));
}

void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_5_p_0(
  MR_Word Info_6,
  MR_Word Var_7,
  MR_Word MainTaggedConsId_8,
  MR_Word OtherTaggedConsIds_9,
  MR_Word * TestRval_10)
{
  MR_bool succeeded;
  MR_Word VarTable_11;
  MR_Word VarEntry_12;
  MR_Word VarType_13;
  MR_Word VarLval_14;
  MR_Word VarRval_15;
  MR_Word CheaperTagTest_16;
  MR_Word MainTestRval_17;
  MR_Word OtherTestRvals_18;
  MR_Word Var_19;
  MR_Word ModuleInfo_26;
  MR_Word TypeCtor_27;
  MR_Word TypeTable_28;
  MR_Word Repn_37;
  MR_Word TypeDefn_29;
  MR_Word TypeBody_30;
  MR_Word MaybeRepn_35;
  MR_Word Var_38;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_6, &VarTable_11);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_11, Var_7, &VarEntry_12);
  VarType_13 = ((MR_Word) ((MR_hl_field(0, VarEntry_12, 1))));
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_6, Var_7, VarEntry_12, &VarLval_14);
  {
    VarRval_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, VarRval_15, 0) = ((MR_Box) (VarLval_14));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_26);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_13, &TypeCtor_27);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_26, &TypeTable_28);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_28, TypeCtor_27, &TypeDefn_29);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_29, &TypeBody_30);
    succeeded = ((MR_tag((MR_Word) TypeBody_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_38 = (MR_Word) ((MR_Word) (TypeBody_30));
      MaybeRepn_35 = ((MR_Word) ((MR_hl_field(0, Var_38, 4))));
      succeeded = (MaybeRepn_35 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        Repn_37 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_35, 0))));
    }
  }
  if (succeeded)
    CheaperTagTest_16 = ((MR_Word) ((MR_hl_field(0, Repn_37, 2))));
  else
    CheaperTagTest_16 = (MR_Word) ((MR_Unsigned) 0U);
  ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_tagged_cons_id_6_p_0(Info_6, VarRval_15, VarType_13, CheaperTagTest_16, MainTaggedConsId_8, &MainTestRval_17);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_test_scalar_common_2[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_5_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (VarRval_15));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (VarType_13));
    MR_hl_field(0, Var_19, 6) = ((MR_Box) (CheaperTagTest_16));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_19, OtherTaggedConsIds_9, &OtherTestRvals_18);
  ml_backend__ml_unify_gen_test__ml_logical_or_rvals_3_p_0(MainTestRval_17, OtherTestRvals_18, TestRval_10);
}

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_tagged_cons_id_6_p_0(
  MR_Word Info_7,
  MR_Word Rval_8,
  MR_Word Type_9,
  MR_Word CheaperTagTest_10,
  MR_Word TaggedConsId_11,
  MR_Word * TestRval_12)
{
  MR_bool succeeded = (CheaperTagTest_10 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ConsTag_14 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_11, 1))));
  MR_Word CheapConsTag_18;
  MR_Word ExpensiveConsTag_16;

  if (succeeded)
  {
    ExpensiveConsTag_16 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_10, 1))));
    CheapConsTag_18 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_10, 3))));
    succeeded = hlds__hlds_data____Unify____cons_tag_0_0(ConsTag_14, ExpensiveConsTag_16);
  }
  if (succeeded)
  {
    MR_Word CheapConsTagTestRval_19;
    MR_Word IntType_20;
    MR_Word SubRvalA_21;
    MR_Word SubRvalB_22;
    MR_Word Var_23;
    MR_Word Var_24;

    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_direct_5_p_0(Info_7, Rval_8, Type_9, CheapConsTag_18, &CheapConsTagTestRval_19);
    succeeded = ((((MR_tag((MR_Word) CheapConsTagTestRval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CheapConsTagTestRval_19, 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(3, CheapConsTagTestRval_19, 1))));
      SubRvalA_21 = ((MR_Word) ((MR_hl_field(3, CheapConsTagTestRval_19, 2))));
      SubRvalB_22 = ((MR_Word) ((MR_hl_field(3, CheapConsTagTestRval_19, 3))));
      succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_23, 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        IntType_20 = ((((MR_Unsigned) ((MR_hl_field(3, Var_23, 1))) >> 3)) & (MR_Integer) 15);
        Var_24 = ((MR_Unsigned) ((MR_hl_field(3, Var_23, 1))) & (MR_Integer) 7);
        succeeded = (Var_24 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_25, 1) = (MR_Box) (((((MR_Unsigned) (IntType_20) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *TestRval_12 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Var_25));
        MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_21));
        MR_hl_field(3, base, 3) = ((MR_Box) (SubRvalB_22));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *TestRval_12 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(3, base, 2) = ((MR_Box) (CheapConsTagTestRval_19));
      }
  }
  else
    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_direct_5_p_0(Info_7, Rval_8, Type_9, ConsTag_14, TestRval_12);
}

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_logical_or_rvals_3_p_0(
  MR_Word FirstRval_4,
  MR_Word LaterRvals_5,
  MR_Word * Rval_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((LaterRvals_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Rval_6 = FirstRval_4;
    else
    {
      MR_Word SecondRval_7 = ((MR_Word) ((MR_hl_field(1, LaterRvals_5, 0))));
      MR_Word OtherRvals_8 = ((MR_Word) ((MR_hl_field(1, LaterRvals_5, 1))));
      MR_Word FirstSecondRval_9;
      MR_Word next_value_of_FirstRval_4;
      MR_Word next_value_of_LaterRvals_5;

      {
        FirstSecondRval_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, FirstSecondRval_9, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, FirstSecondRval_9, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, FirstSecondRval_9, 2) = ((MR_Box) (FirstRval_4));
        MR_hl_field(3, FirstSecondRval_9, 3) = ((MR_Box) (SecondRval_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_FirstRval_4 = FirstSecondRval_9;
      next_value_of_LaterRvals_5 = OtherRvals_8;
      FirstRval_4 = next_value_of_FirstRval_4;
      LaterRvals_5 = next_value_of_LaterRvals_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_cons_id_4_p_0(
  MR_Word Info_5,
  MR_Word Var_6,
  MR_Word ConsId_7,
  MR_Word * TestRval_8)
{
  MR_bool succeeded;
  MR_Word VarTable_9;
  MR_Word VarEntry_10;
  MR_Word VarType_11;
  MR_Word VarLval_12;
  MR_Word VarRval_13;
  MR_Word ConsTag_14;
  MR_Word CheaperTagTest_15;
  MR_Word ModuleInfo_18;
  MR_Word TypeCtor_19;
  MR_Word TypeTable_20;
  MR_Word Repn_29;
  MR_Word TypeDefn_21;
  MR_Word TypeBody_22;
  MR_Word MaybeRepn_27;
  MR_Word Var_30;
  MR_Word CheapConsTag_38;
  MR_Word ExpensiveConsTag_36;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_5, &VarTable_9);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_9, Var_6, &VarEntry_10);
  VarType_11 = ((MR_Word) ((MR_hl_field(0, VarEntry_10, 1))));
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_5, Var_6, VarEntry_10, &VarLval_12);
  {
    VarRval_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, VarRval_13, 0) = ((MR_Box) (VarLval_12));
  }
  ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(Info_5, ConsId_7, &ConsTag_14);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_18);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_11, &TypeCtor_19);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_18, &TypeTable_20);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_20, TypeCtor_19, &TypeDefn_21);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_21, &TypeBody_22);
    succeeded = ((MR_tag((MR_Word) TypeBody_22)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = (MR_Word) ((MR_Word) (TypeBody_22));
      MaybeRepn_27 = ((MR_Word) ((MR_hl_field(0, Var_30, 4))));
      succeeded = (MaybeRepn_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        Repn_29 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_27, 0))));
    }
  }
  if (succeeded)
    CheaperTagTest_15 = ((MR_Word) ((MR_hl_field(0, Repn_29, 2))));
  else
    CheaperTagTest_15 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (CheaperTagTest_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ExpensiveConsTag_36 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_15, 1))));
    CheapConsTag_38 = ((MR_Word) ((MR_hl_field(1, CheaperTagTest_15, 3))));
    succeeded = hlds__hlds_data____Unify____cons_tag_0_0(ConsTag_14, ExpensiveConsTag_36);
  }
  if (succeeded)
  {
    MR_Word CheapConsTagTestRval_39;
    MR_Word IntType_40;
    MR_Word SubRvalA_41;
    MR_Word SubRvalB_42;
    MR_Word Var_43;
    MR_Word Var_44;

    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_direct_5_p_0(Info_5, VarRval_13, VarType_11, CheapConsTag_38, &CheapConsTagTestRval_39);
    succeeded = ((((MR_tag((MR_Word) CheapConsTagTestRval_39)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CheapConsTagTestRval_39, 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      Var_43 = ((MR_Word) ((MR_hl_field(3, CheapConsTagTestRval_39, 1))));
      SubRvalA_41 = ((MR_Word) ((MR_hl_field(3, CheapConsTagTestRval_39, 2))));
      SubRvalB_42 = ((MR_Word) ((MR_hl_field(3, CheapConsTagTestRval_39, 3))));
      succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_43, 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        IntType_40 = ((((MR_Unsigned) ((MR_hl_field(3, Var_43, 1))) >> 3)) & (MR_Integer) 15);
        Var_44 = ((MR_Unsigned) ((MR_hl_field(3, Var_43, 1))) & (MR_Integer) 7);
        succeeded = (Var_44 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Var_45;

      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_45, 1) = (MR_Box) (((((MR_Unsigned) (IntType_40) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *TestRval_8 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Var_45));
        MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_41));
        MR_hl_field(3, base, 3) = ((MR_Box) (SubRvalB_42));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *TestRval_8 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(3, base, 2) = ((MR_Box) (CheapConsTagTestRval_39));
      }
  }
  else
    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_direct_5_p_0(Info_5, VarRval_13, VarType_11, ConsTag_14, TestRval_8);
}

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_direct_5_p_0(
  MR_Word Info_6,
  MR_Word VarRval_7,
  MR_Word Type_8,
  MR_Word ConsTag_9,
  MR_Word * TestRval_10)
{
  switch (MR_tag((MR_Word) ConsTag_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *TestRval_10 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[1]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_11 = ((MR_Word) ((MR_hl_field(1, ConsTag_9, 0))));
        MR_Word ModuleInfo_12;

        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_12);
        ml_backend__ml_unify_gen_test__ml_generate_test_rval_is_int_tag_5_p_0(ModuleInfo_12, VarRval_7, Type_8, IntTag_11, TestRval_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_13 = MR_unbox_float((MR_hl_field(2, ConsTag_9, 0)));
        MR_Word Var_69;
        MR_Word Var_70;

        {
          Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_70, 1) = MR_box_float(Float_13);
        }
        {
          Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *TestRval_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[2])));
          MR_hl_field(3, base, 2) = ((MR_Box) (VarRval_7));
          MR_hl_field(3, base, 3) = ((MR_Box) (Var_69));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_14 = ((MR_String) ((MR_hl_field(3, ConsTag_9, 1))));
            MR_Word Var_73;
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, Var_74, 1) = ((MR_Box) (String_14));
            }
            {
              Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *TestRval_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[5])));
              MR_hl_field(3, base, 2) = ((MR_Box) (VarRval_7));
              MR_hl_field(3, base, 3) = ((MR_Box) (Var_73));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignLang_15 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_9, 1))) & (MR_Integer) 3);
            MR_String ForeignVal_16 = ((MR_String) ((MR_hl_field(3, ConsTag_9, 2))));
            MR_Word MLDS_Type_17;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word ModuleInfo_147;

            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_147);
            MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_147, Type_8);
            {
              Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_79, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_15));
              MR_hl_field(3, Var_79, 2) = ((MR_Box) (ForeignVal_16));
              MR_hl_field(3, Var_79, 3) = ((MR_Box) (MLDS_Type_17));
            }
            {
              Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_78, 1) = ((MR_Box) (Var_79));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *TestRval_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
              MR_hl_field(3, base, 2) = ((MR_Box) (VarRval_7));
              MR_hl_field(3, base, 3) = ((MR_Box) (Var_78));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MustMask_48 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_9, 3))) & (MR_Integer) 1);
            MR_Word Var_129;
            MR_Word SectagBits_190;
            MR_Word LocalSectag_192 = ((MR_Word) ((MR_hl_field(3, ConsTag_9, 2))));
            MR_Unsigned PrimSec_194 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_192, 1))));
            MR_Word ConstPrimSecRval_195;

            SectagBits_190 = ((MR_Word) ((MR_hl_field(0, LocalSectag_192, 2))));
            {
              Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_129, 1) = ((MR_Box) (PrimSec_194));
            }
            {
              ConstPrimSecRval_195 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstPrimSecRval_195, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstPrimSecRval_195, 1) = ((MR_Box) (Var_129));
            }
            switch (MustMask_48) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_133;
                  MR_Word ModuleInfo_171;
                  MR_Word MLDS_Type_172;

                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_171);
                  MLDS_Type_172 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_171, Type_8);
                  {
                    Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, Var_133, 1) = ((MR_Box) (MLDS_Type_172));
                    MR_hl_field(3, Var_133, 2) = ((MR_Box) (ConstPrimSecRval_195));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(3, base, 2) = ((MR_Box) (VarRval_7));
                    MR_hl_field(3, base, 3) = ((MR_Box) (Var_133));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  uint8_t Var_134;
                  MR_Unsigned Var_135;
                  MR_Word Var_140;
                  MR_Word Var_141;
                  uint8_t NumPtagBits_174;
                  uint8_t NumSectagBits_175;
                  MR_Integer NumPtagSectagBits_177;
                  MR_Unsigned PrimSecMask_178;
                  MR_Word MaskedVarRval_179;

                  ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_174);
                  NumSectagBits_175 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_190, 0)));
                  Var_134 = (NumPtagBits_174 + NumSectagBits_175);
                  NumPtagSectagBits_177 = mercury__uint8__cast_to_int_1_f_0(Var_134);
                  Var_135 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_177);
                  PrimSecMask_178 = (Var_135 - (MR_Unsigned) 1U);
                  {
                    Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_141, 1) = ((MR_Box) (PrimSecMask_178));
                  }
                  {
                    Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_140, 1) = ((MR_Box) (Var_141));
                  }
                  {
                    MaskedVarRval_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, MaskedVarRval_179, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, MaskedVarRval_179, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[3])));
                    MR_hl_field(3, MaskedVarRval_179, 2) = ((MR_Box) (VarRval_7));
                    MR_hl_field(3, MaskedVarRval_179, 3) = ((MR_Box) (Var_140));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[4])));
                    MR_hl_field(3, base, 2) = ((MR_Box) (MaskedVarRval_179));
                    MR_hl_field(3, base, 3) = ((MR_Box) (ConstPrimSecRval_195));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_test.ml_generate_test_rval_has_cons_tag_direct\'/5", (MR_String) "unexpacted ConsTag");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_22 = ((MR_Word) ((MR_hl_field(3, ConsTag_9, 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *TestRval_10 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[1]));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_89;
                  MR_Integer Var_90;
                  MR_Word Ptag_148 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_22, 0))));
                  MR_Word VarPtag_149;
                  uint8_t PtagUint8_150;
                  MR_Word PtagConstRval_151;

                  {
                    VarPtag_149 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, VarPtag_149, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, VarPtag_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, VarPtag_149, 2) = ((MR_Box) (VarRval_7));
                  }
                  PtagUint8_150 = (uint8_t) (Ptag_148);
                  Var_90 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_150);
                  {
                    Var_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_89, 0) = ((MR_Box) (Var_90));
                  }
                  {
                    PtagConstRval_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, PtagConstRval_151, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, PtagConstRval_151, 1) = ((MR_Box) (Var_89));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(3, base, 2) = ((MR_Box) (VarPtag_149));
                    MR_hl_field(3, base, 3) = ((MR_Box) (PtagConstRval_151));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_23 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_22, 1))));
                  MR_Word ConstPtagRval_24;
                  MR_Word PtagTestRval_25;
                  MR_Word VarSectagWordRval_26;
                  MR_Unsigned SectagUint_27;
                  MR_Word SectagSize_28;
                  MR_Word VarSectagRval_29;
                  MR_Word ConstSectagRval_33;
                  MR_Word SectagTestRval_34;
                  MR_Word Var_95;
                  MR_Integer Var_96;
                  MR_Word Var_104;
                  MR_Integer Var_105;
                  MR_Word Ptag_152 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_22, 0))));
                  MR_Word VarPtag_153;
                  uint8_t PtagUint8_154;

                  {
                    VarPtag_153 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, VarPtag_153, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, VarPtag_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, VarPtag_153, 2) = ((MR_Box) (VarRval_7));
                  }
                  PtagUint8_154 = (uint8_t) (Ptag_152);
                  Var_96 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_154);
                  {
                    Var_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_95, 0) = ((MR_Box) (Var_96));
                  }
                  {
                    ConstPtagRval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, ConstPtagRval_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, ConstPtagRval_24, 1) = ((MR_Box) (Var_95));
                  }
                  {
                    PtagTestRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, PtagTestRval_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, PtagTestRval_25, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(3, PtagTestRval_25, 2) = ((MR_Box) (VarPtag_153));
                    MR_hl_field(3, PtagTestRval_25, 3) = ((MR_Box) (ConstPtagRval_24));
                  }
                  ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, VarRval_7, Ptag_152, &VarSectagWordRval_26);
                  SectagUint_27 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_23, 0))));
                  SectagSize_28 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_23, 1))));
                  if ((SectagSize_28 == (MR_Word) ((MR_Unsigned) 0U)))
                    VarSectagRval_29 = VarSectagWordRval_26;
                  else
                  {
                    MR_Word SectagBits_30 = (MR_Word) (MR_body((MR_Word) (SectagSize_28), (MR_Integer) 1));
                    MR_Unsigned SectagMask_32 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_30, 1))));
                    MR_Word Var_102;
                    MR_Word Var_103;

                    {
                      Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_103, 1) = ((MR_Box) (SectagMask_32));
                    }
                    {
                      Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_102, 1) = ((MR_Box) (Var_103));
                    }
                    {
                      VarSectagRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, VarSectagRval_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, VarSectagRval_29, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[3])));
                      MR_hl_field(3, VarSectagRval_29, 2) = ((MR_Box) (VarSectagWordRval_26));
                      MR_hl_field(3, VarSectagRval_29, 3) = ((MR_Box) (Var_102));
                    }
                  }
                  Var_105 = mercury__uint__cast_to_int_1_f_0(SectagUint_27);
                  {
                    Var_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_104, 0) = ((MR_Box) (Var_105));
                  }
                  {
                    ConstSectagRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, ConstSectagRval_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, ConstSectagRval_33, 1) = ((MR_Box) (Var_104));
                  }
                  {
                    SectagTestRval_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, SectagTestRval_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, SectagTestRval_34, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(3, SectagTestRval_34, 2) = ((MR_Box) (VarSectagRval_29));
                    MR_hl_field(3, SectagTestRval_34, 3) = ((MR_Box) (ConstSectagRval_33));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, base, 2) = ((MR_Box) (PtagTestRval_25));
                    MR_hl_field(3, base, 3) = ((MR_Box) (SectagTestRval_34));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Unsigned Data_35 = ((MR_Unsigned) ((MR_hl_field(3, RemoteArgsTagInfo_22, 0))));
                  MR_Word Var_111;
                  MR_Integer Var_112;
                  MR_Word VarSectagRval_156;
                  MR_Word ConstSectagRval_157;

                  ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, VarRval_7, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), &VarSectagRval_156);
                  Var_112 = mercury__uint__cast_to_int_1_f_0(Data_35);
                  {
                    Var_111 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_111, 0) = ((MR_Box) (Var_112));
                  }
                  {
                    ConstSectagRval_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, ConstSectagRval_157, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, ConstSectagRval_157, 1) = ((MR_Box) (Var_111));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(3, base, 2) = ((MR_Box) (VarSectagRval_156));
                    MR_hl_field(3, base, 3) = ((MR_Box) (ConstSectagRval_157));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_36 = ((MR_Word) ((MR_hl_field(3, ConsTag_9, 1))));

            if ((LocalArgsTagInfo_36 == (MR_Word) ((MR_Unsigned) 0U)))
              *TestRval_10 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[1]));
            else
            {
              MR_Word LocalSectag_38 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_36, 1))));
              MR_Unsigned PrimSec_40 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_38, 1))));
              MR_Word ConstPrimSecRval_41;
              uint8_t NumPtagBits_42;
              uint8_t NumSectagBits_43;
              MR_Integer NumPtagSectagBits_45;
              MR_Unsigned PrimSecMask_46;
              MR_Word MaskedVarRval_47;
              MR_Word Var_117;
              uint8_t Var_118;
              MR_Unsigned Var_119;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word SectagBits_166 = ((MR_Word) ((MR_hl_field(0, LocalSectag_38, 2))));

              {
                Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_117, 1) = ((MR_Box) (PrimSec_40));
              }
              {
                ConstPrimSecRval_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ConstPrimSecRval_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, ConstPrimSecRval_41, 1) = ((MR_Box) (Var_117));
              }
              ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_42);
              NumSectagBits_43 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_166, 0)));
              Var_118 = (NumPtagBits_42 + NumSectagBits_43);
              NumPtagSectagBits_45 = mercury__uint8__cast_to_int_1_f_0(Var_118);
              Var_119 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_45);
              PrimSecMask_46 = (Var_119 - (MR_Unsigned) 1U);
              {
                Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_125, 1) = ((MR_Box) (PrimSecMask_46));
              }
              {
                Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_124, 1) = ((MR_Box) (Var_125));
              }
              {
                MaskedVarRval_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, MaskedVarRval_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, MaskedVarRval_47, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[3])));
                MR_hl_field(3, MaskedVarRval_47, 2) = ((MR_Box) (VarRval_7));
                MR_hl_field(3, MaskedVarRval_47, 3) = ((MR_Box) (Var_124));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[4])));
                MR_hl_field(3, base, 2) = ((MR_Box) (MaskedVarRval_47));
                MR_hl_field(3, base, 3) = ((MR_Box) (ConstPrimSecRval_41));
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_18 = ((MR_Word) ((MR_hl_field(3, ConsTag_9, 1))));
            MR_Word VarPtag_19;
            uint8_t PtagUint8_20;
            MR_Word PtagConstRval_21;
            MR_Word Var_82;
            MR_Integer Var_83;

            {
              VarPtag_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, VarPtag_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, VarPtag_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, VarPtag_19, 2) = ((MR_Box) (VarRval_7));
            }
            PtagUint8_20 = (uint8_t) (Ptag_18);
            Var_83 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_20);
            {
              Var_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_82, 0) = ((MR_Box) (Var_83));
            }
            {
              PtagConstRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, PtagConstRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, PtagConstRval_21, 1) = ((MR_Box) (Var_82));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *TestRval_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
              MR_hl_field(3, base, 2) = ((MR_Box) (VarPtag_19));
              MR_hl_field(3, base, 3) = ((MR_Box) (PtagConstRval_21));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_is_int_tag_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Rval_7,
  MR_Word Type_8,
  MR_Word IntTag_9,
  MR_Word * TestRval_10)
{
  MR_bool succeeded;
  MR_Word Const_12;
  MR_Word EqType_14;
  MR_Word Var_24;
  MR_Word Var_26;

  switch (MR_tag((MR_Word) IntTag_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_11 = ((MR_Integer) ((MR_hl_field(0, IntTag_9, 0))));
        MR_Word Var_27;

        Var_27 = parse_tree__builtin_lib_types__int_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_27);
        if (succeeded)
          {
            Const_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Const_12, 0) = ((MR_Box) (Int_11));
          }
        else
        {
          MR_Word Var_28;

          Var_28 = parse_tree__builtin_lib_types__char_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_28);
          if (succeeded)
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, Const_12, 1) = ((MR_Box) (Int_11));
            }
          else
          {
            MR_Word MLDS_Type_13;

            MLDS_Type_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, Type_8);
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Const_12, 1) = ((MR_Box) (Int_11));
              MR_hl_field(3, Const_12, 2) = ((MR_Box) (MLDS_Type_13));
            }
          }
        }
        EqType_14 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_15 = ((MR_Unsigned) ((MR_hl_field(1, IntTag_9, 0))));

        EqType_14 = (MR_Integer) 1;
        {
          Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Const_12, 1) = ((MR_Box) (UInt_15));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_16 = ((int8_t) (MR_Word) (MR_hl_field(2, IntTag_9, 0)));

        EqType_14 = (MR_Integer) 2;
        {
          Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Const_12, 1) = ((MR_Box) (MR_Word) (Int8_16));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, IntTag_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_17 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntTag_9, 1)));

            EqType_14 = (MR_Integer) 3;
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Const_12, 1) = ((MR_Box) (MR_Word) (UInt8_17));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_18 = ((int16_t) (MR_Word) (MR_hl_field(3, IntTag_9, 1)));

            EqType_14 = (MR_Integer) 4;
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Const_12, 1) = ((MR_Box) (MR_Word) (Int16_18));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_19 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntTag_9, 1)));

            EqType_14 = (MR_Integer) 5;
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Const_12, 1) = ((MR_Box) (MR_Word) (UInt16_19));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_20 = ((int32_t) (MR_Word) (MR_hl_field(3, IntTag_9, 1)));

            EqType_14 = (MR_Integer) 6;
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Const_12, 1) = ((MR_Box) (MR_Word) (Int32_20));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_21 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntTag_9, 1)));

            EqType_14 = (MR_Integer) 7;
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Const_12, 1) = ((MR_Box) (MR_Word) (UInt32_21));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_22 = MR_unbox_int64((MR_hl_field(3, IntTag_9, 1)));

            EqType_14 = (MR_Integer) 8;
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Const_12, 1) = MR_box_int64(Int64_22);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_23 = MR_unbox_uint64((MR_hl_field(3, IntTag_9, 1)));

            EqType_14 = (MR_Integer) 9;
            {
              Const_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_12, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Const_12, 1) = MR_box_uint64(UInt64_23);
            }
          }
          break;
      }
      break;
  }
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_24, 1) = (MR_Box) (((((MR_Unsigned) (EqType_14) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (Const_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *TestRval_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_24));
    MR_hl_field(3, base, 2) = ((MR_Box) (Rval_7));
    MR_hl_field(3, base, 3) = ((MR_Box) (Var_26));
  }
}

void mercury__ml_backend__ml_unify_gen_test__init(void)
{
}

void mercury__ml_backend__ml_unify_gen_test__init_type_tables(void)
{
}

void mercury__ml_backend__ml_unify_gen_test__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unify_gen_test__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unify_gen_test.
