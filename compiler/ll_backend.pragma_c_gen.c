/*
** Automatically generated from `pragma_c_gen.m'
** by the Mercury compiler,
** version rotd-2016-03-21
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module ll_backend.pragma_c_gen. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_49);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__381__1_2_p_0(
  MR_Word ll_backend__pragma_c_gen__Args_19,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39);

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5);

static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4);

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__Module_2,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5);

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8);

static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3);

static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
  MR_String ll_backend__pragma_c_gen__C_Code_7,
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);

static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
  MR_Word ll_backend__pragma_c_gen__PredId_7,
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10);

static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
  MR_Word ll_backend__pragma_c_gen__CodeModel_16,
  MR_Word ll_backend__pragma_c_gen__Attributes_17,
  MR_Word ll_backend__pragma_c_gen__PredId_18,
  MR_Integer ll_backend__pragma_c_gen__ProcId_19,
  MR_Word ll_backend__pragma_c_gen__Args_20,
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_21,
  MR_String ll_backend__pragma_c_gen__C_Code_22,
  MR_Word ll_backend__pragma_c_gen__Context_23,
  MR_Word ll_backend__pragma_c_gen__GoalInfo_24,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25,
  MR_Word * ll_backend__pragma_c_gen__Code_26,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);

static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
  MR_Word ll_backend__pragma_c_gen__Expr_5,
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
  MR_Box ll_backend__pragma_c_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
  MR_Box ll_backend__pragma_c_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
  MR_Box ll_backend__pragma_c_gen__closure_arg);


static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[2][5];

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_3[1][1];




static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_1[4][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__pragma_c_gen_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[2][5] = {
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

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    {
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen____Unify____c_arg_0_0(((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_1), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2));
    }
    return ll_backend__pragma_c_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__pragma_c_gen__conv0_HeadVar__1_1;

    {
      ll_backend__pragma_c_gen____Compare____c_arg_0_0(&ll_backend__pragma_c_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_3));
    }
    *ll_backend__pragma_c_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__pragma_c_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_49)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CodeModel_15 == ll_backend__pragma_c_gen__HeadVar__2_49);

    return ll_backend__pragma_c_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    {
      ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_20)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_44)));
    }
    return ll_backend__pragma_c_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__381__1_2_p_0(
  MR_Word ll_backend__pragma_c_gen__Args_19,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    {
      ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__Args_19)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_39)));
    }
    return ll_backend__pragma_c_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Integer ll_backend__pragma_c_gen__CastX_18 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;
    MR_Integer ll_backend__pragma_c_gen__CastY_19 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__3_3;

    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_18 == ll_backend__pragma_c_gen__CastY_19);
    if (ll_backend__pragma_c_gen__succeeded)
      *ll_backend__pragma_c_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__pragma_c_gen__V_14_14;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], &ll_backend__pragma_c_gen__V_14_14, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
        }
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_14_14 == (MR_Integer) 0);
        ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
        if (ll_backend__pragma_c_gen__succeeded)
          *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_14_14;
        else
          {
            MR_Word ll_backend__pragma_c_gen__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2], &ll_backend__pragma_c_gen__V_15_15, ((MR_Box) (ll_backend__pragma_c_gen__V_5_5)), ((MR_Box) (ll_backend__pragma_c_gen__V_10_10)));
            }
            ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_15_15 == (MR_Integer) 0);
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
            if (ll_backend__pragma_c_gen__succeeded)
              *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_15_15;
            else
              {
                MR_Word ll_backend__pragma_c_gen__V_16_16;

                {
                  parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_6_6, ll_backend__pragma_c_gen__V_11_11);
                }
                ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_16_16 == (MR_Integer) 0);
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
                if (ll_backend__pragma_c_gen__succeeded)
                  *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_16_16;
                else
                  {
                    MR_Word ll_backend__pragma_c_gen__V_17_17;
                    MR_Integer ll_backend__pragma_c_gen__V_25_25 = (MR_Integer) ll_backend__pragma_c_gen__V_7_7;
                    MR_Integer ll_backend__pragma_c_gen__V_26_26 = (MR_Integer) ll_backend__pragma_c_gen__V_12_12;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__pragma_c_gen__V_17_17, ll_backend__pragma_c_gen__V_25_25, ll_backend__pragma_c_gen__V_26_26);
                    }
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_17_17 == (MR_Integer) 0);
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
                    if (ll_backend__pragma_c_gen__succeeded)
                      *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_17_17;
                    else
                      {
                        hlds__hlds_pred____Compare____arg_info_0_0(ll_backend__pragma_c_gen__HeadVar__1_1, ll_backend__pragma_c_gen__V_8_8, ll_backend__pragma_c_gen__V_13_13);
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Integer ll_backend__pragma_c_gen__CastX_13 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__1_1;
    MR_Integer ll_backend__pragma_c_gen__CastY_14 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;

    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_13 == ll_backend__pragma_c_gen__CastY_14);
    if (ll_backend__pragma_c_gen__succeeded)
      ll_backend__pragma_c_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__pragma_c_gen__TypeInfo_16_16;
        MR_Word ll_backend__pragma_c_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));

        {
          ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], ((MR_Box) (ll_backend__pragma_c_gen__V_3_3)), ((MR_Box) (ll_backend__pragma_c_gen__V_8_8)));
        }
        if (ll_backend__pragma_c_gen__succeeded)
          {
            ll_backend__pragma_c_gen__TypeInfo_16_16 = (MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2];
            {
              ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__pragma_c_gen__TypeInfo_16_16, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
            }
            if (ll_backend__pragma_c_gen__succeeded)
              {
                {
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__V_5_5, ll_backend__pragma_c_gen__V_10_10);
                }
                if (ll_backend__pragma_c_gen__succeeded)
                  {
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_6_6 == ll_backend__pragma_c_gen__V_11_11);
                    if (ll_backend__pragma_c_gen__succeeded)
                      {
                        ll_backend__pragma_c_gen__succeeded = hlds__hlds_pred____Unify____arg_info_0_0(ll_backend__pragma_c_gen__V_7_7, ll_backend__pragma_c_gen__V_12_12);
                      }
                  }
              }
          }
      }
    return ll_backend__pragma_c_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6;
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
        MR_Word ll_backend__pragma_c_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__pragma_c_gen__Reg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__pragma_c_gen__Regs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen__OutputsTail_21;
            MR_Word ll_backend__pragma_c_gen__Var_22;
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_23;
            MR_Word ll_backend__pragma_c_gen__OrigType_24;
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_25;
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36;
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37;
            MR_Word ll_backend__pragma_c_gen___ArgInfo_26;

            {
              ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(ll_backend__pragma_c_gen__V_61_61, ll_backend__pragma_c_gen__Regs_16, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__OutputsTail_21, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36);
            }
            ll_backend__pragma_c_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 0)));
            ll_backend__pragma_c_gen__MaybeArgName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 1)));
            ll_backend__pragma_c_gen__OrigType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 2)));
            ll_backend__pragma_c_gen__BoxPolicy_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 3)));
            ll_backend__pragma_c_gen___ArgInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 4)));
            {
              ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__pragma_c_gen__Reg_15, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37);
            }
            {
              ll_backend__pragma_c_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37, ll_backend__pragma_c_gen__Var_22);
            }
            if (ll_backend__pragma_c_gen__succeeded)
              {
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_27;
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_28;
                MR_Word ll_backend__pragma_c_gen__TypeTable_66;
                MR_Word ll_backend__pragma_c_gen__MaybeC_70;
                MR_Word ll_backend__pragma_c_gen__TypeCtor_67;
                MR_Word ll_backend__pragma_c_gen__TypeDefn_68;
                MR_Word ll_backend__pragma_c_gen__TypeBody_69;
                MR_Word ll_backend__pragma_c_gen__V_78_78;
                MR_Word ll_backend__pragma_c_gen___MaybeJava_71;
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_72;
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_73;
                MR_String ll_backend__pragma_c_gen__Name_88;
                MR_Char ll_backend__pragma_c_gen__V_91_91;
                MR_String ll_backend__pragma_c_gen__V_89_89;

                {
                  ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__pragma_c_gen__Var_22, ll_backend__pragma_c_gen__Reg_15, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                }
                {
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_27);
                }
                {
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_27, &ll_backend__pragma_c_gen__TypeTable_66);
                }
                {
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_24, &ll_backend__pragma_c_gen__TypeCtor_67);
                }
                if (ll_backend__pragma_c_gen__succeeded)
                  {
                    {
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_66, ll_backend__pragma_c_gen__TypeCtor_67, &ll_backend__pragma_c_gen__TypeDefn_68);
                    }
                    if (ll_backend__pragma_c_gen__succeeded)
                      {
                        {
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_68, &ll_backend__pragma_c_gen__TypeBody_69);
                        }
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_69)) == (MR_mktag((MR_Integer) 0)));
                        if (ll_backend__pragma_c_gen__succeeded)
                          {
                            ll_backend__pragma_c_gen__V_78_78 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_69), (MR_Integer) 0);
                            ll_backend__pragma_c_gen__MaybeC_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 0)));
                            ll_backend__pragma_c_gen___MaybeJava_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 1)));
                            ll_backend__pragma_c_gen___MaybeCSharp_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 2)));
                            ll_backend__pragma_c_gen___MaybeErlang_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 3)));
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
                          }
                      }
                  }
                if (ll_backend__pragma_c_gen__succeeded)
                  if ((ll_backend__pragma_c_gen__MaybeC_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__pragma_c_gen__Data_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_70, (MR_Integer) 0)));
                      MR_String ll_backend__pragma_c_gen__Name_75;
                      MR_Word ll_backend__pragma_c_gen__Assertions_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_74, (MR_Integer) 2)));
                      MR_Word ll_backend__pragma_c_gen__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_74, (MR_Integer) 0)));
                      MR_Word ll_backend__pragma_c_gen__V_83_83;
                      MR_Word ll_backend__pragma_c_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_74, (MR_Integer) 1)));

                      ll_backend__pragma_c_gen__Name_75 = (MR_String) ll_backend__pragma_c_gen__V_82_82;
                      {
                        ll_backend__pragma_c_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_83_83, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_75));
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_83_83, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_77));
                      }
                      {
                        ll_backend__pragma_c_gen__MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_28, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_83_83));
                      }
                    }
                else
                  ll_backend__pragma_c_gen__MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_23)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__pragma_c_gen__succeeded)
                  {
                    ll_backend__pragma_c_gen__Name_88 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_23, (MR_Integer) 0)));
                    ll_backend__pragma_c_gen__V_91_91 = (MR_Char) 95;
                    {
                      ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_88, ll_backend__pragma_c_gen__V_91_91, &ll_backend__pragma_c_gen__V_89_89);
                    }
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
                  }
                if (ll_backend__pragma_c_gen__succeeded)
                  {
                    MR_Word ll_backend__pragma_c_gen__VarType_31;
                    MR_Word ll_backend__pragma_c_gen__IsDummy_32;
                    MR_Word ll_backend__pragma_c_gen__PragmaCOutput_33;

                    {
                      ll_backend__pragma_c_gen__VarType_31 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_22);
                    }
                    {
                      ll_backend__pragma_c_gen__IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_27, ll_backend__pragma_c_gen__VarType_31);
                    }
                    {
                      ll_backend__pragma_c_gen__PragmaCOutput_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_15));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_31));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_32));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_24));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_88));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_28));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_25));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_33));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_21));
                    }
                  }
                else
                  switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ll_backend__pragma_c_gen__V_93_93;
                        MR_Integer ll_backend__pragma_c_gen__V_94_94;
                        MR_String ll_backend__pragma_c_gen__Name_96;
                        MR_Word ll_backend__pragma_c_gen__VarType_97;
                        MR_Word ll_backend__pragma_c_gen__IsDummy_98;
                        MR_Word ll_backend__pragma_c_gen__PragmaCOutput_99;

                        {
                          ll_backend__pragma_c_gen__V_94_94 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_22);
                        }
                        {
                          ll_backend__pragma_c_gen__V_93_93 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_94_94);
                        }
                        {
                          ll_backend__pragma_c_gen__Name_96 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_93_93);
                        }
                        {
                          ll_backend__pragma_c_gen__VarType_97 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_22);
                        }
                        {
                          ll_backend__pragma_c_gen__IsDummy_98 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_27, ll_backend__pragma_c_gen__VarType_97);
                        }
                        {
                          ll_backend__pragma_c_gen__PragmaCOutput_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_15));
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_97));
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_98));
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_24));
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_96));
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_28));
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_25));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_99));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_21));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_21;
                      break;
                  }
              }
            else
              {
                *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_21;
                *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37;
              }
          }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4;
      }
    else
      {
        MR_Word ll_backend__pragma_c_gen__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__Reg_13;
        MR_Word ll_backend__pragma_c_gen__Regs_14;
        MR_Word ll_backend__pragma_c_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__VarType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 2)));
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 3)));
        MR_Word ll_backend__pragma_c_gen__RegType_21;
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24;
        MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 4)));

        switch (ll_backend__pragma_c_gen__BoxPolicy_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__pragma_c_gen__V_30_30;

              {
                ll_backend__pragma_c_gen__V_30_30 = parse_tree__builtin_lib_types__float_type_0_f_0();
              }
              {
                ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__VarType_18, ll_backend__pragma_c_gen__V_30_30);
              }
              if (ll_backend__pragma_c_gen__succeeded)
                ll_backend__pragma_c_gen__RegType_21 = ll_backend__pragma_c_gen__FloatRegType_1;
              else
                ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
            }
            break;
        }
        {
          ll_backend__code_loc_dep__acquire_reg_for_var_5_p_0(ll_backend__pragma_c_gen__Var_16, ll_backend__pragma_c_gen__RegType_21, &ll_backend__pragma_c_gen__Reg_13, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24);
        }
        {
          ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_1, ll_backend__pragma_c_gen__Args_12, &ll_backend__pragma_c_gen__Regs_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Regs_14));
        }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__pragma_c_gen__succeeded;

        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6;
          }
        else
          {
            MR_Word ll_backend__pragma_c_gen__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__pragma_c_gen__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 0)));
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen__OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 2)));
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 3)));
            MR_Word ll_backend__pragma_c_gen___ArgInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 4)));
            MR_String ll_backend__pragma_c_gen__Name_47;
            MR_Char ll_backend__pragma_c_gen__V_50_50;
            MR_String ll_backend__pragma_c_gen__V_48_48;

            ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_21)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__pragma_c_gen__succeeded)
              {
                ll_backend__pragma_c_gen__Name_47 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_21, (MR_Integer) 0)));
                ll_backend__pragma_c_gen__V_50_50 = (MR_Char) 95;
                {
                  ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_47, ll_backend__pragma_c_gen__V_50_50, &ll_backend__pragma_c_gen__V_48_48);
                }
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
              }
            if (ll_backend__pragma_c_gen__succeeded)
              {
                MR_Word ll_backend__pragma_c_gen__VarType_27;
                MR_Word ll_backend__pragma_c_gen__FirstCode_28;
                MR_Word ll_backend__pragma_c_gen__Rval_29;
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_30;
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_31;
                MR_Word ll_backend__pragma_c_gen__IsDummy_32;
                MR_Word ll_backend__pragma_c_gen__Input_33;
                MR_Word ll_backend__pragma_c_gen__Inputs1_34;
                MR_Word ll_backend__pragma_c_gen__RestCode_35;
                MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39;
                MR_Word ll_backend__pragma_c_gen__TypeTable_58;
                MR_Word ll_backend__pragma_c_gen__MaybeC_62;
                MR_Word ll_backend__pragma_c_gen__TypeCtor_59;
                MR_Word ll_backend__pragma_c_gen__TypeDefn_60;
                MR_Word ll_backend__pragma_c_gen__TypeBody_61;
                MR_Word ll_backend__pragma_c_gen__V_70_70;
                MR_Word ll_backend__pragma_c_gen___MaybeJava_63;
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_64;
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_65;

                {
                  ll_backend__pragma_c_gen__VarType_27 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_20);
                }
                {
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__pragma_c_gen__Var_20, &ll_backend__pragma_c_gen__FirstCode_28, &ll_backend__pragma_c_gen__Rval_29, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39);
                }
                {
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_30);
                }
                {
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_30, &ll_backend__pragma_c_gen__TypeTable_58);
                }
                {
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_22, &ll_backend__pragma_c_gen__TypeCtor_59);
                }
                if (ll_backend__pragma_c_gen__succeeded)
                  {
                    {
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_58, ll_backend__pragma_c_gen__TypeCtor_59, &ll_backend__pragma_c_gen__TypeDefn_60);
                    }
                    if (ll_backend__pragma_c_gen__succeeded)
                      {
                        {
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_60, &ll_backend__pragma_c_gen__TypeBody_61);
                        }
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_61)) == (MR_mktag((MR_Integer) 0)));
                        if (ll_backend__pragma_c_gen__succeeded)
                          {
                            ll_backend__pragma_c_gen__V_70_70 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_61), (MR_Integer) 0);
                            ll_backend__pragma_c_gen__MaybeC_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 0)));
                            ll_backend__pragma_c_gen___MaybeJava_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 1)));
                            ll_backend__pragma_c_gen___MaybeCSharp_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 2)));
                            ll_backend__pragma_c_gen___MaybeErlang_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 3)));
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
                          }
                      }
                  }
                if (ll_backend__pragma_c_gen__succeeded)
                  if ((ll_backend__pragma_c_gen__MaybeC_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__pragma_c_gen__Data_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_62, (MR_Integer) 0)));
                      MR_String ll_backend__pragma_c_gen__Name_67;
                      MR_Word ll_backend__pragma_c_gen__Assertions_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_66, (MR_Integer) 2)));
                      MR_Word ll_backend__pragma_c_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_66, (MR_Integer) 0)));
                      MR_Word ll_backend__pragma_c_gen__V_75_75;
                      MR_Word ll_backend__pragma_c_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_66, (MR_Integer) 1)));

                      ll_backend__pragma_c_gen__Name_67 = (MR_String) ll_backend__pragma_c_gen__V_74_74;
                      {
                        ll_backend__pragma_c_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_67));
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_69));
                      }
                      {
                        ll_backend__pragma_c_gen__MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_31, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_75_75));
                      }
                    }
                else
                  ll_backend__pragma_c_gen__MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ll_backend__pragma_c_gen__IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_30, ll_backend__pragma_c_gen__VarType_27);
                }
                {
                  ll_backend__pragma_c_gen__Input_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_47));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_27));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_32));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_22));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_29));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_31));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_23));
                }
                {
                  ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__Args_14, &ll_backend__pragma_c_gen__Inputs1_34, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_35, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_33));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_34));
                }
                {
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_28, ll_backend__pragma_c_gen__RestCode_35);
                }
              }
            else
              switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String ll_backend__pragma_c_gen__V_52_52;
                    MR_Integer ll_backend__pragma_c_gen__V_53_53;
                    MR_String ll_backend__pragma_c_gen__Name_122;
                    MR_Word ll_backend__pragma_c_gen__VarType_123;
                    MR_Word ll_backend__pragma_c_gen__FirstCode_124;
                    MR_Word ll_backend__pragma_c_gen__Rval_125;
                    MR_Word ll_backend__pragma_c_gen__ModuleInfo_126;
                    MR_Word ll_backend__pragma_c_gen__MaybeForeign_127;
                    MR_Word ll_backend__pragma_c_gen__IsDummy_128;
                    MR_Word ll_backend__pragma_c_gen__Input_129;
                    MR_Word ll_backend__pragma_c_gen__Inputs1_130;
                    MR_Word ll_backend__pragma_c_gen__RestCode_131;
                    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_132;
                    MR_Word ll_backend__pragma_c_gen__TypeTable_134;
                    MR_Word ll_backend__pragma_c_gen__MaybeC_108;
                    MR_Word ll_backend__pragma_c_gen__TypeCtor_79;
                    MR_Word ll_backend__pragma_c_gen__TypeDefn_80;
                    MR_Word ll_backend__pragma_c_gen__TypeBody_81;
                    MR_Word ll_backend__pragma_c_gen__V_85_85;
                    MR_Word ll_backend__pragma_c_gen___MaybeJava_76;
                    MR_Word ll_backend__pragma_c_gen___MaybeCSharp_77;
                    MR_Word ll_backend__pragma_c_gen___MaybeErlang_78;

                    {
                      ll_backend__pragma_c_gen__V_53_53 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_20);
                    }
                    {
                      ll_backend__pragma_c_gen__V_52_52 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_53_53);
                    }
                    {
                      ll_backend__pragma_c_gen__Name_122 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_52_52);
                    }
                    {
                      ll_backend__pragma_c_gen__VarType_123 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_20);
                    }
                    {
                      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__pragma_c_gen__Var_20, &ll_backend__pragma_c_gen__FirstCode_124, &ll_backend__pragma_c_gen__Rval_125, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_132);
                    }
                    {
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_126);
                    }
                    {
                      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_126, &ll_backend__pragma_c_gen__TypeTable_134);
                    }
                    {
                      ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_22, &ll_backend__pragma_c_gen__TypeCtor_79);
                    }
                    if (ll_backend__pragma_c_gen__succeeded)
                      {
                        {
                          ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_134, ll_backend__pragma_c_gen__TypeCtor_79, &ll_backend__pragma_c_gen__TypeDefn_80);
                        }
                        if (ll_backend__pragma_c_gen__succeeded)
                          {
                            {
                              hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_80, &ll_backend__pragma_c_gen__TypeBody_81);
                            }
                            ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_81)) == (MR_mktag((MR_Integer) 0)));
                            if (ll_backend__pragma_c_gen__succeeded)
                              {
                                ll_backend__pragma_c_gen__V_85_85 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_81), (MR_Integer) 0);
                                ll_backend__pragma_c_gen__MaybeC_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 0)));
                                ll_backend__pragma_c_gen___MaybeJava_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 1)));
                                ll_backend__pragma_c_gen___MaybeCSharp_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 2)));
                                ll_backend__pragma_c_gen___MaybeErlang_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 3)));
                                ll_backend__pragma_c_gen__succeeded = MR_TRUE;
                              }
                          }
                      }
                    if (ll_backend__pragma_c_gen__succeeded)
                      if ((ll_backend__pragma_c_gen__MaybeC_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
                            return;
                          }
                        }
                      else
                        {
                          MR_Word ll_backend__pragma_c_gen__Data_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_108, (MR_Integer) 0)));
                          MR_String ll_backend__pragma_c_gen__Name_91;
                          MR_Word ll_backend__pragma_c_gen__Assertions_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_90, (MR_Integer) 2)));
                          MR_Word ll_backend__pragma_c_gen__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_90, (MR_Integer) 0)));
                          MR_Word ll_backend__pragma_c_gen__V_95_95;
                          MR_Word ll_backend__pragma_c_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_90, (MR_Integer) 1)));

                          ll_backend__pragma_c_gen__Name_91 = (MR_String) ll_backend__pragma_c_gen__V_94_94;
                          {
                            ll_backend__pragma_c_gen__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_95_95, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_91));
                            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_95_95, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_93));
                          }
                          {
                            ll_backend__pragma_c_gen__MaybeForeign_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_127, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_95_95));
                          }
                        }
                    else
                      ll_backend__pragma_c_gen__MaybeForeign_127 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      ll_backend__pragma_c_gen__IsDummy_128 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_126, ll_backend__pragma_c_gen__VarType_123);
                    }
                    {
                      ll_backend__pragma_c_gen__Input_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_122));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_123));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_128));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_22));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_125));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_127));
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_23));
                    }
                    {
                      ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__Args_14, &ll_backend__pragma_c_gen__Inputs1_130, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_131, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_132, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_129));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_130));
                    }
                    {
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_124, ll_backend__pragma_c_gen__RestCode_131);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_14;

                      ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
                  break;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__pragma_c_gen__succeeded;

        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
        else
          {
            MR_Word ll_backend__pragma_c_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__pragma_c_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 0)));
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;
            MR_Word ll_backend__pragma_c_gen___MaybeName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 2)));
            MR_Word ll_backend__pragma_c_gen___BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 3)));
            MR_Word ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 4)));

            {
              ll_backend__pragma_c_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__PostDeaths_2, ll_backend__pragma_c_gen__Var_13);
            }
            if (ll_backend__pragma_c_gen__succeeded)
              {
                {
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13, ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3, &ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20);
                }
              }
            else
              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_10;
              MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;

              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3;
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__Module_2,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__pragma_c_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__DeclsTail_12;
        MR_Word ll_backend__pragma_c_gen__Var_13;
        MR_Word ll_backend__pragma_c_gen__MaybeArgName_14;
        MR_Word ll_backend__pragma_c_gen__OrigType_15;
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16;
        MR_Word ll_backend__pragma_c_gen___ArgInfo_17;
        MR_String ll_backend__pragma_c_gen__Name_27;
        MR_Char ll_backend__pragma_c_gen__V_30_30;
        MR_String ll_backend__pragma_c_gen__V_28_28;

        {
          ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__Args_8, ll_backend__pragma_c_gen__Module_2, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__DeclsTail_12);
        }
        ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 0)));
        ll_backend__pragma_c_gen__MaybeArgName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 1)));
        ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 2)));
        ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 3)));
        ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 4)));
        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_14)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__pragma_c_gen__succeeded)
          {
            ll_backend__pragma_c_gen__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_14, (MR_Integer) 0)));
            ll_backend__pragma_c_gen__V_30_30 = (MR_Char) 95;
            {
              ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_27, ll_backend__pragma_c_gen__V_30_30, &ll_backend__pragma_c_gen__V_28_28);
            }
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
          }
        if (ll_backend__pragma_c_gen__succeeded)
          {
            MR_String ll_backend__pragma_c_gen__OrigTypeString_20;
            MR_Word ll_backend__pragma_c_gen__Decl_21;

            switch (ll_backend__pragma_c_gen__BoxPolicy_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__pragma_c_gen__OrigTypeString_20 = (MR_String) "MR_Word";
                break;
              case (MR_Integer) 0:
                {
                  {
                    ll_backend__pragma_c_gen__OrigTypeString_20 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                  }
                }
                break;
            }
            {
              ll_backend__pragma_c_gen__Decl_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_20));
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
            }
          }
        else
          switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ll_backend__pragma_c_gen__V_32_32;
                MR_Integer ll_backend__pragma_c_gen__V_33_33;
                MR_String ll_backend__pragma_c_gen__Name_37;
                MR_String ll_backend__pragma_c_gen__OrigTypeString_38;
                MR_Word ll_backend__pragma_c_gen__Decl_39;

                {
                  ll_backend__pragma_c_gen__V_33_33 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13);
                }
                {
                  ll_backend__pragma_c_gen__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_33_33);
                }
                {
                  ll_backend__pragma_c_gen__Name_37 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_32_32);
                }
                switch (ll_backend__pragma_c_gen__BoxPolicy_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    ll_backend__pragma_c_gen__OrigTypeString_38 = (MR_String) "MR_Word";
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        ll_backend__pragma_c_gen__OrigTypeString_38 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                      }
                    }
                    break;
                }
                {
                  ll_backend__pragma_c_gen__Decl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_38));
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_37));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_39));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
                }
              }
              break;
            case (MR_Integer) 1:
              *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__DeclsTail_12;
              break;
          }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__InTail_6;
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
        MR_Word ll_backend__pragma_c_gen__Mode_13;
        MR_Word ll_backend__pragma_c_gen__V_7_7;
        MR_Word ll_backend__pragma_c_gen__V_8_8;
        MR_Word ll_backend__pragma_c_gen__V_9_9;
        MR_Word ll_backend__pragma_c_gen__V_10_10;
        MR_Word ll_backend__pragma_c_gen___Loc_12;

        {
          ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__InTail_6);
        }
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
        switch (ll_backend__pragma_c_gen__Mode_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__InTail_6));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__InTail_6;
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__OutTail_6;
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
        MR_Word ll_backend__pragma_c_gen__Mode_13;
        MR_Word ll_backend__pragma_c_gen__V_7_7;
        MR_Word ll_backend__pragma_c_gen__V_8_8;
        MR_Word ll_backend__pragma_c_gen__V_9_9;
        MR_Word ll_backend__pragma_c_gen__V_10_10;
        MR_Word ll_backend__pragma_c_gen___Loc_12;

        {
          ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__OutTail_6);
        }
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
        switch (ll_backend__pragma_c_gen__Mode_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__OutTail_6;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutTail_6));
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__Vars_6;
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));

        {
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__Args_4, &ll_backend__pragma_c_gen__Vars_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Vars_6));
        }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__pragma_c_gen__ExtraArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__ExtraArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__CArg_11;
        MR_Word ll_backend__pragma_c_gen__CArgs_12;
        MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__MaybeNameMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 2)));
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 3)));
        MR_String ll_backend__pragma_c_gen__Name_17;
        MR_Word ll_backend__pragma_c_gen__ArgMode_19;
        MR_Integer ll_backend__pragma_c_gen__NextReg_21;
        MR_Word ll_backend__pragma_c_gen__ArgInfo_22;
        MR_Word ll_backend__pragma_c_gen__V_28_28;
        MR_Word ll_backend__pragma_c_gen__V_29_29;

        if ((ll_backend__pragma_c_gen__MaybeNameMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_extra_c_arg_list_seq\'/4", (MR_String) "no name");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__pragma_c_gen__Mode_18;
            MR_Word ll_backend__pragma_c_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_14, (MR_Integer) 0)));

            ll_backend__pragma_c_gen__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 0)));
            ll_backend__pragma_c_gen__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 1)));
            {
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__Mode_18, ll_backend__pragma_c_gen__OrigType_15, &ll_backend__pragma_c_gen__ArgMode_19);
            }
          }
        ll_backend__pragma_c_gen__NextReg_21 = (ll_backend__pragma_c_gen__LastReg_3 + (MR_Integer) 1);
        {
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (ll_backend__pragma_c_gen__NextReg_21));
        }
        {
          ll_backend__pragma_c_gen__ArgInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 1) = ((MR_Box) (ll_backend__pragma_c_gen__ArgMode_19));
        }
        {
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_17));
        }
        {
          ll_backend__pragma_c_gen__CArg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_13));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 2) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_16));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_22));
        }
        {
          ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_8, ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__NextReg_21, &ll_backend__pragma_c_gen__CArgs_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgs_12));
        }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__pragma_c_gen__succeeded;

        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
          }
        else
          {
            MR_Word ll_backend__pragma_c_gen__Loc_12;
            MR_Word ll_backend__pragma_c_gen__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
            MR_Integer ll_backend__pragma_c_gen__V_30_30;
            MR_Word ll_backend__pragma_c_gen__V_31_31;
            MR_Word ll_backend__pragma_c_gen__V_13_13;

            ll_backend__pragma_c_gen__Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 0)));
            ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 1)));
            ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 0)));
            ll_backend__pragma_c_gen__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 1)));
            switch (ll_backend__pragma_c_gen__V_31_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24);
                  }
                  ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26);
                  }
                  ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__ArgInfos_14;
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;

              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4;
              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2;
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Integer ll_backend__pragma_c_gen__MaxR_9;
    MR_Integer ll_backend__pragma_c_gen___MaxF_10;

    {
      ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(ll_backend__pragma_c_gen__ArgInfos_7, (MR_Integer) 0, &ll_backend__pragma_c_gen__MaxR_9, (MR_Integer) 0, &ll_backend__pragma_c_gen___MaxF_10);
    }
    {
      ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_5, ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__MaxR_9, ll_backend__pragma_c_gen__ExtraCArgs_8);
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word ll_backend__pragma_c_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__pragma_c_gen__ArgInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__pragma_c_gen__ArgInfoTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen__CArg_8;
            MR_Word ll_backend__pragma_c_gen__CArgTail_9;
            MR_Word ll_backend__pragma_c_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 0)));
            MR_Word ll_backend__pragma_c_gen__MaybeNameMode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 1)));
            MR_Word ll_backend__pragma_c_gen__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 2)));
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 3)));
            MR_Word ll_backend__pragma_c_gen__MaybeName_16;

            if ((ll_backend__pragma_c_gen__MaybeNameMode_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_String ll_backend__pragma_c_gen__Name_14;
                MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_11, (MR_Integer) 0)));
                MR_Word ll_backend__pragma_c_gen__V_15_15;

                ll_backend__pragma_c_gen__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 0)));
                ll_backend__pragma_c_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 1)));
                {
                  ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeName_16, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_14));
                }
              }
            {
              ll_backend__pragma_c_gen__CArg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_10));
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 1) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeName_16));
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Type_12));
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_13));
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_6));
            }
            {
              ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__ArgInfoTail_7, &ll_backend__pragma_c_gen__CArgTail_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_8));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgTail_9));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
  MR_String ll_backend__pragma_c_gen__C_Code_7,
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Word ll_backend__pragma_c_gen__Globals_12;
    MR_Word ll_backend__pragma_c_gen__ProfileMemory_13;
    MR_String ll_backend__pragma_c_gen__V_20_20;
    MR_Integer ll_backend__pragma_c_gen__V_14_14;

    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, &ll_backend__pragma_c_gen__Globals_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__pragma_c_gen__Globals_12, (MR_Integer) 194, &ll_backend__pragma_c_gen__ProfileMemory_13);
    }
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__ProfileMemory_13 == (MR_Integer) 1);
    if (ll_backend__pragma_c_gen__succeeded)
      {
        ll_backend__pragma_c_gen__V_20_20 = (MR_String) "MR_ALLOC_ID";
        {
          ll_backend__pragma_c_gen__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__pragma_c_gen__C_Code_7, ll_backend__pragma_c_gen__V_20_20, &ll_backend__pragma_c_gen__V_14_14);
        }
      }
    if (ll_backend__pragma_c_gen__succeeded)
      {
        MR_Word ll_backend__pragma_c_gen__Context_15;
        MR_Word ll_backend__pragma_c_gen__AllocId_16;
        MR_Word ll_backend__pragma_c_gen__V_24_24;
        MR_Word ll_backend__pragma_c_gen__V_26_26;
        MR_Word ll_backend__pragma_c_gen__V_27_27;
        MR_Word ll_backend__pragma_c_gen__V_28_28;
        MR_Word ll_backend__pragma_c_gen__V_29_29;
        MR_Word ll_backend__pragma_c_gen__V_32_32;
        MR_Word ll_backend__pragma_c_gen__V_38_38;
        MR_Word ll_backend__pragma_c_gen__V_39_39;
        MR_Word ll_backend__pragma_c_gen__V_44_44;
        MR_Word ll_backend__pragma_c_gen__V_45_45;
        MR_Word ll_backend__pragma_c_gen__V_50_50;
        MR_Word ll_backend__pragma_c_gen__V_51_51;

        if ((ll_backend__pragma_c_gen__MaybeContext_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__pragma_c_gen__Context_15 = mercury__term__context_init_0_f_0();
          }
        else
          ll_backend__pragma_c_gen__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeContext_8, (MR_Integer) 0)));
        {
          ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__pragma_c_gen__Context_15, (MR_String) "unknown", (MR_Integer) 0, &ll_backend__pragma_c_gen__AllocId_16, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);
        }
        {
          ll_backend__pragma_c_gen__V_39_39 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
        {
          ll_backend__pragma_c_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_38_38, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
        }
        {
          ll_backend__pragma_c_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_38_38));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 4) = ((MR_Box) ((MR_String) "#define\tMR_ALLOC_ID\t"));
        }
        {
          ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocId_16));
        }
        {
          ll_backend__pragma_c_gen__V_45_45 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
        {
          ll_backend__pragma_c_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_44_44, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_45_45));
        }
        {
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_44_44));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 4) = ((MR_Box) ((MR_String) "\n"));
        }
        {
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__pragma_c_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_24_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_26_26));
        }
        {
          ll_backend__pragma_c_gen__V_51_51 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
        {
          ll_backend__pragma_c_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_50_50, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_51_51));
        }
        {
          ll_backend__pragma_c_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_50_50));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 4) = ((MR_Box) ((MR_String) "#undef\tMR_ALLOC_ID\n"));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_32_32));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17;
      }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
  MR_Word ll_backend__pragma_c_gen__PredId_7,
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_String ll_backend__pragma_c_gen__ProcLabelStr_11;
    MR_String ll_backend__pragma_c_gen__V_12_12;
    MR_String ll_backend__pragma_c_gen__V_14_14;
    MR_Word ll_backend__pragma_c_gen__CodeAddr_21;
    MR_Word ll_backend__pragma_c_gen__V_33_33;
    MR_Word ll_backend__pragma_c_gen__V_34_34;
    MR_Word ll_backend__pragma_c_gen__V_39_39;
    MR_Word ll_backend__pragma_c_gen__V_40_40;
    MR_Word ll_backend__pragma_c_gen__ProcLabel_22;

    {
      ll_backend__pragma_c_gen__CodeAddr_21 = ll_backend__code_util__make_entry_label_4_f_0(ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__PredId_7, ll_backend__pragma_c_gen__ProcId_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 2)));
    if (ll_backend__pragma_c_gen__succeeded)
      {
        ll_backend__pragma_c_gen__ProcLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
        {
          ll_backend__pragma_c_gen__ProcLabelStr_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__pragma_c_gen__ProcLabel_22, (MR_Integer) 1);
        }
      }
    else
      {
        MR_Word ll_backend__pragma_c_gen__Label_23;

        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__pragma_c_gen__succeeded)
          {
            ll_backend__pragma_c_gen__Label_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
            {
              ll_backend__pragma_c_gen__ProcLabelStr_11 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__pragma_c_gen__Label_23, (MR_Integer) 1);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.make_proc_label_string\'/3", (MR_String) "code_addr");
              return;
            }
          }
      }
    {
      ll_backend__pragma_c_gen__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__ProcLabelStr_11, (MR_String) "\n");
    }
    {
      ll_backend__pragma_c_gen__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "#define\tMR_PROC_LABEL\t", ll_backend__pragma_c_gen__V_14_14);
    }
    {
      ll_backend__pragma_c_gen__V_34_34 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
    {
      ll_backend__pragma_c_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_33_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_34_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__pragma_c_gen__ProcLabelHashDef_9 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_33_33));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_12_12));
    }
    {
      ll_backend__pragma_c_gen__V_40_40 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
    {
      ll_backend__pragma_c_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_39_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_40_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__pragma_c_gen__ProcLabelHashUndef_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_String) "#undef\tMR_PROC_LABEL\n"));
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
  MR_Word ll_backend__pragma_c_gen__CodeModel_16,
  MR_Word ll_backend__pragma_c_gen__Attributes_17,
  MR_Word ll_backend__pragma_c_gen__PredId_18,
  MR_Integer ll_backend__pragma_c_gen__ProcId_19,
  MR_Word ll_backend__pragma_c_gen__Args_20,
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_21,
  MR_String ll_backend__pragma_c_gen__C_Code_22,
  MR_Word ll_backend__pragma_c_gen__Context_23,
  MR_Word ll_backend__pragma_c_gen__GoalInfo_24,
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25,
  MR_Word * ll_backend__pragma_c_gen__Code_26,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_230_230;
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_241_241;
    MR_Word ll_backend__pragma_c_gen__MayCallMercury_29;
    MR_Word ll_backend__pragma_c_gen__ThreadSafe_30;
    MR_Word ll_backend__pragma_c_gen__ArgInfos_31;
    MR_Word ll_backend__pragma_c_gen__OrigCArgs_32;
    MR_Word ll_backend__pragma_c_gen__ModuleInfo_33;
    MR_Word ll_backend__pragma_c_gen__ExtraCArgs_34;
    MR_Word ll_backend__pragma_c_gen__CArgs_35;
    MR_Word ll_backend__pragma_c_gen__InCArgs_36;
    MR_Word ll_backend__pragma_c_gen__OutCArgs_37;
    MR_Word ll_backend__pragma_c_gen__PostDeaths_38;
    MR_Word ll_backend__pragma_c_gen__DeadVars0_39;
    MR_Word ll_backend__pragma_c_gen__DeadVars_40;
    MR_Word ll_backend__pragma_c_gen__SaveVarsCode_41;
    MR_Word ll_backend__pragma_c_gen__InputDescs_45;
    MR_Word ll_backend__pragma_c_gen__InputVarsCode_46;
    MR_Word ll_backend__pragma_c_gen__Decls_47;
    MR_Word ll_backend__pragma_c_gen__AllocIdHashDefine_48;
    MR_Word ll_backend__pragma_c_gen__AllocIdHashUndef_49;
    MR_Word ll_backend__pragma_c_gen__CallerPredId_50;
    MR_Integer ll_backend__pragma_c_gen__CallerProcId_51;
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashDefine_52;
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashUndef_53;
    MR_Word ll_backend__pragma_c_gen__InputComp_54;
    MR_Word ll_backend__pragma_c_gen__SaveRegsComp_55;
    MR_Word ll_backend__pragma_c_gen__ObtainLock_56;
    MR_Word ll_backend__pragma_c_gen__ReleaseLock_57;
    MR_Word ll_backend__pragma_c_gen__AffectsLiveness_63;
    MR_Word ll_backend__pragma_c_gen__C_Code_Comp_64;
    MR_Word ll_backend__pragma_c_gen__Detism_65;
    MR_Word ll_backend__pragma_c_gen__CheckSuccess_Comp_66;
    MR_Word ll_backend__pragma_c_gen__MaybeFailLabel_67;
    MR_Word ll_backend__pragma_c_gen__DefSuccessComp_69;
    MR_Word ll_backend__pragma_c_gen__UndefSuccessComp_70;
    MR_Word ll_backend__pragma_c_gen__RestoreRegsComp_71;
    MR_Word ll_backend__pragma_c_gen__ExprnOpts_74;
    MR_Word ll_backend__pragma_c_gen__UseFloatRegs_75;
    MR_Word ll_backend__pragma_c_gen__FloatRegType_76;
    MR_Word ll_backend__pragma_c_gen__Regs_77;
    MR_Word ll_backend__pragma_c_gen__OutputDescs_78;
    MR_Word ll_backend__pragma_c_gen__OutputComp_79;
    MR_Word ll_backend__pragma_c_gen__Components_80;
    MR_Word ll_backend__pragma_c_gen__MaybeMayDupl_81;
    MR_Word ll_backend__pragma_c_gen__MayDupl_82;
    MR_Word ll_backend__pragma_c_gen__ExtraAttributes_85;
    MR_Word ll_backend__pragma_c_gen__RefersToLLDSSTack_86;
    MR_Word ll_backend__pragma_c_gen__PragmaCCode_87;
    MR_Word ll_backend__pragma_c_gen__FailureCode_95;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185;
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186;
    MR_Word ll_backend__pragma_c_gen__V_187_187;
    MR_Word ll_backend__pragma_c_gen__V_188_188;
    MR_Word ll_backend__pragma_c_gen__V_189_189;
    MR_Word ll_backend__pragma_c_gen__V_190_190;
    MR_Word ll_backend__pragma_c_gen__V_191_191;
    MR_Word ll_backend__pragma_c_gen__V_192_192;
    MR_Word ll_backend__pragma_c_gen__V_193_193;
    MR_Word ll_backend__pragma_c_gen__V_194_194;
    MR_Word ll_backend__pragma_c_gen__V_195_195;
    MR_Word ll_backend__pragma_c_gen__V_196_196;
    MR_Word ll_backend__pragma_c_gen__V_197_197;
    MR_Word ll_backend__pragma_c_gen__V_198_198;
    MR_Word ll_backend__pragma_c_gen__V_200_200;
    MR_Word ll_backend__pragma_c_gen__V_201_201;
    MR_Word ll_backend__pragma_c_gen__V_224_224;
    MR_Word ll_backend__pragma_c_gen__V_225_225;

    {
      ll_backend__pragma_c_gen__MayCallMercury_29 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
    {
      ll_backend__pragma_c_gen__ThreadSafe_30 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
    {
      ll_backend__pragma_c_gen__ArgInfos_31 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, ll_backend__pragma_c_gen__PredId_18, ll_backend__pragma_c_gen__ProcId_19);
    }
    {
      ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__Args_20, ll_backend__pragma_c_gen__ArgInfos_31, &ll_backend__pragma_c_gen__OrigCArgs_32);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, &ll_backend__pragma_c_gen__ModuleInfo_33);
    }
    {
      ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_21, ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__ArgInfos_31, &ll_backend__pragma_c_gen__ExtraCArgs_34);
    }
    {
      mercury__list__append_3_p_1((MR_Word) &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0, ll_backend__pragma_c_gen__OrigCArgs_32, ll_backend__pragma_c_gen__ExtraCArgs_34, &ll_backend__pragma_c_gen__CArgs_35);
    }
    {
      ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__CArgs_35, &ll_backend__pragma_c_gen__InCArgs_36);
    }
    {
      ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__CArgs_35, &ll_backend__pragma_c_gen__OutCArgs_37);
    }
    {
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__pragma_c_gen__GoalInfo_24, &ll_backend__pragma_c_gen__PostDeaths_38);
    }
    ll_backend__pragma_c_gen__TypeCtorInfo_230_230 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ll_backend__pragma_c_gen__DeadVars0_39 = parse_tree__set_of_var__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230);
    }
    {
      ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(ll_backend__pragma_c_gen__InCArgs_36, ll_backend__pragma_c_gen__PostDeaths_38, ll_backend__pragma_c_gen__DeadVars0_39, &ll_backend__pragma_c_gen__DeadVars_40);
    }
    switch (ll_backend__pragma_c_gen__MayCallMercury_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__pragma_c_gen__OutVars_42;
          MR_Word ll_backend__pragma_c_gen__OutVarsSet_43;
          MR_Word ll_backend__pragma_c_gen__V_44_44;

          {
            ll_backend__code_info__succip_is_used_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103);
          }
          {
            ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__OutCArgs_37, &ll_backend__pragma_c_gen__OutVars_42);
          }
          {
            parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__OutVars_42, &ll_backend__pragma_c_gen__OutVarsSet_43);
          }
          {
            ll_backend__code_loc_dep__save_variables_6_p_0(ll_backend__pragma_c_gen__OutVarsSet_43, &ll_backend__pragma_c_gen__V_44_44, &ll_backend__pragma_c_gen__SaveVarsCode_41, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__pragma_c_gen__SaveVarsCode_41 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96;
          ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98;
        }
        break;
    }
    {
      ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__InCArgs_36, &ll_backend__pragma_c_gen__InputDescs_45, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__InputVarsCode_46, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105);
    }
    {
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__pragma_c_gen__DeadVars_40, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106);
    }
    {
      ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__CArgs_35, ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__Decls_47);
    }
    {
      ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(ll_backend__pragma_c_gen__C_Code_22, ll_backend__pragma_c_gen__Context_23, &ll_backend__pragma_c_gen__AllocIdHashDefine_48, &ll_backend__pragma_c_gen__AllocIdHashUndef_49, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107);
    }
    {
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__CallerPredId_50);
    }
    {
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__CallerProcId_51);
    }
    {
      ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__CallerPredId_50, ll_backend__pragma_c_gen__CallerProcId_51, &ll_backend__pragma_c_gen__ProcLabelHashDefine_52, &ll_backend__pragma_c_gen__ProcLabelHashUndef_53);
    }
    {
      ll_backend__pragma_c_gen__InputComp_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__InputComp_54, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputDescs_45));
    }
    switch (ll_backend__pragma_c_gen__ThreadSafe_30) {
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
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_235_235;
          MR_Word ll_backend__pragma_c_gen__PredInfo_58;
          MR_String ll_backend__pragma_c_gen__Name_59;
          MR_String ll_backend__pragma_c_gen__MangledName_60;
          MR_String ll_backend__pragma_c_gen__ObtainLockStr_61;
          MR_String ll_backend__pragma_c_gen__ReleaseLockStr_62;
          MR_String ll_backend__pragma_c_gen__V_119_119;
          MR_Word ll_backend__pragma_c_gen__V_123_123;
          MR_Word ll_backend__pragma_c_gen__V_124_124;
          MR_String ll_backend__pragma_c_gen__V_126_126;
          MR_Word ll_backend__pragma_c_gen__V_130_130;
          MR_Word ll_backend__pragma_c_gen__V_131_131;

          {
            hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__PredId_18, &ll_backend__pragma_c_gen__PredInfo_58);
          }
          {
            ll_backend__pragma_c_gen__Name_59 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__pragma_c_gen__PredInfo_58);
          }
          {
            ll_backend__pragma_c_gen__MangledName_60 = backend_libs__c_util__quote_string_1_f_0(ll_backend__pragma_c_gen__Name_59);
          }
          {
            ll_backend__pragma_c_gen__V_119_119 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_60, (MR_String) "\");\n");
          }
          {
            ll_backend__pragma_c_gen__ObtainLockStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_119_119);
          }
          ll_backend__pragma_c_gen__TypeCtorInfo_235_235 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          {
            ll_backend__pragma_c_gen__V_124_124 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_235_235);
          }
          {
            ll_backend__pragma_c_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_123_123, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_124_124));
          }
          {
            ll_backend__pragma_c_gen__ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_123_123));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLockStr_61));
          }
          {
            ll_backend__pragma_c_gen__V_126_126 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_60, (MR_String) "\");\n");
          }
          {
            ll_backend__pragma_c_gen__ReleaseLockStr_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_126_126);
          }
          {
            ll_backend__pragma_c_gen__V_131_131 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_235_235);
          }
          {
            ll_backend__pragma_c_gen__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_130_130, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_131_131));
          }
          {
            ll_backend__pragma_c_gen__ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_130_130));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLockStr_62));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          MR_Word ll_backend__pragma_c_gen__V_134_134;
          MR_Word ll_backend__pragma_c_gen__V_135_135;
          MR_Word ll_backend__pragma_c_gen__V_139_139;
          MR_Word ll_backend__pragma_c_gen__V_140_140;

          {
            ll_backend__pragma_c_gen__V_135_135 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_234_234);
          }
          {
            ll_backend__pragma_c_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_134_134, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_135_135));
          }
          {
            ll_backend__pragma_c_gen__ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_134_134));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 4) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__pragma_c_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_234_234);
          }
          {
            ll_backend__pragma_c_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_139_139, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_140_140));
          }
          {
            ll_backend__pragma_c_gen__ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_139_139));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 4) = ((MR_Box) ((MR_String) ""));
          }
        }
        break;
    }
    {
      ll_backend__pragma_c_gen__AffectsLiveness_63 = parse_tree__prog_data_foreign__get_affects_liveness_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
    {
      ll_backend__pragma_c_gen__C_Code_Comp_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Context_23));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 2) = ((MR_Box) (ll_backend__pragma_c_gen__AffectsLiveness_63));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 3) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_22));
    }
    {
      ll_backend__pragma_c_gen__Detism_65 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__pragma_c_gen__GoalInfo_24);
    }
    switch (ll_backend__pragma_c_gen__CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_237_237;
          MR_Word ll_backend__pragma_c_gen__V_144_144;
          MR_Word ll_backend__pragma_c_gen__V_145_145;
          MR_Word ll_backend__pragma_c_gen__V_149_149;
          MR_Word ll_backend__pragma_c_gen__V_150_150;

          ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__pragma_c_gen__TypeCtorInfo_237_237 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          {
            ll_backend__pragma_c_gen__V_145_145 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_237_237);
          }
          {
            ll_backend__pragma_c_gen__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_144_144, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_145_145));
          }
          {
            ll_backend__pragma_c_gen__DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_144_144));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 4) = ((MR_Box) ((MR_String) ""));
          }
          {
            ll_backend__pragma_c_gen__V_150_150 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_237_237);
          }
          {
            ll_backend__pragma_c_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_149_149, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_150_150));
          }
          {
            ll_backend__pragma_c_gen__UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_149_149));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) ""));
          }
          ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_236_236;
          MR_Word ll_backend__pragma_c_gen__V_155_155;
          MR_Word ll_backend__pragma_c_gen__V_156_156;
          MR_String ll_backend__pragma_c_gen__V_157_157;
          MR_String ll_backend__pragma_c_gen__V_159_159;
          MR_String ll_backend__pragma_c_gen__V_160_160;
          MR_String ll_backend__pragma_c_gen__V_161_161;
          MR_String ll_backend__pragma_c_gen__V_163_163;
          MR_String ll_backend__pragma_c_gen__V_165_165;
          MR_String ll_backend__pragma_c_gen__V_167_167;
          MR_String ll_backend__pragma_c_gen__V_168_168;
          MR_Word ll_backend__pragma_c_gen__V_172_172;
          MR_Word ll_backend__pragma_c_gen__V_173_173;

          ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_65 == (MR_Integer) 7);
          if (ll_backend__pragma_c_gen__succeeded)
            {
              ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
            }
          else
            {
              MR_Word ll_backend__pragma_c_gen__FailLabel_68;

              {
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__FailLabel_68, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152);
              }
              {
                ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_66, 1) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_68));
              }
              {
                ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_67, 0) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_68));
              }
            }
          ll_backend__pragma_c_gen__TypeCtorInfo_236_236 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          {
            ll_backend__pragma_c_gen__V_156_156 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_236_236);
          }
          {
            ll_backend__pragma_c_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_155_155, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_156_156));
          }
          {
            ll_backend__pragma_c_gen__V_160_160 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          }
          {
            ll_backend__pragma_c_gen__V_168_168 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          }
          {
            ll_backend__pragma_c_gen__V_167_167 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_168_168, (MR_String) "\n");
          }
          {
            ll_backend__pragma_c_gen__V_165_165 = mercury__string__f_43_43_2_f_0((MR_String) "#define SUCCESS_INDICATOR ", ll_backend__pragma_c_gen__V_167_167);
          }
          {
            ll_backend__pragma_c_gen__V_163_163 = mercury__string__f_43_43_2_f_0((MR_String) "#undef SUCCESS_INDICATOR\n", ll_backend__pragma_c_gen__V_165_165);
          }
          {
            ll_backend__pragma_c_gen__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", ll_backend__pragma_c_gen__V_163_163);
          }
          {
            ll_backend__pragma_c_gen__V_159_159 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_160_160, ll_backend__pragma_c_gen__V_161_161);
          }
          {
            ll_backend__pragma_c_gen__V_157_157 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", ll_backend__pragma_c_gen__V_159_159);
          }
          {
            ll_backend__pragma_c_gen__DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_155_155));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_157_157));
          }
          {
            ll_backend__pragma_c_gen__V_173_173 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_236_236);
          }
          {
            ll_backend__pragma_c_gen__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_172_172, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_173_173));
          }
          {
            ll_backend__pragma_c_gen__UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_172_172));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) "#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n"));
          }
        }
        break;
    }
    switch (ll_backend__pragma_c_gen__MayCallMercury_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__pragma_c_gen__InstMapDelta_72;
          MR_Word ll_backend__pragma_c_gen__OkToDelete_73;
          MR_Word ll_backend__pragma_c_gen__V_110_110;
          MR_Word ll_backend__pragma_c_gen__V_111_111;
          MR_Word ll_backend__pragma_c_gen__V_179_179;
          MR_Word ll_backend__pragma_c_gen__V_180_180;

          {
            ll_backend__pragma_c_gen__V_111_111 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          {
            ll_backend__pragma_c_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_110_110, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_111_111));
          }
          {
            ll_backend__pragma_c_gen__SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_110_110));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) "\tMR_save_registers();\n"));
          }
          {
            ll_backend__pragma_c_gen__V_180_180 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          {
            ll_backend__pragma_c_gen__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_179_179, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_180_180));
          }
          {
            ll_backend__pragma_c_gen__RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_179_179));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 4) = ((MR_Box) ((MR_String) "#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n"));
          }
          {
            ll_backend__pragma_c_gen__InstMapDelta_72 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__pragma_c_gen__GoalInfo_24);
          }
          {
            ll_backend__pragma_c_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__pragma_c_gen__InstMapDelta_72);
          }
          if (ll_backend__pragma_c_gen__succeeded)
            ll_backend__pragma_c_gen__OkToDelete_73 = (MR_Integer) 0;
          else
            ll_backend__pragma_c_gen__OkToDelete_73 = (MR_Integer) 1;
          {
            ll_backend__code_loc_dep__clear_all_registers_3_p_0(ll_backend__pragma_c_gen__OkToDelete_73, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__pragma_c_gen__V_115_115;
          MR_Word ll_backend__pragma_c_gen__V_116_116;

          {
            ll_backend__pragma_c_gen__V_116_116 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          {
            ll_backend__pragma_c_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_115_115, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_116_116));
          }
          {
            ll_backend__pragma_c_gen__SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_115_115));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) ""));
          }
          ll_backend__pragma_c_gen__RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106;
        }
        break;
    }
    {
      ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, &ll_backend__pragma_c_gen__ExprnOpts_74);
    }
    {
      ll_backend__pragma_c_gen__UseFloatRegs_75 = ll_backend__llds__get_float_registers_1_f_0(ll_backend__pragma_c_gen__ExprnOpts_74);
    }
    switch (ll_backend__pragma_c_gen__UseFloatRegs_75) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__pragma_c_gen__FloatRegType_76 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        ll_backend__pragma_c_gen__FloatRegType_76 = (MR_Integer) 1;
        break;
    }
    {
      ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_76, ll_backend__pragma_c_gen__OutCArgs_37, &ll_backend__pragma_c_gen__Regs_77, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185);
    }
    {
      ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(ll_backend__pragma_c_gen__OutCArgs_37, ll_backend__pragma_c_gen__Regs_77, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__OutputDescs_78, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
    }
    {
      ll_backend__pragma_c_gen__OutputComp_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__OutputComp_79, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputDescs_78));
    }
    {
      ll_backend__pragma_c_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashDefine_52));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashDefine_48));
    }
    {
      ll_backend__pragma_c_gen__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_198_198, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashUndef_53));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_198_198, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashUndef_49));
    }
    {
      ll_backend__pragma_c_gen__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_197_197, 0) = ((MR_Box) (ll_backend__pragma_c_gen__UndefSuccessComp_70));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_197_197, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_198_198));
    }
    {
      ll_backend__pragma_c_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_196_196, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputComp_79));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_196_196, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_197_197));
    }
    {
      ll_backend__pragma_c_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_195_195, 0) = ((MR_Box) (ll_backend__pragma_c_gen__RestoreRegsComp_71));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_195_195, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_196_196));
    }
    {
      ll_backend__pragma_c_gen__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_194_194, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CheckSuccess_Comp_66));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_194_194, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_195_195));
    }
    {
      ll_backend__pragma_c_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_193_193, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLock_57));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_193_193, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_194_194));
    }
    {
      ll_backend__pragma_c_gen__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 0) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_Comp_64));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_193_193));
    }
    {
      ll_backend__pragma_c_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLock_56));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_192_192));
    }
    {
      ll_backend__pragma_c_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SaveRegsComp_55));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_191_191));
    }
    {
      ll_backend__pragma_c_gen__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputComp_54));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_190_190));
    }
    {
      ll_backend__pragma_c_gen__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 0) = ((MR_Box) (ll_backend__pragma_c_gen__DefSuccessComp_69));
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_189_189));
    }
    {
      ll_backend__pragma_c_gen__Components_80 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, ll_backend__pragma_c_gen__V_187_187, ll_backend__pragma_c_gen__V_188_188);
    }
    {
      ll_backend__pragma_c_gen__MaybeMayDupl_81 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
    if ((ll_backend__pragma_c_gen__MaybeMayDupl_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__pragma_c_gen__ExtraArgs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__pragma_c_gen__MayDupl_82 = (MR_Integer) 0;
      else
        ll_backend__pragma_c_gen__MayDupl_82 = (MR_Integer) 1;
    else
      ll_backend__pragma_c_gen__MayDupl_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeMayDupl_81, (MR_Integer) 0)));
    {
      ll_backend__pragma_c_gen__ExtraAttributes_85 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
    {
      ll_backend__pragma_c_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_extra_attribute_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ll_backend__pragma_c_gen__ExtraAttributes_85);
    }
    if (ll_backend__pragma_c_gen__succeeded)
      ll_backend__pragma_c_gen__RefersToLLDSSTack_86 = (MR_Integer) 1;
    else
      ll_backend__pragma_c_gen__RefersToLLDSSTack_86 = (MR_Integer) 0;
    ll_backend__pragma_c_gen__TypeCtorInfo_241_241 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__pragma_c_gen__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Decls_47));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Components_80));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 3) = ((MR_Box) (ll_backend__pragma_c_gen__MayCallMercury_29));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 7) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeFailLabel_67));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 9) = ((MR_Box) (ll_backend__pragma_c_gen__RefersToLLDSSTack_86));
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 10) = ((MR_Box) (ll_backend__pragma_c_gen__MayDupl_82));
    }
    {
      ll_backend__pragma_c_gen__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_200_200, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_201_201));
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_200_200, 1) = ((MR_Box) ((MR_String) "foreign_proc inclusion"));
    }
    {
      ll_backend__pragma_c_gen__PragmaCCode_87 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_200_200)));
    }
    if ((ll_backend__pragma_c_gen__MaybeFailLabel_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_65 == (MR_Integer) 7);
        if (ll_backend__pragma_c_gen__succeeded)
          {
            MR_Word ll_backend__pragma_c_gen__BeforeFailure_226;

            {
              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186, &ll_backend__pragma_c_gen__BeforeFailure_226);
            }
            {
              ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailureCode_95, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
            }
            {
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_226, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);
            }
          }
        else
          {
            {
              ll_backend__pragma_c_gen__FailureCode_95 = mercury__cord__empty_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241);
            }
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186;
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152;
          }
      }
    else
      {
        MR_Word ll_backend__pragma_c_gen__TheFailLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_67, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__SkipLabel_89;
        MR_Word ll_backend__pragma_c_gen__BeforeFailure_90;
        MR_Word ll_backend__pragma_c_gen__FailCode_91;
        MR_Word ll_backend__pragma_c_gen__GotoSkipLabelCode_92;
        MR_Word ll_backend__pragma_c_gen__SkipLabelCode_93;
        MR_Word ll_backend__pragma_c_gen__FailLabelCode_94;
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209;
        MR_Word ll_backend__pragma_c_gen__V_212_212;
        MR_Word ll_backend__pragma_c_gen__V_213_213;
        MR_Word ll_backend__pragma_c_gen__V_214_214;
        MR_Word ll_backend__pragma_c_gen__V_216_216;
        MR_Word ll_backend__pragma_c_gen__V_217_217;
        MR_Word ll_backend__pragma_c_gen__V_219_219;
        MR_Word ll_backend__pragma_c_gen__V_220_220;
        MR_Word ll_backend__pragma_c_gen__V_222_222;
        MR_Word ll_backend__pragma_c_gen__V_223_223;

        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SkipLabel_89, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209);
        }
        {
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186, &ll_backend__pragma_c_gen__BeforeFailure_90);
        }
        {
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailCode_91, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
        }
        {
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_90, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);
        }
        {
          ll_backend__pragma_c_gen__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_214_214, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_89));
        }
        {
          ll_backend__pragma_c_gen__V_213_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_213_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_213_213, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_214_214));
        }
        {
          ll_backend__pragma_c_gen__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_212_212, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_213_213));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_212_212, 1) = ((MR_Box) ((MR_String) "Skip past failure code"));
        }
        {
          ll_backend__pragma_c_gen__GotoSkipLabelCode_92 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_212_212)));
        }
        {
          ll_backend__pragma_c_gen__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_217_217, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_89));
        }
        {
          ll_backend__pragma_c_gen__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_216_216, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_217_217));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_216_216, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          ll_backend__pragma_c_gen__SkipLabelCode_93 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_216_216)));
        }
        {
          ll_backend__pragma_c_gen__V_220_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_220_220, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_220_220, 1) = ((MR_Box) (ll_backend__pragma_c_gen__TheFailLabel_88));
        }
        {
          ll_backend__pragma_c_gen__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_219_219, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_220_220));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_219_219, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          ll_backend__pragma_c_gen__FailLabelCode_94 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_219_219)));
        }
        {
          ll_backend__pragma_c_gen__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__FailCode_91, ll_backend__pragma_c_gen__SkipLabelCode_93);
        }
        {
          ll_backend__pragma_c_gen__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__FailLabelCode_94, ll_backend__pragma_c_gen__V_223_223);
        }
        {
          ll_backend__pragma_c_gen__FailureCode_95 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__GotoSkipLabelCode_92, ll_backend__pragma_c_gen__V_222_222);
        }
      }
    {
      ll_backend__pragma_c_gen__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__PragmaCCode_87, ll_backend__pragma_c_gen__FailureCode_95);
    }
    {
      ll_backend__pragma_c_gen__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__InputVarsCode_46, ll_backend__pragma_c_gen__V_225_225);
    }
    {
      *ll_backend__pragma_c_gen__Code_26 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__SaveVarsCode_41, ll_backend__pragma_c_gen__V_224_224);
    }
  }
}

static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
  MR_Word ll_backend__pragma_c_gen__Expr_5,
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__pragma_c_gen__Expr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ll_backend__pragma_c_gen__EnvVar_8;
          MR_Word ll_backend__pragma_c_gen__UsedEnvVars0_9;
          MR_Word ll_backend__pragma_c_gen__UsedEnvVars_10;
          MR_Word ll_backend__pragma_c_gen__EnvVarRval_11;
          MR_Word ll_backend__pragma_c_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
          MR_Word ll_backend__pragma_c_gen__V_27_27;
          MR_Word ll_backend__pragma_c_gen__V_28_28;

          ll_backend__pragma_c_gen__EnvVar_8 = (MR_String) ll_backend__pragma_c_gen__V_25_25;
          {
            ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__UsedEnvVars0_9);
          }
          {
            mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__pragma_c_gen__EnvVar_8)), ll_backend__pragma_c_gen__UsedEnvVars0_9, &ll_backend__pragma_c_gen__UsedEnvVars_10);
          }
          {
            ll_backend__code_info__set_used_env_vars_3_p_0(ll_backend__pragma_c_gen__UsedEnvVars_10, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) ll_backend__pragma_c_gen__EnvVar_8;
          {
            ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
          }
          {
            ll_backend__pragma_c_gen__EnvVarRval_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__EnvVarRval_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__pragma_c_gen__CondRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__EnvVarRval_11));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3])));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__pragma_c_gen__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
          MR_Word ll_backend__pragma_c_gen__RvalA_14;

          {
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_13, &ll_backend__pragma_c_gen__RvalA_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__pragma_c_gen__CondRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__pragma_c_gen__TraceOp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
          MR_Word ll_backend__pragma_c_gen__ExprB_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 2)));
          MR_Word ll_backend__pragma_c_gen__RvalB_17;
          MR_Word ll_backend__pragma_c_gen__Op_18;
          MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21;
          MR_Word ll_backend__pragma_c_gen__ExprA_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 1)));
          MR_Word ll_backend__pragma_c_gen__RvalA_33;

          {
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_32, &ll_backend__pragma_c_gen__RvalA_33, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21);
          }
          {
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprB_16, &ll_backend__pragma_c_gen__RvalB_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
          switch (ll_backend__pragma_c_gen__TraceOp_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              break;
            case (MR_Integer) 0:
              ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__pragma_c_gen__CondRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Op_18));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_33));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__RvalB_17));
          }
        }
        break;
    }
  }
}

MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0(void)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;

    return (MR_String) "MercurySuccessIndicator";
  }
}

MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_struct_name_4_f_0(
  MR_Word ll_backend__pragma_c_gen__ModuleName_6,
  MR_String ll_backend__pragma_c_gen__PredName_7,
  MR_Integer ll_backend__pragma_c_gen__Arity_8,
  MR_Integer ll_backend__pragma_c_gen__ProcId_9)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_String ll_backend__pragma_c_gen__HeadVar__5_5;
    MR_String ll_backend__pragma_c_gen__V_11_11;
    MR_String ll_backend__pragma_c_gen__V_12_12;
    MR_String ll_backend__pragma_c_gen__V_13_13;
    MR_String ll_backend__pragma_c_gen__V_15_15;
    MR_String ll_backend__pragma_c_gen__V_16_16;
    MR_String ll_backend__pragma_c_gen__V_17_17;
    MR_String ll_backend__pragma_c_gen__V_19_19;
    MR_String ll_backend__pragma_c_gen__V_20_20;
    MR_String ll_backend__pragma_c_gen__V_21_21;
    MR_String ll_backend__pragma_c_gen__V_23_23;
    MR_Integer ll_backend__pragma_c_gen__V_24_24;

    {
      ll_backend__pragma_c_gen__V_12_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__pragma_c_gen__ModuleName_6);
    }
    {
      ll_backend__pragma_c_gen__V_16_16 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__pragma_c_gen__PredName_7);
    }
    {
      ll_backend__pragma_c_gen__V_20_20 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__Arity_8);
    }
    {
      ll_backend__pragma_c_gen__V_24_24 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__pragma_c_gen__ProcId_9);
    }
    {
      ll_backend__pragma_c_gen__V_23_23 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_24_24);
    }
    {
      ll_backend__pragma_c_gen__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__pragma_c_gen__V_23_23);
    }
    {
      ll_backend__pragma_c_gen__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_20_20, ll_backend__pragma_c_gen__V_21_21);
    }
    {
      ll_backend__pragma_c_gen__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_19_19);
    }
    {
      ll_backend__pragma_c_gen__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_17_17);
    }
    {
      ll_backend__pragma_c_gen__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_15_15);
    }
    {
      ll_backend__pragma_c_gen__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_12_12, ll_backend__pragma_c_gen__V_13_13);
    }
    {
      ll_backend__pragma_c_gen__HeadVar__5_5 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_save__", ll_backend__pragma_c_gen__V_11_11);
    }
    return ll_backend__pragma_c_gen__HeadVar__5_5;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
  MR_Box ll_backend__pragma_c_gen__closure_arg)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

    {
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__385__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__pragma_c_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
  MR_Box ll_backend__pragma_c_gen__closure_arg)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

    {
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__383__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__pragma_c_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
  MR_Box ll_backend__pragma_c_gen__closure_arg)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

    {
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__381__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__pragma_c_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0(
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
  MR_Word ll_backend__pragma_c_gen__Attributes_16,
  MR_Word ll_backend__pragma_c_gen__PredId_17,
  MR_Integer ll_backend__pragma_c_gen__ProcId_18,
  MR_Word ll_backend__pragma_c_gen__Args_19,
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
  MR_Word ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21,
  MR_Word ll_backend__pragma_c_gen__PragmaImpl_22,
  MR_Word ll_backend__pragma_c_gen__GoalInfo_23,
  MR_Word * ll_backend__pragma_c_gen__Code_24,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32,
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33,
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34)
{
  {
    MR_bool ll_backend__pragma_c_gen__succeeded;
    MR_String ll_backend__pragma_c_gen__C_Code_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_22, (MR_Integer) 0)));
    MR_Word ll_backend__pragma_c_gen__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_22, (MR_Integer) 1)));

    if ((ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(ll_backend__pragma_c_gen__CodeModel_15, ll_backend__pragma_c_gen__Attributes_16, ll_backend__pragma_c_gen__PredId_17, ll_backend__pragma_c_gen__ProcId_18, ll_backend__pragma_c_gen__Args_19, ll_backend__pragma_c_gen__ExtraArgs_20, ll_backend__pragma_c_gen__C_Code_27, ll_backend__pragma_c_gen__Context_28, ll_backend__pragma_c_gen__GoalInfo_23, (MR_Integer) 1, ll_backend__pragma_c_gen__Code_24, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34);
        }
      }
    else
      {
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_33_83;
        MR_Word ll_backend__pragma_c_gen__TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21, (MR_Integer) 0)));
        MR_Word ll_backend__pragma_c_gen__V_35_35;
        MR_Word ll_backend__pragma_c_gen__V_40_40;
        MR_Word ll_backend__pragma_c_gen__V_45_45;
        MR_Word ll_backend__pragma_c_gen__CondRval_65;
        MR_Word ll_backend__pragma_c_gen__SuccessLabel_66;
        MR_Word ll_backend__pragma_c_gen__BeforeFailure_67;
        MR_Word ll_backend__pragma_c_gen__FailCode_68;
        MR_Word ll_backend__pragma_c_gen__CondCode_69;
        MR_Word ll_backend__pragma_c_gen__SuccessLabelCode_70;
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71;
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72;
        MR_Word ll_backend__pragma_c_gen__V_75_75;
        MR_Word ll_backend__pragma_c_gen__V_76_76;
        MR_Word ll_backend__pragma_c_gen__V_77_77;
        MR_Word ll_backend__pragma_c_gen__V_79_79;
        MR_Word ll_backend__pragma_c_gen__V_80_80;
        MR_Word ll_backend__pragma_c_gen__V_82_82;

        {
          ll_backend__pragma_c_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 3) = ((MR_Box) (ll_backend__pragma_c_gen__Args_19));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_35_35, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "args runtime cond");
        }
        {
          ll_backend__pragma_c_gen__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 3) = ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_20));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_40_40, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "extra args runtime cond");
        }
        {
          ll_backend__pragma_c_gen__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 3) = ((MR_Box) (ll_backend__pragma_c_gen__CodeModel_15));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_45_45, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "non-semi runtime cond");
        }
        {
          ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__TraceRuntimeCond_30, &ll_backend__pragma_c_gen__CondRval_65, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SuccessLabel_66, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72);
        }
        {
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33, &ll_backend__pragma_c_gen__BeforeFailure_67);
        }
        {
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailCode_68, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33);
        }
        {
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_67, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34);
        }
        ll_backend__pragma_c_gen__TypeCtorInfo_33_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__pragma_c_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_77_77, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_66));
        }
        {
          ll_backend__pragma_c_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CondRval_65));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 2) = ((MR_Box) (ll_backend__pragma_c_gen__V_77_77));
        }
        {
          ll_backend__pragma_c_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_76_76));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "environment variable tests"));
        }
        {
          ll_backend__pragma_c_gen__CondCode_69 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ((MR_Box) (ll_backend__pragma_c_gen__V_75_75)));
        }
        {
          ll_backend__pragma_c_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_80_80, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_66));
        }
        {
          ll_backend__pragma_c_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_80_80));
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, 1) = ((MR_Box) ((MR_String) "environment variable tests successful"));
        }
        {
          ll_backend__pragma_c_gen__SuccessLabelCode_70 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ((MR_Box) (ll_backend__pragma_c_gen__V_79_79)));
        }
        {
          ll_backend__pragma_c_gen__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ll_backend__pragma_c_gen__FailCode_68, ll_backend__pragma_c_gen__SuccessLabelCode_70);
        }
        {
          *ll_backend__pragma_c_gen__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ll_backend__pragma_c_gen__CondCode_69, ll_backend__pragma_c_gen__V_82_82);
        }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.pragma_c_gen. */
