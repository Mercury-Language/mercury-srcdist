/*
** Automatically generated from `term_errors.m'
** by the Mercury compiler,
** version rotd-2024-10-02
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


// :- module transform_hlds.term_errors.
// :- implementation.

/*
INIT mercury__transform_hlds__term_errors__init
ENDINIT
*/

#include "transform_hlds.term_errors.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1];

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15;

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16;

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1];

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17;

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0[8];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3[8];

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0[4];

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0[18];

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0[18];

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__442__1_2_p_0(
  MR_String LambdaHeadVar__1_179,
  MR_Word * LambdaHeadVar__2_180);

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__438__1_2_p_0(
  MR_String LambdaHeadVar__1_173,
  MR_Word * LambdaHeadVar__2_174);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__385__1_2_p_0(
  MR_Word PPId_305,
  MR_Word CallerPPId_307);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__330__1_2_p_0(
  MR_Word CallerPPId_11,
  MR_Word PPId_13);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__369__1_2_p_0(
  MR_Word PPId_296,
  MR_Word CallerPPId_298);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__402__1_2_p_0(
  MR_Word PPId_314,
  MR_Word CallerPPId_316);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__491__1_2_p_0(
  MR_Word SCCPredId_43,
  MR_Word PredId_334);

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__347__1_2_p_0(
  MR_Word PPId_288,
  MR_Word CallerPPId_290);

static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Single_2,
  MR_Word HeadVar__3_3,
  MR_Integer ErrNum0_4,
  MR_Word STATE_VARIABLE_Msgs_0_5,
  MR_Word * STATE_VARIABLE_Msgs_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Single_10,
  MR_Word TermErrorContext_11,
  MR_Word ErrorNum_12,
  MR_Word STATE_VARIABLE_ReasonMsgs_0_28,
  MR_Word * STATE_VARIABLE_ReasonMsgs_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Single_7,
  MR_Word ErrorKind_8,
  MR_Word * Pieces_9,
  MR_Word * Reason_10);

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
  MR_Word VarTable_4,
  MR_Word HeadVars_5,
  MR_Word * Pieces_6);

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_desc_loop_5_p_0(
  MR_Word VarTable_6,
  MR_String Prefix_7,
  MR_Word HeadVar__3_3,
  MR_Word VarsCounts_10,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[115][2];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_4[3][5];




static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[115][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mutually recursive procedures"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Termination of the "))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Termination constant of"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the mutually recursive procedures"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Termination constants"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "set to infinity for the following"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "reason:"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "reasons:"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "At the recursive call to"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to decrease in size."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the arguments are not guaranteed"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the recursive cycle through the calls to"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not guaranteed to decrease in size."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the arguments are"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may make one or more calls back to Mercury."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It contains foreign code that"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There is a"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "termination constant of infinity."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Each of these higher-order calls has a"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "makes one or more higher-order calls."))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with one or more higher order arguments."))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It contains a higher order call."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The termination pragmas are inconsistent."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the size of the input arguments."))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with an unbounded increase"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which has a termination constant of infinity."))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It is a builtin predicate."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It contains a typeclass method call."))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "between the arguments of this group of procedures."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The analysis was unable to form any constraints"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The set of output supplier variables of"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The set of its output supplier variables"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a subset of the head variables"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "foreign language code included via a"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It depends on the properties of"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by the analysis to be infeasible."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The solver found the constraints produced"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the analysis to process."))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There are too many execution paths"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "{}")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0 = {
  (MR_String) "term_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1] = { &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0 };

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1] = { &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0 };

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error",
  { transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0 },
  { transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0,

};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0 = {
  (MR_String) "pragma_foreign_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1 = {
  (MR_String) "imported_pred",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2 = {
  (MR_String) "can_loop_proc_called",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3 = {
  (MR_String) "horder_args",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4 = {
  (MR_String) "horder_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5 = {
  (MR_String) "method_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6 = {
  (MR_String) "inf_termination_const",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(6),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7 = {
  (MR_String) "ho_inf_termination_const",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(7),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  { (MR_TypeInfo) (&transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8 = {
  (MR_String) "not_subset",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(8),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9 = {
  (MR_String) "inf_call",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(9),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10 = {
  (MR_String) "cycle",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(10),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11 = {
  (MR_String) "no_eqns",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12 = {
  (MR_String) "too_many_paths",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13 = {
  (MR_String) "solver_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) };

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14 = {
  (MR_String) "is_builtin",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(14),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) };

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15 = {
  (MR_String) "does_not_term_pragma",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(15),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16 = {
  (MR_String) "inconsistent_annotations",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(16),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) };

static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17 = {
  (MR_String) "does_not_term_foreign",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(17),
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1] = { &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2 };

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1] = { &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3 };

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17
};

static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0[4] = {
  {
    UINT32_C(8),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0[18] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12
};

static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0[18] = {
  (MR_Integer) 15,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 14,
  (MR_Integer) 9,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 17,
  (MR_Integer) 16,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_kind_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_kind_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error_kind",
  { transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0 },
  { transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0 },
  (MR_Integer) 18,
  UINT16_C(12),
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0,

};

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__442__1_2_p_0(
  MR_String LambdaHeadVar__1_179,
  MR_Word * LambdaHeadVar__2_180)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__2_180 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (LambdaHeadVar__1_179));
  }
}

static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__438__1_2_p_0(
  MR_String LambdaHeadVar__1_173,
  MR_Word * LambdaHeadVar__2_174)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__2_174 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (LambdaHeadVar__1_173));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__385__1_2_p_0(
  MR_Word PPId_305,
  MR_Word CallerPPId_307)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_305, CallerPPId_307);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__330__1_2_p_0(
  MR_Word CallerPPId_11,
  MR_Word PPId_13)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_13, CallerPPId_11);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__369__1_2_p_0(
  MR_Word PPId_296,
  MR_Word CallerPPId_298)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_296, CallerPPId_298);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__402__1_2_p_0(
  MR_Word PPId_314,
  MR_Word CallerPPId_316)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_314, CallerPPId_316);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__491__1_2_p_0(
  MR_Word SCCPredId_43,
  MR_Word PredId_334)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_334, SCCPredId_43);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__347__1_2_p_0(
  MR_Word PPId_288,
  MR_Word CallerPPId_290)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_288, CallerPPId_290);
  return succeeded;
}

void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      transform_hlds__term_errors____Compare____term_error_kind_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_51 == CastY_52);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    transform_hlds__term_errors____Index____term_error_kind_0_0(HeadVar__2_2, &IndexX_4);
    transform_hlds__term_errors____Index____term_error_kind_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 7:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_11;
              MR_Word SubResult1_9;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_9, ArgX1_7, ArgY1_8);
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&CompareResult_6, ArgX2_10, ArgY2_11);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_13;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_16;
              MR_Word SubResult1_14;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
                succeeded = (SubResult1_14 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_14;
                else
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&CompareResult_6, ArgX2_15, ArgY2_16);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_18;
                  MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_21;
                  MR_Word SubResult1_19;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_19, ArgX1_17, ArgY1_18);
                    succeeded = (SubResult1_19 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_19;
                    else
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&CompareResult_6, ArgX2_20, ArgY2_21);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_23;
                  MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_26;
                  MR_Word SubResult1_24;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_24, ArgX1_22, ArgY1_23);
                    succeeded = (SubResult1_24 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_24;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX2_25)), ((MR_Box) (ArgY2_26)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_28;
                  MR_Word ArgX2_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_31;
                  MR_Word ArgX3_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_34;
                  MR_Word SubResult1_29;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_29, ArgX1_27, ArgY1_28);
                    succeeded = (SubResult1_29 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_29;
                    else
                    {
                      MR_Word SubResult2_32;

                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]), &SubResult2_32, ((MR_Box) (ArgX2_30)), ((MR_Box) (ArgY2_31)));
                      succeeded = (SubResult2_32 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_32;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]), &CompareResult_6, ((MR_Box) (ArgX3_33)), ((MR_Box) (ArgY3_34)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_36;
                  MR_Word ArgX2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_39;
                  MR_Word SubResult1_37;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_37, ArgX1_35, ArgY1_36);
                    succeeded = (SubResult1_37 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_37;
                    else
                      hlds__hlds_pred____Compare____pred_proc_id_0_0(&CompareResult_6, ArgX2_38, ArgY2_39);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_41;
                  MR_Word ArgX2_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_44;
                  MR_Word SubResult1_42;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_42, ArgX1_40, ArgY1_41);
                    succeeded = (SubResult1_42 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_42;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[3]), &CompareResult_6, ((MR_Box) (ArgX2_43)), ((MR_Box) (ArgY2_44)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_46;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    hlds__hlds_pred____Compare____pred_id_0_0(&CompareResult_6, ArgX1_45, ArgY1_46);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_48;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    hlds__hlds_pred____Compare____pred_id_0_0(&CompareResult_6, ArgX1_47, ArgY1_48);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_50;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&CompareResult_6, ArgX1_49, ArgY1_50);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
transform_hlds__term_errors____Index____term_error_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_55 == CastY_56);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_42 == CastX_41);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_44 == CastX_43);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_46 == CastX_45);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_52 == CastX_51);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_9, ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_13, ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_21, ArgY2_22);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_64_64;
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_23, ArgY1_24);
                if (succeeded)
                {
                  TypeInfo_64_64 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX2_25)), ((MR_Box) (ArgY2_26)));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_73_73;
              MR_Word TypeInfo_74_74;
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_27, ArgY1_28);
                if (succeeded)
                {
                  TypeInfo_73_73 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX2_29)), ((MR_Box) (ArgY2_30)));
                  if (succeeded)
                  {
                    TypeInfo_74_74 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (ArgX3_31)), ((MR_Box) (ArgY3_32)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_33, ArgY1_34);
                if (succeeded)
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_35, ArgY2_36);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_60_60;
              MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_38;
              MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_37, ArgY1_38);
                if (succeeded)
                {
                  TypeInfo_60_60 = (MR_Word) (&transform_hlds__term_errors_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (ArgX2_39)), ((MR_Box) (ArgY2_40)));
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_47, ArgY1_48);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_49, ArgY1_50);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_53, ArgY1_54);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(
  MR_Word ErrorKind_3)
{
  MR_Word IsFatal_4;

  switch (MR_tag((MR_Word) ErrorKind_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ErrorKind_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          IsFatal_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          IsFatal_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 3:
      IsFatal_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      IsFatal_4 = (MR_Integer) 1;
      break;
  }
  return IsFatal_4;
}

MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(
  MR_Word ErrorKind_3)
{
  MR_Word IsDirect_4;

  switch (MR_tag((MR_Word) ErrorKind_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ErrorKind_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          IsDirect_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          IsDirect_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      IsDirect_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ErrorKind_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 7:
          IsDirect_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          IsDirect_4 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return IsDirect_4;
}

void MR_CALL 
transform_hlds__term_errors__report_term_errors_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SCC_7,
  MR_Word Errors_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word Context_10;
  MR_Word Pieces1_12;
  MR_Word Single_13;
  MR_Word Pieces_15;
  MR_Word ReasonMsgsCord_16;
  MR_Word ReasonMsgs_21;
  MR_Word Msgs_22;
  MR_Word Spec_23;
  MR_Word STATE_VARIABLE_Specs_51_51;
  MR_Word Var_59;
  MR_Word PPId_11;
  MR_Box conv0_PPId_11;

  transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_6, SCC_7, &Context_10);
  succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7, &conv0_PPId_11);
  if (succeeded)
  {
    PPId_11 = ((MR_Word) (conv0_PPId_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_30;

    Var_30 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, PPId_11);
    Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[5])), Var_30);
    {
      Single_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Single_13, 0) = ((MR_Box) (PPId_11));
    }
  }
  else
  {
    MR_Word Var_38;
    MR_Word Var_41;

    Var_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7);
    Var_38 = hlds__hlds_error_util__describe_several_proc_names_4_f_0(ModuleInfo_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Var_41);
    Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[9])), Var_38);
    Single_13 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((Errors_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_12, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[11])));
    ReasonMsgsCord_16 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
    STATE_VARIABLE_Specs_51_51 = STATE_VARIABLE_Specs_0_24;
  }
  else
  {
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, Errors_8, (MR_Integer) 1))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, Errors_8, (MR_Integer) 0))));

    if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_50;

      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_12, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[13])));
      Var_50 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
      transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_6, Single_13, Var_78, (MR_Word) ((MR_Unsigned) 0U), Var_50, &ReasonMsgsCord_16, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_51_51);
    }
    else
    {
      MR_Word Var_57;
      MR_Word Error_88;
      MR_Word Errors_89;
      MR_Word STATE_VARIABLE_Msgs_30_96;
      MR_Word STATE_VARIABLE_Specs_31_97;

      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_12, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[15])));
      Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
      Error_88 = ((MR_Word) ((MR_hl_field(1, Errors_8, (MR_Integer) 0))));
      Errors_89 = ((MR_Word) ((MR_hl_field(1, Errors_8, (MR_Integer) 1))));
      transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_6, Single_13, Error_88, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_3[1])), Var_57, &STATE_VARIABLE_Msgs_30_96, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_31_97);
      transform_hlds__term_errors__describe_term_errors_8_p_0(ModuleInfo_6, Single_13, Errors_89, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), STATE_VARIABLE_Msgs_30_96, &ReasonMsgsCord_16, STATE_VARIABLE_Specs_31_97, &STATE_VARIABLE_Specs_51_51);
    }
  }
  ReasonMsgs_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), ReasonMsgsCord_16);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (Context_10));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (Pieces_15));
  }
  {
    Msgs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Msgs_22, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Msgs_22, 1) = ((MR_Box) (ReasonMsgs_21));
  }
  {
    Spec_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.term_errors.report_term_errors\'/5"));
    MR_hl_field(2, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(2, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 92U));
    MR_hl_field(2, Spec_23, 3) = ((MR_Box) (Msgs_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_25 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_23));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_51_51));
  }
}

static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Single_2,
  MR_Word HeadVar__3_3,
  MR_Integer ErrNum0_4,
  MR_Word STATE_VARIABLE_Msgs_0_5,
  MR_Word * STATE_VARIABLE_Msgs_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Msgs_6 = STATE_VARIABLE_Msgs_0_5;
    }
    else
    {
      MR_Word Error_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Errors_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_Msgs_30_30;
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Integer Var_32;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_ErrNum0_4;
      MR_Word next_value_of_STATE_VARIABLE_Msgs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (ErrNum0_4));
      }
      transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_1, Single_2, Error_20, Var_29, STATE_VARIABLE_Msgs_0_5, &STATE_VARIABLE_Msgs_30_30, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_31_31);
      Var_32 = (MR_Integer) ((MR_Unsigned) ErrNum0_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Errors_21;
      next_value_of_ErrNum0_4 = Var_32;
      next_value_of_STATE_VARIABLE_Msgs_0_5 = STATE_VARIABLE_Msgs_30_30;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_31_31;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      ErrNum0_4 = next_value_of_ErrNum0_4;
      STATE_VARIABLE_Msgs_0_5 = next_value_of_STATE_VARIABLE_Msgs_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Single_10,
  MR_Word TermErrorContext_11,
  MR_Word ErrorNum_12,
  MR_Word STATE_VARIABLE_ReasonMsgs_0_28,
  MR_Word * STATE_VARIABLE_ReasonMsgs_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, TermErrorContext_11, (MR_Integer) 0))));
  MR_Word ErrorKind_16 = ((MR_Word) ((MR_hl_field(0, TermErrorContext_11, (MR_Integer) 1))));
  MR_Word Pieces0_17;
  MR_Word Reason_18;
  MR_Word Pieces_22;
  MR_Word ReasonMsg_23;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_40;

  transform_hlds__term_errors__term_error_kind_description_5_p_0(ModuleInfo_9, Single_10, ErrorKind_16, &Pieces0_17, &Reason_18);
  if ((ErrorNum_12 == (MR_Word) ((MR_Unsigned) 0U)))
    Pieces_22 = Pieces0_17;
  else
  {
    MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(1, ErrorNum_12, (MR_Integer) 0))));
    MR_String Nstr_20;
    MR_String Preamble_21;
    MR_String Var_33;
    MR_Word Var_35;

    mercury__string__int_to_string_2_p_0(N_19, &Nstr_20);
    Var_33 = mercury__string__f_43_43_2_f_0(Nstr_20, (MR_String) ":");
    Preamble_21 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", Var_33);
    {
      Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_35, 0) = ((MR_Box) (Preamble_21));
    }
    {
      Pieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_22, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Pieces_22, 1) = ((MR_Box) (Pieces0_17));
    }
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Context_15));
  }
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (Pieces_22));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ReasonMsg_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ReasonMsg_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ReasonMsg_23, 1) = ((MR_Box) (Var_36));
    MR_hl_field(3, ReasonMsg_23, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, ReasonMsg_23, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ReasonMsg_23, 4) = ((MR_Box) (Var_39));
  }
  *STATE_VARIABLE_ReasonMsgs_29 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), STATE_VARIABLE_ReasonMsgs_0_28, ((MR_Box) (ReasonMsg_23)));
  if ((Reason_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
  else
  {
    MR_Word InfArgSizePPId_24 = ((MR_Word) ((MR_hl_field(1, Reason_18, (MR_Integer) 0))));
    MR_Word ArgSize_25;
    MR_Word ArgSizeErrors_26;
    MR_Word Var_43;

    transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(ModuleInfo_9, InfArgSizePPId_24, &ArgSize_25);
    succeeded = (ArgSize_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_43 = ((MR_Word) ((MR_hl_field(1, ArgSize_25, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 1);
      if (succeeded)
        ArgSizeErrors_26 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ArgSizePPIdSCC_27;
      MR_Word Context_49;
      MR_Word Pieces1_51;
      MR_Word Single_52;
      MR_Word Pieces_56;
      MR_Word ReasonMsgsCord_57;
      MR_Word ReasonMsgs_61;
      MR_Word Msgs_62;
      MR_Word Spec_63;
      MR_Word STATE_VARIABLE_Specs_53_84;
      MR_Word Var_92;
      MR_Word PPId_50;
      MR_Box conv0_PPId_50;

      ArgSizePPIdSCC_27 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (InfArgSizePPId_24)));
      transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_9, ArgSizePPIdSCC_27, &Context_49);
      succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ArgSizePPIdSCC_27, &conv0_PPId_50);
      if (succeeded)
      {
        PPId_50 = ((MR_Word) (conv0_PPId_50));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_68;

        Var_68 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_9, PPId_50);
        Pieces1_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[17])), Var_68);
        {
          Single_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Single_52, 0) = ((MR_Box) (PPId_50));
        }
      }
      else
      {
        MR_Word Var_70;
        MR_Word Var_73;

        Var_73 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ArgSizePPIdSCC_27);
        Var_70 = hlds__hlds_error_util__describe_several_proc_names_4_f_0(ModuleInfo_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Var_73);
        Pieces1_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[21])), Var_70);
        Single_52 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if ((ArgSizeErrors_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5", (MR_String) "empty list of errors");
          return;
        }
      else
      {
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, ArgSizeErrors_26, (MR_Integer) 1))));
        MR_Word Var_107 = ((MR_Word) ((MR_hl_field(1, ArgSizeErrors_26, (MR_Integer) 0))));

        if ((Var_106 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_83;

          Pieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_51, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[25])));
          Var_83 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
          transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_9, Single_52, Var_107, (MR_Word) ((MR_Unsigned) 0U), Var_83, &ReasonMsgsCord_57, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_53_84);
        }
        else
        {
          MR_Word Var_91;
          MR_Word Error_117;
          MR_Word Errors_118;
          MR_Word STATE_VARIABLE_Msgs_30_125;
          MR_Word STATE_VARIABLE_Specs_31_126;

          Pieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_51, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[28])));
          Var_91 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
          Error_117 = ((MR_Word) ((MR_hl_field(1, ArgSizeErrors_26, (MR_Integer) 0))));
          Errors_118 = ((MR_Word) ((MR_hl_field(1, ArgSizeErrors_26, (MR_Integer) 1))));
          transform_hlds__term_errors__describe_term_error_8_p_0(ModuleInfo_9, Single_52, Error_117, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_3[1])), Var_91, &STATE_VARIABLE_Msgs_30_125, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_31_126);
          transform_hlds__term_errors__describe_term_errors_8_p_0(ModuleInfo_9, Single_52, Errors_118, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), STATE_VARIABLE_Msgs_30_125, &ReasonMsgsCord_57, STATE_VARIABLE_Specs_31_126, &STATE_VARIABLE_Specs_53_84);
        }
      }
      ReasonMsgs_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), ReasonMsgsCord_57);
      {
        Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_92, 0) = ((MR_Box) (Context_49));
        MR_hl_field(0, Var_92, 1) = ((MR_Box) (Pieces_56));
      }
      {
        Msgs_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Msgs_62, 0) = ((MR_Box) (Var_92));
        MR_hl_field(1, Msgs_62, 1) = ((MR_Box) (ReasonMsgs_61));
      }
      {
        Spec_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5"));
        MR_hl_field(2, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(2, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 92U));
        MR_hl_field(2, Spec_63, 3) = ((MR_Box) (Msgs_62));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_31 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_63));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_53_84));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_errors.describe_term_error\'/8", (MR_String) "inf arg size procedure does not have inf arg size");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_180;

  transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__442__1_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_180);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_180));
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_174;

  transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__438__1_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_174);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_174));
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__385__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__330__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__369__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__402__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__491__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__347__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Single_7,
  MR_Word ErrorKind_8,
  MR_Word * Pieces_9,
  MR_Word * Reason_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ErrorKind_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ErrorKind_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[105]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[76]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[70]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[88]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 4:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[92]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 5:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[113]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 6:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[109]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 7:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[78]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_97;
        MR_Word Var_100;
        MR_Word CallerPPId_290 = ((MR_Word) ((MR_hl_field(1, ErrorKind_8, (MR_Integer) 0))));
        MR_Word CalleePPId_291 = ((MR_Word) ((MR_hl_field(1, ErrorKind_8, (MR_Integer) 1))));
        MR_Word Pieces1_293;
        MR_Word CalleePieces_295;

        if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
          Pieces1_293 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CallerPPId_290);
        else
        {
          MR_Word Var_89;
          MR_Word PPId_288 = ((MR_Word) ((MR_hl_field(1, Single_7, (MR_Integer) 0))));

          {
            Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
            MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_1));
            MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_89, 3) = ((MR_Box) (PPId_288));
            MR_hl_field(0, Var_89, 4) = ((MR_Box) (CallerPPId_290));
          }
          mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "can_loop_proc_called: caller outside this SCC");
          Pieces1_293 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[30]));
        }
        CalleePieces_295 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CalleePPId_291);
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CalleePieces_295, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[35])));
        Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[33])), Var_100);
        *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_293, Var_97);
        *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_124;
        MR_Word Var_127;
        MR_Word CallerPPId_298 = ((MR_Word) ((MR_hl_field(2, ErrorKind_8, (MR_Integer) 0))));
        MR_Word CalleePPId_299 = ((MR_Word) ((MR_hl_field(2, ErrorKind_8, (MR_Integer) 1))));
        MR_Word Pieces1_301;
        MR_Word CalleePieces_303;

        if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
          Pieces1_301 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CallerPPId_298);
        else
        {
          MR_Word Var_116;
          MR_Word PPId_296 = ((MR_Word) ((MR_hl_field(1, Single_7, (MR_Integer) 0))));

          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_116, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
            MR_hl_field(0, Var_116, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_4));
            MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_116, 3) = ((MR_Box) (PPId_296));
            MR_hl_field(0, Var_116, 4) = ((MR_Box) (CallerPPId_298));
          }
          mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "horder_args: caller outside this SCC");
          Pieces1_301 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[30]));
        }
        CalleePieces_303 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CalleePPId_299);
        Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CalleePieces_303, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[68])));
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[33])), Var_127);
        *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_301, Var_124);
        *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_140;
            MR_Word Var_143;
            MR_Word CallerPPId_307 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 1))));
            MR_Word CalleePPId_308 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 2))));
            MR_Word Pieces1_310;
            MR_Word CalleePieces_312;

            if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
              Pieces1_310 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CallerPPId_307);
            else
            {
              MR_Word Var_132;
              MR_Word PPId_305 = ((MR_Word) ((MR_hl_field(1, Single_7, (MR_Integer) 0))));

              {
                Var_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_132, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
                MR_hl_field(0, Var_132, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_6));
                MR_hl_field(0, Var_132, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_132, 3) = ((MR_Box) (PPId_305));
                MR_hl_field(0, Var_132, 4) = ((MR_Box) (CallerPPId_307));
              }
              mercury__require__expect_3_p_0(Var_132, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_termination_const: caller outside this SCC");
              Pieces1_310 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[30]));
            }
            CalleePieces_312 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CalleePPId_308);
            Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CalleePieces_312, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[84])));
            Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[33])), Var_143);
            *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_310, Var_140);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Reason_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (CalleePPId_308));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallerPPId_316 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 1))));
            MR_Word Pieces1_318;

            if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
              Pieces1_318 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CallerPPId_316);
            else
            {
              MR_Word Var_148;
              MR_Word PPId_314 = ((MR_Word) ((MR_hl_field(1, Single_7, (MR_Integer) 0))));

              {
                Var_148 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_148, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
                MR_hl_field(0, Var_148, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_3));
                MR_hl_field(0, Var_148, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_148, 3) = ((MR_Box) (PPId_314));
                MR_hl_field(0, Var_148, 4) = ((MR_Box) (CallerPPId_316));
              }
              mercury__require__expect_3_p_0(Var_148, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "ho_info_termination_const: caller outside this SCC");
              Pieces1_318 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[30]));
            }
            *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_318, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[66])));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ProcPPId_21 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 1))));
            MR_Word OutputSuppliers_22 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 2))));
            MR_Word HeadVars_23 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 3))));
            MR_Word PredId_25;
            MR_Integer ProcId_26;
            MR_Word ProcInfo_28;
            MR_Word VarTable_29;
            MR_Word OutputSuppliersNames_30;
            MR_Word OutputSuppliersPieces_33;
            MR_Word HeadVarsNames_34;
            MR_Word HeadVarsPieces_37;
            MR_Word Var_181;
            MR_Word Var_182;
            MR_Word Var_183;
            MR_Word Pieces1_327;
            MR_Word Var_27;

            if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word PPIdPieces_320;

              PPIdPieces_320 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, ProcPPId_21);
              {
                Pieces1_327 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces1_327, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[93])));
                MR_hl_field(1, Pieces1_327, 1) = ((MR_Box) (PPIdPieces_320));
              }
            }
            else
            {
              MR_Word PPId_319 = ((MR_Word) ((MR_hl_field(1, Single_7, (MR_Integer) 0))));

              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_319, ProcPPId_21);
              if (succeeded)
                Pieces1_327 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[95]));
              else
              {
                MR_Word PPIdPieces_24;

                PPIdPieces_24 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, ProcPPId_21);
                {
                  Pieces1_327 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Pieces1_327, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[93])));
                  MR_hl_field(1, Pieces1_327, 1) = ((MR_Box) (PPIdPieces_24));
                }
              }
            }
            PredId_25 = ((MR_Word) ((MR_hl_field(0, ProcPPId_21, (MR_Integer) 0))));
            ProcId_26 = ((MR_Integer) ((MR_hl_field(0, ProcPPId_21, (MR_Integer) 1))));
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, PredId_25, ProcId_26, &Var_27, &ProcInfo_28);
            hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_28, &VarTable_29);
            transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(VarTable_29, OutputSuppliers_22, &OutputSuppliersNames_30);
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&transform_hlds__term_errors_scalar_common_2[1]), OutputSuppliersNames_30, &OutputSuppliersPieces_33);
            transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(VarTable_29, HeadVars_23, &HeadVarsNames_34);
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&transform_hlds__term_errors_scalar_common_2[2]), HeadVarsNames_34, &HeadVarsPieces_37);
            Var_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadVarsPieces_37, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[58])));
            Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[97])), Var_183);
            Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OutputSuppliersPieces_33, Var_182);
            *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_327, Var_181);
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word CallerPPId_11 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 1))));
            MR_Word CalleePPId_12 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 2))));
            MR_Word Pieces1_14;
            MR_Word CalleePieces_16;
            MR_Word Var_85;
            MR_Word Var_88;

            if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
              Pieces1_14 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CallerPPId_11);
            else
            {
              MR_Word PPId_13 = ((MR_Word) ((MR_hl_field(1, Single_7, (MR_Integer) 0))));
              MR_Word Var_70;

              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_70, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
                MR_hl_field(0, Var_70, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_5));
                MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_70, 3) = ((MR_Box) (CallerPPId_11));
                MR_hl_field(0, Var_70, 4) = ((MR_Box) (PPId_13));
              }
              mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_call: caller outside this SCC");
              Pieces1_14 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[30]));
            }
            CalleePieces_16 = hlds__hlds_error_util__describe_qual_proc_name_2_f_0(ModuleInfo_6, CalleePPId_12);
            Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CalleePieces_16, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[82])));
            Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[33])), Var_88);
            *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_14, Var_85);
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word CallSites_39 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 2))));
            MR_Word DirectCall_40;
            MR_Word Var_190;

            succeeded = (CallSites_39 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DirectCall_40 = ((MR_Word) ((MR_hl_field(1, CallSites_39, (MR_Integer) 0))));
              Var_190 = ((MR_Word) ((MR_hl_field(1, CallSites_39, (MR_Integer) 1))));
              succeeded = (Var_190 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word SitePieces_41;
              MR_Word Var_193;

              SitePieces_41 = hlds__hlds_error_util__describe_one_call_site_4_f_0(ModuleInfo_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, DirectCall_40);
              {
                Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_193, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__term_errors_scalar_common_1[36])));
                MR_hl_field(1, Var_193, 1) = ((MR_Box) (SitePieces_41));
              }
              *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_193, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[40])));
            }
            else
            {
              MR_Word Var_209;
              MR_Word Var_210;

              Var_210 = hlds__hlds_error_util__describe_several_call_sites_4_f_0(ModuleInfo_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, CallSites_39);
              Var_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_210, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[46])));
              *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[42])), Var_209);
            }
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 5:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[86]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Pieces2_333;
            MR_Word PredId_334 = ((MR_Word) ((MR_hl_field(3, ErrorKind_8, (MR_Integer) 1))));

            if ((Single_7 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_268;

              Var_268 = hlds__hlds_error_util__describe_qual_pred_name_2_f_0(ModuleInfo_6, PredId_334);
              Pieces2_333 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_268, (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[58])));
            }
            else
            {
              MR_Word SCCPredId_43;
              MR_Word Var_260;
              MR_Word PPId_329 = ((MR_Word) ((MR_hl_field(1, Single_7, (MR_Integer) 0))));

              SCCPredId_43 = ((MR_Word) ((MR_hl_field(0, PPId_329, (MR_Integer) 0))));
              {
                Var_260 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_260, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[1]));
                MR_hl_field(0, Var_260, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_2));
                MR_hl_field(0, Var_260, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_260, 3) = ((MR_Box) (SCCPredId_43));
                MR_hl_field(0, Var_260, 4) = ((MR_Box) (PredId_334));
              }
              mercury__require__expect_3_p_0(Var_260, (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "does not terminate pragma outside this SCC");
              Pieces2_333 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[60]));
            }
            *Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[56])), Pieces2_333);
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 7:
          {
            *Pieces_9 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[50]));
            *Reason_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
  MR_Word VarTable_4,
  MR_Word HeadVars_5,
  MR_Word * Pieces_6)
{
  MR_Word HeadVarsCounts_7;

  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_1[0]), HeadVars_5, &HeadVarsCounts_7);
  if ((HeadVarsCounts_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Pieces_6 = (MR_Word) (MR_mkword(1, &transform_hlds__term_errors_scalar_common_1[114]));
  else
  {
    MR_Word FirstVarCount_8 = ((MR_Word) ((MR_hl_field(1, HeadVarsCounts_7, (MR_Integer) 0))));
    MR_Word LaterVarsCounts_9 = ((MR_Word) ((MR_hl_field(1, HeadVarsCounts_7, (MR_Integer) 1))));

    transform_hlds__term_errors__term_errors_var_bag_desc_loop_5_p_0(VarTable_4, (MR_String) "{", FirstVarCount_8, LaterVarsCounts_9, Pieces_6);
  }
}

static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_desc_loop_5_p_0(
  MR_Word VarTable_6,
  MR_String Prefix_7,
  MR_Word HeadVar__3_3,
  MR_Word VarsCounts_10,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer Count_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String Piece_11;
  MR_Word Pieces_12;
  MR_String VarName_13;
  MR_String Piece0_14;

  VarName_13 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_6, Var_8);
  succeeded = (Count_9 > (MR_Integer) 1);
  if (succeeded)
  {
    MR_String Var_34;
    MR_String Var_42;
    MR_String Var_43;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__term_errors_scalar_common_3[0]), Count_9, &Var_34);
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "*", Var_34);
    Var_43 = mercury__string__f_43_43_2_f_0(VarName_13, Var_42);
    Piece0_14 = mercury__string__f_43_43_2_f_0(Prefix_7, Var_43);
  }
  else
    Piece0_14 = mercury__string__f_43_43_2_f_0(Prefix_7, VarName_13);
  if ((VarsCounts_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Piece_11 = mercury__string__f_43_43_2_f_0(Piece0_14, (MR_String) "}.");
    Pieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadVarCount_15 = ((MR_Word) ((MR_hl_field(1, VarsCounts_10, (MR_Integer) 0))));
    MR_Word TailVarsCounts_16 = ((MR_Word) ((MR_hl_field(1, VarsCounts_10, (MR_Integer) 1))));

    Piece_11 = Piece0_14;
    transform_hlds__term_errors__term_errors_var_bag_desc_loop_5_p_0(VarTable_6, (MR_String) "", HeadVarCount_15, TailVarsCounts_16, &Pieces_12);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__5_5 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Piece_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (Pieces_12));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_errors____Unify____term_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_errors____Compare____term_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_errors____Compare____term_error_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__term_errors__init(void)
{
}

void mercury__transform_hlds__term_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0);
	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0);
}

void mercury__transform_hlds__term_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_errors.
