/*
** Automatically generated from `use_local_vars.m'
** by the Mercury compiler,
** version DEV
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


/* :- module ll_backend.use_local_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__use_local_vars__init
ENDINIT
*/

#include "ll_backend.use_local_vars.mih"


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
#include "ll_backend.basic_block.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.opt_util.mih"
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



struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s {
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2;
  MR_bool ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded;
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_13;
  jmp_buf ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0;
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25;
  MR_Word ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Var_33;
  MR_Box ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_25;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_PseudoTypeInfo ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0[1];

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0;

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1;

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1[1];

static const MR_DuPtagLayout ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0[2];

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0[2];

static const MR_Integer ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0[2];

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__550__1_2_p_0(
  MR_Integer ll_backend__use_local_vars__NumSubsts_32,
  MR_Integer ll_backend__use_local_vars__HeadVar__2_46);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__541__1_2_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_5,
  MR_Word ll_backend__use_local_vars__ToLval_50);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__535__1_2_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_5,
  MR_Word ll_backend__use_local_vars__ToLval_11);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__419__1_2_p_0(
  MR_Word ll_backend__use_local_vars__SubChosenLvals_32,
  MR_Word ll_backend__use_local_vars__HeadVar__2_52);

static void MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__369__1_3_p_0(
  MR_Word ll_backend__use_local_vars__LiveMap_33,
  MR_Word ll_backend__use_local_vars__HeadVar__2_64,
  MR_Word * ll_backend__use_local_vars__HeadVar__3_65);

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__344__1_2_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
  MR_Word ll_backend__use_local_vars__HeadVar__2_46);

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(
  MR_Word * ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(
  MR_Word ll_backend__use_local_vars__AlreadyTried_4,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
  MR_Word ll_backend__use_local_vars__Lval_6);

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_block_6_p_0(
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_8,
  MR_Integer ll_backend__use_local_vars__AccessThreshold_9,
  MR_Word ll_backend__use_local_vars__Label_10,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24,
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_2(
  MR_Box ll_backend__use_local_vars__closure_arg);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1);

static void MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
  MR_Word ll_backend__use_local_vars__AlreadyTried0_6,
  MR_Integer ll_backend__use_local_vars__AccessThreshold_7);

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2,
  MR_Box ll_backend__use_local_vars__wrapper_arg_3,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_4);

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6,
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_8);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_1,
  MR_Word ll_backend__use_local_vars__NewLval_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_0_5,
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_N_6);

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_affect_liveness_1_f_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(
  void * ll_backend__use_local_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_3(
  void * ll_backend__use_local_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(
  void * ll_backend__use_local_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(
  void * ll_backend__use_local_vars__env_ptr_arg);

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(
  MR_Word ll_backend__use_local_vars__Lval_4,
  MR_Word ll_backend__use_local_vars__OldLval_5);

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3(
  MR_Box ll_backend__use_local_vars__closure_arg);

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2(
  MR_Box ll_backend__use_local_vars__closure_arg);

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_5,
  MR_Word ll_backend__use_local_vars__NewLval_6,
  MR_Word ll_backend__use_local_vars__Instr0_7,
  MR_Word * ll_backend__use_local_vars__Instr_8);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);

static MR_Word MR_CALL 
ll_backend__use_local_vars__reg_type_for_lval_1_f_0(
  MR_Word ll_backend__use_local_vars__Lval_3);

static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_3,
  MR_Word ll_backend__use_local_vars__Lval_4);

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg);

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_2,
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_3,
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
  MR_Word * ll_backend__use_local_vars__HeadVar__5_5);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
  MR_Word * ll_backend__use_local_vars__ToLval_9);

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
  MR_Word * ll_backend__use_local_vars__ToLval_9);

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001(
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box ll_backend__use_local_vars__wrapper_arg_2);

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001(
  MR_Box * ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
  MR_Box ll_backend__use_local_vars__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_1[1][3];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_2[2][2];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_3[2][9];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_4[4][5];

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_5[2][6];




static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__use_local_vars_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__maybe__pti_maybe_1__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__use_local_vars__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__basic_block__type_ctor_info_block_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__use_local_vars__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__use_local_vars__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_PseudoTypeInfo ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__use_local_vars__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0 = {
  (MR_String) "known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__use_local_vars__ll_backend__use_local_vars__field_types_maybe_compulsory_lvals_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1 = {
  (MR_String) "unknown_must_assume_all",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0[1] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1
};

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1[1] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0
};

static const MR_DuPtagLayout ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__use_local_vars__ll_backend__use_local_vars__du_stag_ordered_maybe_compulsory_lvals_0_1
  }
};

static const MR_DuFunctorDescPtr ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0[2] = {
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_0,
  &ll_backend__use_local_vars__ll_backend__use_local_vars__du_functor_desc_maybe_compulsory_lvals_0_1
};

static const MR_Integer ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__use_local_vars__ll_backend__use_local_vars__type_ctor_info_maybe_compulsory_lvals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001)),
  ((MR_Box) (ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001)),
  (MR_String) "ll_backend.use_local_vars",
  (MR_String) "maybe_compulsory_lvals",
  {     ll_backend__use_local_vars__ll_backend__use_local_vars__du_name_ordered_maybe_compulsory_lvals_0 },
  {     ll_backend__use_local_vars__ll_backend__use_local_vars__du_ptag_ordered_maybe_compulsory_lvals_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__use_local_vars__ll_backend__use_local_vars__functor_number_map_maybe_compulsory_lvals_0
};

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__550__1_2_p_0(
  MR_Integer ll_backend__use_local_vars__NumSubsts_32,
  MR_Integer ll_backend__use_local_vars__HeadVar__2_46)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumSubsts_32 == ll_backend__use_local_vars__HeadVar__2_46);

    return ll_backend__use_local_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__541__1_2_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_5,
  MR_Word ll_backend__use_local_vars__ToLval_50)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__ToLval_50, ll_backend__use_local_vars__OldLval_5);
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__535__1_2_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_5,
  MR_Word ll_backend__use_local_vars__ToLval_11)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__ToLval_11, ll_backend__use_local_vars__OldLval_5);
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__419__1_2_p_0(
  MR_Word ll_backend__use_local_vars__SubChosenLvals_32,
  MR_Word ll_backend__use_local_vars__HeadVar__2_52)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    {
      ll_backend__use_local_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__use_local_vars_scalar_common_2[1], ((MR_Box) (ll_backend__use_local_vars__SubChosenLvals_32)), ((MR_Box) (ll_backend__use_local_vars__HeadVar__2_52)));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__369__1_3_p_0(
  MR_Word ll_backend__use_local_vars__LiveMap_33,
  MR_Word ll_backend__use_local_vars__HeadVar__2_64,
  MR_Word * ll_backend__use_local_vars__HeadVar__3_65)
{
  {
    MR_Box ll_backend__use_local_vars__conv0_HeadVar__3_65;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__LiveMap_33, ((MR_Box) (ll_backend__use_local_vars__HeadVar__2_64)), &ll_backend__use_local_vars__conv0_HeadVar__3_65);
    }
    *ll_backend__use_local_vars__HeadVar__3_65 = ((MR_Word) ll_backend__use_local_vars__conv0_HeadVar__3_65);
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__344__1_2_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
  MR_Word ll_backend__use_local_vars__HeadVar__2_46)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__HeadVar__4_4 == ll_backend__use_local_vars__HeadVar__2_46);

    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(
  MR_Word * ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Integer ll_backend__use_local_vars__CastX_8 = (MR_Integer) ll_backend__use_local_vars__HeadVar__2_2;
    MR_Integer ll_backend__use_local_vars__CastY_9 = (MR_Integer) ll_backend__use_local_vars__HeadVar__3_3;

    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__CastX_8 == ll_backend__use_local_vars__CastY_9);
    if (ll_backend__use_local_vars__succeeded)
      *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((ll_backend__use_local_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 0;
      else
        *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word ll_backend__use_local_vars__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__use_local_vars__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word ll_backend__use_local_vars__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__HeadVar__1_1, ((MR_Box) (ll_backend__use_local_vars__Var_11)), ((MR_Box) (ll_backend__use_local_vars__ArgY1_5)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Integer ll_backend__use_local_vars__CastX_7 = (MR_Integer) ll_backend__use_local_vars__HeadVar__1_1;
    MR_Integer ll_backend__use_local_vars__CastY_8 = (MR_Integer) ll_backend__use_local_vars__HeadVar__2_2;

    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__CastX_7 == ll_backend__use_local_vars__CastY_8);
    if (ll_backend__use_local_vars__succeeded)
      ll_backend__use_local_vars__succeeded = MR_TRUE;
    else
    if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ll_backend__use_local_vars__CastX_5 = (MR_Integer) ll_backend__use_local_vars__HeadVar__1_1;
        MR_Integer ll_backend__use_local_vars__CastY_6 = (MR_Integer) ll_backend__use_local_vars__HeadVar__2_2;

        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__CastY_6 == ll_backend__use_local_vars__CastX_5);
      }
    else
      {
        MR_Word ll_backend__use_local_vars__TypeInfo_9_9;
        MR_Word ll_backend__use_local_vars__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__use_local_vars__ArgY1_4;

        ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__use_local_vars__succeeded)
          {
            ll_backend__use_local_vars__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__use_local_vars__TypeInfo_9_9 = (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0];
            {
              ll_backend__use_local_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__use_local_vars__TypeInfo_9_9, ((MR_Box) (ll_backend__use_local_vars__ArgX1_3)), ((MR_Box) (ll_backend__use_local_vars__ArgY1_4)));
            }
          }
      }
    return ll_backend__use_local_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(
  MR_Word ll_backend__use_local_vars__AlreadyTried_4,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
  MR_Word ll_backend__use_local_vars__Lval_6)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    {
      ll_backend__use_local_vars__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__use_local_vars__Lval_6)), ll_backend__use_local_vars__AlreadyTried_4);
    }
    ll_backend__use_local_vars__succeeded = !(ll_backend__use_local_vars__succeeded);
    if (ll_backend__use_local_vars__succeeded)
      switch (MR_tag((MR_Word) ll_backend__use_local_vars__Lval_6)) {
        default:
          ll_backend__use_local_vars__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ll_backend__use_local_vars__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_6, (MR_Integer) 1)));
            MR_Word ll_backend__use_local_vars__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_6, (MR_Integer) 0)));

            switch (ll_backend__use_local_vars__Var_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__use_local_vars__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__Var_18 > ll_backend__use_local_vars__NumRealRRegs_5);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_6, (MR_Integer) 0)))) {
            default:
              ll_backend__use_local_vars__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              ll_backend__use_local_vars__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              ll_backend__use_local_vars__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              ll_backend__use_local_vars__succeeded = MR_TRUE;
              break;
          }
          break;
      }
    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_block_6_p_0(
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_8,
  MR_Integer ll_backend__use_local_vars__AccessThreshold_9,
  MR_Word ll_backend__use_local_vars__Label_10,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24,
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Word ll_backend__use_local_vars__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    MR_Word ll_backend__use_local_vars__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0;
    MR_Word ll_backend__use_local_vars__BlockInfo0_12;
    MR_Word ll_backend__use_local_vars__BlockLabel_13;
    MR_Word ll_backend__use_local_vars__LabelInstr_14;
    MR_Word ll_backend__use_local_vars__RestInstrs0_15;
    MR_Integer ll_backend__use_local_vars__BlockSize_16;
    MR_Word ll_backend__use_local_vars__FallInto_17;
    MR_Word ll_backend__use_local_vars__JumpLabels_18;
    MR_Word ll_backend__use_local_vars__MaybeFallThrough_19;
    MR_Box ll_backend__use_local_vars__conv0_BlockInfo0_12;

    {
      mercury__map__lookup_3_p_0(ll_backend__use_local_vars__TypeCtorInfo_29_29, ll_backend__use_local_vars__TypeCtorInfo_30_30, ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24, ((MR_Box) (ll_backend__use_local_vars__Label_10)), &ll_backend__use_local_vars__conv0_BlockInfo0_12);
    }
    ll_backend__use_local_vars__BlockInfo0_12 = ((MR_Word) ll_backend__use_local_vars__conv0_BlockInfo0_12);
    ll_backend__use_local_vars__BlockLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 0)));
    ll_backend__use_local_vars__LabelInstr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 1)));
    ll_backend__use_local_vars__RestInstrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 2)));
    ll_backend__use_local_vars__BlockSize_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 3)));
    ll_backend__use_local_vars__FallInto_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 4)));
    ll_backend__use_local_vars__JumpLabels_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 5)));
    ll_backend__use_local_vars__MaybeFallThrough_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo0_12, (MR_Integer) 6)));
    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__BlockSize_16 < (MR_Integer) 200);
    if (ll_backend__use_local_vars__succeeded)
      {
        MR_Word ll_backend__use_local_vars__TempCounter0_20;
        MR_Word ll_backend__use_local_vars__RestInstrs_21;
        MR_Word ll_backend__use_local_vars__TempCounter_22;
        MR_Word ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42;
        MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43;

        {
          mercury__counter__init_2_p_0((MR_Integer) 1, &ll_backend__use_local_vars__TempCounter0_20);
        }
        {
          ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__RestInstrs0_15, &ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42, ll_backend__use_local_vars__TempCounter0_20, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43, ll_backend__use_local_vars__NumRealRRegs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_19);
        }
        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__AccessThreshold_9 >= (MR_Integer) 1);
        if (ll_backend__use_local_vars__succeeded)
          {
            MR_Word ll_backend__use_local_vars__Var_48;

            {
              ll_backend__use_local_vars__Var_48 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
            }
            {
              ll_backend__use_local_vars__opt_access_7_p_0(ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42, &ll_backend__use_local_vars__RestInstrs_21, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43, &ll_backend__use_local_vars__TempCounter_22, ll_backend__use_local_vars__NumRealRRegs_8, ll_backend__use_local_vars__Var_48, ll_backend__use_local_vars__AccessThreshold_9);
            }
          }
        else
          {
            ll_backend__use_local_vars__TempCounter_22 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_20_43;
            ll_backend__use_local_vars__RestInstrs_21 = ll_backend__use_local_vars__STATE_VARIABLE_RestInstrs_19_42;
          }
        {
          ll_backend__use_local_vars__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__use_local_vars__TempCounter_22, ll_backend__use_local_vars__TempCounter0_20);
        }
        if (ll_backend__use_local_vars__succeeded)
          *ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25 = ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24;
        else
          {
            MR_Word ll_backend__use_local_vars__BlockInfo_23;

            {
              ll_backend__use_local_vars__BlockInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 0) = ((MR_Box) (ll_backend__use_local_vars__BlockLabel_13));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 1) = ((MR_Box) (ll_backend__use_local_vars__LabelInstr_14));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 2) = ((MR_Box) (ll_backend__use_local_vars__RestInstrs_21));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 3) = ((MR_Box) (ll_backend__use_local_vars__BlockSize_16));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 4) = ((MR_Box) (ll_backend__use_local_vars__FallInto_17));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 5) = ((MR_Box) (ll_backend__use_local_vars__JumpLabels_18));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__BlockInfo_23, 6) = ((MR_Box) (ll_backend__use_local_vars__MaybeFallThrough_19));
            }
            {
              mercury__map__det_update_4_p_0(ll_backend__use_local_vars__TypeCtorInfo_29_29, ll_backend__use_local_vars__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__use_local_vars__Label_10)), ((MR_Box) (ll_backend__use_local_vars__BlockInfo_23)), ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24, ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25);
            }
          }
      }
    else
      *ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_25 = ll_backend__use_local_vars__STATE_VARIABLE_BlockMap_0_24;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_2(
  MR_Box ll_backend__use_local_vars__closure_arg)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__opt_access__419__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__base_lval_worth_replacing_not_tried_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__opt_access_7_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
  MR_Word ll_backend__use_local_vars__AlreadyTried0_6,
  MR_Integer ll_backend__use_local_vars__AccessThreshold_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__use_local_vars__succeeded;

        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__use_local_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3;
          }
        else
          {
            MR_Word ll_backend__use_local_vars__Instr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__use_local_vars__TailInstrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__use_local_vars__Uinstr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 0)));
            MR_String ll_backend__use_local_vars___Comment0_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 1)));
            MR_Word ll_backend__use_local_vars__ChosenLval_27;
            MR_Word ll_backend__use_local_vars__ChooseableRvals_28;
            MR_Word ll_backend__use_local_vars__TypeCtorInfo_68_68;
            MR_Word ll_backend__use_local_vars__ToLval_23;
            MR_Word ll_backend__use_local_vars__FromRval_24;
            MR_Word ll_backend__use_local_vars__SubLvals_25;
            MR_Word ll_backend__use_local_vars__ReplaceableSubLvals_26;
            MR_Word ll_backend__use_local_vars__Var_43;
            MR_Word ll_backend__use_local_vars__Var_44;
            MR_Word ll_backend__use_local_vars__Var_45;

            ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__use_local_vars__succeeded)
              {
                ll_backend__use_local_vars__ToLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_21, (MR_Integer) 1)));
                ll_backend__use_local_vars__FromRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_21, (MR_Integer) 2)));
                ll_backend__use_local_vars__TypeCtorInfo_68_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  ll_backend__use_local_vars__Var_43 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__use_local_vars__ToLval_23);
                }
                {
                  ll_backend__use_local_vars__Var_44 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__use_local_vars__FromRval_24);
                }
                {
                  ll_backend__use_local_vars__SubLvals_25 = mercury__list__f_43_43_2_f_0(ll_backend__use_local_vars__TypeCtorInfo_68_68, ll_backend__use_local_vars__Var_43, ll_backend__use_local_vars__Var_44);
                }
                {
                  ll_backend__use_local_vars__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_45, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_45, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_access_7_p_0_1));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_45, 3) = ((MR_Box) (ll_backend__use_local_vars__AlreadyTried0_6));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_45, 4) = ((MR_Box) (ll_backend__use_local_vars__NumRealRRegs_5));
                }
                {
                  mercury__list__filter_3_p_0(ll_backend__use_local_vars__TypeCtorInfo_68_68, ll_backend__use_local_vars__Var_45, ll_backend__use_local_vars__SubLvals_25, &ll_backend__use_local_vars__ReplaceableSubLvals_26);
                }
                ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__ReplaceableSubLvals_26)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__use_local_vars__succeeded)
                  {
                    ll_backend__use_local_vars__ChosenLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ReplaceableSubLvals_26, (MR_Integer) 0)));
                    ll_backend__use_local_vars__ChooseableRvals_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ReplaceableSubLvals_26, (MR_Integer) 1)));
                  }
              }
            if (ll_backend__use_local_vars__succeeded)
              {
                MR_Word ll_backend__use_local_vars__TypeCtorInfo_71_71;
                MR_Integer ll_backend__use_local_vars__TempNum_30;
                MR_Word ll_backend__use_local_vars__TempLval_31;
                MR_Word ll_backend__use_local_vars__SubChosenLvals_32;
                MR_Word ll_backend__use_local_vars__Instrs1_33;
                MR_Integer ll_backend__use_local_vars__NumReplacements_34;
                MR_Word ll_backend__use_local_vars__AlreadyTried1_35;
                MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_46_46;
                MR_Word ll_backend__use_local_vars__Var_47;
                MR_Word ll_backend__use_local_vars__Var_48;

                {
                  mercury__counter__allocate_3_p_0(&ll_backend__use_local_vars__TempNum_30, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_46_46);
                }
                switch (MR_tag((MR_Word) ll_backend__use_local_vars__ChosenLval_27)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__use_local_vars__Var_47 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer ll_backend__use_local_vars__Var_75;

                      ll_backend__use_local_vars__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 0)));
                      ll_backend__use_local_vars__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 1)));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer ll_backend__use_local_vars__Var_76;

                      ll_backend__use_local_vars__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 0)));
                      ll_backend__use_local_vars__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 1)));
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__ChosenLval_27, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 10:
                      case (MR_Integer) 11:
                      case (MR_Integer) 12:
                        ll_backend__use_local_vars__Var_47 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 3:
                        ll_backend__use_local_vars__Var_47 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
                {
                  ll_backend__use_local_vars__TempLval_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__TempLval_31, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_47));
                  MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__TempLval_31, 1) = ((MR_Box) (ll_backend__use_local_vars__TempNum_30));
                }
                {
                  ll_backend__use_local_vars__SubChosenLvals_32 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__use_local_vars__ChosenLval_27);
                }
                {
                  ll_backend__use_local_vars__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_48, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_48, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_access_7_p_0_2));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_48, 3) = ((MR_Box) (ll_backend__use_local_vars__SubChosenLvals_32));
                  MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mercury__require__expect_4_p_0(ll_backend__use_local_vars__Var_48, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.opt_access\'/7", (MR_String) "nonempty SubChosenLvals");
                }
                {
                  ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__ChosenLval_27, ll_backend__use_local_vars__TempLval_31, ll_backend__use_local_vars__HeadVar__1_1, &ll_backend__use_local_vars__Instrs1_33, (MR_Integer) 0, &ll_backend__use_local_vars__NumReplacements_34);
                }
                ll_backend__use_local_vars__TypeCtorInfo_71_71 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  mercury__set__insert_3_p_0(ll_backend__use_local_vars__TypeCtorInfo_71_71, ((MR_Box) (ll_backend__use_local_vars__ChosenLval_27)), ll_backend__use_local_vars__AlreadyTried0_6, &ll_backend__use_local_vars__AlreadyTried1_35);
                }
                ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumReplacements_34 >= ll_backend__use_local_vars__AccessThreshold_7);
                if (ll_backend__use_local_vars__succeeded)
                  {
                    MR_Word ll_backend__use_local_vars__TempAssign_36;
                    MR_Word ll_backend__use_local_vars__Instrs2_37;
                    MR_Word ll_backend__use_local_vars__Var_55;
                    MR_Word ll_backend__use_local_vars__Var_56;

                    {
                      ll_backend__use_local_vars__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_56, 0) = ((MR_Box) (ll_backend__use_local_vars__ChosenLval_27));
                    }
                    {
                      ll_backend__use_local_vars__Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Var_55, 1) = ((MR_Box) (ll_backend__use_local_vars__TempLval_31));
                      MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Var_55, 2) = ((MR_Box) (ll_backend__use_local_vars__Var_56));
                    }
                    {
                      ll_backend__use_local_vars__TempAssign_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__TempAssign_36, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_55));
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__TempAssign_36, 1) = ((MR_Box) ((MR_String) "factor out common sub lval"));
                    }
                    {
                      ll_backend__use_local_vars__Instrs2_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs2_37, 0) = ((MR_Box) (ll_backend__use_local_vars__TempAssign_36));
                      MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs2_37, 1) = ((MR_Box) (ll_backend__use_local_vars__Instrs1_33));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Instrs2_37;
                      MR_Word ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_46_46;
                      MR_Word ll_backend__use_local_vars__next_value_of_AlreadyTried0_6 = ll_backend__use_local_vars__AlreadyTried1_35;

                      ll_backend__use_local_vars__AlreadyTried0_6 = ll_backend__use_local_vars__next_value_of_AlreadyTried0_6;
                      ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_TempCounter_0_3;
                      ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                else
                if ((ll_backend__use_local_vars__ChooseableRvals_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word ll_backend__use_local_vars__TailInstrs_40;
                    MR_Word ll_backend__use_local_vars__Var_61;

                    {
                      ll_backend__use_local_vars__Var_61 = mercury__set__init_0_f_0(ll_backend__use_local_vars__TypeCtorInfo_71_71);
                    }
                    {
                      ll_backend__use_local_vars__opt_access_7_p_0(ll_backend__use_local_vars__TailInstrs0_15, &ll_backend__use_local_vars__TailInstrs_40, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__Var_61, ll_backend__use_local_vars__AccessThreshold_7);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__use_local_vars__HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_14));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_40));
                    }
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__use_local_vars__next_value_of_AlreadyTried0_6 = ll_backend__use_local_vars__AlreadyTried1_35;

                      ll_backend__use_local_vars__AlreadyTried0_6 = ll_backend__use_local_vars__next_value_of_AlreadyTried0_6;
                    }
                    continue;
                  }
              }
            else
              {
                MR_Word ll_backend__use_local_vars__Var_66;
                MR_Word ll_backend__use_local_vars__TailInstrs_67;

                {
                  ll_backend__use_local_vars__Var_66 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                }
                {
                  ll_backend__use_local_vars__opt_access_7_p_0(ll_backend__use_local_vars__TailInstrs0_15, &ll_backend__use_local_vars__TailInstrs_67, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__Var_66, ll_backend__use_local_vars__AccessThreshold_7);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__use_local_vars__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_14));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_67));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2,
  MR_Box ll_backend__use_local_vars__wrapper_arg_3,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_4)
{
  {
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;
    MR_Word ll_backend__use_local_vars__conv1_HeadVar__4_4;
    MR_Integer ll_backend__use_local_vars__conv0_HeadVar__6_6;

    {
      ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), &ll_backend__use_local_vars__conv1_HeadVar__4_4, ((MR_Integer) ll_backend__use_local_vars__wrapper_arg_3), &ll_backend__use_local_vars__conv0_HeadVar__6_6);
    }
    *ll_backend__use_local_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__use_local_vars__conv1_HeadVar__4_4));
    *ll_backend__use_local_vars__wrapper_arg_4 = ((MR_Box) (ll_backend__use_local_vars__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
ll_backend__use_local_vars__opt_assign_8_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word * ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3,
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_5,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6,
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_7,
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__use_local_vars__succeeded;

        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__use_local_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3;
          }
        else
          {
            MR_Word ll_backend__use_local_vars__Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__use_local_vars__TailInstrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__use_local_vars__Uinstr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_16, (MR_Integer) 0)));
            MR_String ll_backend__use_local_vars___Comment0_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_16, (MR_Integer) 1)));
            MR_Word ll_backend__use_local_vars__ToLval_26;
            MR_Word ll_backend__use_local_vars__MaybeMore_35;

            switch (MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_24)) {
              default:
                ll_backend__use_local_vars__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 0)))) {
                  default:
                    ll_backend__use_local_vars__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__use_local_vars___FromRval_27;

                      ll_backend__use_local_vars__ToLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 1)));
                      ll_backend__use_local_vars___FromRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 2)));
                      {
                        ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__ToLval_26);
                      }
                      if (ll_backend__use_local_vars__succeeded)
                        {
                          ll_backend__use_local_vars__MaybeMore_35 = (MR_Integer) 0;
                          ll_backend__use_local_vars__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word ll_backend__use_local_vars___MaybeTag_28;
                      MR_Word ll_backend__use_local_vars___SizeRval_29;
                      MR_Word ll_backend__use_local_vars___MO_30;
                      MR_Word ll_backend__use_local_vars___Type_31;
                      MR_Word ll_backend__use_local_vars___Atomic_32;
                      MR_Word ll_backend__use_local_vars__Var_33;
                      MR_Word ll_backend__use_local_vars__Var_34;

                      ll_backend__use_local_vars__ToLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 1)));
                      ll_backend__use_local_vars___MaybeTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 2)));
                      ll_backend__use_local_vars___SizeRval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 3)));
                      ll_backend__use_local_vars___MO_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 4)));
                      ll_backend__use_local_vars___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 5)));
                      ll_backend__use_local_vars___Atomic_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 6)));
                      ll_backend__use_local_vars__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 7)));
                      ll_backend__use_local_vars__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 8)));
                      {
                        ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__ToLval_26);
                      }
                      if (ll_backend__use_local_vars__succeeded)
                        {
                          ll_backend__use_local_vars__MaybeMore_35 = (MR_Integer) 0;
                          ll_backend__use_local_vars__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 27:
                    {
                      MR_Word ll_backend__use_local_vars__Comps_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 2)));
                      MR_Word ll_backend__use_local_vars___D_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 1)));
                      MR_Word ll_backend__use_local_vars___MCM_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 3)));
                      MR_Word ll_backend__use_local_vars___FNL_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 4)));
                      MR_Word ll_backend__use_local_vars___FL_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 5)));
                      MR_Word ll_backend__use_local_vars___FOL_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 6)));
                      MR_Word ll_backend__use_local_vars___NF_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 7)));
                      MR_Word ll_backend__use_local_vars___MDL_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 8)));
                      MR_Word ll_backend__use_local_vars___S_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 9)));
                      MR_Word ll_backend__use_local_vars___MD_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_24, (MR_Integer) 10)));

                      {
                        ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(ll_backend__use_local_vars__Comps_37, ll_backend__use_local_vars__NumRealRRegs_5, ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6, &ll_backend__use_local_vars__ToLval_26);
                      }
                      if (ll_backend__use_local_vars__succeeded)
                        {
                          ll_backend__use_local_vars__MaybeMore_35 = (MR_Integer) 1;
                          ll_backend__use_local_vars__succeeded = MR_TRUE;
                        }
                    }
                    break;
                }
                break;
            }
            if (ll_backend__use_local_vars__succeeded)
              {
                MR_Word ll_backend__use_local_vars__MaybeCompulsoryLvals_48;
                MR_Word ll_backend__use_local_vars__CompulsoryLvals_49;
                MR_Word ll_backend__use_local_vars__Var_62;
                MR_Word ll_backend__use_local_vars__Var_46;
                MR_Integer ll_backend__use_local_vars__Var_47;
                MR_Word ll_backend__use_local_vars__TypeCtorInfo_122_122;

                ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__ToLval_26)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__use_local_vars__succeeded)
                  {
                    ll_backend__use_local_vars__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 0)));
                    ll_backend__use_local_vars__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 1)));
                    ll_backend__use_local_vars__Var_62 = (MR_Integer) 0;
                    {
                      ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(ll_backend__use_local_vars__TailInstrs0_17, ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8, ll_backend__use_local_vars__Var_62, &ll_backend__use_local_vars__MaybeCompulsoryLvals_48);
                    }
                    ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__MaybeCompulsoryLvals_48)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__use_local_vars__succeeded)
                      {
                        ll_backend__use_local_vars__CompulsoryLvals_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeCompulsoryLvals_48, (MR_Integer) 0)));
                        ll_backend__use_local_vars__TypeCtorInfo_122_122 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                        {
                          ll_backend__use_local_vars__succeeded = mercury__set__member_2_p_0(ll_backend__use_local_vars__TypeCtorInfo_122_122, ((MR_Box) (ll_backend__use_local_vars__ToLval_26)), ll_backend__use_local_vars__CompulsoryLvals_49);
                        }
                        ll_backend__use_local_vars__succeeded = !(ll_backend__use_local_vars__succeeded);
                      }
                  }
                if (ll_backend__use_local_vars__succeeded)
                  {
                    MR_Word ll_backend__use_local_vars__TypeCtorInfo_127_127;
                    MR_Integer ll_backend__use_local_vars__TempNum_50;
                    MR_Word ll_backend__use_local_vars__NewLval_51;
                    MR_Word ll_backend__use_local_vars__Instr_52;
                    MR_Word ll_backend__use_local_vars__TailInstrs1_53;
                    MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63;
                    MR_Word ll_backend__use_local_vars__Var_64;
                    MR_Word ll_backend__use_local_vars__Var_65;
                    MR_Integer ll_backend__use_local_vars__Var_131;
                    MR_Integer ll_backend__use_local_vars__Var_54;
                    MR_Box ll_backend__use_local_vars__conv2_Var_54;

                    {
                      mercury__counter__allocate_3_p_0(&ll_backend__use_local_vars__TempNum_50, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63);
                    }
                    ll_backend__use_local_vars__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 0)));
                    ll_backend__use_local_vars__Var_131 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__ToLval_26, (MR_Integer) 1)));
                    {
                      ll_backend__use_local_vars__NewLval_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_51, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_64));
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_51, 1) = ((MR_Box) (ll_backend__use_local_vars__TempNum_50));
                    }
                    {
                      ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(ll_backend__use_local_vars__ToLval_26, ll_backend__use_local_vars__NewLval_51, ll_backend__use_local_vars__Instr0_16, &ll_backend__use_local_vars__Instr_52);
                    }
                    {
                      ll_backend__use_local_vars__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_65, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_3[1]));
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_65, 1) = ((MR_Box) (ll_backend__use_local_vars__opt_assign_8_p_0_1));
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_65, 3) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
                      MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_65, 4) = ((MR_Box) (ll_backend__use_local_vars__NewLval_51));
                    }
                    ll_backend__use_local_vars__TypeCtorInfo_127_127 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    {
                      mercury__list__map_foldl_5_p_0(ll_backend__use_local_vars__TypeCtorInfo_127_127, ll_backend__use_local_vars__TypeCtorInfo_127_127, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__use_local_vars__Var_65, ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs1_53, ((MR_Box) ((MR_Integer) 0)), &ll_backend__use_local_vars__conv2_Var_54);
                    }
                    ll_backend__use_local_vars__Var_54 = ((MR_Integer) ll_backend__use_local_vars__conv2_Var_54);
                    switch (ll_backend__use_local_vars__MaybeMore_35) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ll_backend__use_local_vars__TailInstrs_55;

                          {
                            ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs1_53, &ll_backend__use_local_vars__TailInstrs_55, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ll_backend__use_local_vars__HeadVar__2_2 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_52));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_55));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__use_local_vars__Instrs1_56;
                          MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90;

                          {
                            ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90, 0) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
                            MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90, 1) = ((MR_Box) (ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6));
                          }
                          {
                            ll_backend__use_local_vars__Instrs1_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_56, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_52));
                            MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_56, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs1_53));
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Instrs1_56;
                            MR_Word ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_63_63;
                            MR_Word ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_90;

                            ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_AvoidLvals_0_6;
                            ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_TempCounter_0_3;
                            ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                        break;
                    }
                  }
                else
                  {
                    MR_Word ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71;
                    MR_Word ll_backend__use_local_vars__NewLval_113;
                    MR_Word ll_backend__use_local_vars__TailInstrs1_115;
                    MR_Integer ll_backend__use_local_vars__NumSubst_57;
                    MR_Word ll_backend__use_local_vars__Var_72;
                    MR_Integer ll_backend__use_local_vars__TempNum_91;

                    {
                      mercury__counter__allocate_3_p_0(&ll_backend__use_local_vars__TempNum_91, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, &ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71);
                    }
                    {
                      ll_backend__use_local_vars__Var_72 = ll_backend__use_local_vars__reg_type_for_lval_1_f_0(ll_backend__use_local_vars__ToLval_26);
                    }
                    {
                      ll_backend__use_local_vars__NewLval_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_113, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_72));
                      MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__NewLval_113, 1) = ((MR_Box) (ll_backend__use_local_vars__TempNum_91));
                    }
                    {
                      ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__ToLval_26, ll_backend__use_local_vars__NewLval_113, ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs1_115, (MR_Integer) 0, &ll_backend__use_local_vars__NumSubst_57);
                    }
                    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumSubst_57 > (MR_Integer) 1);
                    if (ll_backend__use_local_vars__succeeded)
                      {
                        MR_Word ll_backend__use_local_vars__CopyInstr_58;
                        MR_Word ll_backend__use_local_vars__Var_75;
                        MR_Word ll_backend__use_local_vars__Var_76;
                        MR_Word ll_backend__use_local_vars__Instr_100;

                        {
                          ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(ll_backend__use_local_vars__ToLval_26, ll_backend__use_local_vars__NewLval_113, ll_backend__use_local_vars__Instr0_16, &ll_backend__use_local_vars__Instr_100);
                        }
                        {
                          ll_backend__use_local_vars__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_76, 0) = ((MR_Box) (ll_backend__use_local_vars__NewLval_113));
                        }
                        {
                          ll_backend__use_local_vars__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Var_75, 1) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Var_75, 2) = ((MR_Box) (ll_backend__use_local_vars__Var_76));
                        }
                        {
                          ll_backend__use_local_vars__CopyInstr_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__CopyInstr_58, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_75));
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__CopyInstr_58, 1) = ((MR_Box) ((MR_String) ""));
                        }
                        switch (ll_backend__use_local_vars__MaybeMore_35) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ll_backend__use_local_vars__Var_83;
                              MR_Word ll_backend__use_local_vars__TailInstrs_93;

                              {
                                ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs1_115, &ll_backend__use_local_vars__TailInstrs_93, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                              }
                              {
                                ll_backend__use_local_vars__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_83, 0) = ((MR_Box) (ll_backend__use_local_vars__CopyInstr_58));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_83, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_93));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *ll_backend__use_local_vars__HeadVar__2_2 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_100));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Var_83));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ll_backend__use_local_vars__Var_79;
                              MR_Word ll_backend__use_local_vars__Instrs1_95;
                              MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96;

                              {
                                ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96, 0) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96, 1) = ((MR_Box) (ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6));
                              }
                              {
                                ll_backend__use_local_vars__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_79, 0) = ((MR_Box) (ll_backend__use_local_vars__CopyInstr_58));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_79, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs1_115));
                              }
                              {
                                ll_backend__use_local_vars__Instrs1_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_95, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_100));
                                MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Instrs1_95, 1) = ((MR_Box) (ll_backend__use_local_vars__Var_79));
                              }
                              /* direct tailcall eliminated */
                              {
                                MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Instrs1_95;
                                MR_Word ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_71_71;
                                MR_Word ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_96;

                                ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_AvoidLvals_0_6;
                                ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3 = ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_TempCounter_0_3;
                                ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                            break;
                        }
                      }
                    else
                      switch (ll_backend__use_local_vars__MaybeMore_35) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ll_backend__use_local_vars__TailInstrs_105;

                            {
                              ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs_105, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *ll_backend__use_local_vars__HeadVar__2_2 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_16));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_105));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108;

                            {
                              ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108, 0) = ((MR_Box) (ll_backend__use_local_vars__ToLval_26));
                              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108, 1) = ((MR_Box) (ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6));
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_67_108;

                              ll_backend__use_local_vars__STATE_VARIABLE_AvoidLvals_0_6 = ll_backend__use_local_vars__next_value_of_STATE_VARIABLE_AvoidLvals_0_6;
                            }
                            continue;
                          }
                          break;
                      }
                  }
              }
            else
              {
                MR_Word ll_backend__use_local_vars__TailInstrs_120;

                {
                  ll_backend__use_local_vars__opt_assign_8_p_0(ll_backend__use_local_vars__TailInstrs0_17, &ll_backend__use_local_vars__TailInstrs_120, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_0_3, ll_backend__use_local_vars__STATE_VARIABLE_TempCounter_4, ll_backend__use_local_vars__NumRealRRegs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__use_local_vars__MaybeLiveMap_7, ll_backend__use_local_vars__MaybeFallThrough_8);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__use_local_vars__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr0_16));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__TailInstrs_120));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_1,
  MR_Word ll_backend__use_local_vars__NewLval_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_0_5,
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_N_6)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__use_local_vars__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
      }
    else
      {
        MR_Word ll_backend__use_local_vars__Instr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__use_local_vars__Instrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__use_local_vars__Instr_16;
        MR_Word ll_backend__use_local_vars__Instrs_17;
        MR_Word ll_backend__use_local_vars__Uinstr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 0)));
        MR_String ll_backend__use_local_vars__Comment_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_14, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ll_backend__use_local_vars__Uinstr0_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
              }
              ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
            }
            break;
          case (MR_Integer) 2:
            {
              ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
              ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
              *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_instr_until_defn_2\'/8", (MR_String) "block");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__use_local_vars__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Rval0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
                  MR_Word ll_backend__use_local_vars__Updates_40;

                  {
                    ll_backend__use_local_vars__Updates_40 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_38, ll_backend__use_local_vars__OldLval_1);
                  }
                  switch (ll_backend__use_local_vars__Updates_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_147_160;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_147_160);
                        }
                        {
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_147_160, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__use_local_vars__Rval_41;
                        MR_Word ll_backend__use_local_vars__Uinstr_42;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Rval0_39, &ll_backend__use_local_vars__Rval_41);
                        }
                        {
                          ll_backend__use_local_vars__Uinstr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_42, 1) = ((MR_Box) (ll_backend__use_local_vars__Lval_38));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_42, 2) = ((MR_Box) (ll_backend__use_local_vars__Rval_41));
                        }
                        {
                          ll_backend__use_local_vars__Instr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_42));
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_34));
                        }
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__use_local_vars__Lval_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Rval0_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
                  MR_Word ll_backend__use_local_vars__Updates_173;

                  {
                    ll_backend__use_local_vars__Updates_173 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_171, ll_backend__use_local_vars__OldLval_1);
                  }
                  switch (ll_backend__use_local_vars__Updates_173) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_142_155;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_142_155);
                        }
                        {
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_142_155, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__use_local_vars__Rval_167;
                        MR_Word ll_backend__use_local_vars__Uinstr_168;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Rval0_172, &ll_backend__use_local_vars__Rval_167);
                        }
                        {
                          ll_backend__use_local_vars__Uinstr_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_168, 1) = ((MR_Box) (ll_backend__use_local_vars__Lval_171));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_168, 2) = ((MR_Box) (ll_backend__use_local_vars__Rval_167));
                        }
                        {
                          ll_backend__use_local_vars__Instr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_168));
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_34));
                        }
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 4:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 5:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 6:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                  }
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                }
                break;
              case (MR_Integer) 8:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_109_122;

                  {
                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_109_122);
                  }
                  {
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_109_122, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ll_backend__use_local_vars__Lval_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Updates_201;

                  {
                    ll_backend__use_local_vars__Updates_201 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_200, ll_backend__use_local_vars__OldLval_1);
                  }
                  switch (ll_backend__use_local_vars__Updates_201) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_129_197;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_129_197);
                        }
                        {
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_129_197, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 11:
              case (MR_Integer) 14:
              case (MR_Integer) 16:
              case (MR_Integer) 18:
              case (MR_Integer) 19:
              case (MR_Integer) 33:
              case (MR_Integer) 34:
                {
                  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_119_132;

                  {
                    ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_119_132);
                  }
                  {
                    ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_119_132, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ll_backend__use_local_vars__Lval_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Updates_188;
                  MR_Word ll_backend__use_local_vars__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
                  MR_Word ll_backend__use_local_vars__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));
                  MR_Word ll_backend__use_local_vars__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 4)));
                  MR_Word ll_backend__use_local_vars__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 5)));
                  MR_Word ll_backend__use_local_vars__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 6)));
                  MR_Word ll_backend__use_local_vars__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 7)));
                  MR_Word ll_backend__use_local_vars__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 8)));

                  {
                    ll_backend__use_local_vars__Updates_188 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_187, ll_backend__use_local_vars__OldLval_1);
                  }
                  switch (ll_backend__use_local_vars__Updates_188) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_129_142;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_129_142);
                        }
                        {
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_129_142, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ll_backend__use_local_vars__Lval_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Updates_196;

                  {
                    ll_backend__use_local_vars__Updates_196 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_195, ll_backend__use_local_vars__OldLval_1);
                  }
                  switch (ll_backend__use_local_vars__Updates_196) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_129_192;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_129_192);
                        }
                        {
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_129_192, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ll_backend__use_local_vars__NumLval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 4)));
                  MR_Word ll_backend__use_local_vars__AddrLval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 5)));
                  MR_Word ll_backend__use_local_vars__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
                  MR_Word ll_backend__use_local_vars__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));

                  {
                    MR_Word ll_backend__use_local_vars__Var_136;

                    {
                      ll_backend__use_local_vars__Var_136 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__NumLval_55, ll_backend__use_local_vars__OldLval_1);
                    }
                    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__Var_136 == (MR_Integer) 1);
                  }
                  if (!(ll_backend__use_local_vars__succeeded))
                    {
                      MR_Word ll_backend__use_local_vars__Var_135;

                      {
                        ll_backend__use_local_vars__Var_135 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__AddrLval_56, ll_backend__use_local_vars__OldLval_1);
                      }
                      ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__Var_135 == (MR_Integer) 1);
                    }
                  if (ll_backend__use_local_vars__succeeded)
                    {
                      *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                      ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                    }
                  else
                    {
                      MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_125_138;

                      {
                        ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_125_138);
                      }
                      {
                        ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_125_138, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                      }
                    }
                }
                break;
              case (MR_Integer) 20:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 21:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 22:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 23:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 24:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 25:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 26:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 27:
                {
                  MR_Word ll_backend__use_local_vars__Components_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
                  MR_Word ll_backend__use_local_vars__AffectsLiveness_81;
                  MR_Word ll_backend__use_local_vars__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));
                  MR_Word ll_backend__use_local_vars__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 4)));
                  MR_Word ll_backend__use_local_vars__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 5)));
                  MR_Word ll_backend__use_local_vars__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 6)));
                  MR_Word ll_backend__use_local_vars__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 7)));
                  MR_Word ll_backend__use_local_vars__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 8)));
                  MR_Word ll_backend__use_local_vars__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 9)));
                  MR_Word ll_backend__use_local_vars__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 10)));

                  {
                    ll_backend__use_local_vars__AffectsLiveness_81 = ll_backend__use_local_vars__components_affect_liveness_1_f_0(ll_backend__use_local_vars__Components_72);
                  }
                  switch (ll_backend__use_local_vars__AffectsLiveness_81) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__use_local_vars__Updates_189;

                        {
                          ll_backend__use_local_vars__Updates_189 = ll_backend__use_local_vars__components_update_oldlval_2_f_0(ll_backend__use_local_vars__Components_72, ll_backend__use_local_vars__OldLval_1);
                        }
                        switch (ll_backend__use_local_vars__Updates_189) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_115_128;

                              {
                                ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_115_128);
                              }
                              {
                                ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_115_128, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                              ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                              *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 28:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 29:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 30:
                {
                  ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                  ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                  *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                }
                break;
              case (MR_Integer) 31:
                {
                  MR_Word ll_backend__use_local_vars__Lval_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
                  MR_Word ll_backend__use_local_vars__Updates_177;
                  MR_Integer ll_backend__use_local_vars___NumSlots_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));

                  {
                    ll_backend__use_local_vars__Updates_177 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_176, ll_backend__use_local_vars__OldLval_1);
                  }
                  switch (ll_backend__use_local_vars__Updates_177) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_138_151;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_138_151);
                        }
                        {
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_138_151, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__use_local_vars__Instr_16 = ll_backend__use_local_vars__Instr0_14;
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 32:
                {
                  MR_Word ll_backend__use_local_vars__Label_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 3)));
                  MR_Word ll_backend__use_local_vars__Lval_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 2)));
                  MR_Word ll_backend__use_local_vars__Rval0_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_33, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Updates_184;

                  {
                    ll_backend__use_local_vars__Updates_184 = ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(ll_backend__use_local_vars__Lval_182, ll_backend__use_local_vars__OldLval_1);
                  }
                  switch (ll_backend__use_local_vars__Updates_184) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_N_133_146;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instr0_14, &ll_backend__use_local_vars__Instr_16, ll_backend__use_local_vars__STATE_VARIABLE_N_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_N_133_146);
                        }
                        {
                          ll_backend__use_local_vars__substitute_lval_in_instr_until_defn_6_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Instrs0_15, &ll_backend__use_local_vars__Instrs_17, ll_backend__use_local_vars__STATE_VARIABLE_N_133_146, ll_backend__use_local_vars__STATE_VARIABLE_N_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__use_local_vars__Rval_178;
                        MR_Word ll_backend__use_local_vars__Uinstr_179;

                        {
                          ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(ll_backend__use_local_vars__OldLval_1, ll_backend__use_local_vars__NewLval_2, ll_backend__use_local_vars__Rval0_183, &ll_backend__use_local_vars__Rval_178);
                        }
                        {
                          ll_backend__use_local_vars__Uinstr_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_179, 1) = ((MR_Box) (ll_backend__use_local_vars__Rval_178));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_179, 2) = ((MR_Box) (ll_backend__use_local_vars__Lval_182));
                          MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_179, 3) = ((MR_Box) (ll_backend__use_local_vars__Label_44));
                        }
                        {
                          ll_backend__use_local_vars__Instr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_179));
                          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_34));
                        }
                        ll_backend__use_local_vars__Instrs_17 = ll_backend__use_local_vars__Instrs0_15;
                        *ll_backend__use_local_vars__STATE_VARIABLE_N_6 = ll_backend__use_local_vars__STATE_VARIABLE_N_0_5;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__use_local_vars__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Instr_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Instrs_17));
        }
      }
  }
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_affect_liveness_1_f_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__use_local_vars__succeeded;
        MR_Word ll_backend__use_local_vars__HeadVar__2_2;

        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__use_local_vars__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__use_local_vars__Component_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__use_local_vars__Components_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__use_local_vars__Component_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_4;

                    ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_4;

                    ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ll_backend__use_local_vars__AffectsLiveness_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 2)));
                      MR_String ll_backend__use_local_vars__Code_19 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 3)));
                      MR_Word ll_backend__use_local_vars__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 1)));

                      switch (ll_backend__use_local_vars__AffectsLiveness_18) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__use_local_vars__HeadVar__2_2 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          {
                            ll_backend__use_local_vars__succeeded = (strcmp(ll_backend__use_local_vars__Code_19, (MR_String) "") == 0);
                            if (ll_backend__use_local_vars__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_4;

                                  ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                            else
                              ll_backend__use_local_vars__HeadVar__2_2 = (MR_Integer) 1;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_4;

                              ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__use_local_vars__AffectsLiveness_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 2)));
                      MR_String ll_backend__use_local_vars__Code_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 4)));
                      MR_Word ll_backend__use_local_vars__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 1)));
                      MR_Word ll_backend__use_local_vars__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Component_3, (MR_Integer) 3)));

                      switch (ll_backend__use_local_vars__AffectsLiveness_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__use_local_vars__HeadVar__2_2 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          {
                            ll_backend__use_local_vars__succeeded = (strcmp(ll_backend__use_local_vars__Code_15, (MR_String) "") == 0);
                            if (ll_backend__use_local_vars__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_4;

                                  ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                            else
                              ll_backend__use_local_vars__HeadVar__2_2 = (MR_Integer) 1;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_4;

                              ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_4;

                        ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                }
                break;
            }
          }
        return ll_backend__use_local_vars__HeadVar__2_2;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(
  void * ll_backend__use_local_vars__env_ptr_arg)
{
  {
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_3(
  void * ll_backend__use_local_vars__env_ptr_arg)
{
  {
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

    (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25 = ((MR_Word) (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_25);
    {
      ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(ll_backend__use_local_vars__env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_2(
  void * ll_backend__use_local_vars__env_ptr_arg)
{
  {
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

    {
      MR_Word ll_backend__use_local_vars__Var_26;
      MR_Word ll_backend__use_local_vars__Var_27;
      MR_Word ll_backend__use_local_vars__Var_28;
      MR_String ll_backend__use_local_vars__Var_29;
      MR_Word ll_backend__use_local_vars__Var_30;
      MR_Word ll_backend__use_local_vars__Var_31;

      (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25, (MR_Integer) 0)));
      ll_backend__use_local_vars__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25, (MR_Integer) 1)));
      ll_backend__use_local_vars__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25, (MR_Integer) 2)));
      ll_backend__use_local_vars__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25, (MR_Integer) 3)));
      ll_backend__use_local_vars__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25, (MR_Integer) 4)));
      ll_backend__use_local_vars__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25, (MR_Integer) 5)));
      ll_backend__use_local_vars__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Output_25, (MR_Integer) 6)));
      {
        (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = ll_backend__llds____Unify____lval_0_0((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2, (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Var_33);
      }
      if ((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded)
        {
          ll_backend__use_local_vars__components_update_oldlval_2_f_0_1(ll_backend__use_local_vars__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(
  void * ll_backend__use_local_vars__env_ptr_arg)
{
  {
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s * ll_backend__use_local_vars__env_ptr = (struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s *) ll_backend__use_local_vars__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0, &(ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__conv0_Output_25, (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_13, ll_backend__use_local_vars__components_update_oldlval_2_f_0_3, ll_backend__use_local_vars__env_ptr);
          }
        }
        (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__use_local_vars__env_ptr)->ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__components_update_oldlval_2_f_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2)
{
  {
    struct ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0_s ll_backend__use_local_vars__env;

    (ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__HeadVar__2_2 = ll_backend__use_local_vars__HeadVar__2_2;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        {
          MR_Word ll_backend__use_local_vars__HeadVar__3_3;

          if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 0;
          else
            {
              MR_Word ll_backend__use_local_vars__Component_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
              MR_Word ll_backend__use_local_vars__Components_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ll_backend__use_local_vars__Component_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_6;

                      ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_6;

                      ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    (ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Component_5, (MR_Integer) 0)));
                    {
                      ll_backend__use_local_vars__components_update_oldlval_2_f_0_4(&ll_backend__use_local_vars__env);
                    }
                    if ((ll_backend__use_local_vars__env).ll_backend__use_local_vars__components_update_oldlval_3_f_0_env_0__succeeded)
                      ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 1;
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_6;

                          ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Components_6;

                      ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                  break;
              }
            }
          return ll_backend__use_local_vars__HeadVar__3_3;
        }
        break;
      }
  }
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__assignment_updates_oldlval_2_f_0(
  MR_Word ll_backend__use_local_vars__Lval_4,
  MR_Word ll_backend__use_local_vars__OldLval_5)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Word ll_backend__use_local_vars__HeadVar__3_3;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__Lval_4, ll_backend__use_local_vars__OldLval_5);
    }
    if (ll_backend__use_local_vars__succeeded)
      ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 1;
    else
      ll_backend__use_local_vars__HeadVar__3_3 = (MR_Integer) 0;
    return ll_backend__use_local_vars__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3(
  MR_Box ll_backend__use_local_vars__closure_arg)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__550__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2(
  MR_Box ll_backend__use_local_vars__closure_arg)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__541__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__substitute_lval_in_defn__535__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0(
  MR_Word ll_backend__use_local_vars__OldLval_5,
  MR_Word ll_backend__use_local_vars__NewLval_6,
  MR_Word ll_backend__use_local_vars__Instr0_7,
  MR_Word * ll_backend__use_local_vars__Instr_8)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Word ll_backend__use_local_vars__Uinstr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_7, (MR_Integer) 0)));
    MR_String ll_backend__use_local_vars__Comment_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr0_7, (MR_Integer) 1)));
    MR_Word ll_backend__use_local_vars__Uinstr_13;
    MR_Word ll_backend__use_local_vars__ToLval_11;
    MR_Word ll_backend__use_local_vars__FromRval_12;

    ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (ll_backend__use_local_vars__succeeded)
      {
        ll_backend__use_local_vars__ToLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 1)));
        ll_backend__use_local_vars__FromRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 2)));
        {
          MR_Word ll_backend__use_local_vars__Var_33;

          {
            ll_backend__use_local_vars__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_33, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_33, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_1));
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_33, 3) = ((MR_Box) (ll_backend__use_local_vars__OldLval_5));
            MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_33, 4) = ((MR_Box) (ll_backend__use_local_vars__ToLval_11));
          }
          {
            mercury__require__expect_4_p_0(ll_backend__use_local_vars__Var_33, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in assign");
          }
          {
            ll_backend__use_local_vars__Uinstr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 1) = ((MR_Box) (ll_backend__use_local_vars__NewLval_6));
            MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 2) = ((MR_Box) (ll_backend__use_local_vars__FromRval_12));
          }
        }
      }
    else
      {
        MR_Word ll_backend__use_local_vars__MaybeTag_14;
        MR_Word ll_backend__use_local_vars__SizeRval_15;
        MR_Word ll_backend__use_local_vars__MO_16;
        MR_Word ll_backend__use_local_vars__Type_17;
        MR_Word ll_backend__use_local_vars__MayUseAtomic_18;
        MR_Word ll_backend__use_local_vars__MaybeRegionRval_19;
        MR_Word ll_backend__use_local_vars__MaybeReuse_20;
        MR_Word ll_backend__use_local_vars__ToLval_50;

        ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 12)));
        if (ll_backend__use_local_vars__succeeded)
          {
            ll_backend__use_local_vars__ToLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 1)));
            ll_backend__use_local_vars__MaybeTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 2)));
            ll_backend__use_local_vars__SizeRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 3)));
            ll_backend__use_local_vars__MO_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 4)));
            ll_backend__use_local_vars__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 5)));
            ll_backend__use_local_vars__MayUseAtomic_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 6)));
            ll_backend__use_local_vars__MaybeRegionRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 7)));
            ll_backend__use_local_vars__MaybeReuse_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 8)));
            {
              MR_Word ll_backend__use_local_vars__Var_37;

              {
                ll_backend__use_local_vars__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_37, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_37, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_2));
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_37, 3) = ((MR_Box) (ll_backend__use_local_vars__OldLval_5));
                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_37, 4) = ((MR_Box) (ll_backend__use_local_vars__ToLval_50));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__use_local_vars__Var_37, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in incr_hp");
              }
              {
                ll_backend__use_local_vars__Uinstr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 1) = ((MR_Box) (ll_backend__use_local_vars__NewLval_6));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 2) = ((MR_Box) (ll_backend__use_local_vars__MaybeTag_14));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 3) = ((MR_Box) (ll_backend__use_local_vars__SizeRval_15));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 4) = ((MR_Box) (ll_backend__use_local_vars__MO_16));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 5) = ((MR_Box) (ll_backend__use_local_vars__Type_17));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 6) = ((MR_Box) (ll_backend__use_local_vars__MayUseAtomic_18));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 7) = ((MR_Box) (ll_backend__use_local_vars__MaybeRegionRval_19));
                MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 8) = ((MR_Box) (ll_backend__use_local_vars__MaybeReuse_20));
              }
            }
          }
        else
          {
            MR_Word ll_backend__use_local_vars__D_21;
            MR_Word ll_backend__use_local_vars__Comps0_22;
            MR_Word ll_backend__use_local_vars__MCM_23;
            MR_Word ll_backend__use_local_vars__FNL_24;
            MR_Word ll_backend__use_local_vars__FL_25;
            MR_Word ll_backend__use_local_vars__FOL_26;
            MR_Word ll_backend__use_local_vars__NF_27;
            MR_Word ll_backend__use_local_vars__MDL_28;
            MR_Word ll_backend__use_local_vars__S_29;
            MR_Word ll_backend__use_local_vars__MD_30;

            ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 0)))) == (MR_Integer) 27)));
            if (ll_backend__use_local_vars__succeeded)
              {
                ll_backend__use_local_vars__D_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 1)));
                ll_backend__use_local_vars__Comps0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 2)));
                ll_backend__use_local_vars__MCM_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 3)));
                ll_backend__use_local_vars__FNL_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 4)));
                ll_backend__use_local_vars__FL_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 5)));
                ll_backend__use_local_vars__FOL_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 6)));
                ll_backend__use_local_vars__NF_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 7)));
                ll_backend__use_local_vars__MDL_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 8)));
                ll_backend__use_local_vars__S_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 9)));
                ll_backend__use_local_vars__MD_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr0_9, (MR_Integer) 10)));
                {
                  MR_Word ll_backend__use_local_vars__Comps_31;
                  MR_Integer ll_backend__use_local_vars__NumSubsts_32;
                  MR_Word ll_backend__use_local_vars__Var_42;

                  {
                    ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(ll_backend__use_local_vars__OldLval_5, ll_backend__use_local_vars__NewLval_6, ll_backend__use_local_vars__Comps0_22, &ll_backend__use_local_vars__Comps_31, (MR_Integer) 0, &ll_backend__use_local_vars__NumSubsts_32);
                  }
                  {
                    ll_backend__use_local_vars__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[2]));
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 1) = ((MR_Box) (ll_backend__use_local_vars__substitute_lval_in_defn_4_p_0_3));
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 3) = ((MR_Box) (ll_backend__use_local_vars__NumSubsts_32));
                    MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__use_local_vars__Var_42, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "mismatch in foreign_proc_code");
                  }
                  {
                    ll_backend__use_local_vars__Uinstr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 1) = ((MR_Box) (ll_backend__use_local_vars__D_21));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 2) = ((MR_Box) (ll_backend__use_local_vars__Comps_31));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 3) = ((MR_Box) (ll_backend__use_local_vars__MCM_23));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 4) = ((MR_Box) (ll_backend__use_local_vars__FNL_24));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 5) = ((MR_Box) (ll_backend__use_local_vars__FL_25));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 6) = ((MR_Box) (ll_backend__use_local_vars__FOL_26));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 7) = ((MR_Box) (ll_backend__use_local_vars__NF_27));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 8) = ((MR_Box) (ll_backend__use_local_vars__MDL_28));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 9) = ((MR_Box) (ll_backend__use_local_vars__S_29));
                    MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_13, 10) = ((MR_Box) (ll_backend__use_local_vars__MD_30));
                  }
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.substitute_lval_in_defn\'/4", (MR_String) "unexpected instruction");
                  return;
                }
              }
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__use_local_vars__Instr_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Uinstr_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Comment_10));
    }
  }
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6)
{
  if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__use_local_vars__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
    }
  else
    {
      MR_Word ll_backend__use_local_vars__Comp0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__use_local_vars__Comps0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__use_local_vars__Comp_16;
      MR_Word ll_backend__use_local_vars__Comps_17;
      MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33;

      switch (MR_tag((MR_Word) ll_backend__use_local_vars__Comp0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ll_backend__use_local_vars__Comp_16 = ll_backend__use_local_vars__Comp0_14;
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            ll_backend__use_local_vars__Comp_16 = ll_backend__use_local_vars__Comp0_14;
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__use_local_vars__Outputs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Comp0_14, (MR_Integer) 0)));
            MR_Word ll_backend__use_local_vars__Outputs_20;

            {
              ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(ll_backend__use_local_vars__HeadVar__1_1, ll_backend__use_local_vars__HeadVar__2_2, ll_backend__use_local_vars__Outputs0_19, &ll_backend__use_local_vars__Outputs_20, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5, &ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33);
            }
            {
              ll_backend__use_local_vars__Comp_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Comp_16, 0) = ((MR_Box) (ll_backend__use_local_vars__Outputs_20));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            ll_backend__use_local_vars__Comp_16 = ll_backend__use_local_vars__Comp0_14;
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
          }
          break;
      }
      {
        ll_backend__use_local_vars__substitute_lval_in_defn_components_6_p_0(ll_backend__use_local_vars__HeadVar__1_1, ll_backend__use_local_vars__HeadVar__2_2, ll_backend__use_local_vars__Comps0_15, &ll_backend__use_local_vars__Comps_17, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_33_33, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ll_backend__use_local_vars__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Comp_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Comps_17));
      }
    }
}

static void MR_CALL 
ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__HeadVar__2_2,
  MR_Word ll_backend__use_local_vars__HeadVar__3_3,
  MR_Word * ll_backend__use_local_vars__HeadVar__4_4,
  MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5,
  MR_Integer * ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    if ((ll_backend__use_local_vars__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__use_local_vars__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
      }
    else
      {
        MR_Word ll_backend__use_local_vars__Output0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__use_local_vars__Outputs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__use_local_vars__Output_16;
        MR_Word ll_backend__use_local_vars__Outputs_17;
        MR_Word ll_backend__use_local_vars__Dest0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 0)));
        MR_Word ll_backend__use_local_vars__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 1)));
        MR_Word ll_backend__use_local_vars__IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 2)));
        MR_Word ll_backend__use_local_vars__VarName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 3)));
        MR_String ll_backend__use_local_vars__OrigType_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 4)));
        MR_Word ll_backend__use_local_vars__MaybeForeignType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 5)));
        MR_Word ll_backend__use_local_vars__BoxPolicy_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output0_14, (MR_Integer) 6)));
        MR_Integer ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28;

        {
          ll_backend__use_local_vars__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__use_local_vars__Dest0_19, ll_backend__use_local_vars__HeadVar__1_1);
        }
        if (ll_backend__use_local_vars__succeeded)
          {
            {
              ll_backend__use_local_vars__Output_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 0) = ((MR_Box) (ll_backend__use_local_vars__HeadVar__2_2));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 1) = ((MR_Box) (ll_backend__use_local_vars__Type_20));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 2) = ((MR_Box) (ll_backend__use_local_vars__IsDummy_21));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 3) = ((MR_Box) (ll_backend__use_local_vars__VarName_22));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 4) = ((MR_Box) (ll_backend__use_local_vars__OrigType_23));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 5) = ((MR_Box) (ll_backend__use_local_vars__MaybeForeignType_24));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_16, 6) = ((MR_Box) (ll_backend__use_local_vars__BoxPolicy_25));
            }
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28 = (ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5 + (MR_Integer) 1);
          }
        else
          {
            ll_backend__use_local_vars__Output_16 = ll_backend__use_local_vars__Output0_14;
            ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28 = ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_0_5;
          }
        {
          ll_backend__use_local_vars__substitute_lval_in_defn_outputs_6_p_0(ll_backend__use_local_vars__HeadVar__1_1, ll_backend__use_local_vars__HeadVar__2_2, ll_backend__use_local_vars__Outputs0_15, &ll_backend__use_local_vars__Outputs_17, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_28_28, ll_backend__use_local_vars__STATE_VARIABLE_NumSubsts_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__use_local_vars__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Output_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__use_local_vars__Outputs_17));
        }
      }
  }
}

static MR_Word MR_CALL 
ll_backend__use_local_vars__reg_type_for_lval_1_f_0(
  MR_Word ll_backend__use_local_vars__Lval_3)
{
  {
    MR_Word ll_backend__use_local_vars__RegType_4;

    switch (MR_tag((MR_Word) ll_backend__use_local_vars__Lval_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__use_local_vars__RegType_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__use_local_vars__Var_5;

          ll_backend__use_local_vars__RegType_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_3, (MR_Integer) 0)));
          ll_backend__use_local_vars__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_3, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__use_local_vars__Var_6;

          ll_backend__use_local_vars__RegType_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Lval_3, (MR_Integer) 0)));
          ll_backend__use_local_vars__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Lval_3, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            ll_backend__use_local_vars__RegType_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ll_backend__use_local_vars__RegType_4 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return ll_backend__use_local_vars__RegType_4;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__base_lval_worth_replacing_2_p_0(
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_3,
  MR_Word ll_backend__use_local_vars__Lval_4)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    switch (MR_tag((MR_Word) ll_backend__use_local_vars__Lval_4)) {
      default:
        ll_backend__use_local_vars__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__use_local_vars__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_4, (MR_Integer) 1)));
          MR_Word ll_backend__use_local_vars__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Lval_4, (MR_Integer) 0)));

          switch (ll_backend__use_local_vars__Var_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ll_backend__use_local_vars__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__Var_13 > ll_backend__use_local_vars__NumRealRRegs_3);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Lval_4, (MR_Integer) 0)))) {
          default:
            ll_backend__use_local_vars__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            ll_backend__use_local_vars__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            ll_backend__use_local_vars__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            ll_backend__use_local_vars__succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_2)
{
  {
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;
    MR_Word ll_backend__use_local_vars__conv1_HeadVar__3_65;

    {
      ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__369__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), &ll_backend__use_local_vars__conv1_HeadVar__3_65);
    }
    *ll_backend__use_local_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__use_local_vars__conv1_HeadVar__3_65));
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__IntroducedFrom__pred__find_compulsory_lvals__344__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Word ll_backend__use_local_vars__MaybeLiveMap_2,
  MR_Word ll_backend__use_local_vars__MaybeFallThrough_3,
  MR_Word ll_backend__use_local_vars__HeadVar__4_4,
  MR_Word * ll_backend__use_local_vars__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__use_local_vars__succeeded;

        if ((ll_backend__use_local_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ll_backend__use_local_vars__MaybeFallThrough_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word ll_backend__use_local_vars__FallThrough_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeFallThrough_3, (MR_Integer) 0)));

              if ((ll_backend__use_local_vars__MaybeLiveMap_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__use_local_vars__LiveMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeLiveMap_2, (MR_Integer) 0)));
                  MR_Word ll_backend__use_local_vars__CompulsoryLvals_12;
                  MR_Box ll_backend__use_local_vars__conv0_CompulsoryLvals_12;

                  {
                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__LiveMap_11, ((MR_Box) (ll_backend__use_local_vars__FallThrough_10)), &ll_backend__use_local_vars__conv0_CompulsoryLvals_12);
                  }
                  ll_backend__use_local_vars__CompulsoryLvals_12 = ((MR_Word) ll_backend__use_local_vars__conv0_CompulsoryLvals_12);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__use_local_vars__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__CompulsoryLvals_12));
                  }
                }
            }
        else
          {
            MR_Word ll_backend__use_local_vars__Instr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__use_local_vars__Instrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__use_local_vars__Uinstr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_13, (MR_Integer) 0)));
            MR_String ll_backend__use_local_vars__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Instr_13, (MR_Integer) 1)));
            MR_Word ll_backend__use_local_vars__LiveLvals_21;

            ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr_19)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__use_local_vars__succeeded)
              {
                ll_backend__use_local_vars__LiveLvals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 0)));
                {
                  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40;

                  {
                    ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(ll_backend__use_local_vars__Instrs_14, ll_backend__use_local_vars__MaybeLiveMap_2, ll_backend__use_local_vars__MaybeFallThrough_3, (MR_Integer) 1, &ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40);
                  }
                  if ((ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *ll_backend__use_local_vars__HeadVar__5_5 = ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40;
                  else
                    {
                      MR_Word ll_backend__use_local_vars__OldCompulsoryLvals_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_40_40, (MR_Integer) 0)));
                      MR_Word ll_backend__use_local_vars__AllCompulsoryLvals_76;

                      {
                        mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__use_local_vars__LiveLvals_21, ll_backend__use_local_vars__OldCompulsoryLvals_75, &ll_backend__use_local_vars__AllCompulsoryLvals_76);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__use_local_vars__HeadVar__5_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__AllCompulsoryLvals_76));
                      }
                    }
                }
              }
            else
              {
                MR_Word ll_backend__use_local_vars__Var_22;
                MR_Word ll_backend__use_local_vars__Var_23;
                MR_Word ll_backend__use_local_vars__Var_24;
                MR_Word ll_backend__use_local_vars__Var_25;
                MR_Word ll_backend__use_local_vars__Var_26;
                MR_Word ll_backend__use_local_vars__Var_27;

                ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (ll_backend__use_local_vars__succeeded)
                  {
                    ll_backend__use_local_vars__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 1)));
                    ll_backend__use_local_vars__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 2)));
                    ll_backend__use_local_vars__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 3)));
                    ll_backend__use_local_vars__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 4)));
                    ll_backend__use_local_vars__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 5)));
                    ll_backend__use_local_vars__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 6)));
                    {
                      MR_Word ll_backend__use_local_vars__Var_42;
                      MR_Word ll_backend__use_local_vars__Var_48;

                      {
                        ll_backend__use_local_vars__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_4[0]));
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 1) = ((MR_Box) (ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_1));
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 3) = ((MR_Box) (ll_backend__use_local_vars__HeadVar__4_4));
                        MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
                      }
                      {
                        mercury__require__expect_4_p_0(ll_backend__use_local_vars__Var_42, (MR_String) "ll_backend.use_local_vars", (MR_String) "predicate \140ll_backend.use_local_vars.find_compulsory_lvals\'/5", (MR_String) "call without livevals");
                      }
                      {
                        ll_backend__use_local_vars__Var_48 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__use_local_vars__HeadVar__5_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_48));
                      }
                    }
                  }
                else
                  {
                    MR_Word ll_backend__use_local_vars___Target_28;

                    ll_backend__use_local_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__use_local_vars__Uinstr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (ll_backend__use_local_vars__succeeded)
                      {
                        ll_backend__use_local_vars___Target_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Uinstr_19, (MR_Integer) 1)));
                        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__HeadVar__4_4 == (MR_Integer) 1);
                      }
                    if (ll_backend__use_local_vars__succeeded)
                      {
                        MR_Word ll_backend__use_local_vars__Var_50;

                        {
                          ll_backend__use_local_vars__Var_50 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__use_local_vars__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_50));
                        }
                      }
                    else
                      {
                        MR_Word ll_backend__use_local_vars__Labels_29;
                        MR_Word ll_backend__use_local_vars__NonLabelCodeAddrs_30;

                        {
                          ll_backend__opt_util__possible_targets_3_p_0(ll_backend__use_local_vars__Uinstr_19, &ll_backend__use_local_vars__Labels_29, &ll_backend__use_local_vars__NonLabelCodeAddrs_30);
                        }
                        if ((ll_backend__use_local_vars__NonLabelCodeAddrs_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          if ((ll_backend__use_local_vars__Labels_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Instrs_14;

                                ll_backend__use_local_vars__HeadVar__4_4 = (MR_Integer) 0;
                                ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                          else
                          if ((ll_backend__use_local_vars__MaybeLiveMap_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          else
                            {
                              MR_Word ll_backend__use_local_vars__LiveMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeLiveMap_2, (MR_Integer) 0)));
                              MR_Word ll_backend__use_local_vars__LabelsLiveLvals_34;
                              MR_Word ll_backend__use_local_vars__AllLabelsLiveLvals_35;
                              MR_Word ll_backend__use_local_vars__Var_53;
                              MR_Word ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55;

                              {
                                ll_backend__use_local_vars__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_53, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_5[0]));
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_53, 1) = ((MR_Box) (ll_backend__use_local_vars__find_compulsory_lvals_5_p_0_2));
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_53, 3) = ((MR_Box) (ll_backend__use_local_vars__LiveMap_33));
                              }
                              {
                                mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_2[0], ll_backend__use_local_vars__Var_53, ll_backend__use_local_vars__Labels_29, &ll_backend__use_local_vars__LabelsLiveLvals_34);
                              }
                              {
                                ll_backend__use_local_vars__AllLabelsLiveLvals_35 = mercury__set__union_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__use_local_vars__LabelsLiveLvals_34);
                              }
                              {
                                ll_backend__use_local_vars__find_compulsory_lvals_5_p_0(ll_backend__use_local_vars__Instrs_14, ll_backend__use_local_vars__MaybeLiveMap_2, ll_backend__use_local_vars__MaybeFallThrough_3, (MR_Integer) 0, &ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55);
                              }
                              if ((ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                *ll_backend__use_local_vars__HeadVar__5_5 = ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55;
                              else
                                {
                                  MR_Word ll_backend__use_local_vars__OldCompulsoryLvals_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__STATE_VARIABLE_MaybeCompulsoryLvals_55_55, (MR_Integer) 0)));
                                  MR_Word ll_backend__use_local_vars__AllCompulsoryLvals_84;

                                  {
                                    mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__use_local_vars__AllLabelsLiveLvals_35, ll_backend__use_local_vars__OldCompulsoryLvals_83, &ll_backend__use_local_vars__AllCompulsoryLvals_84);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    *ll_backend__use_local_vars__HeadVar__5_5 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__use_local_vars__AllCompulsoryLvals_84));
                                  }
                                }
                            }
                        else
                          *ll_backend__use_local_vars__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                  }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_components_4_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
  MR_Word * ll_backend__use_local_vars__ToLval_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__use_local_vars__Comp_5;
        MR_Word ll_backend__use_local_vars__Comps_6;
        MR_Word ll_backend__use_local_vars__ToLvalPrime_11;
        MR_Word ll_backend__use_local_vars__Outputs_10;

        if (ll_backend__use_local_vars__succeeded)
          {
            ll_backend__use_local_vars__Comp_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__use_local_vars__Comps_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__Comp_5)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__use_local_vars__succeeded)
              {
                ll_backend__use_local_vars__Outputs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__use_local_vars__Comp_5, (MR_Integer) 0)));
                {
                  ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(ll_backend__use_local_vars__Outputs_10, ll_backend__use_local_vars__NumRealRRegs_7, ll_backend__use_local_vars__AvoidLvals_8, &ll_backend__use_local_vars__ToLvalPrime_11);
                }
              }
            if (ll_backend__use_local_vars__succeeded)
              {
                *ll_backend__use_local_vars__ToLval_9 = ll_backend__use_local_vars__ToLvalPrime_11;
                ll_backend__use_local_vars__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Comps_6;

                  ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__use_local_vars__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars__opt_assign_find_output_in_outputs_4_p_0(
  MR_Word ll_backend__use_local_vars__HeadVar__1_1,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_7,
  MR_Word ll_backend__use_local_vars__AvoidLvals_8,
  MR_Word * ll_backend__use_local_vars__ToLval_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__use_local_vars__Output_5;
        MR_Word ll_backend__use_local_vars__Outputs_6;
        MR_Word ll_backend__use_local_vars__Dest_10;
        MR_Word ll_backend__use_local_vars___Type_11;
        MR_Word ll_backend__use_local_vars___IsDummy_12;
        MR_Word ll_backend__use_local_vars___VarName_13;
        MR_String ll_backend__use_local_vars___OrigType_14;
        MR_Word ll_backend__use_local_vars___MaybeForeignType_15;
        MR_Word ll_backend__use_local_vars___BoxPolicy_16;
        MR_Word ll_backend__use_local_vars__TypeCtorInfo_17_17;

        if (ll_backend__use_local_vars__succeeded)
          {
            ll_backend__use_local_vars__Output_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__use_local_vars__Outputs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__use_local_vars__Dest_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 0)));
            ll_backend__use_local_vars___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 1)));
            ll_backend__use_local_vars___IsDummy_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 2)));
            ll_backend__use_local_vars___VarName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 3)));
            ll_backend__use_local_vars___OrigType_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 4)));
            ll_backend__use_local_vars___MaybeForeignType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 5)));
            ll_backend__use_local_vars___BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Output_5, (MR_Integer) 6)));
            switch (MR_tag((MR_Word) ll_backend__use_local_vars__Dest_10)) {
              default:
                ll_backend__use_local_vars__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ll_backend__use_local_vars__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Dest_10, (MR_Integer) 1)));
                  MR_Word ll_backend__use_local_vars__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Dest_10, (MR_Integer) 0)));

                  switch (ll_backend__use_local_vars__Var_29) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      ll_backend__use_local_vars__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__Var_28 > ll_backend__use_local_vars__NumRealRRegs_7);
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__use_local_vars__Dest_10, (MR_Integer) 0)))) {
                  default:
                    ll_backend__use_local_vars__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    ll_backend__use_local_vars__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    ll_backend__use_local_vars__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 3:
                    ll_backend__use_local_vars__succeeded = MR_TRUE;
                    break;
                }
                break;
            }
            if (ll_backend__use_local_vars__succeeded)
              {
                ll_backend__use_local_vars__TypeCtorInfo_17_17 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  ll_backend__use_local_vars__succeeded = mercury__list__member_2_p_0(ll_backend__use_local_vars__TypeCtorInfo_17_17, ((MR_Box) (ll_backend__use_local_vars__Dest_10)), ll_backend__use_local_vars__AvoidLvals_8);
                }
                ll_backend__use_local_vars__succeeded = !(ll_backend__use_local_vars__succeeded);
              }
            if (ll_backend__use_local_vars__succeeded)
              {
                *ll_backend__use_local_vars__ToLval_9 = ll_backend__use_local_vars__Dest_10;
                ll_backend__use_local_vars__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__use_local_vars__next_value_of_HeadVar__1_1 = ll_backend__use_local_vars__Outputs_6;

                  ll_backend__use_local_vars__HeadVar__1_1 = ll_backend__use_local_vars__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__use_local_vars__succeeded;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1(
  MR_Box ll_backend__use_local_vars__closure_arg,
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
  MR_Box * ll_backend__use_local_vars__wrapper_arg_3)
{
  {
    MR_Box ll_backend__use_local_vars__closure = ll_backend__use_local_vars__closure_arg;
    MR_Word ll_backend__use_local_vars__conv0_STATE_VARIABLE_BlockMap_25;

    {
      ll_backend__use_local_vars__use_local_vars_block_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_2), &ll_backend__use_local_vars__conv0_STATE_VARIABLE_BlockMap_25);
    }
    *ll_backend__use_local_vars__wrapper_arg_3 = ((MR_Box) (ll_backend__use_local_vars__conv0_STATE_VARIABLE_BlockMap_25));
  }
}

void MR_CALL 
ll_backend__use_local_vars__use_local_vars_proc_8_p_0(
  MR_Word ll_backend__use_local_vars__Instrs0_9,
  MR_Word * ll_backend__use_local_vars__Instrs_10,
  MR_Integer ll_backend__use_local_vars__NumRealRRegs_11,
  MR_Integer ll_backend__use_local_vars__AccessThreshold_12,
  MR_Word ll_backend__use_local_vars__AutoComments_13,
  MR_Word ll_backend__use_local_vars__ProcLabel_14,
  MR_Word ll_backend__use_local_vars__STATE_VARIABLE_C_0_32,
  MR_Word * ll_backend__use_local_vars__STATE_VARIABLE_C_33)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;
    MR_Word ll_backend__use_local_vars__Comments0_16;
    MR_Word ll_backend__use_local_vars__NewLabels_17;
    MR_Word ll_backend__use_local_vars__LabelSeq_18;
    MR_Word ll_backend__use_local_vars__BlockMap0_19;
    MR_Word ll_backend__use_local_vars__TentativeInstrs_20;
    MR_Integer ll_backend__use_local_vars__NumTentativeInstrs_21;

    {
      ll_backend__basic_block__create_basic_blocks_8_p_0(ll_backend__use_local_vars__Instrs0_9, &ll_backend__use_local_vars__Comments0_16, ll_backend__use_local_vars__ProcLabel_14, ll_backend__use_local_vars__STATE_VARIABLE_C_0_32, ll_backend__use_local_vars__STATE_VARIABLE_C_33, &ll_backend__use_local_vars__NewLabels_17, &ll_backend__use_local_vars__LabelSeq_18, &ll_backend__use_local_vars__BlockMap0_19);
    }
    {
      ll_backend__basic_block__flatten_basic_blocks_4_p_0(ll_backend__use_local_vars__LabelSeq_18, ll_backend__use_local_vars__BlockMap0_19, &ll_backend__use_local_vars__TentativeInstrs_20, &ll_backend__use_local_vars__NumTentativeInstrs_21);
    }
    ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__NumTentativeInstrs_21 < (MR_Integer) 10000);
    if (ll_backend__use_local_vars__succeeded)
      {
        MR_Word ll_backend__use_local_vars__MaybeLiveMap_22;
        MR_Word ll_backend__use_local_vars__EBBLabelSeq_23;
        MR_Word ll_backend__use_local_vars__EBBBlockMap0_24;
        MR_Word ll_backend__use_local_vars__EBBBlockMap_25;
        MR_Word ll_backend__use_local_vars__Instrs1_26;
        MR_Word ll_backend__use_local_vars__Comments_31;
        MR_Word ll_backend__use_local_vars__Var_36;
        MR_Box ll_backend__use_local_vars__conv1_EBBBlockMap_25;
        MR_Integer ll_backend__use_local_vars__Var_27;
        MR_Word ll_backend__use_local_vars__LiveMap_28;

        {
          ll_backend__livemap__build_livemap_2_p_0(ll_backend__use_local_vars__TentativeInstrs_20, &ll_backend__use_local_vars__MaybeLiveMap_22);
        }
        {
          ll_backend__basic_block__extend_basic_blocks_5_p_0(ll_backend__use_local_vars__LabelSeq_18, &ll_backend__use_local_vars__EBBLabelSeq_23, ll_backend__use_local_vars__BlockMap0_19, &ll_backend__use_local_vars__EBBBlockMap0_24, ll_backend__use_local_vars__NewLabels_17);
        }
        {
          ll_backend__use_local_vars__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_36, 0) = ((MR_Box) (&ll_backend__use_local_vars_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_36, 1) = ((MR_Box) (ll_backend__use_local_vars__use_local_vars_proc_8_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_36, 3) = ((MR_Box) (ll_backend__use_local_vars__MaybeLiveMap_22));
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_36, 4) = ((MR_Box) (ll_backend__use_local_vars__NumRealRRegs_11));
          MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__Var_36, 5) = ((MR_Box) (ll_backend__use_local_vars__AccessThreshold_12));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__use_local_vars_scalar_common_1[0], ll_backend__use_local_vars__Var_36, ll_backend__use_local_vars__EBBLabelSeq_23, ((MR_Box) (ll_backend__use_local_vars__EBBBlockMap0_24)), &ll_backend__use_local_vars__conv1_EBBBlockMap_25);
        }
        ll_backend__use_local_vars__EBBBlockMap_25 = ((MR_Word) ll_backend__use_local_vars__conv1_EBBBlockMap_25);
        {
          ll_backend__basic_block__flatten_basic_blocks_4_p_0(ll_backend__use_local_vars__EBBLabelSeq_23, ll_backend__use_local_vars__EBBBlockMap_25, &ll_backend__use_local_vars__Instrs1_26, &ll_backend__use_local_vars__Var_27);
        }
        ll_backend__use_local_vars__succeeded = (ll_backend__use_local_vars__AutoComments_13 == (MR_Integer) 1);
        if (ll_backend__use_local_vars__succeeded)
          {
            ll_backend__use_local_vars__succeeded = ((MR_tag((MR_Word) ll_backend__use_local_vars__MaybeLiveMap_22)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__use_local_vars__succeeded)
              ll_backend__use_local_vars__LiveMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__MaybeLiveMap_22, (MR_Integer) 0)));
          }
        if (ll_backend__use_local_vars__succeeded)
          {
            MR_String ll_backend__use_local_vars__NewComment_29;
            MR_Word ll_backend__use_local_vars__NewCommentInstr_30;
            MR_String ll_backend__use_local_vars__Var_38;
            MR_Word ll_backend__use_local_vars__Var_39;
            MR_Word ll_backend__use_local_vars__Var_40;
            MR_Word ll_backend__use_local_vars__Var_42;

            {
              ll_backend__use_local_vars__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_39, 0) = ((MR_Box) (ll_backend__use_local_vars__ProcLabel_14));
            }
            {
              ll_backend__use_local_vars__Var_38 = ll_backend__opt_debug__dump_livemap_2_f_0(ll_backend__use_local_vars__Var_39, ll_backend__use_local_vars__LiveMap_28);
            }
            {
              ll_backend__use_local_vars__NewComment_29 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__use_local_vars__Var_38);
            }
            {
              ll_backend__use_local_vars__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_40, 0) = ((MR_Box) (ll_backend__use_local_vars__NewComment_29));
            }
            {
              ll_backend__use_local_vars__NewCommentInstr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__NewCommentInstr_30, 0) = ((MR_Box) (ll_backend__use_local_vars__Var_40));
              MR_hl_field(MR_mktag(0), ll_backend__use_local_vars__NewCommentInstr_30, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__use_local_vars__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_42, 0) = ((MR_Box) (ll_backend__use_local_vars__NewCommentInstr_30));
              MR_hl_field(MR_mktag(1), ll_backend__use_local_vars__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__use_local_vars__Comments_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__use_local_vars__Comments0_16, ll_backend__use_local_vars__Var_42);
            }
          }
        else
          ll_backend__use_local_vars__Comments_31 = ll_backend__use_local_vars__Comments0_16;
        {
          *ll_backend__use_local_vars__Instrs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__use_local_vars__Comments_31, ll_backend__use_local_vars__Instrs1_26);
        }
      }
    else
      *ll_backend__use_local_vars__Instrs_10 = ll_backend__use_local_vars__Instrs0_9;
  }
}

static MR_bool MR_CALL 
ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0_10001(
  MR_Box ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box ll_backend__use_local_vars__wrapper_arg_2)
{
  {
    MR_bool ll_backend__use_local_vars__succeeded;

    {
      ll_backend__use_local_vars__succeeded = ll_backend__use_local_vars____Unify____maybe_compulsory_lvals_0_0(((MR_Word) ll_backend__use_local_vars__wrapper_arg_1), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_2));
    }
    return ll_backend__use_local_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0_10001(
  MR_Box * ll_backend__use_local_vars__wrapper_arg_1,
  MR_Box ll_backend__use_local_vars__wrapper_arg_2,
  MR_Box ll_backend__use_local_vars__wrapper_arg_3)
{
  {
    MR_Word ll_backend__use_local_vars__conv0_HeadVar__1_1;

    {
      ll_backend__use_local_vars____Compare____maybe_compulsory_lvals_0_0(&ll_backend__use_local_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__use_local_vars__wrapper_arg_2), ((MR_Word) ll_backend__use_local_vars__wrapper_arg_3));
    }
    *ll_backend__use_local_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__use_local_vars__conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__use_local_vars__init(void)
{
}

void mercury__ll_backend__use_local_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__use_local_vars__ll_backend__use_local_vars__type_ctor_info_maybe_compulsory_lvals_0);
}

void mercury__ll_backend__use_local_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__use_local_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.use_local_vars. */
