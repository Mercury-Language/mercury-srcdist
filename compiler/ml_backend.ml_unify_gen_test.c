/*
** Automatically generated from `ml_unify_gen_test.m'
** by the Mercury compiler,
** version rotd-2018-08-14
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.mark_tail_calls.mih"
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
#include "counter.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_tagged_cons_id_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word Type_8,
  MR_Word TaggedConsId_9,
  MR_Word * TestRval_10);

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_logical_or_rvals_3_p_0(
  MR_Word FirstRval_4,
  MR_Word LaterRvals_5,
  MR_Word * Rval_6);

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_5_p_0(
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


static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_2[1][8];




static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_test_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_tagged_cons_id_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word Type_8,
  MR_Word TaggedConsId_9,
  MR_Word * TestRval_10)
{
  {
    MR_Word ConsTag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_9, (MR_Integer) 1))));

    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_5_p_0(Info_6, Rval_7, Type_8, ConsTag_12, TestRval_10);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TestRval_10;

    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_tagged_cons_id_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_TestRval_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_TestRval_10));
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0(
  MR_Word Var_7,
  MR_Word MainTaggedConsId_8,
  MR_Word OtherTaggedConsIds_9,
  MR_Word * TestRval_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word VarLval_12;
    MR_Word VarRval_13;
    MR_Word VarType_14;
    MR_Word MainTestRval_15;
    MR_Word OtherTestRvals_16;
    MR_Word Var_19;
    MR_Word ConsTag_30;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_17, Var_7, &VarLval_12);
    {
      VarRval_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), VarRval_13, 0) = ((MR_Box) (VarLval_12));
    }
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_17, Var_7, &VarType_14);
    ConsTag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_8, (MR_Integer) 1))));
    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_5_p_0(STATE_VARIABLE_Info_0_17, VarRval_13, VarType_14, ConsTag_30, &MainTestRval_15);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_test_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_17));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (VarRval_13));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (VarType_14));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_19, OtherTaggedConsIds_9, &OtherTestRvals_16);
    ml_backend__ml_unify_gen_test__ml_logical_or_rvals_3_p_0(MainTestRval_15, OtherTestRvals_16, TestRval_10);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
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
      MR_Word SecondRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterRvals_5, (MR_Integer) 0))));
      MR_Word OtherRvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterRvals_5, (MR_Integer) 1))));
      MR_Word FirstSecondRval_9;
      MR_Word next_value_of_FirstRval_4;
      MR_Word next_value_of_LaterRvals_5;

      {
        FirstSecondRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FirstSecondRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), FirstSecondRval_9, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), FirstSecondRval_9, 2) = ((MR_Box) (FirstRval_4));
        MR_hl_field(MR_mktag(3), FirstSecondRval_9, 3) = ((MR_Box) (SecondRval_7));
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
ml_backend__ml_unify_gen_test__ml_generate_test_var_has_cons_id_5_p_0(
  MR_Word Var_6,
  MR_Word ConsId_7,
  MR_Word * TestRval_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word VarLval_10;
    MR_Word VarRval_11;
    MR_Word VarType_12;
    MR_Word ConsTag_13;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &VarLval_10);
    {
      VarRval_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), VarRval_11, 0) = ((MR_Box) (VarLval_10));
    }
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_14, Var_6, &VarType_12);
    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_14, ConsId_7, &ConsTag_13);
    ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_5_p_0(STATE_VARIABLE_Info_0_14, VarRval_11, VarType_12, ConsTag_13, TestRval_8);
    *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_test__ml_generate_test_rval_has_cons_tag_5_p_0(
  MR_Word Info_6,
  MR_Word VarRval_7,
  MR_Word Type_8,
  MR_Word ConsTag_9,
  MR_Word * TestRval_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *TestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[1]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_9, (MR_Integer) 0))));
          MR_Word ModuleInfo_12;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_12);
          ml_backend__ml_unify_gen_test__ml_generate_test_rval_is_int_tag_5_p_0(ModuleInfo_12, VarRval_7, Type_8, IntTag_11, TestRval_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_9, (MR_Integer) 0)));
          MR_Word Var_115;
          MR_Word Var_116;

          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_116, 1) = MR_box_float(Float_13);
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_116));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 64U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_7));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_115));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1))));
              MR_Word Var_112;
              MR_Word Var_113;

              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (String_14));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (Var_113));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_7));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_112));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1))));
              MR_String ForeignVal_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2))));
              MR_Word MLDS_Type_17;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word ModuleInfo_117;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_117);
              MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_117, Type_8);
              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (ForeignLang_15));
                MR_hl_field(MR_mktag(3), Var_110, 2) = ((MR_Box) (ForeignVal_16));
                MR_hl_field(MR_mktag(3), Var_110, 3) = ((MR_Box) (MLDS_Type_17));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_110));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_7));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_109));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MustMask_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 3))));
              MR_Word Var_65;
              MR_Word LocalSectag_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2))));
              MR_Unsigned PrimSec_153 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_151, (MR_Integer) 1))));
              MR_Word SectagBits_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_151, (MR_Integer) 2))));
              MR_Word ConstPrimSecRval_155;

              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (PrimSec_153));
              }
              {
                ConstPrimSecRval_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPrimSecRval_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPrimSecRval_155, 1) = ((MR_Box) (Var_65));
              }
              switch (MustMask_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_78;
                    MR_Word ModuleInfo_130;
                    MR_Word MLDS_Type_131;

                    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_130);
                    MLDS_Type_131 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_130, Type_8);
                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (MLDS_Type_131));
                      MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (ConstPrimSecRval_155));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *TestRval_10 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_7));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_78));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    uint8_t Var_66;
                    MR_Unsigned Var_67;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    uint8_t NumPtagBits_133;
                    uint8_t NumSectagBits_134;
                    MR_Integer NumPtagSectagBits_136;
                    MR_Unsigned PrimSecMask_137;
                    MR_Word MaskedVarRval_138;

                    ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_133);
                    NumSectagBits_134 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_154, (MR_Integer) 0)));
                    Var_66 = (NumPtagBits_133 + NumSectagBits_134);
                    NumPtagSectagBits_136 = mercury__uint8__cast_to_int_1_f_0(Var_66);
                    Var_67 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_136);
                    PrimSecMask_137 = (Var_67 - (MR_Unsigned) 1U);
                    {
                      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (PrimSecMask_137));
                    }
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
                    }
                    {
                      MaskedVarRval_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[2])));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_138, 2) = ((MR_Box) (VarRval_7));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_138, 3) = ((MR_Box) (Var_72));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *TestRval_10 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[3])));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedVarRval_138));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_155));
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
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_test.ml_generate_test_rval_has_cons_tag\'/5", (MR_String) "unexpacted ConsTag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Ptag_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1))));
              MR_Word VarPtag_162;
              uint8_t PtagUint8_163;
              MR_Word PtagConstRval_164;
              MR_Word Var_166;
              MR_Integer Var_167;

              {
                VarPtag_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), VarPtag_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_162, 2) = ((MR_Box) (VarRval_7));
              }
              PtagUint8_163 = (uint8_t) (Ptag_161);
              Var_167 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_163);
              {
                Var_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_166, 0) = ((MR_Box) (Var_167));
              }
              {
                PtagConstRval_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagConstRval_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), PtagConstRval_164, 1) = ((MR_Box) (Var_166));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_162));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (PtagConstRval_164));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word RemoteSectag_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2))));
              MR_Word VarSectagRval_23;
              MR_Unsigned SectagUint_24;
              MR_Word ConstSectagRval_26;
              MR_Word SectagTestRval_27;
              uint8_t NumPtagBits_28;
              MR_Word Var_91;
              MR_Integer Var_92;
              MR_Word Var_93;
              MR_Word Ptag_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1))));

              ml_backend__ml_unify_gen_util__ml_gen_secondary_tag_rval_5_p_0(Info_6, Type_8, VarRval_7, Ptag_122, &VarSectagRval_23);
              SectagUint_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_22, (MR_Integer) 0))));
              Var_92 = mercury__uint__cast_to_int_1_f_0(SectagUint_24);
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (Var_92));
              }
              {
                ConstSectagRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstSectagRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstSectagRval_26, 1) = ((MR_Box) (Var_91));
              }
              Var_93 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[0]));
              {
                SectagTestRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 1) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 2) = ((MR_Box) (VarSectagRval_23));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 3) = ((MR_Box) (ConstSectagRval_26));
              }
              ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_28);
              succeeded = (NumPtagBits_28 == UINT8_C(0));
              if (succeeded)
                *TestRval_10 = SectagTestRval_27;
              else
              {
                MR_Word ConstPtagRval_29;
                MR_Word PtagTestRval_30;
                MR_Word Var_96;
                MR_Integer Var_97;
                MR_Word VarPtag_118;
                uint8_t PtagUint8_119;

                {
                  VarPtag_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), VarPtag_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), VarPtag_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), VarPtag_118, 2) = ((MR_Box) (VarRval_7));
                }
                PtagUint8_119 = (uint8_t) (Ptag_122);
                Var_97 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_119);
                {
                  Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (Var_97));
                }
                {
                  ConstPtagRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstPtagRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstPtagRval_29, 1) = ((MR_Box) (Var_96));
                }
                {
                  PtagTestRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PtagTestRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), PtagTestRval_30, 1) = ((MR_Box) (Var_93));
                  MR_hl_field(MR_mktag(3), PtagTestRval_30, 2) = ((MR_Box) (VarPtag_118));
                  MR_hl_field(MR_mktag(3), PtagTestRval_30, 3) = ((MR_Box) (ConstPtagRval_29));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *TestRval_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PtagTestRval_30));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SectagTestRval_27));
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalArgsTagInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1))));

              if ((LocalArgsTagInfo_31 == (MR_Word) ((MR_Unsigned) 0U)))
                *TestRval_10 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[1]));
              else
              {
                MR_Word LocalSectag_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_31, (MR_Integer) 1))));
                MR_Unsigned PrimSec_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_33, (MR_Integer) 1))));
                MR_Word SectagBits_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_33, (MR_Integer) 2))));
                MR_Word ConstPrimSecRval_37;
                uint8_t NumSectagBits_38;
                MR_Integer NumPtagSectagBits_40;
                MR_Unsigned PrimSecMask_41;
                MR_Word MaskedVarRval_42;
                MR_Word Var_79;
                uint8_t Var_80;
                MR_Unsigned Var_81;
                MR_Word Var_86;
                MR_Word Var_87;
                uint8_t NumPtagBits_125;

                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (PrimSec_35));
                }
                {
                  ConstPrimSecRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstPrimSecRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstPrimSecRval_37, 1) = ((MR_Box) (Var_79));
                }
                ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(Info_6, &NumPtagBits_125);
                NumSectagBits_38 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_36, (MR_Integer) 0)));
                Var_80 = (NumPtagBits_125 + NumSectagBits_38);
                NumPtagSectagBits_40 = mercury__uint8__cast_to_int_1_f_0(Var_80);
                Var_81 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_40);
                PrimSecMask_41 = (Var_81 - (MR_Unsigned) 1U);
                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (PrimSecMask_41));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
                }
                {
                  MaskedVarRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[2])));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_42, 2) = ((MR_Box) (VarRval_7));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_42, 3) = ((MR_Box) (Var_86));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *TestRval_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[3])));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedVarRval_42));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_37));
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Ptag_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1))));
              MR_Word VarPtag_19;
              uint8_t PtagUint8_20;
              MR_Word PtagConstRval_21;
              MR_Word Var_102;
              MR_Integer Var_103;

              {
                VarPtag_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), VarPtag_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_19, 2) = ((MR_Box) (VarRval_7));
              }
              PtagUint8_20 = (uint8_t) (Ptag_18);
              Var_103 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_20);
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_102, 0) = ((MR_Box) (Var_103));
              }
              {
                PtagConstRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagConstRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), PtagConstRval_21, 1) = ((MR_Box) (Var_102));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_19));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (PtagConstRval_21));
              }
            }
            break;
        }
        break;
    }
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
  {
    MR_bool succeeded;
    MR_Word Const_12;
    MR_Word EqType_14;
    MR_Word Var_24;
    MR_Word Var_25;

    switch (MR_tag((MR_Word) IntTag_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Int_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_9, (MR_Integer) 0))));
          MR_Word Var_26;

          Var_26 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_26);
          if (succeeded)
            {
              Const_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Const_12, 0) = ((MR_Box) (Int_11));
            }
          else
          {
            MR_Word Var_27;

            Var_27 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_27);
            if (succeeded)
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (Int_11));
              }
            else
            {
              MR_Word MLDS_Type_13;

              MLDS_Type_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, Type_8);
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (Int_11));
                MR_hl_field(MR_mktag(3), Const_12, 2) = ((MR_Box) (MLDS_Type_13));
              }
            }
          }
          EqType_14 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned UInt_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntTag_9, (MR_Integer) 0))));

          EqType_14 = (MR_Integer) 1;
          {
            Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (UInt_15));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Int8_16 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_9, (MR_Integer) 0)));

          EqType_14 = (MR_Integer) 2;
          {
            Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (MR_Word) (Int8_16));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t UInt8_17 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

              EqType_14 = (MR_Integer) 3;
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (MR_Word) (UInt8_17));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t Int16_18 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

              EqType_14 = (MR_Integer) 4;
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (MR_Word) (Int16_18));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t UInt16_19 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

              EqType_14 = (MR_Integer) 5;
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (MR_Word) (UInt16_19));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t Int32_20 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

              EqType_14 = (MR_Integer) 6;
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (MR_Word) (Int32_20));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t UInt32_21 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

              EqType_14 = (MR_Integer) 7;
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Const_12, 1) = ((MR_Box) (MR_Word) (UInt32_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int64_t Int64_22 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

              EqType_14 = (MR_Integer) 8;
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), Const_12, 1) = MR_box_int64(Int64_22);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint64_t UInt64_23 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_9, (MR_Integer) 1)));

              EqType_14 = (MR_Integer) 9;
              {
                Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_12, 1) = MR_box_uint64(UInt64_23);
              }
            }
            break;
        }
        break;
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (EqType_14));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Const_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *TestRval_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_7));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_25));
    }
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
