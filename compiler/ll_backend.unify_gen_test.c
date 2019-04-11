/*
** Automatically generated from `unify_gen_test.m'
** by the Mercury compiler,
** version rotd-2018-07-11
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
ll_backend__unify_gen_test__IntroducedFrom__pred__raw_tag_test__198__1_2_p_0(
  MR_Word ForeignLang_14,
  MR_Word HeadVar__2_111);

static void MR_CALL 
ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
  MR_Word VarRval_12,
  MR_String VarName_14,
  MR_Word ConsId_15,
  MR_Word MaybeConsTag_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_33,
  MR_Word * STATE_VARIABLE_CI_34);

static void MR_CALL 
ll_backend__unify_gen_test__disjoin_tag_tests_3_p_0(
  MR_Word CurTestRval_4,
  MR_Word OtherTestRvals_5,
  MR_Word * TestRval_6);

static MR_bool MR_CALL 
ll_backend__unify_gen_test__raw_tag_test_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_test__raw_tag_test_4_p_0(
  MR_Word CI_5,
  MR_Word Rval_6,
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


static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_2[1][5];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_5[1][3];

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_6[1][7];




static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_1[4][2] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_4[1][6] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_4[0])),
    ((MR_Box) (ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_test_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
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
ll_backend__unify_gen_test__IntroducedFrom__pred__raw_tag_test__198__1_2_p_0(
  MR_Word ForeignLang_14,
  MR_Word HeadVar__2_111)
{
  {
    MR_bool succeeded = (ForeignLang_14 == HeadVar__2_111);

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

void MR_CALL 
ll_backend__unify_gen_test__generate_raw_tag_test_case_11_p_0(
  MR_Word VarRval_12,
  MR_Word VarType_13,
  MR_String VarName_14,
  MR_Word MainTaggedConsId_15,
  MR_Word OtherTaggedConsIds_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35)
{
  ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(VarRval_12, VarName_14, MainTaggedConsId_15, OtherTaggedConsIds_16, CheaperTagTest_17, Sense_18, ElseLabel_19, Code_20, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
}

static void MR_CALL 
ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_TestRval_8;

    ll_backend__unify_gen_test__raw_tag_test_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_TestRval_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_TestRval_8));
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(
  MR_Word VarRval_12,
  MR_String VarName_14,
  MR_Word MainTaggedConsId_15,
  MR_Word OtherTaggedConsIds_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35)
{
  if ((OtherTaggedConsIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_15, (MR_Integer) 0))));
    MR_Word MainConsTag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_15, (MR_Integer) 1))));
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MainConsTag_23));
    }
    ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(VarRval_12, VarName_14, MainConsId_22, Var_44, CheaperTagTest_17, Sense_18, ElseLabel_19, Code_20, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
  }
  else
  {
    MR_String MainConsName_26;
    MR_Word OtherConsNames_27;
    MR_Word OtherConsTags_28;
    MR_String Comment_29;
    MR_Word MainTagTestRval_30;
    MR_Word OtherTagTestRvals_31;
    MR_Word TestRval_32;
    MR_Word TheRval_33;
    MR_String Var_37;
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word MainConsTag_46;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(MainTaggedConsId_15, &MainConsName_26, &MainConsTag_46);
    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__unify_gen_test_scalar_common_5[0]), OtherTaggedConsIds_16, &OtherConsNames_27, &OtherConsTags_28);
    Var_38 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_14, MainConsName_26, OtherConsNames_27);
    ll_backend__unify_gen_test__raw_tag_test_4_p_0(STATE_VARIABLE_CI_0_34, VarRval_12, MainConsTag_46, &MainTagTestRval_30);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (STATE_VARIABLE_CI_0_34));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (VarRval_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_39, OtherConsTags_28, &OtherTagTestRvals_31);
    ll_backend__unify_gen_test__disjoin_tag_tests_3_p_0(MainTagTestRval_30, OtherTagTestRvals_31, &TestRval_32);
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_19, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
    switch (Sense_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Var_37 = (MR_String) "branch away unless ";
          ll_backend__code_util__neg_rval_2_p_0(TestRval_32, &TheRval_33);
        }
        break;
      case (MR_Integer) 0:
        {
          Var_37 = (MR_String) "branch away if ";
          TheRval_33 = TestRval_32;
        }
        break;
    }
    Comment_29 = mercury__string__f_43_43_2_f_0(Var_37, Var_38);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (*ElseLabel_19));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (TheRval_33));
      MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Comment_29));
    }
    *Code_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_41)));
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
  MR_Word VarRval_12,
  MR_String VarName_14,
  MR_Word ConsId_15,
  MR_Word MaybeConsTag_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_33,
  MR_Word * STATE_VARIABLE_CI_34)
{
  {
    MR_bool succeeded;
    MR_String ConsIdName_22;
    MR_String Comment_27;
    MR_Word TestRval_29;
    MR_Word TheRval_32;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word CheapConsTag_26;
    MR_Word ExpensiveConsId_23;

    ConsIdName_22 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_15);
    succeeded = ((MR_tag((MR_Word) CheaperTagTest_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      ExpensiveConsId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 0))));
      CheapConsTag_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 3))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_15, ExpensiveConsId_23);
    }
    if (succeeded)
    {
      MR_Word NegTestRval_28;
      MR_String Var_35;
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_39;

      switch (Sense_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_35 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_35 = (MR_String) "branch away if ";
          break;
      }
      Var_39 = mercury__string__f_43_43_2_f_0(ConsIdName_22, (MR_String) " (inverted test)");
      Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_39);
      Var_36 = mercury__string__f_43_43_2_f_0(VarName_14, Var_37);
      Comment_27 = mercury__string__f_43_43_2_f_0(Var_35, Var_36);
      ll_backend__unify_gen_test__raw_tag_test_4_p_0(STATE_VARIABLE_CI_0_33, VarRval_12, CheapConsTag_26, &NegTestRval_28);
      ll_backend__code_util__neg_rval_2_p_0(NegTestRval_28, &TestRval_29);
    }
    else
    {
      MR_Word ConsTag_30;
      MR_String Var_41;
      MR_String Var_42;
      MR_String Var_43;

      switch (Sense_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_41 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_41 = (MR_String) "branch away if ";
          break;
      }
      Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_22);
      Var_42 = mercury__string__f_43_43_2_f_0(VarName_14, Var_43);
      Comment_27 = mercury__string__f_43_43_2_f_0(Var_41, Var_42);
      if ((MaybeConsTag_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ModuleInfo_31;

        ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_33, &ModuleInfo_31);
        ConsTag_30 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_31, ConsId_15);
      }
      else
        ConsTag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsTag_16, (MR_Integer) 0))));
      ll_backend__unify_gen_test__raw_tag_test_4_p_0(STATE_VARIABLE_CI_0_33, VarRval_12, ConsTag_30, &TestRval_29);
    }
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_19, STATE_VARIABLE_CI_0_33, STATE_VARIABLE_CI_34);
    switch (Sense_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__code_util__neg_rval_2_p_0(TestRval_29, &TheRval_32);
        break;
      case (MR_Integer) 0:
        TheRval_32 = TestRval_29;
        break;
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (*ElseLabel_19));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (TheRval_32));
      MR_hl_field(MR_mktag(3), Var_47, 2) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Comment_27));
    }
    *Code_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_46)));
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__disjoin_tag_tests_3_p_0(
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
ll_backend__unify_gen_test__generate_tag_test_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word CheaperTagTest_13,
  MR_Word Sense_14,
  MR_Word * ElseLabel_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26,
  MR_Word * STATE_VARIABLE_CLD_27)
{
  {
    MR_bool succeeded;
    MR_Word VarCode_19;
    MR_Word VarRval_20;
    MR_String VarName_22;
    MR_Word TestCode_23;
    MR_String ConsIdName_44;
    MR_String Comment_49;
    MR_Word TestRval_51;
    MR_Word TheRval_54;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word VarType_21;
    MR_Word CheapConsTag_48;
    MR_Word ExpensiveConsId_45;

    ll_backend__code_loc_dep__produce_variable_6_p_0(Var_11, &VarCode_19, &VarRval_20, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CLD_0_26, STATE_VARIABLE_CLD_27);
    VarType_21 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_24, Var_11);
    VarName_22 = ll_backend__code_info__variable_name_2_f_0(STATE_VARIABLE_CI_0_24, Var_11);
    ConsIdName_44 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_12);
    succeeded = ((MR_tag((MR_Word) CheaperTagTest_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      ExpensiveConsId_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 0))));
      CheapConsTag_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 3))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_12, ExpensiveConsId_45);
    }
    if (succeeded)
    {
      MR_Word NegTestRval_50;
      MR_String Var_55;
      MR_String Var_56;
      MR_String Var_57;
      MR_String Var_59;

      switch (Sense_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_55 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_55 = (MR_String) "branch away if ";
          break;
      }
      Var_59 = mercury__string__f_43_43_2_f_0(ConsIdName_44, (MR_String) " (inverted test)");
      Var_57 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_59);
      Var_56 = mercury__string__f_43_43_2_f_0(VarName_22, Var_57);
      Comment_49 = mercury__string__f_43_43_2_f_0(Var_55, Var_56);
      ll_backend__unify_gen_test__raw_tag_test_4_p_0(STATE_VARIABLE_CI_0_24, VarRval_20, CheapConsTag_48, &NegTestRval_50);
      ll_backend__code_util__neg_rval_2_p_0(NegTestRval_50, &TestRval_51);
    }
    else
    {
      MR_Word ConsTag_52;
      MR_Word ModuleInfo_53;
      MR_String Var_61;
      MR_String Var_62;
      MR_String Var_63;

      switch (Sense_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_61 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_61 = (MR_String) "branch away if ";
          break;
      }
      Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_44);
      Var_62 = mercury__string__f_43_43_2_f_0(VarName_22, Var_63);
      Comment_49 = mercury__string__f_43_43_2_f_0(Var_61, Var_62);
      ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_24, &ModuleInfo_53);
      ConsTag_52 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_53, ConsId_12);
      ll_backend__unify_gen_test__raw_tag_test_4_p_0(STATE_VARIABLE_CI_0_24, VarRval_20, ConsTag_52, &TestRval_51);
    }
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_15, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25);
    switch (Sense_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__code_util__neg_rval_2_p_0(TestRval_51, &TheRval_54);
        break;
      case (MR_Integer) 0:
        TheRval_54 = TestRval_51;
        break;
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (*ElseLabel_15));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (TheRval_54));
      MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (Var_68));
    }
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Comment_49));
    }
    TestCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_66)));
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCode_19, TestCode_23);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_test__raw_tag_test_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_test__IntroducedFrom__pred__raw_tag_test__198__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_test__raw_tag_test_4_p_0(
  MR_Word CI_5,
  MR_Word Rval_6,
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
          MR_String String_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_7, (MR_Integer) 0))));
          MR_Word Var_124;
          MR_Word Var_125;

          {
            Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (String_9));
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
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_6));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_124));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_7, (MR_Integer) 0)));
          MR_Word Var_121;
          MR_Word Var_122;

          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_122, 1) = MR_box_float(Float_10);
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
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 64U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_6));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_121));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word Const_12;
              MR_Word IntType_13;
              MR_Word Var_118;
              MR_Word Var_119;

              ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_11, &Const_12, &IntType_13);
              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (IntType_13));
              }
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Const_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_118));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_6));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_119));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_String ForeignVal_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word Var_108;
              MR_Word Var_114;
              MR_Word Var_115;

              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ll_backend__unify_gen_test_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ll_backend__unify_gen_test__raw_tag_test_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (ForeignLang_14));
                MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_108, (MR_String) "predicate \140ll_backend.unify_gen_test.raw_tag_test\'/4", (MR_String) "foreign tag for language other than C");
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (ForeignVal_15));
                MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_test_scalar_common_3[0])));
              }
              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (Var_115));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_6));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_114));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_test.raw_tag_test\'/4", (MR_String) "unexpected ConsTag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Ptag_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word VarPtag_147;
              uint8_t PtagUint8_148;
              MR_Word ConstPtag_149;
              MR_Word Var_151;
              MR_Integer Var_152;

              {
                VarPtag_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_147, 2) = ((MR_Box) (Rval_6));
              }
              PtagUint8_148 = (uint8_t) (Ptag_146);
              Var_152 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_148);
              {
                Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (Var_152));
              }
              {
                ConstPtag_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPtag_149, 1) = ((MR_Box) (Var_151));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_147));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPtag_149));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word VarPtag_17;
              uint8_t PtagUint8_18;
              MR_Word ConstPtag_19;
              MR_Word Var_103;
              MR_Integer Var_104;

              {
                VarPtag_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_17, 2) = ((MR_Box) (Rval_6));
              }
              PtagUint8_18 = (uint8_t) (Ptag_16);
              Var_104 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_18);
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
              }
              {
                ConstPtag_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPtag_19, 1) = ((MR_Box) (Var_103));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_17));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPtag_19));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalSectag_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word MustMask_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 3))));
              MR_Unsigned PrimSec_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_28, (MR_Integer) 1))));
              MR_Word SectagBits_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_28, (MR_Integer) 2))));
              MR_Word ConstPrimSec_33;
              MR_Word Var_73;
              MR_Integer Var_74;

              Var_74 = mercury__uint__cast_to_int_1_f_0(PrimSec_31);
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
              }
              {
                ConstPrimSec_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPrimSec_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPrimSec_33, 1) = ((MR_Box) (Var_73));
              }
              switch (MustMask_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *TestRval_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_6));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSec_33));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    uint8_t NumPtagBits_34;
                    uint8_t NumSectagBits_35;
                    MR_Integer NumPtagSectagBits_37;
                    MR_Unsigned PrimSecMask_38;
                    MR_Word MaskedRval_39;
                    uint8_t Var_75;
                    MR_Unsigned Var_76;
                    MR_Word Var_81;
                    MR_Word Var_82;

                    ll_backend__code_info__get_num_ptag_bits_2_p_0(CI_5, &NumPtagBits_34);
                    NumSectagBits_35 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_32, (MR_Integer) 0)));
                    Var_75 = (NumPtagBits_34 + NumSectagBits_35);
                    NumPtagSectagBits_37 = mercury__uint8__cast_to_int_1_f_0(Var_75);
                    Var_76 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_37);
                    PrimSecMask_38 = (Var_76 - (MR_Unsigned) 1U);
                    {
                      Var_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_82, 0) = ((MR_Box) (PrimSecMask_38));
                    }
                    {
                      Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
                    }
                    {
                      MaskedRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), MaskedRval_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[2])));
                      MR_hl_field(MR_mktag(3), MaskedRval_39, 2) = ((MR_Box) (Rval_6));
                      MR_hl_field(MR_mktag(3), MaskedRval_39, 3) = ((MR_Box) (Var_81));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *TestRval_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_39));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSec_33));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_61;
              MR_Integer Var_62;
              uint8_t Var_63;
              MR_Unsigned Var_64;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word LocalSectag_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Unsigned PrimSec_136 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_134, (MR_Integer) 1))));
              MR_Word SectagBits_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_134, (MR_Integer) 2))));
              MR_Word ConstPrimSec_138;
              uint8_t NumPtagBits_139;
              uint8_t NumSectagBits_140;
              MR_Integer NumPtagSectagBits_142;
              MR_Unsigned PrimSecMask_143;
              MR_Word MaskedRval_144;

              Var_62 = mercury__uint__cast_to_int_1_f_0(PrimSec_136);
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
              }
              {
                ConstPrimSec_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPrimSec_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPrimSec_138, 1) = ((MR_Box) (Var_61));
              }
              ll_backend__code_info__get_num_ptag_bits_2_p_0(CI_5, &NumPtagBits_139);
              NumSectagBits_140 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_137, (MR_Integer) 0)));
              Var_63 = (NumPtagBits_139 + NumSectagBits_140);
              NumPtagSectagBits_142 = mercury__uint8__cast_to_int_1_f_0(Var_63);
              Var_64 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumPtagSectagBits_142);
              PrimSecMask_143 = (Var_64 - (MR_Unsigned) 1U);
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (PrimSecMask_143));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
              }
              {
                MaskedRval_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRval_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskedRval_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[2])));
                MR_hl_field(MR_mktag(3), MaskedRval_144, 2) = ((MR_Box) (Rval_6));
                MR_hl_field(MR_mktag(3), MaskedRval_144, 3) = ((MR_Box) (Var_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_144));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPrimSec_138));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word RemoteSectag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 2))));
              MR_Word PtagTestRval_21;
              MR_Word VarStag_22;
              MR_Unsigned SecTagUint_23;
              MR_Word ConstStag_25;
              MR_Word StagTestRval_26;
              MR_Word Var_88;
              MR_Integer Var_89;
              MR_Word Var_90;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_97;
              MR_Integer Var_98;
              MR_Word Ptag_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_7, (MR_Integer) 1))));
              MR_Word VarPtag_127;
              uint8_t PtagUint8_128;
              MR_Word ConstPtag_129;

              {
                VarPtag_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), VarPtag_127, 2) = ((MR_Box) (Rval_6));
              }
              PtagUint8_128 = (uint8_t) (Ptag_126);
              Var_89 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_128);
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
              }
              {
                ConstPtag_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstPtag_129, 1) = ((MR_Box) (Var_88));
              }
              Var_90 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[0]));
              {
                PtagTestRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagTestRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), PtagTestRval_21, 1) = ((MR_Box) (Var_90));
                MR_hl_field(MR_mktag(3), PtagTestRval_21, 2) = ((MR_Box) (VarPtag_127));
                MR_hl_field(MR_mktag(3), PtagTestRval_21, 3) = ((MR_Box) (ConstPtag_129));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Ptag_126));
              }
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (Rval_6));
                MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_test_scalar_common_1[3])));
              }
              {
                VarStag_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), VarStag_22, 0) = ((MR_Box) (Var_92));
              }
              SecTagUint_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_20, (MR_Integer) 0))));
              Var_98 = mercury__uint__cast_to_int_1_f_0(SecTagUint_23);
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
              }
              {
                ConstStag_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstStag_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstStag_25, 1) = ((MR_Box) (Var_97));
              }
              {
                StagTestRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), StagTestRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), StagTestRval_26, 1) = ((MR_Box) (Var_90));
                MR_hl_field(MR_mktag(3), StagTestRval_26, 2) = ((MR_Box) (VarStag_22));
                MR_hl_field(MR_mktag(3), StagTestRval_26, 3) = ((MR_Box) (ConstStag_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PtagTestRval_21));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StagTestRval_26));
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
