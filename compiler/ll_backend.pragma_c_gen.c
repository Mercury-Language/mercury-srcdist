/*
** Automatically generated from `pragma_c_gen.m'
** by the Mercury compiler,
** version rotd-2017-12-06
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


// :- module ll_backend.pragma_c_gen.
// :- implementation.

/*
INIT mercury__ll_backend__pragma_c_gen__init
ENDINIT
*/

#include "ll_backend.pragma_c_gen.mih"


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
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.trace_gen.mih"
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
#include "int.mih"
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
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5];

static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0;

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1];

static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1];

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1];

static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1];

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(
  MR_Word CodeModel_15,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__381__1_2_p_0(
  MR_Word Args_19,
  MR_Word HeadVar__2_39);

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
  MR_Word CodeModel_16,
  MR_Word Attributes_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Word Args_20,
  MR_Word ExtraArgs_21,
  MR_String C_Code_22,
  MR_Word Context_23,
  MR_Word GoalInfo_24,
  MR_Word CanOptAwayUnnamedArgs_25,
  MR_Word * Code_26,
  MR_Word STATE_VARIABLE_CI_0_96,
  MR_Word * STATE_VARIABLE_CI_97,
  MR_Word STATE_VARIABLE_CLD_0_98,
  MR_Word * STATE_VARIABLE_CLD_99);

static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word CanOptAwayUnnamedArgs_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
  MR_Word FloatRegType_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_4,
  MR_Word * STATE_VARIABLE_CLD_5);

static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word CanOptAwayUnnamedArgs_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PostDeaths_2,
  MR_Word STATE_VARIABLE_DeadVars_0_3,
  MR_Word * STATE_VARIABLE_DeadVars_4);

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Module_2,
  MR_Word CanOptAwayUnnamedArgs_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
  MR_Word ExtraArgs_5,
  MR_Word ModuleInfo_6,
  MR_Word ArgInfos_7,
  MR_Word * ExtraCArgs_8);

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Integer LastReg_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxR_0_2,
  MR_Integer * STATE_VARIABLE_MaxR_3,
  MR_Integer STATE_VARIABLE_MaxF_0_4,
  MR_Integer * STATE_VARIABLE_MaxF_5);

static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
  MR_String C_Code_7,
  MR_Word MaybeContext_8,
  MR_Word * AllocIdHashDefine_9,
  MR_Word * AllocIdHashUndef_10,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18);

static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * ProcLabelHashDef_9,
  MR_Word * ProcLabelHashUndef_10);

static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
  MR_Word Expr_5,
  MR_Word * CondRval_6,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_3[2][5];




static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__pragma_c_gen_scalar_common_2[0])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
};

static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0 = {
  (MR_String) "c_arg",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001)),
  ((MR_Box) (ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001)),
  (MR_String) "ll_backend.pragma_c_gen",
  (MR_String) "c_arg",
  {     ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0 },
  {     ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0
};

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(
  MR_Word CodeModel_15,
  MR_Word HeadVar__2_49)
{
  {
    MR_bool succeeded = (CodeModel_15 == HeadVar__2_49);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ExtraArgs_20)), ((MR_Box) (HeadVar__2_44)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__381__1_2_p_0(
  MR_Word Args_19,
  MR_Word HeadVar__2_39)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (Args_19)), ((MR_Box) (HeadVar__2_39)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          parse_tree__prog_data____Compare____mer_type_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;
            MR_Integer Var_25 = (MR_Integer) ArgX4_10;
            MR_Integer Var_26 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, Var_25, Var_26);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              hlds__hlds_pred____Compare____arg_info_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = hlds__hlds_pred____Unify____arg_info_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_struct_name_4_f_0(
  MR_Word ModuleName_6,
  MR_String PredName_7,
  MR_Integer Arity_8,
  MR_Integer ProcId_9)
{
  {
    MR_String HeadVar__5_5;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_13;
    MR_String Var_15;
    MR_String Var_16;
    MR_String Var_17;
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;
    MR_Integer Var_24;

    Var_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_6);
    Var_16 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_7);
    Var_20 = mercury__string__int_to_string_1_f_0(Arity_8);
    Var_24 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_9);
    Var_23 = mercury__string__int_to_string_1_f_0(Var_24);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_23);
    Var_19 = mercury__string__f_43_43_2_f_0(Var_20, Var_21);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_19);
    Var_15 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_15);
    Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
    HeadVar__5_5 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_save__", Var_11);
    return HeadVar__5_5;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__381__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0(
  MR_Word CodeModel_15,
  MR_Word Attributes_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Args_19,
  MR_Word ExtraArgs_20,
  MR_Word MaybeTraceRuntimeCond_21,
  MR_Word PragmaImpl_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_31,
  MR_Word * STATE_VARIABLE_CI_32,
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34)
{
  {
    MR_bool succeeded;
    MR_String C_Code_27 = ((MR_String) (MR_hl_field(MR_mktag(0), PragmaImpl_22, (MR_Integer) 0)));
    MR_Word Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaImpl_22, (MR_Integer) 1)));

    if ((MaybeTraceRuntimeCond_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(CodeModel_15, Attributes_16, PredId_17, ProcId_18, Args_19, ExtraArgs_20, C_Code_27, Context_28, GoalInfo_23, (MR_Integer) 1, Code_24, STATE_VARIABLE_CI_0_31, STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_0_33, STATE_VARIABLE_CLD_34);
    }
    else
    {
      MR_Word TypeCtorInfo_33_83;
      MR_Word TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTraceRuntimeCond_21, (MR_Integer) 0)));
      MR_Word Var_35;
      MR_Word Var_40;
      MR_Word Var_45;
      MR_Word CondRval_65;
      MR_Word SuccessLabel_66;
      MR_Word BeforeFailure_67;
      MR_Word FailCode_68;
      MR_Word CondCode_69;
      MR_Word SuccessLabelCode_70;
      MR_Word STATE_VARIABLE_CI_21_71;
      MR_Word STATE_VARIABLE_CI_22_72;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_82;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Args_19));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(Var_35, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "args runtime cond");
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ExtraArgs_20));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(Var_40, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "extra args runtime cond");
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (CodeModel_15));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_4_p_0(Var_45, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "non-semi runtime cond");
      ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(TraceRuntimeCond_30, &CondRval_65, STATE_VARIABLE_CI_0_31, &STATE_VARIABLE_CI_21_71);
      ll_backend__code_info__get_next_label_3_p_0(&SuccessLabel_66, STATE_VARIABLE_CI_21_71, &STATE_VARIABLE_CI_22_72);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_33, &BeforeFailure_67);
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_68, STATE_VARIABLE_CI_22_72, STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_0_33);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_67, *STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_34);
      TypeCtorInfo_33_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (SuccessLabel_66));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (CondRval_65));
        MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (Var_77));
      }
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) ((MR_String) "environment variable tests"));
      }
      CondCode_69 = mercury__cord__singleton_1_f_0(TypeCtorInfo_33_83, ((MR_Box) (Var_75)));
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (SuccessLabel_66));
      }
      {
        Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) ((MR_String) "environment variable tests successful"));
      }
      SuccessLabelCode_70 = mercury__cord__singleton_1_f_0(TypeCtorInfo_33_83, ((MR_Box) (Var_79)));
      Var_82 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_33_83, FailCode_68, SuccessLabelCode_70);
      *Code_24 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_33_83, CondCode_69, Var_82);
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
  MR_Word CodeModel_16,
  MR_Word Attributes_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Word Args_20,
  MR_Word ExtraArgs_21,
  MR_String C_Code_22,
  MR_Word Context_23,
  MR_Word GoalInfo_24,
  MR_Word CanOptAwayUnnamedArgs_25,
  MR_Word * Code_26,
  MR_Word STATE_VARIABLE_CI_0_96,
  MR_Word * STATE_VARIABLE_CI_97,
  MR_Word STATE_VARIABLE_CLD_0_98,
  MR_Word * STATE_VARIABLE_CLD_99)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_230_230;
    MR_Word TypeCtorInfo_241_241;
    MR_Word MayCallMercury_29;
    MR_Word ThreadSafe_30;
    MR_Word ArgInfos_31;
    MR_Word OrigCArgs_32;
    MR_Word ModuleInfo_33;
    MR_Word ExtraCArgs_34;
    MR_Word CArgs_35;
    MR_Word InCArgs_36;
    MR_Word OutCArgs_37;
    MR_Word PostDeaths_38;
    MR_Word DeadVars0_39;
    MR_Word DeadVars_40;
    MR_Word SaveVarsCode_41;
    MR_Word InputDescs_45;
    MR_Word InputVarsCode_46;
    MR_Word Decls_47;
    MR_Word AllocIdHashDefine_48;
    MR_Word AllocIdHashUndef_49;
    MR_Word CallerPredId_50;
    MR_Integer CallerProcId_51;
    MR_Word ProcLabelHashDefine_52;
    MR_Word ProcLabelHashUndef_53;
    MR_Word InputComp_54;
    MR_Word SaveRegsComp_55;
    MR_Word ObtainLock_56;
    MR_Word ReleaseLock_57;
    MR_Word AffectsLiveness_63;
    MR_Word C_Code_Comp_64;
    MR_Word Detism_65;
    MR_Word CheckSuccess_Comp_66;
    MR_Word MaybeFailLabel_67;
    MR_Word DefSuccessComp_69;
    MR_Word UndefSuccessComp_70;
    MR_Word RestoreRegsComp_71;
    MR_Word ExprnOpts_74;
    MR_Word UseFloatRegs_75;
    MR_Word FloatRegType_76;
    MR_Word Regs_77;
    MR_Word OutputDescs_78;
    MR_Word OutputComp_79;
    MR_Word Components_80;
    MR_Word MaybeMayDupl_81;
    MR_Word MayDupl_82;
    MR_Word ExtraAttributes_85;
    MR_Word RefersToLLDSSTack_86;
    MR_Word PragmaCCode_87;
    MR_Word FailureCode_95;
    MR_Word STATE_VARIABLE_CI_103_103;
    MR_Word STATE_VARIABLE_CLD_104_104;
    MR_Word STATE_VARIABLE_CLD_105_105;
    MR_Word STATE_VARIABLE_CLD_106_106;
    MR_Word STATE_VARIABLE_CI_107_107;
    MR_Word STATE_VARIABLE_CI_152_152;
    MR_Word STATE_VARIABLE_CLD_184_184;
    MR_Word STATE_VARIABLE_CLD_185_185;
    MR_Word STATE_VARIABLE_CLD_186_186;
    MR_Word Var_187;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_190;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Var_198;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_Word Var_224;
    MR_Word Var_225;

    MayCallMercury_29 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_17);
    ThreadSafe_30 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes_17);
    ArgInfos_31 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(STATE_VARIABLE_CI_0_96, PredId_18, ProcId_19);
    ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(Args_20, ArgInfos_31, &OrigCArgs_32);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_96, &ModuleInfo_33);
    ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(ExtraArgs_21, ModuleInfo_33, ArgInfos_31, &ExtraCArgs_34);
    mercury__list__append_3_p_1((MR_Word) &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0, OrigCArgs_32, ExtraCArgs_34, &CArgs_35);
    ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(CArgs_35, &InCArgs_36);
    ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(CArgs_35, &OutCArgs_37);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_24, &PostDeaths_38);
    TypeCtorInfo_230_230 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    DeadVars0_39 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_230_230);
    ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(InCArgs_36, PostDeaths_38, DeadVars0_39, &DeadVars_40);
    switch (MayCallMercury_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word OutVars_42;
          MR_Word OutVarsSet_43;
          MR_Word Var_44;

          ll_backend__code_info__succip_is_used_2_p_0(STATE_VARIABLE_CI_0_96, &STATE_VARIABLE_CI_103_103);
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(OutCArgs_37, &OutVars_42);
          parse_tree__set_of_var__list_to_set_2_p_0(TypeCtorInfo_230_230, OutVars_42, &OutVarsSet_43);
          ll_backend__code_loc_dep__save_variables_6_p_0(OutVarsSet_43, &Var_44, &SaveVarsCode_41, STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CLD_0_98, &STATE_VARIABLE_CLD_104_104);
        }
        break;
      case (MR_Integer) 1:
        {
          SaveVarsCode_41 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          STATE_VARIABLE_CI_103_103 = STATE_VARIABLE_CI_0_96;
          STATE_VARIABLE_CLD_104_104 = STATE_VARIABLE_CLD_0_98;
        }
        break;
    }
    ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(InCArgs_36, &InputDescs_45, CanOptAwayUnnamedArgs_25, &InputVarsCode_46, STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CLD_104_104, &STATE_VARIABLE_CLD_105_105);
    ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(DeadVars_40, STATE_VARIABLE_CLD_105_105, &STATE_VARIABLE_CLD_106_106);
    ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(CArgs_35, ModuleInfo_33, CanOptAwayUnnamedArgs_25, &Decls_47);
    ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(C_Code_22, Context_23, &AllocIdHashDefine_48, &AllocIdHashUndef_49, STATE_VARIABLE_CI_103_103, &STATE_VARIABLE_CI_107_107);
    ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_107_107, &CallerPredId_50);
    ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_107_107, &CallerProcId_51);
    ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(ModuleInfo_33, CallerPredId_50, CallerProcId_51, &ProcLabelHashDefine_52, &ProcLabelHashUndef_53);
    {
      InputComp_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InputComp_54, 0) = ((MR_Box) (InputDescs_45));
    }
    switch (ThreadSafe_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_ordinary_foreign_proc_code\'/15", (MR_String) "maybe_thread_safe");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_235_235;
          MR_Word PredInfo_58;
          MR_String Name_59;
          MR_String MangledName_60;
          MR_String ObtainLockStr_61;
          MR_String ReleaseLockStr_62;
          MR_String Var_119;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_String Var_126;
          MR_Word Var_130;
          MR_Word Var_131;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_33, PredId_18, &PredInfo_58);
          Name_59 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_58);
          MangledName_60 = backend_libs__c_util__quote_string_1_f_0(Name_59);
          Var_119 = mercury__string__f_43_43_2_f_0(MangledName_60, (MR_String) "\");\n");
          ObtainLockStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\"", Var_119);
          TypeCtorInfo_235_235 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          Var_124 = mercury__set__init_0_f_0(TypeCtorInfo_235_235);
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
          }
          {
            ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 3) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 4) = ((MR_Box) (ObtainLockStr_61));
          }
          Var_126 = mercury__string__f_43_43_2_f_0(MangledName_60, (MR_String) "\");\n");
          ReleaseLockStr_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\"", Var_126);
          Var_131 = mercury__set__init_0_f_0(TypeCtorInfo_235_235);
          {
            Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
          }
          {
            ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 3) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 4) = ((MR_Box) (ReleaseLockStr_62));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_139;
          MR_Word Var_140;

          Var_135 = mercury__set__init_0_f_0(TypeCtorInfo_234_234);
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
          }
          {
            ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 3) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(3), ObtainLock_56, 4) = ((MR_Box) ((MR_String) ""));
          }
          Var_140 = mercury__set__init_0_f_0(TypeCtorInfo_234_234);
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
          }
          {
            ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 3) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(3), ReleaseLock_57, 4) = ((MR_Box) ((MR_String) ""));
          }
        }
        break;
    }
    AffectsLiveness_63 = parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(Attributes_17);
    {
      C_Code_Comp_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), C_Code_Comp_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), C_Code_Comp_64, 1) = ((MR_Box) (Context_23));
      MR_hl_field(MR_mktag(3), C_Code_Comp_64, 2) = ((MR_Box) (AffectsLiveness_63));
      MR_hl_field(MR_mktag(3), C_Code_Comp_64, 3) = ((MR_Box) (C_Code_22));
    }
    Detism_65 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_24);
    switch (CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_237_237;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Word Var_149;
          MR_Word Var_150;

          CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          TypeCtorInfo_237_237 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          Var_145 = mercury__set__init_0_f_0(TypeCtorInfo_237_237);
          {
            Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
          }
          {
            DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 3) = ((MR_Box) (Var_144));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 4) = ((MR_Box) ((MR_String) ""));
          }
          Var_150 = mercury__set__init_0_f_0(TypeCtorInfo_237_237);
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
          }
          {
            UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 3) = ((MR_Box) (Var_149));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) ""));
          }
          STATE_VARIABLE_CI_152_152 = STATE_VARIABLE_CI_107_107;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_236_236;
          MR_Word Var_155;
          MR_Word Var_156;
          MR_String Var_157;
          MR_String Var_159;
          MR_String Var_160;
          MR_String Var_161;
          MR_String Var_163;
          MR_String Var_165;
          MR_String Var_167;
          MR_String Var_168;
          MR_Word Var_172;
          MR_Word Var_173;

          succeeded = (Detism_65 == (MR_Integer) 7);
          if (succeeded)
          {
            CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            STATE_VARIABLE_CI_152_152 = STATE_VARIABLE_CI_107_107;
          }
          else
          {
            MR_Word FailLabel_68;

            ll_backend__code_info__get_next_label_3_p_0(&FailLabel_68, STATE_VARIABLE_CI_107_107, &STATE_VARIABLE_CI_152_152);
            {
              CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CheckSuccess_Comp_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), CheckSuccess_Comp_66, 1) = ((MR_Box) (FailLabel_68));
            }
            {
              MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeFailLabel_67, 0) = ((MR_Box) (FailLabel_68));
            }
          }
          TypeCtorInfo_236_236 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          Var_156 = mercury__set__init_0_f_0(TypeCtorInfo_236_236);
          {
            Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Var_156));
          }
          Var_160 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          Var_168 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          Var_167 = mercury__string__f_43_43_2_f_0(Var_168, (MR_String) "\n");
          Var_165 = mercury__string__f_43_43_2_f_0((MR_String) "#define SUCCESS_INDICATOR ", Var_167);
          Var_163 = mercury__string__f_43_43_2_f_0((MR_String) "#undef SUCCESS_INDICATOR\n", Var_165);
          Var_161 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_163);
          Var_159 = mercury__string__f_43_43_2_f_0(Var_160, Var_161);
          Var_157 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", Var_159);
          {
            DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 3) = ((MR_Box) (Var_155));
            MR_hl_field(MR_mktag(3), DefSuccessComp_69, 4) = ((MR_Box) (Var_157));
          }
          Var_173 = mercury__set__init_0_f_0(TypeCtorInfo_236_236);
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Var_173));
          }
          {
            UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 3) = ((MR_Box) (Var_172));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) "#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n"));
          }
        }
        break;
    }
    switch (MayCallMercury_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InstMapDelta_72;
          MR_Word OkToDelete_73;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_179;
          MR_Word Var_180;

          Var_111 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
          }
          {
            SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 3) = ((MR_Box) (Var_110));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) "\tMR_save_registers();\n"));
          }
          Var_180 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
          }
          {
            RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_71, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_71, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_71, 3) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_71, 4) = ((MR_Box) ((MR_String) "#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n"));
          }
          InstMapDelta_72 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_24);
          succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_72);
          if (succeeded)
            OkToDelete_73 = (MR_Integer) 0;
          else
            OkToDelete_73 = (MR_Integer) 1;
          ll_backend__code_loc_dep__clear_all_registers_3_p_0(OkToDelete_73, STATE_VARIABLE_CLD_106_106, &STATE_VARIABLE_CLD_184_184);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_115;
          MR_Word Var_116;

          Var_116 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
          }
          {
            SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 3) = ((MR_Box) (Var_115));
            MR_hl_field(MR_mktag(3), SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) ""));
          }
          RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          STATE_VARIABLE_CLD_184_184 = STATE_VARIABLE_CLD_106_106;
        }
        break;
    }
    ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_152_152, &ExprnOpts_74);
    UseFloatRegs_75 = ll_backend__llds__get_float_registers_1_f_0(ExprnOpts_74);
    switch (UseFloatRegs_75) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        FloatRegType_76 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        FloatRegType_76 = (MR_Integer) 1;
        break;
    }
    ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(FloatRegType_76, OutCArgs_37, &Regs_77, STATE_VARIABLE_CLD_184_184, &STATE_VARIABLE_CLD_185_185);
    ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(OutCArgs_37, Regs_77, CanOptAwayUnnamedArgs_25, &OutputDescs_78, STATE_VARIABLE_CI_152_152, STATE_VARIABLE_CLD_185_185, &STATE_VARIABLE_CLD_186_186);
    {
      OutputComp_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OutputComp_79, 0) = ((MR_Box) (OutputDescs_78));
    }
    {
      Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (ProcLabelHashDefine_52));
      MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (AllocIdHashDefine_48));
    }
    {
      Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (ProcLabelHashUndef_53));
      MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (AllocIdHashUndef_49));
    }
    {
      Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (UndefSuccessComp_70));
      MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_198));
    }
    {
      Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (OutputComp_79));
      MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_197));
    }
    {
      Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (RestoreRegsComp_71));
      MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_196));
    }
    {
      Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (CheckSuccess_Comp_66));
      MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_195));
    }
    {
      Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (ReleaseLock_57));
      MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_194));
    }
    {
      Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (C_Code_Comp_64));
      MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_193));
    }
    {
      Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (ObtainLock_56));
      MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_192));
    }
    {
      Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (SaveRegsComp_55));
      MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_191));
    }
    {
      Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (InputComp_54));
      MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (Var_190));
    }
    {
      Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (DefSuccessComp_69));
      MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_189));
    }
    Components_80 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, Var_187, Var_188);
    MaybeMayDupl_81 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attributes_17);
    if ((MaybeMayDupl_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ExtraArgs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        MayDupl_82 = (MR_Integer) 0;
      else
        MayDupl_82 = (MR_Integer) 1;
    else
      MayDupl_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMayDupl_81, (MR_Integer) 0)));
    ExtraAttributes_85 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attributes_17);
    succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ExtraAttributes_85);
    if (succeeded)
      RefersToLLDSSTack_86 = (MR_Integer) 1;
    else
      RefersToLLDSSTack_86 = (MR_Integer) 0;
    TypeCtorInfo_241_241 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      Var_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), Var_201, 1) = ((MR_Box) (Decls_47));
      MR_hl_field(MR_mktag(3), Var_201, 2) = ((MR_Box) (Components_80));
      MR_hl_field(MR_mktag(3), Var_201, 3) = ((MR_Box) (MayCallMercury_29));
      MR_hl_field(MR_mktag(3), Var_201, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_201, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_201, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_201, 7) = ((MR_Box) (MaybeFailLabel_67));
      MR_hl_field(MR_mktag(3), Var_201, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_201, 9) = ((MR_Box) (RefersToLLDSSTack_86));
      MR_hl_field(MR_mktag(3), Var_201, 10) = ((MR_Box) (MayDupl_82));
    }
    {
      Var_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_200, 0) = ((MR_Box) (Var_201));
      MR_hl_field(MR_mktag(0), Var_200, 1) = ((MR_Box) ((MR_String) "foreign_proc inclusion"));
    }
    PragmaCCode_87 = mercury__cord__singleton_1_f_0(TypeCtorInfo_241_241, ((MR_Box) (Var_200)));
    if ((MaybeFailLabel_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (Detism_65 == (MR_Integer) 7);
      if (succeeded)
      {
        MR_Word BeforeFailure_226;

        ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_186_186, &BeforeFailure_226);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&FailureCode_95, STATE_VARIABLE_CI_152_152, STATE_VARIABLE_CI_97, STATE_VARIABLE_CLD_186_186);
        ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_226, *STATE_VARIABLE_CI_97, STATE_VARIABLE_CLD_99);
      }
      else
      {
        FailureCode_95 = mercury__cord__empty_0_f_0(TypeCtorInfo_241_241);
        *STATE_VARIABLE_CLD_99 = STATE_VARIABLE_CLD_186_186;
        *STATE_VARIABLE_CI_97 = STATE_VARIABLE_CI_152_152;
      }
    }
    else
    {
      MR_Word TheFailLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFailLabel_67, (MR_Integer) 0)));
      MR_Word SkipLabel_89;
      MR_Word BeforeFailure_90;
      MR_Word FailCode_91;
      MR_Word GotoSkipLabelCode_92;
      MR_Word SkipLabelCode_93;
      MR_Word FailLabelCode_94;
      MR_Word STATE_VARIABLE_CI_209_209;
      MR_Word Var_212;
      MR_Word Var_213;
      MR_Word Var_214;
      MR_Word Var_216;
      MR_Word Var_217;
      MR_Word Var_219;
      MR_Word Var_220;
      MR_Word Var_222;
      MR_Word Var_223;

      ll_backend__code_info__get_next_label_3_p_0(&SkipLabel_89, STATE_VARIABLE_CI_152_152, &STATE_VARIABLE_CI_209_209);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_186_186, &BeforeFailure_90);
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_91, STATE_VARIABLE_CI_209_209, STATE_VARIABLE_CI_97, STATE_VARIABLE_CLD_186_186);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_90, *STATE_VARIABLE_CI_97, STATE_VARIABLE_CLD_99);
      {
        Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (SkipLabel_89));
      }
      {
        Var_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), Var_213, 1) = ((MR_Box) (Var_214));
      }
      {
        Var_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_212, 0) = ((MR_Box) (Var_213));
        MR_hl_field(MR_mktag(0), Var_212, 1) = ((MR_Box) ((MR_String) "Skip past failure code"));
      }
      GotoSkipLabelCode_92 = mercury__cord__singleton_1_f_0(TypeCtorInfo_241_241, ((MR_Box) (Var_212)));
      {
        Var_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_217, 1) = ((MR_Box) (SkipLabel_89));
      }
      {
        Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_216, 0) = ((MR_Box) (Var_217));
        MR_hl_field(MR_mktag(0), Var_216, 1) = ((MR_Box) ((MR_String) ""));
      }
      SkipLabelCode_93 = mercury__cord__singleton_1_f_0(TypeCtorInfo_241_241, ((MR_Box) (Var_216)));
      {
        Var_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_220, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_220, 1) = ((MR_Box) (TheFailLabel_88));
      }
      {
        Var_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_219, 0) = ((MR_Box) (Var_220));
        MR_hl_field(MR_mktag(0), Var_219, 1) = ((MR_Box) ((MR_String) ""));
      }
      FailLabelCode_94 = mercury__cord__singleton_1_f_0(TypeCtorInfo_241_241, ((MR_Box) (Var_219)));
      Var_223 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_241_241, FailCode_91, SkipLabelCode_93);
      Var_222 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_241_241, FailLabelCode_94, Var_223);
      FailureCode_95 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_241_241, GotoSkipLabelCode_92, Var_222);
    }
    Var_225 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_241_241, PragmaCCode_87, FailureCode_95);
    Var_224 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_241_241, InputVarsCode_46, Var_225);
    *Code_26 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_241_241, SaveVarsCode_41, Var_224);
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word CanOptAwayUnnamedArgs_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Reg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word Regs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word OutputsTail_21;
        MR_Word Var_22;
        MR_Word MaybeArgName_23;
        MR_Word OrigType_24;
        MR_Word BoxPolicy_25;
        MR_Word STATE_VARIABLE_CLD_36_36;
        MR_Word STATE_VARIABLE_CLD_37_37;
        MR_Word _ArgInfo_26;

        ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(Var_61, Regs_16, CanOptAwayUnnamedArgs_3, &OutputsTail_21, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_36_36);
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0)));
        MaybeArgName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1)));
        OrigType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 2)));
        BoxPolicy_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 3)));
        _ArgInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 4)));
        ll_backend__code_loc_dep__release_reg_3_p_0(Reg_15, STATE_VARIABLE_CLD_36_36, &STATE_VARIABLE_CLD_37_37);
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_37_37, Var_22);
        if (succeeded)
        {
          MR_Word ModuleInfo_27;
          MR_Word MaybeForeign_28;
          MR_Word TypeTable_66;
          MR_Word MaybeC_70;
          MR_Word TypeCtor_67;
          MR_Word TypeDefn_68;
          MR_Word TypeBody_69;
          MR_Word Var_78;
          MR_Word _MaybeJava_71;
          MR_Word _MaybeCSharp_72;
          MR_Word _MaybeErlang_73;
          MR_String Name_88;
          MR_Char Var_91;
          MR_String Var_89;

          ll_backend__code_loc_dep__set_var_location_4_p_0(Var_22, Reg_15, STATE_VARIABLE_CLD_37_37, STATE_VARIABLE_CLD_7);
          ll_backend__code_info__get_module_info_2_p_0(HeadVar__5_5, &ModuleInfo_27);
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_27, &TypeTable_66);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_24, &TypeCtor_67);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_66, TypeCtor_67, &TypeDefn_68);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_68, &TypeBody_69);
              succeeded = ((MR_tag((MR_Word) TypeBody_69)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_78 = (MR_Word) MR_body(((MR_Word) TypeBody_69), (MR_Integer) 0);
                MaybeC_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0)));
                _MaybeJava_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 1)));
                _MaybeCSharp_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 2)));
                _MaybeErlang_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 3)));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            if ((MaybeC_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                return;
              }
            }
            else
            {
              MR_Word Data_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeC_70, (MR_Integer) 0)));
              MR_String Name_75;
              MR_Word Assertions_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_74, (MR_Integer) 2)));
              MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_74, (MR_Integer) 0)));
              MR_Word Var_83;
              MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_74, (MR_Integer) 1)));

              Name_75 = (MR_String) Var_82;
              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Name_75));
                MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Assertions_77));
              }
              {
                MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeForeign_28, 0) = ((MR_Box) (Var_83));
              }
            }
          else
            MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = ((MR_tag((MR_Word) MaybeArgName_23)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Name_88 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArgName_23, (MR_Integer) 0)));
            Var_91 = (MR_Char) 95;
            succeeded = mercury__string__first_char_3_p_2(Name_88, Var_91, &Var_89);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word VarType_31;
            MR_Word IsDummy_32;
            MR_Word PragmaCOutput_33;

            VarType_31 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_22);
            IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_27, VarType_31);
            {
              PragmaCOutput_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaCOutput_33, 0) = ((MR_Box) (Reg_15));
              MR_hl_field(MR_mktag(0), PragmaCOutput_33, 1) = ((MR_Box) (VarType_31));
              MR_hl_field(MR_mktag(0), PragmaCOutput_33, 2) = ((MR_Box) (IsDummy_32));
              MR_hl_field(MR_mktag(0), PragmaCOutput_33, 3) = ((MR_Box) (OrigType_24));
              MR_hl_field(MR_mktag(0), PragmaCOutput_33, 4) = ((MR_Box) (Name_88));
              MR_hl_field(MR_mktag(0), PragmaCOutput_33, 5) = ((MR_Box) (MaybeForeign_28));
              MR_hl_field(MR_mktag(0), PragmaCOutput_33, 6) = ((MR_Box) (BoxPolicy_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaCOutput_33));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputsTail_21));
            }
          }
          else
            switch (CanOptAwayUnnamedArgs_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_93;
                  MR_Integer Var_94;
                  MR_String Name_96;
                  MR_Word VarType_97;
                  MR_Word IsDummy_98;
                  MR_Word PragmaCOutput_99;

                  Var_94 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_22);
                  Var_93 = mercury__string__int_to_string_1_f_0(Var_94);
                  Name_96 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", Var_93);
                  VarType_97 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_22);
                  IsDummy_98 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_27, VarType_97);
                  {
                    PragmaCOutput_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PragmaCOutput_99, 0) = ((MR_Box) (Reg_15));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_99, 1) = ((MR_Box) (VarType_97));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_99, 2) = ((MR_Box) (IsDummy_98));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_99, 3) = ((MR_Box) (OrigType_24));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_99, 4) = ((MR_Box) (Name_96));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_99, 5) = ((MR_Box) (MaybeForeign_28));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_99, 6) = ((MR_Box) (BoxPolicy_25));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaCOutput_99));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputsTail_21));
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__4_4 = OutputsTail_21;
                break;
            }
        }
        else
        {
          *HeadVar__4_4 = OutputsTail_21;
          *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_37_37;
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
  MR_Word FloatRegType_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_4,
  MR_Word * STATE_VARIABLE_CLD_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CLD_5 = STATE_VARIABLE_CLD_0_4;
    }
    else
    {
      MR_Word Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Reg_13;
      MR_Word Regs_14;
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 0)));
      MR_Word VarType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 2)));
      MR_Word BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 3)));
      MR_Word RegType_21;
      MR_Word STATE_VARIABLE_CLD_24_24;
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 4)));

      switch (BoxPolicy_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          RegType_21 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_30;

            Var_30 = parse_tree__builtin_lib_types__float_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_18, Var_30);
            if (succeeded)
              RegType_21 = FloatRegType_1;
            else
              RegType_21 = (MR_Integer) 0;
          }
          break;
      }
      ll_backend__code_loc_dep__acquire_reg_for_var_5_p_0(Var_16, RegType_21, &Reg_13, STATE_VARIABLE_CLD_0_4, &STATE_VARIABLE_CLD_24_24);
      ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(FloatRegType_1, Args_12, &Regs_14, STATE_VARIABLE_CLD_24_24, STATE_VARIABLE_CLD_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Reg_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Regs_14));
      }
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word CanOptAwayUnnamedArgs_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
      *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
    }
    else
    {
      MR_Word Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 0)));
      MR_Word MaybeArgName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 1)));
      MR_Word OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 2)));
      MR_Word BoxPolicy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 3)));
      MR_Word _ArgInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 4)));
      MR_String Name_47;
      MR_Char Var_50;
      MR_String Var_48;

      succeeded = ((MR_tag((MR_Word) MaybeArgName_21)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Name_47 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArgName_21, (MR_Integer) 0)));
        Var_50 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(Name_47, Var_50, &Var_48);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word VarType_27;
        MR_Word FirstCode_28;
        MR_Word Rval_29;
        MR_Word ModuleInfo_30;
        MR_Word MaybeForeign_31;
        MR_Word IsDummy_32;
        MR_Word Input_33;
        MR_Word Inputs1_34;
        MR_Word RestCode_35;
        MR_Word STATE_VARIABLE_CLD_39_39;
        MR_Word TypeTable_58;
        MR_Word MaybeC_62;
        MR_Word TypeCtor_59;
        MR_Word TypeDefn_60;
        MR_Word TypeBody_61;
        MR_Word Var_70;
        MR_Word _MaybeJava_63;
        MR_Word _MaybeCSharp_64;
        MR_Word _MaybeErlang_65;

        VarType_27 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_20);
        ll_backend__code_loc_dep__produce_variable_6_p_0(Var_20, &FirstCode_28, &Rval_29, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_39_39);
        ll_backend__code_info__get_module_info_2_p_0(HeadVar__5_5, &ModuleInfo_30);
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_30, &TypeTable_58);
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_22, &TypeCtor_59);
        if (succeeded)
        {
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_58, TypeCtor_59, &TypeDefn_60);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_60, &TypeBody_61);
            succeeded = ((MR_tag((MR_Word) TypeBody_61)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_70 = (MR_Word) MR_body(((MR_Word) TypeBody_61), (MR_Integer) 0);
              MaybeC_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 0)));
              _MaybeJava_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 1)));
              _MaybeCSharp_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 2)));
              _MaybeErlang_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 3)));
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          if ((MaybeC_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
              return;
            }
          }
          else
          {
            MR_Word Data_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeC_62, (MR_Integer) 0)));
            MR_String Name_67;
            MR_Word Assertions_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_66, (MR_Integer) 2)));
            MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_66, (MR_Integer) 0)));
            MR_Word Var_75;
            MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_66, (MR_Integer) 1)));

            Name_67 = (MR_String) Var_74;
            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Name_67));
              MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Assertions_69));
            }
            {
              MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeForeign_31, 0) = ((MR_Box) (Var_75));
            }
          }
        else
          MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_30, VarType_27);
        {
          Input_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Input_33, 0) = ((MR_Box) (Name_47));
          MR_hl_field(MR_mktag(0), Input_33, 1) = ((MR_Box) (VarType_27));
          MR_hl_field(MR_mktag(0), Input_33, 2) = ((MR_Box) (IsDummy_32));
          MR_hl_field(MR_mktag(0), Input_33, 3) = ((MR_Box) (OrigType_22));
          MR_hl_field(MR_mktag(0), Input_33, 4) = ((MR_Box) (Rval_29));
          MR_hl_field(MR_mktag(0), Input_33, 5) = ((MR_Box) (MaybeForeign_31));
          MR_hl_field(MR_mktag(0), Input_33, 6) = ((MR_Box) (BoxPolicy_23));
        }
        ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(Args_14, &Inputs1_34, CanOptAwayUnnamedArgs_3, &RestCode_35, HeadVar__5_5, STATE_VARIABLE_CLD_39_39, STATE_VARIABLE_CLD_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Input_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Inputs1_34));
        }
        *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, FirstCode_28, RestCode_35);
      }
      else
        switch (CanOptAwayUnnamedArgs_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_52;
              MR_Integer Var_53;
              MR_String Name_122;
              MR_Word VarType_123;
              MR_Word FirstCode_124;
              MR_Word Rval_125;
              MR_Word ModuleInfo_126;
              MR_Word MaybeForeign_127;
              MR_Word IsDummy_128;
              MR_Word Input_129;
              MR_Word Inputs1_130;
              MR_Word RestCode_131;
              MR_Word STATE_VARIABLE_CLD_39_132;
              MR_Word TypeTable_134;
              MR_Word MaybeC_108;
              MR_Word TypeCtor_79;
              MR_Word TypeDefn_80;
              MR_Word TypeBody_81;
              MR_Word Var_85;
              MR_Word _MaybeJava_76;
              MR_Word _MaybeCSharp_77;
              MR_Word _MaybeErlang_78;

              Var_53 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_20);
              Var_52 = mercury__string__int_to_string_1_f_0(Var_53);
              Name_122 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", Var_52);
              VarType_123 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_20);
              ll_backend__code_loc_dep__produce_variable_6_p_0(Var_20, &FirstCode_124, &Rval_125, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_39_132);
              ll_backend__code_info__get_module_info_2_p_0(HeadVar__5_5, &ModuleInfo_126);
              hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_126, &TypeTable_134);
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_22, &TypeCtor_79);
              if (succeeded)
              {
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_134, TypeCtor_79, &TypeDefn_80);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_80, &TypeBody_81);
                  succeeded = ((MR_tag((MR_Word) TypeBody_81)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_85 = (MR_Word) MR_body(((MR_Word) TypeBody_81), (MR_Integer) 0);
                    MaybeC_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0)));
                    _MaybeJava_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 1)));
                    _MaybeCSharp_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 2)));
                    _MaybeErlang_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 3)));
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                if ((MaybeC_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                    return;
                  }
                }
                else
                {
                  MR_Word Data_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeC_108, (MR_Integer) 0)));
                  MR_String Name_91;
                  MR_Word Assertions_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_90, (MR_Integer) 2)));
                  MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_90, (MR_Integer) 0)));
                  MR_Word Var_95;
                  MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_90, (MR_Integer) 1)));

                  Name_91 = (MR_String) Var_94;
                  {
                    Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Name_91));
                    MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Assertions_93));
                  }
                  {
                    MaybeForeign_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeForeign_127, 0) = ((MR_Box) (Var_95));
                  }
                }
              else
                MaybeForeign_127 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              IsDummy_128 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_126, VarType_123);
              {
                Input_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Input_129, 0) = ((MR_Box) (Name_122));
                MR_hl_field(MR_mktag(0), Input_129, 1) = ((MR_Box) (VarType_123));
                MR_hl_field(MR_mktag(0), Input_129, 2) = ((MR_Box) (IsDummy_128));
                MR_hl_field(MR_mktag(0), Input_129, 3) = ((MR_Box) (OrigType_22));
                MR_hl_field(MR_mktag(0), Input_129, 4) = ((MR_Box) (Rval_125));
                MR_hl_field(MR_mktag(0), Input_129, 5) = ((MR_Box) (MaybeForeign_127));
                MR_hl_field(MR_mktag(0), Input_129, 6) = ((MR_Box) (BoxPolicy_23));
              }
              ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(Args_14, &Inputs1_130, CanOptAwayUnnamedArgs_3, &RestCode_131, HeadVar__5_5, STATE_VARIABLE_CLD_39_132, STATE_VARIABLE_CLD_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Input_129));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Inputs1_130));
              }
              *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, FirstCode_124, RestCode_131);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Args_14;

              // direct tailcall eliminated
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
        }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PostDeaths_2,
  MR_Word STATE_VARIABLE_DeadVars_0_3,
  MR_Word * STATE_VARIABLE_DeadVars_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_DeadVars_4 = STATE_VARIABLE_DeadVars_0_3;
    else
    {
      MR_Word Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_DeadVars_20_20;
      MR_Word _MaybeName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 1)));
      MR_Word _Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 2)));
      MR_Word _BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 3)));
      MR_Word _ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DeadVars_0_3;

      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, PostDeaths_2, Var_13);
      if (succeeded)
      {
        parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_13, STATE_VARIABLE_DeadVars_0_3, &STATE_VARIABLE_DeadVars_20_20);
      }
      else
        STATE_VARIABLE_DeadVars_20_20 = STATE_VARIABLE_DeadVars_0_3;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Args_10;
      next_value_of_STATE_VARIABLE_DeadVars_0_3 = STATE_VARIABLE_DeadVars_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_DeadVars_0_3 = next_value_of_STATE_VARIABLE_DeadVars_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Module_2,
  MR_Word CanOptAwayUnnamedArgs_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word DeclsTail_12;
      MR_Word Var_13;
      MR_Word MaybeArgName_14;
      MR_Word OrigType_15;
      MR_Word BoxPolicy_16;
      MR_Word _ArgInfo_17;
      MR_String Name_27;
      MR_Char Var_30;
      MR_String Var_28;

      ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(Args_8, Module_2, CanOptAwayUnnamedArgs_3, &DeclsTail_12);
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0)));
      MaybeArgName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1)));
      OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 2)));
      BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 3)));
      _ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 4)));
      succeeded = ((MR_tag((MR_Word) MaybeArgName_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArgName_14, (MR_Integer) 0)));
        Var_30 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(Name_27, Var_30, &Var_28);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_String OrigTypeString_20;
        MR_Word Decl_21;

        switch (BoxPolicy_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            OrigTypeString_20 = (MR_String) "MR_Word";
            break;
          case (MR_Integer) 0:
            {
              OrigTypeString_20 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(Module_2, (MR_Integer) 0, OrigType_15);
            }
            break;
        }
        {
          Decl_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Decl_21, 0) = ((MR_Box) (OrigType_15));
          MR_hl_field(MR_mktag(0), Decl_21, 1) = ((MR_Box) (OrigTypeString_20));
          MR_hl_field(MR_mktag(0), Decl_21, 2) = ((MR_Box) (Name_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Decl_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DeclsTail_12));
        }
      }
      else
        switch (CanOptAwayUnnamedArgs_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_32;
              MR_Integer Var_33;
              MR_String Name_37;
              MR_String OrigTypeString_38;
              MR_Word Decl_39;

              Var_33 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_13);
              Var_32 = mercury__string__int_to_string_1_f_0(Var_33);
              Name_37 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", Var_32);
              switch (BoxPolicy_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  OrigTypeString_38 = (MR_String) "MR_Word";
                  break;
                case (MR_Integer) 0:
                  {
                    OrigTypeString_38 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(Module_2, (MR_Integer) 0, OrigType_15);
                  }
                  break;
              }
              {
                Decl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Decl_39, 0) = ((MR_Box) (OrigType_15));
                MR_hl_field(MR_mktag(0), Decl_39, 1) = ((MR_Box) (OrigTypeString_38));
                MR_hl_field(MR_mktag(0), Decl_39, 2) = ((MR_Box) (Name_37));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Decl_39));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DeclsTail_12));
              }
            }
            break;
          case (MR_Integer) 1:
            *HeadVar__4_4 = DeclsTail_12;
            break;
        }
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word InTail_6;
    MR_Word ArgInfo_11;
    MR_Word Mode_13;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word _Loc_12;

    ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(Rest_4, &InTail_6);
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 1)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 2)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 3)));
    ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 4)));
    _Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_11, (MR_Integer) 0)));
    Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_11, (MR_Integer) 1)));
    switch (Mode_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InTail_6));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *HeadVar__2_2 = InTail_6;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word OutTail_6;
    MR_Word ArgInfo_11;
    MR_Word Mode_13;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word _Loc_12;

    ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(Rest_4, &OutTail_6);
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 1)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 2)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 3)));
    ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 4)));
    _Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_11, (MR_Integer) 0)));
    Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_11, (MR_Integer) 1)));
    switch (Mode_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        *HeadVar__2_2 = OutTail_6;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutTail_6));
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0)));
    MR_Word Vars_6;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 4)));

    ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(Args_4, &Vars_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_6));
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
  MR_Word ExtraArgs_5,
  MR_Word ModuleInfo_6,
  MR_Word ArgInfos_7,
  MR_Word * ExtraCArgs_8)
{
  {
    MR_Integer MaxR_9;
    MR_Integer _MaxF_10;

    ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(ArgInfos_7, (MR_Integer) 0, &MaxR_9, (MR_Integer) 0, &_MaxF_10);
    ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ExtraArgs_5, ModuleInfo_6, MaxR_9, ExtraCArgs_8);
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Integer LastReg_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word ExtraArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ExtraArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word CArg_11;
    MR_Word CArgs_12;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 0)));
    MR_Word MaybeNameMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 1)));
    MR_Word OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 2)));
    MR_Word BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 3)));
    MR_String Name_17;
    MR_Word TopFunctorMode_19;
    MR_Integer NextReg_21;
    MR_Word ArgInfo_22;
    MR_Word Var_28;
    MR_Word Var_29;

    if ((MaybeNameMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_extra_c_arg_list_seq\'/4", (MR_String) "no name");
        return;
      }
    }
    else
    {
      MR_Word Mode_18;
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameMode_14, (MR_Integer) 0)));

      Name_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
      Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1)));
      check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_2, Mode_18, OrigType_15, &TopFunctorMode_19);
    }
    NextReg_21 = (LastReg_3 + (MR_Integer) 1);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (NextReg_21));
    }
    {
      ArgInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgInfo_22, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), ArgInfo_22, 1) = ((MR_Box) (TopFunctorMode_19));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Name_17));
    }
    {
      CArg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CArg_11, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), CArg_11, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), CArg_11, 2) = ((MR_Box) (OrigType_15));
      MR_hl_field(MR_mktag(0), CArg_11, 3) = ((MR_Box) (BoxPolicy_16));
      MR_hl_field(MR_mktag(0), CArg_11, 4) = ((MR_Box) (ArgInfo_22));
    }
    ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ExtraArgs_8, ModuleInfo_2, NextReg_21, &CArgs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CArg_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CArgs_12));
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxR_0_2,
  MR_Integer * STATE_VARIABLE_MaxR_3,
  MR_Integer STATE_VARIABLE_MaxF_0_4,
  MR_Integer * STATE_VARIABLE_MaxF_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_MaxF_5 = STATE_VARIABLE_MaxF_0_4;
      *STATE_VARIABLE_MaxR_3 = STATE_VARIABLE_MaxR_0_2;
    }
    else
    {
      MR_Word Loc_12;
      MR_Word ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer STATE_VARIABLE_MaxF_24_24;
      MR_Integer STATE_VARIABLE_MaxR_26_26;
      MR_Integer Var_30;
      MR_Word Var_31;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxR_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_MaxF_0_4;

      Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Loc_12, (MR_Integer) 0)));
      Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Loc_12, (MR_Integer) 1)));
      switch (Var_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__int__max_3_p_0(Var_30, STATE_VARIABLE_MaxF_0_4, &STATE_VARIABLE_MaxF_24_24);
            STATE_VARIABLE_MaxR_26_26 = STATE_VARIABLE_MaxR_0_2;
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__int__max_3_p_0(Var_30, STATE_VARIABLE_MaxR_0_2, &STATE_VARIABLE_MaxR_26_26);
            STATE_VARIABLE_MaxF_24_24 = STATE_VARIABLE_MaxF_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ArgInfos_14;
      next_value_of_STATE_VARIABLE_MaxR_0_2 = STATE_VARIABLE_MaxR_26_26;
      next_value_of_STATE_VARIABLE_MaxF_0_4 = STATE_VARIABLE_MaxF_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxR_0_2 = next_value_of_STATE_VARIABLE_MaxR_0_2;
      STATE_VARIABLE_MaxF_0_4 = next_value_of_STATE_VARIABLE_MaxF_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgInfoTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word CArg_8;
      MR_Word CArgTail_9;
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
      MR_Word MaybeNameMode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1)));
      MR_Word Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 2)));
      MR_Word BoxPolicy_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 3)));
      MR_Word MaybeName_16;

      if ((MaybeNameMode_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_String Name_14;
        MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameMode_11, (MR_Integer) 0)));
        MR_Word Var_15;

        Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
        {
          MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeName_16, 0) = ((MR_Box) (Name_14));
        }
      }
      {
        CArg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CArg_8, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), CArg_8, 1) = ((MR_Box) (MaybeName_16));
        MR_hl_field(MR_mktag(0), CArg_8, 2) = ((MR_Box) (Type_12));
        MR_hl_field(MR_mktag(0), CArg_8, 3) = ((MR_Box) (BoxPolicy_13));
        MR_hl_field(MR_mktag(0), CArg_8, 4) = ((MR_Box) (ArgInfo_6));
      }
      ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(Var_30, ArgInfoTail_7, &CArgTail_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CArg_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CArgTail_9));
      }
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
  MR_String C_Code_7,
  MR_Word MaybeContext_8,
  MR_Word * AllocIdHashDefine_9,
  MR_Word * AllocIdHashUndef_10,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word ProfileMemory_13;
    MR_String Var_20;
    MR_Integer Var_14;

    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_17, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 207, &ProfileMemory_13);
    succeeded = (ProfileMemory_13 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_20 = (MR_String) "MR_ALLOC_ID";
      succeeded = mercury__string__sub_string_search_3_p_0(C_Code_7, Var_20, &Var_14);
    }
    if (succeeded)
    {
      MR_Word Context_15;
      MR_Word AllocId_16;
      MR_Word Var_24;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word Var_51;

      if ((MaybeContext_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Context_15 = mercury__term__context_init_0_f_0();
      else
        Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeContext_8, (MR_Integer) 0)));
      ll_backend__code_info__add_alloc_site_info_6_p_0(Context_15, (MR_String) "unknown", (MR_Integer) 0, &AllocId_16, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18);
      Var_39 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_24, 3) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(3), Var_24, 4) = ((MR_Box) ((MR_String) "#define\tMR_ALLOC_ID\t"));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (AllocId_16));
      }
      Var_45 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_29, 3) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(3), Var_29, 4) = ((MR_Box) ((MR_String) "\n"));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *AllocIdHashDefine_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_26));
      }
      Var_51 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_32, 3) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(3), Var_32, 4) = ((MR_Box) ((MR_String) "#undef\tMR_ALLOC_ID\n"));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *AllocIdHashUndef_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      *AllocIdHashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *AllocIdHashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CI_18 = STATE_VARIABLE_CI_0_17;
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * ProcLabelHashDef_9,
  MR_Word * ProcLabelHashUndef_10)
{
  {
    MR_bool succeeded;
    MR_String ProcLabelStr_11;
    MR_String Var_12;
    MR_String Var_14;
    MR_Word CodeAddr_21;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word ProcLabel_22;

    CodeAddr_21 = ll_backend__code_util__make_entry_label_4_f_0(ModuleInfo_6, PredId_7, ProcId_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    succeeded = ((MR_tag((MR_Word) CodeAddr_21)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      ProcLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), CodeAddr_21, (MR_Integer) 0)));
      ProcLabelStr_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_22, (MR_Integer) 1);
    }
    else
    {
      MR_Word Label_23;

      succeeded = ((MR_tag((MR_Word) CodeAddr_21)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Label_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddr_21, (MR_Integer) 0)));
        ProcLabelStr_11 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(Label_23, (MR_Integer) 1);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.make_proc_label_string\'/3", (MR_String) "code_addr");
          return;
        }
      }
    }
    Var_14 = mercury__string__f_43_43_2_f_0(ProcLabelStr_11, (MR_String) "\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "#define\tMR_PROC_LABEL\t", Var_14);
    Var_34 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *ProcLabelHashDef_9 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_12));
    }
    Var_40 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *ProcLabelHashUndef_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_String) "#undef\tMR_PROC_LABEL\n"));
    }
  }
}

MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0(void)
{
  {
    return (MR_String) "MercurySuccessIndicator";
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
  MR_Word Expr_5,
  MR_Word * CondRval_6,
  MR_Word STATE_VARIABLE_CI_0_19,
  MR_Word * STATE_VARIABLE_CI_20)
{
  switch (MR_tag((MR_Word) Expr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String EnvVar_8;
        MR_Word UsedEnvVars0_9;
        MR_Word UsedEnvVars_10;
        MR_Word EnvVarRval_11;
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Expr_5, (MR_Integer) 0)));
        MR_Word Var_27;
        MR_Word Var_28;

        EnvVar_8 = (MR_String) Var_25;
        ll_backend__code_info__get_used_env_vars_2_p_0(STATE_VARIABLE_CI_0_19, &UsedEnvVars0_9);
        mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (EnvVar_8)), UsedEnvVars0_9, &UsedEnvVars_10);
        ll_backend__code_info__set_used_env_vars_3_p_0(UsedEnvVars_10, STATE_VARIABLE_CI_0_19, STATE_VARIABLE_CI_20);
        Var_28 = (MR_Word) EnvVar_8;
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
        }
        {
          EnvVarRval_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EnvVarRval_11, 0) = ((MR_Box) (Var_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[4])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EnvVarRval_11));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3])));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Expr_5, (MR_Integer) 0)));
        MR_Word RvalA_14;

        ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ExprA_13, &RvalA_14, STATE_VARIABLE_CI_0_19, STATE_VARIABLE_CI_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalA_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TraceOp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 0)));
        MR_Word ExprB_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 2)));
        MR_Word RvalB_17;
        MR_Word Op_18;
        MR_Word STATE_VARIABLE_CI_21_21;
        MR_Word ExprA_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 1)));
        MR_Word RvalA_34;

        ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ExprA_33, &RvalA_34, STATE_VARIABLE_CI_0_19, &STATE_VARIABLE_CI_21_21);
        ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ExprB_16, &RvalB_17, STATE_VARIABLE_CI_21_21, STATE_VARIABLE_CI_20);
        switch (TraceOp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 0:
            Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Op_18));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalA_34));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (RvalB_17));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__pragma_c_gen____Unify____c_arg_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__pragma_c_gen____Compare____c_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__pragma_c_gen__init(void)
{
}

void mercury__ll_backend__pragma_c_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0);
}

void mercury__ll_backend__pragma_c_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__pragma_c_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.pragma_c_gen.
