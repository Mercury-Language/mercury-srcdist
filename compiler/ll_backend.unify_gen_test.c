/*
** Automatically generated from `unify_gen_test.m'
** by the Mercury compiler,
** version 2018-08-15
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_value_ordered_test_sense_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_name_ordered_test_sense_0[2];

static const MR_Integer ll_backend__unify_gen_test__ll_backend__unify_gen_test__functor_number_map_test_sense_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen_test__IntroducedFrom__pred__generate_test_rval_has_cons_tag__197__1_2_p_0(
  MR_Word ForeignLang_14,
  MR_Word HeadVar__2_113);

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
ll_backend__unify_gen_test__generate_test_var_has_cons_id_tag_10_p_0(
  MR_Word VarRval_11,
  MR_String VarName_12,
  MR_Word ConsId_13,
  MR_Word ConsTag_14,
  MR_Word CheaperTagTest_15,
  MR_Word Sense_16,
  MR_Word * ElseLabel_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29);

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

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_2[1][5];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_4[1][7];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_5[1][6];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_6[1][3];




static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_1[5][2] = {
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
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_test_scalar_common_3[1])))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_6[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_5[0])),
    ((MR_Box) (ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_0 = {
  (MR_String) "branch_on_success",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_functor_desc_test_sense_0_1 = {
  (MR_String) "branch_on_failure",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_value_ordered_test_sense_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_test____Unify____test_sense_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_test____Compare____test_sense_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_test",
  (MR_String) "test_sense",
  {     ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_name_ordered_test_sense_0 },
  {     ll_backend__unify_gen_test__ll_backend__unify_gen_test__enum_value_ordered_test_sense_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen_test__ll_backend__unify_gen_test__functor_number_map_test_sense_0
};

static MR_bool MR_CALL 
ll_backend__unify_gen_test__IntroducedFrom__pred__generate_test_rval_has_cons_tag__197__1_2_p_0(
  MR_Word ForeignLang_14,
  MR_Word HeadVar__2_113)
{
  {
    MR_bool succeeded = (ForeignLang_14 == HeadVar__2_113);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__unify_gen_test____Compare____test_sense_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ll_backend__unify_gen_test____Unify____test_sense_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_tagged_cons_id_4_p_0(
  MR_Word CI_5,
  MR_Word VarRval_6,
  MR_Word TaggedConsId_7,
  MR_Word * TestRval_8)
{
  {
    MR_Word ConsTag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 1))));

    ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(CI_5, VarRval_6, ConsTag_10, TestRval_8);
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__2_2;
    MR_Word conv1_HeadVar__3_3;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2, &conv1_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TestRval_8;

    ll_backend__unify_gen_test__generate_test_rval_has_tagged_cons_id_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TestRval_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_TestRval_8));
  }
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
  if ((OtherTaggedConsIds_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MainConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_13, (MR_Integer) 0))));
    MR_Word MainConsTag_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_13, (MR_Integer) 1))));

    ll_backend__unify_gen_test__generate_test_var_has_cons_id_tag_10_p_0(VarRval_11, VarName_12, MainConsId_20, MainConsTag_21, CheaperTagTest_15, Sense_16, ElseLabel_17, Code_18, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33);
  }
  else
  {
    MR_Word MainTagTestRval_24;
    MR_Word OtherTagTestRvals_25;
    MR_Word TestRval_26;
    MR_String MainConsName_27;
    MR_Word OtherConsNames_29;
    MR_String Comment_31;
    MR_Word Var_34;
    MR_String Var_36;
    MR_String Var_37;
    MR_Word ConsTag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_13, (MR_Integer) 1))));
    MR_Word BranchRval_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_28;
    MR_Word Var_30;

    ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_32, VarRval_11, ConsTag_54, &MainTagTestRval_24);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (STATE_VARIABLE_CI_0_32));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (VarRval_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_34, OtherTaggedConsIds_14, &OtherTagTestRvals_25);
    ll_backend__unify_gen_test__logical_or_rvals_3_p_0(MainTagTestRval_24, OtherTagTestRvals_25, &TestRval_26);
    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(MainTaggedConsId_13, &MainConsName_27, &Var_28);
    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__unify_gen_test_scalar_common_6[0]), OtherTaggedConsIds_14, &OtherConsNames_29, &Var_30);
    Var_37 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_12, MainConsName_27, OtherConsNames_29);
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_17, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33);
    switch (Sense_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Var_36 = (MR_String) "branch away unless ";
          ll_backend__code_util__neg_rval_2_p_0(TestRval_26, &BranchRval_63);
        }
        break;
      case (MR_Integer) 0:
        {
          Var_36 = (MR_String) "branch away if ";
          BranchRval_63 = TestRval_26;
        }
        break;
    }
    Comment_31 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (*ElseLabel_17));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (BranchRval_63));
      MR_hl_field(MR_mktag(3), Var_66, 2) = ((MR_Box) (Var_67));
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Comment_31));
    }
    *Code_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_65)));
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_var_has_cons_id_tag_10_p_0(
  MR_Word VarRval_11,
  MR_String VarName_12,
  MR_Word ConsId_13,
  MR_Word ConsTag_14,
  MR_Word CheaperTagTest_15,
  MR_Word Sense_16,
  MR_Word * ElseLabel_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29)
{
  {
    MR_bool succeeded;
    MR_String ConsIdName_20;
    MR_String Comment_25;
    MR_Word TestRval_27;
    MR_Word BranchRval_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word CheapConsTag_24;
    MR_Word ExpensiveConsId_21;

    ConsIdName_20 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_13);
    succeeded = ((MR_tag((MR_Word) CheaperTagTest_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      ExpensiveConsId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_15, (MR_Integer) 0))));
      CheapConsTag_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_15, (MR_Integer) 3))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_13, ExpensiveConsId_21);
    }
    if (succeeded)
    {
      MR_Word NegTestRval_26;
      MR_String Var_30;
      MR_String Var_31;
      MR_String Var_32;
      MR_String Var_34;

      switch (Sense_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_30 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_30 = (MR_String) "branch away if ";
          break;
      }
      Var_34 = mercury__string__f_43_43_2_f_0(ConsIdName_20, (MR_String) " (inverted test)");
      Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_34);
      Var_31 = mercury__string__f_43_43_2_f_0(VarName_12, Var_32);
      Comment_25 = mercury__string__f_43_43_2_f_0(Var_30, Var_31);
      ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_28, VarRval_11, CheapConsTag_24, &NegTestRval_26);
      ll_backend__code_util__neg_rval_2_p_0(NegTestRval_26, &TestRval_27);
    }
    else
    {
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_38;

      switch (Sense_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_36 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_36 = (MR_String) "branch away if ";
          break;
      }
      Var_38 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_20);
      Var_37 = mercury__string__f_43_43_2_f_0(VarName_12, Var_38);
      Comment_25 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
      ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_28, VarRval_11, ConsTag_14, &TestRval_27);
    }
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_17, STATE_VARIABLE_CI_0_28, STATE_VARIABLE_CI_29);
    switch (Sense_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__code_util__neg_rval_2_p_0(TestRval_27, &BranchRval_50);
        break;
      case (MR_Integer) 0:
        BranchRval_50 = TestRval_27;
        break;
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (*ElseLabel_17));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (BranchRval_50));
      MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (Var_54));
    }
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Comment_25));
    }
    *Code_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
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
        NextTestRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18;
    MR_Word ConsTag_19;
    MR_String ConsIdName_34;
    MR_String Comment_39;
    MR_Word TestRval_41;
    MR_Word BranchRval_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word CheapConsTag_38;
    MR_Word ExpensiveConsId_35;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_20, &ModuleInfo_18);
    ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_18, ConsId_12);
    ConsIdName_34 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_12);
    succeeded = ((MR_tag((MR_Word) CheaperTagTest_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      ExpensiveConsId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 0))));
      CheapConsTag_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 3))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_12, ExpensiveConsId_35);
    }
    if (succeeded)
    {
      MR_Word NegTestRval_40;
      MR_String Var_42;
      MR_String Var_43;
      MR_String Var_44;
      MR_String Var_46;

      switch (Sense_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_42 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_42 = (MR_String) "branch away if ";
          break;
      }
      Var_46 = mercury__string__f_43_43_2_f_0(ConsIdName_34, (MR_String) " (inverted test)");
      Var_44 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_46);
      Var_43 = mercury__string__f_43_43_2_f_0(VarName_11, Var_44);
      Comment_39 = mercury__string__f_43_43_2_f_0(Var_42, Var_43);
      ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_20, VarRval_10, CheapConsTag_38, &NegTestRval_40);
      ll_backend__code_util__neg_rval_2_p_0(NegTestRval_40, &TestRval_41);
    }
    else
    {
      MR_String Var_48;
      MR_String Var_49;
      MR_String Var_50;

      switch (Sense_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_48 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_48 = (MR_String) "branch away if ";
          break;
      }
      Var_50 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_34);
      Var_49 = mercury__string__f_43_43_2_f_0(VarName_11, Var_50);
      Comment_39 = mercury__string__f_43_43_2_f_0(Var_48, Var_49);
      ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(STATE_VARIABLE_CI_0_20, VarRval_10, ConsTag_19, &TestRval_41);
    }
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_15, STATE_VARIABLE_CI_0_20, STATE_VARIABLE_CI_21);
    switch (Sense_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__code_util__neg_rval_2_p_0(TestRval_41, &BranchRval_62);
        break;
      case (MR_Integer) 0:
        BranchRval_62 = TestRval_41;
        break;
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (*ElseLabel_15));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (BranchRval_62));
      MR_hl_field(MR_mktag(3), Var_65, 2) = ((MR_Box) (Var_66));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Comment_39));
    }
    *Code_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_64)));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_test__IntroducedFrom__pred__generate_test_rval_has_cons_tag__197__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0(
  MR_Word CI_5,
  MR_Word VarRval_6,
  MR_Word ConsTag_7,
  MR_Word * TestRval_8)
{
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
          MR_Word Var_126;
          MR_Word Var_127;

          ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_9, &Const_10, &IntType_11);
          {
            Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (IntType_11));
          }
          {
            Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (Const_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_127));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_7, (MR_Integer) 0)));
          MR_Word Var_124;
          MR_Word Var_125;

          {
            Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_125, 1) = MR_box_float(Float_12);
          }
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (Var_125));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 64U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_124));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word Var_121;
              MR_Word Var_122;

              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (String_13));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_121));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_String ForeignVal_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word Var_110;
              MR_Word Var_116;
              MR_Word Var_117;

              {
                Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (ll_backend__unify_gen_test__generate_test_rval_has_cons_tag_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (ForeignLang_14));
                MR_hl_field(MR_mktag(0), Var_110, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_110, (MR_String) "predicate \140ll_backend.unify_gen_test.generate_test_rval_has_cons_tag\'/4", (MR_String) "foreign tag for language other than C");
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (ForeignVal_15));
                MR_hl_field(MR_mktag(3), Var_117, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_test_scalar_common_3[0])));
              }
              {
                Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Var_117));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_116));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MustMask_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 3))));
              MR_Word Var_63;
              MR_Integer Var_64;
              MR_Word LocalSectag_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Unsigned PrimSec_149 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_147, (MR_Integer) 1))));
              MR_Word SectagBits_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_147, (MR_Integer) 2))));
              MR_Word ConstPrimSecRval_151;

              Var_64 = mercury__uint__cast_to_int_1_f_0(PrimSec_149);
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
              }
              {
                ConstPrimSecRval_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPrimSecRval_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPrimSecRval_151, 1) = ((MR_Box) (Var_63));
              }
              switch (MustMask_41) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *TestRval_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_6));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_151));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    uint8_t Var_65;
                    MR_Unsigned Var_66;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    uint8_t NumPtagBits_134;
                    uint8_t NumSectagBits_135;
                    MR_Integer NumPtagSectagBits_137;
                    MR_Unsigned PrimSecMask_138;
                    MR_Word MaskedVarRval_139;

                    ll_backend__code_info__get_num_ptag_bits_2_p_0(CI_5, &NumPtagBits_134);
                    NumSectagBits_135 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_150, (MR_Integer) 0)));
                    Var_65 = (NumPtagBits_134 + NumSectagBits_135);
                    NumPtagSectagBits_137 = mercury__uint8__cast_to_int_1_f_0(Var_65);
                    Var_66 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_137);
                    PrimSecMask_138 = (Var_66 - (MR_Unsigned) 1U);
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (PrimSecMask_138));
                    }
                    {
                      Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
                    }
                    {
                      MaskedVarRval_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[2])));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_139, 2) = ((MR_Box) (VarRval_6));
                      MR_hl_field(MR_mktag(3), MaskedVarRval_139, 3) = ((MR_Box) (Var_71));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *TestRval_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[3])));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedVarRval_139));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_151));
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_test.generate_test_rval_has_cons_tag\'/4", (MR_String) "unexpected ConsTag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Ptag_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word VarPtag_160;
              uint8_t PtagUint8_161;
              MR_Word PtagConstRval_162;
              MR_Word Var_164;
              MR_Integer Var_165;

              {
                VarPtag_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_160, 2) = ((MR_Box) (VarRval_6));
              }
              PtagUint8_161 = (uint8_t) (Ptag_159);
              Var_165 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_161);
              {
                Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
              }
              {
                PtagConstRval_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagConstRval_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), PtagConstRval_162, 1) = ((MR_Box) (Var_164));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_160));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (PtagConstRval_162));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word RemoteSectag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word ConstPtagRval_21;
              MR_Word PtagTestRval_22;
              MR_Word VarSectagRval_23;
              MR_Unsigned SecTagUint_24;
              MR_Word ConstSectagRval_26;
              MR_Word SectagTestRval_27;
              MR_Word Var_90;
              MR_Integer Var_91;
              MR_Word Var_92;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_99;
              MR_Integer Var_100;
              MR_Word Ptag_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word VarPtag_129;
              uint8_t PtagUint8_130;

              {
                VarPtag_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_129, 2) = ((MR_Box) (VarRval_6));
              }
              PtagUint8_130 = (uint8_t) (Ptag_128);
              Var_91 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_130);
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
              }
              {
                ConstPtagRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtagRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPtagRval_21, 1) = ((MR_Box) (Var_90));
              }
              Var_92 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0]));
              {
                PtagTestRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagTestRval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), PtagTestRval_22, 1) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(3), PtagTestRval_22, 2) = ((MR_Box) (VarPtag_129));
                MR_hl_field(MR_mktag(3), PtagTestRval_22, 3) = ((MR_Box) (ConstPtagRval_21));
              }
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Ptag_128));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (VarRval_6));
                MR_hl_field(MR_mktag(3), Var_94, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[4])));
              }
              {
                VarSectagRval_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), VarSectagRval_23, 0) = ((MR_Box) (Var_94));
              }
              SecTagUint_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_20, (MR_Integer) 0))));
              Var_100 = mercury__uint__cast_to_int_1_f_0(SecTagUint_24);
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
              }
              {
                ConstSectagRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstSectagRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstSectagRval_26, 1) = ((MR_Box) (Var_99));
              }
              {
                SectagTestRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 1) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 2) = ((MR_Box) (VarSectagRval_23));
                MR_hl_field(MR_mktag(3), SectagTestRval_27, 3) = ((MR_Box) (ConstSectagRval_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PtagTestRval_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SectagTestRval_27));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalArgsTagInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));

              if ((LocalArgsTagInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
                *TestRval_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[1]));
              else
              {
                MR_Word LocalSectag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_28, (MR_Integer) 1))));
                MR_Unsigned PrimSec_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_30, (MR_Integer) 1))));
                MR_Word SectagBits_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_30, (MR_Integer) 2))));
                MR_Word ConstPrimSecRval_34;
                uint8_t NumPtagBits_35;
                uint8_t NumSectagBits_36;
                MR_Integer NumPtagSectagBits_38;
                MR_Unsigned PrimSecMask_39;
                MR_Word MaskedVarRval_40;
                MR_Word Var_77;
                uint8_t Var_78;
                MR_Unsigned Var_79;
                MR_Word Var_84;
                MR_Word Var_85;

                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (PrimSec_32));
                }
                {
                  ConstPrimSecRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstPrimSecRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstPrimSecRval_34, 1) = ((MR_Box) (Var_77));
                }
                ll_backend__code_info__get_num_ptag_bits_2_p_0(CI_5, &NumPtagBits_35);
                NumSectagBits_36 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_33, (MR_Integer) 0)));
                Var_78 = (NumPtagBits_35 + NumSectagBits_36);
                NumPtagSectagBits_38 = mercury__uint8__cast_to_int_1_f_0(Var_78);
                Var_79 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_38);
                PrimSecMask_39 = (Var_79 - (MR_Unsigned) 1U);
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (PrimSecMask_39));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
                }
                {
                  MaskedVarRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[2])));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_40, 2) = ((MR_Box) (VarRval_6));
                  MR_hl_field(MR_mktag(3), MaskedVarRval_40, 3) = ((MR_Box) (Var_84));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *TestRval_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[3])));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedVarRval_40));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSecRval_34));
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Ptag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word VarPtag_17;
              uint8_t PtagUint8_18;
              MR_Word PtagConstRval_19;
              MR_Word Var_105;
              MR_Integer Var_106;

              {
                VarPtag_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_17, 2) = ((MR_Box) (VarRval_6));
              }
              PtagUint8_18 = (uint8_t) (Ptag_16);
              Var_106 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_18);
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
              }
              {
                PtagConstRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagConstRval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), PtagConstRval_19, 1) = ((MR_Box) (Var_105));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
}

static MR_bool MR_CALL 
ll_backend__unify_gen_test____Unify____test_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_test____Unify____test_sense_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_test____Compare____test_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_test____Compare____test_sense_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
