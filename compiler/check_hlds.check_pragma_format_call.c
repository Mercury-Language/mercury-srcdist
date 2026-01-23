/*
** Automatically generated from `check_pragma_format_call.m'
** by the Mercury compiler,
** version rotd-2026-01-23
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


// :- module check_hlds.check_pragma_format_call.
// :- implementation.

/*
INIT mercury__check_hlds__check_pragma_format_call__init
ENDINIT
*/

#include "check_hlds.check_pragma_format_call.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "check_hlds.mode_test.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_pragma_format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_pragma_format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_pragma_format_call__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_pragma_format_call__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__IntroducedFrom__func__format_call_error_wrong_mode__337__1_1_f_0(
  MR_Integer LambdaHeadVar__1_72);

static void MR_CALL 
check_hlds__check_pragma_format_call__check_for_non_input_arg_nums_in_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Integer ArgNum_9,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_CurModeNum_0_16,
  MR_Integer * STATE_VARIABLE_CurModeNum_17,
  MR_Word STATE_VARIABLE_BadModeNums_0_18,
  MR_Word * STATE_VARIABLE_BadModeNums_19);

static void MR_CALL 
check_hlds__check_pragma_format_call__check_pragma_format_call_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
check_hlds__check_pragma_format_call__check_format_args_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_pragma_format_call__check_format_args_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_pragma_format_call__check_format_args_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word Context_3,
  MR_Integer MaxArgNum_4,
  MR_Word ArgTypes_5,
  MR_Integer NumProcs_6,
  MR_Word ProcIdsInfos_7,
  MR_Integer NumFormatArgs_8,
  MR_Integer FormatArgNum_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_wrong_mode_9_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_wrong_mode_9_f_0(
  MR_Word PredInfo_11,
  MR_Word Context_12,
  MR_Integer NumFormatArgs_13,
  MR_Integer FormatArgNum_14,
  MR_Integer ArgNum_15,
  MR_String FirstOrSecond_16,
  MR_String Role_17,
  MR_Integer NumProcs_18,
  MR_Word BadModeNums_19);

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_wrong_type_8_f_0(
  MR_Word PredInfo_10,
  MR_Word Context_11,
  MR_Integer NumFormatArgs_12,
  MR_Integer FormatArgNum_13,
  MR_Integer ArgNum_14,
  MR_String FirstOrSecond_15,
  MR_String Role_16,
  MR_String ExpectedType_17);

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_too_small_arg_num_6_f_0(
  MR_Word PredInfo_8,
  MR_Word Context_9,
  MR_Integer NumFormatArgs_10,
  MR_Integer FormatArgNum_11,
  MR_Integer ArgNum_12,
  MR_String FirstOrSecond_13);

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_too_large_arg_num_7_f_0(
  MR_Word PredInfo_9,
  MR_Word Context_10,
  MR_Integer NumFormatArgs_11,
  MR_Integer FormatArgNum_12,
  MR_Integer MaxArgNum_13,
  MR_Integer ArgNum_14,
  MR_String FirstOrSecond_15);

static void MR_CALL 
check_hlds__check_pragma_format_call__check_pragma_format_call_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_1[46][2];

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_6[1][10];




static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_1[46][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "format_string_values"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "specifies argument number"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has only"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument numbers start at 1."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as holding"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the type of that argument is not"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[5])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but that argument is not input."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but that argument is not input"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "modes of the"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: in the second argument of"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "element of the list:"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])))
  },
};

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__check_pragma_format_call_scalar_common_4[0])),
    ((MR_Box) (check_hlds__check_pragma_format_call__check_pragma_format_call_preds_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__check_pragma_format_call_scalar_common_5[0])),
    ((MR_Box) (check_hlds__check_pragma_format_call__format_call_error_wrong_mode_9_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__check_pragma_format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_pragma_format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_pragma_format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__check_pragma_format_call_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_pragma_format_call__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_pragma_format_call__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_pragma_format_call__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_pragma_format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_pragma_format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_pragma_format_call__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_pragma_format_call__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__IntroducedFrom__func__format_call_error_wrong_mode__337__1_1_f_0(
  MR_Integer LambdaHeadVar__1_72)
{
  MR_Word LambdaHeadVar__2_73;
  MR_Word Var_74;

  {
    Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_74, 1) = ((MR_Box) (LambdaHeadVar__1_72));
  }
  {
    LambdaHeadVar__2_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, LambdaHeadVar__2_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return LambdaHeadVar__2_73;
}

static void MR_CALL 
check_hlds__check_pragma_format_call__check_for_non_input_arg_nums_in_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Integer ArgNum_9,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_CurModeNum_0_16,
  MR_Integer * STATE_VARIABLE_CurModeNum_17,
  MR_Word STATE_VARIABLE_BadModeNums_0_18,
  MR_Word * STATE_VARIABLE_BadModeNums_19)
{
  MR_bool succeeded;
  MR_Word ProcInfo_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word ArgModes_14;
  MR_Word ArgMode_15;
  MR_Box conv0_ArgMode_15;

  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_11, &ArgModes_14);
  mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_14, ArgNum_9, &conv0_ArgMode_15);
  ArgMode_15 = ((MR_Word) (conv0_ArgMode_15));
  succeeded = check_hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_8, ArgMode_15);
  if (succeeded)
    *STATE_VARIABLE_BadModeNums_19 = STATE_VARIABLE_BadModeNums_0_18;
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_BadModeNums_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_CurModeNum_0_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_BadModeNums_0_18));
    }
  *STATE_VARIABLE_CurModeNum_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurModeNum_0_16 + (MR_Unsigned) 1);
}

static void MR_CALL 
check_hlds__check_pragma_format_call__check_pragma_format_call_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded;
  MR_Word PredIdTable0_9;
  MR_Word PredInfo0_10;
  MR_Box conv0_PredInfo0_10;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &PredIdTable0_9);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_9, ((MR_Box) (PredId_6)), &conv0_PredInfo0_10);
  if (succeeded)
  {
    PredInfo0_10 = ((MR_Word) (conv0_PredInfo0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeFormatCall0_11;
    MR_Word FormatCall0_12;
    MR_Word Context_13;
    MR_Word OoMFormatArgs0_14;
    MR_Word FormatArgs0_15;
    MR_Integer NumFormatArgs0_16;
    MR_Word ProcTable0_17;
    MR_Word ProcIdsInfos0_18;
    MR_Integer NumProcs_19;
    MR_Integer MaxArgNum_20;
    MR_Word ArgTypes_21;
    MR_Word FormatArgs_22;
    MR_Word MaybeFormatCall_27;
    MR_Word PredInfo_28;
    MR_Word Var_35;

    hlds__hlds_pred__pred_info_get_format_call_info_2_p_0(PredInfo0_10, &MaybeFormatCall0_11);
    if ((MaybeFormatCall0_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_pragma_format_call.check_pragma_format_call_pred\'/5", (MR_String) "MaybeFormatCall0 = no");
        return;
      }
    else
      FormatCall0_12 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall0_11, 0))));
    Context_13 = ((MR_Word) ((MR_hl_field(0, FormatCall0_12, 0))));
    OoMFormatArgs0_14 = ((MR_Word) ((MR_hl_field(0, FormatCall0_12, 1))));
    FormatArgs0_15 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), OoMFormatArgs0_14);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), FormatArgs0_15, &NumFormatArgs0_16);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_10, &ProcTable0_17);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_17, &ProcIdsInfos0_18);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_2[0]), ProcIdsInfos0_18, &NumProcs_19);
    Var_35 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_10);
    MaxArgNum_20 = (MR_Integer) (Var_35);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_10, &ArgTypes_21);
    check_hlds__check_pragma_format_call__check_format_args_13_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredInfo0_10, Context_13, MaxArgNum_20, ArgTypes_21, NumProcs_19, ProcIdsInfos0_18, NumFormatArgs0_16, (MR_Integer) 1, FormatArgs0_15, &FormatArgs_22, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
    if ((FormatArgs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeFormatCall_27 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadFormatArgs_23 = ((MR_Word) ((MR_hl_field(1, FormatArgs_22, 0))));
      MR_Word TailFormatArgs_24 = ((MR_Word) ((MR_hl_field(1, FormatArgs_22, 1))));
      MR_Word OoMFormatArgs_25;
      MR_Word FormatCall_26;

      {
        OoMFormatArgs_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMFormatArgs_25, 0) = ((MR_Box) (HeadFormatArgs_23));
        MR_hl_field(0, OoMFormatArgs_25, 1) = ((MR_Box) (TailFormatArgs_24));
      }
      {
        FormatCall_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FormatCall_26, 0) = ((MR_Box) (Context_13));
        MR_hl_field(0, FormatCall_26, 1) = ((MR_Box) (OoMFormatArgs_25));
      }
      {
        MaybeFormatCall_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeFormatCall_27, 0) = ((MR_Box) (FormatCall_26));
      }
    }
    hlds__hlds_pred__pred_info_set_format_call_info_3_p_0(MaybeFormatCall_27, PredInfo0_10, &PredInfo_28);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_6, PredInfo_28, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
  }
  else
  {
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
  }
}

static void MR_CALL 
check_hlds__check_pragma_format_call__check_format_args_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv7_STATE_VARIABLE_CurModeNum_17;
  MR_Word conv6_STATE_VARIABLE_BadModeNums_19;

  check_hlds__check_pragma_format_call__check_for_non_input_arg_nums_in_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv7_STATE_VARIABLE_CurModeNum_17, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_BadModeNums_19);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_CurModeNum_17));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_BadModeNums_19));
}

static void MR_CALL 
check_hlds__check_pragma_format_call__check_format_args_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_CurModeNum_17;
  MR_Word conv1_STATE_VARIABLE_BadModeNums_19;

  check_hlds__check_pragma_format_call__check_for_non_input_arg_nums_in_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_CurModeNum_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_BadModeNums_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_CurModeNum_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_BadModeNums_19));
}

static void MR_CALL 
check_hlds__check_pragma_format_call__check_format_args_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word Context_3,
  MR_Integer MaxArgNum_4,
  MR_Word ArgTypes_5,
  MR_Integer NumProcs_6,
  MR_Word ProcIdsInfos_7,
  MR_Integer NumFormatArgs_8,
  MR_Integer FormatArgNum_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_bool succeeded;

  if ((HeadVar__10_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  }
  else
  {
    MR_Word HeadFmtStrVals_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, 0))));
    MR_Word TailFmtStrVals_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, 1))));
    MR_Word TailOKFmtStrVals_39;
    MR_Integer OrigArgNumFS_40;
    MR_Integer OrigArgNumVL_41;
    MR_Integer CurArgNumFS_42;
    MR_Integer CurArgNumVL_43;
    MR_Integer Var_76 = (MR_Integer) ((MR_Unsigned) FormatArgNum_9 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Specs_1_77;
    MR_Word STATE_VARIABLE_CurSpecs_2_81;
    MR_Word STATE_VARIABLE_CurSpecs_6_96;

    check_hlds__check_pragma_format_call__check_format_args_13_p_0(ModuleInfo_1, PredInfo_2, Context_3, MaxArgNum_4, ArgTypes_5, NumProcs_6, ProcIdsInfos_7, NumFormatArgs_8, Var_76, TailFmtStrVals_36, &TailOKFmtStrVals_39, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_1_77);
    OrigArgNumFS_40 = ((MR_Integer) ((MR_hl_field(0, HeadFmtStrVals_35, 0))));
    OrigArgNumVL_41 = ((MR_Integer) ((MR_hl_field(0, HeadFmtStrVals_35, 1))));
    CurArgNumFS_42 = ((MR_Integer) ((MR_hl_field(0, HeadFmtStrVals_35, 2))));
    CurArgNumVL_43 = ((MR_Integer) ((MR_hl_field(0, HeadFmtStrVals_35, 3))));
    succeeded = (OrigArgNumFS_40 > MaxArgNum_4);
    if (succeeded)
    {
      MR_Word SpecTooLargeFS_45;

      SpecTooLargeFS_45 = check_hlds__check_pragma_format_call__format_call_error_too_large_arg_num_7_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, MaxArgNum_4, OrigArgNumFS_40, (MR_String) "first");
      {
        STATE_VARIABLE_CurSpecs_2_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_CurSpecs_2_81, 0) = ((MR_Box) (SpecTooLargeFS_45));
        MR_hl_field(1, STATE_VARIABLE_CurSpecs_2_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      succeeded = (OrigArgNumFS_40 < (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word SpecTooSmallFS_46;

        SpecTooSmallFS_46 = check_hlds__check_pragma_format_call__format_call_error_too_small_arg_num_6_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, OrigArgNumFS_40, (MR_String) "first");
        {
          STATE_VARIABLE_CurSpecs_2_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_CurSpecs_2_81, 0) = ((MR_Box) (SpecTooSmallFS_46));
          MR_hl_field(1, STATE_VARIABLE_CurSpecs_2_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word ArgTypeFS_47;
        MR_Word BadModeNumsFS_50;
        MR_Word STATE_VARIABLE_CurSpecs_4_88;
        MR_Word Var_89;
        MR_Box conv0_ArgTypeFS_47;
        MR_Word Var_135;
        MR_Box conv4_Var_49;
        MR_Box conv3_BadModeNumsFS_50;

        mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_5, CurArgNumFS_42, &conv0_ArgTypeFS_47);
        ArgTypeFS_47 = ((MR_Word) (conv0_ArgTypeFS_47));
        Var_135 = parse_tree__builtin_lib_types__string_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgTypeFS_47, Var_135);
        if (succeeded)
          STATE_VARIABLE_CurSpecs_4_88 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word SpecWrongTypeFS_48;

          SpecWrongTypeFS_48 = check_hlds__check_pragma_format_call__format_call_error_wrong_type_8_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, OrigArgNumFS_40, (MR_String) "first", (MR_String) "a format string", (MR_String) "string");
          {
            STATE_VARIABLE_CurSpecs_4_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_4_88, 0) = ((MR_Box) (SpecWrongTypeFS_48));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_4_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_89, 0) = ((MR_Box) (&check_hlds__check_pragma_format_call_scalar_common_6[0]));
          MR_hl_field(0, Var_89, 1) = ((MR_Box) (check_hlds__check_pragma_format_call__check_format_args_13_p_0_1));
          MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_89, 3) = ((MR_Box) (ModuleInfo_1));
          MR_hl_field(0, Var_89, 4) = ((MR_Box) (CurArgNumFS_42));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_1[1]), Var_89, ProcIdsInfos_7, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_49, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_BadModeNumsFS_50);
        BadModeNumsFS_50 = ((MR_Word) (conv3_BadModeNumsFS_50));
        if ((BadModeNumsFS_50 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_CurSpecs_2_81 = STATE_VARIABLE_CurSpecs_4_88;
        else
        {
          MR_Word SpecWrongModeFS_53;

          SpecWrongModeFS_53 = check_hlds__check_pragma_format_call__format_call_error_wrong_mode_9_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, OrigArgNumFS_40, (MR_String) "first", (MR_String) "a format string", NumProcs_6, BadModeNumsFS_50);
          {
            STATE_VARIABLE_CurSpecs_2_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_2_81, 0) = ((MR_Box) (SpecWrongModeFS_53));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_2_81, 1) = ((MR_Box) (STATE_VARIABLE_CurSpecs_4_88));
          }
        }
      }
    }
    succeeded = (OrigArgNumVL_41 > MaxArgNum_4);
    if (succeeded)
    {
      MR_Word SpecTooLargeVL_54;

      SpecTooLargeVL_54 = check_hlds__check_pragma_format_call__format_call_error_too_large_arg_num_7_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, MaxArgNum_4, OrigArgNumVL_41, (MR_String) "second");
      {
        STATE_VARIABLE_CurSpecs_6_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_CurSpecs_6_96, 0) = ((MR_Box) (SpecTooLargeVL_54));
        MR_hl_field(1, STATE_VARIABLE_CurSpecs_6_96, 1) = ((MR_Box) (STATE_VARIABLE_CurSpecs_2_81));
      }
    }
    else
    {
      succeeded = (OrigArgNumVL_41 < (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word SpecTooSmallVL_55;

        SpecTooSmallVL_55 = check_hlds__check_pragma_format_call__format_call_error_too_small_arg_num_6_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, OrigArgNumVL_41, (MR_String) "second");
        {
          STATE_VARIABLE_CurSpecs_6_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_CurSpecs_6_96, 0) = ((MR_Box) (SpecTooSmallVL_55));
          MR_hl_field(1, STATE_VARIABLE_CurSpecs_6_96, 1) = ((MR_Box) (STATE_VARIABLE_CurSpecs_2_81));
        }
      }
      else
      {
        MR_Word ArgTypeVL_56;
        MR_Word BadModeNumsVL_66;
        MR_Word STATE_VARIABLE_CurSpecs_8_110;
        MR_Word Var_111;
        MR_Box conv5_ArgTypeVL_56;
        MR_Word ListTypeCtorSymName_57;
        MR_Word ListElementType_58;
        MR_Word ListTypeCtorModuleName_59;
        MR_String ListTypeCtorName_60;
        MR_Word PolyTypeCtorSymName_61;
        MR_Word PolyTypeCtorModuleName_62;
        MR_String PolyTypeCtorName_63;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_String Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_String Var_106;
        MR_String Var_136;
        MR_String Var_137;
        MR_Box conv9_Var_65;
        MR_Box conv8_BadModeNumsVL_66;

        mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_5, CurArgNumVL_43, &conv5_ArgTypeVL_56);
        ArgTypeVL_56 = ((MR_Word) (conv5_ArgTypeVL_56));
        succeeded = ((MR_tag((MR_Word) ArgTypeVL_56)) == (MR_Integer) 1);
        if (succeeded)
        {
          ListTypeCtorSymName_57 = ((MR_Word) ((MR_hl_field(1, ArgTypeVL_56, 0))));
          Var_100 = ((MR_Word) ((MR_hl_field(1, ArgTypeVL_56, 1))));
          Var_102 = ((MR_Word) ((MR_hl_field(1, ArgTypeVL_56, 2))));
          succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_100 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListElementType_58 = ((MR_Word) ((MR_hl_field(1, Var_100, 0))));
              Var_101 = ((MR_Word) ((MR_hl_field(1, Var_100, 1))));
              succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ListTypeCtorSymName_57)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ListTypeCtorModuleName_59 = ((MR_Word) ((MR_hl_field(1, ListTypeCtorSymName_57, 0))));
                  ListTypeCtorName_60 = ((MR_String) ((MR_hl_field(1, ListTypeCtorSymName_57, 1))));
                  Var_103 = (MR_String) "list";
                  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ListTypeCtorModuleName_59, &Var_136);
                  if (succeeded)
                  {
                    succeeded = (strcmp(Var_103, Var_136) == 0);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ListTypeCtorName_60, (MR_String) "list") == 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) ListElementType_58)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          PolyTypeCtorSymName_61 = ((MR_Word) ((MR_hl_field(1, ListElementType_58, 0))));
                          Var_104 = ((MR_Word) ((MR_hl_field(1, ListElementType_58, 1))));
                          Var_105 = ((MR_Word) ((MR_hl_field(1, ListElementType_58, 2))));
                          succeeded = (Var_104 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = (Var_105 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) PolyTypeCtorSymName_61)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                PolyTypeCtorModuleName_62 = ((MR_Word) ((MR_hl_field(1, PolyTypeCtorSymName_61, 0))));
                                PolyTypeCtorName_63 = ((MR_String) ((MR_hl_field(1, PolyTypeCtorSymName_61, 1))));
                                Var_106 = (MR_String) "string";
                                succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(PolyTypeCtorModuleName_62, &Var_137);
                                if (succeeded)
                                {
                                  succeeded = (strcmp(Var_106, Var_137) == 0);
                                  if (succeeded)
                                    succeeded = (strcmp(PolyTypeCtorName_63, (MR_String) "poly_type") == 0);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (succeeded)
          STATE_VARIABLE_CurSpecs_8_110 = STATE_VARIABLE_CurSpecs_2_81;
        else
        {
          MR_Word SpecWrongTypeVL_64;

          SpecWrongTypeVL_64 = check_hlds__check_pragma_format_call__format_call_error_wrong_type_8_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, OrigArgNumVL_41, (MR_String) "second", (MR_String) "a values list", (MR_String) "list(poly_type)");
          {
            STATE_VARIABLE_CurSpecs_8_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_8_110, 0) = ((MR_Box) (SpecWrongTypeVL_64));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_8_110, 1) = ((MR_Box) (STATE_VARIABLE_CurSpecs_2_81));
          }
        }
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_111, 0) = ((MR_Box) (&check_hlds__check_pragma_format_call_scalar_common_6[0]));
          MR_hl_field(0, Var_111, 1) = ((MR_Box) (check_hlds__check_pragma_format_call__check_format_args_13_p_0_2));
          MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_111, 3) = ((MR_Box) (ModuleInfo_1));
          MR_hl_field(0, Var_111, 4) = ((MR_Box) (CurArgNumVL_43));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_1[1]), Var_111, ProcIdsInfos_7, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_65, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_BadModeNumsVL_66);
        BadModeNumsVL_66 = ((MR_Word) (conv8_BadModeNumsVL_66));
        if ((BadModeNumsVL_66 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_CurSpecs_6_96 = STATE_VARIABLE_CurSpecs_8_110;
        else
        {
          MR_Word SpecWrongModeVL_69;

          SpecWrongModeVL_69 = check_hlds__check_pragma_format_call__format_call_error_wrong_mode_9_f_0(PredInfo_2, Context_3, NumFormatArgs_8, FormatArgNum_9, OrigArgNumVL_41, (MR_String) "second", (MR_String) "a values list", NumProcs_6, BadModeNumsVL_66);
          {
            STATE_VARIABLE_CurSpecs_6_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_6_96, 0) = ((MR_Box) (SpecWrongModeVL_69));
            MR_hl_field(1, STATE_VARIABLE_CurSpecs_6_96, 1) = ((MR_Box) (STATE_VARIABLE_CurSpecs_8_110));
          }
        }
      }
    }
    if ((STATE_VARIABLE_CurSpecs_6_96 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__11_11 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadFmtStrVals_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailOKFmtStrVals_39));
      }
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_1_77;
    }
    else
    {
      MR_Word PredStatus_72;
      MR_Word PredIsLocal_73;

      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_2, &PredStatus_72);
      PredIsLocal_73 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_72);
      switch (PredIsLocal_73) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_1_77;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_CurSpecs_6_96, STATE_VARIABLE_Specs_1_77);
          break;
      }
      *HeadVar__11_11 = TailOKFmtStrVals_39;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_wrong_mode_9_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_73;

  conv0_LambdaHeadVar__2_73 = check_hlds__check_pragma_format_call__IntroducedFrom__func__format_call_error_wrong_mode__337__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_73));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_wrong_mode_9_f_0(
  MR_Word PredInfo_11,
  MR_Word Context_12,
  MR_Integer NumFormatArgs_13,
  MR_Integer FormatArgNum_14,
  MR_Integer ArgNum_15,
  MR_String FirstOrSecond_16,
  MR_String Role_17,
  MR_Integer NumProcs_18,
  MR_Word BadModeNums_19)
{
  MR_bool succeeded;
  MR_Word Spec_20;
  MR_Word Pieces0_21;
  MR_Word Pieces_23;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Pieces0_107;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_61;

  Var_110 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[43])), PredInfo_11);
  Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
  Pieces0_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[41])), Var_109);
  succeeded = (FormatArgNum_14 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (NumFormatArgs_13 == (MR_Integer) 1);
  if (succeeded)
    Var_29 = Pieces0_107;
  else
  {
    MR_Word Var_121;
    MR_Word Var_124;
    MR_Word Var_125;

    {
      Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_125, 1) = ((MR_Box) (FormatArgNum_14));
    }
    {
      Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
      MR_hl_field(1, Var_124, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[45])));
    }
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[32])));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
    }
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_107, Var_121);
  }
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (FirstOrSecond_16));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[26])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[3])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
  {
    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_51, 1) = ((MR_Box) (ArgNum_15));
  }
  {
    Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_56, 1) = ((MR_Box) (Role_17));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[27])));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[19])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[8])));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
  }
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_47);
  Pieces0_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_30);
  succeeded = (NumProcs_18 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (BadModeNums_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_61 = ((MR_Word) ((MR_hl_field(1, BadModeNums_19, 1))));
      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word Var_62;
    MR_Word Var_63;

    Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[29])));
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
    Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_21, Var_62);
  }
  else
  {
    MR_Word PredOrFunc_24;
    MR_Word SortedBadModeNums_25;
    MR_Word BadModeNumPieceLists_26;
    MR_Word BadModeNumPieces_28;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_83;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_93;

    PredOrFunc_24 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
    mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BadModeNums_19, &SortedBadModeNums_25);
    BadModeNumPieceLists_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_1[2]), (MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_2[2]), SortedBadModeNums_25);
    BadModeNumPieces_28 = parse_tree__error_spec__pieces_list_to_pieces_2_f_0((MR_String) "and", BadModeNumPieceLists_26);
    Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[31])));
    {
      Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_93, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[35])));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[34])));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
    }
    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadModeNumPieces_28, Var_89);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[33])), Var_88);
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, Var_83);
    Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_21, Var_77);
  }
  {
    Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_pragma_format_call.format_call_error_wrong_mode\'/9"));
    MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_23));
  }
  return Spec_20;
}

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_wrong_type_8_f_0(
  MR_Word PredInfo_10,
  MR_Word Context_11,
  MR_Integer NumFormatArgs_12,
  MR_Integer FormatArgNum_13,
  MR_Integer ArgNum_14,
  MR_String FirstOrSecond_15,
  MR_String Role_16,
  MR_String ExpectedType_17)
{
  MR_bool succeeded;
  MR_Word Spec_18;
  MR_Word Pieces_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Pieces0_71;
  MR_Word Var_73;
  MR_Word Var_74;

  Var_74 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[43])), PredInfo_10);
  Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
  Pieces0_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[41])), Var_73);
  succeeded = (FormatArgNum_13 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (NumFormatArgs_12 == (MR_Integer) 1);
  if (succeeded)
    Var_20 = Pieces0_71;
  else
  {
    MR_Word Var_85;
    MR_Word Var_88;
    MR_Word Var_89;

    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (FormatArgNum_13));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[45])));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[32])));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
    }
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_71, Var_85);
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (FirstOrSecond_15));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[7])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[3])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (ArgNum_14));
  }
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (Role_16));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[12])));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[19])));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[8])));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (ExpectedType_17));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[22])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[20])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_55);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_53);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_35);
  Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_21);
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_pragma_format_call.format_call_error_wrong_type\'/8"));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Context_11));
    MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_19));
  }
  return Spec_18;
}

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_too_small_arg_num_6_f_0(
  MR_Word PredInfo_8,
  MR_Word Context_9,
  MR_Integer NumFormatArgs_10,
  MR_Integer FormatArgNum_11,
  MR_Integer ArgNum_12,
  MR_String FirstOrSecond_13)
{
  MR_bool succeeded;
  MR_Word Spec_14;
  MR_Word Pieces_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Pieces0_57;
  MR_Word Var_59;
  MR_Word Var_60;

  Var_60 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[43])), PredInfo_8);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
  Pieces0_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[41])), Var_59);
  succeeded = (FormatArgNum_11 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (NumFormatArgs_10 == (MR_Integer) 1);
  if (succeeded)
    Var_16 = Pieces0_57;
  else
  {
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;

    {
      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_75, 1) = ((MR_Box) (FormatArgNum_11));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[45])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[32])));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
    }
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_57, Var_71);
  }
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (FirstOrSecond_13));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[7])));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[3])));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
  }
  Var_18 = parse_tree__error_spec__color_as_subject_1_f_0(Var_19);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (ArgNum_12));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[12])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[8])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[18])));
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_44);
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, Var_31);
  Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_17);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_pragma_format_call.format_call_error_too_small_arg_num\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_15));
  }
  return Spec_14;
}

static MR_Word MR_CALL 
check_hlds__check_pragma_format_call__format_call_error_too_large_arg_num_7_f_0(
  MR_Word PredInfo_9,
  MR_Word Context_10,
  MR_Integer NumFormatArgs_11,
  MR_Integer FormatArgNum_12,
  MR_Integer MaxArgNum_13,
  MR_Integer ArgNum_14,
  MR_String FirstOrSecond_15)
{
  MR_bool succeeded;
  MR_Word Spec_16;
  MR_Word PredOrFunc_17;
  MR_Word Pieces_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Pieces0_70;
  MR_Word Var_72;
  MR_Word Var_73;

  PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
  Var_73 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[43])), PredInfo_9);
  Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
  Pieces0_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[41])), Var_72);
  succeeded = (FormatArgNum_12 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (NumFormatArgs_11 == (MR_Integer) 1);
  if (succeeded)
    Var_19 = Pieces0_70;
  else
  {
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_88;

    {
      Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_88, 1) = ((MR_Box) (FormatArgNum_12));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[45])));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[32])));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
    }
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_70, Var_84);
  }
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (FirstOrSecond_15));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[7])));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[3])));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  Var_21 = parse_tree__error_spec__color_as_subject_1_f_0(Var_22);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (ArgNum_14));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[12])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[8])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
  }
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (MaxArgNum_13));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[15])));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[13])));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_pragma_format_call_scalar_common_1[3])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &check_hlds__check_pragma_format_call_scalar_common_1[16])));
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_47);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_34);
  Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_pragma_format_call.format_call_error_too_large_arg_num\'/7"));
    MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_18));
  }
  return Spec_16;
}

static void MR_CALL 
check_hlds__check_pragma_format_call__check_pragma_format_call_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_30;
  MR_Word conv0_STATE_VARIABLE_Specs_32;

  check_hlds__check_pragma_format_call__check_pragma_format_call_pred_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_30, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_32);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_30));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
}

void MR_CALL 
check_hlds__check_pragma_format_call__check_pragma_format_call_preds_5_p_0(
  MR_Word FormatCallPredIds_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  MR_Word Var_14;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_10;
  MR_Box conv2_STATE_VARIABLE_Specs_12;

  Var_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FormatCallPredIds_6);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_1[0]), (MR_Word) (&check_hlds__check_pragma_format_call_scalar_common_2[1]), Var_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv3_STATE_VARIABLE_ModuleInfo_10, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv2_STATE_VARIABLE_Specs_12);
  *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_10));
  *STATE_VARIABLE_Specs_12 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_12));
}

void mercury__check_hlds__check_pragma_format_call__init(void)
{
}

void mercury__check_hlds__check_pragma_format_call__init_type_tables(void)
{
}

void mercury__check_hlds__check_pragma_format_call__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__check_pragma_format_call__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.check_pragma_format_call.
