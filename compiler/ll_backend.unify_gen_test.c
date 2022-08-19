/*
** Automatically generated from `unify_gen_test.m'
** by the Mercury compiler,
** version rotd-2022-08-19
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


// :- module ll_backend.unify_gen_test.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen_test__init
ENDINIT
*/

#include "ll_backend.unify_gen_test.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_ordinal_ordered_test_sense_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_name_ordered_test_sense_0[2];

static const MR_Integer ll_backend__unify_gen_test__ll_backend__unify_gen_test__functor_number_map_test_sense_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen_test__IntroducedFrom__pred__generate_test_rval_has_cons_tag__197__1_2_p_0(
  MR_Word ForeignLang_14,
  MR_Word HeadVar__2_77);

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_tagged_cons_id_4_p_0(
  MR_Word CI_5,
  MR_Word VarRval_6,
  MR_Word TaggedConsId_7,
  MR_Word * TestRval_8);

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_test__logical_or_rvals_3_p_0(
  MR_Word CurTestRval_4,
  MR_Word OtherTestRvals_5,
  MR_Word * TestRval_6);

static MR_bool MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(
  MR_Word CI_5,
  MR_Word VarRval_6,
  MR_Word ConsTag_7,
  MR_Word * TestRval_8);

static MR_bool MR_CALL 
ll_backend__unify_gen_test____Unify____test_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_test____Compare____test_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_2[2][1];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_3[1][5];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_4[1][7];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_5[1][6];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_6[1][3];




static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_test_scalar_common_2[1])))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_2[2][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_6[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_5[0])),
    ((MR_Box) (ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_0 = {
  (MR_String) "branch_on_success",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_1 = {
  (MR_String) "branch_on_failure",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_ordinal_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_0,
  &ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_name_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_1,
  &ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_0
};

static const MR_Integer ll_backend__unify_gen_test__ll_backend__unify_gen_test__functor_number_map_test_sense_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_test__ll_backend__unify_gen_test__type_ctor_info_test_sense_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_test____Unify____test_sense_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_test____Compare____test_sense_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_test",
  (MR_String) "test_sense",
  { ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_name_ordered_test_sense_0 },
  { ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_ordinal_ordered_test_sense_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__unify_gen_test__ll_backend__unify_gen_test__functor_number_map_test_sense_0,

};

static MR_bool MR_CALL 
ll_backend__unify_gen_test__IntroducedFrom__pred__generate_test_rval_has_cons_tag__197__1_2_p_0(
  MR_Word ForeignLang_14,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded = (ForeignLang_14 == HeadVar__2_77);

  return succeeded;
}

void MR_CALL 
ll_backend__unify_gen_test____Compare____test_sense_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
ll_backend__unify_gen_test____Unify____test_sense_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_tagged_cons_id_4_p_0(
  MR_Word CI_5,
  MR_Word VarRval_6,
  MR_Word TaggedConsId_7,
  MR_Word * TestRval_8)
{
  MR_Word ConsTag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 1))));

  ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(CI_5, VarRval_6, ConsTag_10, TestRval_8);
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;
  MR_Word conv1_HeadVar__3_3;

  hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2, &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TestRval_8;

  ll_backend__unify_gen_test__generate_test_rval_has_tagged_cons_id_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TestRval_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_TestRval_8));
}

void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0(
  MR_Word VarRval_11,
  MR_String VarName_12,
  MR_Word MainTaggedConsId_13,
  MR_Word OtherTaggedConsIds_14,
  MR_Word CheaperTagTest_15,
  MR_Word Sense_16,
  MR_Word * ElseLabel_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_32,
  MR_Word * STATE_VARIABLE_CI_33)
{
  MR_bool succeeded;

  if ((OtherTaggedConsIds_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_13, (MR_Integer) 0))));
    MR_Word MainConsTag_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_13, (MR_Integer) 1))));
    MR_String ConsIdName_48;
    MR_String Comment_53;
    MR_Word TestRval_55;
    MR_Word BranchRval_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word CheapConsTag_52;
    MR_Word ExpensiveConsId_49;

    ConsIdName_48 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(MainConsId_20);
    succeeded = (CheaperTagTest_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ExpensiveConsId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_15, (MR_Integer) 0))));
      CheapConsTag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_15, (MR_Integer) 3))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(MainConsId_20, ExpensiveConsId_49);
    }
    if (succeeded)
    {
      MR_Word NegTestRval_54;
      MR_String Var_56;
      MR_String Var_57;
      MR_String Var_58;
      MR_String Var_60;

      switch (Sense_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_56 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_56 = (MR_String) "branch away if ";
          break;
      }
      Var_60 = mercury__string__f_43_43_2_f_0(ConsIdName_48, (MR_String) " (inverted test)");
      Var_58 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_60);
      Var_57 = mercury__string__f_43_43_2_f_0(VarName_12, Var_58);
      Comment_53 = mercury__string__f_43_43_2_f_0(Var_56, Var_57);
      ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_32, VarRval_11, CheapConsTag_52, &NegTestRval_54);
      ll_backend__code_util__neg_rval_2_p_0(NegTestRval_54, &TestRval_55);
    }
    else
    {
      MR_String Var_62;
      MR_String Var_63;
      MR_String Var_64;

      switch (Sense_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_62 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_62 = (MR_String) "branch away if ";
          break;
      }
      Var_64 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_48);
      Var_63 = mercury__string__f_43_43_2_f_0(VarName_12, Var_64);
      Comment_53 = mercury__string__f_43_43_2_f_0(Var_62, Var_63);
      ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_32, VarRval_11, MainConsTag_21, &TestRval_55);
    }
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_17, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33);
    switch (Sense_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__code_util__neg_rval_2_p_0(TestRval_55, &BranchRval_67);
        break;
      case (MR_Integer) 0:
        BranchRval_67 = TestRval_55;
        break;
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (*ElseLabel_17));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (BranchRval_67));
      MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (Var_70));
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Comment_53));
    }
    *Code_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_68)));
  }
  else
  {
    MR_Word MainTagTestRval_24;
    MR_Word OtherTagTestRvals_25;
    MR_Word TestRval_26;
    MR_String MainConsName_27;
    MR_Word OtherConsNames_29;
    MR_String Comment_31;
    MR_Word Var_35;
    MR_String Var_37;
    MR_String Var_38;
    MR_Word ConsTag_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_13, (MR_Integer) 1))));
    MR_Word BranchRval_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_28;
    MR_Word Var_30;

    ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_32, VarRval_11, ConsTag_73, &MainTagTestRval_24);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (STATE_VARIABLE_CI_0_32));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (VarRval_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_35, OtherTaggedConsIds_14, &OtherTagTestRvals_25);
    ll_backend__unify_gen_test__logical_or_rvals_3_p_0(MainTagTestRval_24, OtherTagTestRvals_25, &TestRval_26);
    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(MainTaggedConsId_13, &MainConsName_27, &Var_28);
    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__unify_gen_test_scalar_common_6[0]), OtherTaggedConsIds_14, &OtherConsNames_29, &Var_30);
    Var_38 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_12, MainConsName_27, OtherConsNames_29);
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_17, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33);
    switch (Sense_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Var_37 = (MR_String) "branch away unless ";
          ll_backend__code_util__neg_rval_2_p_0(TestRval_26, &BranchRval_74);
        }
        break;
      case (MR_Integer) 0:
        {
          Var_37 = (MR_String) "branch away if ";
          BranchRval_74 = TestRval_26;
        }
        break;
    }
    Comment_31 = mercury__string__f_43_43_2_f_0(Var_37, Var_38);
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (*ElseLabel_17));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (BranchRval_74));
      MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (Var_77));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Comment_31));
    }
    *Code_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_75)));
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__logical_or_rvals_3_p_0(
  MR_Word CurTestRval_4,
  MR_Word OtherTestRvals_5,
  MR_Word * TestRval_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((OtherTestRvals_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *TestRval_6 = CurTestRval_4;
    else
    {
      MR_Word HeadTestRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherTestRvals_5, (MR_Integer) 0))));
      MR_Word TailTestRvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherTestRvals_5, (MR_Integer) 1))));
      MR_Word NextTestRval_9;
      MR_Word next_value_of_CurTestRval_4;
      MR_Word next_value_of_OtherTestRvals_5;

      {
        NextTestRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 2) = ((MR_Box) (CurTestRval_4));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 3) = ((MR_Box) (HeadTestRval_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_CurTestRval_4 = NextTestRval_9;
      next_value_of_OtherTestRvals_5 = TailTestRvals_8;
      CurTestRval_4 = next_value_of_CurTestRval_4;
      OtherTestRvals_5 = next_value_of_OtherTestRvals_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_cons_id_9_p_0(
  MR_Word VarRval_10,
  MR_String VarName_11,
  MR_Word ConsId_12,
  MR_Word CheaperTagTest_13,
  MR_Word Sense_14,
  MR_Word * ElseLabel_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_20,
  MR_Word * STATE_VARIABLE_CI_21)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word ConsTag_19;
  MR_String ConsIdName_22;
  MR_String Comment_27;
  MR_Word TestRval_29;
  MR_Word BranchRval_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word CheapConsTag_26;
  MR_Word ExpensiveConsId_23;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_20, &ModuleInfo_18);
  ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_18, ConsId_12);
  ConsIdName_22 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_12);
  succeeded = (CheaperTagTest_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ExpensiveConsId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 0))));
    CheapConsTag_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 3))));
    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_12, ExpensiveConsId_23);
  }
  if (succeeded)
  {
    MR_Word NegTestRval_28;
    MR_String Var_30;
    MR_String Var_31;
    MR_String Var_32;
    MR_String Var_34;

    switch (Sense_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_30 = (MR_String) "branch away unless ";
        break;
      case (MR_Integer) 0:
        Var_30 = (MR_String) "branch away if ";
        break;
    }
    Var_34 = mercury__string__f_43_43_2_f_0(ConsIdName_22, (MR_String) " (inverted test)");
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_34);
    Var_31 = mercury__string__f_43_43_2_f_0(VarName_11, Var_32);
    Comment_27 = mercury__string__f_43_43_2_f_0(Var_30, Var_31);
    ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_20, VarRval_10, CheapConsTag_26, &NegTestRval_28);
    ll_backend__code_util__neg_rval_2_p_0(NegTestRval_28, &TestRval_29);
  }
  else
  {
    MR_String Var_36;
    MR_String Var_37;
    MR_String Var_38;

    switch (Sense_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_36 = (MR_String) "branch away unless ";
        break;
      case (MR_Integer) 0:
        Var_36 = (MR_String) "branch away if ";
        break;
    }
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_22);
    Var_37 = mercury__string__f_43_43_2_f_0(VarName_11, Var_38);
    Comment_27 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
    ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_20, VarRval_10, ConsTag_19, &TestRval_29);
  }
  ll_backend__code_info__get_next_label_3_p_0(ElseLabel_15, STATE_VARIABLE_CI_0_20, STATE_VARIABLE_CI_21);
  switch (Sense_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ll_backend__code_util__neg_rval_2_p_0(TestRval_29, &BranchRval_41);
      break;
    case (MR_Integer) 0:
      BranchRval_41 = TestRval_29;
      break;
  }
  {
    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (*ElseLabel_15));
  }
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (BranchRval_41));
    MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (Var_44));
  }
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Comment_27));
  }
  *Code_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_42)));
}

static MR_bool MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_test__IntroducedFrom__pred__generate_test_rval_has_cons_tag__197__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(
  MR_Word CI_5,
  MR_Word VarRval_6,
  MR_Word ConsTag_7,
  MR_Word * TestRval_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsTag_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *TestRval_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[1]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_7, (MR_Integer) 0))));
        MR_Word Const_10;
        MR_Word IntType_11;
        MR_Word Var_66;
        MR_Word Var_67;

        ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_9, &Const_10, &IntType_11);
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Var_66, 1) = (MR_Box) ((MR_Unsigned) (IntType_11));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Const_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *TestRval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_67));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_7, (MR_Integer) 0)));
        MR_Word Var_69;
        MR_Word Var_70;

        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_70, 1) = MR_box_float(Float_12);
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *TestRval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 68U));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_69));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
            MR_Word Var_72;
            MR_Word Var_73;

            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (String_13));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *TestRval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_72));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignLang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String ForeignVal_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
            MR_Word Var_74;
            MR_Word Var_80;
            MR_Word Var_81;

            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0_1));
              MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ForeignLang_14));
              MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ll_backend.unify_gen_test.generate_test_rval_has_cons_tag\'/4", (MR_String) "foreign tag for language other than C");
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ForeignVal_15));
              MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_test_scalar_common_2[0])));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *TestRval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_80));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MustMask_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Var_129;
            MR_Integer Var_130;
            MR_Word SectagBits_178;
            MR_Word LocalSectag_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
            MR_Unsigned PrimSec_182 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_180, (MR_Integer) 1))));
            MR_Word ConstPrimSecRval_183;

            SectagBits_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_180, (MR_Integer) 2))));
            Var_130 = mercury__uint__cast_to_int_1_f_0(PrimSec_182);
            {
              Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
            }
            {
              ConstPrimSecRval_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConstPrimSecRval_183, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ConstPrimSecRval_183, 1) = ((MR_Box) (Var_129));
            }
            switch (MustMask_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *TestRval_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_183));
                }
                break;
              case (MR_Integer) 1:
                {
                  uint8_t Var_133;
                  MR_Unsigned Var_134;
                  MR_Word Var_139;
                  MR_Word Var_140;
                  uint8_t NumPtagBits_166;
                  uint8_t NumSectagBits_167;
                  MR_Integer NumPtagSectagBits_169;
                  MR_Unsigned PrimSecMask_170;
                  MR_Word MaskedVarRval_171;

                  ll_backend__code_info__get_num_ptag_bits_2_p_0(CI_5, &NumPtagBits_166);
                  NumSectagBits_167 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_178, (MR_Integer) 0)));
                  Var_133 = (NumPtagBits_166 + NumSectagBits_167);
                  NumPtagSectagBits_169 = mercury__uint8__cast_to_int_1_f_0(Var_133);
                  Var_134 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_169);
                  PrimSecMask_170 = (Var_134 - (MR_Unsigned) 1U);
                  {
                    Var_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_140, 0) = ((MR_Box) (PrimSecMask_170));
                  }
                  {
                    Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (Var_140));
                  }
                  {
                    MaskedVarRval_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MaskedVarRval_171, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), MaskedVarRval_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[2])));
                    MR_hl_field(MR_mktag(3), MaskedVarRval_171, 2) = ((MR_Box) (VarRval_6));
                    MR_hl_field(MR_mktag(3), MaskedVarRval_171, 3) = ((MR_Box) (Var_139));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[3])));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedVarRval_171));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_183));
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_test.generate_test_rval_has_cons_tag\'/4", (MR_String) "unexpected ConsTag");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *TestRval_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[1]));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_92;
                  MR_Integer Var_93;
                  MR_Word Ptag_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_20, (MR_Integer) 0))));
                  MR_Word VarPtag_146;
                  uint8_t PtagUint8_147;
                  MR_Word PtagConstRval_148;

                  {
                    VarPtag_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), VarPtag_146, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), VarPtag_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), VarPtag_146, 2) = ((MR_Box) (VarRval_6));
                  }
                  PtagUint8_147 = (uint8_t) (Ptag_145);
                  Var_93 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_147);
                  {
                    Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                  }
                  {
                    PtagConstRval_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), PtagConstRval_148, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), PtagConstRval_148, 1) = ((MR_Box) (Var_92));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_146));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (PtagConstRval_148));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_20, (MR_Integer) 1))));
                  MR_Word ConstPtagRval_22;
                  MR_Word PtagTestRval_23;
                  MR_Word VarSectagWordRval_24;
                  MR_Unsigned SecTagUint_25;
                  MR_Word SectagSize_26;
                  MR_Word VarSectagRval_27;
                  MR_Word ConstSectagRval_31;
                  MR_Word SectagTestRval_32;
                  MR_Word Var_97;
                  MR_Integer Var_98;
                  MR_Word Var_101;
                  MR_Word Var_102;
                  MR_Word Var_110;
                  MR_Integer Var_111;
                  MR_Word Ptag_149 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_20, (MR_Integer) 0))));
                  MR_Word VarPtag_150;
                  uint8_t PtagUint8_151;

                  {
                    VarPtag_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), VarPtag_150, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), VarPtag_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), VarPtag_150, 2) = ((MR_Box) (VarRval_6));
                  }
                  PtagUint8_151 = (uint8_t) (Ptag_149);
                  Var_98 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_151);
                  {
                    Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
                  }
                  {
                    ConstPtagRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ConstPtagRval_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), ConstPtagRval_22, 1) = ((MR_Box) (Var_97));
                  }
                  {
                    PtagTestRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), PtagTestRval_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), PtagTestRval_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(MR_mktag(3), PtagTestRval_23, 2) = ((MR_Box) (VarPtag_150));
                    MR_hl_field(MR_mktag(3), PtagTestRval_23, 3) = ((MR_Box) (ConstPtagRval_22));
                  }
                  {
                    Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Ptag_149));
                  }
                  {
                    Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (Var_102));
                    MR_hl_field(MR_mktag(3), Var_101, 2) = ((MR_Box) (VarRval_6));
                    MR_hl_field(MR_mktag(3), Var_101, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[4])));
                  }
                  {
                    VarSectagWordRval_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), VarSectagWordRval_24, 0) = ((MR_Box) (Var_101));
                  }
                  SecTagUint_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_21, (MR_Integer) 0))));
                  SectagSize_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_21, (MR_Integer) 1))));
                  if ((SectagSize_26 == (MR_Word) ((MR_Unsigned) 0U)))
                    VarSectagRval_27 = VarSectagWordRval_24;
                  else
                  {
                    MR_Word SectagBits_28 = (MR_Word) (MR_body((MR_Word) (SectagSize_26), (MR_Integer) 1));
                    MR_Unsigned SectagMask_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectagBits_28, (MR_Integer) 1))));
                    MR_Word Var_108;
                    MR_Word Var_109;

                    {
                      Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_109, 0) = ((MR_Box) (SectagMask_30));
                    }
                    {
                      Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (Var_109));
                    }
                    {
                      VarSectagRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), VarSectagRval_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), VarSectagRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[2])));
                      MR_hl_field(MR_mktag(3), VarSectagRval_27, 2) = ((MR_Box) (VarSectagWordRval_24));
                      MR_hl_field(MR_mktag(3), VarSectagRval_27, 3) = ((MR_Box) (Var_108));
                    }
                  }
                  Var_111 = mercury__uint__cast_to_int_1_f_0(SecTagUint_25);
                  {
                    Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
                  }
                  {
                    ConstSectagRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ConstSectagRval_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), ConstSectagRval_31, 1) = ((MR_Box) (Var_110));
                  }
                  {
                    SectagTestRval_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SectagTestRval_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), SectagTestRval_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                    MR_hl_field(MR_mktag(3), SectagTestRval_32, 2) = ((MR_Box) (VarSectagRval_27));
                    MR_hl_field(MR_mktag(3), SectagTestRval_32, 3) = ((MR_Box) (ConstSectagRval_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *TestRval_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PtagTestRval_23));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SectagTestRval_32));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_test.generate_test_rval_has_cons_tag\'/4", (MR_String) "remote_args_ctor");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));

            if ((LocalArgsTagInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
              *TestRval_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[1]));
            else
            {
              MR_Word LocalSectag_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_34, (MR_Integer) 1))));
              MR_Unsigned PrimSec_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_36, (MR_Integer) 1))));
              MR_Word ConstPrimSecRval_39;
              uint8_t NumPtagBits_40;
              uint8_t NumSectagBits_41;
              MR_Integer NumPtagSectagBits_43;
              MR_Unsigned PrimSecMask_44;
              MR_Word MaskedVarRval_45;
              MR_Word Var_118;
              uint8_t Var_119;
              MR_Unsigned Var_120;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word SectagBits_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_36, (MR_Integer) 2))));

              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_118, 0) = ((MR_Box) (PrimSec_38));
              }
              {
                ConstPrimSecRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPrimSecRval_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ConstPrimSecRval_39, 1) = ((MR_Box) (Var_118));
              }
              ll_backend__code_info__get_num_ptag_bits_2_p_0(CI_5, &NumPtagBits_40);
              NumSectagBits_41 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_160, (MR_Integer) 0)));
              Var_119 = (NumPtagBits_40 + NumSectagBits_41);
              NumPtagSectagBits_43 = mercury__uint8__cast_to_int_1_f_0(Var_119);
              Var_120 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_43);
              PrimSecMask_44 = (Var_120 - (MR_Unsigned) 1U);
              {
                Var_126 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_126, 0) = ((MR_Box) (PrimSecMask_44));
              }
              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_126));
              }
              {
                MaskedVarRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedVarRval_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), MaskedVarRval_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[2])));
                MR_hl_field(MR_mktag(3), MaskedVarRval_45, 2) = ((MR_Box) (VarRval_6));
                MR_hl_field(MR_mktag(3), MaskedVarRval_45, 3) = ((MR_Box) (Var_125));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[3])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedVarRval_45));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_39));
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
            MR_Word VarPtag_17;
            uint8_t PtagUint8_18;
            MR_Word PtagConstRval_19;
            MR_Word Var_86;
            MR_Integer Var_87;

            {
              VarPtag_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), VarPtag_17, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), VarPtag_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), VarPtag_17, 2) = ((MR_Box) (VarRval_6));
            }
            PtagUint8_18 = (uint8_t) (Ptag_16);
            Var_87 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_18);
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            }
            {
              PtagConstRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), PtagConstRval_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), PtagConstRval_19, 1) = ((MR_Box) (Var_86));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *TestRval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_17));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (PtagConstRval_19));
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_test____Unify____test_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_test____Unify____test_sense_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_test____Compare____test_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_test____Compare____test_sense_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__unify_gen_test__init(void)
{
}

void mercury__ll_backend__unify_gen_test__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen_test__ll_backend__unify_gen_test__type_ctor_info_test_sense_0);
}

void mercury__ll_backend__unify_gen_test__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen_test__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen_test.
