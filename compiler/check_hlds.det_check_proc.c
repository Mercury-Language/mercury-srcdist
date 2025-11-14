/*
** Automatically generated from `det_check_proc.m'
** by the Mercury compiler,
** version rotd-2025-11-14
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


// :- module check_hlds.det_check_proc.
// :- implementation.

/*
INIT mercury__check_hlds__det_check_proc__init
ENDINIT
*/

#include "check_hlds.det_check_proc.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "solutions.mih"
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
#include "check_hlds.det_check_goal.mih"
#include "check_hlds.det_check_switch.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "hlds.hlds_proc_util.mih"
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
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_sort.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0_s {
  MR_Word check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__TabledMethod_3;
  MR_Word * check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__Detism_4;
  MR_Cont check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__cont;
  void * check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded;
};

struct check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0_s {
  MR_Box * check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__cont;
  void * check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__conv0_Detism_4;
};


static void MR_CALL 
check_hlds__det_check_proc__get_valid_determinisms_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_check_proc__get_valid_determinisms_2_p_0(
  MR_Word TabledMethod_3,
  MR_Word * Detism_4,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
check_hlds__det_check_proc__is_proc_pragma_exported_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * Context_9);

static void MR_CALL 
check_hlds__det_check_proc__check_io_state_proc_detism_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__det_check_proc__check_function_semantics_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static MR_Word MR_CALL 
check_hlds__det_check_proc__report_can_fail_func_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredProcId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ResultType0_12,
  MR_Word InferredDetism_13);

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_if_pred_is_main_4_p_0(
  MR_Word PredInfo_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_Box MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0(
  MR_Word ProcInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__det_check_proc__check_for_too_tight_or_loose_declared_determinism_7_p_0(
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
check_hlds__det_check_proc__report_determinism_problem_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10,
  MR_String ErrorOrWarn_11,
  MR_String ProblemStr_12,
  MR_Word ReasonPieces_13,
  MR_Word DeclaredDetism_14,
  MR_Word InferredDetism_15,
  MR_Word * Msg_16);


static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_1[167][2];

static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_3[2][5];

static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_4[1][3];


struct check_hlds__det_check_proc__vector_common_type_5_0_s {
  const MR_Word check_hlds__det_check_proc__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct check_hlds__det_check_proc__vector_common_type_5_0_s check_hlds__det_check_proc_vector_common_5[8];



static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_1[167][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is the following."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The reason for the difference"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are the following."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The reasons for the difference"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by performing this transformation manually."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the programmer can fix the determinism error"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In cases where this uniqueness is not needed,"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this transformation could destroy the uniqueness."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but due to limitations of the current modechecker,"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with just one unification before the disjunction,"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(e.g. the tail of a list) with the same function symbol,"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that each unify the variable representing the subterm"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one in each arm of the disjunction,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "requires replacing several unifications,"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is because converting such a disjunction to a switch"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is at least partially unique."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "when the instantiation state of that variable"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a switch on a *subterm* of a variable"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a disjunction (usually created by the compiler for a switch arm)"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is the inability of determinism analysis to recognize that"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the cause of the declared determinism not being satisfied"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "It is possible that"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for procedures with determinism"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This pragma is valid only for the following"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  60 */
  {
    ((MR_Box) (&check_hlds__det_check_proc_scalar_common_2[1])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    ((MR_Box) (&check_hlds__det_check_proc_scalar_common_1[60]))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "exported,"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is not."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must have a"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declared determinism,"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it does not."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be either"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it may not be"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: invalid determinism for"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the primary mode of a function cannot be"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not a function."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Most likely, this procedure should be a predicate,"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[96])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments would break referential transparency.)"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(Allowing functions to have more than one result for the same"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be determined only by the values of its arguments."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of its arguments; that is, the value of the function\'s result"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a function is supposed to be a true mathematical function"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In Mercury,"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the primary mode of the"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[111]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Consider turning this"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "either into a"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate,"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or into a"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by changing the return type from"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the inferred determinism"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[126]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[128]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[132]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "erroneous"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[129])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[136]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[138]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The valid determinisms for such predicates are"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[141]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for a predicate that has I/O state arguments."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not a valid determinism"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "nor destroyed."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the I/O state can be neither duplicated"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for a procedure whose determinism is"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[151]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[159]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[161]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[163]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 165 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[110])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__det_check_proc_scalar_common_1[165]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_2[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 172U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "main")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "maybe")) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 221U) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tabled_eval_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__det_check_proc_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__det_check_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__det_check_proc__vector_common_type_5_0_s check_hlds__det_check_proc_vector_common_5[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
check_hlds__det_check_proc__get_valid_determinisms_2_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0_s * env_ptr = (struct check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0_s *) (env_ptr_arg);

  switch (MR_tag((MR_Word) (env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__TabledMethod_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word MaxSoln_8;
        MR_Word Var_7;

        parse_tree__prog_data__determinism_components_3_p_0(*((env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__Detism_4), &Var_7, &MaxSoln_8);
        switch (MaxSoln_8) {
          default:
            (env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            (env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.det_check_proc.valid_determinism_for_tabled_eval_method\'/2", (MR_String) "called after tabling phase");
          return;
        }
        (env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (*((env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__Detism_4)) {
        default:
          (env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          (env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          (env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
          break;
      }
      break;
  }
  if ((env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__succeeded)
    ((env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__cont)((env_ptr)->check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__det_check_proc__get_valid_determinisms_2_p_0(
  MR_Word TabledMethod_3,
  MR_Word * Detism_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0_s env;

  (env).check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__TabledMethod_3 = TabledMethod_3;
  (env).check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__Detism_4 = Detism_4;
  (env).check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__cont = cont;
  (env).check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *((env).check_hlds__det_check_proc__get_valid_determinisms_2_p_0_env_0__Detism_4) = ((&check_hlds__det_check_proc_vector_common_5[0 + slot_0]))->check_hlds__det_check_proc__vector_common_type_5_0__vct_5_f_0;
      check_hlds__det_check_proc__get_valid_determinisms_2_p_0_1(&env);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 8));
  }
}

void MR_CALL 
check_hlds__det_check_proc__check_determinism_of_imported_procs_5_p_0(
  MR_Word ProgressStream_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  check_hlds__det_check_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_95_91_49_93_95_48_5_p_0(ModuleInfo_2, HeadVar__3_3, STATE_VARIABLE_Specs_0_4, STATE_VARIABLE_Specs_5);
}

void MR_CALL 
check_hlds__det_check_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PredProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Specs_1_18;
      MR_Word PredInfo_19;
      MR_Word ProcInfo_20;
      MR_Word STATE_VARIABLE_Specs_1_33;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_2, PredProcId_13, &PredInfo_19, &ProcInfo_20);
      check_hlds__det_check_proc__check_function_semantics_6_p_0(ModuleInfo_2, PredProcId_13, PredInfo_19, ProcInfo_20, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_33);
      check_hlds__det_check_proc__check_io_state_proc_detism_6_p_0(ModuleInfo_2, PredProcId_13, PredInfo_19, ProcInfo_20, STATE_VARIABLE_Specs_1_33, &STATE_VARIABLE_Specs_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__det_check_proc__check_determinism_of_proc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  check_hlds__det_check_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_95_95_91_49_93_95_48_6_p_0(PredProcId_8, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
}

void MR_CALL 
check_hlds__det_check_proc__check_determinism_of_procs_6_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  check_hlds__det_check_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_115_95_95_91_49_93_95_48_6_p_0(HeadVar__2_2, STATE_VARIABLE_ModuleInfo_0_3, STATE_VARIABLE_ModuleInfo_4, STATE_VARIABLE_Specs_0_5, STATE_VARIABLE_Specs_6);
}

void MR_CALL 
check_hlds__det_check_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word PredProcId_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredProcIds_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_23;
      MR_Word STATE_VARIABLE_Specs_1_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      check_hlds__det_check_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_95_95_91_49_93_95_48_6_p_0(PredProcId_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_23, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredProcIds_16;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_23;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__det_check_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word PredInfo_11;
  MR_Word ProcInfo_12;
  MR_Word STATE_VARIABLE_ModuleInfo_1_30;
  MR_Word STATE_VARIABLE_Specs_1_31;
  MR_Word STATE_VARIABLE_Specs_2_32;
  MR_Word STATE_VARIABLE_Specs_3_33;
  MR_Word STATE_VARIABLE_Specs_4_34;
  MR_Word STATE_VARIABLE_Specs_5_35;
  MR_Word STATE_VARIABLE_Specs_6_36;
  MR_Word Markers_41;
  MR_Word NeedReqScope_42;
  MR_Word WarnIncompleteSwitches_44;
  MR_Word ReqArmsTypeOrder_45;
  MR_Word STATE_VARIABLE_NeedReqScope_1_56;
  MR_Word STATE_VARIABLE_NeedReqScope_3_58;
  MR_Word ExportedProcsCord0_66;
  MR_Word ExportedProcs_67;
  MR_Word ExportedProcsCord_68;
  MR_Word Detism_69;
  MR_Word PredId_70;
  MR_Integer ProcId_71;
  MR_Word Globals_43;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word ExportContext_72;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredProcId_8, &PredInfo_11, &ProcInfo_12);
  check_hlds__det_check_proc__check_for_too_tight_or_loose_declared_determinism_7_p_0(PredProcId_8, PredInfo_11, ProcInfo_12, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_1_30, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_1_31);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_11, &Markers_41);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_41, (MR_Integer) 27);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_1_30, &Globals_43);
    Var_54 = (MR_Integer) 225;
    Var_55 = (MR_Integer) 1;
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_43, Var_54, Var_55);
  }
  if (succeeded)
  {
    STATE_VARIABLE_NeedReqScope_1_56 = (MR_Integer) 1;
    WarnIncompleteSwitches_44 = (MR_Integer) 1;
  }
  else
  {
    STATE_VARIABLE_NeedReqScope_1_56 = (MR_Integer) 0;
    WarnIncompleteSwitches_44 = (MR_Integer) 0;
  }
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_41, (MR_Integer) 26);
  if (succeeded)
    STATE_VARIABLE_NeedReqScope_3_58 = (MR_Integer) 1;
  else
    STATE_VARIABLE_NeedReqScope_3_58 = STATE_VARIABLE_NeedReqScope_1_56;
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_41, (MR_Integer) 11);
  if (succeeded)
  {
    NeedReqScope_42 = (MR_Integer) 1;
    ReqArmsTypeOrder_45 = (MR_Integer) 1;
  }
  else
  {
    ReqArmsTypeOrder_45 = (MR_Integer) 0;
    NeedReqScope_42 = STATE_VARIABLE_NeedReqScope_3_58;
  }
  switch (NeedReqScope_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_2_32 = STATE_VARIABLE_Specs_1_31;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Goal_46;
        MR_Word VarTable_47;
        MR_Word InstMap0_48;
        MR_Word DetInfo0_49;
        MR_Word Params_50;
        MR_Word DetInfo_51;
        MR_Word RCSSpecs_52;

        hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Goal_46);
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_47);
        hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_1_30, ProcInfo_12, &InstMap0_48);
        check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_1_30, PredProcId_8, VarTable_47, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_49);
        {
          Params_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Params_50, 0) = (MR_Box) (((((MR_Unsigned) (WarnIncompleteSwitches_44) << 1)) | (MR_Unsigned) (ReqArmsTypeOrder_45)));
        }
        check_hlds__det_check_switch__reqscope_check_goal_7_p_0(Params_50, InstMap0_48, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Goal_46, DetInfo0_49, &DetInfo_51);
        check_hlds__det_util__det_info_get_error_specs_2_p_0(DetInfo_51, &RCSSpecs_52);
        STATE_VARIABLE_Specs_2_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RCSSpecs_52, STATE_VARIABLE_Specs_1_31);
      }
      break;
  }
  check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0(ProcInfo_12, STATE_VARIABLE_Specs_2_32, &STATE_VARIABLE_Specs_3_33);
  check_hlds__det_check_proc__check_determinism_if_pred_is_main_4_p_0(PredInfo_11, ProcInfo_12, STATE_VARIABLE_Specs_3_33, &STATE_VARIABLE_Specs_4_34);
  check_hlds__det_check_proc__check_function_semantics_6_p_0(STATE_VARIABLE_ModuleInfo_1_30, PredProcId_8, PredInfo_11, ProcInfo_12, STATE_VARIABLE_Specs_4_34, &STATE_VARIABLE_Specs_5_35);
  check_hlds__det_check_proc__check_io_state_proc_detism_6_p_0(STATE_VARIABLE_ModuleInfo_1_30, PredProcId_8, PredInfo_11, ProcInfo_12, STATE_VARIABLE_Specs_5_35, &STATE_VARIABLE_Specs_6_36);
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_1_30, &ExportedProcsCord0_66);
  ExportedProcs_67 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcsCord0_66);
  ExportedProcsCord_68 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcs_67);
  hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(ExportedProcsCord_68, STATE_VARIABLE_ModuleInfo_1_30, STATE_VARIABLE_ModuleInfo_17);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_12, &Detism_69);
  PredId_70 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, 0))));
  ProcId_71 = ((MR_Integer) ((MR_hl_field(0, PredProcId_8, 1))));
  succeeded = check_hlds__det_check_proc__is_proc_pragma_exported_4_p_0(ExportedProcs_67, PredId_70, ProcId_71, &ExportContext_72);
  if (succeeded)
    switch (Detism_69) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
    }
  if (succeeded)
  {
    MR_String DetismStr_73;
    MR_Word Pieces_74;
    MR_Word Spec_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;

    DetismStr_73 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Detism_69);
    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_80, 1) = ((MR_Box) (DetismStr_73));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[57])));
    }
    Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_79);
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])));
    Pieces_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[157])), Var_77);
    {
      Spec_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_75, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_exported_proc_detism\'/6"));
      MR_hl_field(0, Spec_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_75, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(0, Spec_75, 3) = ((MR_Box) (ExportContext_72));
      MR_hl_field(0, Spec_75, 4) = ((MR_Box) (Pieces_74));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_75));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_6_36));
    }
  }
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_6_36;
}

static MR_bool MR_CALL 
check_hlds__det_check_proc__is_proc_pragma_exported_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * Context_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ExportProc_5;
    MR_Word ExportProcs_6;
    MR_Word Context0_12;
    MR_Word Var_13;
    MR_Integer Var_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ExportProc_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      ExportProcs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(0, ExportProc_5, 1))));
      Var_14 = ((MR_Integer) ((MR_hl_field(0, ExportProc_5, 2))));
      Context0_12 = ((MR_Word) ((MR_hl_field(0, ExportProc_5, 4))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_13);
      if (succeeded)
        succeeded = (ProcId_8 == Var_14);
      if (succeeded)
      {
        *Context_9 = Context0_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = ExportProcs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_proc__check_io_state_proc_detism_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word BadDetismPieces_16;
  MR_Word ActualDetism_14;
  MR_Word MaybeDeclaredDetism_15;
  MR_Integer _InArg_12;
  MR_Integer _OutArg_13;

  succeeded = hlds__hlds_proc_util__proc_info_has_io_state_pair_4_p_0(ModuleInfo_7, ProcInfo_10, &_InArg_12, &_OutArg_13);
  if (succeeded)
  {
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &ActualDetism_14);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_10, &MaybeDeclaredDetism_15);
    switch (ActualDetism_14) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      if ((MaybeDeclaredDetism_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_String Var_37;

        Var_37 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ActualDetism_14);
        {
          Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_35);
        BadDetismPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[127])), Var_34);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word DeclaredDetism_17 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredDetism_15, 0))));
        MR_Word Var_39;
        MR_Word Var_40;
        MR_String Var_41;
        MR_Word Var_42;

        switch (DeclaredDetism_17) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          Var_41 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_17);
          Var_42 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_40, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
          }
          BadDetismPieces_16 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word PredModuleName_19;
    MR_Word ModuleName_20;
    MR_Word ShouldModuleQual_21;
    MR_Word ProcColonPieces_22;
    MR_Word GoodDetismPieces_23;
    MR_Word Pieces_24;
    MR_Word ProcContext_25;
    MR_Word Spec_26;
    MR_Word Var_50;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_64;
    MR_Word Var_69;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_101;

    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_9, &PredModuleName_19);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_20);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_20, PredModuleName_19);
    if (succeeded)
      ShouldModuleQual_21 = (MR_Integer) 1;
    else
      ShouldModuleQual_21 = (MR_Integer) 0;
    ProcColonPieces_22 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_7, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_2[4])), ShouldModuleQual_21, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[91])), PredProcId_8);
    Var_50 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[130])));
    Var_59 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[131])));
    Var_69 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[135])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[133])), Var_69);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_64);
    GoodDetismPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_58);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoodDetismPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[150])));
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[146])), Var_101);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadDetismPieces_16, Var_90);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[140])), Var_89);
    Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcColonPieces_22, Var_82);
    Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[137])), Var_81);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &ProcContext_25);
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_io_state_proc_detism\'/6"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (ProcContext_25));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
    }
  }
  else
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
}

static void MR_CALL 
check_hlds__det_check_proc__check_function_semantics_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Word FuncResultType_15;
  MR_Word TypeCtorInfo_35_35;
  MR_Word TypeCtorInfo_36_36;
  MR_Word PredArgModes_12;
  MR_Word PredArgTypes_13;
  MR_Word FuncArgTypes_14;
  MR_Word FuncArgModes_16;
  MR_Word Var_31;
  MR_Box conv0_FuncResultType_15;
  MR_Box conv1__FuncResultMode_17;

  Var_31 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
  succeeded = (Var_31 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &PredArgModes_12);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &PredArgTypes_13);
    TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_35_35, PredArgTypes_13, &FuncArgTypes_14, &conv0_FuncResultType_15);
    FuncResultType_15 = ((MR_Word) (conv0_FuncResultType_15));
    TypeCtorInfo_36_36 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
    parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_36_36, PredArgModes_12, &FuncArgModes_16, &conv1__FuncResultMode_17);
    succeeded = check_hlds__mode_test__all_modes_are_fully_input_3_p_0(ModuleInfo_7, FuncArgTypes_14, FuncArgModes_16);
  }
  if (succeeded)
  {
    MR_Word InferredDetism_18;
    MR_Word CanFail_19;
    MR_Word NumSolns_20;
    MR_Word STATE_VARIABLE_Specs_1_32;

    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &InferredDetism_18);
    parse_tree__prog_data__determinism_components_3_p_0(InferredDetism_18, &CanFail_19, &NumSolns_20);
    switch (NumSolns_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word MultiSolnSpec_21;
          MR_Word Context_37;
          MR_Word PredModePieces_38;
          MR_String InferredDetismStr_39;
          MR_Word MainPieces_40;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_57;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;

          hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &Context_37);
          PredModePieces_38 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_7, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredProcId_8);
          InferredDetismStr_39 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(InferredDetism_18);
          Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredModePieces_38, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[91])));
          Var_51 = parse_tree__error_spec__color_as_subject_1_f_0(Var_52);
          {
            Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_62, 1) = ((MR_Box) (InferredDetismStr_39));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[57])));
          }
          Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_61);
          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])));
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[94])), Var_59);
          Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_57);
          MainPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[90])), Var_50);
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_76, 0) = ((MR_Box) (MainPieces_40));
          }
          {
            Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[166])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_74, 0) = ((MR_Box) (Context_37));
            MR_hl_field(2, Var_74, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MultiSolnSpec_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, MultiSolnSpec_21, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.det_check_proc.report_multisoln_func\'/4"));
            MR_hl_field(2, MultiSolnSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, MultiSolnSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(2, MultiSolnSpec_21, 3) = ((MR_Box) (Var_73));
          }
          {
            STATE_VARIABLE_Specs_1_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_32, 0) = ((MR_Box) (MultiSolnSpec_21));
            MR_hl_field(1, STATE_VARIABLE_Specs_1_32, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
          }
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Specs_1_32 = STATE_VARIABLE_Specs_0_29;
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_1_32 = STATE_VARIABLE_Specs_0_29;
        break;
    }
    switch (CanFail_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_22;
          MR_Word WarnCanFailFunction_23;
          MR_Word PredStatus_24;
          MR_Word Origin_25;
          MR_Word MaybeObsolete_26;
          MR_Word Var_34;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_22);
          libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 221, &WarnCanFailFunction_23);
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_9, &PredStatus_24);
          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_25);
          hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_9, &MaybeObsolete_26);
          succeeded = (WarnCanFailFunction_23 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_34 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_24);
            succeeded = (Var_34 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Origin_25)) == (MR_Integer) 0);
              if (succeeded)
                succeeded = (MaybeObsolete_26 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word CanFailSpec_28;

            CanFailSpec_28 = check_hlds__det_check_proc__report_can_fail_func_6_f_0(ModuleInfo_7, PredProcId_8, PredInfo_9, ProcInfo_10, FuncResultType_15, InferredDetism_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_30 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (CanFailSpec_28));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_32));
            }
          }
          else
            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_1_32;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_1_32;
        break;
    }
  }
  else
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
}

static MR_Word MR_CALL 
check_hlds__det_check_proc__report_can_fail_func_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredProcId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ResultType0_12,
  MR_Word InferredDetism_13)
{
  MR_Word Spec_14;
  MR_Word FuncContext_15;
  MR_Word PredId_16;
  MR_Word PredNamePieces_18;
  MR_Word MaxSolns_20;
  MR_Word ProposedDetism_21;
  MR_String InferredDetismStr_22;
  MR_String ProposedDetismStr_23;
  MR_Word TypeVarSet_24;
  MR_Word InstVarSet_25;
  MR_Word ResultType_26;
  MR_Word ResultTypePieces_28;
  MR_Word NewResultType_29;
  MR_Word NewResultTypePieces_30;
  MR_Word Pieces_31;
  MR_Word Var_39;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_75;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_93;
  MR_Word Var_19;

  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_11, &FuncContext_15);
  PredId_16 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, 0))));
  PredNamePieces_18 = hlds__hlds_error_util__describe_unqual_pred_name_2_f_0(ModuleInfo_8, PredId_16);
  parse_tree__prog_data__determinism_components_3_p_0(InferredDetism_13, &Var_19, &MaxSolns_20);
  parse_tree__prog_data__determinism_components_3_p_1(&ProposedDetism_21, (MR_Integer) 1, MaxSolns_20);
  InferredDetismStr_22 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(InferredDetism_13);
  ProposedDetismStr_23 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(ProposedDetism_21);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_10, &TypeVarSet_24);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_11, &InstVarSet_25);
  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 1, (MR_Integer) 1, ResultType0_12, &ResultType_26);
  ResultTypePieces_28 = parse_tree__error_type_util__type_to_pieces_6_f_0(TypeVarSet_24, InstVarSet_25, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), ResultType_26);
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (ResultType_26));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    NewResultType_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, NewResultType_29, 0) = ((MR_Box) (&check_hlds__det_check_proc_scalar_common_2[2]));
    MR_hl_field(1, NewResultType_29, 1) = ((MR_Box) (Var_39));
    MR_hl_field(1, NewResultType_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  NewResultTypePieces_30 = parse_tree__error_type_util__type_to_pieces_6_f_0(TypeVarSet_24, InstVarSet_25, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), NewResultType_29);
  Var_49 = parse_tree__error_spec__color_as_subject_1_f_0(PredNamePieces_18);
  Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[114])));
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (InferredDetismStr_22));
  }
  {
    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_79, 1) = ((MR_Box) (ProposedDetismStr_23));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[122])));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[119])));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[118])));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[117])));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[116])));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[115])));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
  }
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NewResultTypePieces_30, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[125])));
  Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[124])), Var_93);
  Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ResultTypePieces_28, Var_88);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_87);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_58);
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
  Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[112])), Var_48);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.det_check_proc.report_can_fail_func\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_2[3])));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (FuncContext_15));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_31));
  }
  return Spec_14;
}

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_if_pred_is_main_4_p_0(
  MR_Word PredInfo_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word MaybeDetism_8;
  MR_String Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;

  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_6, &MaybeDetism_8);
  Var_20 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  succeeded = (strcmp(Var_20, (MR_String) "main") == 0);
  if (succeeded)
  {
    Var_21 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_5);
    Var_22 = (MR_Integer) (Var_21);
    succeeded = (Var_22 == (MR_Integer) 2);
  }
  if (succeeded)
  {
    MR_Word ProcContext_11;
    MR_Word STATE_VARIABLE_Specs_1_62;

    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_6, &ProcContext_11);
    succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_5);
    if (succeeded)
      STATE_VARIABLE_Specs_1_62 = STATE_VARIABLE_Specs_0_18;
    else
    {
      MR_Word ExportPieces_12;
      MR_Word ExportSpec_13;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word Var_51;

      Var_31 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[62])));
      Var_40 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[66])));
      Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[70])));
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])));
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[68])), Var_50);
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[64])), Var_39);
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_34);
      ExportPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[47])), Var_30);
      {
        ExportSpec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExportSpec_13, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_determinism_if_pred_is_main\'/4"));
        MR_hl_field(0, ExportSpec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ExportSpec_13, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(0, ExportSpec_13, 3) = ((MR_Box) (ProcContext_11));
        MR_hl_field(0, ExportSpec_13, 4) = ((MR_Box) (ExportPieces_12));
      }
      {
        STATE_VARIABLE_Specs_1_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_62, 0) = ((MR_Box) (ExportSpec_13));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_62, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
      }
    }
    if ((MaybeDetism_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DetismPieces_14;
      MR_Word DetismSpec_15;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_82;
      MR_Word Var_87;
      MR_Word Var_88;

      Var_68 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[62])));
      Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[74])));
      Var_88 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[76])));
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])));
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[68])), Var_87);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_82);
      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[72])), Var_76);
      Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_71);
      DetismPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[47])), Var_67);
      {
        DetismSpec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetismSpec_15, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_determinism_if_pred_is_main\'/4"));
        MR_hl_field(0, DetismSpec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, DetismSpec_15, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(0, DetismSpec_15, 3) = ((MR_Box) (ProcContext_11));
        MR_hl_field(0, DetismSpec_15, 4) = ((MR_Box) (DetismPieces_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DetismSpec_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_62));
      }
    }
    else
    {
      MR_Word DeclaredDetism_16 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_8, 0))));

      switch (DeclaredDetism_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
          *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_1_62;
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 1:
          {
            MR_String DetismStr_17;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_108;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_119;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_133;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word DetismPieces_153;
            MR_Word DetismSpec_154;

            DetismStr_17 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_16);
            Var_105 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[62])));
            Var_114 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[80])));
            Var_125 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[86])));
            {
              Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_141, 1) = ((MR_Box) (DetismStr_17));
            }
            {
              Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
              MR_hl_field(1, Var_140, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[57])));
            }
            Var_139 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_140);
            Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])));
            Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[88])), Var_138);
            Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_133);
            Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[82])), Var_124);
            Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_119);
            Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[78])), Var_113);
            Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_108);
            DetismPieces_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[47])), Var_104);
            {
              DetismSpec_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DetismSpec_154, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_determinism_if_pred_is_main\'/4"));
              MR_hl_field(0, DetismSpec_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, DetismSpec_154, 2) = ((MR_Box) ((MR_Unsigned) 68U));
              MR_hl_field(0, DetismSpec_154, 3) = ((MR_Box) (ProcContext_11));
              MR_hl_field(0, DetismSpec_154, 4) = ((MR_Box) (DetismPieces_153));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (DetismSpec_154));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_62));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_1_62;
          break;
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
}

static MR_Box MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0_s * env_ptr = (struct check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__conv0_Detism_4));
  ((env_ptr)->check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__cont)((env_ptr)->check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0_s env;

  (env).check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__cont = cont;
  (env).check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    check_hlds__det_check_proc__get_valid_determinisms_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &(env).check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2_env_0__conv0_Detism_4, check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_1, &env);
  }
}

static void MR_CALL 
check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0(
  MR_Word ProcInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_bool succeeded;
  MR_Word InferredDetism_6;
  MR_Word EvalMethod_7;
  MR_Word TabledMethod_8;

  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_4, &InferredDetism_6);
  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_4, &EvalMethod_7);
  succeeded = (EvalMethod_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TabledMethod_8 = ((MR_Word) ((MR_hl_field(1, EvalMethod_7, 0))));
    switch (MR_tag((MR_Word) TabledMethod_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word MaxSoln_101;
          MR_Word Var_100;

          parse_tree__prog_data__determinism_components_3_p_0(InferredDetism_6, &Var_100, &MaxSoln_101);
          succeeded = (MaxSoln_101 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.det_check_proc.valid_determinism_for_tabled_eval_method\'/2", (MR_String) "called after tabling phase");
            return;
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        if (((MR_Unsigned) 243U & (((MR_Integer) 1 << InferredDetism_6))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        break;
    }
  }
  if (succeeded)
  {
    MR_String PragmaName_9;
    MR_String InferredDetismStr_10;
    MR_Word Context_11;
    MR_Word MainPieces_12;
    MR_Word Detisms_13;
    MR_Word DetismStrs_14;
    MR_Word SortedDetismStrs_15;
    MR_Word DetismPieces_16;
    MR_Word VerbosePieces_17;
    MR_Word ValidSpec_18;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_61;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_String Var_74;
    MR_Word Var_77;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Box conv2_Var_74;

    PragmaName_9 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_8);
    InferredDetismStr_10 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(InferredDetism_6);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_4, &Context_11);
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (PragmaName_9));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[49])));
    }
    Var_27 = parse_tree__error_spec__color_as_subject_1_f_0(Var_28);
    Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[53])));
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (InferredDetismStr_10));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[57])));
    }
    Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_52);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[55])), Var_50);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[51])), Var_39);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_34);
    MainPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[47])), Var_26);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__det_check_proc_scalar_common_3[0]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__det_check_proc__check_determinism_for_eval_method_3_p_0_2));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (TabledMethod_8));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), Var_61, &Detisms_13);
    DetismStrs_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_check_proc_scalar_common_4[0]), Detisms_13);
    mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetismStrs_14, &SortedDetismStrs_15);
    DetismPieces_16 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[57])), SortedDetismStrs_15);
    conv2_Var_74 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Detisms_13, ((MR_Box) ((MR_String) "determinism")), ((MR_Box) ((MR_String) "determinisms")));
    Var_74 = ((MR_String) (conv2_Var_74));
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[59])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (DetismPieces_16));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[58])));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
    }
    VerbosePieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])));
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_89, 0) = ((MR_Box) (MainPieces_12));
    }
    {
      Var_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_91, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(2, Var_91, 1) = ((MR_Box) (VerbosePieces_17));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_87, 0) = ((MR_Box) (Context_11));
      MR_hl_field(2, Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ValidSpec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ValidSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_determinism_for_eval_method\'/3"));
      MR_hl_field(2, ValidSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, ValidSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(2, ValidSpec_18, 3) = ((MR_Box) (Var_86));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ValidSpec_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
    }
  }
  else
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
}

static void MR_CALL 
check_hlds__det_check_proc__check_for_too_tight_or_loose_declared_determinism_7_p_0(
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word MaybeDetism_13;
  MR_Word InferredDetism_14;

  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_10, &MaybeDetism_13);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &InferredDetism_14);
  if ((MaybeDetism_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
    *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
  }
  else
  {
    MR_Word DeclaredDetism_15 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_13, 0))));
    MR_Word Cmp_16;

    parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_15, InferredDetism_14, &Cmp_16);
    switch (Cmp_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          MR_Word Goal_24;
          MR_Word VarTable_25;
          MR_Word InstMap0_26;
          MR_Word DetInfo0_27;
          MR_Word GoalMsgs_28;
          MR_Word DetInfo_29;
          MR_Word CseMsgs_30;
          MR_Word DetailMsgs_31;
          MR_Word ReasonPieces_32;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word ReportMsg_86;
          MR_Word ReportSpec_87;
          MR_Word CseNoPullContexts_91;
          MR_Word SortedCseNoPullContexts_92;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_10, &Goal_24);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &VarTable_25);
          hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, ProcInfo_10, &InstMap0_26);
          check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredProcId_8, VarTable_25, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_27);
          check_hlds__det_check_goal__det_diagnose_goal_get_msgs_6_p_0(InstMap0_26, DeclaredDetism_15, Goal_24, &GoalMsgs_28, DetInfo0_27, &DetInfo_29);
          check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_29, STATE_VARIABLE_ModuleInfo_38);
          hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(ProcInfo_10, &CseNoPullContexts_91);
          mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), CseNoPullContexts_91, &SortedCseNoPullContexts_92);
          if ((SortedCseNoPullContexts_92 == (MR_Word) ((MR_Unsigned) 0U)))
            CseMsgs_30 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word FirstNoPullContext_93 = ((MR_Word) ((MR_hl_field(1, SortedCseNoPullContexts_92, 0))));
            MR_Word Var_95;

            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_95, 0) = ((MR_Box) (FirstNoPullContext_93));
              MR_hl_field(0, Var_95, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[45])));
            }
            {
              CseMsgs_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CseMsgs_30, 0) = ((MR_Box) (Var_95));
              MR_hl_field(1, CseMsgs_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          DetailMsgs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), GoalMsgs_28, CseMsgs_30);
          if ((DetailMsgs_31 == (MR_Word) ((MR_Unsigned) 0U)))
            ReasonPieces_32 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, DetailMsgs_31, 1))));

            if ((Var_89 == (MR_Word) ((MR_Unsigned) 0U)))
              ReasonPieces_32 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[4]));
            else
              ReasonPieces_32 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[8]));
          }
          check_hlds__det_check_proc__report_determinism_problem_8_p_0(*STATE_VARIABLE_ModuleInfo_38, PredProcId_8, (MR_String) "Error", (MR_String) "is not satisfied", ReasonPieces_32, DeclaredDetism_15, InferredDetism_14, &ReportMsg_86);
          Var_84 = parse_tree__error_util__start_each_msg_with_blank_line_1_f_0(DetailMsgs_31);
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (ReportMsg_86));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            ReportSpec_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ReportSpec_87, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_for_too_tight_or_loose_declared_determinism\'/7"));
            MR_hl_field(2, ReportSpec_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, ReportSpec_87, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(2, ReportSpec_87, 3) = ((MR_Box) (Var_83));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_40 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ReportSpec_87));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Globals_17;
          MR_Word WarnDetDeclTooLax_18;
          MR_Word WarnInferredErroneous_19;
          MR_Word Markers_20;
          MR_Word Status_21;
          MR_Word Var_46;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &Globals_17);
          libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 172, &WarnDetDeclTooLax_18);
          libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 173, &WarnInferredErroneous_19);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_20);
          succeeded = (WarnDetDeclTooLax_18 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_43 = (MR_Integer) 13;
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_20, Var_43);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_44 = (MR_Integer) 0;
              succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_20, Var_44);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_45 = (MR_Integer) 5;
                succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_20, Var_45);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_9);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    switch (WarnInferredErroneous_19) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        succeeded = (InferredDetism_14 != (MR_Integer) 6);
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                    {
                      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_9, &Status_21);
                      Var_46 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_21);
                      succeeded = (Var_46 == (MR_Integer) 1);
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word ReportMsg_22;
            MR_Word ReportSpec_23;
            MR_Word Var_54;

            check_hlds__det_check_proc__report_determinism_problem_8_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredProcId_8, (MR_String) "Warning", (MR_String) "could be tighter", (MR_Word) ((MR_Unsigned) 0U), DeclaredDetism_15, InferredDetism_14, &ReportMsg_22);
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (ReportMsg_22));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ReportSpec_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ReportSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_proc.check_for_too_tight_or_loose_declared_determinism\'/7"));
              MR_hl_field(2, ReportSpec_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_2[0])));
              MR_hl_field(2, ReportSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 68U));
              MR_hl_field(2, ReportSpec_23, 3) = ((MR_Box) (Var_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_40 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ReportSpec_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
            }
          }
          else
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_check_proc__report_determinism_problem_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10,
  MR_String ErrorOrWarn_11,
  MR_String ProblemStr_12,
  MR_Word ReasonPieces_13,
  MR_Word DeclaredDetism_14,
  MR_Word InferredDetism_15,
  MR_Word * Msg_16)
{
  MR_Word ProcInfo_17;
  MR_Word DetismDecl_18;
  MR_Word Context_19;
  MR_Word ProcPieces_20;
  MR_String DeclaredStr_21;
  MR_String InferredStr_22;
  MR_Word DeclaredPieces_23;
  MR_Word InferredPieces_24;
  MR_Word Pieces_25;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_String Var_53;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_67;
  MR_Word Var_71;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_82;
  MR_Word Var_83;

  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_9, PredProcId_10, &ProcInfo_17);
  hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(ProcInfo_17, &DetismDecl_18);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_17, &Context_19);
  ProcPieces_20 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_9, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_2[4])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredProcId_10);
  DeclaredStr_21 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_14);
  InferredStr_22 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(InferredDetism_15);
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (DeclaredStr_21));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[129])));
  }
  DeclaredPieces_23 = parse_tree__error_spec__color_as_correct_1_f_0(Var_31);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (InferredStr_22));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[57])));
  }
  InferredPieces_24 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_37);
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (ErrorOrWarn_11));
  }
  switch (DetismDecl_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_53 = (MR_String) "determinism declaration";
      break;
    case (MR_Integer) 1:
      Var_53 = (MR_String) "implicit determinism declaration";
      break;
    case (MR_Integer) 2:
      Var_53 = (MR_String) "nonexistent determinism declaration";
      break;
  }
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[160])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[158])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_proc_scalar_common_1[59])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_62, 1) = ((MR_Box) (ProblemStr_12));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[57])));
  }
  Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_61);
  Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])), ReasonPieces_13);
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InferredPieces_24, Var_83);
  Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[164])), Var_82);
  Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DeclaredPieces_23, Var_77);
  Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[162])), Var_76);
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_proc_scalar_common_1[0])), Var_71);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_20, Var_59);
  Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_58);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Msg_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Pieces_25));
  }
}

void mercury__check_hlds__det_check_proc__init(void)
{
}

void mercury__check_hlds__det_check_proc__init_type_tables(void)
{
}

void mercury__check_hlds__det_check_proc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_check_proc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_check_proc.
