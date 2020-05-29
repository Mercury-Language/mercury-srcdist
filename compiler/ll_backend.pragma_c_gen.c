/*
** Automatically generated from `pragma_c_gen.m'
** by the Mercury compiler,
** version rotd-2020-05-29
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


// :- module ll_backend.pragma_c_gen.
// :- implementation.

/*
INIT mercury__ll_backend__pragma_c_gen__init
ENDINIT
*/

#include "ll_backend.pragma_c_gen.mih"


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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5];

static const MR_DuArgLocn ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_locns_c_arg_0_0[5];

static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0;

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1];

static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1];

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1];

static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1];

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(
  MR_Word CodeModel_15,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__382__1_2_p_0(
  MR_Word Args_19,
  MR_Word HeadVar__2_37);

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
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_14_p_0(
  MR_Word CodeModel_15,
  MR_Word Attributes_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Args_19,
  MR_Word ExtraArgs_20,
  MR_String C_Code_21,
  MR_Word Context_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_100,
  MR_Word * STATE_VARIABLE_CI_101,
  MR_Word STATE_VARIABLE_CLD_0_102,
  MR_Word * STATE_VARIABLE_CLD_103);

static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
  MR_Word FloatRegType_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_4,
  MR_Word * STATE_VARIABLE_CLD_5);

static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PostDeaths_2,
  MR_Word STATE_VARIABLE_DeadVars_0_3,
  MR_Word * STATE_VARIABLE_DeadVars_4);

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_8_p_0(
  MR_Word CI_1,
  MR_String Code_2,
  MR_Integer STATE_VARIABLE_TIIn_0_3,
  MR_Integer STATE_VARIABLE_TIOut_0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decl_10_p_0(
  MR_Word CI_11,
  MR_String Code_12,
  MR_Integer STATE_VARIABLE_TIIn_0_36,
  MR_Integer * STATE_VARIABLE_TIIn_37,
  MR_Integer STATE_VARIABLE_TIOut_0_38,
  MR_Integer * STATE_VARIABLE_TIOut_39,
  MR_Word Arg_15,
  MR_Word * Decls_16,
  MR_Word * TICopyIns_17,
  MR_Word * TICopyOuts_18);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__is_comp_gen_type_info_arg_3_p_0(
  MR_Word CI_4,
  MR_Word Var_5,
  MR_String ArgName_6);

static MR_Word MR_CALL 
ll_backend__pragma_c_gen__var_should_be_passed_1_f_0(
  MR_Word MaybeName_3);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_out_args_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

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

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[2][1];

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
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__pragma_c_gen_scalar_common_2[0])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5] = {
  (MR_PseudoTypeInfo) (&ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0)
};

static const MR_DuArgLocn ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_locns_c_arg_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0 = {
  (MR_String) "c_arg",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0,
  NULL,
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_locns_c_arg_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001)),
  ((MR_Box) (ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001)),
  (MR_String) "ll_backend.pragma_c_gen",
  (MR_String) "c_arg",
  {     ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0 },
  {     ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0
};

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(
  MR_Word CodeModel_15,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded = (CodeModel_15 == HeadVar__2_45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[0]), ((MR_Box) (ExtraArgs_20)), ((MR_Box) (HeadVar__2_41)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__382__1_2_p_0(
  MR_Word Args_19,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[0]), ((MR_Box) (Args_19)), ((MR_Box) (HeadVar__2_37)));
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
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_25 < Var_26);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_25 > Var_26);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              hlds__hlds_pred____Compare____arg_info_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
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
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[2]);
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

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__382__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_CI_0_30,
  MR_Word * STATE_VARIABLE_CI_31,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33)
{
  {
    MR_bool succeeded;
    MR_String C_Code_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaImpl_22, (MR_Integer) 0))));
    MR_Word Context_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaImpl_22, (MR_Integer) 1))));

    if ((MaybeTraceRuntimeCond_21 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_14_p_0(CodeModel_15, Attributes_16, PredId_17, ProcId_18, Args_19, ExtraArgs_20, C_Code_27, Context_28, GoalInfo_23, Code_24, STATE_VARIABLE_CI_0_30, STATE_VARIABLE_CI_31, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
    else
    {
      MR_Word TraceRuntimeCond_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceRuntimeCond_21, (MR_Integer) 0))));
      MR_Word Var_34;
      MR_Word Var_38;
      MR_Word Var_42;
      MR_Word CondRval_61;
      MR_Word SuccessLabel_62;
      MR_Word BeforeFailure_63;
      MR_Word FailCode_64;
      MR_Word CondCode_65;
      MR_Word SuccessLabelCode_66;
      MR_Word STATE_VARIABLE_CI_21_67;
      MR_Word STATE_VARIABLE_CI_22_68;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_78;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Args_19));
        MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "args runtime cond");
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ExtraArgs_20));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "extra args runtime cond");
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (CodeModel_15));
        MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "non-semi runtime cond");
      ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(TraceRuntimeCond_29, &CondRval_61, STATE_VARIABLE_CI_0_30, &STATE_VARIABLE_CI_21_67);
      ll_backend__code_info__get_next_label_3_p_0(&SuccessLabel_62, STATE_VARIABLE_CI_21_67, &STATE_VARIABLE_CI_22_68);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_32, &BeforeFailure_63);
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_64, STATE_VARIABLE_CI_22_68, STATE_VARIABLE_CI_31, STATE_VARIABLE_CLD_0_32);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_63, *STATE_VARIABLE_CI_31, STATE_VARIABLE_CLD_33);
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (SuccessLabel_62));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (CondRval_61));
        MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Var_73));
      }
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) ((MR_String) "environment variable tests"));
      }
      CondCode_65 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (SuccessLabel_62));
      }
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) ((MR_String) "environment variable tests successful"));
      }
      SuccessLabelCode_66 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_75)));
      Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_64, SuccessLabelCode_66);
      *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CondCode_65, Var_78);
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_14_p_0(
  MR_Word CodeModel_15,
  MR_Word Attributes_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Args_19,
  MR_Word ExtraArgs_20,
  MR_String C_Code_21,
  MR_Word Context_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_100,
  MR_Word * STATE_VARIABLE_CI_101,
  MR_Word STATE_VARIABLE_CLD_0_102,
  MR_Word * STATE_VARIABLE_CLD_103)
{
  {
    MR_bool succeeded;
    MR_Word ArgInfos_27;
    MR_Word OrigCArgs_28;
    MR_Word ModuleInfo_29;
    MR_Word ExtraCArgs_30;
    MR_Word CArgs_31;
    MR_Word InCArgs_32;
    MR_Word OutCArgs_33;
    MR_Word PostDeaths_34;
    MR_Word DeadVars0_35;
    MR_Word DeadVars_36;
    MR_Word MayCallMercury_37;
    MR_Word SaveVarsCode_38;
    MR_Word InputDescs_42;
    MR_Word InputVarsCode_43;
    MR_Word Decls_44;
    MR_Word TICopyIns_45;
    MR_Word TICopyOuts_46;
    MR_Word AllocIdHashDefine_47;
    MR_Word AllocIdHashUndef_48;
    MR_Word CallerPredId_49;
    MR_Integer CallerProcId_50;
    MR_Word ProcLabelHashDefine_51;
    MR_Word ProcLabelHashUndef_52;
    MR_Word InputComp_53;
    MR_String TICopyInStr_54;
    MR_String TICopyOutStr_55;
    MR_Word TICopyInComp_56;
    MR_Word TICopyOutComp_57;
    MR_Word SaveRegsComp_58;
    MR_Word ThreadSafe_59;
    MR_Word ObtainLock_60;
    MR_Word ReleaseLock_61;
    MR_Word AffectsLiveness_67;
    MR_Word C_Code_Comp_68;
    MR_Word Detism_69;
    MR_Word CheckSuccess_Comp_70;
    MR_Word MaybeFailLabel_71;
    MR_Word DefSuccessComp_73;
    MR_Word UndefSuccessComp_74;
    MR_Word RestoreRegsComp_75;
    MR_Word ExprnOpts_78;
    MR_Word UseFloatRegs_79;
    MR_Word FloatRegType_80;
    MR_Word Regs_81;
    MR_Word OutputDescs_82;
    MR_Word OutputComp_83;
    MR_Word Components_84;
    MR_Word MaybeMayDupl_85;
    MR_Word MayDupl_86;
    MR_Word ExtraAttributes_89;
    MR_Word RefersToLLDSSTack_90;
    MR_Word PragmaCCode_91;
    MR_Word FailureCode_99;
    MR_Word STATE_VARIABLE_CI_104_104;
    MR_Word STATE_VARIABLE_CLD_105_105;
    MR_Word STATE_VARIABLE_CLD_106_106;
    MR_Word STATE_VARIABLE_CLD_107_107;
    MR_Word STATE_VARIABLE_CI_110_110;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word STATE_VARIABLE_CI_165_165;
    MR_Word STATE_VARIABLE_CLD_197_197;
    MR_Word STATE_VARIABLE_CLD_198_198;
    MR_Word STATE_VARIABLE_CLD_199_199;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_Word Var_202;
    MR_Word Var_203;
    MR_Word Var_204;
    MR_Word Var_205;
    MR_Word Var_206;
    MR_Word Var_207;
    MR_Word Var_208;
    MR_Word Var_209;
    MR_Word Var_210;
    MR_Word Var_211;
    MR_Word Var_212;
    MR_Word Var_213;
    MR_Word Var_215;
    MR_Word Var_216;
    MR_Word Var_239;
    MR_Word Var_240;

    ArgInfos_27 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(STATE_VARIABLE_CI_0_100, PredId_17, ProcId_18);
    ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(Args_19, ArgInfos_27, &OrigCArgs_28);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_100, &ModuleInfo_29);
    ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(ExtraArgs_20, ModuleInfo_29, ArgInfos_27, &ExtraCArgs_30);
    mercury__list__append_3_p_1((MR_Word) (&ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0), OrigCArgs_28, ExtraCArgs_30, &CArgs_31);
    ll_backend__pragma_c_gen__foreign_proc_select_in_out_args_3_p_0(CArgs_31, &InCArgs_32, &OutCArgs_33);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_23, &PostDeaths_34);
    DeadVars0_35 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(InCArgs_32, PostDeaths_34, DeadVars0_35, &DeadVars_36);
    MayCallMercury_37 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_16);
    switch (MayCallMercury_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word OutVars_39;
          MR_Word OutVarsSet_40;
          MR_Word Var_41;

          ll_backend__code_info__succip_is_used_2_p_0(STATE_VARIABLE_CI_0_100, &STATE_VARIABLE_CI_104_104);
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(OutCArgs_33, &OutVars_39);
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_39, &OutVarsSet_40);
          ll_backend__code_loc_dep__save_variables_6_p_0(OutVarsSet_40, &Var_41, &SaveVarsCode_38, STATE_VARIABLE_CI_104_104, STATE_VARIABLE_CLD_0_102, &STATE_VARIABLE_CLD_105_105);
        }
        break;
      case (MR_Integer) 1:
        {
          SaveVarsCode_38 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CI_104_104 = STATE_VARIABLE_CI_0_100;
          STATE_VARIABLE_CLD_105_105 = STATE_VARIABLE_CLD_0_102;
        }
        break;
    }
    ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(InCArgs_32, &InputDescs_42, &InputVarsCode_43, STATE_VARIABLE_CI_104_104, STATE_VARIABLE_CLD_105_105, &STATE_VARIABLE_CLD_106_106);
    ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(DeadVars_36, STATE_VARIABLE_CLD_106_106, &STATE_VARIABLE_CLD_107_107);
    ll_backend__pragma_c_gen__make_foreign_proc_decls_8_p_0(STATE_VARIABLE_CI_104_104, C_Code_21, (MR_Integer) 1, (MR_Integer) 1, CArgs_31, &Decls_44, &TICopyIns_45, &TICopyOuts_46);
    ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(C_Code_21, Context_22, &AllocIdHashDefine_47, &AllocIdHashUndef_48, STATE_VARIABLE_CI_104_104, &STATE_VARIABLE_CI_110_110);
    ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_110_110, &CallerPredId_49);
    ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_110_110, &CallerProcId_50);
    ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(ModuleInfo_29, CallerPredId_49, CallerProcId_50, &ProcLabelHashDefine_51, &ProcLabelHashUndef_52);
    {
      InputComp_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InputComp_53, 0) = ((MR_Box) (InputDescs_42));
    }
    mercury__string__append_list_2_p_0(TICopyIns_45, &TICopyInStr_54);
    mercury__string__append_list_2_p_0(TICopyOuts_46, &TICopyOutStr_55);
    Var_114 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
    }
    {
      TICopyInComp_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TICopyInComp_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), TICopyInComp_56, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), TICopyInComp_56, 2) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(3), TICopyInComp_56, 3) = ((MR_Box) (TICopyInStr_54));
    }
    Var_118 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
    }
    {
      TICopyOutComp_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TICopyOutComp_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), TICopyOutComp_57, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), TICopyOutComp_57, 2) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(3), TICopyOutComp_57, 3) = ((MR_Box) (TICopyOutStr_55));
    }
    ThreadSafe_59 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes_16);
    switch (ThreadSafe_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.generate_ordinary_foreign_proc_code\'/14", (MR_String) "maybe_thread_safe");
          return;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word PredInfo_62;
          MR_String Name_63;
          MR_String MangledName_64;
          MR_String ObtainLockStr_65;
          MR_String ReleaseLockStr_66;
          MR_String Var_130;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_String Var_137;
          MR_Word Var_141;
          MR_Word Var_142;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_29, PredId_17, &PredInfo_62);
          Name_63 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_62);
          MangledName_64 = backend_libs__c_util__quote_string_1_f_0(Name_63);
          Var_130 = mercury__string__f_43_43_2_f_0(MangledName_64, (MR_String) "\");\n");
          ObtainLockStr_65 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\"", Var_130);
          Var_135 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
          }
          {
            ObtainLock_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 2) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 3) = ((MR_Box) (ObtainLockStr_65));
          }
          Var_137 = mercury__string__f_43_43_2_f_0(MangledName_64, (MR_String) "\");\n");
          ReleaseLockStr_66 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\"", Var_137);
          Var_142 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
          }
          {
            ReleaseLock_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 2) = ((MR_Box) (Var_141));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 3) = ((MR_Box) (ReleaseLockStr_66));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_152;
          MR_Word Var_153;

          Var_148 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
          }
          {
            ObtainLock_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 2) = ((MR_Box) (Var_147));
            MR_hl_field(MR_mktag(3), ObtainLock_60, 3) = ((MR_Box) ((MR_String) ""));
          }
          Var_153 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Var_153));
          }
          {
            ReleaseLock_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 2) = ((MR_Box) (Var_152));
            MR_hl_field(MR_mktag(3), ReleaseLock_61, 3) = ((MR_Box) ((MR_String) ""));
          }
        }
        break;
    }
    AffectsLiveness_67 = parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(Attributes_16);
    {
      C_Code_Comp_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), C_Code_Comp_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), C_Code_Comp_68, 1) = ((MR_Box) (Context_22));
      MR_hl_field(MR_mktag(3), C_Code_Comp_68, 2) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_67));
      MR_hl_field(MR_mktag(3), C_Code_Comp_68, 3) = ((MR_Box) (C_Code_21));
    }
    Detism_69 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_23);
    switch (CodeModel_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_162;
          MR_Word Var_163;

          CheckSuccess_Comp_70 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeFailLabel_71 = (MR_Word) ((MR_Unsigned) 0U);
          Var_158 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
          }
          {
            DefSuccessComp_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 2) = ((MR_Box) (Var_157));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 3) = ((MR_Box) ((MR_String) ""));
          }
          Var_163 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
          }
          {
            UndefSuccessComp_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 2) = ((MR_Box) (Var_162));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 3) = ((MR_Box) ((MR_String) ""));
          }
          STATE_VARIABLE_CI_165_165 = STATE_VARIABLE_CI_110_110;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_168;
          MR_Word Var_169;
          MR_String Var_170;
          MR_String Var_172;
          MR_String Var_173;
          MR_String Var_174;
          MR_String Var_176;
          MR_String Var_178;
          MR_String Var_180;
          MR_String Var_181;
          MR_Word Var_185;
          MR_Word Var_186;

          succeeded = (Detism_69 == (MR_Integer) 7);
          if (succeeded)
          {
            CheckSuccess_Comp_70 = (MR_Word) ((MR_Unsigned) 0U);
            MaybeFailLabel_71 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_CI_165_165 = STATE_VARIABLE_CI_110_110;
          }
          else
          {
            MR_Word FailLabel_72;

            ll_backend__code_info__get_next_label_3_p_0(&FailLabel_72, STATE_VARIABLE_CI_110_110, &STATE_VARIABLE_CI_165_165);
            {
              CheckSuccess_Comp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CheckSuccess_Comp_70, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), CheckSuccess_Comp_70, 1) = ((MR_Box) (FailLabel_72));
            }
            {
              MaybeFailLabel_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeFailLabel_71, 0) = ((MR_Box) (FailLabel_72));
            }
          }
          Var_169 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
          }
          Var_173 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          Var_181 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          Var_180 = mercury__string__f_43_43_2_f_0(Var_181, (MR_String) "\n");
          Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "#define SUCCESS_INDICATOR ", Var_180);
          Var_176 = mercury__string__f_43_43_2_f_0((MR_String) "#undef SUCCESS_INDICATOR\n", Var_178);
          Var_174 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_176);
          Var_172 = mercury__string__f_43_43_2_f_0(Var_173, Var_174);
          Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", Var_172);
          {
            DefSuccessComp_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 2) = ((MR_Box) (Var_168));
            MR_hl_field(MR_mktag(3), DefSuccessComp_73, 3) = ((MR_Box) (Var_170));
          }
          Var_186 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (Var_186));
          }
          {
            UndefSuccessComp_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 2) = ((MR_Box) (Var_185));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_74, 3) = ((MR_Box) ((MR_String) "#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n"));
          }
        }
        break;
    }
    switch (MayCallMercury_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InstMapDelta_76;
          MR_Word OkToDelete_77;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_192;
          MR_Word Var_193;

          Var_122 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
          }
          {
            SaveRegsComp_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 2) = ((MR_Box) (Var_121));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 3) = ((MR_Box) ((MR_String) "\tMR_save_registers();\n"));
          }
          Var_193 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Var_193));
          }
          {
            RestoreRegsComp_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_75, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_75, 2) = ((MR_Box) (Var_192));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_75, 3) = ((MR_Box) ((MR_String) "#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n"));
          }
          InstMapDelta_76 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_23);
          succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_76);
          if (succeeded)
            OkToDelete_77 = (MR_Integer) 0;
          else
            OkToDelete_77 = (MR_Integer) 1;
          ll_backend__code_loc_dep__clear_all_registers_3_p_0(OkToDelete_77, STATE_VARIABLE_CLD_107_107, &STATE_VARIABLE_CLD_197_197);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_126;
          MR_Word Var_127;

          Var_127 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
          }
          {
            SaveRegsComp_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 2) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(3), SaveRegsComp_58, 3) = ((MR_Box) ((MR_String) ""));
          }
          RestoreRegsComp_75 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_CLD_197_197 = STATE_VARIABLE_CLD_107_107;
        }
        break;
    }
    ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_165_165, &ExprnOpts_78);
    UseFloatRegs_79 = ll_backend__llds__get_float_registers_1_f_0(ExprnOpts_78);
    switch (UseFloatRegs_79) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        FloatRegType_80 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        FloatRegType_80 = (MR_Integer) 1;
        break;
    }
    ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(FloatRegType_80, OutCArgs_33, &Regs_81, STATE_VARIABLE_CLD_197_197, &STATE_VARIABLE_CLD_198_198);
    ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(OutCArgs_33, Regs_81, &OutputDescs_82, STATE_VARIABLE_CI_165_165, STATE_VARIABLE_CLD_198_198, &STATE_VARIABLE_CLD_199_199);
    {
      OutputComp_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OutputComp_83, 0) = ((MR_Box) (OutputDescs_82));
    }
    {
      Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (ProcLabelHashDefine_51));
      MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (AllocIdHashDefine_47));
    }
    {
      Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (ProcLabelHashUndef_52));
      MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (AllocIdHashUndef_48));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (UndefSuccessComp_74));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_213));
    }
    {
      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (OutputComp_83));
      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_212));
    }
    {
      Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (TICopyOutComp_57));
      MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
    }
    {
      Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (RestoreRegsComp_75));
      MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_210));
    }
    {
      Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (CheckSuccess_Comp_70));
      MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_209));
    }
    {
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (ReleaseLock_61));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_208));
    }
    {
      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (C_Code_Comp_68));
      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_207));
    }
    {
      Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (ObtainLock_60));
      MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) (Var_206));
    }
    {
      Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (SaveRegsComp_58));
      MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_205));
    }
    {
      Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (TICopyInComp_56));
      MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_204));
    }
    {
      Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (InputComp_53));
      MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_203));
    }
    {
      Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (DefSuccessComp_73));
      MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (Var_202));
    }
    Components_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), Var_200, Var_201);
    MaybeMayDupl_85 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attributes_16);
    if ((MaybeMayDupl_85 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ExtraArgs_20 == (MR_Word) ((MR_Unsigned) 0U)))
        MayDupl_86 = (MR_Integer) 0;
      else
        MayDupl_86 = (MR_Integer) 1;
    else
      MayDupl_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDupl_85, (MR_Integer) 0))));
    ExtraAttributes_89 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attributes_16);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0), ((MR_Box) ((MR_Unsigned) 0U)), ExtraAttributes_89);
    if (succeeded)
      RefersToLLDSSTack_90 = (MR_Integer) 1;
    else
      RefersToLLDSSTack_90 = (MR_Integer) 0;
    {
      Var_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_216, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_216, 1) = ((MR_Box) (Decls_44));
      MR_hl_field(MR_mktag(3), Var_216, 2) = ((MR_Box) (Components_84));
      MR_hl_field(MR_mktag(3), Var_216, 3) = (MR_Box) ((MR_Unsigned) (MayCallMercury_37));
      MR_hl_field(MR_mktag(3), Var_216, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_216, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_216, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_216, 7) = ((MR_Box) (MaybeFailLabel_71));
      MR_hl_field(MR_mktag(3), Var_216, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_216, 9) = (MR_Box) (((((MR_Unsigned) (RefersToLLDSSTack_90) << 1)) | (MR_Unsigned) (MayDupl_86)));
    }
    {
      Var_215 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (Var_216));
      MR_hl_field(MR_mktag(0), Var_215, 1) = ((MR_Box) ((MR_String) "foreign_proc inclusion"));
    }
    PragmaCCode_91 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_215)));
    if ((MaybeFailLabel_71 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (Detism_69 == (MR_Integer) 7);
      if (succeeded)
      {
        MR_Word BeforeFailure_241;

        ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_199_199, &BeforeFailure_241);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&FailureCode_99, STATE_VARIABLE_CI_165_165, STATE_VARIABLE_CI_101, STATE_VARIABLE_CLD_199_199);
        ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_241, *STATE_VARIABLE_CI_101, STATE_VARIABLE_CLD_103);
      }
      else
      {
        FailureCode_99 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_103 = STATE_VARIABLE_CLD_199_199;
        *STATE_VARIABLE_CI_101 = STATE_VARIABLE_CI_165_165;
      }
    }
    else
    {
      MR_Word TheFailLabel_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_71, (MR_Integer) 0))));
      MR_Word SkipLabel_93;
      MR_Word BeforeFailure_94;
      MR_Word FailCode_95;
      MR_Word GotoSkipLabelCode_96;
      MR_Word SkipLabelCode_97;
      MR_Word FailLabelCode_98;
      MR_Word STATE_VARIABLE_CI_224_224;
      MR_Word Var_227;
      MR_Word Var_228;
      MR_Word Var_229;
      MR_Word Var_231;
      MR_Word Var_232;
      MR_Word Var_234;
      MR_Word Var_235;
      MR_Word Var_237;
      MR_Word Var_238;

      ll_backend__code_info__get_next_label_3_p_0(&SkipLabel_93, STATE_VARIABLE_CI_165_165, &STATE_VARIABLE_CI_224_224);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_199_199, &BeforeFailure_94);
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_95, STATE_VARIABLE_CI_224_224, STATE_VARIABLE_CI_101, STATE_VARIABLE_CLD_199_199);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_94, *STATE_VARIABLE_CI_101, STATE_VARIABLE_CLD_103);
      {
        Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (SkipLabel_93));
      }
      {
        Var_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_228, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_228, 1) = ((MR_Box) (Var_229));
      }
      {
        Var_227 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_227, 0) = ((MR_Box) (Var_228));
        MR_hl_field(MR_mktag(0), Var_227, 1) = ((MR_Box) ((MR_String) "Skip past failure code"));
      }
      GotoSkipLabelCode_96 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_227)));
      {
        Var_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_232, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_232, 1) = ((MR_Box) (SkipLabel_93));
      }
      {
        Var_231 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_231, 0) = ((MR_Box) (Var_232));
        MR_hl_field(MR_mktag(0), Var_231, 1) = ((MR_Box) ((MR_String) ""));
      }
      SkipLabelCode_97 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_231)));
      {
        Var_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_235, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_235, 1) = ((MR_Box) (TheFailLabel_92));
      }
      {
        Var_234 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_234, 0) = ((MR_Box) (Var_235));
        MR_hl_field(MR_mktag(0), Var_234, 1) = ((MR_Box) ((MR_String) ""));
      }
      FailLabelCode_98 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_234)));
      Var_238 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_95, SkipLabelCode_97);
      Var_237 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_98, Var_238);
      FailureCode_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GotoSkipLabelCode_96, Var_237);
    }
    Var_240 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PragmaCCode_91, FailureCode_99);
    Var_239 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InputVarsCode_43, Var_240);
    *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveVarsCode_38, Var_239);
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/6", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Reg_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Regs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word OutputsTail_36;
        MR_Word Var_37;
        MR_Word MaybeArgName_38;
        MR_Word OrigType_39;
        MR_Word BoxPolicy_40;
        MR_Word STATE_VARIABLE_CLD_51_51;
        MR_Word STATE_VARIABLE_CLD_52_52;

        ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(Var_54, Regs_32, &OutputsTail_36, HeadVar__4_4, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_51_51);
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
        MaybeArgName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1))));
        OrigType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 2))));
        BoxPolicy_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 3))) & (MR_Integer) 1);
        ll_backend__code_loc_dep__release_reg_3_p_0(Reg_31, STATE_VARIABLE_CLD_51_51, &STATE_VARIABLE_CLD_52_52);
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_52_52, Var_37);
        if (succeeded)
        {
          MR_Word ModuleInfo_42;
          MR_Word MaybeForeign_43;
          MR_Word TypeTable_59;
          MR_Word MaybeC_63;
          MR_Word TypeCtor_60;
          MR_Word TypeDefn_61;
          MR_Word TypeBody_62;
          MR_Word Var_71;
          MR_String Name_78;
          MR_Char Var_80;
          MR_String Var_79;

          ll_backend__code_loc_dep__set_var_location_4_p_0(Var_37, Reg_31, STATE_VARIABLE_CLD_52_52, STATE_VARIABLE_CLD_6);
          ll_backend__code_info__get_module_info_2_p_0(HeadVar__4_4, &ModuleInfo_42);
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_42, &TypeTable_59);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_39, &TypeCtor_60);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_59, TypeCtor_60, &TypeDefn_61);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_61, &TypeBody_62);
              succeeded = ((MR_tag((MR_Word) TypeBody_62)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_71 = (MR_Word) ((MR_Word) (TypeBody_62));
                MaybeC_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            if ((MaybeC_63 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                return;
              }
            else
            {
              MR_Word Data_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_63, (MR_Integer) 0))));
              MR_String Name_68;
              MR_Word Assertions_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_67, (MR_Integer) 2))));
              MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_67, (MR_Integer) 0))));
              MR_Word Var_75;

              Name_68 = (MR_String) (Var_74);
              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Name_68));
                MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Assertions_70));
              }
              {
                MaybeForeign_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeForeign_43, 0) = ((MR_Box) (Var_75));
              }
            }
          else
            MaybeForeign_43 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (MaybeArgName_38 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Name_78 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgName_38, (MR_Integer) 0))));
            Var_80 = (MR_Char) 95;
            succeeded = mercury__string__first_char_3_p_2(Name_78, Var_80, &Var_79);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word VarType_46;
            MR_Word IsDummy_47;
            MR_Word PragmaCOutput_48;

            VarType_46 = ll_backend__code_info__variable_type_2_f_0(HeadVar__4_4, Var_37);
            IsDummy_47 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_42, VarType_46);
            {
              PragmaCOutput_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaCOutput_48, 0) = ((MR_Box) (Reg_31));
              MR_hl_field(MR_mktag(0), PragmaCOutput_48, 1) = ((MR_Box) (VarType_46));
              MR_hl_field(MR_mktag(0), PragmaCOutput_48, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_47));
              MR_hl_field(MR_mktag(0), PragmaCOutput_48, 3) = ((MR_Box) (OrigType_39));
              MR_hl_field(MR_mktag(0), PragmaCOutput_48, 4) = ((MR_Box) (Name_78));
              MR_hl_field(MR_mktag(0), PragmaCOutput_48, 5) = ((MR_Box) (MaybeForeign_43));
              MR_hl_field(MR_mktag(0), PragmaCOutput_48, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_40));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaCOutput_48));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputsTail_36));
            }
          }
          else
            *HeadVar__3_3 = OutputsTail_36;
        }
        else
        {
          *HeadVar__3_3 = OutputsTail_36;
          *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_52_52;
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

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CLD_5 = STATE_VARIABLE_CLD_0_4;
    }
    else
    {
      MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Reg_13;
      MR_Word Regs_14;
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 0))));
      MR_Word VarType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 2))));
      MR_Word BoxPolicy_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word RegType_21;
      MR_Word STATE_VARIABLE_CLD_24_24;

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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Reg_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Regs_14));
      }
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
    }
    else
    {
      MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 0))));
      MR_Word MaybeArgName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 1))));
      MR_Word OrigType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 2))));
      MR_Word BoxPolicy_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_11, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_String Name_45;
      MR_Char Var_47;
      MR_String Var_46;

      succeeded = (MaybeArgName_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Name_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgName_18, (MR_Integer) 0))));
        Var_47 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(Name_45, Var_47, &Var_46);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word ModuleInfo_24;
        MR_Word VarType_25;
        MR_Word IsDummy_26;
        MR_Word HeadCode_27;
        MR_Word Rval_28;
        MR_Word MaybeForeign_29;
        MR_Word HeadInput_30;
        MR_Word TailInputs_31;
        MR_Word TailCode_32;
        MR_Word STATE_VARIABLE_CLD_38_38;
        MR_Word TypeTable_51;
        MR_Word MaybeC_55;
        MR_Word TypeCtor_52;
        MR_Word TypeDefn_53;
        MR_Word TypeBody_54;
        MR_Word Var_63;

        ll_backend__code_info__get_module_info_2_p_0(HeadVar__4_4, &ModuleInfo_24);
        VarType_25 = ll_backend__code_info__variable_type_2_f_0(HeadVar__4_4, Var_17);
        IsDummy_26 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_24, VarType_25);
        switch (IsDummy_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              HeadCode_27 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              Rval_28 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3]));
              STATE_VARIABLE_CLD_38_38 = STATE_VARIABLE_CLD_0_5;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__code_loc_dep__produce_variable_6_p_0(Var_17, &HeadCode_27, &Rval_28, HeadVar__4_4, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_38_38);
            break;
        }
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_24, &TypeTable_51);
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_19, &TypeCtor_52);
        if (succeeded)
        {
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_51, TypeCtor_52, &TypeDefn_53);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_53, &TypeBody_54);
            succeeded = ((MR_tag((MR_Word) TypeBody_54)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_63 = (MR_Word) ((MR_Word) (TypeBody_54));
              MaybeC_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          if ((MaybeC_55 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
              return;
            }
          else
          {
            MR_Word Data_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_55, (MR_Integer) 0))));
            MR_String Name_60;
            MR_Word Assertions_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_59, (MR_Integer) 2))));
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_59, (MR_Integer) 0))));
            MR_Word Var_67;

            Name_60 = (MR_String) (Var_66);
            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Name_60));
              MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Assertions_62));
            }
            {
              MaybeForeign_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeForeign_29, 0) = ((MR_Box) (Var_67));
            }
          }
        else
          MaybeForeign_29 = (MR_Word) ((MR_Unsigned) 0U);
        {
          HeadInput_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadInput_30, 0) = ((MR_Box) (Name_45));
          MR_hl_field(MR_mktag(0), HeadInput_30, 1) = ((MR_Box) (VarType_25));
          MR_hl_field(MR_mktag(0), HeadInput_30, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_26));
          MR_hl_field(MR_mktag(0), HeadInput_30, 3) = ((MR_Box) (OrigType_19));
          MR_hl_field(MR_mktag(0), HeadInput_30, 4) = ((MR_Box) (Rval_28));
          MR_hl_field(MR_mktag(0), HeadInput_30, 5) = ((MR_Box) (MaybeForeign_29));
          MR_hl_field(MR_mktag(0), HeadInput_30, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_20));
        }
        ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(Args_12, &TailInputs_31, &TailCode_32, HeadVar__4_4, STATE_VARIABLE_CLD_38_38, STATE_VARIABLE_CLD_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInput_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInputs_31));
        }
        *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_27, TailCode_32);
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Args_12;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeadVars_4 = STATE_VARIABLE_DeadVars_0_3;
    else
    {
      MR_Word Arg_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_DeadVars_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DeadVars_0_3;

      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths_2, Var_13);
      if (succeeded)
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13, STATE_VARIABLE_DeadVars_0_3, &STATE_VARIABLE_DeadVars_20_20);
      else
        STATE_VARIABLE_DeadVars_20_20 = STATE_VARIABLE_DeadVars_0_3;
      // direct tailcall eliminated
      ;
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
ll_backend__pragma_c_gen__make_foreign_proc_decls_8_p_0(
  MR_Word CI_1,
  MR_String Code_2,
  MR_Integer STATE_VARIABLE_TIIn_0_3,
  MR_Integer STATE_VARIABLE_TIOut_0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Arg_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Args_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word HeadDecls_22;
    MR_Word HeadTICopyIns_23;
    MR_Word HeadTICopyOuts_24;
    MR_Word TailDecls_25;
    MR_Word TailTICopyIns_26;
    MR_Word TailTICopyOuts_27;
    MR_Integer STATE_VARIABLE_TIIn_30_30;
    MR_Integer STATE_VARIABLE_TIOut_31_31;

    ll_backend__pragma_c_gen__make_foreign_proc_decl_10_p_0(CI_1, Code_2, STATE_VARIABLE_TIIn_0_3, &STATE_VARIABLE_TIIn_30_30, STATE_VARIABLE_TIOut_0_4, &STATE_VARIABLE_TIOut_31_31, Arg_17, &HeadDecls_22, &HeadTICopyIns_23, &HeadTICopyOuts_24);
    ll_backend__pragma_c_gen__make_foreign_proc_decls_8_p_0(CI_1, Code_2, STATE_VARIABLE_TIIn_30_30, STATE_VARIABLE_TIOut_31_31, Args_18, &TailDecls_25, &TailTICopyIns_26, &TailTICopyOuts_27);
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_decl_0), HeadDecls_22, TailDecls_25);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadTICopyIns_23, TailTICopyIns_26);
    *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadTICopyOuts_24, TailTICopyOuts_27);
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decl_10_p_0(
  MR_Word CI_11,
  MR_String Code_12,
  MR_Integer STATE_VARIABLE_TIIn_0_36,
  MR_Integer * STATE_VARIABLE_TIIn_37,
  MR_Integer STATE_VARIABLE_TIOut_0_38,
  MR_Integer * STATE_VARIABLE_TIOut_39,
  MR_Word Arg_15,
  MR_Word * Decls_16,
  MR_Word * TICopyIns_17,
  MR_Word * TICopyOuts_18)
{
  {
    MR_bool succeeded;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 0))));
    MR_Word MaybeArgName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 1))));
    MR_Word OrigType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 2))));
    MR_Word BoxPolicy_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_15, (MR_Integer) 4))));
    MR_Word MaybeUseArgName_24;

    MaybeUseArgName_24 = ll_backend__pragma_c_gen__var_should_be_passed_1_f_0(MaybeArgName_20);
    if ((MaybeUseArgName_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Decls_16 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyIns_17 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyOuts_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TIIn_37 = STATE_VARIABLE_TIIn_0_36;
      *STATE_VARIABLE_TIOut_39 = STATE_VARIABLE_TIOut_0_38;
    }
    else
    {
      MR_String ArgName_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeUseArgName_24, (MR_Integer) 0))));
      MR_Word ModuleInfo_26;
      MR_String OrigTypeString_27;
      MR_Word ArgDecl_28;

      ll_backend__code_info__get_module_info_2_p_0(CI_11, &ModuleInfo_26);
      switch (BoxPolicy_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          OrigTypeString_27 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 0:
          OrigTypeString_27 = backend_libs__foreign__exported_type_to_c_string_2_f_0(ModuleInfo_26, OrigType_21);
          break;
      }
      {
        ArgDecl_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgDecl_28, 0) = ((MR_Box) (OrigType_21));
        MR_hl_field(MR_mktag(0), ArgDecl_28, 1) = ((MR_Box) (OrigTypeString_27));
        MR_hl_field(MR_mktag(0), ArgDecl_28, 2) = ((MR_Box) (ArgName_25));
      }
      succeeded = ll_backend__pragma_c_gen__is_comp_gen_type_info_arg_3_p_0(CI_11, Var_19, ArgName_25);
      if (succeeded)
      {
        MR_Word Mode_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgInfo_23, (MR_Integer) 1))) & (MR_Integer) 3);

        switch (Mode_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String SeqArgName_31;
              MR_String TICopyIn_32;
              MR_Word SeqArgDecl_35;
              MR_Word Var_73;
              MR_String Var_100;
              MR_String Var_109;
              MR_String Var_111;
              MR_String Var_112;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_2[1]), STATE_VARIABLE_TIIn_0_36, &Var_100);
              SeqArgName_31 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_In_", Var_100);
              *STATE_VARIABLE_TIIn_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIIn_0_36 + (MR_Unsigned) 1);
              Var_109 = mercury__string__f_43_43_2_f_0(ArgName_25, (MR_String) ";\n");
              Var_111 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_109);
              Var_112 = mercury__string__f_43_43_2_f_0(SeqArgName_31, Var_111);
              TICopyIn_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_112);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *TICopyIns_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TICopyIn_32));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *TICopyOuts_18 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_TIOut_39 = STATE_VARIABLE_TIOut_0_38;
              {
                SeqArgDecl_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SeqArgDecl_35, 0) = ((MR_Box) (OrigType_21));
                MR_hl_field(MR_mktag(0), SeqArgDecl_35, 1) = ((MR_Box) (OrigTypeString_27));
                MR_hl_field(MR_mktag(0), SeqArgDecl_35, 2) = ((MR_Box) (SeqArgName_31));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (SeqArgDecl_35));
                MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Decls_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_28));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_73));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String TICopyOut_34;
              MR_String SeqArgName_76;
              MR_Word SeqArgDecl_77;
              MR_Word Var_78;
              MR_String Var_80;
              MR_Integer Var_33;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_2[1]), STATE_VARIABLE_TIOut_0_38, &Var_80);
              SeqArgName_76 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_Out_", Var_80);
              *STATE_VARIABLE_TIOut_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIOut_0_38 + (MR_Unsigned) 1);
              succeeded = mercury__string__sub_string_search_3_p_0(Code_12, SeqArgName_76, &Var_33);
              if (succeeded)
              {
                MR_String Var_89;
                MR_String Var_91;
                MR_String Var_92;

                Var_89 = mercury__string__f_43_43_2_f_0(SeqArgName_76, (MR_String) ";\n");
                Var_91 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_89);
                Var_92 = mercury__string__f_43_43_2_f_0(ArgName_25, Var_91);
                TICopyOut_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_92);
              }
              else
              {
                MR_String Var_95;
                MR_String Var_97;
                MR_String Var_98;

                Var_95 = mercury__string__f_43_43_2_f_0(ArgName_25, (MR_String) ";\n");
                Var_97 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_95);
                Var_98 = mercury__string__f_43_43_2_f_0(SeqArgName_76, Var_97);
                TICopyOut_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_98);
              }
              *TICopyIns_17 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *TICopyOuts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TICopyOut_34));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *STATE_VARIABLE_TIIn_37 = STATE_VARIABLE_TIIn_0_36;
              {
                SeqArgDecl_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SeqArgDecl_77, 0) = ((MR_Box) (OrigType_21));
                MR_hl_field(MR_mktag(0), SeqArgDecl_77, 1) = ((MR_Box) (OrigTypeString_27));
                MR_hl_field(MR_mktag(0), SeqArgDecl_77, 2) = ((MR_Box) (SeqArgName_76));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (SeqArgDecl_77));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Decls_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_28));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_78));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Decls_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_28));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *TICopyIns_17 = (MR_Word) ((MR_Unsigned) 0U);
              *TICopyOuts_18 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_TIIn_37 = STATE_VARIABLE_TIIn_0_36;
              *STATE_VARIABLE_TIOut_39 = STATE_VARIABLE_TIOut_0_38;
            }
            break;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Decls_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *TICopyIns_17 = (MR_Word) ((MR_Unsigned) 0U);
        *TICopyOuts_18 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_TIOut_39 = STATE_VARIABLE_TIOut_0_38;
        *STATE_VARIABLE_TIIn_37 = STATE_VARIABLE_TIIn_0_36;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__is_comp_gen_type_info_arg_3_p_0(
  MR_Word CI_4,
  MR_Word Var_5,
  MR_String ArgName_6)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_7;
    MR_Word Type_8;
    MR_Word TypeCtorSymName_9;
    MR_Word TypeCtorModuleName_10;
    MR_String TypeCtorName_11;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    succeeded = mercury__string__prefix_2_p_0(ArgName_6, (MR_String) "TypeInfo_for_");
    if (succeeded)
    {
      ll_backend__code_info__get_vartypes_2_p_0(CI_4, &VarTypes_7);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_5, &Type_8);
      succeeded = ((MR_tag((MR_Word) Type_8)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorSymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 1))));
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 2))));
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TypeCtorSymName_9)) == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_9, (MR_Integer) 0))));
              TypeCtorName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_9, (MR_Integer) 1))));
              Var_15 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModuleName_10, Var_15);
              if (succeeded)
                succeeded = (strcmp(TypeCtorName_11, (MR_String) "type_info") == 0);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__pragma_c_gen__var_should_be_passed_1_f_0(
  MR_Word MaybeName_3)
{
  {
    MR_bool succeeded = (MaybeName_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word MaybeUseName_4;
    MR_String Name_5;
    MR_Char Var_7;
    MR_String Var_6;

    if (succeeded)
    {
      Name_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeName_3, (MR_Integer) 0))));
      Var_7 = (MR_Char) 95;
      succeeded = mercury__string__first_char_3_p_2(Name_5, Var_7, &Var_6);
      succeeded = !(succeeded);
    }
    if (succeeded)
      MaybeUseName_4 = MaybeName_3;
    else
      MaybeUseName_4 = (MR_Word) ((MR_Unsigned) 0U);
    return MaybeUseName_4;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_out_args_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Arg_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Args_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailInArgs_8;
    MR_Word TailOutArgs_9;
    MR_Word ArgInfo_14;
    MR_Word Mode_16;

    ll_backend__pragma_c_gen__foreign_proc_select_in_out_args_3_p_0(Args_5, &TailInArgs_8, &TailOutArgs_9);
    ArgInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 4))));
    Mode_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgInfo_14, (MR_Integer) 1))) & (MR_Integer) 3);
    switch (Mode_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInArgs_8));
          }
          *HeadVar__3_3 = TailOutArgs_9;
        }
        break;
      case (MR_Integer) 1:
        {
          *HeadVar__2_2 = TailInArgs_8;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailOutArgs_9));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *HeadVar__2_2 = TailInArgs_8;
          *HeadVar__3_3 = TailOutArgs_9;
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Args_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_3, (MR_Integer) 0))));
    MR_Word Vars_6;

    ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(Args_4, &Vars_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExtraArg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ExtraArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word CArg_11;
    MR_Word CArgs_12;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 0))));
    MR_Word MaybeNameMode_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 1))));
    MR_Word OrigType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 2))));
    MR_Word BoxPolicy_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExtraArg_7, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_String Name_17;
    MR_Word TopFunctorMode_19;
    MR_Integer NextReg_21;
    MR_Word ArgInfo_22;
    MR_Word Var_27;
    MR_Word Var_28;

    if ((MaybeNameMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.make_extra_c_arg_list_seq\'/4", (MR_String) "no name");
        return;
      }
    else
    {
      MR_Word Mode_18;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameMode_14, (MR_Integer) 0))));

      Name_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      Mode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_2, Mode_18, OrigType_15, &TopFunctorMode_19);
    }
    NextReg_21 = (MR_Integer) ((MR_Unsigned) LastReg_3 + (MR_Unsigned) 1);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (NextReg_21));
    }
    {
      ArgInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgInfo_22, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), ArgInfo_22, 1) = (MR_Box) ((MR_Unsigned) (TopFunctorMode_19));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Name_17));
    }
    {
      CArg_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CArg_11, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), CArg_11, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), CArg_11, 2) = ((MR_Box) (OrigType_15));
      MR_hl_field(MR_mktag(0), CArg_11, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_16));
      MR_hl_field(MR_mktag(0), CArg_11, 4) = ((MR_Box) (ArgInfo_22));
    }
    ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ExtraArgs_8, ModuleInfo_2, NextReg_21, &CArgs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaxF_5 = STATE_VARIABLE_MaxF_0_4;
      *STATE_VARIABLE_MaxR_3 = STATE_VARIABLE_MaxR_0_2;
    }
    else
    {
      MR_Word Loc_12;
      MR_Word ArgInfos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_MaxF_24_24;
      MR_Integer STATE_VARIABLE_MaxR_26_26;
      MR_Integer Var_30;
      MR_Word Var_31;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxR_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_MaxF_0_4;

      Loc_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
      Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Loc_12, (MR_Integer) 0))) & (MR_Integer) 1);
      Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Loc_12, (MR_Integer) 1))));
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
      ;
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgInfoTail_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CArg_18;
      MR_Word CArgTail_19;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
      MR_Word MaybeNameMode_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1))));
      MR_Word Type_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 2))));
      MR_Word BoxPolicy_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word MaybeName_26;

      if ((MaybeNameMode_21 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeName_26 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_String Name_24;
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameMode_21, (MR_Integer) 0))));

        Name_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
        {
          MaybeName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeName_26, 0) = ((MR_Box) (Name_24));
        }
      }
      {
        CArg_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CArg_18, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), CArg_18, 1) = ((MR_Box) (MaybeName_26));
        MR_hl_field(MR_mktag(0), CArg_18, 2) = ((MR_Box) (Type_22));
        MR_hl_field(MR_mktag(0), CArg_18, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_23));
        MR_hl_field(MR_mktag(0), CArg_18, 4) = ((MR_Box) (ArgInfo_16));
      }
      ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(Var_28, ArgInfoTail_17, &CArgTail_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CArg_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CArgTail_19));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 222, &ProfileMemory_13);
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

      if ((MaybeContext_8 == (MR_Word) ((MR_Unsigned) 0U)))
        Context_15 = mercury__term__context_init_0_f_0();
      else
        Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeContext_8, (MR_Integer) 0))));
      ll_backend__code_info__add_alloc_site_info_6_p_0(Context_15, (MR_String) "unknown", (MR_Integer) 0, &AllocId_16, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18);
      Var_39 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_24, 2) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(3), Var_24, 3) = ((MR_Box) ((MR_String) "#define\tMR_ALLOC_ID\t"));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (AllocId_16));
      }
      Var_45 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(3), Var_29, 3) = ((MR_Box) ((MR_String) "\n"));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AllocIdHashDefine_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_26));
      }
      Var_51 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(3), Var_32, 3) = ((MR_Box) ((MR_String) "#undef\tMR_ALLOC_ID\n"));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AllocIdHashUndef_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      *AllocIdHashDefine_9 = (MR_Word) ((MR_Unsigned) 0U);
      *AllocIdHashUndef_10 = (MR_Word) ((MR_Unsigned) 0U);
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
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word ProcLabel_22;

    CodeAddr_21 = ll_backend__code_util__make_entry_label_4_f_0(ModuleInfo_6, PredId_7, ProcId_8, (MR_Word) ((MR_Unsigned) 0U));
    succeeded = ((MR_tag((MR_Word) CodeAddr_21)) == (MR_Integer) 2);
    if (succeeded)
    {
      ProcLabel_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CodeAddr_21, (MR_Integer) 0))));
      ProcLabelStr_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_22, (MR_Integer) 1);
    }
    else
    {
      MR_Word Label_23;

      succeeded = ((MR_tag((MR_Word) CodeAddr_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        Label_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_21, (MR_Integer) 0))));
        ProcLabelStr_11 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(Label_23, (MR_Integer) 1);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.pragma_c_gen.make_proc_label_string\'/3", (MR_String) "code_addr");
          return;
        }
    }
    Var_14 = mercury__string__f_43_43_2_f_0(ProcLabelStr_11, (MR_String) "\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "#define\tMR_PROC_LABEL\t", Var_14);
    Var_33 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *ProcLabelHashDef_9 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_12));
    }
    Var_39 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *ProcLabelHashUndef_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_String) "#undef\tMR_PROC_LABEL\n"));
    }
  }
}

MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0(void)
{
  return (MR_String) "MercurySuccessIndicator";
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
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expr_5, (MR_Integer) 0))));
        MR_Word Var_27;
        MR_Word Var_28;

        EnvVar_8 = (MR_String) (Var_25);
        ll_backend__code_info__get_used_env_vars_2_p_0(STATE_VARIABLE_CI_0_19, &UsedEnvVars0_9);
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (EnvVar_8)), UsedEnvVars0_9, &UsedEnvVars_10);
        ll_backend__code_info__set_used_env_vars_3_p_0(UsedEnvVars_10, STATE_VARIABLE_CI_0_19, STATE_VARIABLE_CI_20);
        Var_28 = (MR_Word) (EnvVar_8);
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
        }
        {
          EnvVarRval_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EnvVarRval_11, 0) = ((MR_Box) (Var_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[4])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EnvVarRval_11));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3])));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExprA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_5, (MR_Integer) 0))));
        MR_Word RvalA_14;

        ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ExprA_13, &RvalA_14, STATE_VARIABLE_CI_0_19, STATE_VARIABLE_CI_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalA_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TraceOp_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ExprB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 2))));
        MR_Word RvalB_17;
        MR_Word Op_18;
        MR_Word STATE_VARIABLE_CI_21_21;
        MR_Word ExprA_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 1))));
        MR_Word RvalA_34;

        ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ExprA_33, &RvalA_34, STATE_VARIABLE_CI_0_19, &STATE_VARIABLE_CI_21_21);
        ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ExprB_16, &RvalB_17, STATE_VARIABLE_CI_21_21, STATE_VARIABLE_CI_20);
        switch (TraceOp_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Op_18 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 0:
            Op_18 = (MR_Word) ((MR_Unsigned) 4U);
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
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

    succeeded = ll_backend__pragma_c_gen____Unify____c_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    ll_backend__pragma_c_gen____Compare____c_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
