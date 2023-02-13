/*
** Automatically generated from `term_constr_errors.m'
** by the Mercury compiler,
** version rotd-2023-02-13
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


// :- module transform_hlds.term_constr_errors.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_errors__init
ENDINIT
*/

#include "transform_hlds.term_constr_errors.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"




static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_0[1];

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_0[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_1[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1;

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2;

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3;

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_4[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4;

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_5[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_0[3];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_2[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_3[1];

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_kind_0[4];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_kind_0[6];

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_kind_0[6];

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__285__1_2_p_0(
  MR_Word PredId_17,
  MR_Word SCCPredId_19);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__262__1_2_p_0(
  MR_Word CallerPPId_9,
  MR_Word PPId_11);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__148__1_1_p_0(
  MR_Word LambdaHeadVar__1_33);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__133__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_32);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__121__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_30);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_errors_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Single_2,
  MR_Integer ErrNum0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ReasonMsgsCord_0_5,
  MR_Word * STATE_VARIABLE_ReasonMsgsCord_6);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Single_8,
  MR_Word MaybeErrorNum_9,
  MR_Word Error_10,
  MR_Word STATE_VARIABLE_ReasonMsgsCord_0_20,
  MR_Word * STATE_VARIABLE_ReasonMsgsCord_21);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_1[45][2];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_2[3][5];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_3[1][4];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_4[1][3];

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_5[1][1];




static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_1[45][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mutually recursive procedures"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Termination of the"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not satisfiable."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[15])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The termination condition"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There is a"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[15])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[15])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There is a call the foreign procedure"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is not known to terminate."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[15])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It contains a higher-order call."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[15])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[15])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__term_constr_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[42])))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_2[3][5] = {
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
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_errors_scalar_common_5[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_kind_0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0 = {
  (MR_String) "term2_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_0_0[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_0[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_0_0
};

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_errors____Unify____term2_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_errors____Compare____term2_error_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_errors",
  (MR_String) "term2_error",
  { transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_0 },
  { transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_0,

};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0 = {
  (MR_String) "imported_pred",
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

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1 = {
  (MR_String) "can_loop_proc_called",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2 = {
  (MR_String) "cond_not_satisfied",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3 = {
  (MR_String) "horder_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_4[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4 = {
  (MR_String) "does_not_term_pragma",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(4),
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_5[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5 = {
  (MR_String) "foreign_proc_called",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(5),
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__field_types_term2_error_kind_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_0[3] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_1[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_2[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_3[1] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5
};

static const MR_DuPtagLayout transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_kind_0[4] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_stag_ordered_term2_error_kind_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_kind_0[6] = {
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_1,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_2,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_4,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_5,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_3,
  &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_functor_desc_term2_error_kind_0_0
};

static const MR_Integer transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_kind_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_errors",
  (MR_String) "term2_error_kind",
  { transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_name_ordered_term2_error_kind_0 },
  { transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__du_ptag_ordered_term2_error_kind_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__functor_number_map_term2_error_kind_0,

};

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__285__1_2_p_0(
  MR_Word PredId_17,
  MR_Word SCCPredId_19)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_17, SCCPredId_19);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__262__1_2_p_0(
  MR_Word CallerPPId_9,
  MR_Word PPId_11)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PPId_11, CallerPPId_9);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__148__1_1_p_0(
  MR_Word LambdaHeadVar__1_33)
{
  MR_bool succeeded;
  MR_Word ErrorKind_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_33, (MR_Integer) 1))));

  if ((((ErrorKind_24 == (MR_Word) ((MR_Unsigned) 4U))) || (((MR_tag((MR_Word) ErrorKind_24)) == (MR_Integer) 3))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__133__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_32)
{
  MR_bool succeeded;
  MR_Word PredInfo_37;
  MR_Word Var_19;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, LambdaHeadVar__1_32, &PredInfo_37, &Var_19);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_37);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__121__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_30)
{
  MR_bool succeeded;
  MR_Word PredInfo_14;
  MR_Word Markers_16;
  MR_Word Var_31;
  MR_Word Var_15;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, LambdaHeadVar__1_30, &PredInfo_14, &Var_15);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_14);
  succeeded = !(succeeded);
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_14, &Markers_16);
    Var_31 = (MR_Integer) 21;
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_16, Var_31);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_0_0(
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
      transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_53 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_54 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_53 == CastY_54);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_12;

                hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_12, Var_60, ArgY1_11);
                succeeded = (SubResult1_12 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_12;
                else
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_59, ArgY2_14);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_61 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_40 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_61, ArgY1_40);
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_62, ArgY1_52);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_0_0(
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
      succeeded = transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
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
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_7, ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_13, ArgY1_14);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_15, ArgY1_16);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__148__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__133__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__decide_what_term2_errors_to_report__121__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SCC_7,
  MR_Word Errors_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_bool succeeded;
  MR_Word MaybeErrorsToReport_10;
  MR_Word Globals_14;
  MR_Word NormalErrors_15;
  MR_Word VerboseErrors_16;
  MR_Word IsCheckTerm_17;
  MR_Word CheckTermPPIds_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 526, &NormalErrors_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 527, &VerboseErrors_16);
  {
    IsCheckTerm_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IsCheckTerm_17, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[2]));
    MR_hl_field(0, IsCheckTerm_17, 1) = ((MR_Box) (transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_1));
    MR_hl_field(0, IsCheckTerm_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, IsCheckTerm_17, 3) = ((MR_Box) (ModuleInfo_6));
  }
  mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), IsCheckTerm_17, SCC_7, &CheckTermPPIds_18);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CheckTermPPIds_18);
  if (succeeded)
    {
      MaybeErrorsToReport_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeErrorsToReport_10, 0) = ((MR_Box) (Errors_8));
    }
  else
  {
    MR_Word IsNonImported_19;
    MR_Word NonImportedPPIds_20;

    {
      IsNonImported_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IsNonImported_19, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[2]));
      MR_hl_field(0, IsNonImported_19, 1) = ((MR_Box) (transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0_2));
      MR_hl_field(0, IsNonImported_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, IsNonImported_19, 3) = ((MR_Box) (ModuleInfo_6));
    }
    mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), IsNonImported_19, SCC_7, &NonImportedPPIds_20);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), NonImportedPPIds_20);
    if (succeeded)
      switch (VerboseErrors_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (NormalErrors_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              MaybeErrorsToReport_10 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word DirectErrors_22;

                mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), (MR_Word) (&transform_hlds__term_constr_errors_scalar_common_4[0]), Errors_8, &DirectErrors_22);
                if ((DirectErrors_22 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeErrorsToReport_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeErrorsToReport_10, 0) = ((MR_Box) (Errors_8));
                  }
                else
                  {
                    MaybeErrorsToReport_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeErrorsToReport_10, 0) = ((MR_Box) (DirectErrors_22));
                  }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MaybeErrorsToReport_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeErrorsToReport_10, 0) = ((MR_Box) (Errors_8));
          }
          break;
      }
    else
      MaybeErrorsToReport_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((MaybeErrorsToReport_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  else
  {
    MR_Word ErrorsToReport_11 = ((MR_Word) ((MR_hl_field(1, MaybeErrorsToReport_10, (MR_Integer) 0))));
    MR_Word Context_28;
    MR_Word Pieces1_32;
    MR_Word Single_33;
    MR_Word Pieces2_35;
    MR_Word ReasonMsgsCord_36;
    MR_Word ReasonMsgs_41;
    MR_Word Msgs_42;
    MR_Word Spec_43;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word PPId_29;
    MR_Box conv0_PPId_29;

    transform_hlds__term_util__get_context_from_scc_3_p_0(ModuleInfo_6, SCC_7, &Context_28);
    succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7, &conv0_PPId_29);
    if (succeeded)
    {
      PPId_29 = ((MR_Word) (conv0_PPId_29));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ProcName_31;

      ProcName_31 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PPId_29);
      Pieces1_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[1])), ProcName_31);
      {
        Single_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Single_33, 0) = ((MR_Box) (PPId_29));
      }
    }
    else
    {
      MR_Word ProcNames_34;
      MR_Word Var_49;

      Var_49 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_7);
      ProcNames_34 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(ModuleInfo_6, (MR_Integer) 0, Var_49);
      Pieces1_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[5])), ProcNames_34);
      Single_33 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((ErrorsToReport_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Pieces2_35 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[7]));
      ReasonMsgsCord_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
    }
    else
    {
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, ErrorsToReport_11, (MR_Integer) 1))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(1, ErrorsToReport_11, (MR_Integer) 0))));

      if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_58;

        Pieces2_35 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[9]));
        Var_58 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
        transform_hlds__term_constr_errors__describe_term2_error_6_p_0(ModuleInfo_6, Single_33, (MR_Word) ((MR_Unsigned) 0U), Var_84, Var_58, &ReasonMsgsCord_36);
      }
      else
      {
        MR_Word Var_64;
        MR_Word Error_93;
        MR_Word Errors_94;
        MR_Word STATE_VARIABLE_ReasonMsgsCord_22_98;

        Pieces2_35 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[11]));
        Var_64 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0));
        Error_93 = ((MR_Word) ((MR_hl_field(1, ErrorsToReport_11, (MR_Integer) 0))));
        Errors_94 = ((MR_Word) ((MR_hl_field(1, ErrorsToReport_11, (MR_Integer) 1))));
        transform_hlds__term_constr_errors__describe_term2_error_6_p_0(ModuleInfo_6, Single_33, (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_5[0])), Error_93, Var_64, &STATE_VARIABLE_ReasonMsgsCord_22_98);
        transform_hlds__term_constr_errors__describe_term2_errors_6_p_0(ModuleInfo_6, Single_33, (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), Errors_94, STATE_VARIABLE_ReasonMsgsCord_22_98, &ReasonMsgsCord_36);
      }
    }
    ReasonMsgs_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), ReasonMsgsCord_36);
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_32, Pieces2_35);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_65, 0) = ((MR_Box) (Context_28));
      MR_hl_field(2, Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Msgs_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_42, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Msgs_42, 1) = ((MR_Box) (ReasonMsgs_41));
    }
    {
      Spec_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.term_constr_errors.report_term2_errors\'/5"));
      MR_hl_field(0, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 88U));
      MR_hl_field(0, Spec_43, 3) = ((MR_Box) (Msgs_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_43));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_errors_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Single_2,
  MR_Integer ErrNum0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ReasonMsgsCord_0_5,
  MR_Word * STATE_VARIABLE_ReasonMsgsCord_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ReasonMsgsCord_6 = STATE_VARIABLE_ReasonMsgsCord_0_5;
    else
    {
      MR_Word Error_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Errors_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_ReasonMsgsCord_22_22;
      MR_Integer Var_23;
      MR_Integer next_value_of_ErrNum0_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ReasonMsgsCord_0_5;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (ErrNum0_3));
      }
      transform_hlds__term_constr_errors__describe_term2_error_6_p_0(ModuleInfo_1, Single_2, Var_21, Error_16, STATE_VARIABLE_ReasonMsgsCord_0_5, &STATE_VARIABLE_ReasonMsgsCord_22_22);
      Var_23 = (MR_Integer) ((MR_Unsigned) ErrNum0_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ErrNum0_3 = Var_23;
      next_value_of_HeadVar__4_4 = Errors_17;
      next_value_of_STATE_VARIABLE_ReasonMsgsCord_0_5 = STATE_VARIABLE_ReasonMsgsCord_22_22;
      ErrNum0_3 = next_value_of_ErrNum0_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ReasonMsgsCord_0_5 = next_value_of_STATE_VARIABLE_ReasonMsgsCord_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__285__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_errors__IntroducedFrom__pred__term2_error_kind_description__262__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_errors__describe_term2_error_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Single_8,
  MR_Word MaybeErrorNum_9,
  MR_Word Error_10,
  MR_Word STATE_VARIABLE_ReasonMsgsCord_0_20,
  MR_Word * STATE_VARIABLE_ReasonMsgsCord_21)
{
  MR_bool succeeded;
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, Error_10, (MR_Integer) 0))));
  MR_Word ErrorKind_13 = ((MR_Word) ((MR_hl_field(0, Error_10, (MR_Integer) 1))));
  MR_Word Pieces0_14;
  MR_Word Pieces_18;
  MR_Word ReasonMsg_19;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;

  switch (MR_tag((MR_Word) ErrorKind_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ErrorKind_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pieces0_14 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[44]));
          break;
        case (MR_Integer) 1:
          Pieces0_14 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[22]));
          break;
        case (MR_Integer) 2:
          Pieces0_14 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[38]));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallerPPId_33 = ((MR_Word) ((MR_hl_field(1, ErrorKind_13, (MR_Integer) 0))));
        MR_Word CalleePPId_34 = ((MR_Word) ((MR_hl_field(1, ErrorKind_13, (MR_Integer) 1))));
        MR_Word Piece1_36;
        MR_Word CalleePiece_38;
        MR_Word Var_56;
        MR_Word Var_59;

        if ((Single_8 == (MR_Word) ((MR_Unsigned) 0U)))
          Piece1_36 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, CallerPPId_33);
        else
        {
          MR_Word PPId_35 = ((MR_Word) ((MR_hl_field(1, Single_8, (MR_Integer) 0))));
          MR_Word Var_47;

          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_47, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[0]));
            MR_hl_field(0, Var_47, 1) = ((MR_Box) (transform_hlds__term_constr_errors__describe_term2_error_6_p_0_1));
            MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_47, 3) = ((MR_Box) (CallerPPId_33));
            MR_hl_field(0, Var_47, 4) = ((MR_Box) (PPId_35));
          }
          mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140transform_hlds.term_constr_errors.term2_error_kind_description\'/4", (MR_String) "caller outside this SCC");
          Piece1_36 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[13]));
        }
        CalleePiece_38 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, CalleePPId_34);
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CalleePiece_38, (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[17])));
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[18])), Var_59);
        Pieces0_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Piece1_36, Var_56);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_40 = ((MR_Word) ((MR_hl_field(2, ErrorKind_13, (MR_Integer) 0))));
        MR_Word Pieces2_44;

        if ((Single_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word PredDesc_45;

          PredDesc_45 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, PredId_40);
          Pieces2_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDesc_45, (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[30])));
        }
        else
        {
          MR_Word SCCPredId_42;
          MR_Word Var_60;
          MR_Word PPId_72 = ((MR_Word) ((MR_hl_field(1, Single_8, (MR_Integer) 0))));

          SCCPredId_42 = ((MR_Word) ((MR_hl_field(0, PPId_72, (MR_Integer) 0))));
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_60, 0) = ((MR_Box) (&transform_hlds__term_constr_errors_scalar_common_2[1]));
            MR_hl_field(0, Var_60, 1) = ((MR_Box) (transform_hlds__term_constr_errors__describe_term2_error_6_p_0_2));
            MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_60, 3) = ((MR_Box) (PredId_40));
            MR_hl_field(0, Var_60, 4) = ((MR_Box) (SCCPredId_42));
          }
          mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140transform_hlds.term_constr_errors.term2_error_kind_description\'/4", (MR_String) "does not terminate pragma outside this SCC");
          Pieces2_44 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[32]));
        }
        Pieces0_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[28])), Pieces2_44);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Name_46;
        MR_Word Var_70;
        MR_Word PPId_73 = ((MR_Word) ((MR_hl_field(3, ErrorKind_13, (MR_Integer) 0))));

        Name_46 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, PPId_73);
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Name_46, (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[36])));
        Pieces0_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_errors_scalar_common_1[34])), Var_70);
      }
      break;
  }
  if ((MaybeErrorNum_9 == (MR_Word) ((MR_Unsigned) 0U)))
    Pieces_18 = Pieces0_14;
  else
  {
    MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(1, MaybeErrorNum_9, (MR_Integer) 0))));
    MR_String Nstr_16;
    MR_String Preamble_17;
    MR_String Var_23;
    MR_Word Var_25;

    mercury__string__int_to_string_2_p_0(N_15, &Nstr_16);
    Var_23 = mercury__string__f_43_43_2_f_0(Nstr_16, (MR_String) ":");
    Preamble_17 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", Var_23);
    {
      Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_25, 0) = ((MR_Box) (Preamble_17));
    }
    {
      Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Pieces0_14));
    }
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Context_12));
  }
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (Pieces_18));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ReasonMsg_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ReasonMsg_19, 0) = ((MR_Box) (Var_26));
    MR_hl_field(3, ReasonMsg_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, ReasonMsg_19, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, ReasonMsg_19, 3) = ((MR_Box) (Var_29));
  }
  *STATE_VARIABLE_ReasonMsgsCord_21 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), STATE_VARIABLE_ReasonMsgsCord_0_20, ((MR_Box) (ReasonMsg_19)));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_errors____Unify____term2_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_errors____Compare____term2_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_errors____Unify____term2_error_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_errors____Compare____term2_error_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__term_constr_errors__init(void)
{
}

void mercury__transform_hlds__term_constr_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_kind_0);
}

void mercury__transform_hlds__term_constr_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_errors.
