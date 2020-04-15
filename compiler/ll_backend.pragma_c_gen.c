/*
** Automatically generated from `pragma_c_gen.m'
** by the Mercury compiler,
** version rotd-2020-04-15
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
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(
  MR_Word CodeModel_15,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word Args_19,
  MR_Word HeadVar__2_38);

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
  MR_Word STATE_VARIABLE_CI_0_102,
  MR_Word * STATE_VARIABLE_CI_103,
  MR_Word STATE_VARIABLE_CLD_0_104,
  MR_Word * STATE_VARIABLE_CLD_105);

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
  MR_Word CanOptAwayUnnamedArgs_2,
  MR_Word * HeadVar__3_3,
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
ll_backend__pragma_c_gen__make_foreign_proc_decls_9_p_0(
  MR_Word CI_1,
  MR_Word CanOptAwayUnnamedArgs_2,
  MR_String Code_3,
  MR_Integer STATE_VARIABLE_TIIn_0_4,
  MR_Integer STATE_VARIABLE_TIOut_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decl_11_p_0(
  MR_Word CI_12,
  MR_Word CanOptAwayUnnamedArgs_13,
  MR_String Code_14,
  MR_Integer STATE_VARIABLE_TIIn_0_38,
  MR_Integer * STATE_VARIABLE_TIIn_39,
  MR_Integer STATE_VARIABLE_TIOut_0_40,
  MR_Integer * STATE_VARIABLE_TIOut_41,
  MR_Word Arg_17,
  MR_Word * Decls_18,
  MR_Word * TICopyIns_19,
  MR_Word * TICopyOuts_20);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__is_comp_gen_type_info_arg_3_p_0(
  MR_Word CI_4,
  MR_Word Var_5,
  MR_String ArgName_6);

static MR_Word MR_CALL 
ll_backend__pragma_c_gen__var_should_be_passed_3_f_0(
  MR_Word CanOptAwayUnnamedArgs_5,
  MR_Word Var_6,
  MR_Word MaybeName_7);

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
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(
  MR_Word CodeModel_15,
  MR_Word HeadVar__2_46)
{
  {
    MR_bool succeeded = (CodeModel_15 == HeadVar__2_46);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[0]), ((MR_Box) (ExtraArgs_20)), ((MR_Box) (HeadVar__2_42)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word Args_19,
  MR_Word HeadVar__2_38)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_1[0]), ((MR_Box) (Args_19)), ((MR_Box) (HeadVar__2_38)));
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

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_String C_Code_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaImpl_22, (MR_Integer) 0))));
    MR_Word Context_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaImpl_22, (MR_Integer) 1))));

    if ((MaybeTraceRuntimeCond_21 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(CodeModel_15, Attributes_16, PredId_17, ProcId_18, Args_19, ExtraArgs_20, C_Code_27, Context_28, GoalInfo_23, (MR_Integer) 1, Code_24, STATE_VARIABLE_CI_0_31, STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_0_33, STATE_VARIABLE_CLD_34);
    else
    {
      MR_Word TraceRuntimeCond_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceRuntimeCond_21, (MR_Integer) 0))));
      MR_Word Var_35;
      MR_Word Var_39;
      MR_Word Var_43;
      MR_Word CondRval_62;
      MR_Word SuccessLabel_63;
      MR_Word BeforeFailure_64;
      MR_Word FailCode_65;
      MR_Word CondCode_66;
      MR_Word SuccessLabelCode_67;
      MR_Word STATE_VARIABLE_CI_21_68;
      MR_Word STATE_VARIABLE_CI_22_69;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_79;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Args_19));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "args runtime cond");
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ExtraArgs_20));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "extra args runtime cond");
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (CodeModel_15));
        MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "non-semi runtime cond");
      ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(TraceRuntimeCond_30, &CondRval_62, STATE_VARIABLE_CI_0_31, &STATE_VARIABLE_CI_21_68);
      ll_backend__code_info__get_next_label_3_p_0(&SuccessLabel_63, STATE_VARIABLE_CI_21_68, &STATE_VARIABLE_CI_22_69);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_33, &BeforeFailure_64);
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_65, STATE_VARIABLE_CI_22_69, STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_0_33);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_64, *STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_34);
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (SuccessLabel_63));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (CondRval_62));
        MR_hl_field(MR_mktag(3), Var_73, 2) = ((MR_Box) (Var_74));
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) ((MR_String) "environment variable tests"));
      }
      CondCode_66 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_72)));
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (SuccessLabel_63));
      }
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) ((MR_String) "environment variable tests successful"));
      }
      SuccessLabelCode_67 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_76)));
      Var_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_65, SuccessLabelCode_67);
      *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CondCode_66, Var_79);
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
  MR_Word STATE_VARIABLE_CI_0_102,
  MR_Word * STATE_VARIABLE_CI_103,
  MR_Word STATE_VARIABLE_CLD_0_104,
  MR_Word * STATE_VARIABLE_CLD_105)
{
  {
    MR_bool succeeded;
    MR_Word ArgInfos_29;
    MR_Word OrigCArgs_30;
    MR_Word ModuleInfo_31;
    MR_Word ExtraCArgs_32;
    MR_Word CArgs_33;
    MR_Word InCArgs_34;
    MR_Word OutCArgs_35;
    MR_Word PostDeaths_36;
    MR_Word DeadVars0_37;
    MR_Word DeadVars_38;
    MR_Word MayCallMercury_39;
    MR_Word SaveVarsCode_40;
    MR_Word InputDescs_44;
    MR_Word InputVarsCode_45;
    MR_Word Decls_46;
    MR_Word TICopyIns_47;
    MR_Word TICopyOuts_48;
    MR_Word AllocIdHashDefine_49;
    MR_Word AllocIdHashUndef_50;
    MR_Word CallerPredId_51;
    MR_Integer CallerProcId_52;
    MR_Word ProcLabelHashDefine_53;
    MR_Word ProcLabelHashUndef_54;
    MR_Word InputComp_55;
    MR_String TICopyInStr_56;
    MR_String TICopyOutStr_57;
    MR_Word TICopyInComp_58;
    MR_Word TICopyOutComp_59;
    MR_Word SaveRegsComp_60;
    MR_Word ThreadSafe_61;
    MR_Word ObtainLock_62;
    MR_Word ReleaseLock_63;
    MR_Word AffectsLiveness_69;
    MR_Word C_Code_Comp_70;
    MR_Word Detism_71;
    MR_Word CheckSuccess_Comp_72;
    MR_Word MaybeFailLabel_73;
    MR_Word DefSuccessComp_75;
    MR_Word UndefSuccessComp_76;
    MR_Word RestoreRegsComp_77;
    MR_Word ExprnOpts_80;
    MR_Word UseFloatRegs_81;
    MR_Word FloatRegType_82;
    MR_Word Regs_83;
    MR_Word OutputDescs_84;
    MR_Word OutputComp_85;
    MR_Word Components_86;
    MR_Word MaybeMayDupl_87;
    MR_Word MayDupl_88;
    MR_Word ExtraAttributes_91;
    MR_Word RefersToLLDSSTack_92;
    MR_Word PragmaCCode_93;
    MR_Word FailureCode_101;
    MR_Word STATE_VARIABLE_CI_106_106;
    MR_Word STATE_VARIABLE_CLD_107_107;
    MR_Word STATE_VARIABLE_CLD_108_108;
    MR_Word STATE_VARIABLE_CLD_109_109;
    MR_Word STATE_VARIABLE_CI_112_112;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word STATE_VARIABLE_CI_167_167;
    MR_Word STATE_VARIABLE_CLD_199_199;
    MR_Word STATE_VARIABLE_CLD_200_200;
    MR_Word STATE_VARIABLE_CLD_201_201;
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
    MR_Word Var_214;
    MR_Word Var_215;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_241;
    MR_Word Var_242;

    ArgInfos_29 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(STATE_VARIABLE_CI_0_102, PredId_18, ProcId_19);
    ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(Args_20, ArgInfos_29, &OrigCArgs_30);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_102, &ModuleInfo_31);
    ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(ExtraArgs_21, ModuleInfo_31, ArgInfos_29, &ExtraCArgs_32);
    mercury__list__append_3_p_1((MR_Word) (&ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0), OrigCArgs_30, ExtraCArgs_32, &CArgs_33);
    ll_backend__pragma_c_gen__foreign_proc_select_in_out_args_3_p_0(CArgs_33, &InCArgs_34, &OutCArgs_35);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_24, &PostDeaths_36);
    DeadVars0_37 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(InCArgs_34, PostDeaths_36, DeadVars0_37, &DeadVars_38);
    MayCallMercury_39 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_17);
    switch (MayCallMercury_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word OutVars_41;
          MR_Word OutVarsSet_42;
          MR_Word Var_43;

          ll_backend__code_info__succip_is_used_2_p_0(STATE_VARIABLE_CI_0_102, &STATE_VARIABLE_CI_106_106);
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(OutCArgs_35, &OutVars_41);
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_41, &OutVarsSet_42);
          ll_backend__code_loc_dep__save_variables_6_p_0(OutVarsSet_42, &Var_43, &SaveVarsCode_40, STATE_VARIABLE_CI_106_106, STATE_VARIABLE_CLD_0_104, &STATE_VARIABLE_CLD_107_107);
        }
        break;
      case (MR_Integer) 1:
        {
          SaveVarsCode_40 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CI_106_106 = STATE_VARIABLE_CI_0_102;
          STATE_VARIABLE_CLD_107_107 = STATE_VARIABLE_CLD_0_104;
        }
        break;
    }
    ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(InCArgs_34, CanOptAwayUnnamedArgs_25, &InputDescs_44, &InputVarsCode_45, STATE_VARIABLE_CI_106_106, STATE_VARIABLE_CLD_107_107, &STATE_VARIABLE_CLD_108_108);
    ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(DeadVars_38, STATE_VARIABLE_CLD_108_108, &STATE_VARIABLE_CLD_109_109);
    ll_backend__pragma_c_gen__make_foreign_proc_decls_9_p_0(STATE_VARIABLE_CI_106_106, CanOptAwayUnnamedArgs_25, C_Code_22, (MR_Integer) 1, (MR_Integer) 1, CArgs_33, &Decls_46, &TICopyIns_47, &TICopyOuts_48);
    ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(C_Code_22, Context_23, &AllocIdHashDefine_49, &AllocIdHashUndef_50, STATE_VARIABLE_CI_106_106, &STATE_VARIABLE_CI_112_112);
    ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_112_112, &CallerPredId_51);
    ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_112_112, &CallerProcId_52);
    ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(ModuleInfo_31, CallerPredId_51, CallerProcId_52, &ProcLabelHashDefine_53, &ProcLabelHashUndef_54);
    {
      InputComp_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InputComp_55, 0) = ((MR_Box) (InputDescs_44));
    }
    mercury__string__append_list_2_p_0(TICopyIns_47, &TICopyInStr_56);
    mercury__string__append_list_2_p_0(TICopyOuts_48, &TICopyOutStr_57);
    Var_116 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
    }
    {
      TICopyInComp_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TICopyInComp_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), TICopyInComp_58, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), TICopyInComp_58, 2) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(3), TICopyInComp_58, 3) = ((MR_Box) (TICopyInStr_56));
    }
    Var_120 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
    }
    {
      TICopyOutComp_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TICopyOutComp_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), TICopyOutComp_59, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), TICopyOutComp_59, 2) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(3), TICopyOutComp_59, 3) = ((MR_Box) (TICopyOutStr_57));
    }
    ThreadSafe_61 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes_17);
    switch (ThreadSafe_61) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.generate_ordinary_foreign_proc_code\'/15", (MR_String) "maybe_thread_safe");
          return;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word PredInfo_64;
          MR_String Name_65;
          MR_String MangledName_66;
          MR_String ObtainLockStr_67;
          MR_String ReleaseLockStr_68;
          MR_String Var_132;
          MR_Word Var_136;
          MR_Word Var_137;
          MR_String Var_139;
          MR_Word Var_143;
          MR_Word Var_144;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_31, PredId_18, &PredInfo_64);
          Name_65 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_64);
          MangledName_66 = backend_libs__c_util__quote_string_1_f_0(Name_65);
          Var_132 = mercury__string__f_43_43_2_f_0(MangledName_66, (MR_String) "\");\n");
          ObtainLockStr_67 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\"", Var_132);
          Var_137 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
          }
          {
            ObtainLock_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 2) = ((MR_Box) (Var_136));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 3) = ((MR_Box) (ObtainLockStr_67));
          }
          Var_139 = mercury__string__f_43_43_2_f_0(MangledName_66, (MR_String) "\");\n");
          ReleaseLockStr_68 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\"", Var_139);
          Var_144 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
          }
          {
            ReleaseLock_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 2) = ((MR_Box) (Var_143));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 3) = ((MR_Box) (ReleaseLockStr_68));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_149;
          MR_Word Var_150;
          MR_Word Var_154;
          MR_Word Var_155;

          Var_150 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
          }
          {
            ObtainLock_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 2) = ((MR_Box) (Var_149));
            MR_hl_field(MR_mktag(3), ObtainLock_62, 3) = ((MR_Box) ((MR_String) ""));
          }
          Var_155 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
          }
          {
            ReleaseLock_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 2) = ((MR_Box) (Var_154));
            MR_hl_field(MR_mktag(3), ReleaseLock_63, 3) = ((MR_Box) ((MR_String) ""));
          }
        }
        break;
    }
    AffectsLiveness_69 = parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(Attributes_17);
    {
      C_Code_Comp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), C_Code_Comp_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), C_Code_Comp_70, 1) = ((MR_Box) (Context_23));
      MR_hl_field(MR_mktag(3), C_Code_Comp_70, 2) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_69));
      MR_hl_field(MR_mktag(3), C_Code_Comp_70, 3) = ((MR_Box) (C_Code_22));
    }
    Detism_71 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_24);
    switch (CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word Var_159;
          MR_Word Var_160;
          MR_Word Var_164;
          MR_Word Var_165;

          CheckSuccess_Comp_72 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeFailLabel_73 = (MR_Word) ((MR_Unsigned) 0U);
          Var_160 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
          }
          {
            DefSuccessComp_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 2) = ((MR_Box) (Var_159));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 3) = ((MR_Box) ((MR_String) ""));
          }
          Var_165 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
          }
          {
            UndefSuccessComp_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 2) = ((MR_Box) (Var_164));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 3) = ((MR_Box) ((MR_String) ""));
          }
          STATE_VARIABLE_CI_167_167 = STATE_VARIABLE_CI_112_112;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_170;
          MR_Word Var_171;
          MR_String Var_172;
          MR_String Var_174;
          MR_String Var_175;
          MR_String Var_176;
          MR_String Var_178;
          MR_String Var_180;
          MR_String Var_182;
          MR_String Var_183;
          MR_Word Var_187;
          MR_Word Var_188;

          succeeded = (Detism_71 == (MR_Integer) 7);
          if (succeeded)
          {
            CheckSuccess_Comp_72 = (MR_Word) ((MR_Unsigned) 0U);
            MaybeFailLabel_73 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_CI_167_167 = STATE_VARIABLE_CI_112_112;
          }
          else
          {
            MR_Word FailLabel_74;

            ll_backend__code_info__get_next_label_3_p_0(&FailLabel_74, STATE_VARIABLE_CI_112_112, &STATE_VARIABLE_CI_167_167);
            {
              CheckSuccess_Comp_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CheckSuccess_Comp_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), CheckSuccess_Comp_72, 1) = ((MR_Box) (FailLabel_74));
            }
            {
              MaybeFailLabel_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeFailLabel_73, 0) = ((MR_Box) (FailLabel_74));
            }
          }
          Var_171 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
          }
          Var_175 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          Var_183 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          Var_182 = mercury__string__f_43_43_2_f_0(Var_183, (MR_String) "\n");
          Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "#define SUCCESS_INDICATOR ", Var_182);
          Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "#undef SUCCESS_INDICATOR\n", Var_180);
          Var_176 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_178);
          Var_174 = mercury__string__f_43_43_2_f_0(Var_175, Var_176);
          Var_172 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", Var_174);
          {
            DefSuccessComp_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 2) = ((MR_Box) (Var_170));
            MR_hl_field(MR_mktag(3), DefSuccessComp_75, 3) = ((MR_Box) (Var_172));
          }
          Var_188 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (Var_188));
          }
          {
            UndefSuccessComp_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 2) = ((MR_Box) (Var_187));
            MR_hl_field(MR_mktag(3), UndefSuccessComp_76, 3) = ((MR_Box) ((MR_String) "#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n"));
          }
        }
        break;
    }
    switch (MayCallMercury_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InstMapDelta_78;
          MR_Word OkToDelete_79;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word Var_194;
          MR_Word Var_195;

          Var_124 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
          }
          {
            SaveRegsComp_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 2) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 3) = ((MR_Box) ((MR_String) "\tMR_save_registers();\n"));
          }
          Var_195 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (Var_195));
          }
          {
            RestoreRegsComp_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_77, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_77, 2) = ((MR_Box) (Var_194));
            MR_hl_field(MR_mktag(3), RestoreRegsComp_77, 3) = ((MR_Box) ((MR_String) "#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n"));
          }
          InstMapDelta_78 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_24);
          succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_78);
          if (succeeded)
            OkToDelete_79 = (MR_Integer) 0;
          else
            OkToDelete_79 = (MR_Integer) 1;
          ll_backend__code_loc_dep__clear_all_registers_3_p_0(OkToDelete_79, STATE_VARIABLE_CLD_109_109, &STATE_VARIABLE_CLD_199_199);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_128;
          MR_Word Var_129;

          Var_129 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          {
            Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
          }
          {
            SaveRegsComp_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 2) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(3), SaveRegsComp_60, 3) = ((MR_Box) ((MR_String) ""));
          }
          RestoreRegsComp_77 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_CLD_199_199 = STATE_VARIABLE_CLD_109_109;
        }
        break;
    }
    ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_167_167, &ExprnOpts_80);
    UseFloatRegs_81 = ll_backend__llds__get_float_registers_1_f_0(ExprnOpts_80);
    switch (UseFloatRegs_81) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        FloatRegType_82 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        FloatRegType_82 = (MR_Integer) 1;
        break;
    }
    ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(FloatRegType_82, OutCArgs_35, &Regs_83, STATE_VARIABLE_CLD_199_199, &STATE_VARIABLE_CLD_200_200);
    ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(OutCArgs_35, Regs_83, CanOptAwayUnnamedArgs_25, &OutputDescs_84, STATE_VARIABLE_CI_167_167, STATE_VARIABLE_CLD_200_200, &STATE_VARIABLE_CLD_201_201);
    {
      OutputComp_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OutputComp_85, 0) = ((MR_Box) (OutputDescs_84));
    }
    {
      Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (ProcLabelHashDefine_53));
      MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (AllocIdHashDefine_49));
    }
    {
      Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (ProcLabelHashUndef_54));
      MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (AllocIdHashUndef_50));
    }
    {
      Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (UndefSuccessComp_76));
      MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (Var_215));
    }
    {
      Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (OutputComp_85));
      MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (Var_214));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (TICopyOutComp_59));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_213));
    }
    {
      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (RestoreRegsComp_77));
      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_212));
    }
    {
      Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (CheckSuccess_Comp_72));
      MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
    }
    {
      Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (ReleaseLock_63));
      MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_210));
    }
    {
      Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (C_Code_Comp_70));
      MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_209));
    }
    {
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (ObtainLock_62));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_208));
    }
    {
      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (SaveRegsComp_60));
      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_207));
    }
    {
      Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (TICopyInComp_58));
      MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) (Var_206));
    }
    {
      Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (InputComp_55));
      MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_205));
    }
    {
      Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (DefSuccessComp_75));
      MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_204));
    }
    Components_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0), Var_202, Var_203);
    MaybeMayDupl_87 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attributes_17);
    if ((MaybeMayDupl_87 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ExtraArgs_21 == (MR_Word) ((MR_Unsigned) 0U)))
        MayDupl_88 = (MR_Integer) 0;
      else
        MayDupl_88 = (MR_Integer) 1;
    else
      MayDupl_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDupl_87, (MR_Integer) 0))));
    ExtraAttributes_91 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attributes_17);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0), ((MR_Box) ((MR_Unsigned) 0U)), ExtraAttributes_91);
    if (succeeded)
      RefersToLLDSSTack_92 = (MR_Integer) 1;
    else
      RefersToLLDSSTack_92 = (MR_Integer) 0;
    {
      Var_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_218, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_218, 1) = ((MR_Box) (Decls_46));
      MR_hl_field(MR_mktag(3), Var_218, 2) = ((MR_Box) (Components_86));
      MR_hl_field(MR_mktag(3), Var_218, 3) = (MR_Box) ((MR_Unsigned) (MayCallMercury_39));
      MR_hl_field(MR_mktag(3), Var_218, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_218, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_218, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_218, 7) = ((MR_Box) (MaybeFailLabel_73));
      MR_hl_field(MR_mktag(3), Var_218, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_218, 9) = (MR_Box) (((((MR_Unsigned) (RefersToLLDSSTack_92) << 1)) | (MR_Unsigned) (MayDupl_88)));
    }
    {
      Var_217 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_217, 0) = ((MR_Box) (Var_218));
      MR_hl_field(MR_mktag(0), Var_217, 1) = ((MR_Box) ((MR_String) "foreign_proc inclusion"));
    }
    PragmaCCode_93 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_217)));
    if ((MaybeFailLabel_73 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (Detism_71 == (MR_Integer) 7);
      if (succeeded)
      {
        MR_Word BeforeFailure_243;

        ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_201_201, &BeforeFailure_243);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&FailureCode_101, STATE_VARIABLE_CI_167_167, STATE_VARIABLE_CI_103, STATE_VARIABLE_CLD_201_201);
        ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_243, *STATE_VARIABLE_CI_103, STATE_VARIABLE_CLD_105);
      }
      else
      {
        FailureCode_101 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_105 = STATE_VARIABLE_CLD_201_201;
        *STATE_VARIABLE_CI_103 = STATE_VARIABLE_CI_167_167;
      }
    }
    else
    {
      MR_Word TheFailLabel_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailLabel_73, (MR_Integer) 0))));
      MR_Word SkipLabel_95;
      MR_Word BeforeFailure_96;
      MR_Word FailCode_97;
      MR_Word GotoSkipLabelCode_98;
      MR_Word SkipLabelCode_99;
      MR_Word FailLabelCode_100;
      MR_Word STATE_VARIABLE_CI_226_226;
      MR_Word Var_229;
      MR_Word Var_230;
      MR_Word Var_231;
      MR_Word Var_233;
      MR_Word Var_234;
      MR_Word Var_236;
      MR_Word Var_237;
      MR_Word Var_239;
      MR_Word Var_240;

      ll_backend__code_info__get_next_label_3_p_0(&SkipLabel_95, STATE_VARIABLE_CI_167_167, &STATE_VARIABLE_CI_226_226);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_201_201, &BeforeFailure_96);
      ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_97, STATE_VARIABLE_CI_226_226, STATE_VARIABLE_CI_103, STATE_VARIABLE_CLD_201_201);
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_96, *STATE_VARIABLE_CI_103, STATE_VARIABLE_CLD_105);
      {
        Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_231, 0) = ((MR_Box) (SkipLabel_95));
      }
      {
        Var_230 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_230, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_230, 1) = ((MR_Box) (Var_231));
      }
      {
        Var_229 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_229, 0) = ((MR_Box) (Var_230));
        MR_hl_field(MR_mktag(0), Var_229, 1) = ((MR_Box) ((MR_String) "Skip past failure code"));
      }
      GotoSkipLabelCode_98 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_229)));
      {
        Var_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_234, 1) = ((MR_Box) (SkipLabel_95));
      }
      {
        Var_233 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_233, 0) = ((MR_Box) (Var_234));
        MR_hl_field(MR_mktag(0), Var_233, 1) = ((MR_Box) ((MR_String) ""));
      }
      SkipLabelCode_99 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_233)));
      {
        Var_237 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_237, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_237, 1) = ((MR_Box) (TheFailLabel_94));
      }
      {
        Var_236 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_236, 0) = ((MR_Box) (Var_237));
        MR_hl_field(MR_mktag(0), Var_236, 1) = ((MR_Box) ((MR_String) ""));
      }
      FailLabelCode_100 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_236)));
      Var_240 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_97, SkipLabelCode_99);
      Var_239 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailLabelCode_100, Var_240);
      FailureCode_101 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GotoSkipLabelCode_98, Var_239);
    }
    Var_242 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PragmaCCode_93, FailureCode_101);
    Var_241 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InputVarsCode_45, Var_242);
    *Code_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveVarsCode_40, Var_241);
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

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Reg_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Regs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word OutputsTail_41;
        MR_Word Var_42;
        MR_Word MaybeArgName_43;
        MR_Word OrigType_44;
        MR_Word BoxPolicy_45;
        MR_Word STATE_VARIABLE_CLD_56_56;
        MR_Word STATE_VARIABLE_CLD_57_57;

        ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(Var_59, Regs_36, CanOptAwayUnnamedArgs_3, &OutputsTail_41, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_56_56);
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
        MaybeArgName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 1))));
        OrigType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 2))));
        BoxPolicy_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 3))) & (MR_Integer) 1);
        ll_backend__code_loc_dep__release_reg_3_p_0(Reg_35, STATE_VARIABLE_CLD_56_56, &STATE_VARIABLE_CLD_57_57);
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_57_57, Var_42);
        if (succeeded)
        {
          MR_Word ModuleInfo_47;
          MR_Word MaybeForeign_48;
          MR_Word TypeTable_64;
          MR_Word MaybeC_68;
          MR_Word TypeCtor_65;
          MR_Word TypeDefn_66;
          MR_Word TypeBody_67;
          MR_Word Var_76;
          MR_String Name_85;
          MR_Char Var_88;
          MR_String Var_86;

          ll_backend__code_loc_dep__set_var_location_4_p_0(Var_42, Reg_35, STATE_VARIABLE_CLD_57_57, STATE_VARIABLE_CLD_7);
          ll_backend__code_info__get_module_info_2_p_0(HeadVar__5_5, &ModuleInfo_47);
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_47, &TypeTable_64);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_44, &TypeCtor_65);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_64, TypeCtor_65, &TypeDefn_66);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_66, &TypeBody_67);
              succeeded = ((MR_tag((MR_Word) TypeBody_67)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_76 = (MR_Word) ((MR_Word) (TypeBody_67));
                MaybeC_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            if ((MaybeC_68 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                return;
              }
            else
            {
              MR_Word Data_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_68, (MR_Integer) 0))));
              MR_String Name_73;
              MR_Word Assertions_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_72, (MR_Integer) 2))));
              MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_72, (MR_Integer) 0))));
              MR_Word Var_80;

              Name_73 = (MR_String) (Var_79);
              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Name_73));
                MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Assertions_75));
              }
              {
                MaybeForeign_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeForeign_48, 0) = ((MR_Box) (Var_80));
              }
            }
          else
            MaybeForeign_48 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (MaybeArgName_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Name_85 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgName_43, (MR_Integer) 0))));
            Var_88 = (MR_Char) 95;
            succeeded = mercury__string__first_char_3_p_2(Name_85, Var_88, &Var_86);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word VarType_51;
            MR_Word IsDummy_52;
            MR_Word PragmaCOutput_53;

            VarType_51 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_42);
            IsDummy_52 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_47, VarType_51);
            {
              PragmaCOutput_53 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaCOutput_53, 0) = ((MR_Box) (Reg_35));
              MR_hl_field(MR_mktag(0), PragmaCOutput_53, 1) = ((MR_Box) (VarType_51));
              MR_hl_field(MR_mktag(0), PragmaCOutput_53, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_52));
              MR_hl_field(MR_mktag(0), PragmaCOutput_53, 3) = ((MR_Box) (OrigType_44));
              MR_hl_field(MR_mktag(0), PragmaCOutput_53, 4) = ((MR_Box) (Name_85));
              MR_hl_field(MR_mktag(0), PragmaCOutput_53, 5) = ((MR_Box) (MaybeForeign_48));
              MR_hl_field(MR_mktag(0), PragmaCOutput_53, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaCOutput_53));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputsTail_41));
            }
          }
          else
            switch (CanOptAwayUnnamedArgs_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_90;
                  MR_Integer Var_91;
                  MR_String Name_93;
                  MR_Word VarType_94;
                  MR_Word IsDummy_95;
                  MR_Word PragmaCOutput_96;

                  Var_91 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_42);
                  Var_90 = mercury__string__int_to_string_1_f_0(Var_91);
                  Name_93 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", Var_90);
                  VarType_94 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_42);
                  IsDummy_95 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_47, VarType_94);
                  {
                    PragmaCOutput_96 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PragmaCOutput_96, 0) = ((MR_Box) (Reg_35));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_96, 1) = ((MR_Box) (VarType_94));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_96, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_95));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_96, 3) = ((MR_Box) (OrigType_44));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_96, 4) = ((MR_Box) (Name_93));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_96, 5) = ((MR_Box) (MaybeForeign_48));
                    MR_hl_field(MR_mktag(0), PragmaCOutput_96, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_45));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaCOutput_96));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputsTail_41));
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__4_4 = OutputsTail_41;
                break;
            }
        }
        else
        {
          *HeadVar__4_4 = OutputsTail_41;
          *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_57_57;
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
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CanOptAwayUnnamedArgs_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
    }
    else
    {
      MR_Word Arg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 0))));
      MR_Word MaybeArgName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 1))));
      MR_Word OrigType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 2))));
      MR_Word BoxPolicy_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_String Name_50;
      MR_Char Var_53;
      MR_String Var_51;

      succeeded = (MaybeArgName_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Name_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgName_21, (MR_Integer) 0))));
        Var_53 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(Name_50, Var_53, &Var_51);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word ModuleInfo_27;
        MR_Word VarType_28;
        MR_Word IsDummy_29;
        MR_Word HeadCode_30;
        MR_Word Rval_31;
        MR_Word MaybeForeign_32;
        MR_Word HeadInput_33;
        MR_Word TailInputs_34;
        MR_Word TailCode_35;
        MR_Word STATE_VARIABLE_CLD_41_41;
        MR_Word TypeTable_61;
        MR_Word MaybeC_65;
        MR_Word TypeCtor_62;
        MR_Word TypeDefn_63;
        MR_Word TypeBody_64;
        MR_Word Var_73;

        ll_backend__code_info__get_module_info_2_p_0(HeadVar__5_5, &ModuleInfo_27);
        VarType_28 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_20);
        IsDummy_29 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_27, VarType_28);
        switch (IsDummy_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              HeadCode_30 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              Rval_31 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3]));
              STATE_VARIABLE_CLD_41_41 = STATE_VARIABLE_CLD_0_6;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__code_loc_dep__produce_variable_6_p_0(Var_20, &HeadCode_30, &Rval_31, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_41_41);
            break;
        }
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_27, &TypeTable_61);
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_22, &TypeCtor_62);
        if (succeeded)
        {
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_61, TypeCtor_62, &TypeDefn_63);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_63, &TypeBody_64);
            succeeded = ((MR_tag((MR_Word) TypeBody_64)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_73 = (MR_Word) ((MR_Word) (TypeBody_64));
              MaybeC_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          if ((MaybeC_65 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
              return;
            }
          else
          {
            MR_Word Data_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_65, (MR_Integer) 0))));
            MR_String Name_70;
            MR_Word Assertions_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_69, (MR_Integer) 2))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_69, (MR_Integer) 0))));
            MR_Word Var_77;

            Name_70 = (MR_String) (Var_76);
            {
              Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Name_70));
              MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (Assertions_72));
            }
            {
              MaybeForeign_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeForeign_32, 0) = ((MR_Box) (Var_77));
            }
          }
        else
          MaybeForeign_32 = (MR_Word) ((MR_Unsigned) 0U);
        {
          HeadInput_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadInput_33, 0) = ((MR_Box) (Name_50));
          MR_hl_field(MR_mktag(0), HeadInput_33, 1) = ((MR_Box) (VarType_28));
          MR_hl_field(MR_mktag(0), HeadInput_33, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_29));
          MR_hl_field(MR_mktag(0), HeadInput_33, 3) = ((MR_Box) (OrigType_22));
          MR_hl_field(MR_mktag(0), HeadInput_33, 4) = ((MR_Box) (Rval_31));
          MR_hl_field(MR_mktag(0), HeadInput_33, 5) = ((MR_Box) (MaybeForeign_32));
          MR_hl_field(MR_mktag(0), HeadInput_33, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_23));
        }
        ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(Args_14, CanOptAwayUnnamedArgs_2, &TailInputs_34, &TailCode_35, HeadVar__5_5, STATE_VARIABLE_CLD_41_41, STATE_VARIABLE_CLD_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInput_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInputs_34));
        }
        *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_30, TailCode_35);
      }
      else
        switch (CanOptAwayUnnamedArgs_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_55;
              MR_Integer Var_56;
              MR_String Name_127;
              MR_Word ModuleInfo_128;
              MR_Word VarType_129;
              MR_Word IsDummy_130;
              MR_Word HeadCode_131;
              MR_Word Rval_132;
              MR_Word MaybeForeign_133;
              MR_Word HeadInput_134;
              MR_Word TailInputs_135;
              MR_Word TailCode_136;
              MR_Word STATE_VARIABLE_CLD_41_139;
              MR_Word TypeTable_142;
              MR_Word MaybeC_114;
              MR_Word TypeCtor_87;
              MR_Word TypeDefn_88;
              MR_Word TypeBody_89;
              MR_Word Var_93;

              Var_56 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20);
              Var_55 = mercury__string__int_to_string_1_f_0(Var_56);
              Name_127 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", Var_55);
              ll_backend__code_info__get_module_info_2_p_0(HeadVar__5_5, &ModuleInfo_128);
              VarType_129 = ll_backend__code_info__variable_type_2_f_0(HeadVar__5_5, Var_20);
              IsDummy_130 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_128, VarType_129);
              switch (IsDummy_130) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    HeadCode_131 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    Rval_132 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3]));
                    STATE_VARIABLE_CLD_41_139 = STATE_VARIABLE_CLD_0_6;
                  }
                  break;
                case (MR_Integer) 1:
                  ll_backend__code_loc_dep__produce_variable_6_p_0(Var_20, &HeadCode_131, &Rval_132, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_41_139);
                  break;
              }
              hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_128, &TypeTable_142);
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(OrigType_22, &TypeCtor_87);
              if (succeeded)
              {
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_142, TypeCtor_87, &TypeDefn_88);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_88, &TypeBody_89);
                  succeeded = ((MR_tag((MR_Word) TypeBody_89)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_93 = (MR_Word) ((MR_Word) (TypeBody_89));
                    MaybeC_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_93, (MR_Integer) 0))));
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                if ((MaybeC_114 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                    return;
                  }
                else
                {
                  MR_Word Data_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_114, (MR_Integer) 0))));
                  MR_String Name_98;
                  MR_Word Assertions_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_97, (MR_Integer) 2))));
                  MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_97, (MR_Integer) 0))));
                  MR_Word Var_102;

                  Name_98 = (MR_String) (Var_101);
                  {
                    Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Name_98));
                    MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (Assertions_100));
                  }
                  {
                    MaybeForeign_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeForeign_133, 0) = ((MR_Box) (Var_102));
                  }
                }
              else
                MaybeForeign_133 = (MR_Word) ((MR_Unsigned) 0U);
              {
                HeadInput_134 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadInput_134, 0) = ((MR_Box) (Name_127));
                MR_hl_field(MR_mktag(0), HeadInput_134, 1) = ((MR_Box) (VarType_129));
                MR_hl_field(MR_mktag(0), HeadInput_134, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_130));
                MR_hl_field(MR_mktag(0), HeadInput_134, 3) = ((MR_Box) (OrigType_22));
                MR_hl_field(MR_mktag(0), HeadInput_134, 4) = ((MR_Box) (Rval_132));
                MR_hl_field(MR_mktag(0), HeadInput_134, 5) = ((MR_Box) (MaybeForeign_133));
                MR_hl_field(MR_mktag(0), HeadInput_134, 6) = (MR_Box) ((MR_Unsigned) (BoxPolicy_23));
              }
              ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(Args_14, CanOptAwayUnnamedArgs_2, &TailInputs_135, &TailCode_136, HeadVar__5_5, STATE_VARIABLE_CLD_41_139, STATE_VARIABLE_CLD_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInput_134));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInputs_135));
              }
              *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_131, TailCode_136);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Args_14;

              // direct tailcall eliminated
              ;
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
ll_backend__pragma_c_gen__make_foreign_proc_decls_9_p_0(
  MR_Word CI_1,
  MR_Word CanOptAwayUnnamedArgs_2,
  MR_String Code_3,
  MR_Integer STATE_VARIABLE_TIIn_0_4,
  MR_Integer STATE_VARIABLE_TIOut_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Arg_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word HeadDecls_25;
    MR_Word HeadTICopyIns_26;
    MR_Word HeadTICopyOuts_27;
    MR_Word TailDecls_28;
    MR_Word TailTICopyIns_29;
    MR_Word TailTICopyOuts_30;
    MR_Integer STATE_VARIABLE_TIIn_33_33;
    MR_Integer STATE_VARIABLE_TIOut_34_34;

    ll_backend__pragma_c_gen__make_foreign_proc_decl_11_p_0(CI_1, CanOptAwayUnnamedArgs_2, Code_3, STATE_VARIABLE_TIIn_0_4, &STATE_VARIABLE_TIIn_33_33, STATE_VARIABLE_TIOut_0_5, &STATE_VARIABLE_TIOut_34_34, Arg_20, &HeadDecls_25, &HeadTICopyIns_26, &HeadTICopyOuts_27);
    ll_backend__pragma_c_gen__make_foreign_proc_decls_9_p_0(CI_1, CanOptAwayUnnamedArgs_2, Code_3, STATE_VARIABLE_TIIn_33_33, STATE_VARIABLE_TIOut_34_34, Args_21, &TailDecls_28, &TailTICopyIns_29, &TailTICopyOuts_30);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_decl_0), HeadDecls_25, TailDecls_28);
    *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadTICopyIns_26, TailTICopyIns_29);
    *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadTICopyOuts_27, TailTICopyOuts_30);
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decl_11_p_0(
  MR_Word CI_12,
  MR_Word CanOptAwayUnnamedArgs_13,
  MR_String Code_14,
  MR_Integer STATE_VARIABLE_TIIn_0_38,
  MR_Integer * STATE_VARIABLE_TIIn_39,
  MR_Integer STATE_VARIABLE_TIOut_0_40,
  MR_Integer * STATE_VARIABLE_TIOut_41,
  MR_Word Arg_17,
  MR_Word * Decls_18,
  MR_Word * TICopyIns_19,
  MR_Word * TICopyOuts_20)
{
  {
    MR_bool succeeded;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 0))));
    MR_Word MaybeArgName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 1))));
    MR_Word OrigType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 2))));
    MR_Word BoxPolicy_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 4))));
    MR_Word MaybeUseArgName_26;

    MaybeUseArgName_26 = ll_backend__pragma_c_gen__var_should_be_passed_3_f_0(CanOptAwayUnnamedArgs_13, Var_21, MaybeArgName_22);
    if ((MaybeUseArgName_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Decls_18 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TIIn_39 = STATE_VARIABLE_TIIn_0_38;
      *STATE_VARIABLE_TIOut_41 = STATE_VARIABLE_TIOut_0_40;
    }
    else
    {
      MR_String ArgName_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeUseArgName_26, (MR_Integer) 0))));
      MR_Word ModuleInfo_28;
      MR_String OrigTypeString_29;
      MR_Word ArgDecl_30;

      ll_backend__code_info__get_module_info_2_p_0(CI_12, &ModuleInfo_28);
      switch (BoxPolicy_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          OrigTypeString_29 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 0:
          OrigTypeString_29 = backend_libs__foreign__exported_type_to_c_string_2_f_0(ModuleInfo_28, OrigType_23);
          break;
      }
      {
        ArgDecl_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgDecl_30, 0) = ((MR_Box) (OrigType_23));
        MR_hl_field(MR_mktag(0), ArgDecl_30, 1) = ((MR_Box) (OrigTypeString_29));
        MR_hl_field(MR_mktag(0), ArgDecl_30, 2) = ((MR_Box) (ArgName_27));
      }
      succeeded = ll_backend__pragma_c_gen__is_comp_gen_type_info_arg_3_p_0(CI_12, Var_21, ArgName_27);
      if (succeeded)
      {
        MR_Word Mode_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgInfo_25, (MR_Integer) 1))) & (MR_Integer) 3);

        switch (Mode_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String SeqArgName_33;
              MR_String TICopyIn_34;
              MR_Word SeqArgDecl_37;
              MR_Word Var_75;
              MR_String Var_102;
              MR_String Var_111;
              MR_String Var_113;
              MR_String Var_114;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_2[1]), STATE_VARIABLE_TIIn_0_38, &Var_102);
              SeqArgName_33 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_In_", Var_102);
              *STATE_VARIABLE_TIIn_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIIn_0_38 + (MR_Unsigned) 1);
              Var_111 = mercury__string__f_43_43_2_f_0(ArgName_27, (MR_String) ";\n");
              Var_113 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_111);
              Var_114 = mercury__string__f_43_43_2_f_0(SeqArgName_33, Var_113);
              TICopyIn_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_114);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *TICopyIns_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TICopyIn_34));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_TIOut_41 = STATE_VARIABLE_TIOut_0_40;
              {
                SeqArgDecl_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SeqArgDecl_37, 0) = ((MR_Box) (OrigType_23));
                MR_hl_field(MR_mktag(0), SeqArgDecl_37, 1) = ((MR_Box) (OrigTypeString_29));
                MR_hl_field(MR_mktag(0), SeqArgDecl_37, 2) = ((MR_Box) (SeqArgName_33));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (SeqArgDecl_37));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Decls_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_75));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String TICopyOut_36;
              MR_String SeqArgName_78;
              MR_Word SeqArgDecl_79;
              MR_Word Var_80;
              MR_String Var_82;
              MR_Integer Var_35;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__pragma_c_gen_scalar_common_2[1]), STATE_VARIABLE_TIOut_0_40, &Var_82);
              SeqArgName_78 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_Out_", Var_82);
              *STATE_VARIABLE_TIOut_41 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIOut_0_40 + (MR_Unsigned) 1);
              succeeded = mercury__string__sub_string_search_3_p_0(Code_14, SeqArgName_78, &Var_35);
              if (succeeded)
              {
                MR_String Var_91;
                MR_String Var_93;
                MR_String Var_94;

                Var_91 = mercury__string__f_43_43_2_f_0(SeqArgName_78, (MR_String) ";\n");
                Var_93 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_91);
                Var_94 = mercury__string__f_43_43_2_f_0(ArgName_27, Var_93);
                TICopyOut_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_94);
              }
              else
              {
                MR_String Var_97;
                MR_String Var_99;
                MR_String Var_100;

                Var_97 = mercury__string__f_43_43_2_f_0(ArgName_27, (MR_String) ";\n");
                Var_99 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_97);
                Var_100 = mercury__string__f_43_43_2_f_0(SeqArgName_78, Var_99);
                TICopyOut_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_100);
              }
              *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *TICopyOuts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TICopyOut_36));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *STATE_VARIABLE_TIIn_39 = STATE_VARIABLE_TIIn_0_38;
              {
                SeqArgDecl_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SeqArgDecl_79, 0) = ((MR_Box) (OrigType_23));
                MR_hl_field(MR_mktag(0), SeqArgDecl_79, 1) = ((MR_Box) (OrigTypeString_29));
                MR_hl_field(MR_mktag(0), SeqArgDecl_79, 2) = ((MR_Box) (SeqArgName_78));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (SeqArgDecl_79));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Decls_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_80));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Decls_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
              *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_TIIn_39 = STATE_VARIABLE_TIIn_0_38;
              *STATE_VARIABLE_TIOut_41 = STATE_VARIABLE_TIOut_0_40;
            }
            break;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Decls_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgDecl_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
        *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_TIOut_41 = STATE_VARIABLE_TIOut_0_40;
        *STATE_VARIABLE_TIIn_39 = STATE_VARIABLE_TIIn_0_38;
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
ll_backend__pragma_c_gen__var_should_be_passed_3_f_0(
  MR_Word CanOptAwayUnnamedArgs_5,
  MR_Word Var_6,
  MR_Word MaybeName_7)
{
  {
    MR_bool succeeded = (MaybeName_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word MaybeUseName_8;
    MR_String Name_9;
    MR_Char Var_12;
    MR_String Var_10;

    if (succeeded)
    {
      Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeName_7, (MR_Integer) 0))));
      Var_12 = (MR_Char) 95;
      succeeded = mercury__string__first_char_3_p_2(Name_9, Var_12, &Var_10);
      succeeded = !(succeeded);
    }
    if (succeeded)
      MaybeUseName_8 = MaybeName_7;
    else
      switch (CanOptAwayUnnamedArgs_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String UseName_11;
            MR_String Var_14;
            MR_Integer Var_15;

            Var_15 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6);
            Var_14 = mercury__string__int_to_string_1_f_0(Var_15);
            UseName_11 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", Var_14);
            {
              MaybeUseName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeUseName_8, 0) = ((MR_Box) (UseName_11));
            }
          }
          break;
        case (MR_Integer) 1:
          MaybeUseName_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    return MaybeUseName_8;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 221, &ProfileMemory_13);
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
